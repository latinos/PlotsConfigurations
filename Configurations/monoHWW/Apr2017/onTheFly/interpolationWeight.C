#include "TString.h"
#include "TROOT.h"
#include "TH1F.h"
#include "TFile.h"
#include <iostream>

using namespace std;

TH1F* h;

void initInterpolationWeight(TString histoName = "Target_600_325_Ref_600_300"){

  std::cout<<histoName<<std::endl;

  TFile* f = new TFile("/afs/cern.ch/user/n/ntrevisa/work/CMSSW_8_0_26_patch1/src/PlotsConfigurations/Configurations/monoHWW/Apr2017/HISTOShapes2HDM_READ.root");

  h = (TH1F*) f -> Get(histoName);

}

float interpolationWeight(float higgsPt){

  return h->GetBinContent(h->FindBin(higgsPt));

}
