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

#ifndef HEMtoMETOTF_HH
#define HEMtoMETOTF_HH

namespace multidraw {
  extern thread_local TTree* currentTree;
}

class HEMtoMETOTF : public multidraw::TTreeFunction {
public:
  //HEMtoMETOTF(string file, string ele_WP, string mu_WP, string fr_ele_path, string pr_ele_path, string fr_mu_path, string pr_mu_path);
  HEMtoMETOTF();

  char const* getName() const override { 
      return "HEMtoMETOTF"; 
  }
  TTreeFunction* clone() const override { 
      //return new HEMtoMETOTF(inputfile_path, ele_WP, mu_WP, fr_ele_path, pr_ele_path, fr_mu_path, pr_mu_path); 
      return new HEMtoMETOTF(); 
  }

  double evaluate(unsigned) override;
  void beginEvent(long long) override;
  unsigned getNdata() override { return 2; } // pt, phi
  int getMultiplicity() override { return 1; }

protected:  
  ~HEMtoMETOTF();
  void bindTree_(multidraw::FunctionLibrary&) override;

  UIntValueReader*  nCleanJet{};
  FloatArrayReader* CleanJet_pt{};
  FloatArrayReader* CleanJet_phi{};
  FloatArrayReader* CleanJet_eta{};
  FloatArrayReader* PuppiMET_pt{};
  FloatArrayReader* PuppiMET_phi{};

  bool isDATA;

  std::array<float,2> outputValues; 
};

//HEMtoMETOTF::HEMtoMETOTF(string in_file, string ele_WP, string mu_WP, string in_fr_ele_path, string in_pr_ele_path, string in_fr_mu_path, string in_pr_mu_path) :
HEMtoMETOTF::HEMtoMETOTF() :
                  TTreeFunction() 
{
}


void
HEMtoMETOTF::beginEvent(long long _iEntry)
{
  unsigned nCJ{*nCleanJet->Get()};
  float met_pt  = PuppiMET_pt->At(0);
  float met_phi = PuppiMET_phi->At(0);

  float met_px = met_pt*cos(met_phi);
  float met_py = met_pt*sin(met_phi);
  float met_c_px = met_pt*cos(met_phi);
  float met_c_py = met_pt*sin(met_phi);

  for (unsigned iCJ{0}; iCJ != nCJ; ++iCJ) {
      if (isDATA) continue;

      float jet_phi = CleanJet_phi->At(iCJ);
      float jet_eta = CleanJet_eta->At(iCJ);
      float jet_pt  = CleanJet_pt->At(iCJ);

      if (jet_pt < 15.) continue;

      if (jet_phi > -1.57 && jet_phi < -0.87) {
          if (jet_eta > -2.5 && jet_eta < -1.3) {
              float pt_diff = -0.2*jet_pt;
              met_c_px -= pt_diff*cos(met_phi);
              met_c_py -= pt_diff*sin(met_phi);
          }
          if (jet_eta > -3.0 && jet_eta < -2.5) {
              float pt_diff = -0.35*jet_pt;
              met_c_px -= pt_diff*cos(met_phi);
              met_c_py -= pt_diff*sin(met_phi);
          }
      }
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
HEMtoMETOTF::evaluate(unsigned idx)
{
  //std::cout << "Ouput Values: " << outputValues[0] << ", " << outputValues[1] << "; index " << idx << ", " << outputValues[idx] << std::endl;
  return outputValues[idx];
}

void
HEMtoMETOTF::bindTree_(multidraw::FunctionLibrary& _library)
{   
    TString currentFileName = TString(multidraw::currentTree->GetCurrentFile()->GetName());
    if (currentFileName.Contains("_Run201")) {
        std::cout << "HEMtoMETOTF DATA detected: " << currentFileName << std::endl;
        isDATA = true;
    } else {
        std::cout << "HEMtoMETOTF MC detected: " << currentFileName << std::endl;
        isDATA = false;
    }
    _library.bindBranch(nCleanJet          , "nCleanJet");
    _library.bindBranch(CleanJet_pt        , "CleanJet_pt");
    _library.bindBranch(CleanJet_phi       , "CleanJet_phi");
    _library.bindBranch(CleanJet_eta       , "CleanJet_eta");
    _library.bindBranch(PuppiMET_pt        , "PuppiMET_pt");
    _library.bindBranch(PuppiMET_phi       , "PuppiMET_phi");
}

HEMtoMETOTF::~HEMtoMETOTF(){
  CleanJet_pt        =nullptr;
  CleanJet_phi       =nullptr;
  CleanJet_eta       =nullptr;
  PuppiMET_pt        =nullptr;
  PuppiMET_phi       =nullptr;
}

#endif
