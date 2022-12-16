void linfit()
{
//=========Macro generated from canvas: Canvas_1/Canvas_1
//=========  (Tue Feb  8 14:02:29 2022) by ROOT version 6.22/08
   TCanvas *Canvas_1 = new TCanvas("Canvas_1", "Canvas_1",316,116,1600,839);
   gStyle->SetOptStat(0);
   gStyle->SetOptTitle(0);
   Canvas_1->Range(18.28125,242.3644,93.69375,474.8971);
   Canvas_1->SetFillColor(0);
   Canvas_1->SetBorderMode(0);
   Canvas_1->SetBorderSize(2);
   Canvas_1->SetFrameBorderMode(0);
   Canvas_1->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1001[2] = {
   30.85,
   81};
   Double_t Graph0_fy1001[2] = {
   295.1307,
   410.5853};
   Double_t Graph0_fex1001[2] = {
   0,
   0.125};
   Double_t Graph0_fey1001[2] = {
   0.03315617,
   0.09668385};
   TGraphErrors *gre = new TGraphErrors(2,Graph0_fx1001,Graph0_fy1001,Graph0_fex1001,Graph0_fey1001);
   gre->SetName("Graph0");
   gre->SetTitle("detector 0 pixel 0 subspec 1");
   gre->SetFillStyle(1000);
   
   TH1F *Graph_Graph01001 = new TH1F("Graph_Graph01001","detector 0 pixel 0 subspec 1",100,25.8225,86.1525);
   Graph_Graph01001->SetMinimum(265.6177);
   Graph_Graph01001->SetMaximum(451.6438);
   Graph_Graph01001->SetDirectory(0);
   Graph_Graph01001->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph01001->SetLineColor(ci);
   Graph_Graph01001->GetXaxis()->SetTitle("Energy (keV)");
   Graph_Graph01001->GetXaxis()->SetLabelFont(42);
   Graph_Graph01001->GetXaxis()->SetTitleOffset(1);
   Graph_Graph01001->GetXaxis()->SetTitleFont(42);
   Graph_Graph01001->GetYaxis()->SetTitle("Peak position (ADC)");
   Graph_Graph01001->GetYaxis()->SetLabelFont(42);
   Graph_Graph01001->GetYaxis()->SetTitleFont(42);
   Graph_Graph01001->GetZaxis()->SetLabelFont(42);
   Graph_Graph01001->GetZaxis()->SetTitleOffset(1);
   Graph_Graph01001->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph01001);
   
   
   TF1 *pol11002 = new TF1("pol1","pol1",25.8225,86.1525, TF1::EAddToList::kNo);
   pol11002->SetFillColor(19);
   pol11002->SetFillStyle(0);
   pol11002->SetLineColor(2);
   pol11002->SetLineWidth(2);
   pol11002->SetChisquare(5.414574e-11);
   pol11002->SetNDF(0);
   pol11002->GetXaxis()->SetLabelFont(42);
   pol11002->GetXaxis()->SetTitleOffset(1);
   pol11002->GetXaxis()->SetTitleFont(42);
   pol11002->GetYaxis()->SetLabelFont(42);
   pol11002->GetYaxis()->SetTitleFont(42);
   pol11002->SetParameter(0,224.1083);
   pol11002->SetParError(0,0.1942753);
   pol11002->SetParLimits(0,0,0);
   pol11002->SetParameter(1,2.302185);
   pol11002->SetParError(1,0.006089438);
   pol11002->SetParLimits(1,0,0);
   pol11002->SetParent(gre);
   gre->GetListOfFunctions()->Add(pol11002);
   gre->Draw("alp");
   Canvas_1->Modified();
   Canvas_1->cd();
   Canvas_1->SetSelected(Canvas_1);
}
