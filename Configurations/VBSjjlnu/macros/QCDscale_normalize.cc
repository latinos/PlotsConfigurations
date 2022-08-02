#include "LatinoAnalysis/MultiDraw/interface/TTreeFunction.h"
#include "LatinoAnalysis/MultiDraw/interface/FunctionLibrary.h"
#include "PhysicsTools/NanoAODTools/interface/WeightCalculatorFromHistogram.h"

#include <vector>
#include <array>
#include <map>
#include <iostream>
#include <fstream>
#include <sstream>
#include <string>

#include "TString.h"
#include "TTreeReader.h"
#include "TFile.h"
#include "TH2.h"
#include "TH2F.h"
#include "TH1D.h"

#include <iostream>


#ifndef QCDScaleNormalized__
#define QCDScaleNormalized__

namespace multidraw {
  extern thread_local TTree* currentTree;
}


class QCDScaleNormalized : public multidraw::TTreeFunction {

public:
  QCDScaleNormalized();
  ~QCDScaleNormalized();

  char const* getName() const override { return "QCDScaleNormalized"; }
  TTreeFunction* clone() const override { return new QCDScaleNormalized();}
  
  void beginEvent(long long) override;
  unsigned getNdata() override { return 9; } //9 scale variations
  int getMultiplicity() override { return 1; }
  double evaluate(unsigned) override;

protected:
  void bindTree_(multidraw::FunctionLibrary&) override;
  
  FloatArrayReader* LHEScaleWeight{};
  TString _currentFileName;
  std::array<double,9> _currentWeightsSum; 
};


QCDScaleNormalized::QCDScaleNormalized() :
  TTreeFunction()
{}


QCDScaleNormalized::~QCDScaleNormalized(){
}

void
QCDScaleNormalized::beginEvent(long long _iEntry)
{ 
  // If the file changes, extract new weightCalculator for the file pileup profile
  TString currentFileName = TString(multidraw::currentTree->GetCurrentFile()->GetName());
  if (_currentFileName == "" || currentFileName != _currentFileName){
    //cout << "Working now on file: " << currentFileName << endl;
    _currentFileName = currentFileName;

    TFile * currentFile = TFile::Open(currentFileName);
  
    TTreeReader reader("Runs", currentFile);
    TTreeReaderArray<double> weights (reader, "LHEScaleSumw");
    if (reader.Next())
    {
      for (int i =0; i<9; i++) _currentWeightsSum[i] = weights.At(i);
    }else{
      std::cout << "ERROR!: No entries in tree for LHEScaleSumw" << std::endl;
    }
    currentFile->Close();
  }
}


double
QCDScaleNormalized::evaluate(unsigned iJ)
{
  //std::cout << LHEScaleWeight->At(iJ) << " " << _currentWeightsSum[iJ] << std::endl;
  return LHEScaleWeight->At(iJ) / _currentWeightsSum[iJ];
}

void
QCDScaleNormalized::bindTree_(multidraw::FunctionLibrary& _library)
{
  _library.bindBranch(LHEScaleWeight, "LHEScaleWeight");
}

#endif