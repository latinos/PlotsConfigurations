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

int isData(){
  TString targetSampleName = "Run";
  TString currentSampleName = TString(multidraw::currentTree->GetCurrentFile()->GetName());
  if ( currentSampleName.Contains(targetSampleName)) {
      return 1;

  }
  else return 0;
}
