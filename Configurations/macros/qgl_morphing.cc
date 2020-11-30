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


#ifndef QGL_morphing_def
#define QGL_morphing_def


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
  
  FloatArrayReader* Jet_pt{};
  FloatArrayReader* Jet_eta{};
  FloatArrayReader* Jet_qgl{};
  
  TString _fileNameWithRootFilesOfCorrection{};  
  static std::map<std::string, TGraph*> morphing_functions;
  
  std::vector<float> _new_Jet_qgl;
  
  
};


QGL_morphing::QGL_morphing() :
TTreeFunction() {
  
}


QGL_morphing::QGL_morphing( char const* fileNameWithRootFilesOfCorrection ) :
TTreeFunction(),
_fileNameWithRootFilesOfCorrection(fileNameWithRootFilesOfCorrection) {
  
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
  std::cout << "Loading QGL_morphing" << std::endl;
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
