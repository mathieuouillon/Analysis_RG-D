#ifdef __CLING__
#pragma cling optimize(0)
#endif
void p_e()
{
//=========Macro generated from canvas: c1/
//=========  (Wed Aug 21 10:43:41 2024) by ROOT version 6.30/04
   TCanvas *c1 = new TCanvas("c1", "",0,0,800,600);
   c1->SetHighLightColor(2);
   c1->Range(-1.736842,-1173521,12.73684,8605821);
   c1->SetFillColor(0);
   c1->SetBorderMode(0);
   c1->SetBorderSize(2);
   c1->SetLeftMargin(0.12);
   c1->SetRightMargin(0.12);
   c1->SetTopMargin(0.12);
   c1->SetBottomMargin(0.12);
   c1->SetFrameBorderMode(0);
   c1->SetFrameBorderMode(0);
   
   TH1F *p_e__6 = new TH1F("p_e__6","",50,0,11);
   p_e__6->SetBinContent(1,142946);
   p_e__6->SetBinContent(2,6193583);
   p_e__6->SetBinContent(3,5337378);
   p_e__6->SetBinContent(4,3566632);
   p_e__6->SetBinContent(5,2357757);
   p_e__6->SetBinContent(6,1633766);
   p_e__6->SetBinContent(7,1156169);
   p_e__6->SetBinContent(8,827235);
   p_e__6->SetBinContent(9,600003);
   p_e__6->SetBinContent(10,443101);
   p_e__6->SetBinContent(11,330314);
   p_e__6->SetBinContent(12,250267);
   p_e__6->SetBinContent(13,191132);
   p_e__6->SetBinContent(14,149012);
   p_e__6->SetBinContent(15,118769);
   p_e__6->SetBinContent(16,92587);
   p_e__6->SetBinContent(17,73450);
   p_e__6->SetBinContent(18,57804);
   p_e__6->SetBinContent(19,45445);
   p_e__6->SetBinContent(20,36607);
   p_e__6->SetBinContent(21,29043);
   p_e__6->SetBinContent(22,22882);
   p_e__6->SetBinContent(23,20690);
   p_e__6->SetBinContent(24,18338);
   p_e__6->SetBinContent(25,14841);
   p_e__6->SetBinContent(26,11951);
   p_e__6->SetBinContent(27,9872);
   p_e__6->SetBinContent(28,7963);
   p_e__6->SetBinContent(29,6565);
   p_e__6->SetBinContent(30,5300);
   p_e__6->SetBinContent(31,4334);
   p_e__6->SetBinContent(32,3725);
   p_e__6->SetBinContent(33,3199);
   p_e__6->SetBinContent(34,2692);
   p_e__6->SetBinContent(35,2361);
   p_e__6->SetBinContent(36,2158);
   p_e__6->SetBinContent(37,1890);
   p_e__6->SetBinContent(38,1805);
   p_e__6->SetBinContent(39,1668);
   p_e__6->SetBinContent(40,1521);
   p_e__6->SetBinContent(41,1519);
   p_e__6->SetBinContent(42,1363);
   p_e__6->SetBinContent(43,1330);
   p_e__6->SetBinContent(44,1316);
   p_e__6->SetBinContent(45,1150);
   p_e__6->SetBinContent(46,1142);
   p_e__6->SetBinContent(47,1132);
   p_e__6->SetBinContent(48,1082);
   p_e__6->SetBinContent(49,1026);
   p_e__6->SetBinContent(50,970);
   p_e__6->SetBinContent(51,43934);
   p_e__6->SetMaximum(7432300);
   p_e__6->SetEntries(2.383272e+07);
   p_e__6->SetDirectory(nullptr);
   
   TPaveStats *ptstats = new TPaveStats(0.75,0.835,0.98,0.995,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(1);
   ptstats->SetFillColor(0);
   ptstats->SetTextAlign(12);
   ptstats->SetTextFont(42);
   TText *ptstats_LaTex = ptstats->AddText("Entries =   2.383272e+07");
   ptstats_LaTex = ptstats->AddText("Mean  = 0.9266");
   ptstats_LaTex = ptstats->AddText("Std Dev   = 0.8071");
   ptstats->SetOptStat(1110);
   ptstats->SetOptFit(0);
   ptstats->Draw();
   p_e__6->GetListOfFunctions()->Add(ptstats);
   ptstats->SetParent(p_e__6);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#0c5da5");
   p_e__6->SetLineColor(ci);
   p_e__6->GetXaxis()->SetTitle("p_{#pi^{+}} [GeV/c]");
   p_e__6->GetXaxis()->SetLabelFont(42);
   p_e__6->GetXaxis()->SetTitleSize(0.05);
   p_e__6->GetXaxis()->SetTitleOffset(1);
   p_e__6->GetXaxis()->SetTitleFont(42);
   p_e__6->GetYaxis()->SetLabelFont(42);
   p_e__6->GetYaxis()->SetTitleFont(42);
   p_e__6->GetZaxis()->SetLabelFont(42);
   p_e__6->GetZaxis()->SetTitleOffset(1);
   p_e__6->GetZaxis()->SetTitleFont(42);
   p_e__6->Draw("histo");
   
   ptstats = new TPaveStats(0.75,0.835,0.98,0.995,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(1);
   ptstats->SetFillColor(0);
   ptstats->SetTextAlign(12);
   ptstats->SetTextFont(42);
   ptstats_LaTex = ptstats->AddText("Entries =   2.383272e+07");
   ptstats_LaTex = ptstats->AddText("Mean  = 0.9266");
   ptstats_LaTex = ptstats->AddText("Std Dev   = 0.8071");
   ptstats->SetOptStat(1110);
   ptstats->SetOptFit(0);
   ptstats->Draw();
   c1->Modified();
   c1->SetSelected(c1);
}
