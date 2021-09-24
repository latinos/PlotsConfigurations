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

#ifndef METuncOTF_HH
#define METuncOTF_HH

class METuncOTF : public multidraw::TTreeFunction {
public:
  //METuncOTF(string file, string ele_WP, string mu_WP, string fr_ele_path, string pr_ele_path, string fr_mu_path, string pr_mu_path);
  METuncOTF();

  char const* getName() const override { 
      return "METuncOTF"; 
  }
  TTreeFunction* clone() const override { 
      //return new METuncOTF(inputfile_path, ele_WP, mu_WP, fr_ele_path, pr_ele_path, fr_mu_path, pr_mu_path); 
      return new METuncOTF(); 
  }

  double evaluate(unsigned) override;
  void beginEvent(long long) override;
  unsigned getNdata() override { return 2; } // pt, phi
  int getMultiplicity() override { return 1; }

protected:  
  ~METuncOTF();
  void bindTree_(multidraw::FunctionLibrary&) override;

  FloatArrayReader* MET_MetUnclustEnUpDeltaX{};
  FloatArrayReader* MET_MetUnclustEnUpDeltaY{};
  FloatArrayReader* PuppiMET_pt{};
  FloatArrayReader* PuppiMET_phi{};

  std::array<float,2> outputValues; 
};

//METuncOTF::METuncOTF(string in_file, string ele_WP, string mu_WP, string in_fr_ele_path, string in_pr_ele_path, string in_fr_mu_path, string in_pr_mu_path) :
METuncOTF::METuncOTF() :
                  TTreeFunction() 
{
}

void
METuncOTF::beginEvent(long long _iEntry)
{

  float met_pt  = PuppiMET_pt->At(0);
  float met_phi = PuppiMET_phi->At(0);
  float met_px = met_pt*cos(met_phi);
  float met_py = met_pt*sin(met_phi);

  float met_c_px = met_pt*cos(met_phi) + MET_MetUnclustEnUpDeltaX->At(0);
  float met_c_py = met_pt*sin(met_phi) + MET_MetUnclustEnUpDeltaY->At(0);

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
METuncOTF::evaluate(unsigned idx)
{
  //std::cout << "Ouput Values: " << outputValues[0] << ", " << outputValues[1] << "; index " << idx << ", " << outputValues[idx] << std::endl;
  return outputValues[idx];
}

void
METuncOTF::bindTree_(multidraw::FunctionLibrary& _library)
{   
    _library.bindBranch(MET_MetUnclustEnUpDeltaX, "MET_MetUnclustEnUpDeltaX");
    _library.bindBranch(MET_MetUnclustEnUpDeltaY, "MET_MetUnclustEnUpDeltaY");
    _library.bindBranch(PuppiMET_pt             , "PuppiMET_pt");
    _library.bindBranch(PuppiMET_phi            , "PuppiMET_phi");
}

METuncOTF::~METuncOTF(){
  MET_MetUnclustEnUpDeltaX  =nullptr;
  MET_MetUnclustEnUpDeltaY  =nullptr;
  PuppiMET_pt               =nullptr;
  PuppiMET_phi              =nullptr;
}

#endif
