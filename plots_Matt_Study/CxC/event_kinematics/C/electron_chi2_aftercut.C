#ifdef __CLING__
#pragma cling optimize(0)
#endif
void electron_chi2_aftercut()
{
//=========Macro generated from canvas: c1/
//=========  (Thu Oct 24 12:54:05 2024) by ROOT version 6.30/04
   TCanvas *c1 = new TCanvas("c1", "",0,0,800,600);
   gStyle->SetOptFit(1);
   c1->SetHighLightColor(2);
   c1->Range(-19.73684,-1279.137,19.73684,9380.337);
   c1->SetFillColor(0);
   c1->SetBorderMode(0);
   c1->SetBorderSize(2);
   c1->SetLeftMargin(0.12);
   c1->SetRightMargin(0.12);
   c1->SetTopMargin(0.12);
   c1->SetBottomMargin(0.12);
   c1->SetFrameBorderMode(0);
   c1->SetFrameBorderMode(0);
   
   TH1F *electron_chi2_aftercut__6 = new TH1F("electron_chi2_aftercut__6","",200,-15,15);
   electron_chi2_aftercut__6->SetBinContent(67,4);
   electron_chi2_aftercut__6->SetBinContent(68,24);
   electron_chi2_aftercut__6->SetBinContent(69,17);
   electron_chi2_aftercut__6->SetBinContent(70,27);
   electron_chi2_aftercut__6->SetBinContent(71,19);
   electron_chi2_aftercut__6->SetBinContent(72,26);
   electron_chi2_aftercut__6->SetBinContent(73,22);
   electron_chi2_aftercut__6->SetBinContent(74,22);
   electron_chi2_aftercut__6->SetBinContent(75,22);
   electron_chi2_aftercut__6->SetBinContent(76,30);
   electron_chi2_aftercut__6->SetBinContent(77,23);
   electron_chi2_aftercut__6->SetBinContent(78,14);
   electron_chi2_aftercut__6->SetBinContent(79,36);
   electron_chi2_aftercut__6->SetBinContent(80,20);
   electron_chi2_aftercut__6->SetBinContent(81,36);
   electron_chi2_aftercut__6->SetBinContent(82,26);
   electron_chi2_aftercut__6->SetBinContent(83,47);
   electron_chi2_aftercut__6->SetBinContent(84,51);
   electron_chi2_aftercut__6->SetBinContent(85,64);
   electron_chi2_aftercut__6->SetBinContent(86,87);
   electron_chi2_aftercut__6->SetBinContent(87,100);
   electron_chi2_aftercut__6->SetBinContent(88,177);
   electron_chi2_aftercut__6->SetBinContent(89,285);
   electron_chi2_aftercut__6->SetBinContent(90,401);
   electron_chi2_aftercut__6->SetBinContent(91,579);
   electron_chi2_aftercut__6->SetBinContent(92,880);
   electron_chi2_aftercut__6->SetBinContent(93,1259);
   electron_chi2_aftercut__6->SetBinContent(94,1743);
   electron_chi2_aftercut__6->SetBinContent(95,2296);
   electron_chi2_aftercut__6->SetBinContent(96,3155);
   electron_chi2_aftercut__6->SetBinContent(97,3945);
   electron_chi2_aftercut__6->SetBinContent(98,4896);
   electron_chi2_aftercut__6->SetBinContent(99,5580);
   electron_chi2_aftercut__6->SetBinContent(100,6251);
   electron_chi2_aftercut__6->SetBinContent(101,6751);
   electron_chi2_aftercut__6->SetBinContent(102,6715);
   electron_chi2_aftercut__6->SetBinContent(103,6476);
   electron_chi2_aftercut__6->SetBinContent(104,5907);
   electron_chi2_aftercut__6->SetBinContent(105,5040);
   electron_chi2_aftercut__6->SetBinContent(106,4136);
   electron_chi2_aftercut__6->SetBinContent(107,3261);
   electron_chi2_aftercut__6->SetBinContent(108,2418);
   electron_chi2_aftercut__6->SetBinContent(109,1684);
   electron_chi2_aftercut__6->SetBinContent(110,1136);
   electron_chi2_aftercut__6->SetBinContent(111,754);
   electron_chi2_aftercut__6->SetBinContent(112,480);
   electron_chi2_aftercut__6->SetBinContent(113,335);
   electron_chi2_aftercut__6->SetBinContent(114,195);
   electron_chi2_aftercut__6->SetBinContent(115,111);
   electron_chi2_aftercut__6->SetBinContent(116,48);
   electron_chi2_aftercut__6->SetBinContent(117,35);
   electron_chi2_aftercut__6->SetBinContent(118,25);
   electron_chi2_aftercut__6->SetBinContent(119,13);
   electron_chi2_aftercut__6->SetBinContent(120,8);
   electron_chi2_aftercut__6->SetBinContent(121,5);
   electron_chi2_aftercut__6->SetBinContent(122,4);
   electron_chi2_aftercut__6->SetBinContent(123,4);
   electron_chi2_aftercut__6->SetBinContent(124,3);
   electron_chi2_aftercut__6->SetBinContent(125,1);
   electron_chi2_aftercut__6->SetBinContent(127,1);
   electron_chi2_aftercut__6->SetBinContent(129,1);
   electron_chi2_aftercut__6->SetBinContent(130,1);
   electron_chi2_aftercut__6->SetMaximum(8101.2);
   electron_chi2_aftercut__6->SetEntries(77712);
   electron_chi2_aftercut__6->SetDirectory(nullptr);
   
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
   TText *ptstats_LaTex = ptstats->AddText("Entries = 77712  ");
   ptstats_LaTex = ptstats->AddText("Mean  = 0.1199");
   ptstats_LaTex = ptstats->AddText("Std Dev   = 0.7649");
   ptstats->SetOptStat(1110);
   ptstats->SetOptFit(1111);
   ptstats->Draw();
   electron_chi2_aftercut__6->GetListOfFunctions()->Add(ptstats);
   ptstats->SetParent(electron_chi2_aftercut__6);

   ci = TColor::GetColor("#0c5da5");
   electron_chi2_aftercut__6->SetLineColor(ci);
   electron_chi2_aftercut__6->GetXaxis()->SetTitle("#chi^{2}_{e}");
   electron_chi2_aftercut__6->GetXaxis()->SetLabelFont(42);
   electron_chi2_aftercut__6->GetXaxis()->SetTitleSize(0.05);
   electron_chi2_aftercut__6->GetXaxis()->SetTitleOffset(1);
   electron_chi2_aftercut__6->GetXaxis()->SetTitleFont(42);
   electron_chi2_aftercut__6->GetYaxis()->SetLabelFont(42);
   electron_chi2_aftercut__6->GetYaxis()->SetTitleFont(42);
   electron_chi2_aftercut__6->GetZaxis()->SetLabelFont(42);
   electron_chi2_aftercut__6->GetZaxis()->SetTitleOffset(1);
   electron_chi2_aftercut__6->GetZaxis()->SetTitleFont(42);
   electron_chi2_aftercut__6->Draw("histo");
   
   ptstats = new TPaveStats(0.75,0.835,0.98,0.995,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(1);
   ptstats->SetFillColor(0);
   ptstats->SetTextAlign(12);

   ci = TColor::GetColor("#0c5da5");
   ptstats->SetTextColor(ci);
   ptstats->SetTextFont(42);
   ptstats_LaTex = ptstats->AddText("Entries = 77712  ");
   ptstats_LaTex = ptstats->AddText("Mean  = 0.1199");
   ptstats_LaTex = ptstats->AddText("Std Dev   = 0.7649");
   ptstats->SetOptStat(1110);
   ptstats->SetOptFit(1111);
   ptstats->Draw();
   c1->Modified();
   c1->SetSelected(c1);
}
