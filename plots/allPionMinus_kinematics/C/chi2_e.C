#ifdef __CLING__
#pragma cling optimize(0)
#endif
void chi2_e()
{
//=========Macro generated from canvas: c1/
//=========  (Wed Aug 21 10:43:41 2024) by ROOT version 6.30/04
   TCanvas *c1 = new TCanvas("c1", "",0,0,800,600);
   c1->SetHighLightColor(2);
   c1->Range(-19.73684,-626014,19.73684,4590770);
   c1->SetFillColor(0);
   c1->SetBorderMode(0);
   c1->SetBorderSize(2);
   c1->SetLeftMargin(0.12);
   c1->SetRightMargin(0.12);
   c1->SetTopMargin(0.12);
   c1->SetBottomMargin(0.12);
   c1->SetFrameBorderMode(0);
   c1->SetFrameBorderMode(0);
   
   TH1F *chi2_e__15 = new TH1F("chi2_e__15","",50,-15,15);
   chi2_e__15->SetBinContent(0,3998111);
   chi2_e__15->SetBinContent(1,6335);
   chi2_e__15->SetBinContent(2,6117);
   chi2_e__15->SetBinContent(3,6211);
   chi2_e__15->SetBinContent(4,6140);
   chi2_e__15->SetBinContent(5,6452);
   chi2_e__15->SetBinContent(6,7476);
   chi2_e__15->SetBinContent(7,9039);
   chi2_e__15->SetBinContent(8,10835);
   chi2_e__15->SetBinContent(9,13482);
   chi2_e__15->SetBinContent(10,16987);
   chi2_e__15->SetBinContent(11,21747);
   chi2_e__15->SetBinContent(12,27530);
   chi2_e__15->SetBinContent(13,34964);
   chi2_e__15->SetBinContent(14,44838);
   chi2_e__15->SetBinContent(15,59784);
   chi2_e__15->SetBinContent(16,80383);
   chi2_e__15->SetBinContent(17,111368);
   chi2_e__15->SetBinContent(18,153975);
   chi2_e__15->SetBinContent(19,216818);
   chi2_e__15->SetBinContent(20,311530);
   chi2_e__15->SetBinContent(21,474239);
   chi2_e__15->SetBinContent(22,798599);
   chi2_e__15->SetBinContent(23,1446562);
   chi2_e__15->SetBinContent(24,2453258);
   chi2_e__15->SetBinContent(25,3303963);
   chi2_e__15->SetBinContent(26,3237718);
   chi2_e__15->SetBinContent(27,2287575);
   chi2_e__15->SetBinContent(28,1253411);
   chi2_e__15->SetBinContent(29,616566);
   chi2_e__15->SetBinContent(30,311877);
   chi2_e__15->SetBinContent(31,174732);
   chi2_e__15->SetBinContent(32,107369);
   chi2_e__15->SetBinContent(33,70987);
   chi2_e__15->SetBinContent(34,49111);
   chi2_e__15->SetBinContent(35,35106);
   chi2_e__15->SetBinContent(36,26027);
   chi2_e__15->SetBinContent(37,19146);
   chi2_e__15->SetBinContent(38,14513);
   chi2_e__15->SetBinContent(39,10904);
   chi2_e__15->SetBinContent(40,8022);
   chi2_e__15->SetBinContent(41,5848);
   chi2_e__15->SetBinContent(42,4111);
   chi2_e__15->SetBinContent(43,2760);
   chi2_e__15->SetBinContent(44,1971);
   chi2_e__15->SetBinContent(45,1333);
   chi2_e__15->SetBinContent(46,854);
   chi2_e__15->SetBinContent(47,658);
   chi2_e__15->SetBinContent(48,613);
   chi2_e__15->SetBinContent(49,577);
   chi2_e__15->SetBinContent(50,611);
   chi2_e__15->SetBinContent(51,132669);
   chi2_e__15->SetMaximum(3964756);
   chi2_e__15->SetEntries(2.200181e+07);
   chi2_e__15->SetDirectory(nullptr);
   
   TPaveStats *ptstats = new TPaveStats(0.75,0.835,0.98,0.995,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(1);
   ptstats->SetFillColor(0);
   ptstats->SetTextAlign(12);
   ptstats->SetTextFont(42);
   TText *ptstats_LaTex = ptstats->AddText("Entries =   2.200181e+07");
   ptstats_LaTex = ptstats->AddText("Mean  = -0.2637");
   ptstats_LaTex = ptstats->AddText("Std Dev   =      2");
   ptstats->SetOptStat(1110);
   ptstats->SetOptFit(0);
   ptstats->Draw();
   chi2_e__15->GetListOfFunctions()->Add(ptstats);
   ptstats->SetParent(chi2_e__15);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#0c5da5");
   chi2_e__15->SetLineColor(ci);
   chi2_e__15->GetXaxis()->SetTitle("#chi^{2}_{#pi^{-}}");
   chi2_e__15->GetXaxis()->SetLabelFont(42);
   chi2_e__15->GetXaxis()->SetTitleSize(0.05);
   chi2_e__15->GetXaxis()->SetTitleOffset(1);
   chi2_e__15->GetXaxis()->SetTitleFont(42);
   chi2_e__15->GetYaxis()->SetLabelFont(42);
   chi2_e__15->GetYaxis()->SetTitleFont(42);
   chi2_e__15->GetZaxis()->SetLabelFont(42);
   chi2_e__15->GetZaxis()->SetTitleOffset(1);
   chi2_e__15->GetZaxis()->SetTitleFont(42);
   chi2_e__15->Draw("histo");
   
   ptstats = new TPaveStats(0.75,0.835,0.98,0.995,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(1);
   ptstats->SetFillColor(0);
   ptstats->SetTextAlign(12);
   ptstats->SetTextFont(42);
   ptstats_LaTex = ptstats->AddText("Entries =   2.200181e+07");
   ptstats_LaTex = ptstats->AddText("Mean  = -0.2637");
   ptstats_LaTex = ptstats->AddText("Std Dev   =      2");
   ptstats->SetOptStat(1110);
   ptstats->SetOptFit(0);
   ptstats->Draw();
   c1->Modified();
   c1->SetSelected(c1);
}
