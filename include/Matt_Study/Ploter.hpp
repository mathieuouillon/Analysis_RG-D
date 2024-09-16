#pragma once

#include <TMatrixDSym.h>
#include <TFitResult.h>

#include "Core/PlotHelper.hpp"
#include "Matt_Study/FitFunction.hpp"
#include "Matt_Study/RunTypes.hpp"

auto plotElectronKinematics(const ElectronKinematics &histElectronKinematics, const std::string &path, const toml::parse_result &config) -> void {
            // Cuts values --------------------------------------------------------------------------------
                constexpr double NaN = std::numeric_limits<double>::quiet_NaN();
        const double vz_min    = config["electron_kinematics"]["vz_min"].value_or(NaN);
        const double vz_max    = config["electron_kinematics"]["vz_max"].value_or(NaN);
        const double chi2_min  = config["electron_kinematics"]["chi2_min"].value_or(NaN);
        const double chi2_max  = config["electron_kinematics"]["chi2_max"].value_or(NaN);
        // --------------------------------------------------------------------------------------------

    
    // Axis labels --------------------------------------------------------------------------------
    const std::string p     = "p_{e} [GeV/c]";
    const std::string phi   = "#phi_{e} [Deg.]";
    const std::string theta = "#theta_{e} [Deg.]";
    const std::string vz    = "vz_{e} [cm]";
    const std::string chi2  = "#chi^{2}_{e}";
    // --------------------------------------------------------------------------------------------

    // Merge 1D histograms ------------------------------------------------------------------------
        const auto hist1D_p         = histElectronKinematics.hist1D_p->Merge();
        const auto hist1D_p_cut     = histElectronKinematics.hist1D_p_cut->Merge();
        const auto hist1D_chi2      = histElectronKinematics.hist1D_chi2->Merge();
        const auto hist1D_chi2_cut  = histElectronKinematics.hist1D_chi2_cut->Merge();
        const auto hist1D_phi       = histElectronKinematics.hist1D_phi->Merge();
        const auto hist1D_phi_cut   = histElectronKinematics.hist1D_phi_cut->Merge();
        const auto hist1D_theta     = histElectronKinematics.hist1D_theta->Merge();
        const auto hist1D_theta_cut = histElectronKinematics.hist1D_theta_cut->Merge();
        const auto hist1D_vz        = histElectronKinematics.hist1D_vz->Merge();
        const auto hist1D_vz_cut    = histElectronKinematics.hist1D_vz_cut->Merge();

    // --------------------------------------------------------------------------------------------

    // Draw 1D histograms -------------------------------------------------------------------------
    DrawHist1D(hist1D_p, hist1D_p_cut, path, {.fLabel = p});
    DrawHist1D(hist1D_phi, hist1D_phi_cut, path, {.fLabel = phi});
    DrawHist1D(hist1D_theta, hist1D_theta_cut, path, {.fLabel = theta});
    DrawHist1D(hist1D_vz, hist1D_vz_cut, path, {.fCuts = {vz_min, vz_max}, .fLabel = vz});
    DrawHist1D(hist1D_chi2, hist1D_chi2_cut, path, {.fCuts = {chi2_min, chi2_max}, .fLabel = chi2});
    // --------------------------------------------------------------------------------------------
}

