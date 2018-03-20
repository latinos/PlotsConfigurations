#include "TString.h"
#include "TROOT.h"
#include "TH1F.h"
#include "TFile.h"
#include <iostream>

using namespace std;

TH1F* h;

void initInterpolationWeightZB(TString histoName = "Target_50_40_Ref_50_50"){

  std::cout<<histoName<<std::endl;

  TFile* f = new TFile("/afs/cern.ch/user/n/ntrevisa/work/CMSSW_8_0_26_patch1/src/PlotsConfigurations/Configurations/monoHWW/Apr2017/HISTOShapesZpB_READ.root");

  h = (TH1F*) f -> Get(histoName);

}

float interpolationWeightZB(float higgsPt){

  return h->GetBinContent(h->FindBin(higgsPt));

}
