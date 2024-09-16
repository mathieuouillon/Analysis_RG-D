#pragma once

#include <string>
#include <optional>
#include <atomic>
#include <mutex>
#include <Math/VectorUtil.h>
#include <ROOT/TThreadedObject.hxx>

#include "hipo4/reader.h"
#include "Core/Particle.hpp"
#include "Matt_Study/Histograms.hpp"
#include "Matt_Study/Event.hpp"
#include "Matt_Study/Cuts.hpp"
#include "Core/Counter.hpp"

namespace Matt_Study {

    struct Topology {
        Core::Particle Electron;
        std::vector<Core::Particle> pionsPlus;
        std::vector<Core::Particle> pionsMinus;
    };

    class Reader {
        public:
            // ****** constructors and destructor
            Reader(Histograms &histograms, Counter &counter, const toml::parse_result &config);

            // ****** public methods
            auto operator()(const std::string &file) -> void;

        private:
            // ****** private members
            const toml::parse_result &config_;
            double beamEnergy = 10.5;
            Histograms &fHistograms;
            Counter &fCounter;

            // ****** private methods
            auto FindTopology(const hipo::bank &REC_Particle) -> std::optional<Topology>;
            auto ComputeEnergy(double px, double py, double pz, int pid) -> double;
    };

}

Matt_Study::Reader::Reader(Histograms &histograms, Counter &counter, const toml::parse_result &config) 
    : fHistograms(histograms), fCounter(counter), config_(config) {
    
}

