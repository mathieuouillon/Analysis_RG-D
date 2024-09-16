#ifdef __CLING__
#pragma cling optimize(0)
#endif
void NuclearTransparency()
{
//=========Macro generated from canvas: c1/
//=========  (Tue Sep  3 13:45:26 2024) by ROOT version 6.30/04
   TCanvas *c1 = new TCanvas("c1", "",0,0,800,600);
   gStyle->SetOptFit(1);
   c1->SetHighLightColor(2);
   c1->Range(0.4144737,0.2154829,6.335526,0.7164723);
   c1->SetFillColor(0);
   c1->SetBorderMode(0);
   c1->SetBorderSize(2);
   c1->SetLeftMargin(0.12);
   c1->SetRightMargin(0.12);
   c1->SetTopMargin(0.12);
   c1->SetBottomMargin(0.12);
   c1->SetFrameBorderMode(0);
   c1->SetFrameBorderMode(0);
   
   Double_t Graph_fx1[6] = { 1.5, 2.25, 2.75, 3.25, 4, 5.25 };
   Double_t Graph_fy1[6] = { 0.3178669, 0.307331, 0.466508, 0.4872321, 0.3181414, 0.6246242 };
   TGraph *graph = new TGraph(6,Graph_fx1,Graph_fy1);
   graph->SetName("");
   graph->SetTitle("");
   graph->SetFillStyle(1000);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#0c5da5");
   graph->SetMarkerColor(ci);
   graph->SetMarkerStyle(8);
   
   TH1F *Graph_Graph1 = new TH1F("Graph_Graph1","",100,1.125,5.625);
   Graph_Graph1->SetMinimum(0.2756016);
   Graph_Graph1->SetMaximum(0.6563535);
   Graph_Graph1->SetDirectory(nullptr);
   Graph_Graph1->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph1->SetLineColor(ci);
   Graph_Graph1->GetXaxis()->SetTitle("Q^{2}");
   Graph_Graph1->GetXaxis()->SetLabelFont(42);
   Graph_Graph1->GetXaxis()->SetTitleOffset(1);
   Graph_Graph1->GetXaxis()->SetTitleFont(42);
   Graph_Graph1->GetYaxis()->SetTitle("T_{A}");
   Graph_Graph1->GetYaxis()->SetLabelFont(42);
   Graph_Graph1->GetYaxis()->SetTitleFont(42);
   Graph_Graph1->GetZaxis()->SetLabelFont(42);
   Graph_Graph1->GetZaxis()->SetTitleOffset(1);
   Graph_Graph1->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph1);
   
   graph->Draw("ap");
   c1->Modified();
   c1->SetSelected(c1);
}
