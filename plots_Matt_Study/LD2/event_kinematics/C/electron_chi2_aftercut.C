#ifdef __CLING__
#pragma cling optimize(0)
#endif
void electron_chi2_aftercut()
{
//=========Macro generated from canvas: c1/
//=========  (Thu Oct 24 12:56:55 2024) by ROOT version 6.30/04
   TCanvas *c1 = new TCanvas("c1", "",0,0,800,600);
   gStyle->SetOptFit(1);
   c1->SetHighLightColor(2);
   c1->Range(-19.73684,-2054.842,19.73684,15068.84);
   c1->SetFillColor(0);
   c1->SetBorderMode(0);
   c1->SetBorderSize(2);
   c1->SetLeftMargin(0.12);
   c1->SetRightMargin(0.12);
   c1->SetTopMargin(0.12);
   c1->SetBottomMargin(0.12);
   c1->SetFrameBorderMode(0);
   c1->SetFrameBorderMode(0);
   
   TH1F *electron_chi2_aftercut__27 = new TH1F("electron_chi2_aftercut__27","",200,-15,15);
   electron_chi2_aftercut__27->SetBinContent(67,7);
   electron_chi2_aftercut__27->SetBinContent(68,22);
   electron_chi2_aftercut__27->SetBinContent(69,38);
   electron_chi2_aftercut__27->SetBinContent(70,29);
   electron_chi2_aftercut__27->SetBinContent(71,32);
   electron_chi2_aftercut__27->SetBinContent(72,41);
   electron_chi2_aftercut__27->SetBinContent(73,27);
   electron_chi2_aftercut__27->SetBinContent(74,30);
   electron_chi2_aftercut__27->SetBinContent(75,33);
   electron_chi2_aftercut__27->SetBinContent(76,29);
   electron_chi2_aftercut__27->SetBinContent(77,23);
   electron_chi2_aftercut__27->SetBinContent(78,42);
   electron_chi2_aftercut__27->SetBinContent(79,45);
   electron_chi2_aftercut__27->SetBinContent(80,41);
   electron_chi2_aftercut__27->SetBinContent(81,49);
   electron_chi2_aftercut__27->SetBinContent(82,51);
   electron_chi2_aftercut__27->SetBinContent(83,61);
   electron_chi2_aftercut__27->SetBinContent(84,67);
   electron_chi2_aftercut__27->SetBinContent(85,86);
   electron_chi2_aftercut__27->SetBinContent(86,121);
   electron_chi2_aftercut__27->SetBinContent(87,161);
   electron_chi2_aftercut__27->SetBinContent(88,221);
   electron_chi2_aftercut__27->SetBinContent(89,366);
   electron_chi2_aftercut__27->SetBinContent(90,545);
   electron_chi2_aftercut__27->SetBinContent(91,710);
   electron_chi2_aftercut__27->SetBinContent(92,1074);
   electron_chi2_aftercut__27->SetBinContent(93,1638);
   electron_chi2_aftercut__27->SetBinContent(94,2194);
   electron_chi2_aftercut__27->SetBinContent(95,3047);
   electron_chi2_aftercut__27->SetBinContent(96,4051);
   electron_chi2_aftercut__27->SetBinContent(97,5417);
   electron_chi2_aftercut__27->SetBinContent(98,6749);
   electron_chi2_aftercut__27->SetBinContent(99,7927);
   electron_chi2_aftercut__27->SetBinContent(100,9405);
   electron_chi2_aftercut__27->SetBinContent(101,10240);
   electron_chi2_aftercut__27->SetBinContent(102,10828);
   electron_chi2_aftercut__27->SetBinContent(103,10845);
   electron_chi2_aftercut__27->SetBinContent(104,10018);
   electron_chi2_aftercut__27->SetBinContent(105,8770);
   electron_chi2_aftercut__27->SetBinContent(106,7585);
   electron_chi2_aftercut__27->SetBinContent(107,5828);
   electron_chi2_aftercut__27->SetBinContent(108,4534);
   electron_chi2_aftercut__27->SetBinContent(109,3089);
   electron_chi2_aftercut__27->SetBinContent(110,2190);
   electron_chi2_aftercut__27->SetBinContent(111,1513);
   electron_chi2_aftercut__27->SetBinContent(112,940);
   electron_chi2_aftercut__27->SetBinContent(113,546);
   electron_chi2_aftercut__27->SetBinContent(114,339);
   electron_chi2_aftercut__27->SetBinContent(115,189);
   electron_chi2_aftercut__27->SetBinContent(116,100);
   electron_chi2_aftercut__27->SetBinContent(117,80);
   electron_chi2_aftercut__27->SetBinContent(118,35);
   electron_chi2_aftercut__27->SetBinContent(119,27);
   electron_chi2_aftercut__27->SetBinContent(120,13);
   electron_chi2_aftercut__27->SetBinContent(121,10);
   electron_chi2_aftercut__27->SetBinContent(122,6);
   electron_chi2_aftercut__27->SetBinContent(123,4);
   electron_chi2_aftercut__27->SetBinContent(124,3);
   electron_chi2_aftercut__27->SetBinContent(125,2);
   electron_chi2_aftercut__27->SetBinContent(126,1);
   electron_chi2_aftercut__27->SetBinContent(128,1);
   electron_chi2_aftercut__27->SetMaximum(13014);
   electron_chi2_aftercut__27->SetEntries(122115);
   electron_chi2_aftercut__27->SetDirectory(nullptr);
   
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
   TText *ptstats_LaTex = ptstats->AddText("Entries = 122115 ");
   ptstats_LaTex = ptstats->AddText("Mean  = 0.2038");
   ptstats_LaTex = ptstats->AddText("Std Dev   = 0.7561");
   ptstats->SetOptStat(1110);
   ptstats->SetOptFit(1111);
   ptstats->Draw();
   electron_chi2_aftercut__27->GetListOfFunctions()->Add(ptstats);
   ptstats->SetParent(electron_chi2_aftercut__27);

   ci = TColor::GetColor("#0c5da5");
   electron_chi2_aftercut__27->SetLineColor(ci);
   electron_chi2_aftercut__27->GetXaxis()->SetTitle("#chi^{2}_{e}");
   electron_chi2_aftercut__27->GetXaxis()->SetLabelFont(42);
   electron_chi2_aftercut__27->GetXaxis()->SetTitleSize(0.05);
   electron_chi2_aftercut__27->GetXaxis()->SetTitleOffset(1);
   electron_chi2_aftercut__27->GetXaxis()->SetTitleFont(42);
   electron_chi2_aftercut__27->GetYaxis()->SetLabelFont(42);
   electron_chi2_aftercut__27->GetYaxis()->SetTitleFont(42);
   electron_chi2_aftercut__27->GetZaxis()->SetLabelFont(42);
   electron_chi2_aftercut__27->GetZaxis()->SetTitleOffset(1);
   electron_chi2_aftercut__27->GetZaxis()->SetTitleFont(42);
   electron_chi2_aftercut__27->Draw("histo");
   
   ptstats = new TPaveStats(0.75,0.835,0.98,0.995,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(1);
   ptstats->SetFillColor(0);
   ptstats->SetTextAlign(12);

   ci = TColor::GetColor("#0c5da5");
   ptstats->SetTextColor(ci);
   ptstats->SetTextFont(42);
   ptstats_LaTex = ptstats->AddText("Entries = 122115 ");
   ptstats_LaTex = ptstats->AddText("Mean  = 0.2038");
   ptstats_LaTex = ptstats->AddText("Std Dev   = 0.7561");
   ptstats->SetOptStat(1110);
   ptstats->SetOptFit(1111);
   ptstats->Draw();
   c1->Modified();
   c1->SetSelected(c1);
}
