#ifdef __CLING__
#pragma cling optimize(0)
#endif
void vz_e()
{
//=========Macro generated from canvas: c1/
//=========  (Wed Aug 21 10:43:41 2024) by ROOT version 6.30/04
   TCanvas *c1 = new TCanvas("c1", "",0,0,800,600);
   c1->SetHighLightColor(2);
   c1->Range(-26.31579,-570661.6,26.31579,4184852);
   c1->SetFillColor(0);
   c1->SetBorderMode(0);
   c1->SetBorderSize(2);
   c1->SetLeftMargin(0.12);
   c1->SetRightMargin(0.12);
   c1->SetTopMargin(0.12);
   c1->SetBottomMargin(0.12);
   c1->SetFrameBorderMode(0);
   c1->SetFrameBorderMode(0);
   
   TH1F *vz_e__14 = new TH1F("vz_e__14","",50,-20,20);
   vz_e__14->SetBinContent(0,299675);
   vz_e__14->SetBinContent(1,37707);
   vz_e__14->SetBinContent(2,49638);
   vz_e__14->SetBinContent(3,61341);
   vz_e__14->SetBinContent(4,66863);
   vz_e__14->SetBinContent(5,72549);
   vz_e__14->SetBinContent(6,84581);
   vz_e__14->SetBinContent(7,103590);
   vz_e__14->SetBinContent(8,130811);
   vz_e__14->SetBinContent(9,163376);
   vz_e__14->SetBinContent(10,193710);
   vz_e__14->SetBinContent(11,239562);
   vz_e__14->SetBinContent(12,342841);
   vz_e__14->SetBinContent(13,552363);
   vz_e__14->SetBinContent(14,963401);
   vz_e__14->SetBinContent(15,1761199);
   vz_e__14->SetBinContent(16,2822624);
   vz_e__14->SetBinContent(17,1635535);
   vz_e__14->SetBinContent(18,980460);
   vz_e__14->SetBinContent(19,1007263);
   vz_e__14->SetBinContent(20,1338110);
   vz_e__14->SetBinContent(21,1980767);
   vz_e__14->SetBinContent(22,3011825);
   vz_e__14->SetBinContent(23,1987743);
   vz_e__14->SetBinContent(24,552862);
   vz_e__14->SetBinContent(25,226443);
   vz_e__14->SetBinContent(26,140197);
   vz_e__14->SetBinContent(27,103853);
   vz_e__14->SetBinContent(28,82879);
   vz_e__14->SetBinContent(29,69025);
   vz_e__14->SetBinContent(30,58175);
   vz_e__14->SetBinContent(31,50269);
   vz_e__14->SetBinContent(32,44060);
   vz_e__14->SetBinContent(33,38708);
   vz_e__14->SetBinContent(34,35292);
   vz_e__14->SetBinContent(35,32844);
   vz_e__14->SetBinContent(36,32116);
   vz_e__14->SetBinContent(37,34218);
   vz_e__14->SetBinContent(38,41997);
   vz_e__14->SetBinContent(39,59449);
   vz_e__14->SetBinContent(40,77038);
   vz_e__14->SetBinContent(41,60900);
   vz_e__14->SetBinContent(42,36220);
   vz_e__14->SetBinContent(43,27490);
   vz_e__14->SetBinContent(44,23789);
   vz_e__14->SetBinContent(45,21361);
   vz_e__14->SetBinContent(46,19402);
   vz_e__14->SetBinContent(47,17692);
   vz_e__14->SetBinContent(48,15890);
   vz_e__14->SetBinContent(49,14509);
   vz_e__14->SetBinContent(50,12999);
   vz_e__14->SetBinContent(51,184601);
   vz_e__14->SetMaximum(3614190);
   vz_e__14->SetEntries(2.200181e+07);
   vz_e__14->SetDirectory(nullptr);
   
   TPaveStats *ptstats = new TPaveStats(0.75,0.835,0.98,0.995,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(1);
   ptstats->SetFillColor(0);
   ptstats->SetTextAlign(12);
   ptstats->SetTextFont(42);
   TText *ptstats_LaTex = ptstats->AddText("Entries =   2.200181e+07");
   ptstats_LaTex = ptstats->AddText("Mean  = -5.188");
   ptstats_LaTex = ptstats->AddText("Std Dev   =  4.566");
   ptstats->SetOptStat(1110);
   ptstats->SetOptFit(0);
   ptstats->Draw();
   vz_e__14->GetListOfFunctions()->Add(ptstats);
   ptstats->SetParent(vz_e__14);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#0c5da5");
   vz_e__14->SetLineColor(ci);
   vz_e__14->GetXaxis()->SetTitle("vz_{#pi^{-}} [cm]");
   vz_e__14->GetXaxis()->SetLabelFont(42);
   vz_e__14->GetXaxis()->SetTitleSize(0.05);
   vz_e__14->GetXaxis()->SetTitleOffset(1);
   vz_e__14->GetXaxis()->SetTitleFont(42);
   vz_e__14->GetYaxis()->SetLabelFont(42);
   vz_e__14->GetYaxis()->SetTitleFont(42);
   vz_e__14->GetZaxis()->SetLabelFont(42);
   vz_e__14->GetZaxis()->SetTitleOffset(1);
   vz_e__14->GetZaxis()->SetTitleFont(42);
   vz_e__14->Draw("histo");
   
   ptstats = new TPaveStats(0.75,0.835,0.98,0.995,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(1);
   ptstats->SetFillColor(0);
   ptstats->SetTextAlign(12);
   ptstats->SetTextFont(42);
   ptstats_LaTex = ptstats->AddText("Entries =   2.200181e+07");
   ptstats_LaTex = ptstats->AddText("Mean  = -5.188");
   ptstats_LaTex = ptstats->AddText("Std Dev   =  4.566");
   ptstats->SetOptStat(1110);
   ptstats->SetOptFit(0);
   ptstats->Draw();
   c1->Modified();
   c1->SetSelected(c1);
}
