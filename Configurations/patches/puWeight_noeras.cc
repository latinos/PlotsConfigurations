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
#include "TFile.h"
#include "TH2.h"
#include "TH2F.h"
#include "TH1D.h"

#include <iostream>


#ifndef PuWeightNoEras__
#define PuWeightNoEras__

namespace multidraw {
  extern thread_local TTree* currentTree;
}


class PuWeightNoEras : public multidraw::TTreeFunction {

public:
  PuWeightNoEras(char const* year, char const * puProfilesFile);
  ~PuWeightNoEras();

  char const* getName() const override { return "PuWeightNoEras"; }
  TTreeFunction* clone() const override { return new PuWeightNoEras(_year, _puProfilesFile);}
  
  void beginEvent(long long) override;
  unsigned getNdata() override { return 3; } // nominal, up, down
  int getMultiplicity() override { return 1; }
  double evaluate(unsigned) override;

protected:
  void bindTree_(multidraw::FunctionLibrary&) override;
  
  void setValues();
  std::array<float, 3> getWeights(double eta, double pt);

  TString _year{};
  TString _puProfilesFile{};

  TH1D * _pileup_100;
  TH1D * _pileup_plus_100;
  TH1D * _pileup_minus_100;
  TH1D * _pileup_200;
  TH1D * _pileup_plus_200;
  TH1D * _pileup_minus_200;

  TString _currentFileName;
  WeightCalculatorFromHistogram * _weightCalculator;
  WeightCalculatorFromHistogram * _weightCalculator_plus;
  WeightCalculatorFromHistogram * _weightCalculator_minus;

  FloatValueReader* Pileup_nTrueInt{};

  std::array<float,3> outputValues; 
};


PuWeightNoEras::PuWeightNoEras(char const* year,  char const * puProfilesFile) :
  TTreeFunction(),
  _year{year}, _puProfilesFile{puProfilesFile}
{
  auto file = TFile::Open(puProfilesFile);
  file->GetObject("pileup_"+_year +"_100", _pileup_100);
  file->GetObject("pileup_"+_year + "_plus_100", _pileup_plus_100);
  file->GetObject("pileup_"+_year + "_minus_100",  _pileup_minus_100);
  file->GetObject("pileup_"+_year + "_200", _pileup_200);
  file->GetObject("pileup_"+_year + "_plus_200", _pileup_plus_200);
  file->GetObject("pileup_"+_year + "_minus_200",  _pileup_minus_200);
  _pileup_100->SetDirectory(0);
  _pileup_plus_100->SetDirectory(0);
  _pileup_minus_100->SetDirectory(0);
  _pileup_200->SetDirectory(0);
  _pileup_plus_200->SetDirectory(0);
  _pileup_minus_200->SetDirectory(0);
  file->Close();
}


PuWeightNoEras::~PuWeightNoEras(){
  delete _pileup_100;
  delete _pileup_plus_100;
  delete _pileup_minus_100;
  delete _pileup_200;
  delete _pileup_plus_200;
  delete _pileup_minus_200;
}

void
PuWeightNoEras::beginEvent(long long _iEntry)
{ 
  // If the file changes, extract new weightCalculator for the file pileup profile
  TString currentFileName = TString(multidraw::currentTree->GetCurrentFile()->GetName());
  if (_currentFileName == "" || currentFileName != _currentFileName){
    //cout << "Working now on file: " << currentFileName << endl;
    _currentFileName = currentFileName;

    TFile * currentFile = TFile::Open(currentFileName);
    TH1D * pileup_in_file;
    currentFile->GetObject("autoPU", pileup_in_file);

    if (pileup_in_file->GetNbinsX() == 100){
      _weightCalculator = new WeightCalculatorFromHistogram(pileup_in_file, _pileup_100);
      _weightCalculator_plus = new WeightCalculatorFromHistogram(pileup_in_file, _pileup_plus_100);
      _weightCalculator_minus = new WeightCalculatorFromHistogram(pileup_in_file, _pileup_minus_100);
    }
    else if (pileup_in_file->GetNbinsX() == 200){
      _weightCalculator = new WeightCalculatorFromHistogram(pileup_in_file, _pileup_200);
      _weightCalculator_plus = new WeightCalculatorFromHistogram(pileup_in_file, _pileup_plus_200);
      _weightCalculator_minus = new WeightCalculatorFromHistogram(pileup_in_file, _pileup_minus_200);
    }else{
      cout << "ERROR! Target PU histo with Nbins: "<< pileup_in_file->GetNbinsX() << " not found!"<<endl;
      exit(1);
    }

    currentFile->Close();
  }

  // Set output values
  float nvtx_true = *(Pileup_nTrueInt->Get());
  outputValues[0] = _weightCalculator->getWeight(nvtx_true);
  outputValues[1] = _weightCalculator_plus->getWeight(nvtx_true);
  outputValues[2] = _weightCalculator_minus->getWeight(nvtx_true);
  //cout  << "nvtx: " << nvtx_true << " "<<outputValues[0]  << " "<<outputValues[1]  << " "<<outputValues[2] << endl;
}


double
PuWeightNoEras::evaluate(unsigned iJ)
{
  // nominal, up, down
  return outputValues[iJ];
}

void
PuWeightNoEras::bindTree_(multidraw::FunctionLibrary& _library)
{
  _library.bindBranch(Pileup_nTrueInt, "Pileup_nTrueInt");
}

#endif