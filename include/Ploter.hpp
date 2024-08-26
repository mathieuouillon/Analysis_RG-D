#pragma once

#include "PlotHelper.hpp"
#include "FitFunction.hpp"

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

auto plot_eventKinematics(const EventKinematics &hist, const std::string &path) -> void {
    // Axis labels --------------------------------------------------------------------------------
    const std::string W = "W [GeV^{2}]";
    const std::string Q2 = "Q^{2} [GeV^{2}/c^{2}]";
    const std::string nu = "#nu [GeV]";
    const std::string t = "-t [GeV^{2}/c^{2}]";
    const std::string zh = "z_h";
    const std::string lc = "L_c [fm]";
    // --------------------------------------------------------------------------------------------

    // Merge 1D histograms ------------------------------------------------------------------------
    const auto hist1D_W = hist.hist1D_W->Merge();
    const auto hist1D_Q2 = hist.hist1D_Q2->Merge();
    const auto hist1D_nu = hist.hist1D_nu->Merge();
    const auto hist1D_t = hist.hist1D_t->Merge();
    const auto hist1D_zh = hist.hist1D_zh->Merge();
    const auto hist1D_lc = hist.hist1D_lc->Merge();
    // --------------------------------------------------------------------------------------------

    // Draw 1D histograms -------------------------------------------------------------------------
    DrawHist1D(hist1D_W, path, {.fLabel = W});
    DrawHist1D(hist1D_Q2, path, {.fLabel = Q2});
    DrawHist1D(hist1D_nu, path, {.fLabel = nu});
    DrawHist1D(hist1D_t, path, {.fLabel = t});
    DrawHist1D(hist1D_zh, path, {.fLabel = zh});
    DrawHist1D(hist1D_lc, path, {.fLabel = lc});
    // --------------------------------------------------------------------------------------------
}

auto plot_inv_mass_Q2_bins(const Q2Bins &hist, const std::string &path) -> void {
    // Axis labels --------------------------------------------------------------------------------
    const std::string invMass = "M_{#pi^{+},#pi^{-}} [GeV/c^{2}]";
    // --------------------------------------------------------------------------------------------

    // Merge 1D histograms ------------------------------------------------------------------------
    const auto hist1D_inv_Mass_Q12 = hist.hist1D_inv_Mass_Q12->Merge();
    const auto hist1D_inv_Mass_Q225 = hist.hist1D_inv_Mass_Q225->Merge();
    const auto hist1D_inv_Mass_Q253 = hist.hist1D_inv_Mass_Q253->Merge();
    const auto hist1D_inv_Mass_Q335 = hist.hist1D_inv_Mass_Q335->Merge();
    const auto hist1D_inv_Mass_Q3545 = hist.hist1D_inv_Mass_Q3545->Merge();
    const auto hist1D_inv_Mass_Q456 = hist.hist1D_inv_Mass_Q456->Merge();
    // --------------------------------------------------------------------------------------------

    // Draw 1D histograms -------------------------------------------------------------------------
    auto fit_func = std::make_shared<TF1>("fit", mybw, 0.3, 1.4, 7);
    fit_func->SetParameter(0, 0.77);   
    fit_func->SetParameter(1, 0.1);    
    fit_func->SetParameter(2,10.0);   
    fit_func->SetParameter(3,10.0);  
    fit_func->SetParameter(4,-1.0);  
    fit_func->SetParameter(5,0.009);  
    DrawHist1D(hist1D_inv_Mass_Q12, path, {.fTitle="1 #leq Q < 2", .fFitFunc = fit_func, .fLabel = invMass});
    DrawHist1D(hist1D_inv_Mass_Q225, path, {.fTitle="2 #leq Q < 2.5", .fFitFunc = fit_func,.fLabel = invMass});
    DrawHist1D(hist1D_inv_Mass_Q253, path, {.fTitle="2.5 #leq Q < 3", .fFitFunc = fit_func,.fLabel = invMass});
    DrawHist1D(hist1D_inv_Mass_Q335, path, {.fTitle="3 #leq Q < 3.5", .fFitFunc = fit_func,.fLabel = invMass});
    DrawHist1D(hist1D_inv_Mass_Q3545, path, {.fTitle="3.5 #leq Q < 4.5", .fFitFunc = fit_func,.fLabel = invMass});
    DrawHist1D(hist1D_inv_Mass_Q456, path, {.fTitle="4.5 #leq Q < 6", .fFitFunc = fit_func,.fLabel = invMass});
    // --------------------------------------------------------------------------------------------
}



auto ploter(const Histograms &histograms) -> void {
        std::string path_electron_kinematics = "/w/hallb-scshelf2102/clas12/ouillon/Analysis_RG-D/plots/electron_kinematics/";
        std::string path_allPionPlus_kinematics = "/w/hallb-scshelf2102/clas12/ouillon/Analysis_RG-D/plots/allPionPlus_kinematics/";
        std::string path_allPionMinus_kinematics = "/w/hallb-scshelf2102/clas12/ouillon/Analysis_RG-D/plots/allPionMinus_kinematics/";
        std::string path_rho_kinematics = "/w/hallb-scshelf2102/clas12/ouillon/Analysis_RG-D/plots/rho_kinematics/";
        std::string path_event_kinematics = "/w/hallb-scshelf2102/clas12/ouillon/Analysis_RG-D/plots/event_kinematics/";
        std::string path_inv_mass_Q2_bins = "/w/hallb-scshelf2102/clas12/ouillon/Analysis_RG-D/plots/inv_mass_q2_bins/";


        const auto histElectronKinematics = std::ref(histograms.electronKinematics);
        const auto histAllPionPlusKinematics = std::ref(histograms.allPionPlusKinematics);
        const auto histAllPionMinusKinematics = std::ref(histograms.allPionMinusKinematics);
        const auto histRhoKinematics = std::ref(histograms.rhoKinematics);
        const auto hist_eventKinematics = std::ref(histograms.eventKinematics);
        const auto hist_q2Bins = std::ref(histograms.q2Bins);

        plotElectronKinematics(histElectronKinematics, path_electron_kinematics);
        plotAllPionPlusKinematics(histAllPionPlusKinematics, path_allPionPlus_kinematics);
        plotAllPionMinusKinematics(histAllPionMinusKinematics, path_allPionMinus_kinematics);
        plotRhoKinematics(histRhoKinematics, path_rho_kinematics);
        plot_eventKinematics(hist_eventKinematics, path_event_kinematics);
        plot_inv_mass_Q2_bins(hist_q2Bins, path_inv_mass_Q2_bins);
}

