#ifdef __CLING__
#pragma cling optimize(0)
#endif
void chi2_e()
{
//=========Macro generated from canvas: c1/
//=========  (Wed Aug 28 14:16:36 2024) by ROOT version 6.30/04
   TCanvas *c1 = new TCanvas("c1", "",0,0,800,600);
   gStyle->SetOptFit(1);
   c1->SetHighLightColor(2);
   c1->Range(-19.73684,-139694.4,19.73684,1024426);
   c1->SetFillColor(0);
   c1->SetBorderMode(0);
   c1->SetBorderSize(2);
   c1->SetLeftMargin(0.12);
   c1->SetRightMargin(0.12);
   c1->SetTopMargin(0.12);
   c1->SetBottomMargin(0.12);
   c1->SetFrameBorderMode(0);
   c1->SetFrameBorderMode(0);
   
   TH1F *chi2_e__10 = new TH1F("chi2_e__10","",200,-15,15);
   chi2_e__10->SetBinContent(81,111379);
   chi2_e__10->SetBinContent(82,121225);
   chi2_e__10->SetBinContent(83,133100);
   chi2_e__10->SetBinContent(84,146457);
   chi2_e__10->SetBinContent(85,162557);
   chi2_e__10->SetBinContent(86,181446);
   chi2_e__10->SetBinContent(87,203583);
   chi2_e__10->SetBinContent(88,230207);
   chi2_e__10->SetBinContent(89,260816);
   chi2_e__10->SetBinContent(90,296426);
   chi2_e__10->SetBinContent(91,337525);
   chi2_e__10->SetBinContent(92,383326);
   chi2_e__10->SetBinContent(93,433960);
   chi2_e__10->SetBinContent(94,487712);
   chi2_e__10->SetBinContent(95,543218);
   chi2_e__10->SetBinContent(96,596158);
   chi2_e__10->SetBinContent(97,646940);
   chi2_e__10->SetBinContent(98,687490);
   chi2_e__10->SetBinContent(99,718574);
   chi2_e__10->SetBinContent(100,736088);
   chi2_e__10->SetBinContent(101,737276);
   chi2_e__10->SetBinContent(102,722834);
   chi2_e__10->SetBinContent(103,694391);
   chi2_e__10->SetBinContent(104,651712);
   chi2_e__10->SetBinContent(105,600531);
   chi2_e__10->SetBinContent(106,544914);
   chi2_e__10->SetBinContent(107,488911);
   chi2_e__10->SetBinContent(108,432162);
   chi2_e__10->SetBinContent(109,380983);
   chi2_e__10->SetBinContent(110,334126);
   chi2_e__10->SetBinContent(111,291321);
   chi2_e__10->SetBinContent(112,253654);
   chi2_e__10->SetBinContent(113,221561);
   chi2_e__10->SetBinContent(114,193106);
   chi2_e__10->SetBinContent(115,168687);
   chi2_e__10->SetBinContent(116,148264);
   chi2_e__10->SetBinContent(117,132005);
   chi2_e__10->SetBinContent(118,116294);
   chi2_e__10->SetBinContent(119,103569);
   chi2_e__10->SetBinContent(120,93019);
   chi2_e__10->SetMaximum(884731.2);
   chi2_e__10->SetEntries(1.472751e+07);
   chi2_e__10->SetDirectory(nullptr);
   
   TPaveStats *ptstats = new TPaveStats(0.75,0.835,0.98,0.995,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(1);
   ptstats->SetFillColor(0);
   ptstats->SetTextAlign(12);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#0c5da5");
   ptstats->SetTextColor(ci);
   ptstats->SetTextFont(42);
   TText *ptstats_LaTex = ptstats->AddText("Entries =   1.472751e+07");
   ptstats_LaTex = ptstats->AddText("Mean  = -0.02037");
   ptstats_LaTex = ptstats->AddText("Std Dev   =  1.249");
   ptstats->SetOptStat(1110);
   ptstats->SetOptFit(1111);
   ptstats->Draw();
   chi2_e__10->GetListOfFunctions()->Add(ptstats);
   ptstats->SetParent(chi2_e__10);

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

   ci = TColor::GetColor("#0c5da5");
   ptstats->SetTextColor(ci);
   ptstats->SetTextFont(42);
   ptstats_LaTex = ptstats->AddText("Entries =   1.472751e+07");
   ptstats_LaTex = ptstats->AddText("Mean  = -0.02037");
   ptstats_LaTex = ptstats->AddText("Std Dev   =  1.249");
   ptstats->SetOptStat(1110);
   ptstats->SetOptFit(1111);
   ptstats->Draw();
   c1->Modified();
   c1->SetSelected(c1);
}
