void plotDistribution() {
gStyle->SetOptStat(0000);

TFile* fin = TFile::Open("shapes_SR.root");

TH1F* TotalSig = (TH1F*) fin->Get("breq_postfit/TotalSig");
TH1F* TotalBkg = (TH1F*) fin->Get("breq_postfit/TotalBkg");

TH1F* data_obs = (TH1F*) fin->Get("breq_postfit/TotalProcs");

TH1F* h_err = (TH1F*) TotalBkg->Clone("h_err");

TotalBkg->SetFillColor(kBlue-4);
TotalSig->SetLineColor(2);
TotalSig->SetLineWidth(2);

h_err->SetFillColorAlpha(1, 0.4);
h_err->SetFillStyle(3356);
h_err->SetMarkerSize(0);

data_obs->SetMarkerStyle(20);
data_obs->SetMarkerColor(1);

TCanvas* c2 = new TCanvas();

auto rp1 = new TRatioPlot(TotalBkg,data_obs);
rp1->Draw();
rp1->GetUpperPad()->cd();

h_err->Draw("E2SAME");

TotalSig->Draw("HIST SAME");

rp1->GetLowerPad()->cd();

TH1F* h_band = (TH1F*) h_err->Clone("h_band");
h_band->Divide(h_err);

h_band->SetFillColorAlpha(1, 0.4);
h_band->SetFillStyle(3003);
h_band->SetMarkerSize(0);

TH1F* h_mc = (TH1F*) data_obs->Clone("h_mc");


h_mc->Divide(TotalBkg);
h_band->Draw("E2 SAME");
h_mc->SetMarkerStyle(20);
h_mc->SetMarkerColor(1);
h_mc->Draw("PE0 SAME");
h_band->GetYaxis()->SetRangeUser(0.2, 15.);

rp1->GetUpperRefXaxis()->SetTitle("p_{T}(Z) [GeV]");
rp1->GetLowerRefYaxis()->SetTitle("Data/MC");
rp1->GetLowerRefYaxis()->SetRangeUser(0.1, 15.1);
rp1->GetUpperPad()->SetLogy();
rp1->GetLowerRefGraph()->SetMarkerSize(0);
rp1->GetLowerRefGraph()->SetLineWidth(0);
rp1->GetUpperRefYaxis()->SetTitle("Events");

rp1->GetUpperPad()->cd();
TLegend* legend = new TLegend(0.50, 0.50, 0.90, 0.91, "", "NBNDC");
legend->AddEntry(TotalBkg, "Background", "F");
legend->AddEntry(TotalSig, "Signal, (mH=350 GeV, mA=900 GeV)", "L");
legend->AddEntry(data_obs, "Asimov Data (#mu=1.0)", "PE");
legend->AddEntry(h_err, "Prefit uncertainty", "F");
legend->Draw();

}

