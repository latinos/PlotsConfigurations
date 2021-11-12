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

#ifndef GenWjetPt_HH
#define GenWjetPt_HH

namespace multidraw {
  extern thread_local TTree* currentTree;
}

class GenWjetPt : public multidraw::TTreeFunction {
public:
  //GenWjetPt(string file, string ele_WP, string mu_WP, string fr_ele_path, string pr_ele_path, string fr_mu_path, string pr_mu_path);
  GenWjetPt();

  char const* getName() const override { 
      return "GenWjetPt"; 
  }
  TTreeFunction* clone() const override { 
      //return new GenWjetPt(inputfile_path, ele_WP, mu_WP, fr_ele_path, pr_ele_path, fr_mu_path, pr_mu_path); 
      return new GenWjetPt(); 
  }

  double evaluate(unsigned) override;
  void beginEvent(long long) override;
  unsigned getNdata() override { return 2; } // pt, phi
  int getMultiplicity() override { return 1; }

protected:  
  ~GenWjetPt();
  void bindTree_(multidraw::FunctionLibrary&) override;


  UIntValueReader*  nGenPart;
  FloatArrayReader* GenPart_pt{};
  IntArrayReader*   GenPart_pdgId{};
  IntArrayReader*   GenPart_genPartIdxMother{};

  //bool isDATA;

  std::array<float,2> outputValues; 
};

//GenWjetPt::GenWjetPt(string in_file, string ele_WP, string mu_WP, string in_fr_ele_path, string in_pr_ele_path, string in_fr_mu_path, string in_pr_mu_path) :
GenWjetPt::GenWjetPt() :
                  TTreeFunction() 
{
}


void
GenWjetPt::beginEvent(long long _iEntry)
{
  //TString currentFileName = TString(multidraw::currentTree->GetCurrentFile()->GetName());
  //std::cout << "Current file name is: " << currentFileName << std::endl;

  unsigned nGen{*nGenPart->Get()};
  unsigned fill_idx{0};
  std::array<float,2> output { -1., -1.};

  for (unsigned iGen{0}; iGen != nGen; ++iGen){

      float gp_pt = GenPart_pt->At(iGen);
      int gp_fl = GenPart_pdgId->At(iGen);
      int gp_im = GenPart_genPartIdxMother->At(iGen);

      if (gp_im < 0) continue;
      int gm_fl = GenPart_pdgId->At(gp_im);

      if (std::abs(gm_fl)==24 && std::abs(gp_fl) < 6) {
          output[fill_idx] = gp_pt;
          fill_idx++; 
      }

      if (fill_idx > 1) break;
  }

  //std::cout << "Phi check: " << met_phi << "," << atan2(met_pt*sin(met_phi), met_pt*cos(met_phi)) << ", Corrected phi: " << met_c_phi << std::endl;
  //std::cout << "Phi check: " << met_px << "," << met_py << "," << atan2(met_py, met_px) << "," << met_phi << ", Corrected phi: " << met_c_px << "," << met_c_py << "," << atan2(met_c_py, met_c_px) << std::endl;

  //std::cout << "Original pt : " << met_pt << ", Corrected pt : " << met_c_pt << std::endl;
  //std::cout << "Original phi: " << met_phi << ", Corrected phi: " << met_c_phi << std::endl;

  outputValues = output;
}

double
GenWjetPt::evaluate(unsigned idx)
{
  //std::cout << "Ouput Values: " << outputValues[0] << ", " << outputValues[1] << "; index " << idx << ", " << outputValues[idx] << std::endl;
  float pt;
  if (idx == 0) {
      if (outputValues[0] > outputValues[1]) { 
          pt = outputValues[0];
      } else {
          pt = outputValues[1];
      }
  } else {
      if (outputValues[0] > outputValues[1]) {
          pt = outputValues[1];
      } else {
          pt = outputValues[0];
      }
  }

  return pt;
}

void
GenWjetPt::bindTree_(multidraw::FunctionLibrary& _library)
{   
    //TString currentFileName = TString(multidraw::currentTree->GetCurrentFile()->GetName());
    //if (currentFileName.Contains("_Run201")) {
    //    std::cout << "GenWjetPt DATA detected: " << currentFileName << std::endl;
    //    isDATA = true;
    //} else {
    //    std::cout << "GenWjetPt MC detected: " << currentFileName << std::endl;
    //    isDATA = false;
    //}
    _library.bindBranch(nGenPart                , "nGenPart");
    _library.bindBranch(GenPart_pt              , "GenPart_pt");
    _library.bindBranch(GenPart_pdgId           , "GenPart_pdgId");
    _library.bindBranch(GenPart_genPartIdxMother, "GenPart_genPartIdxMother");
}

GenWjetPt::~GenWjetPt(){
  GenPart_pt              =nullptr;
  GenPart_pdgId           =nullptr;
  GenPart_genPartIdxMother=nullptr;
}

#endif
