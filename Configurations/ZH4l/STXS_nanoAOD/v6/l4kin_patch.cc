#include "LatinoAnalysis/MultiDraw/interface/TTreeFunction.h"
#include "LatinoAnalysis/MultiDraw/interface/FunctionLibrary.h"

#include <string>
#include <cmath>
#include <memory>
#include <sys/stat.h>

#include "TSystem.h"
#include "Math/Vector4D.h"
#include "Math/Vector4Dfwd.h"
#include "Math/GenVector/VectorUtil.h"
#include "TMVA/Reader.h"

using PtEtaPhiMVector = ROOT::Math::PtEtaPhiMVector;

class l4kin_patch : public multidraw::TTreeFunction {
public:
  l4kin_patch(const char* variable_);

  char const* getName() const override { return "l4kin_patch"; }
  TTreeFunction* clone() const override { return new l4kin_patch(variable.c_str()); }
  unsigned getNdata() override { return 1; }
  double evaluate(unsigned) override;

  // More complex patchers
  friend class AbsTMVAResultReader;
  void initMvaReader();
  std::unique_ptr<TMVA::Reader> mvaReader{new TMVA::Reader()};

protected:
  void bindTree_(multidraw::FunctionLibrary&) override;
  bool preSelection();
  std::string variable;

  float loc_z0DeltaR_zh4l; 
  float loc_z1DeltaR_zh4l; 
  float loc_lep1Mt_zh4l; 
  float loc_lep2Mt_zh4l; 
  float loc_z1Mass_zh4l; 
  float loc_z1Mt_zh4l; 
  float loc_z1DeltaPhi_zh4l; 
  float loc_PuppiMET_pt;

  UIntValueReader*  nLepton;
  FloatArrayReader* Lepton_pt;
  FloatArrayReader* Lepton_eta;
  FloatArrayReader* Lepton_phi;
  IntArrayReader*   Lepton_pdgId;
  FloatValueReader* z0DeltaR_zh4l;
  FloatValueReader* z1DeltaR_zh4l;
  FloatValueReader* z1DeltaPhi_zh4l;
  FloatValueReader* PuppiMET_pt;
  FloatValueReader* PuppiMET_phi;
};

l4kin_patch::l4kin_patch(const char* variable_) :
  TTreeFunction(),
  variable{variable_}
{
  initMvaReader();
}

double
l4kin_patch::evaluate(unsigned)
{
  if (preSelection() == false) return -9999.0;
  float METpt{*PuppiMET_pt->Get()};
  float METphi{*PuppiMET_phi->Get()};
  if (!(METpt > 0 && std::abs(METphi) < 3.14159265359)) return -9999.0;
  std::vector<PtEtaPhiMVector> vLep;
  for (int iL = 0; iL < 4; iL++){
    PtEtaPhiMVector iLep(Lepton_pt->At(iL),Lepton_eta->At(iL),Lepton_phi->At(iL),0.0);
    vLep.push_back(iLep);
  }

  if (variable == "mllll_zh4l") return (vLep[0]+vLep[1]+vLep[2]+vLep[3]).M();

  //Get Z lepton pair
  int ZLepIdx[2] = {-1,-1};
  int XLepIdx[2] = {-1,-1};
  float minmllDiffToZ = 9999.0;
  for (int iL = 0; iL < 3; iL++){
    for (int jL = iL+1; jL < 4; jL++){
      if (Lepton_pdgId->At(iL) + Lepton_pdgId->At(jL) == 0){
	float mllDiffToZ = std::abs((vLep[iL]+vLep[jL]).M()-91.1876);
	if (mllDiffToZ < minmllDiffToZ){
	  ZLepIdx[0] = iL;
	  ZLepIdx[1] = jL;
	  minmllDiffToZ = mllDiffToZ;
	}
      }
    }
  }

  if (variable == "z0Mass_zh4l") {
    if (ZLepIdx[0] != -1 && ZLepIdx[1] != -1) return (vLep[ZLepIdx[0]] + vLep[ZLepIdx[1]]).M();
    else return -9999;
  }

  if (variable == "z0Pt_zh4l") {
    if (ZLepIdx[0] != -1 && ZLepIdx[1] != -1) return (vLep[ZLepIdx[0]] + vLep[ZLepIdx[1]]).Pt();
    else return -9999;
  }

  if (ZLepIdx[0] != -1 && ZLepIdx[1] != -1){
    for (int iL = 0; iL < 4; iL++){    
      if (iL == ZLepIdx[0] || iL == ZLepIdx[1]) continue;
      if (XLepIdx[0] == -1) XLepIdx[0] = iL;
      else XLepIdx[1] = iL;
    } 
  }

  float z1Mass_zh4l = -9999;
  if (XLepIdx[0] != -1 && XLepIdx[1] != -1) {
    z1Mass_zh4l = (vLep[XLepIdx[0]] + vLep[XLepIdx[1]]).M();
  }

  if (variable == "z1Mass_zh4l") return z1Mass_zh4l;

  float lep1Mt_zh4l = sqrt(2*vLep[0].Pt()*METpt*(1-cos(vLep[0].Phi()-METphi)));

  if (variable == "lep1Mt_zh4l") return lep1Mt_zh4l;

  float lep2Mt_zh4l = sqrt(2*vLep[1].Pt()*METpt*(1-cos(vLep[1].Phi()-METphi)));

  if (variable == "lep2Mt_zh4l") return lep2Mt_zh4l;

  float z1Mt_zh4l = -9999;
  if (XLepIdx[0] != -1 && XLepIdx[1] != -1) {
    z1Mt_zh4l = sqrt(2*(vLep[XLepIdx[0]]+vLep[XLepIdx[1]]).Pt()*METpt*(1-cos((vLep[XLepIdx[0]]+vLep[XLepIdx[1]]).Phi()-METphi)));
  }

  if (variable == "z1Mt_zh4l") return z1Mt_zh4l;

  if (variable == "BDT"){
    loc_z0DeltaR_zh4l   = *z0DeltaR_zh4l->Get();
    loc_z1DeltaR_zh4l   = *z1DeltaR_zh4l->Get();
    loc_lep1Mt_zh4l     = lep1Mt_zh4l;
    loc_lep2Mt_zh4l     = lep2Mt_zh4l;
    loc_z1Mass_zh4l     = z1Mass_zh4l;
    loc_z1Mt_zh4l       = z1Mt_zh4l;
    loc_z1DeltaPhi_zh4l = *z1DeltaPhi_zh4l->Get();
    loc_PuppiMET_pt     = METpt;
    return mvaReader->EvaluateMVA("BDT");
  }

  //If we've gotten this far, it wasn't a valid variable
  std::cout << "Invalid variable! Supported variables are z0Mass_zh4l, z1Mass_zh4l, z0Pt_zh4l, z1Mt_zh4l, lep1Mt_zh4l, lep2Mt_zh4l, mllll_zh4l, and BDT" << std::endl;
  return -9999.0;
}

