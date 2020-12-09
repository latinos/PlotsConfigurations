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


#ifndef QGL_morphing_def
#define QGL_morphing_def



namespace multidraw {
  extern thread_local TTree* currentTree;
}


int isRunningSample(TString targetSample){
  TString currentSampleName = TString(multidraw::currentTree->GetCurrentFile()->GetName());
  if ( currentSampleName.Contains(targetSample)) {
    return 1;
  }
  else return 0;
}




class QGL_morphing : public multidraw::TTreeFunction {
public:
  QGL_morphing();
  QGL_morphing( char const* fileNameWithRootFilesOfCorrection );
  
  char const* getName() const override { return "QGL_morphing"; }
  TTreeFunction* clone() const override { return new QGL_morphing(_fileNameWithRootFilesOfCorrection);}  
//   TTreeFunction* clone() const override { return new QGL_morphing(); }
  
  unsigned getNdata() override { return _new_Jet_qgl.size(); } // size of the vector of jets
  int getMultiplicity() override { return 1; }
  
  void beginEvent(long long) override;
 
  double evaluate(unsigned) override;
  
protected:
  void bindTree_(multidraw::FunctionLibrary&) override;
  
//   UIntValueReader* nLepton;
  
  UIntValueReader* nCleanJet;
  FloatArrayReader* CleanJet_eta{};
  FloatArrayReader* CleanJet_pt{};
  IntArrayReader*   CleanJet_jetIdx{};
  FloatArrayReader* Jet_qgl{};
  IntArrayReader* Jet_partonFlavour{};
  
  
 
  
  TString _fileNameWithRootFilesOfCorrection{};  
  static std::map<std::string, TGraph*> _morphing_functions;
  
  std::vector<float> _new_Jet_qgl;
  
  static bool _isRunningOnData;
  
  
};

std::map<std::string, TGraph*> QGL_morphing::_morphing_functions{};
bool QGL_morphing::_isRunningOnData{false};


QGL_morphing::QGL_morphing() :
TTreeFunction() {
  
}


QGL_morphing::QGL_morphing( char const* fileNameWithRootFilesOfCorrection ) :
TTreeFunction(),
_fileNameWithRootFilesOfCorrection(fileNameWithRootFilesOfCorrection) {
  
  TFile rfile {_fileNameWithRootFilesOfCorrection.Data(), "READ"};
  QGL_morphing::_morphing_functions["gluon_loweta_pt0"]  = (TGraph*) rfile.Get("j3_loweta_pt0_gluon" );
  QGL_morphing::_morphing_functions["gluon_loweta_pt1"]  = (TGraph*) rfile.Get("j3_loweta_pt1_gluon" );
  QGL_morphing::_morphing_functions["gluon_higheta_pt0"] = (TGraph*) rfile.Get("j1_higheta_pt0_gluon");
  QGL_morphing::_morphing_functions["gluon_higheta_pt1"] = (TGraph*) rfile.Get("j1_higheta_pt1_gluon");
  QGL_morphing::_morphing_functions["quark_loweta_pt0"]  = (TGraph*) rfile.Get("j1_loweta_pt0_quark" );
  QGL_morphing::_morphing_functions["quark_loweta_pt1"]  = (TGraph*) rfile.Get("j1_loweta_pt1_quark" );
  QGL_morphing::_morphing_functions["quark_higheta_pt0"] = (TGraph*) rfile.Get("j1_higheta_pt0_quark");
  QGL_morphing::_morphing_functions["quark_higheta_pt1"] = (TGraph*) rfile.Get("j0_higheta_pt1_quark");
  rfile.Close();
  
}


