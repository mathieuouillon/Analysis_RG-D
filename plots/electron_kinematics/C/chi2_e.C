#ifdef __CLING__
#pragma cling optimize(0)
#endif
void chi2_e()
{
//=========Macro generated from canvas: c1/
//=========  (Wed Aug 21 10:43:41 2024) by ROOT version 6.30/04
   TCanvas *c1 = new TCanvas("c1", "",0,0,800,600);
   c1->SetHighLightColor(2);
   c1->Range(-7.894737,-358726.9,7.894737,2630664);
   c1->SetFillColor(0);
   c1->SetBorderMode(0);
   c1->SetBorderSize(2);
   c1->SetLeftMargin(0.12);
   c1->SetRightMargin(0.12);
   c1->SetTopMargin(0.12);
   c1->SetBottomMargin(0.12);
   c1->SetFrameBorderMode(0);
   c1->SetFrameBorderMode(0);
   
   TH1F *chi2_e__5 = new TH1F("chi2_e__5","",50,-6,6);
   chi2_e__5->SetBinContent(5,19611);
   chi2_e__5->SetBinContent(6,24350);
   chi2_e__5->SetBinContent(7,25359);
   chi2_e__5->SetBinContent(8,26844);
   chi2_e__5->SetBinContent(9,28073);
   chi2_e__5->SetBinContent(10,30144);
   chi2_e__5->SetBinContent(11,32952);
   chi2_e__5->SetBinContent(12,36910);
   chi2_e__5->SetBinContent(13,42503);
   chi2_e__5->SetBinContent(14,50081);
   chi2_e__5->SetBinContent(15,62377);
   chi2_e__5->SetBinContent(16,80620);
   chi2_e__5->SetBinContent(17,107878);
   chi2_e__5->SetBinContent(18,151064);
   chi2_e__5->SetBinContent(19,217815);
   chi2_e__5->SetBinContent(20,316255);
   chi2_e__5->SetBinContent(21,460743);
   chi2_e__5->SetBinContent(22,660996);
   chi2_e__5->SetBinContent(23,922007);
   chi2_e__5->SetBinContent(24,1228166);
   chi2_e__5->SetBinContent(25,1538201);
   chi2_e__5->SetBinContent(26,1874084);
   chi2_e__5->SetBinContent(27,1893281);
   chi2_e__5->SetBinContent(28,1827923);
   chi2_e__5->SetBinContent(29,1609412);
   chi2_e__5->SetBinContent(30,1298686);
   chi2_e__5->SetBinContent(31,970707);
   chi2_e__5->SetBinContent(32,680889);
   chi2_e__5->SetBinContent(33,453959);
   chi2_e__5->SetBinContent(34,291803);
   chi2_e__5->SetBinContent(35,184105);
   chi2_e__5->SetBinContent(36,114687);
   chi2_e__5->SetBinContent(37,71733);
   chi2_e__5->SetBinContent(38,44953);
   chi2_e__5->SetBinContent(39,29038);
   chi2_e__5->SetBinContent(40,19342);
   chi2_e__5->SetBinContent(41,12962);
   chi2_e__5->SetBinContent(42,9167);
   chi2_e__5->SetBinContent(43,6663);
   chi2_e__5->SetBinContent(44,4957);
   chi2_e__5->SetBinContent(45,3937);
   chi2_e__5->SetBinContent(46,2650);
   chi2_e__5->SetMaximum(2271937);
   chi2_e__5->SetEntries(1.746789e+07);
   chi2_e__5->SetDirectory(nullptr);
   
   TPaveStats *ptstats = new TPaveStats(0.75,0.835,0.98,0.995,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(1);
   ptstats->SetFillColor(0);
   ptstats->SetTextAlign(12);
   ptstats->SetTextFont(42);
   TText *ptstats_LaTex = ptstats->AddText("Entries =   1.746789e+07");
   ptstats_LaTex = ptstats->AddText("Mean  = 0.2799");
   ptstats_LaTex = ptstats->AddText("Std Dev   =   1.09");
   ptstats->SetOptStat(1110);
   ptstats->SetOptFit(0);
   ptstats->Draw();
   chi2_e__5->GetListOfFunctions()->Add(ptstats);
   ptstats->SetParent(chi2_e__5);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#0c5da5");
   chi2_e__5->SetLineColor(ci);
   chi2_e__5->GetXaxis()->SetTitle("#chi^{2}_{e}");
   chi2_e__5->GetXaxis()->SetLabelFont(42);
   chi2_e__5->GetXaxis()->SetTitleSize(0.05);
   chi2_e__5->GetXaxis()->SetTitleOffset(1);
   chi2_e__5->GetXaxis()->SetTitleFont(42);
   chi2_e__5->GetYaxis()->SetLabelFont(42);
   chi2_e__5->GetYaxis()->SetTitleFont(42);
   chi2_e__5->GetZaxis()->SetLabelFont(42);
   chi2_e__5->GetZaxis()->SetTitleOffset(1);
   chi2_e__5->GetZaxis()->SetTitleFont(42);
   chi2_e__5->Draw("histo");
   
   ptstats = new TPaveStats(0.75,0.835,0.98,0.995,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(1);
   ptstats->SetFillColor(0);
   ptstats->SetTextAlign(12);
   ptstats->SetTextFont(42);
   ptstats_LaTex = ptstats->AddText("Entries =   1.746789e+07");
   ptstats_LaTex = ptstats->AddText("Mean  = 0.2799");
   ptstats_LaTex = ptstats->AddText("Std Dev   =   1.09");
   ptstats->SetOptStat(1110);
   ptstats->SetOptFit(0);
   ptstats->Draw();
   c1->Modified();
   c1->SetSelected(c1);
}
