#ifdef __CLING__
#pragma cling optimize(0)
#endif
void NuclearTransparency()
{
//=========Macro generated from canvas: c1/
//=========  (Sat Oct 26 16:00:09 2024) by ROOT version 6.30/04
   TCanvas *c1 = new TCanvas("c1", "",0,0,800,600);
   gStyle->SetOptFit(1);
   c1->SetHighLightColor(2);
   c1->Range(-0.4473684,0.5152843,7.447368,1.007638);
   c1->SetFillColor(0);
   c1->SetBorderMode(0);
   c1->SetBorderSize(2);
   c1->SetLeftMargin(0.12);
   c1->SetRightMargin(0.12);
   c1->SetTopMargin(0.12);
   c1->SetBottomMargin(0.12);
   c1->SetFrameBorderMode(0);
   c1->SetFrameBorderMode(0);
   
   Double_t Graph_fx1001[6] = { 1.5, 2.25, 2.75, 3.25, 4, 5.25 };
   Double_t Graph_fy1001[6] = { 0.6102135, 0.6576954, 0.7310651, 0.6277443, 0.7373658, 0.8444447 };
   Double_t Graph_fex1001[6] = { 0.5, 0.25, 0.25, 0.25, 0.5, 0.75 };
   Double_t Graph_fey1001[6] = { 0.003544534, 0.009804865, 0.01635966, 0.02219509, 0.03104407, 0.0729285 };
   TGraphErrors *gre = new TGraphErrors(6,Graph_fx1001,Graph_fy1001,Graph_fex1001,Graph_fey1001);
   gre->SetName("");
   gre->SetTitle("");
   gre->SetFillStyle(1000);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#0c5da5");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(8);
   
   TH1F *Graph_Graph1001 = new TH1F("Graph_Graph1001","",100,0.5,6.5);
   Graph_Graph1001->SetMinimum(0.5743668);
   Graph_Graph1001->SetMaximum(0.9485556);
   Graph_Graph1001->SetDirectory(nullptr);
   Graph_Graph1001->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph1001->SetLineColor(ci);
   Graph_Graph1001->GetXaxis()->SetTitle("Q^{2}");
   Graph_Graph1001->GetXaxis()->SetLabelFont(42);
   Graph_Graph1001->GetXaxis()->SetTitleOffset(1);
   Graph_Graph1001->GetXaxis()->SetTitleFont(42);
   Graph_Graph1001->GetYaxis()->SetTitle("T_{A}");
   Graph_Graph1001->GetYaxis()->SetLabelFont(42);
   Graph_Graph1001->GetYaxis()->SetTitleFont(42);
   Graph_Graph1001->GetZaxis()->SetLabelFont(42);
   Graph_Graph1001->GetZaxis()->SetTitleOffset(1);
   Graph_Graph1001->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1001);
   
   gre->Draw("ap");
   c1->Modified();
   c1->SetSelected(c1);
}
