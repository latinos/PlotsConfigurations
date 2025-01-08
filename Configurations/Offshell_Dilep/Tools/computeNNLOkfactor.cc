#include "LatinoAnalysis/MultiDraw/interface/TTreeFunction.h"
#include "LatinoAnalysis/MultiDraw/interface/FunctionLibrary.h"

#include "TMath.h"
#include <vector>

#include "Math/Vector4Dfwd.h"
#include "Math/GenVector/LorentzVector.h"
#include "Math/GenVector/PtEtaPhiM4D.h"


class computeNNLOkfactor : public multidraw::TTreeFunction {
public:
  computeNNLOkfactor();

  char const* getName() const override { return "computeNNLOkfactor"; }
  TTreeFunction* clone() const override { return new computeNNLOkfactor(); }

  unsigned getNdata() override { return 1; }
  double evaluate(unsigned) override;

protected:
  void bindTree_(multidraw::FunctionLibrary&) override;

  UIntValueReader* nLHEPart;
  FloatArrayReader* LHEPart_pt;
  FloatArrayReader* LHEPart_eta;
  FloatArrayReader* LHEPart_phi;
  FloatArrayReader* LHEPart_mass;
  IntArrayReader* LHEPart_pdgId;
  IntArrayReader* LHEPart_status;
  TSpline3* kf_;

};

computeNNLOkfactor::computeNNLOkfactor() :
  TTreeFunction()
{
  TFile* kfactors = new TFile("/afs/cern.ch/user/f/fernanpe/public/HIG-24-011/Kfactor_Collected_ggHZZ_2l2l_NNLO_NNPDF_NarrowWidth_13TeV.root");
  kf_ = (TSpline3*)kfactors->Get("sp_kfactor_Nominal");
  delete kfactors;
}

double
computeNNLOkfactor::evaluate(unsigned)
{
  unsigned nPart{*nLHEPart->Get()};
  int pdgId, nlep{0}, nnu{0};
  ROOT::Math::PtEtaPhiMVector WW;
  float lep1_pt{0.}, lep1_eta{0.}, lep1_phi{0.}, lep1_mass{0.};
  float lep2_pt{0.}, lep2_eta{0.}, lep2_phi{0.}, lep2_mass{0.};
  float nu1_pt{0.}, nu1_eta{0.}, nu1_phi{0.}, nu1_mass{0.};
  float nu2_pt{0.}, nu2_eta{0.}, nu2_phi{0.}, nu2_mass{0.};
  float mass{0.};
  
  for (unsigned iPart{0}; iPart != nPart; ++iPart){
    if (LHEPart_status->At(iPart) != 1){continue;} //loop over outgoing particles only
    pdgId = std::abs(LHEPart_pdgId->At(iPart));
    if((pdgId == 11) || (pdgId == 13) || (pdgId == 15) || (pdgId == 12) || (pdgId == 14) || (pdgId == 16)){ //built mWW from leptons and neutrinos as done for defining the MWW bins in MG samples
      ROOT::Math::PtEtaPhiMVector temp{LHEPart_pt->At(iPart), LHEPart_eta->At(iPart), LHEPart_phi->At(iPart), LHEPart_mass->At(iPart)};
      WW = WW + temp;
    }else{
      continue;
    }
  }
  mass = WW.M();

  //std::cout << kf_->Eval(mass) << std::endl;
  return kf_->Eval(mass);
					  
}

void
computeNNLOkfactor::bindTree_(multidraw::FunctionLibrary& _library)
{
  _library.bindBranch(nLHEPart, "nLHEPart");
  _library.bindBranch(LHEPart_pt, "LHEPart_pt");
  _library.bindBranch(LHEPart_eta, "LHEPart_eta");
  _library.bindBranch(LHEPart_phi, "LHEPart_phi");
  _library.bindBranch(LHEPart_mass, "LHEPart_mass");
  _library.bindBranch(LHEPart_pdgId, "LHEPart_pdgId");
  _library.bindBranch(LHEPart_status, "LHEPart_status");
}
