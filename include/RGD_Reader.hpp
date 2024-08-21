#pragma once

#include <string>
#include <optional>
#include <atomic>
#include <mutex>
#include <Math/VectorUtil.h>
#include <ROOT/TThreadedObject.hxx>

#include "hipo4/reader.h"
#include "Particle.hpp"
#include "Histograms.hpp"
#include "Event.hpp"
#include "Counter.hpp"

namespace RGD {

    struct Topology {
        Core::Particle Electron;
        std::vector<Core::Particle> pionsPlus;
        std::vector<Core::Particle> pionsMinus;
    };

    class Reader {
        public:
            // ****** constructors and destructor
            Reader(Histograms &histograms, Counter &counter);

            // ****** public methods
            auto operator()(const std::string &file) -> void;

        private:
            // ****** private members
            double beamEnergy = 10.6;
            Histograms &fHistograms;
            Counter &fCounter;

            // ****** private methods
            auto FindTopology(const hipo::bank &REC_Particle) -> std::optional<Topology>;
            auto ComputeEnergy(double px, double py, double pz, int pid) -> double;
    };

}

RGD::Reader::Reader(Histograms &histograms, Counter &counter) : fHistograms(histograms), fCounter(counter) {}

auto RGD::Reader::operator()(const std::string &file) -> void {
    auto dict       = hipo::dictionary();
    auto reader     = hipo::reader(file, dict);
    auto hipo_event = hipo::event();

    auto REC_Particle    = hipo::bank(dict.getSchema("REC::Particle"));

    while (reader.next(hipo_event, REC_Particle)) {
        if (REC_Particle.isEmpty()) continue;

        auto topology = FindTopology(REC_Particle);
        if (!topology.has_value()) continue;
        const auto &[electron, pionsPlus, pionsMinus] = topology.value();

        if (-20 <= electron.Vz() && electron.Vz() <= 20) {

            fCounter.nb_e++;
            // Electron kinematics
            fHistograms.electronKinematics.hist1D_p->Get()->Fill(electron.P());
            fHistograms.electronKinematics.hist1D_phi->Get()->Fill(electron.Phi());
            fHistograms.electronKinematics.hist1D_theta->Get()->Fill(electron.Theta());
            fHistograms.electronKinematics.hist1D_vz->Get()->Fill(electron.Vz());
            fHistograms.electronKinematics.hist1D_chi2->Get()->Fill(electron.ChiSquare());

            // Pion + kinematics
            for (auto &pionPlus : pionsPlus) {
                fCounter.nb_pion_plus++;
                fHistograms.allPionPlusKinematics.hist1D_p->Get()->Fill(pionPlus.P());
                fHistograms.allPionPlusKinematics.hist1D_phi->Get()->Fill(pionPlus.Phi());
                fHistograms.allPionPlusKinematics.hist1D_theta->Get()->Fill(pionPlus.Theta());
                fHistograms.allPionPlusKinematics.hist1D_vz->Get()->Fill(pionPlus.Vz());
                fHistograms.allPionPlusKinematics.hist1D_chi2->Get()->Fill(pionPlus.ChiSquare());
            }

            // Pion - kinematics
            for (auto &pionMinus : pionsMinus) {
                fCounter.nb_pion_minus++;
                fHistograms.allPionMinusKinematics.hist1D_p->Get()->Fill(pionMinus.P());
                fHistograms.allPionMinusKinematics.hist1D_phi->Get()->Fill(pionMinus.Phi());
                fHistograms.allPionMinusKinematics.hist1D_theta->Get()->Fill(pionMinus.Theta());
                fHistograms.allPionMinusKinematics.hist1D_vz->Get()->Fill(pionMinus.Vz());
                fHistograms.allPionMinusKinematics.hist1D_chi2->Get()->Fill(pionMinus.ChiSquare());
            }

            std::vector<std::pair<Core::Particle, Core::Particle>> all_combinaison;
            for (auto pionPlus : pionsPlus) {
                for (auto pionMinus : pionsMinus) {
                    all_combinaison.emplace_back(std::pair(pionPlus, pionMinus));
                }
            }

            for (auto &[pionPlus, pionMinus] : all_combinaison) {
                double invMass = ROOT::Math::VectorUtil::InvariantMass(pionPlus.PxPyPzEVector(), pionMinus.PxPyPzEVector());
                fHistograms.rhoKinematics.hist1D_invMass->Get()->Fill(invMass);


                Event event(electron, pionPlus, pionMinus, beamEnergy);

                if(event.W2() > 4) {
                    if(event.Zh() > 0.9) {
                        if (0.1 < -event.T() && -event.T() < 0.5) {
                            if(event.Lc() <= 0.5) {



                            }
                        }
                    }
                } 

            }
        }
        
    }
}

