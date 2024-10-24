#pragma once

#include <Math/MinimizerOptions.h>
#include <TCanvas.h>
#include <TColor.h>
#include <TF1.h>
#include <TF1NormSum.h>
#include <TFile.h>
#include <TGraph.h>
#include <TGraphErrors.h>
#include <TH1F.h>
#include <TH2.h>
#include <THStack.h>
#include <TLatex.h>
#include <TLegend.h>
#include <TLine.h>
#include <TMath.h>
#include <TMultiGraph.h>
#include <TPaveStats.h>
#include <TProfile.h>
#include <TROOT.h>
#include <TRatioPlot.h>
#include <TStyle.h>

#include "Core/Constantes.hpp"
#include "Matt_Study/FitFunction.hpp"

namespace Helper {

enum class Line { Vertical,
                  Horizontal,
                  Diagonal,
                  dEdxData,
                  dEdxSimu
};

enum class Axis { X,
                  Y };

struct Color {
    const static inline short kLightBlue = static_cast<short>(TColor::GetColor("#0C5DA5"));
    const static inline short kGrey = static_cast<short>(TColor::GetColor("#787878"));
    const static inline short kRed = static_cast<short>(TColor::GetColor("#FF2C00"));
    const static inline short kLightGreen = static_cast<short>(TColor::GetColor("#00B945"));
    const static inline short kYellow = static_cast<short>(TColor::GetColor("#FF9500"));
    const static inline short kViolet = static_cast<short>(TColor::GetColor("#845B97"));
    const static inline short kBlack = static_cast<short>(TColor::GetColor("#121415"));
    const static inline short kGreen = static_cast<short>(TColor::GetColor("#006F29"));
    const static inline short kDarkBlue = static_cast<short>(TColor::GetColor("#00008B"));
};

template <typename T>
auto Linspace(T start, T end, const int num) -> std::vector<T> {
    std::vector<T> v;
    if (num == 0) {
        return v;
    }
    if (num == 1) {
        v.push_back(start);
        return v;
    }

    double delta = static_cast<double>(end - start) / (num - 1);

    for (int i = 0; i < num - 1; ++i) {
        v.push_back(start + delta * i);
    }
    v.push_back(end);
    return v;
}

/**
     * @fn MakeCanvas
     * @brief A utility class for creating a ROOT TCanvas object with configurable parameters
     */
auto MakeCanvas(const char* name = "", const char* title = "", const int ww = 800, const int wh = 600,
                const float leftMargin = 0.12f, const float rightMargin = 0.12f,
                const float topMargin = 0.12f, const float botMargin = 0.12f) -> std::shared_ptr<TCanvas> {
    auto canvas = std::make_shared<TCanvas>(name, title, ww, wh);
    canvas->SetLeftMargin(leftMargin);
    canvas->SetRightMargin(rightMargin);
    canvas->SetTopMargin(topMargin);
    canvas->SetBottomMargin(botMargin);
    return canvas;
}

/**
     * \brief Saves a TCanvas object as an image file.
     *
     * This function saves a given TCanvas object as an image file in the specified path and with the given file name.
     *
     * \param canvas A shared pointer to the TCanvas object to be saved.
     * \param path The path of the directory where the image file will be saved.
     * \param fileName The name of the image file.
     *
     * \return void
     */
auto SaveCanvas(const std::shared_ptr<TCanvas>& canvas, const std::string& path, const std::string& fileName) -> void {
    canvas->SaveAs((path + "pdf/" + fileName + ".pdf").c_str());
    canvas->SaveAs((path + "C/" + fileName + ".C").c_str());
    canvas->SaveAs((path + "tex/" + fileName + ".tex").c_str());

    std::unique_ptr<TFile> outputFile(TFile::Open((path + "root/" + fileName + ".root").c_str(), "RECREATE"));
    auto list = canvas->GetListOfPrimitives();
    for (int i = 1; i < list->GetSize(); ++i) {
        outputFile->WriteObject(list->At(i), list->At(i)->GetName());
    }
    outputFile->Close();
}

/**
     * @brief Move the statistics boxes to fill a tile.
     *
     * This function updates the position of the statistics boxes to fill a tile with the size of it giving by the parameters.
     *
     * @param boxes A unique pointer to TObjArray that contains the stats boxes.
     * @param numColumns The number of columns in the tile.
     * @param numRows The number of rows in the tile.
     *
     * @return None.
     */
auto UpdateTileStats(const TObjArray& boxes, bool haveFitPars, int numColumns = 0, int numRows = 0) -> void {
    const int totalEntries = boxes.GetEntries();
    if (numColumns == 0)
        numColumns = TMath::CeilNint(TMath::Sqrt(totalEntries));
    if (numRows == 0)
        numRows = TMath::CeilNint((Double_t)totalEntries / (Double_t)numColumns);

    double defX1 = 7.50e-01;
    double defY1 = 8.35e-01;
    double defX2 = 9.80e-01;
    double defY2 = 9.95e-01;
    if (haveFitPars) {
        defX1 = 7.0e-01;
        defY1 = 7.0e-01;
        defX2 = 9.80e-01;
        defY2 = 9.95e-01;
    }

    const double defWidth = defX2 - defX1;
    const double defHeight = defY2 - defY1;

    const double X1NDC = defX2 - numColumns * defWidth;
    const double X2NDC = defX2;
    const double Y1NDC = defY2 - numRows * defHeight;
    const double Y2NDC = defY2;

    const double width = (X2NDC - X1NDC) / numColumns;
    const double height = (Y2NDC - Y1NDC) / numRows;

    for (int i = 0, across = 0, down = 0; i < totalEntries; i++) {
        auto tps = dynamic_cast<TPaveStats*>(boxes.At(i));
        if (!tps)
            return;

        tps->SetX1NDC(X2NDC - (across + 1) * width);
        tps->SetY1NDC(Y2NDC - (down + 1) * height);
        tps->SetX2NDC(X2NDC - across * width);
        tps->SetY2NDC(Y2NDC - down * height);

        across++;
        if (across >= numColumns) {
            across = 0;
            down++;
        }
    }
}

template <typename... Args>
auto SetStatBoxes(const std::shared_ptr<TCanvas>& canvas, bool haveFitPars, Args&&... args) -> void {
    canvas->Update();
    TObjArray boxes;
    for (const auto& h : {args...}) {
        auto st = dynamic_cast<TPaveStats*>(h->GetListOfFunctions()->FindObject("stats"));
        st->SetTextColor(h->GetLineColor());
        st->Draw();
        boxes.Add(st);
    }
    UpdateTileStats(boxes, haveFitPars);
    canvas->Modified();
}

auto DrawLine(TLine line, const short color, const double min, const double max, const Helper::Line type, double a, const short width = 2, const short style = 9) -> void {
    line.SetLineColor(color);
    line.SetLineWidth(width);
    line.SetLineStyle(style);
    if (type == Helper::Line::Vertical)
        line.DrawLine(a, min, a, max);
    if (type == Helper::Line::Horizontal)
        line.DrawLine(min, a, max, a);
}

auto DrawLine(TLine line, const short color, const double x1, double y1, double x2, double y2) -> void {
    line.SetLineColor(color);
    line.SetLineWidth(2);
    line.DrawLine(x1, y1, x2, y2);
}

auto DrawDEdx(const std::shared_ptr<TGraph>& graph, const auto& f) -> void {
    const std::vector<double> p = Linspace(0.0, 0.4, 200);
    for (auto x : p)
        graph->AddPoint(x, f(x));
    graph->SetLineColor(Color::kRed);
    graph->SetLineWidth(2);
    graph->Draw("L");
}

auto DrawAppliedCuts(const std::vector<std::string>& appliedCuts, double i = 0.85) -> void {
    TLatex t;
    t.SetTextSize(0.03f);
    for (const std::string& a : appliedCuts) {
        t.DrawLatexNDC(0.13, i, a.c_str());
        i -= 0.035f;
    }
}

auto DrawScaleText(const int scale) -> void {
    const auto text = std::make_unique<TText>();
    text->SetNDC();
    text->SetTextColor(Color::kLightBlue);
    text->SetTextSize(0.04f);
    text->DrawText(0.15, 0.04, ("Light blue is scaled by " + std::to_string(scale)).c_str());
}

auto WaterMark(const auto& g, const std::string& option) -> void {
    TLatex t;
    t.SetTextColor(17);
    t.SetTextSize(0.1991525f);
    t.SetTextAngle(27);
    t.SetLineWidth(2);
    t.DrawLatexNDC(0.05, 0.01, "Very Preliminary");
    g->Draw(option.c_str());
    gPad->RedrawAxis();
}

}  // namespace Helper

