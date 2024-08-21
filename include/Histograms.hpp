#pragma once

#include <ROOT/TThreadedObject.hxx>
#include <TH1.h>
#include <TH2.h>

using TTO_TH1F    = ROOT::TThreadedObject<TH1F>;
using TTO_TH2F    = ROOT::TThreadedObject<TH2F>;
using up_TTO_TH1F = const std::unique_ptr<TTO_TH1F>;
using up_TTO_TH2F = const std::unique_ptr<TTO_TH2F>;


struct ElectronKinematics {
    static constexpr int nbBins1D = 50;

    up_TTO_TH1F hist1D_p = std::make_unique<TTO_TH1F>("p_e", "", nbBins1D, 0, 11);
    up_TTO_TH1F hist1D_phi = std::make_unique<TTO_TH1F>("phi_e", "", nbBins1D, -190, 190);
    up_TTO_TH1F hist1D_theta = std::make_unique<TTO_TH1F>("theta_e", "", nbBins1D, 0, 35);
    up_TTO_TH1F hist1D_chi2 = std::make_unique<TTO_TH1F>("chi2_e", "", nbBins1D, -6, 6);
    up_TTO_TH1F hist1D_vz = std::make_unique<TTO_TH1F>("vz_e", "", nbBins1D, -20, 20);
};

struct AllPionPlusKinematics {
    static constexpr int nbBins1D = 50;

    up_TTO_TH1F hist1D_p = std::make_unique<TTO_TH1F>("p_e", "", nbBins1D, 0, 11);
    up_TTO_TH1F hist1D_phi = std::make_unique<TTO_TH1F>("phi_e", "", nbBins1D, -190, 190);
    up_TTO_TH1F hist1D_theta = std::make_unique<TTO_TH1F>("theta_e", "", nbBins1D, 0, 180);
    up_TTO_TH1F hist1D_chi2 = std::make_unique<TTO_TH1F>("chi2_e", "", nbBins1D, -15, 15);
    up_TTO_TH1F hist1D_vz = std::make_unique<TTO_TH1F>("vz_e", "", nbBins1D, -20, 20);
};

struct AllPionMinusKinematics {
    static constexpr int nbBins1D = 50;

    up_TTO_TH1F hist1D_p = std::make_unique<TTO_TH1F>("p_e", "", nbBins1D, 0, 11);
    up_TTO_TH1F hist1D_phi = std::make_unique<TTO_TH1F>("phi_e", "", nbBins1D, -190, 190);
    up_TTO_TH1F hist1D_theta = std::make_unique<TTO_TH1F>("theta_e", "", nbBins1D, 0, 180);
    up_TTO_TH1F hist1D_chi2 = std::make_unique<TTO_TH1F>("chi2_e", "", nbBins1D, -15, 15);
    up_TTO_TH1F hist1D_vz = std::make_unique<TTO_TH1F>("vz_e", "", nbBins1D, -20, 20);
};

struct RhoKinematics {
    static constexpr int nbBins1D = 100;
    
    up_TTO_TH1F hist1D_invMass = std::make_unique<TTO_TH1F>("inv Mass", "", nbBins1D, 0.25, 1.5);

    up_TTO_TH1F hist1D_p = std::make_unique<TTO_TH1F>("p_e", "", nbBins1D, 0, 11);
    up_TTO_TH1F hist1D_phi = std::make_unique<TTO_TH1F>("phi_e", "", nbBins1D, -190, 190);
    up_TTO_TH1F hist1D_theta = std::make_unique<TTO_TH1F>("theta_e", "", nbBins1D, 0, 35);
    up_TTO_TH1F hist1D_chi2 = std::make_unique<TTO_TH1F>("chi2_e", "", nbBins1D, -6, 6);
    up_TTO_TH1F hist1D_vz = std::make_unique<TTO_TH1F>("vz_e", "", nbBins1D, -45, 45);
};

struct Histograms {
        ElectronKinematics electronKinematics;
        AllPionPlusKinematics allPionPlusKinematics;
        AllPionMinusKinematics allPionMinusKinematics;
        RhoKinematics rhoKinematics;
    };


