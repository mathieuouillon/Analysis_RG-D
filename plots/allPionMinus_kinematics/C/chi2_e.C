#ifdef __CLING__
#pragma cling optimize(0)
#endif
void chi2_e()
{
//=========Macro generated from canvas: c1/
//=========  (Wed Aug 28 14:16:36 2024) by ROOT version 6.30/04
   TCanvas *c1 = new TCanvas("c1", "",0,0,800,600);
   gStyle->SetOptFit(1);
   c1->SetHighLightColor(2);
   c1->Range(-19.73684,-176992.9,19.73684,1297948);
   c1->SetFillColor(0);
   c1->SetBorderMode(0);
   c1->SetBorderSize(2);
   c1->SetLeftMargin(0.12);
   c1->SetRightMargin(0.12);
   c1->SetTopMargin(0.12);
   c1->SetBottomMargin(0.12);
   c1->SetFrameBorderMode(0);
   c1->SetFrameBorderMode(0);
   
   TH1F *chi2_e__15 = new TH1F("chi2_e__15","",200,-15,15);
   chi2_e__15->SetBinContent(81,108492);
   chi2_e__15->SetBinContent(82,121029);
   chi2_e__15->SetBinContent(83,134867);
   chi2_e__15->SetBinContent(84,150957);
   chi2_e__15->SetBinContent(85,171288);
   chi2_e__15->SetBinContent(86,194427);
   chi2_e__15->SetBinContent(87,223675);
   chi2_e__15->SetBinContent(88,257647);
   chi2_e__15->SetBinContent(89,297388);
   chi2_e__15->SetBinContent(90,346024);
   chi2_e__15->SetBinContent(91,401563);
   chi2_e__15->SetBinContent(92,464262);
   chi2_e__15->SetBinContent(93,531188);
   chi2_e__15->SetBinContent(94,604454);
   chi2_e__15->SetBinContent(95,678349);
   chi2_e__15->SetBinContent(96,750286);
   chi2_e__15->SetBinContent(97,816935);
   chi2_e__15->SetBinContent(98,871663);
   chi2_e__15->SetBinContent(99,909994);
   chi2_e__15->SetBinContent(100,932589);
   chi2_e__15->SetBinContent(101,934129);
   chi2_e__15->SetBinContent(102,916425);
   chi2_e__15->SetBinContent(103,878295);
   chi2_e__15->SetBinContent(104,822967);
   chi2_e__15->SetBinContent(105,756994);
   chi2_e__15->SetBinContent(106,682348);
   chi2_e__15->SetBinContent(107,604753);
   chi2_e__15->SetBinContent(108,525821);
   chi2_e__15->SetBinContent(109,453180);
   chi2_e__15->SetBinContent(110,385621);
   chi2_e__15->SetBinContent(111,326091);
   chi2_e__15->SetBinContent(112,273631);
   chi2_e__15->SetBinContent(113,228490);
   chi2_e__15->SetBinContent(114,192212);
   chi2_e__15->SetBinContent(115,161330);
   chi2_e__15->SetBinContent(116,135063);
   chi2_e__15->SetBinContent(117,114078);
   chi2_e__15->SetBinContent(118,97943);
   chi2_e__15->SetBinContent(119,83729);
   chi2_e__15->SetBinContent(120,71729);
   chi2_e__15->SetMaximum(1120955);
   chi2_e__15->SetEntries(1.761191e+07);
   chi2_e__15->SetDirectory(nullptr);
   
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
   TText *ptstats_LaTex = ptstats->AddText("Entries =   1.761191e+07");
   ptstats_LaTex = ptstats->AddText("Mean  = -0.04396");
   ptstats_LaTex = ptstats->AddText("Std Dev   =  1.177");
   ptstats->SetOptStat(1110);
   ptstats->SetOptFit(1111);
   ptstats->Draw();
   chi2_e__15->GetListOfFunctions()->Add(ptstats);
   ptstats->SetParent(chi2_e__15);

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

   ci = TColor::GetColor("#0c5da5");
   ptstats->SetTextColor(ci);
   ptstats->SetTextFont(42);
   ptstats_LaTex = ptstats->AddText("Entries =   1.761191e+07");
   ptstats_LaTex = ptstats->AddText("Mean  = -0.04396");
   ptstats_LaTex = ptstats->AddText("Std Dev   =  1.177");
   ptstats->SetOptStat(1110);
   ptstats->SetOptFit(1111);
   ptstats->Draw();
   c1->Modified();
   c1->SetSelected(c1);
}