struct ArgsHist1D {
    const std::string& fFileName = "";

    const short fColor1 = Helper::Color::kLightBlue;
    const float fAlphaColor1 = 0.15f;
    const short fColor2 = Helper::Color::kBlack;

    const Helper::Line fType = Helper::Line::Vertical;

    // cuts
    const std::vector<double> fCuts = {};
    const std::vector<std::string> fAppliedCuts = {};

    // options
    const bool fScaled = false;
    const bool fSetStats = true;
    const double fSetMinimum = -1111;
    const std::string fDrawOption = "histo";
    const std::string fOptStat = "emr";

    // Range
    const std::pair<double, double> fXRange = {};
    const std::pair<double, double> fYRange = {};

    // Legend
    const std::string fLegend1;
    const std::string fLegend2;

    const std::string fTitle = "";

    // Log scale
    const bool fLogX = false;
    const bool fLogY = false;

    // fits
    const std::shared_ptr<TF1> fFitFunc = nullptr;

    // label
    const std::string fLabel;
    const float fLabelOffset = 1.0f;
    const float fLabelSize = 0.05f;
};

auto DrawHist1D(const std::shared_ptr<TH1>& h, const std::string& path, const ArgsHist1D& args = {}) -> void {
    const auto canvas = Helper::MakeCanvas();
    const auto myFileName = args.fFileName.empty() ? h->GetName() : args.fFileName;

    gStyle->SetOptStat(args.fOptStat.c_str());
    gStyle->SetOptFit(1111);

    h->Draw(args.fDrawOption.c_str());
    h->SetMinimum(args.fSetMinimum);
    h->SetMaximum(h->GetMaximum() + 0.2 * h->GetMaximum());
    h->SetStats(args.fSetStats);
    h->SetTitle(args.fTitle.c_str());

    if (args.fFitFunc) {
        ROOT::Math::MinimizerOptions::SetDefaultMinimizer("Minuit2");

        h->Fit(args.fFitFunc.get(), "R", "", args.fFitFunc->GetXmin(), args.fFitFunc->GetXmax());
        args.fFitFunc->SetNpx(1000);
        args.fFitFunc->Draw("same");

        // improve the picture:
        TF1* backFcn = new TF1("backFcn", pol3, args.fFitFunc->GetXmin(), args.fFitFunc->GetXmax(), 7);
        backFcn->SetLineColor(Helper::Color::kLightGreen);
        TF1* signalFcn = new TF1("signalFcn", BW, args.fFitFunc->GetXmin(), args.fFitFunc->GetXmax(), 7);
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

        double N_sig_exp = (abs(signalFcn->Integral(args.fFitFunc->GetXmin(), args.fFitFunc->GetXmax()))) / h->GetBinWidth(1);
        std::cout << "N_sig : " << N_sig_exp << std::endl;
        // N_sigErr_exp = (abs(signalFcn.IntegralError(r1,r2,fsig_exp.GetParameters(),c_exp_sig.GetMatrixArray())))/h1_exp.GetBinWidth(1)
    }

    if (args.fXRange.first != 0 && args.fXRange.second != 0)
        h->GetXaxis()->SetRangeUser(args.fXRange.first, args.fXRange.second);
    if (args.fYRange.first != 0 && args.fYRange.second != 0)
        h->GetYaxis()->SetRangeUser(args.fYRange.first, args.fYRange.second);

    if (!std::empty(args.fAppliedCuts))
        Helper::DrawAppliedCuts(args.fAppliedCuts);

    h->SetLineColor(args.fColor1);

    h->GetXaxis()->SetTitle(args.fLabel.data());
    h->GetXaxis()->SetTitleOffset(args.fLabelOffset);
    h->GetXaxis()->SetTitleSize(args.fLabelSize);

    if (args.fLogX)
        canvas->SetLogx();
    if (args.fLogY)
        canvas->SetLogy();

    if (!args.fLegend1.empty()) {
        auto legend = new TLegend();
        legend->AddEntry(h.get(), args.fLegend1.c_str(), "l");
        legend->Draw();
    }

    for (const auto a : args.fCuts) {
        Helper::DrawLine(TLine(), Helper::Color::kRed, h->GetMinimum(), h->GetMaximum(), args.fType, a);
    }
    if (args.fSetStats)
        Helper::SetStatBoxes(canvas, args.fFitFunc != nullptr, h);
    Helper::SaveCanvas(canvas, path, myFileName);
}

