#include "LatinoAnalysis/MultiDraw/interface/TTreeFunction.h"
#include "LatinoAnalysis/MultiDraw/interface/FunctionLibrary.h"

#include "TMath.h"
#include <vector>

class getGenZmass : public multidraw::TTreeFunction {
public:
  getGenZmass();

  char const* getName() const override { return "getGenZmass"; }
  TTreeFunction* clone() const override { return new getGenZmass(); }

  unsigned getNdata() override { return 1; }
  double evaluate(unsigned) override;

protected:
  void bindTree_(multidraw::FunctionLibrary&) override;

  UIntValueReader* nGenPart;
  FloatArrayReader* GenPart_pt;
  FloatArrayReader* GenPart_eta;
  FloatArrayReader* GenPart_phi;
  IntArrayReader* GenPart_pdgId;
  IntArrayReader* GenPart_genPartIdxMother;
  IntArrayReader* GenPart_statusFlags;
  FloatValueReader* gen_mll;

};

getGenZmass::getGenZmass() :
  TTreeFunction()
{
}

double
getGenZmass::evaluate(unsigned)
{
  // Find Gen mass of Z decaying into leptons
  unsigned nGen{*nGenPart->Get()};
  std::vector<int> LepCands{};
  std::vector<int> MotherIdx{};
  std::vector<int> MotherPdgId{};
  int pdgId, sFlag, MIdx;
  for (unsigned iGen{0}; iGen != nGen; ++iGen){
    pdgId = std::abs(GenPart_pdgId->At(iGen));
    sFlag = GenPart_statusFlags->At(iGen);
    //std::cout << pdgId << " ; " << sFlag << " ; " << GenPart_pt->At(iGen) << " ; " << GenPart_genPartIdxMother->At(iGen) << std::endl;
    if (((pdgId == 11) || (pdgId == 13) || (pdgId == 15)) && ((sFlag >> 0 & 1) || (sFlag >> 2 & 1) || (sFlag >> 3 & 1) || (sFlag >> 4 & 1))){
      LepCands.push_back(iGen);
      MIdx = GenPart_genPartIdxMother->At(iGen);
      MotherIdx.push_back(MIdx);
      if (MIdx > -1){
        MotherPdgId.push_back(GenPart_pdgId->At(MIdx));
      }else{
        MotherPdgId.push_back(0);
      }
    }
  }

  for (unsigned iGen{0}; iGen != LepCands.size(); ++iGen){
    for (unsigned jGen{0}; jGen != LepCands.size(); ++jGen){
      if (jGen <= iGen || MotherIdx[iGen] == -1 || MotherIdx[jGen] == -1) continue;
      // Some DY samples generate the Z; others have the two leptons produced directly (virtual photon) -> motherId is 0 for those events
      if (MotherIdx[iGen] == MotherIdx[jGen] && ((MotherPdgId[iGen] == 23) || (MotherIdx[iGen] == 0)) ){
        return TMath::Sqrt(2. * GenPart_pt->At(LepCands[iGen]) * GenPart_pt->At(LepCands[jGen]) * (TMath::CosH(GenPart_eta->At(LepCands[iGen]) - GenPart_eta->At(LepCands[jGen])) - TMath::Cos(GenPart_phi->At(LepCands[iGen]) - GenPart_phi->At(LepCands[jGen]))));
      }
    }
  }
  //std::cout << "Falling back!" << std::endl;
  return *gen_mll->Get(); // Fallback value
}

void
getGenZmass::bindTree_(multidraw::FunctionLibrary& _library)
{
  _library.bindBranch(nGenPart, "nGenPart");
  _library.bindBranch(GenPart_pt, "GenPart_pt");
  _library.bindBranch(GenPart_eta, "GenPart_eta");
  _library.bindBranch(GenPart_phi, "GenPart_phi");
  _library.bindBranch(GenPart_pdgId, "GenPart_pdgId");
  _library.bindBranch(GenPart_genPartIdxMother, "GenPart_genPartIdxMother");
  _library.bindBranch(GenPart_statusFlags, "GenPart_statusFlags");
  _library.bindBranch(gen_mll, "gen_mll");
}
