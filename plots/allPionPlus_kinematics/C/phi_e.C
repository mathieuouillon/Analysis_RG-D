#ifdef __CLING__
#pragma cling optimize(0)
#endif
void phi_e()
{
//=========Macro generated from canvas: c1/
//=========  (Wed Aug 21 10:43:41 2024) by ROOT version 6.30/04
   TCanvas *c1 = new TCanvas("c1", "",0,0,800,600);
   c1->SetHighLightColor(2);
   c1->Range(-250,-116599.6,250,855064);
   c1->SetFillColor(0);
   c1->SetBorderMode(0);
   c1->SetBorderSize(2);
   c1->SetLeftMargin(0.12);
   c1->SetRightMargin(0.12);
   c1->SetTopMargin(0.12);
   c1->SetBottomMargin(0.12);
   c1->SetFrameBorderMode(0);
   c1->SetFrameBorderMode(0);
   
   TH1F *phi_e__7 = new TH1F("phi_e__7","",50,-190,190);
   phi_e__7->SetBinContent(2,269739);
   phi_e__7->SetBinContent(3,396749);
   phi_e__7->SetBinContent(4,500845);
   phi_e__7->SetBinContent(5,573739);
   phi_e__7->SetBinContent(6,564650);
   phi_e__7->SetBinContent(7,600748);
   phi_e__7->SetBinContent(8,615387);
   phi_e__7->SetBinContent(9,598572);
   phi_e__7->SetBinContent(10,502496);
   phi_e__7->SetBinContent(11,479018);
   phi_e__7->SetBinContent(12,563707);
   phi_e__7->SetBinContent(13,585450);
   phi_e__7->SetBinContent(14,594107);
   phi_e__7->SetBinContent(15,562189);
   phi_e__7->SetBinContent(16,572975);
   phi_e__7->SetBinContent(17,526299);
   phi_e__7->SetBinContent(18,460996);
   phi_e__7->SetBinContent(19,417352);
   phi_e__7->SetBinContent(20,422719);
   phi_e__7->SetBinContent(21,548520);
   phi_e__7->SetBinContent(22,594253);
   phi_e__7->SetBinContent(23,566091);
   phi_e__7->SetBinContent(24,506895);
   phi_e__7->SetBinContent(25,511120);
   phi_e__7->SetBinContent(26,525371);
   phi_e__7->SetBinContent(27,501446);
   phi_e__7->SetBinContent(28,513924);
   phi_e__7->SetBinContent(29,492713);
   phi_e__7->SetBinContent(30,523378);
   phi_e__7->SetBinContent(31,556147);
   phi_e__7->SetBinContent(32,555859);
   phi_e__7->SetBinContent(33,488378);
   phi_e__7->SetBinContent(34,357144);
   phi_e__7->SetBinContent(35,385880);
   phi_e__7->SetBinContent(36,468678);
   phi_e__7->SetBinContent(37,497946);
   phi_e__7->SetBinContent(38,510363);
   phi_e__7->SetBinContent(39,485415);
   phi_e__7->SetBinContent(40,480686);
   phi_e__7->SetBinContent(41,448403);
   phi_e__7->SetBinContent(42,412339);
   phi_e__7->SetBinContent(43,379411);
   phi_e__7->SetBinContent(44,409101);
   phi_e__7->SetBinContent(45,493752);
   phi_e__7->SetBinContent(46,530288);
   phi_e__7->SetBinContent(47,522199);
   phi_e__7->SetBinContent(48,474066);
   phi_e__7->SetBinContent(49,285216);
   phi_e__7->SetMaximum(738464.4);
   phi_e__7->SetEntries(2.383272e+07);
   phi_e__7->SetDirectory(nullptr);
   
   TPaveStats *ptstats = new TPaveStats(0.75,0.835,0.98,0.995,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(1);
   ptstats->SetFillColor(0);
   ptstats->SetTextAlign(12);
   ptstats->SetTextFont(42);
   TText *ptstats_LaTex = ptstats->AddText("Entries =   2.383272e+07");
   ptstats_LaTex = ptstats->AddText("Mean  = -5.528");
   ptstats_LaTex = ptstats->AddText("Std Dev   =  102.9");
   ptstats->SetOptStat(1110);
   ptstats->SetOptFit(0);
   ptstats->Draw();
   phi_e__7->GetListOfFunctions()->Add(ptstats);
   ptstats->SetParent(phi_e__7);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#0c5da5");
   phi_e__7->SetLineColor(ci);
   phi_e__7->GetXaxis()->SetTitle("#phi_{#pi^{+}} [Deg.]");
   phi_e__7->GetXaxis()->SetLabelFont(42);
   phi_e__7->GetXaxis()->SetTitleSize(0.05);
   phi_e__7->GetXaxis()->SetTitleOffset(1);
   phi_e__7->GetXaxis()->SetTitleFont(42);
   phi_e__7->GetYaxis()->SetLabelFont(42);
   phi_e__7->GetYaxis()->SetTitleFont(42);
   phi_e__7->GetZaxis()->SetLabelFont(42);
   phi_e__7->GetZaxis()->SetTitleOffset(1);
   phi_e__7->GetZaxis()->SetTitleFont(42);
   phi_e__7->Draw("histo");
   
   ptstats = new TPaveStats(0.75,0.835,0.98,0.995,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(1);
   ptstats->SetFillColor(0);
   ptstats->SetTextAlign(12);
   ptstats->SetTextFont(42);
   ptstats_LaTex = ptstats->AddText("Entries =   2.383272e+07");
   ptstats_LaTex = ptstats->AddText("Mean  = -5.528");
   ptstats_LaTex = ptstats->AddText("Std Dev   =  102.9");
   ptstats->SetOptStat(1110);
   ptstats->SetOptFit(0);
   ptstats->Draw();
   c1->Modified();
   c1->SetSelected(c1);
}
