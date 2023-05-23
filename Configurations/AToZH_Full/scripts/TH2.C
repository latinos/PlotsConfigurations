#include "TH1.h"
#include "TH2.h"
#include "TF1.h"
#include "TMath.h"
#include "TROOT.h"
#include "TFile.h"
#include "TProfile2D.h"
#include "TProfile.h"
#include <iostream>
#include <string>
using namespace std;

void TH2(){

TFile *_file0 = TFile::Open("../2017_v9/rootFiles_AZH_2017_v9_2DFit/plots_AZH_2017_v9_2DFit.root");
//TH1D* h_input;
std::vector<pair<int, int>> pairVec;
pairVec.emplace_back(900, 400);
pairVec.emplace_back(900, 370);
pairVec.emplace_back(700, 400);
pairVec.emplace_back(700, 370);
pairVec.emplace_back(700, 350);
pairVec.emplace_back(500, 400);
pairVec.emplace_back(500, 350);
pairVec.emplace_back(1200, 850);
pairVec.emplace_back(1200, 1000);
pairVec.emplace_back(1000, 600);
pairVec.emplace_back(800, 600);

//for (auto iter: pairVec) {

//TH1D* h_input = (TH1D*) _file0->Get(TString("breq_SR/ptzVSdeltam/histo_AZH_"+std::to_string(iter.first)+"_"+std::to_string(iter.second)));

TH1D* h_input = (TH1D*) _file0->Get(TString("breq_SR/ptzVSdeltam/histo_Fake"));
double xbinedges[] = {0,100,200,300,400,600,1000};
double ybinedges[] = {0,200,300,400,500,600,800};
TH2D* h_output = new TH2D("h_output", "PtZ vs DeltaM", 6, xbinedges, 6, ybinedges);
     for (int ibinx = 1; ibinx < 7; ibinx++){
	  for (int ibiny = 1; ibiny < 7; ibiny++) {
	      h_output->SetBinContent(ibinx, ibiny, h_input->GetBinContent(ibinx+6*(ibiny-1)));

	  }
	  }

TCanvas *myCanvas = TCanvas::MakeDefCanvas();
h_output->GetXaxis()->SetTitle("PtZ");
//h_output->GetYaxis()->SetTitle(TString("DeltaM_mA"+std::to_string(iter.first)+"_mH_"+std::to_string(iter.second)));
h_output->GetYaxis()->SetTitle(TString("DeltaM"));

h_output->Draw("COLZ" "text");
gStyle->SetOptStat(0);
//myCanvas->SaveAs(TString("PtZvsDm_mA_"+std::to_string(iter.first)+"_mH_"+std::to_string(iter.second)+".png"));
myCanvas->SaveAs(TString("PtZvsDm_Fake.png"));

//}
}