auto Draw_hist_ratio(const std::shared_ptr<TH1>& h1, const std::shared_ptr<TH1>& h2, const std::string& path, const ArgsHist1D& args = {}) -> void {
    const auto canvas = Helper::MakeCanvas();
    const auto myFileName = args.fFileName.empty() ? h1->GetName() : args.fFileName;

    gStyle->SetOptStat(args.fOptStat.c_str());

    auto rp = std::make_unique<TRatioPlot>(h1.get(), h2.get());

    h1->SetLineColor(args.fColor1);
    h2->SetLineColor(args.fColor2);
    h1->SetStats(args.fSetStats);
    h2->SetStats(args.fSetStats);

    h1->GetXaxis()->SetTitle(args.fLabel.data());
    h1->GetXaxis()->SetTitleOffset(args.fLabelOffset);
    h1->GetXaxis()->SetTitleSize(args.fLabelSize);
    h2->Draw();

    rp->Draw();

    if (!args.fLegend1.empty()) {
        rp->GetUpperPad()->cd();
        TLegend* legend = new TLegend();
        legend->AddEntry(h1.get(), args.fLegend1.c_str(), "l");
        legend->AddEntry(h2.get(), args.fLegend2.c_str(), "l");
        legend->Draw();
    }

    canvas->Update();
    TObjArray boxes;

    auto st1 = dynamic_cast<TPaveStats*>(h1->GetListOfFunctions()->FindObject("stats"));
    st1->SetTextColor(h1->GetLineColor());
    st1->Draw();
    boxes.Add(st1);

    auto st2 = dynamic_cast<TPaveStats*>(h2->GetListOfFunctions()->FindObject("stats"));
    if (st2) {
        st2->SetTextColor(h2->GetLineColor());
        st2->Draw();
        boxes.Add(st2);
        std::cerr << "Stats box found!\n";
    } else {
        std::cerr << "No stats box found!\n";
    }

    Helper::UpdateTileStats(boxes, false);
    canvas->Modified();

    Helper::SaveCanvas(canvas, path, myFileName);
}

