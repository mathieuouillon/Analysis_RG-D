#ifdef __CLING__
#pragma cling optimize(0)
#endif
void chi2_e()
{
//=========Macro generated from canvas: c1/
//=========  (Wed Aug 21 10:43:41 2024) by ROOT version 6.30/04
   TCanvas *c1 = new TCanvas("c1", "",0,0,800,600);
   c1->SetHighLightColor(2);
   c1->Range(-19.73684,-464113.3,19.73684,3403498);
   c1->SetFillColor(0);
   c1->SetBorderMode(0);
   c1->SetBorderSize(2);
   c1->SetLeftMargin(0.12);
   c1->SetRightMargin(0.12);
   c1->SetTopMargin(0.12);
   c1->SetBottomMargin(0.12);
   c1->SetFrameBorderMode(0);
   c1->SetFrameBorderMode(0);
   
   TH1F *chi2_e__10 = new TH1F("chi2_e__10","",50,-15,15);
   chi2_e__10->SetBinContent(0,8183639);
   chi2_e__10->SetBinContent(1,14471);
   chi2_e__10->SetBinContent(2,15541);
   chi2_e__10->SetBinContent(3,16360);
   chi2_e__10->SetBinContent(4,17941);
   chi2_e__10->SetBinContent(5,19891);
   chi2_e__10->SetBinContent(6,21791);
   chi2_e__10->SetBinContent(7,24338);
   chi2_e__10->SetBinContent(8,27907);
   chi2_e__10->SetBinContent(9,31684);
   chi2_e__10->SetBinContent(10,36951);
   chi2_e__10->SetBinContent(11,44207);
   chi2_e__10->SetBinContent(12,52699);
   chi2_e__10->SetBinContent(13,65402);
   chi2_e__10->SetBinContent(14,81341);
   chi2_e__10->SetBinContent(15,102968);
   chi2_e__10->SetBinContent(16,129678);
   chi2_e__10->SetBinContent(17,164492);
   chi2_e__10->SetBinContent(18,207834);
   chi2_e__10->SetBinContent(19,264830);
   chi2_e__10->SetBinContent(20,346065);
   chi2_e__10->SetBinContent(21,479687);
   chi2_e__10->SetBinContent(22,720499);
   chi2_e__10->SetBinContent(23,1171317);
   chi2_e__10->SetBinContent(24,1856656);
   chi2_e__10->SetBinContent(25,2449487);
   chi2_e__10->SetBinContent(26,2386179);
   chi2_e__10->SetBinContent(27,1718971);
   chi2_e__10->SetBinContent(28,1048296);
   chi2_e__10->SetBinContent(29,625037);
   chi2_e__10->SetBinContent(30,388479);
   chi2_e__10->SetBinContent(31,252169);
   chi2_e__10->SetBinContent(32,171488);
   chi2_e__10->SetBinContent(33,120587);
   chi2_e__10->SetBinContent(34,87275);
   chi2_e__10->SetBinContent(35,64504);
   chi2_e__10->SetBinContent(36,48193);
   chi2_e__10->SetBinContent(37,37015);
   chi2_e__10->SetBinContent(38,28647);
   chi2_e__10->SetBinContent(39,21677);
   chi2_e__10->SetBinContent(40,16996);
   chi2_e__10->SetBinContent(41,13150);
   chi2_e__10->SetBinContent(42,10104);
   chi2_e__10->SetBinContent(43,8169);
   chi2_e__10->SetBinContent(44,6431);
   chi2_e__10->SetBinContent(45,5064);
   chi2_e__10->SetBinContent(46,3869);
   chi2_e__10->SetBinContent(47,3283);
   chi2_e__10->SetBinContent(48,2624);
   chi2_e__10->SetBinContent(49,2234);
   chi2_e__10->SetBinContent(50,1879);
   chi2_e__10->SetBinContent(51,212723);
   chi2_e__10->SetMaximum(2939384);
   chi2_e__10->SetEntries(2.383272e+07);
   chi2_e__10->SetDirectory(nullptr);
   
   TPaveStats *ptstats = new TPaveStats(0.75,0.835,0.98,0.995,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(1);
   ptstats->SetFillColor(0);
   ptstats->SetTextAlign(12);
   ptstats->SetTextFont(42);
   TText *ptstats_LaTex = ptstats->AddText("Entries =   2.383272e+07");
   ptstats_LaTex = ptstats->AddText("Mean  = -0.3888");
   ptstats_LaTex = ptstats->AddText("Std Dev   =  2.723");
   ptstats->SetOptStat(1110);
   ptstats->SetOptFit(0);
   ptstats->Draw();
   chi2_e__10->GetListOfFunctions()->Add(ptstats);
   ptstats->SetParent(chi2_e__10);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#0c5da5");
   chi2_e__10->SetLineColor(ci);
   chi2_e__10->GetXaxis()->SetTitle("#chi^{2}_{#pi^{+}}");
   chi2_e__10->GetXaxis()->SetLabelFont(42);
   chi2_e__10->GetXaxis()->SetTitleSize(0.05);
   chi2_e__10->GetXaxis()->SetTitleOffset(1);
   chi2_e__10->GetXaxis()->SetTitleFont(42);
   chi2_e__10->GetYaxis()->SetLabelFont(42);
   chi2_e__10->GetYaxis()->SetTitleFont(42);
   chi2_e__10->GetZaxis()->SetLabelFont(42);
   chi2_e__10->GetZaxis()->SetTitleOffset(1);
   chi2_e__10->GetZaxis()->SetTitleFont(42);
   chi2_e__10->Draw("histo");
   
   ptstats = new TPaveStats(0.75,0.835,0.98,0.995,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(1);
   ptstats->SetFillColor(0);
   ptstats->SetTextAlign(12);
   ptstats->SetTextFont(42);
   ptstats_LaTex = ptstats->AddText("Entries =   2.383272e+07");
   ptstats_LaTex = ptstats->AddText("Mean  = -0.3888");
   ptstats_LaTex = ptstats->AddText("Std Dev   =  2.723");
   ptstats->SetOptStat(1110);
   ptstats->SetOptFit(0);
   ptstats->Draw();
   c1->Modified();
   c1->SetSelected(c1);
}
