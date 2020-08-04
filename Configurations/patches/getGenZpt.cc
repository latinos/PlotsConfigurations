#include "LatinoAnalysis/MultiDraw/interface/TTreeFunction.h"
#include "LatinoAnalysis/MultiDraw/interface/FunctionLibrary.h"

#include "TMath.h"
#include <vector>

class getGenZpt : public multidraw::TTreeFunction {
public:
  getGenZpt();

  char const* getName() const override { return "getGenZpt"; }
  TTreeFunction* clone() const override { return new getGenZpt(); }

  unsigned getNdata() override { return 1; }
  double evaluate(unsigned) override;

protected:
  void bindTree_(multidraw::FunctionLibrary&) override;

  UIntValueReader* nGenPart;
  FloatArrayReader* GenPart_pt;
  IntArrayReader* GenPart_pdgId;
  IntArrayReader* GenPart_genPartIdxMother;
  IntArrayReader* GenPart_statusFlags;
  FloatValueReader* gen_ptll;

};

getGenZpt::getGenZpt() :
  TTreeFunction()
{
}

double
getGenZpt::evaluate(unsigned)
{
  // Find Gen pT of Z decaying into leptons
  unsigned nGen{*nGenPart->Get()};
  std::vector<int> LepCands{};
  std::vector<int> MotherIdx{};
  std::vector<int> MotherPdgId{};
  int pdgId, sFlag, MIdx;
  bool hasZ = false;
  //std::cout << "==========" << std::endl;
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
        if (GenPart_pdgId->At(MIdx)==23) hasZ = true;
      }else{
        MotherPdgId.push_back(0);
      }
    }
  }

  //std::cout << "Check:" << std::endl;
  for (unsigned iGen{0}; iGen != LepCands.size(); ++iGen){
    for (unsigned jGen{0}; jGen != LepCands.size(); ++jGen){
      if (jGen <= iGen) continue;
      //std::cout << iGen << " ; " << MotherIdx[iGen] << " ; " << jGen << " ; " << MotherIdx[jGen] << " ; " << MotherPdgId[iGen] << " ; " << hasZ << std::endl;
      // Some DY samples generate the Z; others have the two leptons produced directly -> motherId is 0 for those events
      if (hasZ){
        if (MotherIdx[iGen] == MotherIdx[jGen] && MotherPdgId[iGen] == 23) return GenPart_pt->At(MotherIdx[iGen]);
      }else{
        if (MotherIdx[iGen] == MotherIdx[jGen] && MotherIdx[iGen] == 0) return GenPart_pt->At(MotherIdx[iGen]);
      }
    }
  }
  //std::cout << "Falling back!" << std::endl;
  return *gen_ptll->Get(); // Fallback value
}

void
getGenZpt::bindTree_(multidraw::FunctionLibrary& _library)
{
  _library.bindBranch(nGenPart, "nGenPart");
  _library.bindBranch(GenPart_pt, "GenPart_pt");
  _library.bindBranch(GenPart_pdgId, "GenPart_pdgId");
  _library.bindBranch(GenPart_genPartIdxMother, "GenPart_genPartIdxMother");
  _library.bindBranch(GenPart_statusFlags, "GenPart_statusFlags");
  _library.bindBranch(gen_ptll, "gen_ptll");
}