void QGL_morphing::beginEvent(long long _iEntry) {
  
  //
  // Fill the new vector _new_Jet_qgl
  //
  //
  
  _new_Jet_qgl.clear();
  unsigned int total_jets{*nCleanJet->Get()};
  for (unsigned int iCleanJet=0; iCleanJet<total_jets ; iCleanJet++) {
    float eta = CleanJet_eta->At(iCleanJet);
    float pt  = CleanJet_pt->At(iCleanJet);
    float qgl = Jet_qgl->At(CleanJet_jetIdx->At(iCleanJet));
    
    if (!QGL_morphing::_isRunningOnData){
      
      //       std::cout << " it is not DATA " << std::endl;
      //
      // modify qgl 
      //

      int flavour = Jet_partonFlavour->At(CleanJet_jetIdx->At(iCleanJet));
      
      if (qgl > 0.0 && qgl < 1.0) {
        float y = qgl;
        if (abs(eta)<3 && pt < 75) {
          if (flavour==21) y =  QGL_morphing::_morphing_functions["gluon_loweta_pt0"]->Eval(qgl);
          else             y =  QGL_morphing::_morphing_functions["quark_loweta_pt0"]->Eval(qgl);
        }
        if (abs(eta)<3 && pt >= 75) {
          if (flavour==21) y =  QGL_morphing::_morphing_functions["gluon_loweta_pt1"]->Eval(qgl);
          else             y =  QGL_morphing::_morphing_functions["quark_loweta_pt1"]->Eval(qgl);
        }
        if (abs(eta)>=3 && pt < 75) {
          if (flavour==21) y =  QGL_morphing::_morphing_functions["gluon_higheta_pt0"]->Eval(qgl);
          else             y =  QGL_morphing::_morphing_functions["quark_higheta_pt0"]->Eval(qgl);
        }
        if (abs(eta)>=3 && pt >= 75) {
          if (flavour==21) y =  QGL_morphing::_morphing_functions["gluon_higheta_pt1"]->Eval(qgl);
          else             y =  QGL_morphing::_morphing_functions["quark_higheta_pt1"]->Eval(qgl);
        }
        
        // it should never happen, but you never know ...
        if (y<0.0 ) y=0.0;
        if (y>1.0 ) y=1.0;
        
        qgl = y;
      }
    }
    _new_Jet_qgl.push_back(qgl);
  }
  
}


double QGL_morphing::evaluate(unsigned iJ) {
  
  if (iJ<_new_Jet_qgl.size()) return _new_Jet_qgl.at(iJ);
  else return -9999.;
  
}


void QGL_morphing::bindTree_(multidraw::FunctionLibrary& _library) {
  //   std::cout << "Loading QGL_morphing" << std::endl;
  
  _library.bindBranch(Jet_qgl, "Jet_qgl");  
  _library.bindBranch(CleanJet_eta, "CleanJet_eta");
  _library.bindBranch(CleanJet_pt, "CleanJet_pt");
  _library.bindBranch(CleanJet_jetIdx, "CleanJet_jetIdx");
  _library.bindBranch(nCleanJet, "nCleanJet");
  
  
  QGL_morphing::_isRunningOnData = isRunningSample("Run");
  if (!QGL_morphing::_isRunningOnData){
    //exclude Data and fakes
    _library.bindBranch(Jet_partonFlavour, "Jet_partonFlavour");
  }
  
  
  
  _library.addDestructorCallback([]() {
    _morphing_functions.clear();
   });
  
}


//
// to be used like this:
//
//  
//      
//      ###################################3
//      # QGL variables
//      morphing_file = "/afs/cern.ch/user/d/dvalsecc/public/qgl_morphing/morphing_functions_final_2018.root"
//      # /afs/cern.ch/user/d/dvalsecc/public/qgl_morphing/morphing_functions_final_2016.root    --> for 2016
//      # /afs/cern.ch/user/d/dvalsecc/public/qgl_morphing/morphing_functions_final_2018.root    --> for 2017 (same as 2018)
//      # /afs/cern.ch/user/d/dvalsecc/public/qgl_morphing/morphing_functions_final_2018.root    --> for 2018
//      
//      ###############
//      aliases['CleanJet_qgl_morphed'] = {
//        'class': 'QGL_morphing',
//        'args': (morphing_file),
//        'linesToAdd' : [
//        'gSystem->Load("libLatinoAnalysisMultiDraw.so")',
//        '.L {}/macros/qgl_morphing.cc+'.format(configurations)
//        ] 
//      } 
//      
//      
//  and as variable:
//
//
//        variables['Jet_qgl_morphed_0']  = {   'name': 'CleanJet_qgl_morphed[0]',
//          'range' : (100,-10,1),
//          'xaxis' : 'qgl morphed test',
//          'fold' : 3
//        }
//        
//        

#endif
