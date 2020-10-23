#include "TTree.h"
#include "TFile.h"
#include "TSystem.h"
#include "TROOT.h"
#include "TString.h"
#include <iostream>

using namespace std;

namespace multidraw {
  extern thread_local TTree* currentTree;
}

TString currentSampleName;

bool CheckforSM(){
  currentSampleName = TString(multidraw::currentTree->GetCurrentFile()->GetName());
  //std::cout << currentSampleName << std::endl;
  //if ( currentSampleName.Contains("GluGluHToWWTo2L2Nu_M125")) return false;
  //if ( currentSampleName.Contains("VBFHToWWTo2L2Nu_M125")) return false;
  if ( currentSampleName.Contains("BWReweight")) return false;
  return true;
}
