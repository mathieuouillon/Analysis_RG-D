#ifdef __CLING__
#pragma cling optimize(0)
#endif
void p_e()
{
//=========Macro generated from canvas: c1/
//=========  (Wed Aug 21 10:43:41 2024) by ROOT version 6.30/04
   TCanvas *c1 = new TCanvas("c1", "",0,0,800,600);
   c1->SetHighLightColor(2);
   c1->Range(-1.736842,-806134.9,12.73684,5911656);
   c1->SetFillColor(0);
   c1->SetBorderMode(0);
   c1->SetBorderSize(2);
   c1->SetLeftMargin(0.12);
   c1->SetRightMargin(0.12);
   c1->SetTopMargin(0.12);
   c1->SetBottomMargin(0.12);
   c1->SetFrameBorderMode(0);
   c1->SetFrameBorderMode(0);
   
   TH1F *p_e__11 = new TH1F("p_e__11","",50,0,11);
   p_e__11->SetBinContent(1,89001);
   p_e__11->SetBinContent(2,3508549);
   p_e__11->SetBinContent(3,4254601);
   p_e__11->SetBinContent(4,3785962);
   p_e__11->SetBinContent(5,2740363);
   p_e__11->SetBinContent(6,1925878);
   p_e__11->SetBinContent(7,1375007);
   p_e__11->SetBinContent(8,1000952);
   p_e__11->SetBinContent(9,741910);
   p_e__11->SetBinContent(10,555818);
   p_e__11->SetBinContent(11,420931);
   p_e__11->SetBinContent(12,323452);
   p_e__11->SetBinContent(13,248846);
   p_e__11->SetBinContent(14,193229);
   p_e__11->SetBinContent(15,152076);
   p_e__11->SetBinContent(16,120060);
   p_e__11->SetBinContent(17,95550);
   p_e__11->SetBinContent(18,75506);
   p_e__11->SetBinContent(19,61024);
   p_e__11->SetBinContent(20,48714);
   p_e__11->SetBinContent(21,39651);
   p_e__11->SetBinContent(22,31725);
   p_e__11->SetBinContent(23,25664);
   p_e__11->SetBinContent(24,21250);
   p_e__11->SetBinContent(25,17117);
   p_e__11->SetBinContent(26,13797);
   p_e__11->SetBinContent(27,11241);
   p_e__11->SetBinContent(28,9234);
   p_e__11->SetBinContent(29,7809);
   p_e__11->SetBinContent(30,6536);
   p_e__11->SetBinContent(31,5446);
   p_e__11->SetBinContent(32,4791);
   p_e__11->SetBinContent(33,3930);
   p_e__11->SetBinContent(34,3584);
   p_e__11->SetBinContent(35,3226);
   p_e__11->SetBinContent(36,2846);
   p_e__11->SetBinContent(37,2707);
   p_e__11->SetBinContent(38,2333);
   p_e__11->SetBinContent(39,2322);
   p_e__11->SetBinContent(40,2138);
   p_e__11->SetBinContent(41,1958);
   p_e__11->SetBinContent(42,1805);
   p_e__11->SetBinContent(43,1726);
   p_e__11->SetBinContent(44,1611);
   p_e__11->SetBinContent(45,1439);
   p_e__11->SetBinContent(46,1467);
   p_e__11->SetBinContent(47,1382);
   p_e__11->SetBinContent(48,1244);
   p_e__11->SetBinContent(49,1212);
   p_e__11->SetBinContent(50,1083);
   p_e__11->SetBinContent(51,52109);
   p_e__11->SetMaximum(5105521);
   p_e__11->SetEntries(2.200181e+07);
   p_e__11->SetDirectory(nullptr);
   
   TPaveStats *ptstats = new TPaveStats(0.75,0.835,0.98,0.995,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(1);
   ptstats->SetFillColor(0);
   ptstats->SetTextAlign(12);
   ptstats->SetTextFont(42);
   TText *ptstats_LaTex = ptstats->AddText("Entries =   2.200181e+07");
   ptstats_LaTex = ptstats->AddText("Mean  =  1.093");
   ptstats_LaTex = ptstats->AddText("Std Dev   = 0.8823");
   ptstats->SetOptStat(1110);
   ptstats->SetOptFit(0);
   ptstats->Draw();
   p_e__11->GetListOfFunctions()->Add(ptstats);
   ptstats->SetParent(p_e__11);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#0c5da5");
   p_e__11->SetLineColor(ci);
   p_e__11->GetXaxis()->SetTitle("p_{#pi^{-}} [GeV/c]");
   p_e__11->GetXaxis()->SetLabelFont(42);
   p_e__11->GetXaxis()->SetTitleSize(0.05);
   p_e__11->GetXaxis()->SetTitleOffset(1);
   p_e__11->GetXaxis()->SetTitleFont(42);
   p_e__11->GetYaxis()->SetLabelFont(42);
   p_e__11->GetYaxis()->SetTitleFont(42);
   p_e__11->GetZaxis()->SetLabelFont(42);
   p_e__11->GetZaxis()->SetTitleOffset(1);
   p_e__11->GetZaxis()->SetTitleFont(42);
   p_e__11->Draw("histo");
   
   ptstats = new TPaveStats(0.75,0.835,0.98,0.995,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(1);
   ptstats->SetFillColor(0);
   ptstats->SetTextAlign(12);
   ptstats->SetTextFont(42);
   ptstats_LaTex = ptstats->AddText("Entries =   2.200181e+07");
   ptstats_LaTex = ptstats->AddText("Mean  =  1.093");
   ptstats_LaTex = ptstats->AddText("Std Dev   = 0.8823");
   ptstats->SetOptStat(1110);
   ptstats->SetOptFit(0);
   ptstats->Draw();
   c1->Modified();
   c1->SetSelected(c1);
}
