#include "TString.h"
#include "TROOT.h"
#include "TH1F.h"
#include "TFile.h"
#include <iostream>

using namespace std;

TFile* myfile = new TFile("/afs/cern.ch/user/f/fernanpe/public/for_MonoH_analysis/histos.root");

TH1F* histo = (TH1F*) myfile->Get("Histo_mhs_200_mx_150_mZp_2200");
//TH1F* reference;

// void init(TString histo1 = "Histo_mhs_200_mx_150_mZp_2200", TString histo2 = "Histo_mhs_200_mx_150_mZp_2200"){

//   histo = (TH1F*) myfile->Get(histo1); 
//   reference = (TH1F*) myfile->Get(histo2);   

// }

//init("Histo_mhs_200_mx_150_mZp_2200", "Histo_mhs_160_mx_100_mZp_1200");

//histo->Divide(reference);

float test(float higgsPt=100.){
      
  float test = histo->GetBinContent(histo->FindBin(higgsPt));

  return test;
  

}
