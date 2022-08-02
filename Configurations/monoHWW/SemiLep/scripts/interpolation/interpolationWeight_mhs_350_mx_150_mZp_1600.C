#include "TString.h"
#include "TROOT.h"
#include "TH1F.h"
#include "TFile.h"
#include <iostream>

using namespace std;

TFile* myfile = new TFile("/afs/cern.ch/user/f/fernanpe/public/for_MonoH_analysis/Interpolation_mhs_350_mx_150_mZp_1600.root");  

TH1F* histo = (TH1F*) myfile->Get("Ratio");

float interpolationWeight_mhs_350_mx_150_mZp_1600(float higgsPt=100.){
  return histo->GetBinContent(histo->FindBin(higgsPt));
}
