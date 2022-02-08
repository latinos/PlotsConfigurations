#include "LatinoAnalysis/MultiDraw/interface/TTreeFunction.h"
#include "LatinoAnalysis/MultiDraw/interface/FunctionLibrary.h"

#include "TMath.h"
#include "TGraph.h"
#include "TFile.h"
#include "TF1.h"
#include "TH2F.h"
#include "TVector2.h"
#include "TSystem.h"
#include "TLorentzVector.h"

#include <cmath>
#include <string>
#include <unordered_map>
#include <iostream>
#include <stdexcept>
#include <tuple>
#include <map>

using namespace std;

#ifndef JERtoMETOTF_HH
#define JERtoMETOTF_HH

class JERtoMETOTF : public multidraw::TTreeFunction {
public:
  //JERtoMETOTF(string file, string ele_WP, string mu_WP, string fr_ele_path, string pr_ele_path, string fr_mu_path, string pr_mu_path);
  JERtoMETOTF();

  char const* getName() const override { 
      return "JERtoMETOTF"; 
  }
  TTreeFunction* clone() const override { 
      //return new JERtoMETOTF(inputfile_path, ele_WP, mu_WP, fr_ele_path, pr_ele_path, fr_mu_path, pr_mu_path); 
      return new JERtoMETOTF(); 
  }

  double evaluate(unsigned) override;
  void beginEvent(long long) override;
  unsigned getNdata() override { return 2; } // pt, phi
  int getMultiplicity() override { return 1; }

protected:  
  ~JERtoMETOTF();
  void bindTree_(multidraw::FunctionLibrary&) override;

  UIntValueReader*  nCleanJet{};
  FloatArrayReader* CleanJet_pt{};
  //FloatArrayReader* CleanJet_pt_JERUp{};
  //FloatArrayReader* CleanJet_pt_JERDown{};
  FloatArrayReader* CleanJet_corr_JER{};
  FloatArrayReader* PuppiMET_pt{};
  FloatArrayReader* PuppiMET_phi{};

  std::array<float,2> outputValues; 
};

//JERtoMETOTF::JERtoMETOTF(string in_file, string ele_WP, string mu_WP, string in_fr_ele_path, string in_pr_ele_path, string in_fr_mu_path, string in_pr_mu_path) :
JERtoMETOTF::JERtoMETOTF() :
                  TTreeFunction() 
{
}


void
JERtoMETOTF::beginEvent(long long _iEntry)
{
  unsigned nCJ{*nCleanJet->Get()};
  float met_pt  = PuppiMET_pt->At(0);
  float met_phi = PuppiMET_phi->At(0);

  float met_px = met_pt*cos(met_phi);
  float met_py = met_pt*sin(met_phi);
  float met_c_px = met_pt*cos(met_phi);
  float met_c_py = met_pt*sin(met_phi);

  for (unsigned iCJ{0}; iCJ != nCJ; ++iCJ) {
      float jer_sf   = CleanJet_corr_JER->At(iCJ);
      float jet_c_pt = CleanJet_pt->At(iCJ);

      if (jet_c_pt < 15.) continue;

      float jet_pt   = jet_c_pt/jer_sf;  
      float pt_diff = jet_c_pt - jet_pt;

      //std::cout << "dpx : " << pt_diff*cos(met_phi) << ", dpy : " << pt_diff*sin(met_phi) << std::endl;
      met_c_px -= pt_diff*cos(met_phi);
      met_c_py -= pt_diff*sin(met_phi);
      
  }

  float met_c_pt  = sqrt(met_c_px*met_c_px + met_c_py*met_c_py);
  float met_c_phi = atan2(met_c_py, met_c_px);

  //std::cout << "Phi check: " << met_phi << "," << atan2(met_pt*sin(met_phi), met_pt*cos(met_phi)) << ", Corrected phi: " << met_c_phi << std::endl;
  //std::cout << "Phi check: " << met_px << "," << met_py << "," << atan2(met_py, met_px) << "," << met_phi << ", Corrected phi: " << met_c_px << "," << met_c_py << "," << atan2(met_c_py, met_c_px) << std::endl;

  //std::cout << "Original pt : " << met_pt << ", Corrected pt : " << met_c_pt << std::endl;
  //std::cout << "Original phi: " << met_phi << ", Corrected phi: " << met_c_phi << std::endl;

  std::array<float,2> output { met_c_pt, met_c_phi};

  outputValues = output;
}

double
JERtoMETOTF::evaluate(unsigned idx)
{
  //std::cout << "Ouput Values: " << outputValues[0] << ", " << outputValues[1] << "; index " << idx << ", " << outputValues[idx] << std::endl;
  return outputValues[idx];
}

void
JERtoMETOTF::bindTree_(multidraw::FunctionLibrary& _library)
{   
    _library.bindBranch(nCleanJet          , "nCleanJet");
    _library.bindBranch(CleanJet_pt        , "CleanJet_pt");
    //_library.bindBranch(CleanJet_pt_JERUp  , "CleanJet_pt_JERUp");
    //_library.bindBranch(CleanJet_pt_JERDown, "CleanJet_pt_JERDown");
    _library.bindBranch(CleanJet_corr_JER  , "CleanJet_corr_JER");
    _library.bindBranch(PuppiMET_pt        , "PuppiMET_pt");
    _library.bindBranch(PuppiMET_phi       , "PuppiMET_phi");
}

JERtoMETOTF::~JERtoMETOTF(){
  CleanJet_pt        =nullptr;
  //CleanJet_pt_JERUp  =nullptr;
  //CleanJet_pt_JERDown=nullptr;
  CleanJet_corr_JER  =nullptr;
  PuppiMET_pt        =nullptr;
  PuppiMET_phi       =nullptr;
}

#endif
