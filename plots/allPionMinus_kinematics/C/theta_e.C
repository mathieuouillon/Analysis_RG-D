#ifdef __CLING__
#pragma cling optimize(0)
#endif
void theta_e()
{
//=========Macro generated from canvas: c1/
//=========  (Wed Aug 21 10:43:41 2024) by ROOT version 6.30/04
   TCanvas *c1 = new TCanvas("c1", "",0,0,800,600);
   c1->SetHighLightColor(2);
   c1->Range(-28.42105,-401828,208.4211,2946739);
   c1->SetFillColor(0);
   c1->SetBorderMode(0);
   c1->SetBorderSize(2);
   c1->SetLeftMargin(0.12);
   c1->SetRightMargin(0.12);
   c1->SetTopMargin(0.12);
   c1->SetBottomMargin(0.12);
   c1->SetFrameBorderMode(0);
   c1->SetFrameBorderMode(0);
   
   TH1F *theta_e__13 = new TH1F("theta_e__13","",50,0,180);
   theta_e__13->SetBinContent(1,7106);
   theta_e__13->SetBinContent(2,695786);
   theta_e__13->SetBinContent(3,1849333);
   theta_e__13->SetBinContent(4,2120759);
   theta_e__13->SetBinContent(5,2046892);
   theta_e__13->SetBinContent(6,1829054);
   theta_e__13->SetBinContent(7,1563766);
   theta_e__13->SetBinContent(8,1251650);
   theta_e__13->SetBinContent(9,1018744);
   theta_e__13->SetBinContent(10,982275);
   theta_e__13->SetBinContent(11,1007436);
   theta_e__13->SetBinContent(12,1024873);
   theta_e__13->SetBinContent(13,906278);
   theta_e__13->SetBinContent(14,759314);
   theta_e__13->SetBinContent(15,629788);
   theta_e__13->SetBinContent(16,536291);
   theta_e__13->SetBinContent(17,464887);
   theta_e__13->SetBinContent(18,416804);
   theta_e__13->SetBinContent(19,369531);
   theta_e__13->SetBinContent(20,337256);
   theta_e__13->SetBinContent(21,304484);
   theta_e__13->SetBinContent(22,279097);
   theta_e__13->SetBinContent(23,256318);
   theta_e__13->SetBinContent(24,235248);
   theta_e__13->SetBinContent(25,210025);
   theta_e__13->SetBinContent(26,181828);
   theta_e__13->SetBinContent(27,158269);
   theta_e__13->SetBinContent(28,131423);
   theta_e__13->SetBinContent(29,107227);
   theta_e__13->SetBinContent(30,90463);
   theta_e__13->SetBinContent(31,74144);
   theta_e__13->SetBinContent(32,59743);
   theta_e__13->SetBinContent(33,42967);
   theta_e__13->SetBinContent(34,25135);
   theta_e__13->SetBinContent(35,14723);
   theta_e__13->SetBinContent(36,6923);
   theta_e__13->SetBinContent(37,2534);
   theta_e__13->SetBinContent(38,1566);
   theta_e__13->SetBinContent(39,1004);
   theta_e__13->SetBinContent(40,436);
   theta_e__13->SetBinContent(41,200);
   theta_e__13->SetBinContent(42,120);
   theta_e__13->SetBinContent(43,62);
   theta_e__13->SetBinContent(44,31);
   theta_e__13->SetBinContent(45,13);
   theta_e__13->SetBinContent(46,4);
   theta_e__13->SetBinContent(47,2);
   theta_e__13->SetMaximum(2544911);
   theta_e__13->SetEntries(2.200181e+07);
   theta_e__13->SetDirectory(nullptr);
   
   TPaveStats *ptstats = new TPaveStats(0.75,0.835,0.98,0.995,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(1);
   ptstats->SetFillColor(0);
   ptstats->SetTextAlign(12);
   ptstats->SetTextFont(42);
   TText *ptstats_LaTex = ptstats->AddText("Entries =   2.200181e+07");
   ptstats_LaTex = ptstats->AddText("Mean  =     35");
   ptstats_LaTex = ptstats->AddText("Std Dev   =  24.55");
   ptstats->SetOptStat(1110);
   ptstats->SetOptFit(0);
   ptstats->Draw();
   theta_e__13->GetListOfFunctions()->Add(ptstats);
   ptstats->SetParent(theta_e__13);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#0c5da5");
   theta_e__13->SetLineColor(ci);
   theta_e__13->GetXaxis()->SetTitle("#theta_{#pi^{-}} [Deg.]");
   theta_e__13->GetXaxis()->SetLabelFont(42);
   theta_e__13->GetXaxis()->SetTitleSize(0.05);
   theta_e__13->GetXaxis()->SetTitleOffset(1);
   theta_e__13->GetXaxis()->SetTitleFont(42);
   theta_e__13->GetYaxis()->SetLabelFont(42);
   theta_e__13->GetYaxis()->SetTitleFont(42);
   theta_e__13->GetZaxis()->SetLabelFont(42);
   theta_e__13->GetZaxis()->SetTitleOffset(1);
   theta_e__13->GetZaxis()->SetTitleFont(42);
   theta_e__13->Draw("histo");
   
   ptstats = new TPaveStats(0.75,0.835,0.98,0.995,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(1);
   ptstats->SetFillColor(0);
   ptstats->SetTextAlign(12);
   ptstats->SetTextFont(42);
   ptstats_LaTex = ptstats->AddText("Entries =   2.200181e+07");
   ptstats_LaTex = ptstats->AddText("Mean  =     35");
   ptstats_LaTex = ptstats->AddText("Std Dev   =  24.55");
   ptstats->SetOptStat(1110);
   ptstats->SetOptFit(0);
   ptstats->Draw();
   c1->Modified();
   c1->SetSelected(c1);
}
