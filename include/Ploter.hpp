#pragma once

#include "PlotHelper.hpp"

auto plotElectronKinematics(const ElectronKinematics &histElectronKinematics, const std::string &path) -> void {
    // Axis labels --------------------------------------------------------------------------------
    const std::string p     = "p_{e} [GeV/c]";
    const std::string phi   = "#phi_{e} [Deg.]";
    const std::string theta = "#theta_{e} [Deg.]";
    const std::string vz    = "vz_{e} [cm]";
    const std::string chi2  = "#chi^{2}_{e}";
    // --------------------------------------------------------------------------------------------

    // Merge 1D histograms ------------------------------------------------------------------------
    const auto hist1D_p         = histElectronKinematics.hist1D_p->Merge();
    const auto hist1D_chi2      = histElectronKinematics.hist1D_chi2->Merge();
    const auto hist1D_phi       = histElectronKinematics.hist1D_phi->Merge();
    const auto hist1D_theta     = histElectronKinematics.hist1D_theta->Merge();
    const auto hist1D_vz        = histElectronKinematics.hist1D_vz->Merge();
    // --------------------------------------------------------------------------------------------

    // Draw 1D histograms -------------------------------------------------------------------------
    DrawHist1D(hist1D_p, path, {.fLabel = p});
    DrawHist1D(hist1D_phi, path, {.fLabel = phi});
    DrawHist1D(hist1D_theta, path, {.fLabel = theta});
    DrawHist1D(hist1D_vz, path, {.fLabel = vz});
    DrawHist1D(hist1D_chi2, path, {.fLabel = chi2});
    // --------------------------------------------------------------------------------------------
}

auto plotAllPionPlusKinematics(const AllPionPlusKinematics &hist, const std::string &path) -> void {
    // Axis labels --------------------------------------------------------------------------------
    const std::string p     = "p_{#pi^{+}} [GeV/c]";
    const std::string phi   = "#phi_{#pi^{+}} [Deg.]";
    const std::string theta = "#theta_{#pi^{+}} [Deg.]";
    const std::string vz    = "vz_{#pi^{+}} [cm]";
    const std::string chi2  = "#chi^{2}_{#pi^{+}}";
    // --------------------------------------------------------------------------------------------

    // Merge 1D histograms ------------------------------------------------------------------------
    const auto hist1D_p         = hist.hist1D_p->Merge();
    const auto hist1D_chi2      = hist.hist1D_chi2->Merge();
    const auto hist1D_phi       = hist.hist1D_phi->Merge();
    const auto hist1D_theta     = hist.hist1D_theta->Merge();
    const auto hist1D_vz        = hist.hist1D_vz->Merge();
    // --------------------------------------------------------------------------------------------

    // Draw 1D histograms -------------------------------------------------------------------------
    DrawHist1D(hist1D_p, path, {.fLabel = p});
    DrawHist1D(hist1D_phi, path, {.fLabel = phi});
    DrawHist1D(hist1D_theta, path, {.fLabel = theta});
    DrawHist1D(hist1D_vz, path, {.fLabel = vz});
    DrawHist1D(hist1D_chi2, path, {.fLabel = chi2});
    // --------------------------------------------------------------------------------------------
}

auto plotAllPionMinusKinematics(const AllPionMinusKinematics &hist, const std::string &path) -> void {
    // Axis labels --------------------------------------------------------------------------------
    const std::string p     = "p_{#pi^{-}} [GeV/c]";
    const std::string phi   = "#phi_{#pi^{-}} [Deg.]";
    const std::string theta = "#theta_{#pi^{-}} [Deg.]";
    const std::string vz    = "vz_{#pi^{-}} [cm]";
    const std::string chi2  = "#chi^{2}_{#pi^{-}}";
    // --------------------------------------------------------------------------------------------

    // Merge 1D histograms ------------------------------------------------------------------------
    const auto hist1D_p         = hist.hist1D_p->Merge();
    const auto hist1D_chi2      = hist.hist1D_chi2->Merge();
    const auto hist1D_phi       = hist.hist1D_phi->Merge();
    const auto hist1D_theta     = hist.hist1D_theta->Merge();
    const auto hist1D_vz        = hist.hist1D_vz->Merge();
    // --------------------------------------------------------------------------------------------

    // Draw 1D histograms -------------------------------------------------------------------------
    DrawHist1D(hist1D_p, path, {.fLabel = p});
    DrawHist1D(hist1D_phi, path, {.fLabel = phi});
    DrawHist1D(hist1D_theta, path, {.fLabel = theta});
    DrawHist1D(hist1D_vz, path, {.fLabel = vz});
    DrawHist1D(hist1D_chi2, path, {.fLabel = chi2});
    // --------------------------------------------------------------------------------------------
}

auto plotRhoKinematics(const RhoKinematics &hist, const std::string &path) -> void {
    // Axis labels --------------------------------------------------------------------------------
    const std::string invMass = "M_{#pi^{+},#pi^{-}} [GeV/c^{2}]";
    // --------------------------------------------------------------------------------------------

    // Merge 1D histograms ------------------------------------------------------------------------
    const auto hist1D_invMass = hist.hist1D_invMass->Merge();
    // --------------------------------------------------------------------------------------------

    // Draw 1D histograms -------------------------------------------------------------------------
    DrawHist1D(hist1D_invMass, path, {.fLabel = invMass});
    // --------------------------------------------------------------------------------------------
}


auto ploter(const Histograms &histograms) -> void {
        std::string path_electron_kinematics = "/w/hallb-scshelf2102/clas12/ouillon/Analysis_RG-D/plots/electron_kinematics/";
        std::string path_allPionPlus_kinematics = "/w/hallb-scshelf2102/clas12/ouillon/Analysis_RG-D/plots/allPionPlus_kinematics/";
        std::string path_allPionMinus_kinematics = "/w/hallb-scshelf2102/clas12/ouillon/Analysis_RG-D/plots/allPionMinus_kinematics/";
        std::string path_rho_kinematics = "/w/hallb-scshelf2102/clas12/ouillon/Analysis_RG-D/plots/rho_kinematics/";


        const auto histElectronKinematics = std::ref(histograms.electronKinematics);
        const auto histAllPionPlusKinematics = std::ref(histograms.allPionPlusKinematics);
        const auto histAllPionMinusKinematics = std::ref(histograms.allPionMinusKinematics);
        const auto histRhoKinematics = std::ref(histograms.rhoKinematics);

        plotElectronKinematics(histElectronKinematics, path_electron_kinematics);
        plotAllPionPlusKinematics(histAllPionPlusKinematics, path_allPionPlus_kinematics);
        plotAllPionMinusKinematics(histAllPionMinusKinematics, path_allPionMinus_kinematics);
        plotRhoKinematics(histRhoKinematics, path_rho_kinematics);

}

