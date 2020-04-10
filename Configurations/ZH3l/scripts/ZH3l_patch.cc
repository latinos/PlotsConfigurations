#include "LatinoAnalysis/MultiDraw/interface/TTreeFunction.h"
#include "LatinoAnalysis/MultiDraw/interface/FunctionLibrary.h"

#include <string>
#include <cmath>
#include "TSystem.h"
#include "Math/Vector4D.h"
#include "Math/Vector4Dfwd.h"
#include "Math/GenVector/VectorUtil.h"

using PtEtaPhiMVector = ROOT::Math::PtEtaPhiMVector;

class ZH3l_patch : public multidraw::TTreeFunction {
public:
  ZH3l_patch(const char* variable_);

  char const* getName() const override { return "ZH3l_patch"; }
  TTreeFunction* clone() const override { return new ZH3l_patch(variable.c_str()); }
  unsigned getNdata() override { return 1; }
  double evaluate(unsigned) override;

protected:
  void bindTree_(multidraw::FunctionLibrary&) override;
  int getXLepton();
  std::string variable;

  UIntValueReader*  nLepton;
  FloatArrayReader* Lepton_pt;
  FloatArrayReader* Lepton_eta;
  FloatArrayReader* Lepton_phi;
  IntArrayReader*   Lepton_pdgId;
  UIntValueReader*  nCleanJet;
  FloatArrayReader* CleanJet_pt;
  FloatArrayReader* CleanJet_eta;
  FloatArrayReader* CleanJet_phi;
  FloatValueReader* PuppiMET_pt;
  FloatValueReader* PuppiMET_phi;
};

ZH3l_patch::ZH3l_patch(const char* variable_) :
  TTreeFunction(),
  variable{variable_}
{}

double
ZH3l_patch::evaluate(unsigned)
{
  int iL = getXLepton();
  if (iL == -1) return -9999.0;
  PtEtaPhiMVector XLepton(Lepton_pt->At(iL),Lepton_eta->At(iL),Lepton_phi->At(iL),0.0);

  float METpt{*PuppiMET_pt->Get()};
  float METphi{*PuppiMET_phi->Get()};
  PtEtaPhiMVector MET(METpt,0,METphi,0);

  unsigned nJet = 0;
  unsigned nJetLoose{*nCleanJet->Get()};
  for (unsigned ij = 0; ij < nJetLoose; ij++){
    if (CleanJet_pt->At(ij) > 30 && std::abs(CleanJet_eta->At(ij)) < 4.7) nJet++;
  }

  if (variable == "dphilmetjj"){
    if (nJet < 2) return -9999.0;
    PtEtaPhiMVector Jet0(CleanJet_pt->At(0),CleanJet_eta->At(0),CleanJet_phi->At(0),0);
    PtEtaPhiMVector Jet1(CleanJet_pt->At(1),CleanJet_eta->At(1),CleanJet_phi->At(1),0);
    return std::abs(ROOT::Math::VectorUtil::DeltaPhi(XLepton+MET,Jet0+Jet1));
  }

  else if (variable == "dphilmetj"){
    if (nJet < 1) return -9999.0;
    PtEtaPhiMVector Jet0(CleanJet_pt->At(0),CleanJet_eta->At(0),CleanJet_phi->At(0),0);
    return std::abs(ROOT::Math::VectorUtil::DeltaPhi(XLepton+MET,Jet0));
  }

  else if (variable == "mTlmetjj"){
    if (nJet < 2) return -9999.0;
    PtEtaPhiMVector Jet0(CleanJet_pt->At(0),CleanJet_eta->At(0),CleanJet_phi->At(0),0);
    PtEtaPhiMVector Jet1(CleanJet_pt->At(1),CleanJet_eta->At(1),CleanJet_phi->At(1),0);
    PtEtaPhiMVector sumvec = MET      + XLepton      + Jet0      + Jet1;
    float sumpt            = MET.Pt() + XLepton.Pt() + Jet0.Pt() + Jet1.Pt();
    return std::sqrt(std::pow(sumpt,2) - std::pow(sumvec.Px(),2) - std::pow(sumvec.Py(),2));
  }

  else if (variable == "mTlmetj"){
    if (nJet < 1) return -9999.0;
    PtEtaPhiMVector Jet0(CleanJet_pt->At(0),CleanJet_eta->At(0),CleanJet_phi->At(0),0);
    PtEtaPhiMVector sumvec = MET      + XLepton      + Jet0;
    float sumpt            = MET.Pt() + XLepton.Pt() + Jet0.Pt();
    return std::sqrt(std::pow(sumpt,2) - std::pow(sumvec.Px(),2) - std::pow(sumvec.Py(),2));
  }

  else if (variable == "mTlmet"){
    return std::sqrt(2 * XLepton.Pt() * MET.Pt() * (1 - std::cos(std::abs(ROOT::Math::VectorUtil::DeltaPhi(XLepton,MET))))); 
  }

  else {
    std::cout << "Invalid variable! Supported variables are dphilmetjj, dphilmetj, mTlmetjj, mTlmetj, and mTlmet" << std::endl;
    return -9999.0;
  }
}

int
ZH3l_patch::getXLepton(){
  //Require an event with 3 leptons and chlll = 1
  unsigned nLep{*nLepton->Get()};
  if (nLep<3) return -1;
  //Determine X lepton
  int XLepton = -1;
  float minmllDiffToZ = 9999.0;
  for (int iL = 0; iL < 2; iL++){
    for (int jL = iL+1; jL < 3; jL++){
      if (Lepton_pdgId->At(iL) + Lepton_pdgId->At(jL) == 0){
	PtEtaPhiMVector iLep(Lepton_pt->At(iL),Lepton_eta->At(iL),Lepton_phi->At(iL),0.0);
	PtEtaPhiMVector jLep(Lepton_pt->At(jL),Lepton_eta->At(jL),Lepton_phi->At(jL),0.0);
	float mllDiffToZ = std::abs((iLep+jLep).M()-91.1876);
	if (mllDiffToZ < minmllDiffToZ){
	  XLepton = 3-iL-jL;
	  minmllDiffToZ = mllDiffToZ;
	}
      }
    }
  } 
  return XLepton;
}  

void
ZH3l_patch::bindTree_(multidraw::FunctionLibrary& _library)
{
  _library.bindBranch(nLepton,       "nLepton");
  _library.bindBranch(Lepton_pt,     "Lepton_pt");
  _library.bindBranch(Lepton_eta,    "Lepton_eta");
  _library.bindBranch(Lepton_phi,    "Lepton_phi");
  _library.bindBranch(Lepton_pdgId,  "Lepton_pdgId");
  _library.bindBranch(nCleanJet,     "nCleanJet");
  _library.bindBranch(CleanJet_pt,   "CleanJet_pt");
  _library.bindBranch(CleanJet_eta,  "CleanJet_eta");
  _library.bindBranch(CleanJet_phi,  "CleanJet_phi");
  _library.bindBranch(PuppiMET_pt,   "PuppiMET_pt");
  _library.bindBranch(PuppiMET_phi,  "PuppiMET_phi");
}