auto DrawHist1D(const std::shared_ptr<TH1>& hNoCut, const std::shared_ptr<TH1>& hWithCut, const std::string& path, const ArgsHist1D& args = {}) -> void {
    const auto canvas = Helper::MakeCanvas();
    const auto hStack = std::make_shared<THStack>("hs", "");
    const auto hWithCutCopy = std::shared_ptr<TH1>(dynamic_cast<TH1*>(hWithCut->Clone()));
    const auto myFileName = args.fFileName.empty() ? hNoCut->GetName() : args.fFileName;

    gStyle->SetOptStat(args.fOptStat.c_str());

    hWithCutCopy->SetLineColor(args.fColor1);
    hWithCutCopy->SetFillColorAlpha(args.fColor1, args.fAlphaColor1);
    hNoCut->SetLineColor(args.fColor2);

    auto scale = static_cast<int>(0.66 * hNoCut->GetMaximum() / hWithCutCopy->GetMaximum());
    if (args.fScaled && scale > 5)
        hWithCutCopy->Scale(scale);

    hStack->Add(hNoCut.get(), "sames histo");
    hStack->Add(hWithCutCopy.get(), "sames histo");
    hStack->Draw("hist nostack");
    hStack->SetMinimum(args.fSetMinimum);
    hStack->SetMaximum(std::max({hNoCut->GetMaximum(), hWithCutCopy->GetMaximum()}) + 0.2 * std::max({hNoCut->GetMaximum(), hWithCutCopy->GetMaximum()}));

    hStack->GetXaxis()->SetTitle(args.fLabel.data());
    hStack->GetXaxis()->SetTitleOffset(args.fLabelOffset);
    hStack->GetXaxis()->SetTitleSize(args.fLabelSize);

    if (args.fLogX)
        canvas->SetLogx();
    if (args.fLogY)
        canvas->SetLogy();

    if (!args.fLegend1.empty()) {
        auto legend = new TLegend();
        legend->AddEntry(hNoCut.get(), args.fLegend1.c_str(), "l");
        legend->AddEntry(hWithCutCopy.get(), args.fLegend2.c_str(), "l");
        legend->Draw();
    }

    if (args.fScaled && scale > 2)
        Helper::DrawScaleText(scale);
    for (auto cut : args.fCuts) {
        Helper::DrawLine(TLine(), Helper::Color::kRed, std::min({hNoCut->GetMinimum(), hWithCutCopy->GetMinimum(), std::abs(args.fSetMinimum)}), hNoCut->GetMaximum(), args.fType, cut);
    }
    if (args.fSetStats)
        Helper::SetStatBoxes(canvas, args.fFitFunc != nullptr, hNoCut, hWithCutCopy);
    Helper::SaveCanvas(canvas, path, myFileName);
}

