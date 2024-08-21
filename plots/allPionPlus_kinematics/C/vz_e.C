#ifdef __CLING__
#pragma cling optimize(0)
#endif
void vz_e()
{
//=========Macro generated from canvas: c1/
//=========  (Wed Aug 21 10:43:41 2024) by ROOT version 6.30/04
   TCanvas *c1 = new TCanvas("c1", "",0,0,800,600);
   c1->SetHighLightColor(2);
   c1->Range(-26.31579,-740640.7,26.31579,5431365);
   c1->SetFillColor(0);
   c1->SetBorderMode(0);
   c1->SetBorderSize(2);
   c1->SetLeftMargin(0.12);
   c1->SetRightMargin(0.12);
   c1->SetTopMargin(0.12);
   c1->SetBottomMargin(0.12);
   c1->SetFrameBorderMode(0);
   c1->SetFrameBorderMode(0);
   
   TH1F *vz_e__9 = new TH1F("vz_e__9","",50,-20,20);
   vz_e__9->SetBinContent(0,68308);
   vz_e__9->SetBinContent(1,8510);
   vz_e__9->SetBinContent(2,12412);
   vz_e__9->SetBinContent(3,19723);
   vz_e__9->SetBinContent(4,27007);
   vz_e__9->SetBinContent(5,28312);
   vz_e__9->SetBinContent(6,28836);
   vz_e__9->SetBinContent(7,31356);
   vz_e__9->SetBinContent(8,37587);
   vz_e__9->SetBinContent(9,51119);
   vz_e__9->SetBinContent(10,66874);
   vz_e__9->SetBinContent(11,68764);
   vz_e__9->SetBinContent(12,72080);
   vz_e__9->SetBinContent(13,107255);
   vz_e__9->SetBinContent(14,234368);
   vz_e__9->SetBinContent(15,938501);
   vz_e__9->SetBinContent(16,3908937);
   vz_e__9->SetBinContent(17,2806632);
   vz_e__9->SetBinContent(18,1331067);
   vz_e__9->SetBinContent(19,926719);
   vz_e__9->SetBinContent(20,931803);
   vz_e__9->SetBinContent(21,1369758);
   vz_e__9->SetBinContent(22,3899374);
   vz_e__9->SetBinContent(23,3689731);
   vz_e__9->SetBinContent(24,1163473);
   vz_e__9->SetBinContent(25,436457);
   vz_e__9->SetBinContent(26,223961);
   vz_e__9->SetBinContent(27,147758);
   vz_e__9->SetBinContent(28,111417);
   vz_e__9->SetBinContent(29,88982);
   vz_e__9->SetBinContent(30,74244);
   vz_e__9->SetBinContent(31,63857);
   vz_e__9->SetBinContent(32,54992);
   vz_e__9->SetBinContent(33,47784);
   vz_e__9->SetBinContent(34,42145);
   vz_e__9->SetBinContent(35,37708);
   vz_e__9->SetBinContent(36,34458);
   vz_e__9->SetBinContent(37,32384);
   vz_e__9->SetBinContent(38,32577);
   vz_e__9->SetBinContent(39,39907);
   vz_e__9->SetBinContent(40,65123);
   vz_e__9->SetBinContent(41,84829);
   vz_e__9->SetBinContent(42,58462);
   vz_e__9->SetBinContent(43,37046);
   vz_e__9->SetBinContent(44,29380);
   vz_e__9->SetBinContent(45,25085);
   vz_e__9->SetBinContent(46,22303);
   vz_e__9->SetBinContent(47,20347);
   vz_e__9->SetBinContent(48,18262);
   vz_e__9->SetBinContent(49,16699);
   vz_e__9->SetBinContent(50,14729);
   vz_e__9->SetBinContent(51,143317);
   vz_e__9->SetMaximum(4690724);
   vz_e__9->SetEntries(2.383272e+07);
   vz_e__9->SetDirectory(nullptr);
   
   TPaveStats *ptstats = new TPaveStats(0.75,0.835,0.98,0.995,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(1);
   ptstats->SetFillColor(0);
   ptstats->SetTextAlign(12);
   ptstats->SetTextFont(42);
   TText *ptstats_LaTex = ptstats->AddText("Entries =   2.383272e+07");
   ptstats_LaTex = ptstats->AddText("Mean  = -4.163");
   ptstats_LaTex = ptstats->AddText("Std Dev   =  4.058");
   ptstats->SetOptStat(1110);
   ptstats->SetOptFit(0);
   ptstats->Draw();
   vz_e__9->GetListOfFunctions()->Add(ptstats);
   ptstats->SetParent(vz_e__9);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#0c5da5");
   vz_e__9->SetLineColor(ci);
   vz_e__9->GetXaxis()->SetTitle("vz_{#pi^{+}} [cm]");
   vz_e__9->GetXaxis()->SetLabelFont(42);
   vz_e__9->GetXaxis()->SetTitleSize(0.05);
   vz_e__9->GetXaxis()->SetTitleOffset(1);
   vz_e__9->GetXaxis()->SetTitleFont(42);
   vz_e__9->GetYaxis()->SetLabelFont(42);
   vz_e__9->GetYaxis()->SetTitleFont(42);
   vz_e__9->GetZaxis()->SetLabelFont(42);
   vz_e__9->GetZaxis()->SetTitleOffset(1);
   vz_e__9->GetZaxis()->SetTitleFont(42);
   vz_e__9->Draw("histo");
   
   ptstats = new TPaveStats(0.75,0.835,0.98,0.995,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(1);
   ptstats->SetFillColor(0);
   ptstats->SetTextAlign(12);
   ptstats->SetTextFont(42);
   ptstats_LaTex = ptstats->AddText("Entries =   2.383272e+07");
   ptstats_LaTex = ptstats->AddText("Mean  = -4.163");
   ptstats_LaTex = ptstats->AddText("Std Dev   =  4.058");
   ptstats->SetOptStat(1110);
   ptstats->SetOptFit(0);
   ptstats->Draw();
   c1->Modified();
   c1->SetSelected(c1);
}
