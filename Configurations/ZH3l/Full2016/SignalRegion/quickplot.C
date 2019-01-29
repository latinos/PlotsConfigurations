{
  TFile *f0 = TFile::Open("rootFiles_ZH3lSR/plots_ZH3lSR.root");

  gStyle->SetHistMinimumZero();
  gStyle->SetHistLineWidth(3);
  gStyle->SetOptStat(0);


  TH1F* h_ZH   =   (TH1F*) f0->Get("dphi_cut/mjj/histo_ZH_hww");
  TH1F* h_ggZH =   (TH1F*) f0->Get("dphi_cut/mjj/histo_ggZH_hww");
  TH1F* h_WZ   =   (TH1F*) f0->Get("dphi_cut/mjj/histo_WZ");
  TH1F* h_Fake =   (TH1F*) f0->Get("dphi_cut/mjj/histo_Fake");

  h_ZH->SetLineColor(kViolet+1);
  h_ggZH->SetLineColor(kRed);
  h_WZ->SetLineColor(kGreen+2);
  h_Fake->SetLineColor(kBlue);

  h_ZH->Rebin(4);
  h_ggZH->Rebin(4);
  h_WZ->Rebin(4);
  h_Fake->Rebin(4);

  h_ZH->SetLineWidth(3);
  h_ggZH->SetLineWidth(3);
  h_WZ->SetLineWidth(3);
  h_Fake->SetLineWidth(3);

  h_ZH->Scale(1./h_ZH->Integral());
  h_ggZH->Scale(1./h_ggZH->Integral());
  h_WZ->Scale(1./h_WZ->Integral());
  h_Fake->Scale(1./h_Fake->Integral());

  h_ggZH->SetTitle("");
  h_ggZH->GetXaxis()->SetTitle("m_{jj}");
  h_ggZH->Draw("HIST");
  h_ZH->Draw("HIST SAME");
  h_WZ->Draw("HIST SAME");
  h_ggZH->Draw("HIST SAME");


  // TLegend* lgnd = new TLegend(0.12,0.67,0.34,0.89);		// upper left
  TLegend* lgnd = new TLegend(0.65,0.67,0.89,0.89);
  lgnd->SetFillColor(0);    lgnd->SetBorderSize(0);
  lgnd->AddEntry(h_WZ, "WZ");
  lgnd->AddEntry(h_ZH, "qqZH");
  lgnd->AddEntry(h_ggZH, "ggZH");
  lgnd->AddEntry(h_Fake, "Fake");
  lgnd->Draw();
}
