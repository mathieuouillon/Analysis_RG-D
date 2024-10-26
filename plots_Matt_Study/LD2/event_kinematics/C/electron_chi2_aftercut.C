#ifdef __CLING__
#pragma cling optimize(0)
#endif
void electron_chi2_aftercut()
{
//=========Macro generated from canvas: c1/
//=========  (Sat Oct 26 16:00:08 2024) by ROOT version 6.30/04
   TCanvas *c1 = new TCanvas("c1", "",0,0,800,600);
   gStyle->SetOptFit(1);
   c1->SetHighLightColor(2);
   c1->Range(-19.73684,-4708.042,19.73684,34525.64);
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
   electron_chi2_aftercut__27->SetBinContent(67,20);
   electron_chi2_aftercut__27->SetBinContent(68,55);
   electron_chi2_aftercut__27->SetBinContent(69,74);
   electron_chi2_aftercut__27->SetBinContent(70,69);
   electron_chi2_aftercut__27->SetBinContent(71,73);
   electron_chi2_aftercut__27->SetBinContent(72,80);
   electron_chi2_aftercut__27->SetBinContent(73,73);
   electron_chi2_aftercut__27->SetBinContent(74,64);
   electron_chi2_aftercut__27->SetBinContent(75,86);
   electron_chi2_aftercut__27->SetBinContent(76,74);
   electron_chi2_aftercut__27->SetBinContent(77,71);
   electron_chi2_aftercut__27->SetBinContent(78,86);
   electron_chi2_aftercut__27->SetBinContent(79,94);
   electron_chi2_aftercut__27->SetBinContent(80,98);
   electron_chi2_aftercut__27->SetBinContent(81,94);
   electron_chi2_aftercut__27->SetBinContent(82,108);
   electron_chi2_aftercut__27->SetBinContent(83,134);
   electron_chi2_aftercut__27->SetBinContent(84,158);
   electron_chi2_aftercut__27->SetBinContent(85,195);
   electron_chi2_aftercut__27->SetBinContent(86,298);
   electron_chi2_aftercut__27->SetBinContent(87,389);
   electron_chi2_aftercut__27->SetBinContent(88,563);
   electron_chi2_aftercut__27->SetBinContent(89,893);
   electron_chi2_aftercut__27->SetBinContent(90,1346);
   electron_chi2_aftercut__27->SetBinContent(91,1960);
   electron_chi2_aftercut__27->SetBinContent(92,3040);
   electron_chi2_aftercut__27->SetBinContent(93,4501);
   electron_chi2_aftercut__27->SetBinContent(94,6169);
   electron_chi2_aftercut__27->SetBinContent(95,8535);
   electron_chi2_aftercut__27->SetBinContent(96,11319);
   electron_chi2_aftercut__27->SetBinContent(97,14406);
   electron_chi2_aftercut__27->SetBinContent(98,17692);
   electron_chi2_aftercut__27->SetBinContent(99,20639);
   electron_chi2_aftercut__27->SetBinContent(100,22963);
   electron_chi2_aftercut__27->SetBinContent(101,24383);
   electron_chi2_aftercut__27->SetBinContent(102,24848);
   electron_chi2_aftercut__27->SetBinContent(103,23897);
   electron_chi2_aftercut__27->SetBinContent(104,21488);
   electron_chi2_aftercut__27->SetBinContent(105,18445);
   electron_chi2_aftercut__27->SetBinContent(106,15365);
   electron_chi2_aftercut__27->SetBinContent(107,11803);
   electron_chi2_aftercut__27->SetBinContent(108,8927);
   electron_chi2_aftercut__27->SetBinContent(109,6204);
   electron_chi2_aftercut__27->SetBinContent(110,4270);
   electron_chi2_aftercut__27->SetBinContent(111,2887);
   electron_chi2_aftercut__27->SetBinContent(112,1762);
   electron_chi2_aftercut__27->SetBinContent(113,1088);
   electron_chi2_aftercut__27->SetBinContent(114,688);
   electron_chi2_aftercut__27->SetBinContent(115,376);
   electron_chi2_aftercut__27->SetBinContent(116,219);
   electron_chi2_aftercut__27->SetBinContent(117,171);
   electron_chi2_aftercut__27->SetBinContent(118,68);
   electron_chi2_aftercut__27->SetBinContent(119,57);
   electron_chi2_aftercut__27->SetBinContent(120,33);
   electron_chi2_aftercut__27->SetBinContent(121,16);
   electron_chi2_aftercut__27->SetBinContent(122,9);
   electron_chi2_aftercut__27->SetBinContent(123,7);
   electron_chi2_aftercut__27->SetBinContent(124,8);
   electron_chi2_aftercut__27->SetBinContent(125,3);
   electron_chi2_aftercut__27->SetBinContent(126,2);
   electron_chi2_aftercut__27->SetBinContent(127,1);
   electron_chi2_aftercut__27->SetBinContent(128,1);
   electron_chi2_aftercut__27->SetBinContent(130,2);
   electron_chi2_aftercut__27->SetBinContent(131,1);
   electron_chi2_aftercut__27->SetBinContent(132,1);
   electron_chi2_aftercut__27->SetMaximum(29817.6);
   electron_chi2_aftercut__27->SetEntries(283449);
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
   TText *ptstats_LaTex = ptstats->AddText("Entries = 283449 ");
   ptstats_LaTex = ptstats->AddText("Mean  = 0.1298");
   ptstats_LaTex = ptstats->AddText("Std Dev   = 0.7538");
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
   ptstats_LaTex = ptstats->AddText("Entries = 283449 ");
   ptstats_LaTex = ptstats->AddText("Mean  = 0.1298");
   ptstats_LaTex = ptstats->AddText("Std Dev   = 0.7538");
   ptstats->SetOptStat(1110);
   ptstats->SetOptFit(1111);
   ptstats->Draw();
   c1->Modified();
   c1->SetSelected(c1);
}