struct ArgsHist2D {
    const std::string& fFileName = "";

    // cuts
    const std::vector<double> fCuts = {};
    const Helper::Line fType = Helper::Line::Vertical;
    const double fX1 = 0;
    const double fY1 = 0;
    const double fX2 = 0;
    const double fY2 = 0;

    // Log scale
    const bool fLogX = false;
    const bool fLogY = false;
    const bool fLogZ = false;

    // option
    const bool fSetStats = false;

    // label
    const std::string fLabelX;
    const float fLabelXOffset = 0.8f;
    const float fLabelXSize = 0.05f;
    const std::string fLabelY;
    const float fLabelYOffset = 1.0f;
    const float fLabelYSize = 0.05f;

};

auto DrawHist2D(const std::shared_ptr<TH2>& h, const std::string& path, const ArgsHist2D& args = {}) -> void {
    const auto canvas = Helper::MakeCanvas();
    const auto myFileName = args.fFileName.empty() ? h->GetName() : args.fFileName;

    args.fSetStats ? h->SetStats(true) : h->SetStats(false);
    h->Draw("COLZ");

    h->GetXaxis()->SetTitle(args.fLabelX.data());
    h->GetXaxis()->SetTitleOffset(args.fLabelXOffset);
    h->GetXaxis()->SetTitleSize(args.fLabelXSize);

    h->GetYaxis()->SetTitle(args.fLabelY.data());
    h->GetYaxis()->SetTitleOffset(args.fLabelYOffset);
    h->GetYaxis()->SetTitleSize(args.fLabelYSize);

    if (args.fLogX)
        canvas->SetLogx();
    if (args.fLogY)
        canvas->SetLogy();
    if (args.fLogZ)
        canvas->SetLogz();

    Helper::SaveCanvas(canvas, path, myFileName);
}
