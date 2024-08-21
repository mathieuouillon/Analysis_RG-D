#ifdef __CLING__
#pragma cling optimize(0)
#endif
void phi_e()
{
//=========Macro generated from canvas: c1/
//=========  (Wed Aug 21 10:43:41 2024) by ROOT version 6.30/04
   TCanvas *c1 = new TCanvas("c1", "",0,0,800,600);
   c1->SetHighLightColor(2);
   c1->Range(-250,-105323.1,250,772369.5);
   c1->SetFillColor(0);
   c1->SetBorderMode(0);
   c1->SetBorderSize(2);
   c1->SetLeftMargin(0.12);
   c1->SetRightMargin(0.12);
   c1->SetTopMargin(0.12);
   c1->SetBottomMargin(0.12);
   c1->SetFrameBorderMode(0);
   c1->SetFrameBorderMode(0);
   
   TH1F *phi_e__12 = new TH1F("phi_e__12","",50,-190,190);
   phi_e__12->SetBinContent(2,272436);
   phi_e__12->SetBinContent(3,400672);
   phi_e__12->SetBinContent(4,438798);
   phi_e__12->SetBinContent(5,498626);
   phi_e__12->SetBinContent(6,491597);
   phi_e__12->SetBinContent(7,416965);
   phi_e__12->SetBinContent(8,378576);
   phi_e__12->SetBinContent(9,425995);
   phi_e__12->SetBinContent(10,469018);
   phi_e__12->SetBinContent(11,508125);
   phi_e__12->SetBinContent(12,526927);
   phi_e__12->SetBinContent(13,517267);
   phi_e__12->SetBinContent(14,531150);
   phi_e__12->SetBinContent(15,524291);
   phi_e__12->SetBinContent(16,481564);
   phi_e__12->SetBinContent(17,445371);
   phi_e__12->SetBinContent(18,486360);
   phi_e__12->SetBinContent(19,548318);
   phi_e__12->SetBinContent(20,555872);
   phi_e__12->SetBinContent(21,540287);
   phi_e__12->SetBinContent(22,493221);
   phi_e__12->SetBinContent(23,443142);
   phi_e__12->SetBinContent(24,394125);
   phi_e__12->SetBinContent(25,390078);
   phi_e__12->SetBinContent(26,425259);
   phi_e__12->SetBinContent(27,440657);
   phi_e__12->SetBinContent(28,515915);
   phi_e__12->SetBinContent(29,548922);
   phi_e__12->SetBinContent(30,503563);
   phi_e__12->SetBinContent(31,432817);
   phi_e__12->SetBinContent(32,416729);
   phi_e__12->SetBinContent(33,452734);
   phi_e__12->SetBinContent(34,461837);
   phi_e__12->SetBinContent(35,471894);
   phi_e__12->SetBinContent(36,479752);
   phi_e__12->SetBinContent(37,488706);
   phi_e__12->SetBinContent(38,470928);
   phi_e__12->SetBinContent(39,419196);
   phi_e__12->SetBinContent(40,372613);
   phi_e__12->SetBinContent(41,387073);
   phi_e__12->SetBinContent(42,466432);
   phi_e__12->SetBinContent(43,509036);
   phi_e__12->SetBinContent(44,509285);
   phi_e__12->SetBinContent(45,492156);
   phi_e__12->SetBinContent(46,460343);
   phi_e__12->SetBinContent(47,424878);
   phi_e__12->SetBinContent(48,399784);
   phi_e__12->SetBinContent(49,272522);
   phi_e__12->SetMaximum(667046.4);
   phi_e__12->SetEntries(2.200181e+07);
   phi_e__12->SetDirectory(nullptr);
   
   TPaveStats *ptstats = new TPaveStats(0.75,0.835,0.98,0.995,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(1);
   ptstats->SetFillColor(0);
   ptstats->SetTextAlign(12);
   ptstats->SetTextFont(42);
   TText *ptstats_LaTex = ptstats->AddText("Entries =   2.200181e+07");
   ptstats_LaTex = ptstats->AddText("Mean  = -1.414");
   ptstats_LaTex = ptstats->AddText("Std Dev   =  102.4");
   ptstats->SetOptStat(1110);
   ptstats->SetOptFit(0);
   ptstats->Draw();
   phi_e__12->GetListOfFunctions()->Add(ptstats);
   ptstats->SetParent(phi_e__12);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#0c5da5");
   phi_e__12->SetLineColor(ci);
   phi_e__12->GetXaxis()->SetTitle("#phi_{#pi^{-}} [Deg.]");
   phi_e__12->GetXaxis()->SetLabelFont(42);
   phi_e__12->GetXaxis()->SetTitleSize(0.05);
   phi_e__12->GetXaxis()->SetTitleOffset(1);
   phi_e__12->GetXaxis()->SetTitleFont(42);
   phi_e__12->GetYaxis()->SetLabelFont(42);
   phi_e__12->GetYaxis()->SetTitleFont(42);
   phi_e__12->GetZaxis()->SetLabelFont(42);
   phi_e__12->GetZaxis()->SetTitleOffset(1);
   phi_e__12->GetZaxis()->SetTitleFont(42);
   phi_e__12->Draw("histo");
   
   ptstats = new TPaveStats(0.75,0.835,0.98,0.995,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(1);
   ptstats->SetFillColor(0);
   ptstats->SetTextAlign(12);
   ptstats->SetTextFont(42);
   ptstats_LaTex = ptstats->AddText("Entries =   2.200181e+07");
   ptstats_LaTex = ptstats->AddText("Mean  = -1.414");
   ptstats_LaTex = ptstats->AddText("Std Dev   =  102.4");
   ptstats->SetOptStat(1110);
   ptstats->SetOptFit(0);
   ptstats->Draw();
   c1->Modified();
   c1->SetSelected(c1);
}