auto Matt_Study::Reader::operator()(const std::string &file) -> void {
    auto dict       = hipo::dictionary();
    auto reader     = hipo::reader(file, dict);
    auto hipo_event = hipo::event();

    auto REC_Particle    = hipo::bank(dict.getSchema("REC::Particle"));

    while (reader.next(hipo_event, REC_Particle)) {
        if (REC_Particle.isEmpty()) continue;

        fCounter.nb_total_event++;
        auto topology = FindTopology(REC_Particle);
        if (!topology.has_value()) continue;
        const auto &[electron, pionsPlus, pionsMinus] = topology.value();

        // Count the number of events with a electron at least a pion+ and at least a pion-
        fCounter.nb_event_with_e_pp_pm++;

        constexpr double NaN = std::numeric_limits<double>::quiet_NaN();
        
        // --------------------------------------------------------------------------------------------
        // Electron : 
        // --------------------------------------------------------------------------------------------
        // Cuts ---------------------------------------------------------------------------------------
        const double vz_min_e    = config_["electron_kinematics"]["vz_min"].value_or(NaN);
        const double vz_max_e    = config_["electron_kinematics"]["vz_max"].value_or(NaN);
        const double chi2_min_e  = config_["electron_kinematics"]["chi2_min"].value_or(NaN);
        const double chi2_max_e  = config_["electron_kinematics"]["chi2_max"].value_or(NaN);
        //---------------------------------------------------------------------------------------------

        // Get variables for electrons kinematics to apply the cuts -----------------------------------
        const double p_e     = electron.P();
        const double chi2_e  = electron.ChiSquare();
        const double vz_e    = electron.Vz();
        const double phi_e   = electron.Phi();
        const double theta_e = electron.Theta();
        //---------------------------------------------------------------------------------------------

        // Cuts ---------------------------------------------------------------------------------------
        const bool cutChi2_e = chi2_min_e < chi2_e && chi2_e < chi2_max_e;
        const bool cutVz_e   = vz_min_e <= vz_e && vz_e <= vz_max_e;
        const bool cuts_e    = cutChi2_e && cutVz_e;
        // --------------------------------------------------------------------------------------------

        
        // Fill 1D histograms before cuts : -------------------------------------------------------
        fHistograms.electronKinematics.hist1D_p->Get()->Fill(p_e);
        fHistograms.electronKinematics.hist1D_phi->Get()->Fill(phi_e);
        fHistograms.electronKinematics.hist1D_theta->Get()->Fill(theta_e);
        fHistograms.electronKinematics.hist1D_vz->Get()->Fill(vz_e);
        fHistograms.electronKinematics.hist1D_chi2->Get()->Fill(chi2_e);
        // ----------------------------------------------------------------------------------------

        // Fill 1D histograms after cuts: -------------------------------------------------------------------
        if (cutChi2_e) fHistograms.electronKinematics.hist1D_vz_cut->Get()->Fill(vz_e);
        if (cutVz_e) fHistograms.electronKinematics.hist1D_chi2_cut->Get()->Fill(chi2_e);

        if (cuts_e) 
        {
            fCounter.nb_e++;  
            fCounter.nb_good_electron_event++;

            fHistograms.electronKinematics.hist1D_p_cut->Get()->Fill(p_e);
            fHistograms.electronKinematics.hist1D_phi_cut->Get()->Fill(phi_e);
            fHistograms.electronKinematics.hist1D_theta_cut->Get()->Fill(theta_e);
        }
        // --------------------------------------------------------------------------------------------

        if (!cuts_e) continue;

        
        


        std::vector<Core::Particle> good_pionsPlus;
        std::vector<Core::Particle> good_pionsMinus;

        // --------------------------------------------------------------------------------------------
        // pion + : 
        // --------------------------------------------------------------------------------------------
        for (auto pionPlus : pionsPlus) {
            // Cuts ---------------------------------------------------------------------------------------
            const double chi2_min_pionPlus  = config_["pion_plus_kinematics"]["chi2_min"].value_or(NaN);
            const double chi2_max_pionPlus  = config_["pion_plus_kinematics"]["chi2_max"].value_or(NaN);
            //---------------------------------------------------------------------------------------------

            // Get variables for electrons kinematics to apply the cuts -----------------------------------
            const double p     = pionPlus.P();
            const double chi2_pionPlus  = pionPlus.ChiSquare();
            const double vz    = pionPlus.Vz();
            const double phi   = pionPlus.Phi();
            const double theta = pionPlus.Theta();
            //---------------------------------------------------------------------------------------------

            // Cuts ---------------------------------------------------------------------------------------
            const bool cutChi2_pionPlus = chi2_min_pionPlus < chi2_pionPlus && chi2_pionPlus < chi2_max_pionPlus;
            const bool cuts    = cutChi2_pionPlus;
            // --------------------------------------------------------------------------------------------
            
            // Counter : 
            fCounter.nb_pion_plus++;
            if (cuts)
            {
                fCounter.nb_pion_plus_pass_chi2++;
            }
            else 
            {
                fCounter.nb_pion_plus_not_pass_chi2++;
            }
            

            fHistograms.allPionPlusKinematics.hist1D_p->Get()->Fill(pionPlus.P());
            fHistograms.allPionPlusKinematics.hist1D_phi->Get()->Fill(pionPlus.Phi());
            fHistograms.allPionPlusKinematics.hist1D_theta->Get()->Fill(pionPlus.Theta());
            fHistograms.allPionPlusKinematics.hist1D_vz->Get()->Fill(pionPlus.Vz());
            fHistograms.allPionPlusKinematics.hist1D_chi2->Get()->Fill(pionPlus.ChiSquare());

            if(pionPlus.StatusCode()/2000 == 1) {
                fCounter.nb_pion_plus_forward++;
                fHistograms.forwardPionPlusKinematics.hist1D_p->Get()->Fill(pionPlus.P());
                fHistograms.forwardPionPlusKinematics.hist1D_phi->Get()->Fill(pionPlus.Phi());
                fHistograms.forwardPionPlusKinematics.hist1D_theta->Get()->Fill(pionPlus.Theta());
                fHistograms.forwardPionPlusKinematics.hist1D_vz->Get()->Fill(pionPlus.Vz());
                fHistograms.forwardPionPlusKinematics.hist1D_chi2->Get()->Fill(pionPlus.ChiSquare());
            }
            if(pionPlus.StatusCode()/4000 == 1) {
                fCounter.nb_pion_plus_central++;
                fHistograms.centralPionPlusKinematics.hist1D_p->Get()->Fill(pionPlus.P());
                fHistograms.centralPionPlusKinematics.hist1D_phi->Get()->Fill(pionPlus.Phi());
                fHistograms.centralPionPlusKinematics.hist1D_theta->Get()->Fill(pionPlus.Theta());
                fHistograms.centralPionPlusKinematics.hist1D_vz->Get()->Fill(pionPlus.Vz());
                fHistograms.centralPionPlusKinematics.hist1D_chi2->Get()->Fill(pionPlus.ChiSquare());
            }
            
            fHistograms.allPionPlusKinematics.hist1D_chi2_cut->Get()->Fill(pionPlus.ChiSquare());
            if (cuts) {
                fHistograms.allPionPlusKinematics.hist1D_p_cut->Get()->Fill(pionPlus.P());
                fHistograms.allPionPlusKinematics.hist1D_phi_cut->Get()->Fill(pionPlus.Phi());
                fHistograms.allPionPlusKinematics.hist1D_theta_cut->Get()->Fill(pionPlus.Theta());
                fHistograms.allPionPlusKinematics.hist1D_vz_cut->Get()->Fill(pionPlus.Vz());
            }

            if (!cuts) continue;
            
            fCounter.nb_good_pion_plus++;
            good_pionsPlus.push_back(pionPlus);
            
        }

        // --------------------------------------------------------------------------------------------
        // pion - : 
        // --------------------------------------------------------------------------------------------
        for (auto pionMinus : pionsMinus) {
            // Cuts ---------------------------------------------------------------------------------------
            const double chi2_min  = config_["pion_minus_kinematics"]["chi2_min"].value_or(NaN);
            const double chi2_max  = config_["pion_minus_kinematics"]["chi2_max"].value_or(NaN);
            //---------------------------------------------------------------------------------------------


            // Get variables for electrons kinematics to apply the cuts -----------------------------------
            const double p     = pionMinus.P();
            const double chi2  = pionMinus.ChiSquare();
            const double vz    = pionMinus.Vz();
            const double phi   = pionMinus.Phi();
            const double theta = pionMinus.Theta();
            //---------------------------------------------------------------------------------------------

            // Cuts ---------------------------------------------------------------------------------------
            const bool cutChi2 = chi2_min < chi2 && chi2 < chi2_max;
            const bool cuts    = cutChi2;
            // --------------------------------------------------------------------------------------------

            // Counter : 
            fCounter.nb_pion_minus++;
            if (cuts)
            {
                fCounter.nb_pion_minus_pass_chi2++;
            }
            else 
            {
                fCounter.nb_pion_minus_not_pass_chi2++;
            }
            
             
                if(pionMinus.StatusCode()/2000 == 1) {
                    fCounter.nb_pion_minus_forward++;
                    fHistograms.forwardPionMinusKinematics.hist1D_p->Get()->Fill(pionMinus.P());
                    fHistograms.forwardPionMinusKinematics.hist1D_phi->Get()->Fill(pionMinus.Phi());
                    fHistograms.forwardPionMinusKinematics.hist1D_theta->Get()->Fill(pionMinus.Theta());
                    fHistograms.forwardPionMinusKinematics.hist1D_vz->Get()->Fill(pionMinus.Vz());
                    fHistograms.forwardPionMinusKinematics.hist1D_chi2->Get()->Fill(pionMinus.ChiSquare());
                }
                if(pionMinus.StatusCode()/4000 == 1) {
                    fCounter.nb_pion_minus_central++;
                    fHistograms.centralPionMinusKinematics.hist1D_p->Get()->Fill(pionMinus.P());
                    fHistograms.centralPionMinusKinematics.hist1D_phi->Get()->Fill(pionMinus.Phi());
                    fHistograms.centralPionMinusKinematics.hist1D_theta->Get()->Fill(pionMinus.Theta());
                    fHistograms.centralPionMinusKinematics.hist1D_vz->Get()->Fill(pionMinus.Vz());
                    fHistograms.centralPionMinusKinematics.hist1D_chi2->Get()->Fill(pionMinus.ChiSquare());
                }

                fHistograms.allPionMinusKinematics.hist1D_p->Get()->Fill(pionMinus.P());
                fHistograms.allPionMinusKinematics.hist1D_phi->Get()->Fill(pionMinus.Phi());
                fHistograms.allPionMinusKinematics.hist1D_theta->Get()->Fill(pionMinus.Theta());
                fHistograms.allPionMinusKinematics.hist1D_vz->Get()->Fill(pionMinus.Vz());
                fHistograms.allPionMinusKinematics.hist1D_chi2->Get()->Fill(pionMinus.ChiSquare());

                fHistograms.allPionMinusKinematics.hist1D_chi2_cut->Get()->Fill(pionMinus.ChiSquare());
            if (cuts) {
                fHistograms.allPionMinusKinematics.hist1D_p_cut->Get()->Fill(pionMinus.P());
                fHistograms.allPionMinusKinematics.hist1D_phi_cut->Get()->Fill(pionMinus.Phi());
                fHistograms.allPionMinusKinematics.hist1D_theta_cut->Get()->Fill(pionMinus.Theta());
                fHistograms.allPionMinusKinematics.hist1D_vz_cut->Get()->Fill(pionMinus.Vz());
            }

            if (!cuts) continue;
                fCounter.nb_good_minus_plus++;
                good_pionsMinus.push_back(pionMinus);
            
        }

        if (good_pionsMinus.size() < 1 || good_pionsPlus.size() < 1) continue;

        std::vector<std::pair<Core::Particle, Core::Particle>> all_combinaison;
        for (auto pionPlus : good_pionsPlus) {
            for (auto pionMinus : good_pionsMinus) {
                all_combinaison.emplace_back(std::pair(pionPlus, pionMinus));
            }
        }

        for (auto &[pionPlus, pionMinus] : all_combinaison) {
            double invMass = ROOT::Math::VectorUtil::InvariantMass(pionPlus.PxPyPzEVector(), pionMinus.PxPyPzEVector());
            fHistograms.rhoKinematics.hist1D_invMass->Get()->Fill(invMass);

            fCounter.nb_good_rho0++;

        // Cuts ---------------------------------------------------------------------------------------
        const double W_min  = config_["invariants"]["W"].value_or(NaN);
        const double zh_min  = config_["invariants"]["zh"].value_or(NaN);
        const double t_min  = config_["invariants"]["t_min"].value_or(NaN);
        const double t_max  = config_["invariants"]["t_max"].value_or(NaN);
        const double lc_max  = config_["invariants"]["lc"].value_or(NaN);
        //---------------------------------------------------------------------------------------------


            Event event(electron, pionPlus, pionMinus, beamEnergy);

            fHistograms.eventKinematics.hist1D_W->Get()->Fill(event.W());
            fHistograms.eventKinematics.hist1D_Q2->Get()->Fill(event.Q2());
            fHistograms.eventKinematics.hist1D_nu->Get()->Fill(event.nu());
            fHistograms.eventKinematics.hist1D_zh->Get()->Fill(event.Zh());
            fHistograms.eventKinematics.hist1D_t->Get()->Fill(-event.T());
            fHistograms.eventKinematics.hist1D_lc->Get()->Fill(event.Lc());

            // Cuts ---------------------------------------------------------------------------------------
            const bool cut_w = event.W() > W_min;
            const bool cut_zh = event.Zh() > zh_min;
            const bool cut_t = t_min < -event.T() && -event.T() < t_max;
            const bool cut_lc = event.Lc() <= lc_max;

            const bool cuts = cut_w && cut_zh && cut_t && cut_lc;
            // --------------------------------------------------------------------------------------------

            if (cut_zh && cut_t && cut_lc)
            {
                    fHistograms.eventKinematics.hist1D_W_cut->Get()->Fill(event.W());
            }
            if (cut_w &&  cut_t && cut_lc)
            {
                    fHistograms.eventKinematics.hist1D_zh_cut->Get()->Fill(event.Zh());
            }
            if (cut_w && cut_zh &&  cut_lc)
            {
                    fHistograms.eventKinematics.hist1D_t_cut->Get()->Fill(-event.T());
            }
            if (cut_w && cut_zh && cut_t )
            {
                    fHistograms.eventKinematics.hist1D_lc_cut->Get()->Fill(event.Lc());
            }

            if (cut_w)
            {
                fCounter.nb_good_rho0_W++;
                if (cut_zh) 
                {
                    fCounter.nb_good_rho0_W_zh++;
                    if(cut_t) 
                    {
                        fCounter.nb_good_rho0_W_zh_t++;
                        if(cut_lc) 
                        {
                            fCounter.nb_good_rho0_W_zh_t_lc++;
                        }
                        if(event.Q2() > 1) 
                        {
                            fCounter.nb_good_rho0_W_zh_t_Q2++;
                        }
                    }
                } 
            }
             

            
            if(cuts) {
                    fHistograms.eventKinematics.hist1D_nu_cut->Get()->Fill(event.nu());
                    fHistograms.eventKinematics.hist1D_Q2_cut->Get()->Fill(event.Q2());

                            if (1 <= event.Q2() && event.Q2() < 2) 
                                fHistograms.q2Bins.hist1D_inv_Mass_Q12->Get()->Fill(invMass);
                            if (2 <= event.Q2() && event.Q2() < 2.5) 
                                fHistograms.q2Bins.hist1D_inv_Mass_Q225->Get()->Fill(invMass);
                            if (2.5 <= event.Q2() && event.Q2() < 3)
                                fHistograms.q2Bins.hist1D_inv_Mass_Q253->Get()->Fill(invMass);
                            if (3 <= event.Q2() && event.Q2() < 3.5)
                                fHistograms.q2Bins.hist1D_inv_Mass_Q335->Get()->Fill(invMass);
                            if (3.5 <= event.Q2() && event.Q2() < 4.5)
                                fHistograms.q2Bins.hist1D_inv_Mass_Q3545->Get()->Fill(invMass);
                            if (4.5 <= event.Q2() && event.Q2() < 6)
                                fHistograms.q2Bins.hist1D_inv_Mass_Q456->Get()->Fill(invMass);

                        }
                    }
                    
                

            
        
        
    }
}

auto Matt_Study::Reader::FindTopology(const hipo::bank &REC_Particle) -> std::optional<Topology> {
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
    
    //if (!(pionsPlus.size() > 0 && pionsMinus.size() > 0)) return std::nullopt;
    if (pionsPlus.size() < 1 && pionsMinus.size() < 1) return std::nullopt;

    return Topology{electron, pionsPlus, pionsMinus};

}

auto Matt_Study::Reader::ComputeEnergy(double px, double py, double pz, int pid) -> double {
    double mass = std::numeric_limits<double>::quiet_NaN();
    if (pid == 11) mass = Core::Constantes::ElectronMass;
    if (pid == 22) mass = 0.;
    if (pid == 211 || pid == -211) mass = Core::Constantes::PionMass;
    return std::hypot(std::hypot(px, py, pz), mass);
}

