#include "LatinoAnalysis/MultiDraw/interface/TTreeFunction.h"
#include "LatinoAnalysis/MultiDraw/interface/FunctionLibrary.h"

#include <vector>
#include <array>
#include <map>
#include <iostream>
#include <fstream>
#include <sstream>
#include <string>



#include "TVector2.h"
#include "TString.h"
#include "TGraph.h"
#include "TFile.h"
#include "TH2.h"
#include "TH2F.h"
#include "Math/Vector4Dfwd.h"
#include "Math/GenVector/LorentzVector.h"
#include "Math/GenVector/PtEtaPhiM4D.h"

#include <iostream>


#ifndef QGL_morphing_def
#define QGL_morphing_def

class QGL_morphing : public multidraw::TTreeFunction {

public:
  
  QGL_morphing( char const* fileNameWithRootFilesOfCorrection );
  ~QGL_morphing();
  
  char const* getName() const override { return "QGL_morphing"; }
  TTreeFunction* clone() const override { return new QGL_morphing(_fileNameWithRootFilesOfCorrection.c_str());}
  
  void beginEvent(long long) override;
  unsigned getNdata() override { return _new_Jet_qgl.size(); } // size of the vector of jets
  int getMultiplicity() override { return 1; }
  double evaluate(unsigned) override;
  
protected:
  
  void bindTree_(multidraw::FunctionLibrary&) override;
  
  FloatArrayReader* Jet_pt{};
  FloatArrayReader* Jet_eta{};
  FloatArrayReader* Jet_qgl{};
  
//   IntArrayReader*   Lepton_pdgId{};
    
  std::string _fileNameWithRootFilesOfCorrection{};  
  static std::map<std::string, TGraph*> morphing_functions;
  
  std::vector<float> _new_Jet_qgl;
  
};


QGL_morphing::QGL_morphing(char const* fileNameWithRootFilesOfCorrection) :
        TTreeFunction(),
        _fileNameWithRootFilesOfCorrection{fileNameWithRootFilesOfCorrection} {
          
// Reading the file and extract TGraphs
//           
//           fileNameWithRootFilesOfCorrection
// 
        
  
}


void QGL_morphing::beginEvent(long long _iEntry) {
  
  //
  // Fill the new vector _new_Jet_qgl
  //
  //
  
}


double QGL_morphing::evaluate(unsigned iJ) {
  if (iJ<_new_Jet_qgl.size()) return _new_Jet_qgl.at(iJ);
  else return -9999.;
}


void QGL_morphing::bindTree_(multidraw::FunctionLibrary& _library) {
  _library.bindBranch(Jet_pt, "Jet_pt");
  _library.bindBranch(Jet_eta, "Jet_eta");
  _library.bindBranch(Jet_qgl, "Jet_qgl");
}


//
// to be used like this:
//
//  aliases['Jet_qgl_morphed'] = {
//    'class': 'QglVarsMorphing',
//    'args': ('blabla.txt'),
//    'linesToAdd' : [
//    'gSystem->Load("libLatinoAnalysisMultiDraw.so")',
//    '.L {}/macros/qgl_vars_morphing.cc+'.format(configurations)
//    ] 
//  } 
//
//

#endif

