#ifdef __CLING__
#pragma cling optimize(0)
#endif
void theta_e()
{
//=========Macro generated from canvas: c1/
//=========  (Wed Aug 21 10:43:41 2024) by ROOT version 6.30/04
   TCanvas *c1 = new TCanvas("c1", "",0,0,800,600);
   c1->SetHighLightColor(2);
   c1->Range(-5.526316,-461296,40.52632,3382838);
   c1->SetFillColor(0);
   c1->SetBorderMode(0);
   c1->SetBorderSize(2);
   c1->SetLeftMargin(0.12);
   c1->SetRightMargin(0.12);
   c1->SetTopMargin(0.12);
   c1->SetBottomMargin(0.12);
   c1->SetFrameBorderMode(0);
   c1->SetFrameBorderMode(0);
   
   TH1F *theta_e__3 = new TH1F("theta_e__3","",50,0,35);
   theta_e__3->SetBinContent(1,3);
   theta_e__3->SetBinContent(2,11);
   theta_e__3->SetBinContent(3,33);
   theta_e__3->SetBinContent(4,128);
   theta_e__3->SetBinContent(5,528);
   theta_e__3->SetBinContent(6,2155);
   theta_e__3->SetBinContent(7,12032);
   theta_e__3->SetBinContent(8,819469);
   theta_e__3->SetBinContent(9,2413887);
   theta_e__3->SetBinContent(10,2434618);
   theta_e__3->SetBinContent(11,1995488);
   theta_e__3->SetBinContent(12,1635258);
   theta_e__3->SetBinContent(13,1332871);
   theta_e__3->SetBinContent(14,1093026);
   theta_e__3->SetBinContent(15,899546);
   theta_e__3->SetBinContent(16,741753);
   theta_e__3->SetBinContent(17,612800);
   theta_e__3->SetBinContent(18,512116);
   theta_e__3->SetBinContent(19,431098);
   theta_e__3->SetBinContent(20,364364);
   theta_e__3->SetBinContent(21,312218);
   theta_e__3->SetBinContent(22,265956);
   theta_e__3->SetBinContent(23,227034);
   theta_e__3->SetBinContent(24,191797);
   theta_e__3->SetBinContent(25,164450);
   theta_e__3->SetBinContent(26,141854);
   theta_e__3->SetBinContent(27,121937);
   theta_e__3->SetBinContent(28,104916);
   theta_e__3->SetBinContent(29,90338);
   theta_e__3->SetBinContent(30,77771);
   theta_e__3->SetBinContent(31,67790);
   theta_e__3->SetBinContent(32,59214);
   theta_e__3->SetBinContent(33,52053);
   theta_e__3->SetBinContent(34,44853);
   theta_e__3->SetBinContent(35,37942);
   theta_e__3->SetBinContent(36,31812);
   theta_e__3->SetBinContent(37,26069);
   theta_e__3->SetBinContent(38,20181);
   theta_e__3->SetBinContent(39,14580);
   theta_e__3->SetBinContent(40,10337);
   theta_e__3->SetBinContent(41,6578);
   theta_e__3->SetBinContent(42,3578);
   theta_e__3->SetBinContent(43,1476);
   theta_e__3->SetBinContent(44,498);
   theta_e__3->SetBinContent(45,139);
   theta_e__3->SetBinContent(46,36);
   theta_e__3->SetBinContent(47,16);
   theta_e__3->SetBinContent(48,9);
   theta_e__3->SetBinContent(49,8);
   theta_e__3->SetBinContent(50,9);
   theta_e__3->SetBinContent(51,91254);
   theta_e__3->SetMaximum(2921542);
   theta_e__3->SetEntries(1.746789e+07);
   theta_e__3->SetDirectory(nullptr);
   
   TPaveStats *ptstats = new TPaveStats(0.75,0.835,0.98,0.995,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(1);
   ptstats->SetFillColor(0);
   ptstats->SetTextAlign(12);
   ptstats->SetTextFont(42);
   TText *ptstats_LaTex = ptstats->AddText("Entries =   1.746789e+07");
   ptstats_LaTex = ptstats->AddText("Mean  =  9.384");
   ptstats_LaTex = ptstats->AddText("Std Dev   =  3.919");
   ptstats->SetOptStat(1110);
   ptstats->SetOptFit(0);
   ptstats->Draw();
   theta_e__3->GetListOfFunctions()->Add(ptstats);
   ptstats->SetParent(theta_e__3);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#0c5da5");
   theta_e__3->SetLineColor(ci);
   theta_e__3->GetXaxis()->SetTitle("#theta_{e} [Deg.]");
   theta_e__3->GetXaxis()->SetLabelFont(42);
   theta_e__3->GetXaxis()->SetTitleSize(0.05);
   theta_e__3->GetXaxis()->SetTitleOffset(1);
   theta_e__3->GetXaxis()->SetTitleFont(42);
   theta_e__3->GetYaxis()->SetLabelFont(42);
   theta_e__3->GetYaxis()->SetTitleFont(42);
   theta_e__3->GetZaxis()->SetLabelFont(42);
   theta_e__3->GetZaxis()->SetTitleOffset(1);
   theta_e__3->GetZaxis()->SetTitleFont(42);
   theta_e__3->Draw("histo");
   
   ptstats = new TPaveStats(0.75,0.835,0.98,0.995,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(1);
   ptstats->SetFillColor(0);
   ptstats->SetTextAlign(12);
   ptstats->SetTextFont(42);
   ptstats_LaTex = ptstats->AddText("Entries =   1.746789e+07");
   ptstats_LaTex = ptstats->AddText("Mean  =  9.384");
   ptstats_LaTex = ptstats->AddText("Std Dev   =  3.919");
   ptstats->SetOptStat(1110);
   ptstats->SetOptFit(0);
   ptstats->Draw();
   c1->Modified();
   c1->SetSelected(c1);
}
