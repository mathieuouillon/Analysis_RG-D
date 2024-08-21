#ifdef __CLING__
#pragma cling optimize(0)
#endif
void vz_e()
{
//=========Macro generated from canvas: c1/
//=========  (Wed Aug 21 10:43:41 2024) by ROOT version 6.30/04
   TCanvas *c1 = new TCanvas("c1", "",0,0,800,600);
   c1->SetHighLightColor(2);
   c1->Range(-26.31579,-392975.2,26.31579,2881818);
   c1->SetFillColor(0);
   c1->SetBorderMode(0);
   c1->SetBorderSize(2);
   c1->SetLeftMargin(0.12);
   c1->SetRightMargin(0.12);
   c1->SetTopMargin(0.12);
   c1->SetBottomMargin(0.12);
   c1->SetFrameBorderMode(0);
   c1->SetFrameBorderMode(0);
   
   TH1F *vz_e__4 = new TH1F("vz_e__4","",50,-20,20);
   vz_e__4->SetBinContent(1,47025);
   vz_e__4->SetBinContent(2,67268);
   vz_e__4->SetBinContent(3,83938);
   vz_e__4->SetBinContent(4,81153);
   vz_e__4->SetBinContent(5,78934);
   vz_e__4->SetBinContent(6,89391);
   vz_e__4->SetBinContent(7,109441);
   vz_e__4->SetBinContent(8,143990);
   vz_e__4->SetBinContent(9,183232);
   vz_e__4->SetBinContent(10,208235);
   vz_e__4->SetBinContent(11,254635);
   vz_e__4->SetBinContent(12,392572);
   vz_e__4->SetBinContent(13,690590);
   vz_e__4->SetBinContent(14,1274521);
   vz_e__4->SetBinContent(15,2053035);
   vz_e__4->SetBinContent(16,2074036);
   vz_e__4->SetBinContent(17,1028394);
   vz_e__4->SetBinContent(18,566784);
   vz_e__4->SetBinContent(19,667454);
   vz_e__4->SetBinContent(20,1101538);
   vz_e__4->SetBinContent(21,1817457);
   vz_e__4->SetBinContent(22,2049918);
   vz_e__4->SetBinContent(23,1041233);
   vz_e__4->SetBinContent(24,324854);
   vz_e__4->SetBinContent(25,147316);
   vz_e__4->SetBinContent(26,178902);
   vz_e__4->SetBinContent(27,59648);
   vz_e__4->SetBinContent(28,44524);
   vz_e__4->SetBinContent(29,35466);
   vz_e__4->SetBinContent(30,29554);
   vz_e__4->SetBinContent(31,25739);
   vz_e__4->SetBinContent(32,23121);
   vz_e__4->SetBinContent(33,21218);
   vz_e__4->SetBinContent(34,20257);
   vz_e__4->SetBinContent(35,20210);
   vz_e__4->SetBinContent(36,22157);
   vz_e__4->SetBinContent(37,27015);
   vz_e__4->SetBinContent(38,38341);
   vz_e__4->SetBinContent(39,60104);
   vz_e__4->SetBinContent(40,75541);
   vz_e__4->SetBinContent(41,52194);
   vz_e__4->SetBinContent(42,27898);
   vz_e__4->SetBinContent(43,21604);
   vz_e__4->SetBinContent(44,19536);
   vz_e__4->SetBinContent(45,17506);
   vz_e__4->SetBinContent(46,16437);
   vz_e__4->SetBinContent(47,15352);
   vz_e__4->SetBinContent(48,13898);
   vz_e__4->SetBinContent(49,12872);
   vz_e__4->SetBinContent(50,11849);
   vz_e__4->SetMaximum(2488843);
   vz_e__4->SetEntries(1.746789e+07);
   vz_e__4->SetDirectory(nullptr);
   
   TPaveStats *ptstats = new TPaveStats(0.75,0.835,0.98,0.995,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(1);
   ptstats->SetFillColor(0);
   ptstats->SetTextAlign(12);
   ptstats->SetTextFont(42);
   TText *ptstats_LaTex = ptstats->AddText("Entries =   1.746789e+07");
   ptstats_LaTex = ptstats->AddText("Mean  = -5.853");
   ptstats_LaTex = ptstats->AddText("Std Dev   =   4.81");
   ptstats->SetOptStat(1110);
   ptstats->SetOptFit(0);
   ptstats->Draw();
   vz_e__4->GetListOfFunctions()->Add(ptstats);
   ptstats->SetParent(vz_e__4);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#0c5da5");
   vz_e__4->SetLineColor(ci);
   vz_e__4->GetXaxis()->SetTitle("vz_{e} [cm]");
   vz_e__4->GetXaxis()->SetLabelFont(42);
   vz_e__4->GetXaxis()->SetTitleSize(0.05);
   vz_e__4->GetXaxis()->SetTitleOffset(1);
   vz_e__4->GetXaxis()->SetTitleFont(42);
   vz_e__4->GetYaxis()->SetLabelFont(42);
   vz_e__4->GetYaxis()->SetTitleFont(42);
   vz_e__4->GetZaxis()->SetLabelFont(42);
   vz_e__4->GetZaxis()->SetTitleOffset(1);
   vz_e__4->GetZaxis()->SetTitleFont(42);
   vz_e__4->Draw("histo");
   
   ptstats = new TPaveStats(0.75,0.835,0.98,0.995,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(1);
   ptstats->SetFillColor(0);
   ptstats->SetTextAlign(12);
   ptstats->SetTextFont(42);
   ptstats_LaTex = ptstats->AddText("Entries =   1.746789e+07");
   ptstats_LaTex = ptstats->AddText("Mean  = -5.853");
   ptstats_LaTex = ptstats->AddText("Std Dev   =   4.81");
   ptstats->SetOptStat(1110);
   ptstats->SetOptFit(0);
   ptstats->Draw();
   c1->Modified();
   c1->SetSelected(c1);
}
