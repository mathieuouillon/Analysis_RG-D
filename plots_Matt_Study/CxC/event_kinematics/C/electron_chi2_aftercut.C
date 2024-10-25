#ifdef __CLING__
#pragma cling optimize(0)
#endif
void electron_chi2_aftercut()
{
//=========Macro generated from canvas: c1/
//=========  (Fri Oct 25 11:19:07 2024) by ROOT version 6.30/04
   TCanvas *c1 = new TCanvas("c1", "",0,0,800,600);
   gStyle->SetOptFit(1);
   c1->SetHighLightColor(2);
   c1->Range(-19.73684,-1504.989,19.73684,11036.59);
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
   electron_chi2_aftercut__6->SetBinContent(67,5);
   electron_chi2_aftercut__6->SetBinContent(68,27);
   electron_chi2_aftercut__6->SetBinContent(69,20);
   electron_chi2_aftercut__6->SetBinContent(70,31);
   electron_chi2_aftercut__6->SetBinContent(71,26);
   electron_chi2_aftercut__6->SetBinContent(72,30);
   electron_chi2_aftercut__6->SetBinContent(73,28);
   electron_chi2_aftercut__6->SetBinContent(74,26);
   electron_chi2_aftercut__6->SetBinContent(75,26);
   electron_chi2_aftercut__6->SetBinContent(76,36);
   electron_chi2_aftercut__6->SetBinContent(77,28);
   electron_chi2_aftercut__6->SetBinContent(78,20);
   electron_chi2_aftercut__6->SetBinContent(79,40);
   electron_chi2_aftercut__6->SetBinContent(80,23);
   electron_chi2_aftercut__6->SetBinContent(81,43);
   electron_chi2_aftercut__6->SetBinContent(82,32);
   electron_chi2_aftercut__6->SetBinContent(83,57);
   electron_chi2_aftercut__6->SetBinContent(84,60);
   electron_chi2_aftercut__6->SetBinContent(85,78);
   electron_chi2_aftercut__6->SetBinContent(86,108);
   electron_chi2_aftercut__6->SetBinContent(87,120);
   electron_chi2_aftercut__6->SetBinContent(88,214);
   electron_chi2_aftercut__6->SetBinContent(89,327);
   electron_chi2_aftercut__6->SetBinContent(90,475);
   electron_chi2_aftercut__6->SetBinContent(91,694);
   electron_chi2_aftercut__6->SetBinContent(92,1038);
   electron_chi2_aftercut__6->SetBinContent(93,1533);
   electron_chi2_aftercut__6->SetBinContent(94,2102);
   electron_chi2_aftercut__6->SetBinContent(95,2799);
   electron_chi2_aftercut__6->SetBinContent(96,3824);
   electron_chi2_aftercut__6->SetBinContent(97,4746);
   electron_chi2_aftercut__6->SetBinContent(98,5819);
   electron_chi2_aftercut__6->SetBinContent(99,6660);
   electron_chi2_aftercut__6->SetBinContent(100,7454);
   electron_chi2_aftercut__6->SetBinContent(101,7943);
   electron_chi2_aftercut__6->SetBinContent(102,7908);
   electron_chi2_aftercut__6->SetBinContent(103,7518);
   electron_chi2_aftercut__6->SetBinContent(104,6849);
   electron_chi2_aftercut__6->SetBinContent(105,5811);
   electron_chi2_aftercut__6->SetBinContent(106,4802);
   electron_chi2_aftercut__6->SetBinContent(107,3818);
   electron_chi2_aftercut__6->SetBinContent(108,2778);
   electron_chi2_aftercut__6->SetBinContent(109,1940);
   electron_chi2_aftercut__6->SetBinContent(110,1316);
   electron_chi2_aftercut__6->SetBinContent(111,873);
   electron_chi2_aftercut__6->SetBinContent(112,565);
   electron_chi2_aftercut__6->SetBinContent(113,383);
   electron_chi2_aftercut__6->SetBinContent(114,221);
   electron_chi2_aftercut__6->SetBinContent(115,131);
   electron_chi2_aftercut__6->SetBinContent(116,60);
   electron_chi2_aftercut__6->SetBinContent(117,36);
   electron_chi2_aftercut__6->SetBinContent(118,25);
   electron_chi2_aftercut__6->SetBinContent(119,16);
   electron_chi2_aftercut__6->SetBinContent(120,9);
   electron_chi2_aftercut__6->SetBinContent(121,6);
   electron_chi2_aftercut__6->SetBinContent(122,4);
   electron_chi2_aftercut__6->SetBinContent(123,4);
   electron_chi2_aftercut__6->SetBinContent(124,3);
   electron_chi2_aftercut__6->SetBinContent(125,1);
   electron_chi2_aftercut__6->SetBinContent(127,1);
   electron_chi2_aftercut__6->SetBinContent(129,1);
   electron_chi2_aftercut__6->SetBinContent(130,1);
   electron_chi2_aftercut__6->SetMaximum(9531.6);
   electron_chi2_aftercut__6->SetEntries(91572);
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
   TText *ptstats_LaTex = ptstats->AddText("Entries = 91572  ");
   ptstats_LaTex = ptstats->AddText("Mean  = 0.1097");
   ptstats_LaTex = ptstats->AddText("Std Dev   = 0.7656");
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
   ptstats_LaTex = ptstats->AddText("Entries = 91572  ");
   ptstats_LaTex = ptstats->AddText("Mean  = 0.1097");
   ptstats_LaTex = ptstats->AddText("Std Dev   = 0.7656");
   ptstats->SetOptStat(1110);
   ptstats->SetOptFit(1111);
   ptstats->Draw();
   c1->Modified();
   c1->SetSelected(c1);
}
