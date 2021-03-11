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


#ifndef PDFWeightNormalized__
#define PDFWeightNormalized__

namespace multidraw {
  extern thread_local TTree* currentTree;
}


class PDFWeightNormalized : public multidraw::TTreeFunction {

public:
  PDFWeightNormalized();
  ~PDFWeightNormalized();

  char const* getName() const override { return "PDFWeightNormalized"; }
  TTreeFunction* clone() const override { return new PDFWeightNormalized();}
  
  void beginEvent(long long) override;
  unsigned getNdata() override { return 103; } //9 scale variations
  int getMultiplicity() override { return 1; }
  double evaluate(unsigned) override;

protected:
  void bindTree_(multidraw::FunctionLibrary&) override;
  
  FloatArrayReader* LHEPdfWeight{};
  TString _currentFileName;
  std::vector<double> _currentWeightsSum; 
};


PDFWeightNormalized::PDFWeightNormalized() :
  TTreeFunction()
{}


PDFWeightNormalized::~PDFWeightNormalized(){
}

void
PDFWeightNormalized::beginEvent(long long _iEntry)
{ 
  // If the file changes, extract new weightCalculator for the file pileup profile
  TString currentFileName = TString(multidraw::currentTree->GetCurrentFile()->GetName());
  if (_currentFileName == "" || currentFileName != _currentFileName){
    //cout << "Working now on file: " << currentFileName << endl;
    _currentFileName = currentFileName;

    TFile * currentFile = TFile::Open(currentFileName);
  
    TTreeReader reader("Runs", currentFile);
    TTreeReaderValue<uint> N_weights (reader, "nLHEPdfSumw");
    TTreeReaderArray<double> weights (reader, "LHEPdfSumw");
    if (reader.Next())
    {
      for (int i =0; i< *N_weights; i++) _currentWeightsSum.push_back(weights.At(i));
    }else{
      std::cout << "ERROR!: No entries in tree for LHEScaleSumw" << std::endl;
    }
    currentFile->Close();
  }
}


double
PDFWeightNormalized::evaluate(unsigned iJ)
{
  //std::cout << LHEPdfWeight->At(iJ) << " " << _currentWeightsSum[iJ] << std::endl;
  return LHEPdfWeight->At(iJ) / _currentWeightsSum[iJ];
}

void
PDFWeightNormalized::bindTree_(multidraw::FunctionLibrary& _library)
{
  _library.bindBranch(LHEPdfWeight, "LHEPdfWeight");
}

#endif