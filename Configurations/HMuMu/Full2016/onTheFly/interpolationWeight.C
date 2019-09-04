#include "TString.h"
#include "TROOT.h"
#include "TH1F.h"
#include "TFile.h"
#include <iostream>

using namespace std;

TH1F* h;

void initInterpolationWeight(TString histoName = "DATA2"){

  std::cout<<histoName<<std::endl;

  TFile* f = new TFile("$CMSSW_BASE/src/PlotsConfigurations/Configurations/HMuMu/Full2016/DY_histo.root");

  h = (TH1F*) f -> Get(histoName);

}

float interpolationWeight(float gen_ptll){

  return h->GetBinContent(h->FindBin(gen_ptll));

}
