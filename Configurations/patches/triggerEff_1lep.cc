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
#include "TFile.h"
#include "TH2.h"
#include "TH2F.h"
#include "Math/Vector4Dfwd.h"
#include "Math/GenVector/LorentzVector.h"
#include "Math/GenVector/PtEtaPhiM4D.h"

#include <iostream>


#ifndef TrigEff_1lep_HH
#define TrigEff_1lep_HH

class TrigEff_1lep : public multidraw::TTreeFunction {
public:
  TrigEff_1lep(char const* fileName);
  TrigEff_1lep(std::vector<std::array<float,7>> _values);
  ~TrigEff_1lep();

  char const* getName() const override { return "TrigEff_1lep"; }
  TTreeFunction* clone() const override { return new TrigEff_1lep(_values);}
  
  void beginEvent(long long) override;
  unsigned getNdata() override { return 3; } // nominal, up, down
  int getMultiplicity() override { return 1; }
  double evaluate(unsigned) override;

protected:
  void bindTree_(multidraw::FunctionLibrary&) override;
  
  FloatArrayReader* Lepton_pt{};
  FloatArrayReader* Lepton_eta{};
  IntArrayReader*   Lepton_pdgId{};
  IntArrayReader*   Lepton_electronIdx{};


  void setValues();
  std::array<float, 3> getWeights(double eta, double pt);

  TString fileName_{};
  std::vector<std::array<float,7>> _values;
  std::array<float,3> outputValues; 
};


TrigEff_1lep::TrigEff_1lep(char const* fileName) :
  TTreeFunction(),
  fileName_{fileName}
{
  // Reading the file
  std::ifstream inputFile(fileName);
  std::string line;
  if (inputFile.is_open()){

    while(getline(inputFile, line)){
      std::stringstream ss(line);
      std::array<float,7> line_values{};
      int i = 0;
      float value;
      while (ss >> value)
      {
          line_values[i] = value;
          ++i;
      }
      _values.push_back(line_values);    
      
      // std::for_each(line_values.begin(), line_values.end(), [](float v){cout << v << " ";});
      // cout << endl;
    }
  }

}


TrigEff_1lep::TrigEff_1lep(std::vector<std::array<float,7>> _values) :
  TTreeFunction(), _values{_values}{}

TrigEff_1lep::~TrigEff_1lep(){
  Lepton_pt = nullptr;
  Lepton_eta = nullptr;
  Lepton_pdgId = nullptr;
  Lepton_electronIdx = nullptr;
}

void
TrigEff_1lep::beginEvent(long long _iEntry)
{
  setValues();
}


double
TrigEff_1lep::evaluate(unsigned iJ)
{
  // weightReader[0] : central, weightReader[1] : up, weightReader[2] : down
  return outputValues[iJ];
}


void
TrigEff_1lep::bindTree_(multidraw::FunctionLibrary& _library)
{
  _library.bindBranch(Lepton_pt, "Lepton_pt");
  _library.bindBranch(Lepton_eta, "Lepton_eta");
  _library.bindBranch(Lepton_pdgId, "Lepton_pdgId");
  _library.bindBranch(Lepton_electronIdx, "Lepton_electronIdx");

}


void
TrigEff_1lep::setValues()
{

  double lepEta{Lepton_eta->At(0)};
  double lepPt{Lepton_pt->At(0)};
  int lepEleIdx{Lepton_electronIdx->At(0)};

  if(lepEleIdx>=0){
    // This is an electron
    outputValues = getWeights(lepEta, lepPt);
  }else{
    outputValues = {1.,1.,1.}; 
  }

}


std::array<float,3> TrigEff_1lep::getWeights(double eta, double pt){
  std::array<float,3> output { 0.,0.,0.};

  // handle overflow
  if ( eta < -2.5) eta = -2.499;
  if ( eta > 2.5 ) eta = 2.499;
  if ( pt > 100 ) pt = 99.99;
  
  for (uint j = 0; j< _values.size(); j++){
    if (eta >= _values[j][0] && eta <= _values[j][1] && pt >= _values[j][2] && pt <= _values[j][3]){
      output[0] = _values[j][4];
      output[1] = _values[j][4] + _values[j][5];
      output[2] = _values[j][4] - _values[j][6] ;
      break;
    }
  }
  return output;

}

#endif