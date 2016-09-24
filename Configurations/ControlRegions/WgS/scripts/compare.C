#include <boost/lexical_cast.hpp>
#include <sstream>
#include <string>

void compare(){

  TCanvas *myCan = new TCanvas("myCan");
  myCan->cd();
  TFile *myF   = new TFile("rootFile/plots_WgS.root");
  TH1F* h_VgS  = (TH1F*)myF->Get("hww2l2v_13TeV_of0j_Test/mllMinimi/histo_VgS");
  TH1F* h_WZ3L = (TH1F*)myF->Get("hww2l2v_13TeV_of0j_Test/mllMinimi/histo_WZ3L");
  TH1F* h_WZ3Lmllmin01 = (TH1F*)myF->Get("hww2l2v_13TeV_of0j_Test/mllMinimi/histo_WZ3Lmllmin01");

  h_VgS->SetLineColor(kRed);
  h_VgS->SetLineWidth(1.5);
  h_WZ3L->SetLineColor(kBlue);
  h_WZ3L->SetLineWidth(1.5);
  h_WZ3Lmllmin01->SetLineColor(kGreen);
  h_WZ3Lmllmin01->SetLineWidth(1.5);
  h_WZ3Lmllmin01->Draw("hist");
  h_VgS->Draw("histsame");
  h_WZ3L->Draw("histsame");

  TLegend *leg = new TLegend(0.4373563,0.7097458,0.8577586,0.8474576,NULL,"brNDC");
  leg->SetBorderSize(1);
  leg->SetTextFont(62);
  leg->SetTextSize(0.05084746);
  leg->SetLineColor(0);
  leg->SetLineStyle(1);
  leg->SetLineWidth(1);
  leg->SetFillColor(0);
  leg->SetFillStyle(1001);
  leg->AddEntry(h_VgS,"VgS","l");
  leg->AddEntry(h_WZ3L,"WZ3L","l");
  leg->AddEntry(h_WZ3Lmllmin01,"WZ3Lmllmin01","l");
  leg->Draw("same");
  myCan->SaveAs("VgsVsWZ3lVsMllmin01.pdf");
  myCan->SaveAs("VgsVsWZ3lVsMllmin01.png");



}
