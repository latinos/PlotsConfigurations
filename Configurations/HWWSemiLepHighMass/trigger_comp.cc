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


#ifndef trigger_comp_HH
#define trigger_comp_HH

class trigger_comp : public multidraw::TTreeFunction {
public:
  trigger_comp(TString fileName_mu, TString fileName_el );
//  trigger_comp(std::vector<std::array<float,7>> _values);
//  ~trigger_comp();

  char const* getName() const override { return "trigger_comp"; }
  TTreeFunction* clone() const override { return new trigger_comp(filenamemu, filenameel);}
  
  unsigned getNdata() override { return 3; } // nominal, up, down
  int getMultiplicity() override { return 1; }
  void beginEvent(long long) override;
  double evaluate(unsigned) override;

protected:
  void bindTree_(multidraw::FunctionLibrary&) override;
  
  FloatArrayReader* Lepton_pt{};
  FloatArrayReader* Lepton_eta{};
  IntArrayReader*   Lepton_pdgId{};
  IntArrayReader*   Lepton_electronIdx{};


  //void setValues();
  std::array<float, 3> getWeights(double eta, double pt, string iswhat);

  TString filenameel, filenamemu;
  std::vector<std::array<float,7>> _values_mu;
  std::vector<std::array<float,7>> _values_el;
  std::array<float,3> outputValues; 
};


trigger_comp::trigger_comp(TString fileName_mu, TString fileName_el) :
  filenamemu(fileName_mu),
  filenameel(fileName_el),
  TTreeFunction()
{
  // Reading the file
  std::ifstream inputFile_mu(TString(std::getenv("CMSSW_BASE")) +"/src/" + filenamemu);
  std::string line_mu;



  if (inputFile_mu.is_open()){

    while(getline(inputFile_mu, line_mu)){
      std::stringstream ss(line_mu);
      std::array<float,7> line_values{};
      int i = 0;
      float value;
      while (ss >> value)
      {
          line_values[i] = value;
          ++i;
      }
      _values_mu.push_back(line_values);    
      
       //std::for_each(line_values.begin(), line_values.end(), [](float v){cout << v << " ";});
       //cout << endl;
    }
  }

inputFile_mu.close();

  std::ifstream inputFile_el(TString(std::getenv("CMSSW_BASE")) +"/src/" + filenameel);
  //std::ifstream inputFile_el(fileName_el);
  std::string line_el;
  if (inputFile_el.is_open()){

    while(getline(inputFile_el, line_el)){
      std::stringstream ss(line_el);
      std::array<float,7> line_values{};
      int i = 0;
      float value;
      while (ss >> value)
      {
          line_values[i] = value;
          ++i;
      }
      _values_el.push_back(line_values);    
      // std::for_each(line_values.begin(), line_values.end(), [](float v){cout << v << " ";});
      // cout << endl;
    }
  }
}


//trigger_comp::trigger_comp(std::vector<std::array<float,7>> _values) :
//  TTreeFunction(), _values{_values}{}

//trigger_comp::~trigger_comp(){
//  Lepton_pt = nullptr;
//  Lepton_eta = nullptr;
//  Lepton_pdgId = nullptr;
//  Lepton_electronIdx = nullptr;
//}

void
trigger_comp::beginEvent(long long _iEntry)
{
  double lepEta{Lepton_eta->At(0)};
  double lepPt{Lepton_pt->At(0)};
  int lepEleIdx{Lepton_electronIdx->At(0)};

  

  if(lepEleIdx>=0){
    // This is an electron
    outputValues = getWeights(lepEta, lepPt,"isel" );
  }else{
    outputValues = getWeights(lepEta, lepPt,"ismu" ); 
  }

}


std::array<float,3> trigger_comp::getWeights(double eta, double pt, string iswhat){
  std::array<float,3> output { 0.,0.,0.};

  // handle overflow
  if ( eta < -2.5) eta = -2.499;
  if ( eta > 2.5 ) eta = 2.499;
  if ( pt > 100 ) pt = 99.99;


  if (iswhat == "isel"){  
  for (uint j = 0; j< _values_el.size(); j++){
       //cout << _values_el[j][0] << " and " << _values_el[j][1] << endl;
    if (eta >= _values_el[j][0] && eta <= _values_el[j][1] && pt >= _values_el[j][2] && pt <= _values_el[j][3]){
      output[0] = _values_el[j][4];
      output[1] = _values_el[j][4] + _values_el[j][5];
      output[2] = _values_el[j][4] - _values_el[j][6] ;
      break;
    }
  }
}else if(iswhat == "ismu"){
  for (uint j = 0; j< _values_mu.size(); j++){
    if (eta >= _values_mu[j][0] && eta <= _values_mu[j][1] && pt >= _values_mu[j][2] && pt <= _values_mu[j][3]){
      output[0] = _values_mu[j][4];
      output[1] = _values_mu[j][4] + _values_mu[j][5];
      output[2] = _values_mu[j][4] - _values_mu[j][6] ;
      break;
    }
  }
}
  return output;


  //setValues();
}

double
trigger_comp::evaluate(unsigned iJ)
{
  // weightReader[0] : central, weightReader[1] : stat up, weightReader[2] : stat down, weightReader[3] : jet sel
  //cout <<  iJ << ", " << outputValues[iJ] << ", ";
  return outputValues[iJ];
 // cout <<  outputValues[iJ] << endl;
}


void
trigger_comp::bindTree_(multidraw::FunctionLibrary& _library)
{
  _library.bindBranch(Lepton_pt, "Lepton_pt");
  _library.bindBranch(Lepton_eta, "Lepton_eta");
  _library.bindBranch(Lepton_pdgId, "Lepton_pdgId");
  _library.bindBranch(Lepton_electronIdx, "Lepton_electronIdx");

}

#endif
