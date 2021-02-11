#include "TString.h"
#include "TROOT.h"
#include "TH1F.h"
#include "TFile.h"
#include <iostream>

using namespace std;

TH1F* h;

void initaddEWKcorr(TString histoName){

  std::cout<<histoName<<std::endl;

  TFile* f = new TFile("/afs/cern.ch/work/f/fernanpe/CMSSW_8_0_5/src/PlotsConfigurations/Configurations/WW/Full2016/onTheFly/WW_EWK_Corr.root");

  h = (TH1F*) f -> Get(histoName);

}

float addEWKcorr(float lepPt){

  return h->GetBinContent(h->FindBin(lepPt));

}
