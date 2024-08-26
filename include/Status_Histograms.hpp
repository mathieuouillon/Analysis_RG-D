#pragma once

#include <ROOT/TThreadedObject.hxx>
#include <TH1.h>
#include <TH2.h>

using TTO_TH1F    = ROOT::TThreadedObject<TH1F>;
using TTO_TH2F    = ROOT::TThreadedObject<TH2F>;
using up_TTO_TH1F = const std::unique_ptr<TTO_TH1F>;
using up_TTO_TH2F = const std::unique_ptr<TTO_TH2F>;

namespace Status_study {

    struct Electron{
        static constexpr int nbBins1D = 200;

        up_TTO_TH1F hist1D_p = std::make_unique<TTO_TH1F>("p_e", "", nbBins1D, 0, 11);
        up_TTO_TH1F hist1D_phi = std::make_unique<TTO_TH1F>("phi_e", "", nbBins1D, -190, 190);
        up_TTO_TH1F hist1D_theta = std::make_unique<TTO_TH1F>("theta_e", "", nbBins1D, 0, 35);
        up_TTO_TH1F hist1D_chi2 = std::make_unique<TTO_TH1F>("chi2_e", "", nbBins1D, -6, 6);
        up_TTO_TH1F hist1D_vz = std::make_unique<TTO_TH1F>("vz_e", "", nbBins1D, -20, 20);
        up_TTO_TH1F hist1D_status = std::make_unique<TTO_TH1F>("status", "", nbBins1D, -4000, 4000);
    };

    struct Histograms {
            Electron electron_neg_status;
            Electron electron_status_2000;
    };

}