bool
l4kin_patch::preSelection(){
  //Require an event with 4 leptons and chllll = 0
  unsigned nLep{*nLepton->Get()};
  if (nLep<4) return false;
  if (nLep>4 && Lepton_pt->At(4) > 10) return false; 
  if (Lepton_pdgId->At(0)/std::abs(Lepton_pdgId->At(0)) + Lepton_pdgId->At(1)/std::abs(Lepton_pdgId->At(1)) + Lepton_pdgId->At(2)/std::abs(Lepton_pdgId->At(2)) + Lepton_pdgId->At(3)/std::abs(Lepton_pdgId->At(3)) == 0 && Lepton_pt->At(0) > 25 && Lepton_pt->At(1) > 15 && Lepton_pt->At(2) > 10 && Lepton_pt->At(3) > 10) return true;
}

void
l4kin_patch::bindTree_(multidraw::FunctionLibrary& _library)
{
  _library.bindBranch(nLepton,         "nLepton");
  _library.bindBranch(Lepton_pt,       "Lepton_pt");
  _library.bindBranch(Lepton_eta,      "Lepton_eta");
  _library.bindBranch(Lepton_phi,      "Lepton_phi");
  _library.bindBranch(Lepton_pdgId,    "Lepton_pdgId");
  _library.bindBranch(z0DeltaR_zh4l,   "z0DeltaR_zh4l");
  _library.bindBranch(z1DeltaR_zh4l,   "z1DeltaR_zh4l");
  _library.bindBranch(z1DeltaPhi_zh4l, "z1DeltaPhi_zh4l");
  _library.bindBranch(PuppiMET_pt,     "PuppiMET_pt");
  _library.bindBranch(PuppiMET_phi,    "PuppiMET_phi");
}

void 
l4kin_patch::initMvaReader(){
  mvaReader->AddVariable("z0DeltaR_zh4l",   &loc_z0DeltaR_zh4l);
  mvaReader->AddVariable("z1DeltaR_zh4l",   &loc_z1DeltaR_zh4l);
  mvaReader->AddVariable("lep1Mt_zh4l",     &loc_lep1Mt_zh4l);
  mvaReader->AddVariable("lep2Mt_zh4l",     &loc_lep2Mt_zh4l);
  mvaReader->AddVariable("z1Mass_zh4l",     &loc_z1Mass_zh4l);
  mvaReader->AddVariable("z1Mt_zh4l",       &loc_z1Mt_zh4l);
  mvaReader->AddVariable("z1DeltaPhi_zh4l", &loc_z1DeltaPhi_zh4l);
  mvaReader->AddVariable("PuppiMET_pt",     &loc_PuppiMET_pt); 
  
  mvaReader->BookMVA("BDT","/afs/cern.ch/user/k/kaura/public/v6_xml/TMVAClassification_comb28mar_v6_BDT.weights.xml"); 
}


