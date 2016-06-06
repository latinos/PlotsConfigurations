#include "TDRStyle.cc"
  
void draw(){
 
  TDRStyle();
  
  TCanvas* cc = new TCanvas("cc","",700, 700);
  cc->SetGrid();
  cc->GetFrame()->SetBorderSize(12);
  const Int_t n = 3;
  Double_t x[n]   = {15/2., (30+15)/2., 40. };
  Double_t y[n]   = {1.0, 1.0, 1.0};
  Double_t exl[n] = {15/2.-0.04, (30-15)/2.-0.04, 10.-0.04};
  Double_t eyl[n] = {fabs(-0.279330 - 1.0), fabs(-0.594585 - 1.0), fabs(0.4265550 - 1.0)};
  Double_t exh[n] = {15/2.-0.04, (30-15)/2.-0.04, 10.-0.04};
  Double_t eyh[n] = {2.3606121 - 1.0, 2.5469791 - 1.0, 1.7239716 - 1.0};
  TGraphAsymmErrors* gr = new TGraphAsymmErrors(n,x,y,exl,exh,eyl,eyh);
  gr->SetMarkerColor(kRed);
  gr->SetMarkerStyle(21);
  gr->SetLineColor(kRed);
  gr->SetLineWidth(3);
  gr->SetFillColor(kRed);
  gr->SetFillStyle(3001);
  //   gr->Draw("ALP");
  gr->Draw("A2 P");
  gr->GetXaxis()->SetTitle("p_T GeV");
  gr->GetYaxis()->SetTitle("#sigma / #sigma_{SM}");
  
}