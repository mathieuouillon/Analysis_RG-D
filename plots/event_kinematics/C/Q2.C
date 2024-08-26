#ifdef __CLING__
#pragma cling optimize(0)
#endif
void Q2()
{
//=========Macro generated from canvas: c1/
//=========  (Mon Aug 26 14:30:20 2024) by ROOT version 6.30/04
   TCanvas *c1 = new TCanvas("c1", "",0,0,800,600);
   c1->SetHighLightColor(2);
   c1->Range(-1.578947,-238696.1,11.57895,1750438);
   c1->SetFillColor(0);
   c1->SetBorderMode(0);
   c1->SetBorderSize(2);
   c1->SetLeftMargin(0.12);
   c1->SetRightMargin(0.12);
   c1->SetTopMargin(0.12);
   c1->SetBottomMargin(0.12);
   c1->SetFrameBorderMode(0);
   c1->SetFrameBorderMode(0);
   
   TH1F *Q2__18 = new TH1F("Q2__18","",200,0,10);
   Q2__18->SetBinContent(1,2);
   Q2__18->SetBinContent(2,11);
   Q2__18->SetBinContent(3,27);
   Q2__18->SetBinContent(4,25);
   Q2__18->SetBinContent(5,45);
   Q2__18->SetBinContent(6,64);
   Q2__18->SetBinContent(7,80);
   Q2__18->SetBinContent(8,111);
   Q2__18->SetBinContent(9,148);
   Q2__18->SetBinContent(10,223);
   Q2__18->SetBinContent(11,224);
   Q2__18->SetBinContent(12,353);
   Q2__18->SetBinContent(13,554);
   Q2__18->SetBinContent(14,779);
   Q2__18->SetBinContent(15,1090);
   Q2__18->SetBinContent(16,1735);
   Q2__18->SetBinContent(17,2618);
   Q2__18->SetBinContent(18,3556);
   Q2__18->SetBinContent(19,5068);
   Q2__18->SetBinContent(20,6687);
   Q2__18->SetBinContent(21,8855);
   Q2__18->SetBinContent(22,10132);
   Q2__18->SetBinContent(23,11900);
   Q2__18->SetBinContent(24,14307);
   Q2__18->SetBinContent(25,16883);
   Q2__18->SetBinContent(26,20016);
   Q2__18->SetBinContent(27,24387);
   Q2__18->SetBinContent(28,28806);
   Q2__18->SetBinContent(29,34308);
   Q2__18->SetBinContent(30,41617);
   Q2__18->SetBinContent(31,49047);
   Q2__18->SetBinContent(32,58173);
   Q2__18->SetBinContent(33,67365);
   Q2__18->SetBinContent(34,79572);
   Q2__18->SetBinContent(35,91712);
   Q2__18->SetBinContent(36,104027);
   Q2__18->SetBinContent(37,117514);
   Q2__18->SetBinContent(38,132739);
   Q2__18->SetBinContent(39,146493);
   Q2__18->SetBinContent(40,162573);
   Q2__18->SetBinContent(41,179155);
   Q2__18->SetBinContent(42,194501);
   Q2__18->SetBinContent(43,213044);
   Q2__18->SetBinContent(44,230718);
   Q2__18->SetBinContent(45,249254);
   Q2__18->SetBinContent(46,268282);
   Q2__18->SetBinContent(47,287580);
   Q2__18->SetBinContent(48,306030);
   Q2__18->SetBinContent(49,326643);
   Q2__18->SetBinContent(50,346054);
   Q2__18->SetBinContent(51,366047);
   Q2__18->SetBinContent(52,385642);
   Q2__18->SetBinContent(53,406404);
   Q2__18->SetBinContent(54,425518);
   Q2__18->SetBinContent(55,446054);
   Q2__18->SetBinContent(56,468223);
   Q2__18->SetBinContent(57,484726);
   Q2__18->SetBinContent(58,506325);
   Q2__18->SetBinContent(59,524314);
   Q2__18->SetBinContent(60,544367);
   Q2__18->SetBinContent(61,561171);
   Q2__18->SetBinContent(62,584547);
   Q2__18->SetBinContent(63,598450);
   Q2__18->SetBinContent(64,617807);
   Q2__18->SetBinContent(65,634356);
   Q2__18->SetBinContent(66,648910);
   Q2__18->SetBinContent(67,664430);
   Q2__18->SetBinContent(68,679437);
   Q2__18->SetBinContent(69,699605);
   Q2__18->SetBinContent(70,719783);
   Q2__18->SetBinContent(71,739569);
   Q2__18->SetBinContent(72,763338);
   Q2__18->SetBinContent(73,785758);
   Q2__18->SetBinContent(74,811609);
   Q2__18->SetBinContent(75,837908);
   Q2__18->SetBinContent(76,868861);
   Q2__18->SetBinContent(77,906652);
   Q2__18->SetBinContent(78,948685);
   Q2__18->SetBinContent(79,991390);
   Q2__18->SetBinContent(80,1057056);
   Q2__18->SetBinContent(81,1119470);
   Q2__18->SetBinContent(82,1185971);
   Q2__18->SetBinContent(83,1241500);
   Q2__18->SetBinContent(84,1259785);
   Q2__18->SetBinContent(85,1134818);
   Q2__18->SetBinContent(86,765840);
   Q2__18->SetBinContent(87,410575);
   Q2__18->SetBinContent(88,6999);
   Q2__18->SetBinContent(201,1947);
   Q2__18->SetMaximum(1511742);
   Q2__18->SetEntries(3.064893e+07);
   Q2__18->SetDirectory(nullptr);
   
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
   TText *ptstats_LaTex = ptstats->AddText("Entries =   3.064893e+07");
   ptstats_LaTex = ptstats->AddText("Mean  =  3.392");
   ptstats_LaTex = ptstats->AddText("Std Dev   = 0.6901");
   ptstats->SetOptStat(1110);
   ptstats->SetOptFit(0);
   ptstats->Draw();
   Q2__18->GetListOfFunctions()->Add(ptstats);
   ptstats->SetParent(Q2__18);

   ci = TColor::GetColor("#0c5da5");
   Q2__18->SetLineColor(ci);
   Q2__18->GetXaxis()->SetTitle("Q^{2} [GeV^{2}/c^{2}]");
   Q2__18->GetXaxis()->SetLabelFont(42);
   Q2__18->GetXaxis()->SetTitleSize(0.05);
   Q2__18->GetXaxis()->SetTitleOffset(1);
   Q2__18->GetXaxis()->SetTitleFont(42);
   Q2__18->GetYaxis()->SetLabelFont(42);
   Q2__18->GetYaxis()->SetTitleFont(42);
   Q2__18->GetZaxis()->SetLabelFont(42);
   Q2__18->GetZaxis()->SetTitleOffset(1);
   Q2__18->GetZaxis()->SetTitleFont(42);
   Q2__18->Draw("histo");
   
   ptstats = new TPaveStats(0.75,0.835,0.98,0.995,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(1);
   ptstats->SetFillColor(0);
   ptstats->SetTextAlign(12);

   ci = TColor::GetColor("#0c5da5");
   ptstats->SetTextColor(ci);
   ptstats->SetTextFont(42);
   ptstats_LaTex = ptstats->AddText("Entries =   3.064893e+07");
   ptstats_LaTex = ptstats->AddText("Mean  =  3.392");
   ptstats_LaTex = ptstats->AddText("Std Dev   = 0.6901");
   ptstats->SetOptStat(1110);
   ptstats->SetOptFit(0);
   ptstats->Draw();
   c1->Modified();
   c1->SetSelected(c1);
}
