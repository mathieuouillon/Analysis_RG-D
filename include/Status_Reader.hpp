#pragma once 

#include "Status_Histograms.hpp"

namespace Status_study {

        class Reader {
        public:
            // ****** constructors and destructor
            Reader(Status_study::Histograms &histograms, Counter &counter);

            // ****** public methods
            auto operator()(const std::string &file) -> void;

        private:
            // ****** private members
            double beamEnergy = 10.6;
            Histograms &fHistograms;
            Counter &fCounter;

            // ****** private methods
            auto ComputeEnergy(double px, double py, double pz, int pid) -> double;
    };


}

Status_study::Reader::Reader(Histograms &histograms, Counter &counter) : fHistograms(histograms), fCounter(counter) {}

auto Status_study::Reader::operator()(const std::string &file) -> void {
    auto dict       = hipo::dictionary();
    auto reader     = hipo::reader(file, dict);
    auto hipo_event = hipo::event();

    auto REC_Particle    = hipo::bank(dict.getSchema("REC::Particle"));

    while (reader.next(hipo_event, REC_Particle)) {
        if (REC_Particle.isEmpty()) continue;


        // Check if electron is present : 
        bool electron_is_present = false;
        for (int i = 0; i < REC_Particle.getRows(); i++) {
            int pid = REC_Particle.get<int>("pid", i);
            if (pid == 11) electron_is_present = true;
        }
        if (!electron_is_present) continue;


        // Find the trigger electron using pid and negative status and save it : 
        Core::Particle electron_neg_status;
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
                electron_neg_status = Core::Particle(pid, status, i, px, py, pz, E, vx, vy, vz, vt, beta, chiSquare);   
        }

        // if (-3 < electron_neg_status.ChiSquare() && electron_neg_status.ChiSquare() < 3) {

            if(electron_neg_status.PdgCode() == 0) continue;
            fCounter.nb_e_neg_status++;

            fHistograms.electron_neg_status.hist1D_p->Get()->Fill(electron_neg_status.P());
            fHistograms.electron_neg_status.hist1D_phi->Get()->Fill(electron_neg_status.Phi());
            fHistograms.electron_neg_status.hist1D_theta->Get()->Fill(electron_neg_status.Theta());
            fHistograms.electron_neg_status.hist1D_vz->Get()->Fill(electron_neg_status.Vz());
            fHistograms.electron_neg_status.hist1D_chi2->Get()->Fill(electron_neg_status.ChiSquare());
            fHistograms.electron_neg_status.hist1D_status->Get()->Fill(electron_neg_status.StatusCode());
        // }
    }


    auto dict2       = hipo::dictionary();
    auto reader2     = hipo::reader(file, dict2);
    auto hipo_event2 = hipo::event();

    auto REC_Particle2 = hipo::bank(dict2.getSchema("REC::Particle"));


    while (reader2.next(hipo_event2, REC_Particle2)) {
        if (REC_Particle2.isEmpty()) continue;

        // Check if electron is present : 
        bool electron_is_present = false;
        for (int i = 0; i < REC_Particle2.getRows(); i++) {
            int pid = REC_Particle2.get<int>("pid", i);
            if (pid == 11) electron_is_present = true;
        }
        if (!electron_is_present) continue;

        
        // Find the trigger electron using pid and abs(status) = 2000 + max energy and save it : 
        std::vector<Core::Particle> electrons_with_status_2000;
        for (int i = 0; i < REC_Particle2.getRows(); i++) {
            int pid = REC_Particle2.get<int>("pid", i);
            int status = REC_Particle2.get<int>("status", i);

            double px = REC_Particle2.get<double>("px", i);
            double py = REC_Particle2.get<double>("py", i);
            double pz = REC_Particle2.get<double>("pz", i);
            double vx = REC_Particle2.get<double>("vx", i);
            double vy = REC_Particle2.get<double>("vy", i);
            double vz = REC_Particle2.get<double>("vz", i);
            double vt = REC_Particle2.get<double>("vt", i);
            double beta = REC_Particle2.get<double>("beta", i);
            double chiSquare = REC_Particle2.get<double>("chi2pid", i);
            double E = ComputeEnergy(px, py, pz, pid);

            if (pid == 11 && std::abs(status)/2000 == 1) 
                electrons_with_status_2000.emplace_back(Core::Particle(pid, status, i, px, py, pz, E, vx, vy, vz, vt, beta, chiSquare));   
        }

        // Find most energetic electron :
        Core::Particle electron_with_status_2000 = std::ranges::max(electrons_with_status_2000, [](const auto &a, const auto &b) { return a.Energy() < b.Energy(); });
        
        // Cut on chi2 electron
        // if (-3 < electron_with_status_2000.ChiSquare() && electron_with_status_2000.ChiSquare() < 3) {

            if(electron_with_status_2000.PdgCode() == 0) continue;
            fCounter.nb_e_status_2000++;
            
            fHistograms.electron_status_2000.hist1D_p->Get()->Fill(electron_with_status_2000.P());
            fHistograms.electron_status_2000.hist1D_phi->Get()->Fill(electron_with_status_2000.Phi());
            fHistograms.electron_status_2000.hist1D_theta->Get()->Fill(electron_with_status_2000.Theta());
            fHistograms.electron_status_2000.hist1D_vz->Get()->Fill(electron_with_status_2000.Vz());
            fHistograms.electron_status_2000.hist1D_chi2->Get()->Fill(electron_with_status_2000.ChiSquare());
            fHistograms.electron_status_2000.hist1D_status->Get()->Fill(electron_with_status_2000.StatusCode());
        // }

        // if (electron_with_status_2000.StatusCode() > 0) std::cout << "status : " << electron_with_status_2000.StatusCode() << std::endl;
    }
}


auto Status_study::Reader::ComputeEnergy(double px, double py, double pz, int pid) -> double {
    double mass = std::numeric_limits<double>::quiet_NaN();
    if (pid == 11) mass = Core::Constantes::ElectronMass;
    if (pid == 22) mass = 0.;
    if (pid == 211 || pid == -211) mass = Core::Constantes::PionMass;
    return std::hypot(std::hypot(px, py, pz), mass);
}
