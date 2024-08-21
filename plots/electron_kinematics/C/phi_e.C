#ifdef __CLING__
#pragma cling optimize(0)
#endif
void phi_e()
{
//=========Macro generated from canvas: c1/
//=========  (Wed Aug 21 10:43:40 2024) by ROOT version 6.30/04
   TCanvas *c1 = new TCanvas("c1", "",0,0,800,600);
   c1->SetHighLightColor(2);
   c1->Range(-250,-120555.3,250,884072.1);
   c1->SetFillColor(0);
   c1->SetBorderMode(0);
   c1->SetBorderSize(2);
   c1->SetLeftMargin(0.12);
   c1->SetRightMargin(0.12);
   c1->SetTopMargin(0.12);
   c1->SetBottomMargin(0.12);
   c1->SetFrameBorderMode(0);
   c1->SetFrameBorderMode(0);
   
   TH1F *phi_e__2 = new TH1F("phi_e__2","",50,-190,190);
   phi_e__2->SetBinContent(2,375996);
   phi_e__2->SetBinContent(3,577813);
   phi_e__2->SetBinContent(4,586547);
   phi_e__2->SetBinContent(5,412215);
   phi_e__2->SetBinContent(6,195944);
   phi_e__2->SetBinContent(7,87636);
   phi_e__2->SetBinContent(8,149785);
   phi_e__2->SetBinContent(9,429555);
   phi_e__2->SetBinContent(10,547283);
   phi_e__2->SetBinContent(11,577724);
   phi_e__2->SetBinContent(12,567148);
   phi_e__2->SetBinContent(13,380607);
   phi_e__2->SetBinContent(14,176071);
   phi_e__2->SetBinContent(15,77848);
   phi_e__2->SetBinContent(16,194403);
   phi_e__2->SetBinContent(17,455908);
   phi_e__2->SetBinContent(18,544455);
   phi_e__2->SetBinContent(19,582524);
   phi_e__2->SetBinContent(20,559591);
   phi_e__2->SetBinContent(21,334720);
   phi_e__2->SetBinContent(22,152710);
   phi_e__2->SetBinContent(23,66474);
   phi_e__2->SetBinContent(24,228451);
   phi_e__2->SetBinContent(25,470240);
   phi_e__2->SetBinContent(26,636264);
   phi_e__2->SetBinContent(27,575813);
   phi_e__2->SetBinContent(28,523114);
   phi_e__2->SetBinContent(29,303807);
   phi_e__2->SetBinContent(30,133735);
   phi_e__2->SetBinContent(31,60866);
   phi_e__2->SetBinContent(32,261654);
   phi_e__2->SetBinContent(33,485476);
   phi_e__2->SetBinContent(34,569636);
   phi_e__2->SetBinContent(35,596261);
   phi_e__2->SetBinContent(36,540519);
   phi_e__2->SetBinContent(37,303552);
   phi_e__2->SetBinContent(38,133407);
   phi_e__2->SetBinContent(39,69143);
   phi_e__2->SetBinContent(40,279588);
   phi_e__2->SetBinContent(41,491627);
   phi_e__2->SetBinContent(42,560215);
   phi_e__2->SetBinContent(43,583845);
   phi_e__2->SetBinContent(44,508070);
   phi_e__2->SetBinContent(45,264518);
   phi_e__2->SetBinContent(46,114505);
   phi_e__2->SetBinContent(47,77470);
   phi_e__2->SetBinContent(48,320960);
   phi_e__2->SetBinContent(49,342194);
   phi_e__2->SetMaximum(763516.8);
   phi_e__2->SetEntries(1.746789e+07);
   phi_e__2->SetDirectory(nullptr);
   
   TPaveStats *ptstats = new TPaveStats(0.75,0.835,0.98,0.995,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(1);
   ptstats->SetFillColor(0);
   ptstats->SetTextAlign(12);
   ptstats->SetTextFont(42);
   TText *ptstats_LaTex = ptstats->AddText("Entries =   1.746789e+07");
   ptstats_LaTex = ptstats->AddText("Mean  = -5.479");
   ptstats_LaTex = ptstats->AddText("Std Dev   =  104.1");
   ptstats->SetOptStat(1110);
   ptstats->SetOptFit(0);
   ptstats->Draw();
   phi_e__2->GetListOfFunctions()->Add(ptstats);
   ptstats->SetParent(phi_e__2);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#0c5da5");
   phi_e__2->SetLineColor(ci);
   phi_e__2->GetXaxis()->SetTitle("#phi_{e} [Deg.]");
   phi_e__2->GetXaxis()->SetLabelFont(42);
   phi_e__2->GetXaxis()->SetTitleSize(0.05);
   phi_e__2->GetXaxis()->SetTitleOffset(1);
   phi_e__2->GetXaxis()->SetTitleFont(42);
   phi_e__2->GetYaxis()->SetLabelFont(42);
   phi_e__2->GetYaxis()->SetTitleFont(42);
   phi_e__2->GetZaxis()->SetLabelFont(42);
   phi_e__2->GetZaxis()->SetTitleOffset(1);
   phi_e__2->GetZaxis()->SetTitleFont(42);
   phi_e__2->Draw("histo");
   
   ptstats = new TPaveStats(0.75,0.835,0.98,0.995,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(1);
   ptstats->SetFillColor(0);
   ptstats->SetTextAlign(12);
   ptstats->SetTextFont(42);
   ptstats_LaTex = ptstats->AddText("Entries =   1.746789e+07");
   ptstats_LaTex = ptstats->AddText("Mean  = -5.479");
   ptstats_LaTex = ptstats->AddText("Std Dev   =  104.1");
   ptstats->SetOptStat(1110);
   ptstats->SetOptFit(0);
   ptstats->Draw();
   c1->Modified();
   c1->SetSelected(c1);
}
