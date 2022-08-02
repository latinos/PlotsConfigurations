#include "LatinoAnalysis/MultiDraw/interface/TTreeFunction.h"
#include "LatinoAnalysis/MultiDraw/interface/FunctionLibrary.h"

#include "TMath.h"
#include <vector>

class getGenZpt_new : public multidraw::TTreeFunction {
public:
  getGenZpt_new();

  char const* getName() const override { return "getGenZpt_new"; }
  TTreeFunction* clone() const override { return new getGenZpt_new(); }

  unsigned getNdata() override { return 1; }
  double evaluate(unsigned) override;

protected:
  void bindTree_(multidraw::FunctionLibrary&) override;

  UIntValueReader* nGenPart;
  FloatArrayReader* GenPart_pt;
  FloatArrayReader* GenPart_phi;
  IntArrayReader* GenPart_pdgId;
  IntArrayReader* GenPart_genPartIdxMother;
  IntArrayReader* GenPart_statusFlags;
  FloatValueReader* gen_ptll;

};

getGenZpt_new::getGenZpt_new() :
  TTreeFunction()
{
}

double
getGenZpt_new::evaluate(unsigned)
{
  // Find Gen pT of Z decaying into leptons
  unsigned nGen{*nGenPart->Get()};
  std::vector<int> LepCands{};
  std::vector<int> MotherIdx{};
  std::vector<int> MotherPdgId{};
  std::vector<float> PX{};
  std::vector<float> PY{};
  int pdgId, sFlag, MIdx;
  bool hasZ = false;
  for (unsigned iGen{0}; iGen != nGen; ++iGen){
    pdgId = std::abs(GenPart_pdgId->At(iGen));
    sFlag = GenPart_statusFlags->At(iGen);
    //std::cout << pdgId << " ; " << sFlag << " ; " << GenPart_pt->At(iGen) << " ; " << GenPart_genPartIdxMother->At(iGen) << std::endl;
    if (((pdgId == 11) || (pdgId == 13) || (pdgId == 15)) && ((sFlag >> 0 & 1) || (sFlag >> 2 & 1) || (sFlag >> 3 & 1) || (sFlag >> 4 & 1))){
      LepCands.push_back(iGen);
      PX.push_back(GenPart_pt->At(iGen) * TMath::Cos(GenPart_phi->At(iGen)));
      PY.push_back(GenPart_pt->At(iGen) * TMath::Sin(GenPart_phi->At(iGen)));
      MIdx = GenPart_genPartIdxMother->At(iGen);
      MotherIdx.push_back(MIdx);
      if (MIdx > -1){
        MotherPdgId.push_back(GenPart_pdgId->At(MIdx));
        if (GenPart_pdgId->At(MIdx)==23) hasZ = true;
      }else{
        MotherPdgId.push_back(0);
      }
    }
  }

  for (unsigned iGen{0}; iGen != LepCands.size(); ++iGen){
    for (unsigned jGen{0}; jGen != LepCands.size(); ++jGen){
      if (jGen <= iGen) continue;
      // Some DY samples generate the Z; others have the two leptons produced directly (virtual photon) -> motherId is 0 for those events
      if ((hasZ && (MotherIdx[iGen] == MotherIdx[jGen] && MotherPdgId[iGen] == 23)) || (!hasZ && (MotherIdx[iGen] == MotherIdx[jGen] && MotherIdx[iGen] == 0))){
        return TMath::Sqrt((PX[iGen]+PX[jGen])*(PX[iGen]+PX[jGen])+(PY[iGen]+PY[jGen])*(PY[iGen]+PY[jGen]));
      }
    }
  }
  //std::cout << "Falling back!" << std::endl;
  return *gen_ptll->Get(); // Fallback value
}

void
getGenZpt_new::bindTree_(multidraw::FunctionLibrary& _library)
{
  _library.bindBranch(nGenPart, "nGenPart");
  _library.bindBranch(GenPart_pt, "GenPart_pt");
  _library.bindBranch(GenPart_phi, "GenPart_phi");
  _library.bindBranch(GenPart_pdgId, "GenPart_pdgId");
  _library.bindBranch(GenPart_genPartIdxMother, "GenPart_genPartIdxMother");
  _library.bindBranch(GenPart_statusFlags, "GenPart_statusFlags");
  _library.bindBranch(gen_ptll, "gen_ptll");
}
