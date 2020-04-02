#include "LatinoAnalysis/MultiDraw/interface/TTreeFunction.h"
#include "LatinoAnalysis/MultiDraw/interface/FunctionLibrary.h"

#include <vector>
#include "TLorentzVector.h"

class HMvarsmjjgen : public multidraw::TTreeFunction {
public:
  HMvarsmjjgen();

  char const* getName() const override { return "HMvarsmjjgen"; }
  TTreeFunction* clone() const override { return new HMvarsmjjgen(); }

  unsigned getNdata() override { return 1; }
  double evaluate(unsigned) override;

protected:
  void bindTree_(multidraw::FunctionLibrary&) override;

  UIntValueReader* nCleanJet;
  UIntValueReader* nJet;
  UIntValueReader* nGenJet;
  IntArrayReader* CleanJet_jetIdx;
  IntArrayReader* Jet_genJetIdx;
  FloatArrayReader* GenJet_pt;
  FloatArrayReader* GenJet_eta;
  FloatArrayReader* GenJet_phi;

  //static FloatArrayReader* mjjGen;
};

//FloatArrayReader* HMvarsmjjgen::mjjGen{};

HMvarsmjjgen::HMvarsmjjgen() :
  TTreeFunction()
{
}

double
HMvarsmjjgen::evaluate(unsigned)
{
  unsigned nCJ{*nCleanJet->Get()};
  unsigned nJ{*nJet->Get()};
  unsigned nGJ{*nGenJet->Get()};
  std::vector<unsigned> usingGenJets{};
  TLorentzVector J1,J2;

  for (unsigned iCJ{0}; iCJ != nCJ; ++iCJ) {
    int jetidx = CleanJet_jetIdx->At(iCJ);
    if ((jetidx==-1) || (jetidx > nJ))
      continue;
    int genjetidx = Jet_genJetIdx->At(jetidx);
    if ((genjetidx==-1) || (genjetidx > nGJ))
      continue;
    usingGenJets.push_back(genjetidx);
    if (usingGenJets.size() == 2)
      break;
  }

  if (usingGenJets.size() == 2) {
    J1.SetPtEtaPhiM(GenJet_pt->At(usingGenJets[0]), GenJet_eta->At(usingGenJets[0]), GenJet_phi->At(usingGenJets[0]),0);
    J2.SetPtEtaPhiM(GenJet_pt->At(usingGenJets[1]), GenJet_eta->At(usingGenJets[1]), GenJet_phi->At(usingGenJets[1]),0);
    return (J1+J2).M();
  }

  return 0.0;
}

void
HMvarsmjjgen::bindTree_(multidraw::FunctionLibrary& _library)
{
  _library.bindBranch(nCleanJet, "nCleanJet");
  _library.bindBranch(nJet, "nJet");
  _library.bindBranch(nGenJet, "nGenJet");
  _library.bindBranch(CleanJet_jetIdx, "CleanJet_jetIdx");
  _library.bindBranch(Jet_genJetIdx, "Jet_genJetIdx");
  _library.bindBranch(GenJet_pt, "GenJet_pt");
  _library.bindBranch(GenJet_eta, "GenJet_eta");
  _library.bindBranch(GenJet_phi, "GenJet_phi");
}
