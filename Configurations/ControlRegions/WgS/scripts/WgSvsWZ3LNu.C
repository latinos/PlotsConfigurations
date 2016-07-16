
void WgSvsWZ3LNu(){
  gStyle->SetOptStat(0);
  TH1::SetDefaultSumw2();

  TFile *InF = new TFile("../rootFile_mpmet25pt25158_DoubleMuTight1all/plots_WgS.root");
  //TFile *InF = new TFile("../rootFile_mmmNoCut/plots_WgS.root");
  TH1F* hWgS    = (TH1F*)InF->Get("hww2l2v_13TeV_WgS_mmm_JPsi_tightpt1/mllMinimiLowM/histo_WgSMuMu");
  TH1F* hWZ3LNu = (TH1F*)InF->Get("hww2l2v_13TeV_WgS_mmm_JPsi_tightpt1/mllMinimiLowM/histo_WZ3LNu");

  hWgS->SetLineColor(kBlue);
  hWgS->SetLineWidth(2);
  hWgS->Scale(12.);
  hWZ3LNu->SetLineColor(kRed);
  hWZ3LNu->SetLineWidth(2);
  TCanvas *myCan = new TCanvas("myCan");
  myCan->SetLogy();
  hWgS->SetTitle("");
  hWgS->Draw("hist");
  hWZ3LNu->Draw("histsame");
  TLegend *leg = new TLegend(0.4373563,0.7097458,0.8577586,0.8474576,NULL,"brNDC");
  leg->SetBorderSize(1);
  leg->SetTextFont(62);
  leg->SetTextSize(0.05084746);
  leg->SetLineColor(0);
  leg->SetLineStyle(1);
  leg->SetLineWidth(1);
  leg->SetFillColor(0);
  leg->SetFillStyle(1001);
  leg->AddEntry(hWgS,"Wg* X 12","l");
  leg->AddEntry(hWZ3LNu,"WZto3LNu","l");
  leg->Draw("same");
  myCan->SaveAs("WgSvsWZ3LNu80xMpmet25pt25158.pdf");
  


}