auto plotAllPionPlusKinematics(const AllPionPlusKinematics &hist, const std::string &path, const toml::parse_result &config) -> void {
               // Cuts values --------------------------------------------------------------------------------
                constexpr double NaN = std::numeric_limits<double>::quiet_NaN();
        const double chi2_min  = config["pion_plus_kinematics"]["chi2_min"].value_or(NaN);
        const double chi2_max  = config["pion_plus_kinematics"]["chi2_max"].value_or(NaN);
        // --------------------------------------------------------------------------------------------
   
    // Axis labels --------------------------------------------------------------------------------
    const std::string p     = "p_{#pi^{+}} [GeV/c]";
    const std::string phi   = "#phi_{#pi^{+}} [Deg.]";
    const std::string theta = "#theta_{#pi^{+}} [Deg.]";
    const std::string vz    = "vz_{#pi^{+}} [cm]";
    const std::string chi2  = "#chi^{2}_{#pi^{+}}";
    // --------------------------------------------------------------------------------------------

    // Merge 1D histograms ------------------------------------------------------------------------
    const auto hist1D_p         = hist.hist1D_p->Merge();
    const auto hist1D_p_cut     = hist.hist1D_p_cut->Merge();
    const auto hist1D_chi2      = hist.hist1D_chi2->Merge();
    const auto hist1D_chi2_cut  = hist.hist1D_chi2_cut->Merge();
    const auto hist1D_phi       = hist.hist1D_phi->Merge();
    const auto hist1D_phi_cut   = hist.hist1D_phi_cut->Merge();
    const auto hist1D_theta     = hist.hist1D_theta->Merge();
    const auto hist1D_theta_cut = hist.hist1D_theta_cut->Merge();
    const auto hist1D_vz        = hist.hist1D_vz->Merge();
    const auto hist1D_vz_cut    = hist.hist1D_vz_cut->Merge();
    // --------------------------------------------------------------------------------------------

    // Draw 1D histograms -------------------------------------------------------------------------
    DrawHist1D(hist1D_p, hist1D_p_cut, path, {.fLabel = p});
    DrawHist1D(hist1D_phi, hist1D_phi_cut, path, {.fLabel = phi});
    DrawHist1D(hist1D_theta, hist1D_theta_cut, path, {.fLabel = theta});
    DrawHist1D(hist1D_vz, hist1D_vz_cut, path, {.fLabel = vz});
    DrawHist1D(hist1D_chi2, hist1D_chi2_cut, path, {.fCuts = {chi2_min, chi2_max}, .fLabel = chi2});
    // --------------------------------------------------------------------------------------------
}

