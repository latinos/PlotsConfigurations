#include <cassert>
#include <cmath>
#include "TH1.h"
#include "TH1D.h"
#include "TCanvas.h"
#include "TRandom.h"


void plotttZnorm_withsyst() {
std::vector<float> r_valuesh1;
std::vector<float> r_valuesh2;
std::vector<float> r_valuesh3;
for (int i = 1; i < 1000; i++) {
     TFile* _fileh1 = new TFile(((std::string("condor_toys/multidimfitresult_1000_600_0signal1ttZ")+std::to_string(i)+std::string(".root")).c_str()));
     TFile* _fileh2 = new TFile(((std::string("condor_toys/multidimfitresult_1000_600_0.01signal1ttZ")+std::to_string(i)+std::string(".root")).c_str()));
    //_file0->cd();
    RooFitResult* fit_mdfh1;
    RooFitResult* fit_mdfh2;
    fit_mdfh1 = (RooFitResult*) _fileh1->Get("fit_mdf");
    fit_mdfh2 = (RooFitResult*) _fileh2->Get("fit_mdf");
    unsigned long sh1 = fit_mdfh1->floatParsFinal().size();
    unsigned long sh2 = fit_mdfh2->floatParsFinal().size();
    for (unsigned kh1 = 0; kh1 < sh1; kh1++){
	if ((((RooRealVar*) fit_mdfh1->floatParsFinal().at(kh1))->GetName())==std::string("CMS_ttZ_norm2017")){
              float rh1 = ((RooRealVar*) fit_mdfh1->floatParsFinal().at(kh1))->getValV();
	      r_valuesh1.push_back(rh1);
	}
    }

    for (unsigned kh2 = 0; kh2 < sh2; kh2++){
	if ((((RooRealVar*) fit_mdfh2->floatParsFinal().at(kh2))->GetName())==std::string("CMS_ttZ_norm2017")){
              float rh2 = ((RooRealVar*) fit_mdfh2->floatParsFinal().at(kh2))->getValV();
	      r_valuesh2.push_back(rh2);
	}
    }


}

TH1F* h1 = new TH1F("h1", "postfit ttZnorm", 20, -0.5, 3.0);
TH1F* h2 = new TH1F("h2", "postfit", 20, -0.5, 3.0);
TCanvas *c1 = new TCanvas("c1","ttZ normalization",200,10,700,500);
//for(vector<float>::iterator it = r_values.begin(); it != r_values.end(); it++)

for(int k1 = 0; k1 < r_valuesh1.size(); k1++) {
    h1->Fill(r_valuesh1.at(k1));
}


for(int k2 = 0; k2 < r_valuesh2.size(); k2++) {
    h2->Fill(r_valuesh2.at(k2));
}



auto legend = new TLegend(0.78,0.5,0.9,0.7);
legend->AddEntry(h1,"r=0","f");
legend->AddEntry(h2,"r=0.01","f");

c1->cd();
h1->SetLineColor(kRed);
h1->Draw();
h2->SetLineColor(kBlue);
h2->Draw("SAMES");
legend->Draw();
c1->Update();
c1->SaveAs("ttZnorm_withsyst.png");
}
