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

#ifndef HEMtoJETOTF_HH
#define HEMtoJETOTF_HH

namespace multidraw {
  extern thread_local TTree* currentTree;
}

class HEMtoJETOTF : public multidraw::TTreeFunction {
public:
  //HEMtoJETOTF(string file, string ele_WP, string mu_WP, string fr_ele_path, string pr_ele_path, string fr_mu_path, string pr_mu_path);
  HEMtoJETOTF();

  char const* getName() const override { 
      return "HEMtoJETOTF"; 
  }
  TTreeFunction* clone() const override { 
      //return new HEMtoJETOTF(inputfile_path, ele_WP, mu_WP, fr_ele_path, pr_ele_path, fr_mu_path, pr_mu_path); 
      return new HEMtoJETOTF(); 
  }

  double evaluate(unsigned) override;
  void beginEvent(long long) override;
  unsigned getNdata() override { return 2; } // pt, phi
  int getMultiplicity() override { return 1; }

protected:  
  ~HEMtoJETOTF();
  void bindTree_(multidraw::FunctionLibrary&) override;

  IntValueReader*  HM_idx_j1{};
  IntValueReader*  HM_idx_j2{};
  FloatArrayReader* CleanJet_pt{};
  FloatArrayReader* CleanJet_phi{};
  FloatArrayReader* CleanJet_eta{};

  bool isDATA;

  std::array<float,2> outputValues; 
};

//HEMtoJETOTF::HEMtoJETOTF(string in_file, string ele_WP, string mu_WP, string in_fr_ele_path, string in_pr_ele_path, string in_fr_mu_path, string in_pr_mu_path) :
HEMtoJETOTF::HEMtoJETOTF() :
                  TTreeFunction() 
{
}


void
HEMtoJETOTF::beginEvent(long long _iEntry)
{
  //TString currentFileName = TString(multidraw::currentTree->GetCurrentFile()->GetName());
  //std::cout << "Current file name is: " << currentFileName << std::endl;

  bool valid_idx = true;
  if (*HM_idx_j1->Get() < 0) valid_idx = false;
  if (*HM_idx_j2->Get() < 0) valid_idx = false;
  unsigned CJ_idx[2] = {(unsigned int)*HM_idx_j1->Get(), (unsigned int)*HM_idx_j2->Get()};
  std::array<float,2> output { -1., -1.};

  if (valid_idx) {

      for (unsigned idx{0}; idx != 2; ++idx) {
          unsigned jet_idx = CJ_idx[idx];
          float jet_phi = CleanJet_phi->At(jet_idx);
          float jet_eta = CleanJet_eta->At(jet_idx);
          float jet_pt  = CleanJet_pt ->At(jet_idx);
          float jet_c_pt  = CleanJet_pt ->At(jet_idx);

          if (jet_phi > -1.57 && jet_phi < -0.87 && !isDATA) {
              if (jet_eta > -2.5 && jet_eta < -1.3) {
                  //std::cout << "pt changed" << std::endl;
                  jet_c_pt *= 0.8;
              }
              if (jet_eta > -3.0 && jet_eta < -2.5) {
                  //std::cout << "pt changed" << std::endl;
                  jet_c_pt *= 0.65;
              }
          }
          output[idx] = jet_c_pt;
      }
  }

  //std::cout << "Phi check: " << met_phi << "," << atan2(met_pt*sin(met_phi), met_pt*cos(met_phi)) << ", Corrected phi: " << met_c_phi << std::endl;
  //std::cout << "Phi check: " << met_px << "," << met_py << "," << atan2(met_py, met_px) << "," << met_phi << ", Corrected phi: " << met_c_px << "," << met_c_py << "," << atan2(met_c_py, met_c_px) << std::endl;

  //std::cout << "Original pt : " << met_pt << ", Corrected pt : " << met_c_pt << std::endl;
  //std::cout << "Original phi: " << met_phi << ", Corrected phi: " << met_c_phi << std::endl;


  outputValues = output;
}

double
HEMtoJETOTF::evaluate(unsigned idx)
{
  //std::cout << "Ouput Values: " << outputValues[0] << ", " << outputValues[1] << "; index " << idx << ", " << outputValues[idx] << std::endl;
  return outputValues[idx];
}

void
HEMtoJETOTF::bindTree_(multidraw::FunctionLibrary& _library)
{   
    TString currentFileName = TString(multidraw::currentTree->GetCurrentFile()->GetName());
    if (currentFileName.Contains("_Run201")) {
        std::cout << "HEMtoJETOTF DATA detected: " << currentFileName << std::endl;
        isDATA = true;
    } else {
        std::cout << "HEMtoJETOTF MC detected: " << currentFileName << std::endl;
        isDATA = false;
    }
    _library.bindBranch(HM_idx_j1          , "HM_idx_j1");
    _library.bindBranch(HM_idx_j2          , "HM_idx_j2");
    _library.bindBranch(CleanJet_pt        , "CleanJet_pt");
    _library.bindBranch(CleanJet_phi       , "CleanJet_phi");
    _library.bindBranch(CleanJet_eta       , "CleanJet_eta");
}

HEMtoJETOTF::~HEMtoJETOTF(){
  CleanJet_pt        =nullptr;
  CleanJet_phi       =nullptr;
  CleanJet_eta       =nullptr;
}

#endif
