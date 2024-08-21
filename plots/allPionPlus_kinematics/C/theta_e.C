#ifdef __CLING__
#pragma cling optimize(0)
#endif
void theta_e()
{
//=========Macro generated from canvas: c1/
//=========  (Wed Aug 21 10:43:41 2024) by ROOT version 6.30/04
   TCanvas *c1 = new TCanvas("c1", "",0,0,800,600);
   c1->SetHighLightColor(2);
   c1->Range(-28.42105,-283754.3,208.4211,2080865);
   c1->SetFillColor(0);
   c1->SetBorderMode(0);
   c1->SetBorderSize(2);
   c1->SetLeftMargin(0.12);
   c1->SetRightMargin(0.12);
   c1->SetTopMargin(0.12);
   c1->SetBottomMargin(0.12);
   c1->SetFrameBorderMode(0);
   c1->SetFrameBorderMode(0);
   
   TH1F *theta_e__8 = new TH1F("theta_e__8","",50,0,180);
   theta_e__8->SetBinContent(1,58);
   theta_e__8->SetBinContent(2,2619);
   theta_e__8->SetBinContent(3,96976);
   theta_e__8->SetBinContent(4,510573);
   theta_e__8->SetBinContent(5,1097453);
   theta_e__8->SetBinContent(6,1433790);
   theta_e__8->SetBinContent(7,1497592);
   theta_e__8->SetBinContent(8,1408545);
   theta_e__8->SetBinContent(9,1293950);
   theta_e__8->SetBinContent(10,1354435);
   theta_e__8->SetBinContent(11,1464248);
   theta_e__8->SetBinContent(12,1480135);
   theta_e__8->SetBinContent(13,1364622);
   theta_e__8->SetBinContent(14,1229074);
   theta_e__8->SetBinContent(15,1095568);
   theta_e__8->SetBinContent(16,980480);
   theta_e__8->SetBinContent(17,892605);
   theta_e__8->SetBinContent(18,811535);
   theta_e__8->SetBinContent(19,728489);
   theta_e__8->SetBinContent(20,675526);
   theta_e__8->SetBinContent(21,615712);
   theta_e__8->SetBinContent(22,561530);
   theta_e__8->SetBinContent(23,506133);
   theta_e__8->SetBinContent(24,457386);
   theta_e__8->SetBinContent(25,404192);
   theta_e__8->SetBinContent(26,352390);
   theta_e__8->SetBinContent(27,306191);
   theta_e__8->SetBinContent(28,255133);
   theta_e__8->SetBinContent(29,211335);
   theta_e__8->SetBinContent(30,183538);
   theta_e__8->SetBinContent(31,154975);
   theta_e__8->SetBinContent(32,130188);
   theta_e__8->SetBinContent(33,106323);
   theta_e__8->SetBinContent(34,68939);
   theta_e__8->SetBinContent(35,46473);
   theta_e__8->SetBinContent(36,26391);
   theta_e__8->SetBinContent(37,12260);
   theta_e__8->SetBinContent(38,7672);
   theta_e__8->SetBinContent(39,3651);
   theta_e__8->SetBinContent(40,1709);
   theta_e__8->SetBinContent(41,1008);
   theta_e__8->SetBinContent(42,651);
   theta_e__8->SetBinContent(43,395);
   theta_e__8->SetBinContent(44,189);
   theta_e__8->SetBinContent(45,64);
   theta_e__8->SetBinContent(46,14);
   theta_e__8->SetBinContent(47,4);
   theta_e__8->SetMaximum(1797110);
   theta_e__8->SetEntries(2.383272e+07);
   theta_e__8->SetDirectory(nullptr);
   
   TPaveStats *ptstats = new TPaveStats(0.75,0.835,0.98,0.995,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(1);
   ptstats->SetFillColor(0);
   ptstats->SetTextAlign(12);
   ptstats->SetTextFont(42);
   TText *ptstats_LaTex = ptstats->AddText("Entries =   2.383272e+07");
   ptstats_LaTex = ptstats->AddText("Mean  =  48.67");
   ptstats_LaTex = ptstats->AddText("Std Dev   =  25.12");
   ptstats->SetOptStat(1110);
   ptstats->SetOptFit(0);
   ptstats->Draw();
   theta_e__8->GetListOfFunctions()->Add(ptstats);
   ptstats->SetParent(theta_e__8);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#0c5da5");
   theta_e__8->SetLineColor(ci);
   theta_e__8->GetXaxis()->SetTitle("#theta_{#pi^{+}} [Deg.]");
   theta_e__8->GetXaxis()->SetLabelFont(42);
   theta_e__8->GetXaxis()->SetTitleSize(0.05);
   theta_e__8->GetXaxis()->SetTitleOffset(1);
   theta_e__8->GetXaxis()->SetTitleFont(42);
   theta_e__8->GetYaxis()->SetLabelFont(42);
   theta_e__8->GetYaxis()->SetTitleFont(42);
   theta_e__8->GetZaxis()->SetLabelFont(42);
   theta_e__8->GetZaxis()->SetTitleOffset(1);
   theta_e__8->GetZaxis()->SetTitleFont(42);
   theta_e__8->Draw("histo");
   
   ptstats = new TPaveStats(0.75,0.835,0.98,0.995,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(1);
   ptstats->SetFillColor(0);
   ptstats->SetTextAlign(12);
   ptstats->SetTextFont(42);
   ptstats_LaTex = ptstats->AddText("Entries =   2.383272e+07");
   ptstats_LaTex = ptstats->AddText("Mean  =  48.67");
   ptstats_LaTex = ptstats->AddText("Std Dev   =  25.12");
   ptstats->SetOptStat(1110);
   ptstats->SetOptFit(0);
   ptstats->Draw();
   c1->Modified();
   c1->SetSelected(c1);
}