auto plotCentralPionPlusKinematics(const CentralPionPlusKinematics &hist, const std::string &path) -> void {
    // Axis labels --------------------------------------------------------------------------------
    const std::string p     = "p_{#pi^{+}_{c}} [GeV/c]";
    const std::string phi   = "#phi_{#pi^{+}_{c}} [Deg.]";
    const std::string theta = "#theta_{#pi^{+}_{c}} [Deg.]";
    const std::string vz    = "vz_{#pi^{+}_{c}} [cm]";
    const std::string chi2  = "#chi^{2}_{#pi^{+}_{c}}";
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

auto plotForwardPionPlusKinematics(const ForwardPionPlusKinematics &hist, const std::string &path) -> void {
    // Axis labels --------------------------------------------------------------------------------
    const std::string p     = "p_{#pi^{+}_{f}} [GeV/c]";
    const std::string phi   = "#phi_{#pi^{+}_{f}} [Deg.]";
    const std::string theta = "#theta_{#pi^{+}_{f}} [Deg.]";
    const std::string vz    = "vz_{#pi^{+}_{f}} [cm]";
    const std::string chi2  = "#chi^{2}_{#pi^{+}_{f}}";
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

auto plotAllPionMinusKinematics(const AllPionMinusKinematics &hist, const std::string &path, const toml::parse_result &config) -> void {
                   // Cuts values --------------------------------------------------------------------------------
                constexpr double NaN = std::numeric_limits<double>::quiet_NaN();
        const double chi2_min  = config["pion_plus_kinematics"]["chi2_min"].value_or(NaN);
        const double chi2_max  = config["pion_plus_kinematics"]["chi2_max"].value_or(NaN);
        // --------------------------------------------------------------------------------------------
    
    // Axis labels --------------------------------------------------------------------------------
    const std::string p     = "p_{#pi^{-}} [GeV/c]";
    const std::string phi   = "#phi_{#pi^{-}} [Deg.]";
    const std::string theta = "#theta_{#pi^{-}} [Deg.]";
    const std::string vz    = "vz_{#pi^{-}} [cm]";
    const std::string chi2  = "#chi^{2}_{#pi^{-}}";
    // --------------------------------------------------------------------------------------------

   // Merge 1D histograms ------------------------------------------------------------------------
    const auto hist1D_p         = hist.hist1D_p->Merge();
    const auto hist1D_p_cut     = hist.hist1D_p_cut->Merge();
    const auto hist1D_chi2      = hist.hist1D_chi2->Merge();
    const auto hist1D_chi2_cut  = hist.hist1D_chi2_cut->Merge();
    const auto hist1D_phi       = hist.hist1D_phi->Merge();
    const auto hist1D_phi_cut   = hist.hist1D_phi_cut->Merge();
    const auto hist1D_theta     = hist.hist1D_theta->Merge();
    const auto hist1D_theta_cut = hist.hist1D_theta_cut->Merge();
    const auto hist1D_vz        = hist.hist1D_vz->Merge();
    const auto hist1D_vz_cut    = hist.hist1D_vz_cut->Merge();
    // --------------------------------------------------------------------------------------------

    // Draw 1D histograms -------------------------------------------------------------------------
    DrawHist1D(hist1D_p, hist1D_p_cut, path, {.fLabel = p});
    DrawHist1D(hist1D_phi, hist1D_phi_cut, path, {.fLabel = phi});
    DrawHist1D(hist1D_theta, hist1D_theta_cut, path, {.fLabel = theta});
    DrawHist1D(hist1D_vz, hist1D_vz_cut, path, {.fLabel = vz});
    DrawHist1D(hist1D_chi2, hist1D_chi2_cut, path, {.fCuts = {chi2_min, chi2_max}, .fLabel = chi2});
    // --------------------------------------------------------------------------------------------
}

auto plotCentralPionMinusKinematics(const CentralPionMinusKinematics &hist, const std::string &path) -> void {
    // Axis labels --------------------------------------------------------------------------------
    const std::string p     = "p_{#pi^{-}_{c}} [GeV/c]";
    const std::string phi   = "#phi_{#pi^{-}_{c}} [Deg.]";
    const std::string theta = "#theta_{#pi^{-}_{c}} [Deg.]";
    const std::string vz    = "vz_{#pi^{-}_{c}} [cm]";
    const std::string chi2  = "#chi^{2}_{#pi^{-}_{c}}";
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

auto plotForwardPionMinusKinematics(const ForwardPionMinusKinematics &hist, const std::string &path) -> void {
    // Axis labels --------------------------------------------------------------------------------
    const std::string p     = "p_{#pi^{-}_{f}} [GeV/c]";
    const std::string phi   = "#phi_{#pi^{-}_{f}} [Deg.]";
    const std::string theta = "#theta_{#pi^{-}_{f}} [Deg.]";
    const std::string vz    = "vz_{#pi^{-}_{f}} [cm]";
    const std::string chi2  = "#chi^{2}_{#pi^{-}_{f}}";
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

auto plot_eventKinematics(const EventKinematics &hist, const std::string &path, const toml::parse_result &config) -> void {
    // Cuts ---------------------------------------------------------------------------------------
    constexpr double NaN = std::numeric_limits<double>::quiet_NaN();
    const double W_min  = config["invariants"]["W"].value_or(NaN);
    const double zh_min  = config["invariants"]["zh"].value_or(NaN);
    const double t_min  = config["invariants"]["t_min"].value_or(NaN);
    const double t_max  = config["invariants"]["t_max"].value_or(NaN);
    const double lc_max  = config["invariants"]["lc"].value_or(NaN);
    //---------------------------------------------------------------------------------------------

    
    // Axis labels --------------------------------------------------------------------------------
    const std::string W = "W [GeV^{2}]";
    const std::string Q2 = "Q^{2} [GeV^{2}/c^{2}]";
    const std::string nu = "#nu [GeV]";
    const std::string t = "-t [GeV^{2}/c^{2}]";
    const std::string zh = "z_{h}";
    const std::string lc = "L_{c} [fm]";
    // --------------------------------------------------------------------------------------------

    // Merge 1D histograms ------------------------------------------------------------------------
    const auto hist1D_W = hist.hist1D_W->Merge();
    const auto hist1D_Q2 = hist.hist1D_Q2->Merge();
    const auto hist1D_nu = hist.hist1D_nu->Merge();
    const auto hist1D_t = hist.hist1D_t->Merge();
    const auto hist1D_zh = hist.hist1D_zh->Merge();
    const auto hist1D_lc = hist.hist1D_lc->Merge();
    const auto hist1D_W_cut = hist.hist1D_W_cut->Merge();
    const auto hist1D_Q2_cut = hist.hist1D_Q2_cut->Merge();
    const auto hist1D_nu_cut = hist.hist1D_nu_cut->Merge();
    const auto hist1D_t_cut = hist.hist1D_t_cut->Merge();
    const auto hist1D_zh_cut = hist.hist1D_zh_cut->Merge();
    const auto hist1D_lc_cut = hist.hist1D_lc_cut->Merge();
    // --------------------------------------------------------------------------------------------

    // Draw 1D histograms -------------------------------------------------------------------------
    DrawHist1D(hist1D_W,hist1D_W_cut, path, {.fCuts={W_min},.fScaled=true, .fLabel = W});
    DrawHist1D(hist1D_Q2,hist1D_Q2_cut, path, {.fScaled=true,.fLabel = Q2});
    DrawHist1D(hist1D_nu,hist1D_nu_cut, path, {.fScaled=true,.fLabel = nu});
    DrawHist1D(hist1D_t,hist1D_t_cut, path, {.fCuts={t_min, t_max},.fScaled=true, .fLabel = t});
    DrawHist1D(hist1D_zh,hist1D_zh_cut, path, {.fCuts={zh_min},.fScaled=true, .fLabel = zh});
    DrawHist1D(hist1D_lc,hist1D_lc_cut, path, {.fCuts={lc_max},.fScaled=true, .fLabel = lc});
    // --------------------------------------------------------------------------------------------
}

template <typename T>
struct NumberError {
    T number;
    T error;
};

auto DrawHistInvariantMassAndComputeYield(const std::shared_ptr<TH1> &h, const std::string &path, const ArgsHist1D &args = {}) -> NumberError<double> {
    const auto canvas     = Helper::MakeCanvas();
    const auto myFileName = args.fFileName.empty() ? h->GetName() : args.fFileName;

    gStyle->SetOptStat(args.fOptStat.c_str());
    gStyle->SetOptFit(1111);

    h->Draw(args.fDrawOption.c_str());
    h->SetMinimum(args.fSetMinimum);
    h->SetMaximum(h->GetMaximum() + 0.2 * h->GetMaximum());
    h->SetStats(args.fSetStats);
    h->SetTitle(args.fTitle.c_str());

    
    ROOT::Math::MinimizerOptions::SetDefaultMinimizer("Minuit2");
    
    TFitResultPtr r = h->Fit(args.fFitFunc.get(), "S", "", args.fFitFunc->GetXmin(), args.fFitFunc->GetXmax());
    args.fFitFunc->SetNpx(1000);
    args.fFitFunc->Draw("same");

    // improve the picture:
    TF1 *backFcn = new TF1("backFcn",pol3,args.fFitFunc->GetXmin(), args.fFitFunc->GetXmax(),7);
    backFcn->SetLineColor(Helper::Color::kLightGreen);
    TF1 *signalFcn = new TF1("signalFcn",BW,args.fFitFunc->GetXmin(), args.fFitFunc->GetXmax(),7);
    signalFcn->SetLineColor(Helper::Color::kDarkBlue);
    Double_t par[7];
    
    // writes the fit results into the par array
    args.fFitFunc->GetParameters(par);

    backFcn->SetParameters(par);
    backFcn->SetNpx(1000);
    backFcn->Draw("same");
    
    signalFcn->SetParameters(par);
    signalFcn->SetNpx(1000);
    signalFcn->Draw("same");

    double N_sig_exp = (std::abs(signalFcn->Integral(args.fFitFunc->GetXmin(), args.fFitFunc->GetXmax())))/h->GetBinWidth(1);
    std::cout << "N_sig : " << N_sig_exp << std::endl;
    TMatrixDSym c_exp = r->GetCovarianceMatrix();
    double N_sigErr_exp = (abs(signalFcn->IntegralError(args.fFitFunc->GetXmin(), args.fFitFunc->GetXmax(), signalFcn->GetParameters(),c_exp.GetMatrixArray())))/h->GetBinWidth(1);
    std::cout << "N_sigErr_exp : " << N_sigErr_exp << std::endl;

    double N_bckground = (std::abs(backFcn->Integral(args.fFitFunc->GetXmin(), args.fFitFunc->GetXmax())))/h->GetBinWidth(1);
    std::cout << "N_bckground : " << N_bckground << std::endl;
    double N_bckground_err = (abs(backFcn->IntegralError(args.fFitFunc->GetXmin(), args.fFitFunc->GetXmax(), backFcn->GetParameters(),c_exp.GetMatrixArray())))/h->GetBinWidth(1);
    std::cout << "N_bckground_err : " << N_bckground_err << std::endl;

    auto format_string = [](const double a) -> std::string {
        std::stringstream stream;
        stream << std::fixed << std::setprecision(3) << a;
        return stream.str();
    };

    const auto text = std::make_unique<TLatex>();
    text->SetNDC();
    text->SetTextColor(Helper::Color::kLightBlue);
    text->SetTextSize(0.04f);
    text->DrawLatex(0.15, 0.80, ("N_{#rho^{0}} = " + format_string(N_sig_exp) + "#pm" + format_string(N_sigErr_exp)).c_str());

    const auto text_bckground = std::make_unique<TLatex>();
    text_bckground->SetNDC();
    text_bckground->SetTextColor(Helper::Color::kLightBlue);
    text_bckground->SetTextSize(0.04f);
    text_bckground->DrawLatex(0.15, 0.73, ("N_{bck} = " + format_string(N_bckground) + "#pm" + format_string(N_bckground_err)).c_str());


    if (args.fXRange.first != 0 && args.fXRange.second != 0)
        h->GetXaxis()->SetRangeUser(args.fXRange.first, args.fXRange.second);
    if (args.fYRange.first != 0 && args.fYRange.second != 0)
        h->GetYaxis()->SetRangeUser(args.fYRange.first, args.fYRange.second);

    if (!std::empty(args.fAppliedCuts)) Helper::DrawAppliedCuts(args.fAppliedCuts);

    h->SetLineColor(args.fColor1);

    h->GetXaxis()->SetTitle(args.fLabel.data());
    h->GetXaxis()->SetTitleOffset(args.fLabelOffset);
    h->GetXaxis()->SetTitleSize(args.fLabelSize);

    if (args.fLogX) canvas->SetLogx();
    if (args.fLogY) canvas->SetLogy();

    if (!args.fLegend1.empty()) {
        auto legend = new TLegend();
        legend->AddEntry(h.get(), args.fLegend1.c_str(), "l");
        legend->Draw();
    }

    for (const auto a: args.fCuts) {
        Helper::DrawLine(TLine(), Helper::Color::kRed, h->GetMinimum(), h->GetMaximum(), args.fType, a);
    }
    if (args.fSetStats) Helper::SetStatBoxes(canvas, args.fFitFunc != nullptr, h);
    Helper::SaveCanvas(canvas, path, myFileName);

    return {N_sig_exp, N_sigErr_exp};
}

auto plot_inv_mass_Q2_bins(const Q2Bins &hist, const std::string &path) -> std::map<std::string, NumberError<double>> {
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
    NumberError<double> N_sig_Q12 = DrawHistInvariantMassAndComputeYield(hist1D_inv_Mass_Q12, path, {.fTitle="1 #leq Q^{2} < 2", .fFitFunc = fit_func, .fLabel = invMass});
    NumberError<double> N_sig_Q225 = DrawHistInvariantMassAndComputeYield(hist1D_inv_Mass_Q225, path, {.fTitle="2 #leq Q^{2} < 2.5", .fFitFunc = fit_func,.fLabel = invMass});
    NumberError<double> N_sig_Q253 = DrawHistInvariantMassAndComputeYield(hist1D_inv_Mass_Q253, path, {.fTitle="2.5 #leq Q^{2} < 3", .fFitFunc = fit_func,.fLabel = invMass});
    NumberError<double> N_sig_Q335 = DrawHistInvariantMassAndComputeYield(hist1D_inv_Mass_Q335, path, {.fTitle="3 #leq Q^{2} < 3.5", .fFitFunc = fit_func,.fLabel = invMass});
    NumberError<double> N_sig_Q3545 = DrawHistInvariantMassAndComputeYield(hist1D_inv_Mass_Q3545, path, {.fTitle="3.5 #leq Q^{2} < 4.5", .fFitFunc = fit_func,.fLabel = invMass});
    NumberError<double> N_sig_Q456 = DrawHistInvariantMassAndComputeYield(hist1D_inv_Mass_Q456, path, {.fTitle="4.5 #leq Q^{2} < 6", .fFitFunc = fit_func,.fLabel = invMass});
    // --------------------------------------------------------------------------------------------

    std::map<std::string, NumberError<double>> results{
        {"1 #leq Q^2 < 2", N_sig_Q12},
        {"2 #leq Q^2 < 2.5", N_sig_Q225},
        {"2.5 #leq Q^2 < 3", N_sig_Q253},
        {"3 #leq Q^2 < 3.5", N_sig_Q335},
        {"3.5 #leq Q^2 < 4.5", N_sig_Q3545},
        {"4.5 #leq Q^2 < 6", N_sig_Q456},
    };
    return results;
}


auto ploter(const Histograms &histograms, RunTypes type, const toml::parse_result &config) -> std::map<std::string, NumberError<double>> {
    std::string path_electron_kinematics; 
    std::string path_allPionPlus_kinematics; 
    std::string path_allPionMinus_kinematics; 
    std::string path_rho_kinematics; 
    std::string path_event_kinematics; 
    std::string path_inv_mass_Q2_bins; 
    std::string path_centralPionPlus_kinematics;
    std::string path_forwardPionPlus_kinematics;
    std::string path_centralPionMinus_kinematics;
    std::string path_forwardPionMinus_kinematics;
        
        if (type == RunTypes::CxC) {
            path_electron_kinematics = "/w/hallb-scshelf2102/clas12/ouillon/Analysis_RG-D/plots_Matt_Study/CxC/electron_kinematics/";
            path_allPionPlus_kinematics = "/w/hallb-scshelf2102/clas12/ouillon/Analysis_RG-D/plots_Matt_Study/CxC/allPionPlus_kinematics/";
            path_allPionMinus_kinematics = "/w/hallb-scshelf2102/clas12/ouillon/Analysis_RG-D/plots_Matt_Study/CxC/allPionMinus_kinematics/";
            path_centralPionPlus_kinematics = "/w/hallb-scshelf2102/clas12/ouillon/Analysis_RG-D/plots_Matt_Study/CxC/centralPionPlus_kinematics/";
            path_forwardPionPlus_kinematics = "/w/hallb-scshelf2102/clas12/ouillon/Analysis_RG-D/plots_Matt_Study/CxC/forwardPionPlus_kinematics/";
            path_centralPionMinus_kinematics = "/w/hallb-scshelf2102/clas12/ouillon/Analysis_RG-D/plots_Matt_Study/CxC/centralPionMinus_kinematics/";
            path_forwardPionMinus_kinematics = "/w/hallb-scshelf2102/clas12/ouillon/Analysis_RG-D/plots_Matt_Study/CxC/forwardPionMinus_kinematics/";
            path_rho_kinematics = "/w/hallb-scshelf2102/clas12/ouillon/Analysis_RG-D/plots_Matt_Study/CxC/rho_kinematics/";
            path_event_kinematics = "/w/hallb-scshelf2102/clas12/ouillon/Analysis_RG-D/plots_Matt_Study/CxC/event_kinematics/";
            path_inv_mass_Q2_bins = "/w/hallb-scshelf2102/clas12/ouillon/Analysis_RG-D/plots_Matt_Study/CxC/inv_mass_q2_bins/";
        }
        
        if (type == RunTypes::LD2) {
            path_electron_kinematics = "/w/hallb-scshelf2102/clas12/ouillon/Analysis_RG-D/plots_Matt_Study/LD2/electron_kinematics/";
            path_allPionPlus_kinematics = "/w/hallb-scshelf2102/clas12/ouillon/Analysis_RG-D/plots_Matt_Study/LD2/allPionPlus_kinematics/";
            path_allPionMinus_kinematics = "/w/hallb-scshelf2102/clas12/ouillon/Analysis_RG-D/plots_Matt_Study/LD2/allPionMinus_kinematics/";
            path_centralPionPlus_kinematics = "/w/hallb-scshelf2102/clas12/ouillon/Analysis_RG-D/plots_Matt_Study/LD2/centralPionPlus_kinematics/";
            path_forwardPionPlus_kinematics = "/w/hallb-scshelf2102/clas12/ouillon/Analysis_RG-D/plots_Matt_Study/LD2/forwardPionPlus_kinematics/";
            path_centralPionMinus_kinematics = "/w/hallb-scshelf2102/clas12/ouillon/Analysis_RG-D/plots_Matt_Study/LD2/centralPionMinus_kinematics/";
            path_forwardPionMinus_kinematics = "/w/hallb-scshelf2102/clas12/ouillon/Analysis_RG-D/plots_Matt_Study/LD2/forwardPionMinus_kinematics/";
            path_rho_kinematics = "/w/hallb-scshelf2102/clas12/ouillon/Analysis_RG-D/plots_Matt_Study/LD2/rho_kinematics/";
            path_event_kinematics = "/w/hallb-scshelf2102/clas12/ouillon/Analysis_RG-D/plots_Matt_Study/LD2/event_kinematics/";
            path_inv_mass_Q2_bins = "/w/hallb-scshelf2102/clas12/ouillon/Analysis_RG-D/plots_Matt_Study/LD2/inv_mass_q2_bins/";
        }

        const auto histElectronKinematics = std::ref(histograms.electronKinematics);
        const auto histAllPionPlusKinematics = std::ref(histograms.allPionPlusKinematics);
        const auto histAllPionMinusKinematics = std::ref(histograms.allPionMinusKinematics);

        const auto histCentralPionMinusKinematics = std::ref(histograms.centralPionMinusKinematics);
        const auto histForwardPionMinusKinematics = std::ref(histograms.forwardPionMinusKinematics);

        const auto histCentralPionPlusKinematics = std::ref(histograms.centralPionPlusKinematics);
        const auto histForwardPionPlusKinematics = std::ref(histograms.forwardPionPlusKinematics);

        const auto histRhoKinematics = std::ref(histograms.rhoKinematics);
        const auto hist_eventKinematics = std::ref(histograms.eventKinematics);
        const auto hist_q2Bins = std::ref(histograms.q2Bins);

        plotElectronKinematics(histElectronKinematics, path_electron_kinematics, config);
        plotAllPionPlusKinematics(histAllPionPlusKinematics, path_allPionPlus_kinematics, config);
        plotAllPionMinusKinematics(histAllPionMinusKinematics, path_allPionMinus_kinematics, config);
        
        // plotCentralPionPlusKinematics(histCentralPionPlusKinematics, path_centralPionPlus_kinematics);
        // plotForwardPionPlusKinematics(histForwardPionPlusKinematics, path_forwardPionPlus_kinematics);

        // plotCentralPionMinusKinematics(histCentralPionMinusKinematics, path_centralPionMinus_kinematics);
        // plotForwardPionMinusKinematics(histForwardPionMinusKinematics, path_forwardPionMinus_kinematics);
        // 
        plotRhoKinematics(histRhoKinematics, path_rho_kinematics);
        plot_eventKinematics(hist_eventKinematics, path_event_kinematics, config);
        std::map<std::string, NumberError<double>> map_yield_for_Q2_bins = plot_inv_mass_Q2_bins(hist_q2Bins, path_inv_mass_Q2_bins);

        return map_yield_for_Q2_bins;
}

