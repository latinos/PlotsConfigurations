#include "TString.h"
#include "TROOT.h"
#include "TH1F.h"
#include "TFile.h"
#include <iostream>

using namespace std;

TH1F* h;

void initInterpolationWeight(TString histoName = "DATA2"){

  std::cout<<histoName<<std::endl;

  TFile* f = new TFile("/afs/cern.ch/user/d/dkondrat/work/CMSSW_10_2_9/src/PlotsConfigurations/Configurations/HMuMu/Zpt2016/DY_histo.root");

  h = (TH1F*) f -> Get(histoName);

}

float interpolationWeight(float gen_ptll){

  return h->GetBinContent(h->FindBin(gen_ptll));

}
