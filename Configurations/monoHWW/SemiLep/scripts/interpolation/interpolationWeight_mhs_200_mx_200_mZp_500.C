#include "TString.h"
#include "TROOT.h"
#include "TH1F.h"
#include "TFile.h"
#include <iostream>

using namespace std;

TFile* myfile = new TFile("/afs/cern.ch/user/f/fernanpe/public/for_MonoH_analysis/Interpolation_mhs_200_mx_200_mZp_500.root");  

TH1F* histo = (TH1F*) myfile->Get("Ratio");

float interpolationWeight_mhs_200_mx_200_mZp_500(float higgsPt=100.){
  return histo->GetBinContent(histo->FindBin(higgsPt));
}
