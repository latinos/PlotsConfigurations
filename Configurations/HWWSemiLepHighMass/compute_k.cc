void compute(const char *infilename, const char *infilename_2){
TFile *infile=TFile::Open(infilename);
//infile->cd("incl_twojets/tree");


TH1D *histo_ka = (TH1D*)infile->Get("/NOM/genW_pt2_true/histo_Wjets_HT");
TH1D *histo_kf = (TH1D*)histo_ka->Clone(); 

TFile *infileGraph=TFile::Open("wjets_kfactor_DH/HT_to_NLO_QCD_k_factors_all.root");
TGraph *kf = (TGraph*)infileGraph->Get("k_factor_2016_nom");

TFile *infile_2=TFile::Open(infilename_2);
TH1D *histo_ka_2 = (TH1D*)infile_2->Get("/NOM/genW_pt2_true/histo_Wjets_HT");
TH1D *histo_kf_2 = (TH1D*)histo_ka_2->Clone(); 

TGraph *kf_2 = (TGraph*)infileGraph->Get("k_factor_2017_nom");

int n = histo_ka->GetNbinsX();
int n_2 = histo_ka_2->GetNbinsX();

for (int i =1; i<= n;i++){
histo_kf->SetBinContent(i,0.0); 
//std::cout <<"Content old: " << histo_ka->GetBinContent(i) << std::endl;
std::cout <<"Content rewei: "<< histo_kf->GetBinContent(i) << std::endl;

}
for (int i =1; i<= n;i++){
std::cout <<"TGraph: " << kf->Eval(histo_ka->GetBinCenter(i)) << std::endl;
histo_kf->SetBinContent(i, histo_ka->GetBinContent(i)*kf->Eval(histo_ka->GetBinCenter(i))); 
std::cout <<"Content old: " << histo_ka->GetBinContent(i) << std::endl;
std::cout <<"Content rewei: "<< histo_kf->GetBinContent(i) << std::endl;

}

for (int i =1; i<= n_2;i++){
histo_kf_2->SetBinContent(i,0.0); 
//std::cout <<"Content old: " << histo_ka->GetBinContent(i) << std::endl;
std::cout <<"Content rewei: "<< histo_kf_2->GetBinContent(i) << std::endl;

}
for (int i =1; i<= n_2;i++){
std::cout <<"TGraph: " << kf_2->Eval(histo_ka_2->GetBinCenter(i)) << std::endl;
histo_kf_2->SetBinContent(i, histo_ka_2->GetBinContent(i)*kf_2->Eval(histo_ka_2->GetBinCenter(i))); 
//std::cout <<"Content old: " << histo_ka->GetBinContent(i) << std::endl;
//std::cout <<"Content rewei: "<< histo_kf->GetBinContent(i) << std::endl;

}
TCanvas *c1 = new TCanvas;
c1->cd();
histo_kf->Scale(1/35.9);
histo_kf_2->SetLineColor(2);
histo_kf_2->Scale(1/41.5);
histo_kf->Draw();
histo_kf_2->Draw("same");

}



