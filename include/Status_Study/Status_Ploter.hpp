#pragma once

#include "Status_Study/Status_Histograms.hpp"


namespace Status_study {
    
    auto plotElectronKinematics(const Electron &hist_electron_neg_status,const Electron &hist_electron_status_2000,
        const std::string &path) -> void {
        // Axis labels --------------------------------------------------------------------------------
        const std::string p      = "p_{e} [GeV/c]";
        const std::string phi    = "#phi_{e} [Deg.]";
        const std::string theta  = "#theta_{e} [Deg.]";
        const std::string vz     = "vz_{e} [cm]";
        const std::string chi2   = "#chi^{2}_{e}";
        const std::string status = "status_{e}";
        // --------------------------------------------------------------------------------------------

        // Merge 1D histograms ------------------------------------------------------------------------
        const auto hist_electron_neg_status_p         = hist_electron_neg_status.hist1D_p->Merge();
        const auto hist_electron_neg_status_chi2      = hist_electron_neg_status.hist1D_chi2->Merge();
        const auto hist_electron_neg_status_phi       = hist_electron_neg_status.hist1D_phi->Merge();
        const auto hist_electron_neg_status_theta     = hist_electron_neg_status.hist1D_theta->Merge();
        const auto hist_electron_neg_status_vz        = hist_electron_neg_status.hist1D_vz->Merge();
        const auto hist_electron_neg_status_status    = hist_electron_neg_status.hist1D_status->Merge();

        const auto hist_electron_status_2000_p         = hist_electron_status_2000.hist1D_p->Merge();
        const auto hist_electron_status_2000_chi2      = hist_electron_status_2000.hist1D_chi2->Merge();
        const auto hist_electron_status_2000_phi       = hist_electron_status_2000.hist1D_phi->Merge();
        const auto hist_electron_status_2000_theta     = hist_electron_status_2000.hist1D_theta->Merge();
        const auto hist_electron_status_2000_vz        = hist_electron_status_2000.hist1D_vz->Merge();
        const auto hist_electron_status_2000_status    = hist_electron_status_2000.hist1D_status->Merge();
        // --------------------------------------------------------------------------------------------

        // Draw 1D histograms -------------------------------------------------------------------------
        Draw_hist_ratio(hist_electron_neg_status_p, hist_electron_status_2000_p, path, {.fLegend1="neg", .fLegend2="2000", .fLabel = p});
        Draw_hist_ratio(hist_electron_neg_status_chi2, hist_electron_status_2000_chi2, path, {.fLegend1="neg", .fLegend2="2000", .fLabel = chi2});
        Draw_hist_ratio(hist_electron_neg_status_phi, hist_electron_status_2000_phi, path, {.fLegend1="neg", .fLegend2="2000", .fLabel = phi});
        Draw_hist_ratio(hist_electron_neg_status_theta, hist_electron_status_2000_theta, path, {.fLegend1="neg", .fLegend2="2000", .fLabel = theta});
        Draw_hist_ratio(hist_electron_neg_status_vz, hist_electron_status_2000_vz, path, {.fLegend1="neg", .fLegend2="2000", .fLabel = vz});
        Draw_hist_ratio(hist_electron_neg_status_status, hist_electron_status_2000_status, path, {.fLegend1="neg", .fLegend2="2000", .fLabel = status});
        // DrawHist1D(hist_electron_neg_status_status, path, {.fLabel = status});
        // --------------------------------------------------------------------------------------------
    }

    auto ploter(const Histograms &histograms) -> void {
        std::string path_electron = "/work/clas12/ouillon/Analysis_RG-D/Status_Study/plots/electron_kinematics/";

        const auto hist_electron_neg_status = std::ref(histograms.electron_neg_status);
        const auto hist_electron_status_2000 = std::ref(histograms.electron_status_2000);


        plotElectronKinematics(hist_electron_neg_status, hist_electron_status_2000, path_electron);
    }
}