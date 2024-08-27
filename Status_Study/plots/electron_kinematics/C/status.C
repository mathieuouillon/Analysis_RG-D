#ifdef __CLING__
#pragma cling optimize(0)
#endif
void status()
{
//=========Macro generated from canvas: c1/
//=========  (Tue Aug 27 11:34:22 2024) by ROOT version 6.30/04
   TCanvas *c1 = new TCanvas("c1", "",0,0,800,600);
   c1->SetHighLightColor(2);
   c1->Range(-5263.158,-2.30083e+07,5263.158,1.687275e+08);
   c1->SetFillColor(0);
   c1->SetBorderMode(0);
   c1->SetBorderSize(2);
   c1->SetLeftMargin(0.12);
   c1->SetRightMargin(0.12);
   c1->SetTopMargin(0.12);
   c1->SetBottomMargin(0.12);
   c1->SetFrameBorderMode(0);
   c1->SetFrameBorderMode(0);
   
   TH1F *status__16 = new TH1F("status__16","",200,-4000,4000);
   status__16->SetBinContent(45,1.387802e+08);
   status__16->SetBinContent(47,1.324858e+07);
   status__16->SetBinContent(48,743691);
   status__16->SetBinContent(151,262754);
   status__16->SetBinContent(156,1);
   status__16->SetEntries(1.530352e+08);
   status__16->SetDirectory(nullptr);
   
   TPaveStats *ptstats = new TPaveStats(0.52,0.835,0.75,0.995,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(1);
   ptstats->SetFillColor(0);
   ptstats->SetTextAlign(12);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#121415");
   ptstats->SetTextColor(ci);
   ptstats->SetTextFont(42);
   TText *ptstats_LaTex = ptstats->AddText("Entries =   1.530352e+08");
   ptstats_LaTex = ptstats->AddText("Mean  =  -2211");
   ptstats_LaTex = ptstats->AddText("Std Dev   =    178");
   ptstats->SetOptStat(1110);
   ptstats->SetOptFit(0);
   ptstats->Draw();
   status__16->GetListOfFunctions()->Add(ptstats);
   ptstats->SetParent(status__16);

   ci = TColor::GetColor("#121415");
   status__16->SetLineColor(ci);
   status__16->GetXaxis()->SetLabelFont(42);
   status__16->GetXaxis()->SetTitleOffset(1);
   status__16->GetXaxis()->SetTitleFont(42);
   status__16->GetYaxis()->SetLabelFont(42);
   status__16->GetYaxis()->SetTitleFont(42);
   status__16->GetZaxis()->SetLabelFont(42);
   status__16->GetZaxis()->SetTitleOffset(1);
   status__16->GetZaxis()->SetTitleFont(42);
   status__16->Draw("");
  
// ------------>Primitives in pad: upper_pad
   TPad *upper_pad__15 = new TPad("upper_pad", "",0.0025,0.3,0.9975,0.9975);
   upper_pad__15->Draw();
   upper_pad__15->cd();
   upper_pad__15->Range(-5000,-8572377,5000,1.628752e+08);
   upper_pad__15->SetFillColor(0);
   upper_pad__15->SetBorderMode(0);
   upper_pad__15->SetBorderSize(2);
   upper_pad__15->SetBottomMargin(0.05);
   upper_pad__15->SetFrameBorderMode(0);
   upper_pad__15->SetFrameBorderMode(0);
   
   TH1F *status__17 = new TH1F("status__17","",200,-4000,4000);
   status__17->SetBinContent(45,1.387909e+08);
   status__17->SetBinContent(47,1.324968e+07);
   status__17->SetBinContent(48,744245);
   status__17->SetEntries(1.527848e+08);
   status__17->SetDirectory(nullptr);
   
   ptstats = new TPaveStats(0.75,0.835,0.98,0.995,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(1);
   ptstats->SetFillColor(0);
   ptstats->SetTextAlign(12);

   ci = TColor::GetColor("#0c5da5");
   ptstats->SetTextColor(ci);
   ptstats->SetTextFont(42);
   ptstats_LaTex = ptstats->AddText("Entries =   1.527848e+08");
   ptstats_LaTex = ptstats->AddText("Mean  =  -2212");
   ptstats_LaTex = ptstats->AddText("Std Dev   =  23.84");
   ptstats->SetOptStat(1110);
   ptstats->SetOptFit(0);
   ptstats->Draw();
   status__17->GetListOfFunctions()->Add(ptstats);
   ptstats->SetParent(status__17);

   ci = TColor::GetColor("#0c5da5");
   status__17->SetLineColor(ci);
   status__17->GetXaxis()->SetTitle("status_{e}");
   status__17->GetXaxis()->SetRange(1,200);
   status__17->GetXaxis()->SetLabelFont(42);
   status__17->GetXaxis()->SetTitleSize(0.05);
   status__17->GetXaxis()->SetTitleOffset(1);
   status__17->GetXaxis()->SetTitleFont(42);
   status__17->GetYaxis()->SetLabelFont(42);
   status__17->GetYaxis()->SetTitleFont(42);
   status__17->GetZaxis()->SetLabelFont(42);
   status__17->GetZaxis()->SetTitleOffset(1);
   status__17->GetZaxis()->SetTitleFont(42);
   status__17->Draw("Ahist");
   
   TH1F *status__18 = new TH1F("status__18","",200,-4000,4000);
   status__18->SetBinContent(45,1.387802e+08);
   status__18->SetBinContent(47,1.324858e+07);
   status__18->SetBinContent(48,743691);
   status__18->SetBinContent(151,262754);
   status__18->SetBinContent(156,1);
   status__18->SetEntries(1.530352e+08);
   status__18->SetDirectory(nullptr);
   
   ptstats = new TPaveStats(0.52,0.835,0.75,0.995,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(1);
   ptstats->SetFillColor(0);
   ptstats->SetTextAlign(12);

   ci = TColor::GetColor("#121415");
   ptstats->SetTextColor(ci);
   ptstats->SetTextFont(42);
   ptstats_LaTex = ptstats->AddText("Entries =   1.530352e+08");
   ptstats_LaTex = ptstats->AddText("Mean  =  -2211");
   ptstats_LaTex = ptstats->AddText("Std Dev   =    178");
   ptstats->SetOptStat(1110);
   ptstats->SetOptFit(0);
   ptstats->Draw();
   status__18->GetListOfFunctions()->Add(ptstats);
   ptstats->SetParent(status__18);

   ci = TColor::GetColor("#121415");
   status__18->SetLineColor(ci);
   status__18->GetXaxis()->SetLabelFont(42);
   status__18->GetXaxis()->SetTitleOffset(1);
   status__18->GetXaxis()->SetTitleFont(42);
   status__18->GetYaxis()->SetLabelFont(42);
   status__18->GetYaxis()->SetTitleFont(42);
   status__18->GetZaxis()->SetLabelFont(42);
   status__18->GetZaxis()->SetTitleOffset(1);
   status__18->GetZaxis()->SetTitleFont(42);
   status__18->Draw("AEsame");
   
   TLegend *leg = new TLegend(0.1012658,0.1403509,0.4012658,0.2903509,NULL,"brNDC");
   leg->SetBorderSize(1);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("status","neg","l");

   ci = TColor::GetColor("#0c5da5");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("status","2000","l");

   ci = TColor::GetColor("#121415");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   leg->Draw();
   
   ptstats = new TPaveStats(0.75,0.835,0.98,0.995,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(1);
   ptstats->SetFillColor(0);
   ptstats->SetTextAlign(12);

   ci = TColor::GetColor("#0c5da5");
   ptstats->SetTextColor(ci);
   ptstats->SetTextFont(42);
   ptstats_LaTex = ptstats->AddText("Entries =   1.527848e+08");
   ptstats_LaTex = ptstats->AddText("Mean  =  -2212");
   ptstats_LaTex = ptstats->AddText("Std Dev   =  23.84");
   ptstats->SetOptStat(1110);
   ptstats->SetOptFit(0);
   ptstats->Draw();
   
   ptstats = new TPaveStats(0.52,0.835,0.75,0.995,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(1);
   ptstats->SetFillColor(0);
   ptstats->SetTextAlign(12);

   ci = TColor::GetColor("#121415");
   ptstats->SetTextColor(ci);
   ptstats->SetTextFont(42);
   ptstats_LaTex = ptstats->AddText("Entries =   1.530352e+08");
   ptstats_LaTex = ptstats->AddText("Mean  =  -2211");
   ptstats_LaTex = ptstats->AddText("Std Dev   =    178");
   ptstats->SetOptStat(1110);
   ptstats->SetOptFit(0);
   ptstats->Draw();
   upper_pad__15->Modified();
   c1->cd();
  
// ------------>Primitives in pad: lower_pad
   TPad *lower_pad__16 = new TPad("lower_pad", "",0.0025,0.0025,0.9975,0.3);
   lower_pad__16->Draw();
   lower_pad__16->cd();
   lower_pad__16->Range(-5000,-2.69228,5000,6.281985);
   lower_pad__16->SetFillColor(0);
   lower_pad__16->SetBorderMode(0);
   lower_pad__16->SetBorderSize(2);
   lower_pad__16->SetTopMargin(0.05);
   lower_pad__16->SetBottomMargin(0.3);
   lower_pad__16->SetFrameBorderMode(0);
   lower_pad__16->SetFrameBorderMode(0);
   
   Double_t Graph_fx3006[5] = { -2220, -2140, -2100, 2020, 2220 };
   Double_t Graph_fy3006[5] = { 1.000077, 1.000083, 1.000745, 0, 0 };
   Double_t Graph_felx3006[5] = { 20, 20, 20, 20, 20 };
   Double_t Graph_fely3006[5] = { 0.0001200539, 0.0003885593, 0.00164082, 0, 0 };
   Double_t Graph_fehx3006[5] = { 20, 20, 20, 20, 20 };
   Double_t Graph_fehy3006[5] = { 0.0001200683, 0.0003887103, 0.001643514, 7.006661e-06, 5.302974 };
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(5,Graph_fx3006,Graph_fy3006,Graph_felx3006,Graph_fehx3006,Graph_fely3006,Graph_fehy3006);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   
   TH1F *Graph_Graph3006 = new TH1F("Graph_Graph3006","",100,-4000,4000);
   Graph_Graph3006->SetMinimum(0);
   Graph_Graph3006->SetMaximum(5.833272);
   Graph_Graph3006->SetDirectory(nullptr);
   Graph_Graph3006->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph3006->SetLineColor(ci);
   Graph_Graph3006->GetXaxis()->SetRange(1,100);
   Graph_Graph3006->GetXaxis()->SetLabelFont(42);
   Graph_Graph3006->GetXaxis()->SetTitleOffset(1);
   Graph_Graph3006->GetXaxis()->SetTitleFont(42);
   Graph_Graph3006->GetYaxis()->SetLabelFont(42);
   Graph_Graph3006->GetYaxis()->SetTitleFont(42);
   Graph_Graph3006->GetZaxis()->SetLabelFont(42);
   Graph_Graph3006->GetZaxis()->SetTitleOffset(1);
   Graph_Graph3006->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph3006);
   
   grae->Draw("iaap");
   TLine *line = new TLine(-4000,0.7,4000,0.7);
   line->SetLineStyle(2);
   line->Draw();
   line = new TLine(-4000,1,4000,1);
   line->SetLineStyle(2);
   line->Draw();
   line = new TLine(-4000,1.3,4000,1.3);
   line->SetLineStyle(2);
   line->Draw();
   lower_pad__16->Modified();
   c1->cd();
  
// ------------>Primitives in pad: top_pad
   TPad *top_pad__17 = new TPad("top_pad", "",0.0025,0.0025,0.9975,0.9975);
   top_pad__17->Draw();
   top_pad__17->cd();
   top_pad__17->Range(0,0,1,1);
   top_pad__17->SetFillColor(0);
   top_pad__17->SetFillStyle(4000);
   top_pad__17->SetBorderMode(0);
   top_pad__17->SetBorderSize(2);
   top_pad__17->SetFrameBorderMode(0);
   TGaxis *gaxis = new TGaxis(0.1,0.335,0.9,0.335,-4000,4000,510,"+U");
   gaxis->SetLabelOffset(0.005);
   gaxis->SetLabelSize(0);
   gaxis->SetTickSize(0.03);
   gaxis->SetGridLength(0);
   gaxis->SetTitleOffset(1);
   gaxis->SetTitleSize(0.05);
   gaxis->SetTitleColor(1);
   gaxis->SetTitleFont(42);
   gaxis->SetLabelFont(42);
   gaxis->Draw();
   gaxis = new TGaxis(0.1,0.335,0.1,0.93,0,1.457304e+08,510,"S");
   gaxis->SetLabelOffset(0.005);
   gaxis->SetLabelSize(0.035);
   gaxis->SetTickSize(0.03);
   gaxis->SetGridLength(0);
   gaxis->SetTitleOffset(0);
   gaxis->SetTitleSize(0.035);
   gaxis->SetTitleColor(1);
   gaxis->SetTitleFont(42);
   gaxis->SetLabelFont(42);
   gaxis->Draw();
   gaxis = new TGaxis(0.1,0.09000001,0.9,0.09000001,-4000,4000,510,"+S");
   gaxis->SetLabelOffset(0.005);
   gaxis->SetLabelSize(0.035);
   gaxis->SetTickSize(0.03);
   gaxis->SetGridLength(0);
   gaxis->SetTitleOffset(1);
   gaxis->SetTitleSize(0.035);
   gaxis->SetTitleColor(1);
   gaxis->SetTitleFont(42);
   gaxis->SetTitle("status_{e}");
   gaxis->SetLabelFont(42);
   gaxis->Draw();
   gaxis = new TGaxis(0.1,0.09000001,0.1,0.285,0,5.833272,510,"-S");
   gaxis->SetLabelOffset(0.005);
   gaxis->SetLabelSize(0.035);
   gaxis->SetTickSize(0.09153846);
   gaxis->SetGridLength(0);
   gaxis->SetTitleOffset(0);
   gaxis->SetTitleSize(0.035);
   gaxis->SetTitleColor(1);
   gaxis->SetTitleFont(42);
   gaxis->SetLabelFont(42);
   gaxis->Draw();
   top_pad__17->Modified();
   c1->cd();
//Primitive: TRatioPlot/A ratio of histograms. You must implement TRatioPlot::SavePrimitive
   c1->Modified();
   c1->SetSelected(c1);
}
