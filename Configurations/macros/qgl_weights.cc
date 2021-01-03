/*
 *  QG likelihood morphing
 */

#include "LatinoAnalysis/MultiDraw/interface/TTreeFunction.h"
#include "LatinoAnalysis/MultiDraw/interface/FunctionLibrary.h"

#include "TSystem.h"

#include <iostream>
#include <vector>
#include <utility>
#include <algorithm>
#include <iterator>

#include "TLorentzVector.h"
#include "TMath.h"

#include "TString.h"
#include "TGraph.h"
#include "TFile.h"


#ifndef QGL_weights_def
#define QGL_weights_def


namespace multidraw {
  extern thread_local TTree* currentTree;
}

int isRunningOnSample_(TString targetSample){
  TString currentSampleName = TString(multidraw::currentTree->GetCurrentFile()->GetName());
  if ( currentSampleName.Contains(targetSample)) {
    return 1;
  }
  else return 0;
}


class QGL_weights : public multidraw::TTreeFunction {
public:
  QGL_weights(){};
  
  char const* getName() const override { return "QGL_weights"; }
  TTreeFunction* clone() const override { return new QGL_weights();}  
//   TTreeFunction* clone() const override { return new QGL_weights(); }
  
  unsigned getNdata() override { return *(nCleanJet->Get()); } // size of the vector of jets
  int getMultiplicity() override { return 1; }
  
  void fillValues();
 
  double evaluate(unsigned) override;
  
protected:
  void bindTree_(multidraw::FunctionLibrary&) override;
  
//   UIntValueReader* nLepton;
  
  UIntValueReader* nCleanJet;
  FloatArrayReader* CleanJet_eta{};
  FloatArrayReader* CleanJet_pt{};
  IntArrayReader*   CleanJet_jetIdx{};
  IntArrayReader* Jet_partonFlavour{};
  FloatArrayReader* Jet_qgl{};
  
  std::vector<float> _new_Jet_qgl;
  
  static bool _isRunningOnData;
  
  
};

bool QGL_weights::_isRunningOnData{false};



void QGL_weights::fillValues() {
  
  //
  // Fill the new vector _new_Jet_qgl
  //
  //
  
  _new_Jet_qgl.clear();
  unsigned int total_jets{*nCleanJet->Get()};
  for (unsigned int iCleanJet=0; iCleanJet<total_jets ; iCleanJet++) {

    float eta = CleanJet_eta->At(iCleanJet);
    float qgl = Jet_qgl->At(CleanJet_jetIdx->At(iCleanJet));
    float weight = 1.;

    if (!QGL_weights::_isRunningOnData){
      int flavour = Jet_partonFlavour->At(CleanJet_jetIdx->At(iCleanJet));
      if (qgl >=0 && qgl <= 1) {
        if (abs(eta) < 2.5){
          if (flavour == 21) weight = 2.5626 * TMath::Power(qgl, 3) - 3.2240*TMath::Power(qgl,2) + 1.8687 * qgl + 0.6770;
          else weight = 0.0106*qgl + 0.9973;
        }else if (abs(eta)>=2.5 && abs(eta)<3){
          if (flavour == 21) weight = 0.1921*qgl + 0.8758;
          else weight = -0.5901*qgl + 1.3597;
        }
      }
    }
    _new_Jet_qgl.push_back(weight);
  }
  
}


double QGL_weights::evaluate(unsigned iJ) {
  if (iJ ==0) fillValues();
  if (iJ<_new_Jet_qgl.size()) {
    cout << _new_Jet_qgl.at(iJ) <<endl;
    return _new_Jet_qgl.at(iJ);
  }
  else return 1.;
  
}


void QGL_weights::bindTree_(multidraw::FunctionLibrary& _library) {
  //   std::cout << "Loading QGL_weights" << std::endl;
  _library.bindBranch(Jet_qgl, "Jet_qgl");
  _library.bindBranch(CleanJet_eta, "CleanJet_eta");
  _library.bindBranch(CleanJet_pt, "CleanJet_pt");
  _library.bindBranch(CleanJet_jetIdx, "CleanJet_jetIdx");
  _library.bindBranch(nCleanJet, "nCleanJet");
  
  
  QGL_weights::_isRunningOnData = isRunningOnSample_("Run");
  if (!QGL_weights::_isRunningOnData){
    //exclude Data and fakes
    _library.bindBranch(Jet_partonFlavour, "Jet_partonFlavour");
  }
  
}


//
// to be used like this:
//
//  
//      
//      ###################################3
//      
//      ###############
//      aliases['CleanJet_qgl_weight'] = {
//        'class': 'QGL_weights',
//        'args': (),
//        'linesToAdd' : [
//        'gSystem->Load("libLatinoAnalysisMultiDraw.so")',
//        '.L {}/macros/qgl_weights.cc+'.format(configurations)
//        ] 
//      } 
//      
//
//        

#endif
