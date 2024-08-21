#ifdef __CLING__
#pragma cling optimize(0)
#endif
void p_e()
{
//=========Macro generated from canvas: c1/
//=========  (Wed Aug 21 10:43:40 2024) by ROOT version 6.30/04
   TCanvas *c1 = new TCanvas("c1", "",0,0,800,600);
   c1->SetHighLightColor(2);
   c1->Range(-1.736842,-165994.7,12.73684,1217294);
   c1->SetFillColor(0);
   c1->SetBorderMode(0);
   c1->SetBorderSize(2);
   c1->SetLeftMargin(0.12);
   c1->SetRightMargin(0.12);
   c1->SetTopMargin(0.12);
   c1->SetBottomMargin(0.12);
   c1->SetFrameBorderMode(0);
   c1->SetFrameBorderMode(0);
   
   TH1F *p_e__1 = new TH1F("p_e__1","",50,0,11);
   p_e__1->SetBinContent(1,91237);
   p_e__1->SetBinContent(4,36671);
   p_e__1->SetBinContent(5,337693);
   p_e__1->SetBinContent(6,619132);
   p_e__1->SetBinContent(7,876083);
   p_e__1->SetBinContent(8,833238);
   p_e__1->SetBinContent(9,757325);
   p_e__1->SetBinContent(10,700009);
   p_e__1->SetBinContent(11,658872);
   p_e__1->SetBinContent(12,624815);
   p_e__1->SetBinContent(13,600001);
   p_e__1->SetBinContent(14,582051);
   p_e__1->SetBinContent(15,565436);
   p_e__1->SetBinContent(16,553274);
   p_e__1->SetBinContent(17,541225);
   p_e__1->SetBinContent(18,532116);
   p_e__1->SetBinContent(19,521348);
   p_e__1->SetBinContent(20,513471);
   p_e__1->SetBinContent(21,505280);
   p_e__1->SetBinContent(22,499024);
   p_e__1->SetBinContent(23,494650);
   p_e__1->SetBinContent(24,488102);
   p_e__1->SetBinContent(25,475695);
   p_e__1->SetBinContent(26,465323);
   p_e__1->SetBinContent(27,451167);
   p_e__1->SetBinContent(28,436677);
   p_e__1->SetBinContent(29,419215);
   p_e__1->SetBinContent(30,402234);
   p_e__1->SetBinContent(31,382159);
   p_e__1->SetBinContent(32,360435);
   p_e__1->SetBinContent(33,337189);
   p_e__1->SetBinContent(34,310882);
   p_e__1->SetBinContent(35,282752);
   p_e__1->SetBinContent(36,255340);
   p_e__1->SetBinContent(37,223483);
   p_e__1->SetBinContent(38,192004);
   p_e__1->SetBinContent(39,159301);
   p_e__1->SetBinContent(40,126240);
   p_e__1->SetBinContent(41,95032);
   p_e__1->SetBinContent(42,66321);
   p_e__1->SetBinContent(43,43610);
   p_e__1->SetBinContent(44,27444);
   p_e__1->SetBinContent(45,16128);
   p_e__1->SetBinContent(46,6593);
   p_e__1->SetBinContent(47,1004);
   p_e__1->SetBinContent(48,182);
   p_e__1->SetBinContent(49,108);
   p_e__1->SetBinContent(50,71);
   p_e__1->SetBinContent(51,245);
   p_e__1->SetMaximum(1051300);
   p_e__1->SetEntries(1.746789e+07);
   p_e__1->SetDirectory(nullptr);
   
   TPaveStats *ptstats = new TPaveStats(0.75,0.835,0.98,0.995,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(1);
   ptstats->SetFillColor(0);
   ptstats->SetTextAlign(12);
   ptstats->SetTextFont(42);
   TText *ptstats_LaTex = ptstats->AddText("Entries =   1.746789e+07");
   ptstats_LaTex = ptstats->AddText("Mean  =  4.151");
   ptstats_LaTex = ptstats->AddText("Std Dev   =  2.179");
   ptstats->SetOptStat(1110);
   ptstats->SetOptFit(0);
   ptstats->Draw();
   p_e__1->GetListOfFunctions()->Add(ptstats);
   ptstats->SetParent(p_e__1);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#0c5da5");
   p_e__1->SetLineColor(ci);
   p_e__1->GetXaxis()->SetTitle("p_{e} [GeV/c]");
   p_e__1->GetXaxis()->SetLabelFont(42);
   p_e__1->GetXaxis()->SetTitleSize(0.05);
   p_e__1->GetXaxis()->SetTitleOffset(1);
   p_e__1->GetXaxis()->SetTitleFont(42);
   p_e__1->GetYaxis()->SetLabelFont(42);
   p_e__1->GetYaxis()->SetTitleFont(42);
   p_e__1->GetZaxis()->SetLabelFont(42);
   p_e__1->GetZaxis()->SetTitleOffset(1);
   p_e__1->GetZaxis()->SetTitleFont(42);
   p_e__1->Draw("histo");
   
   ptstats = new TPaveStats(0.75,0.835,0.98,0.995,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(1);
   ptstats->SetFillColor(0);
   ptstats->SetTextAlign(12);
   ptstats->SetTextFont(42);
   ptstats_LaTex = ptstats->AddText("Entries =   1.746789e+07");
   ptstats_LaTex = ptstats->AddText("Mean  =  4.151");
   ptstats_LaTex = ptstats->AddText("Std Dev   =  2.179");
   ptstats->SetOptStat(1110);
   ptstats->SetOptFit(0);
   ptstats->Draw();
   c1->Modified();
   c1->SetSelected(c1);
}