auto RGD::Reader::FindTopology(const hipo::bank &REC_Particle) -> std::optional<Topology> {
    std::vector<int> pids = REC_Particle.get<int>("pid");
    bool electronFind = std::ranges::find(pids, 11) != pids.end();
    bool pionPlusFind = std::ranges::find(pids, 211) != pids.end();
    bool pionMinusFind = std::ranges::find(pids, -211) != pids.end();

    if (!electronFind || !pionPlusFind || !pionMinusFind) return std::nullopt;

    Core::Particle electron;
    std::vector<Core::Particle> pionsPlus;
    std::vector<Core::Particle> pionsMinus;

    for (int i = 0; i < REC_Particle.getRows(); i++) {
        int pid = REC_Particle.get<int>("pid", i);
        int status = REC_Particle.get<int>("status", i);

        double px = REC_Particle.get<double>("px", i);
        double py = REC_Particle.get<double>("py", i);
        double pz = REC_Particle.get<double>("pz", i);
        double vx = REC_Particle.get<double>("vx", i);
        double vy = REC_Particle.get<double>("vy", i);
        double vz = REC_Particle.get<double>("vz", i);
        double vt = REC_Particle.get<double>("vt", i);
        double beta = REC_Particle.get<double>("beta", i);
        double chiSquare = REC_Particle.get<double>("chi2pid", i);
        double E = ComputeEnergy(px, py, pz, pid);

        if (pid == 11 && status < 0) 
            electron = Core::Particle(pid, status, i, px, py, pz, E, vx, vy, vz, vt, beta, chiSquare);
        if (pid == 211) pionsPlus.emplace_back(pid, status, i, px, py, pz, E, vx, vy, vz, vt, beta, chiSquare);
        if (pid == -211) pionsMinus.emplace_back(pid, status, i, px, py, pz, E, vx, vy, vz, vt, beta, chiSquare);
    }

    if(electron.PdgCode() == 0) return std::nullopt;
    if (pionsPlus.size() < 1 && pionsMinus.size() < 1) return std::nullopt;

    return Topology{electron, pionsPlus, pionsMinus};

}

auto RGD::Reader::ComputeEnergy(double px, double py, double pz, int pid) -> double {
    double mass = std::numeric_limits<double>::quiet_NaN();
    if (pid == 11) mass = Core::Constantes::ElectronMass;
    if (pid == 22) mass = 0.;
    if (pid == 211 || pid == -211) mass = Core::Constantes::PionMass;
    return std::hypot(std::hypot(px, py, pz), mass);
}





/*

// Check if electron is present : 
        bool electronPresent = false;
        for (int i = 0; i < REC_Particle.getRows(); i++) {
            int pid = REC_Particle.get<int>("pid", i);
            if (pid == 11) electronPresent = true;
        }
        if (!electronPresent) continue;

        // Check if pion+ is present : 
        bool pion_plus_present = false;
        for (int i = 0; i < REC_Particle.getRows(); i++) {
            int pid = REC_Particle.get<int>("pid", i);
            if (pid == 211) pion_plus_present = true;
        }
        if (!pion_plus_present) continue;


        // Check if pion- is present : 
        bool pion_minus_present = false;
        for (int i = 0; i < REC_Particle.getRows(); i++) {
            int pid = REC_Particle.get<int>("pid", i);
            if (pid == -211) pion_minus_present = true;
        }
        if (!pion_minus_present) continue;

        // Find the trigger electron and save it : 
        Core::Particle electron;
        for (int i = 0; i < REC_Particle.getRows(); i++) {
            int pid = REC_Particle.get<int>("pid", i);
            int status = REC_Particle.get<int>("status", i);

            double px = REC_Particle.get<double>("px", i);
            double py = REC_Particle.get<double>("py", i);
            double pz = REC_Particle.get<double>("pz", i);
            double vx = REC_Particle.get<double>("vx", i);
            double vy = REC_Particle.get<double>("vy", i);
            double vz = REC_Particle.get<double>("vz", i);
            double vt = REC_Particle.get<double>("vt", i);
            double beta = REC_Particle.get<double>("beta", i);
            double chiSquare = REC_Particle.get<double>("chi2pid", i);
            double E = ComputeEnergy(px, py, pz, pid);

            if (pid == 11 && status < 0) electron = Core::Particle(pid, status, i, px, py, pz, E, vx, vy, vz, vt, beta, chiSquare);   
        }

        if(electron.PdgCode() == 0) continue;

        // Find all pion plus and save them : 
        std::vector<Core::Particle> pionsPlus;
        for (int i = 0; i < REC_Particle.getRows(); i++) {
            int pid = REC_Particle.get<int>("pid", i);
            int status = REC_Particle.get<int>("status", i);

            double px = REC_Particle.get<double>("px", i);
            double py = REC_Particle.get<double>("py", i);
            double pz = REC_Particle.get<double>("pz", i);
            double vx = REC_Particle.get<double>("vx", i);
            double vy = REC_Particle.get<double>("vy", i);
            double vz = REC_Particle.get<double>("vz", i);
            double vt = REC_Particle.get<double>("vt", i);
            double beta = REC_Particle.get<double>("beta", i);
            double chiSquare = REC_Particle.get<double>("chi2pid", i);
            double E = ComputeEnergy(px, py, pz, pid);
            if (pid == 211) pionsPlus.emplace_back(pid, status, i, px, py, pz, E, vx, vy, vz, vt, beta, chiSquare);
        }

        // Find all pion minus and save them : 
        std::vector<Core::Particle> pionsMinus;
        for (int i = 0; i < REC_Particle.getRows(); i++) {
            int pid = REC_Particle.get<int>("pid", i);
            int status = REC_Particle.get<int>("status", i);

            double px = REC_Particle.get<double>("px", i);
            double py = REC_Particle.get<double>("py", i);
            double pz = REC_Particle.get<double>("pz", i);
            double vx = REC_Particle.get<double>("vx", i);
            double vy = REC_Particle.get<double>("vy", i);
            double vz = REC_Particle.get<double>("vz", i);
            double vt = REC_Particle.get<double>("vt", i);
            double beta = REC_Particle.get<double>("beta", i);
            double chiSquare = REC_Particle.get<double>("chi2pid", i);
            double E = ComputeEnergy(px, py, pz, pid);
            if (pid == -211) pionsMinus.emplace_back(pid, status, i, px, py, pz, E, vx, vy, vz, vt, beta, chiSquare);
        }
        if (pionsPlus.size() < 1 && pionsMinus.size() < 1) continue;

        if (-20 <= electron.Vz() && electron.Vz() <= 20) {
            fCounter.nb_e++;
        }


*/
