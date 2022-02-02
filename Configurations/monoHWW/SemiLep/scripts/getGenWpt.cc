#include "LatinoAnalysis/MultiDraw/interface/TTreeFunction.h"
#include "LatinoAnalysis/MultiDraw/interface/FunctionLibrary.h"

#include "TMath.h"
#include <vector>
#include "Math/Vector4Dfwd.h"
#include "Math/GenVector/LorentzVector.h"
#include "Math/GenVector/PtEtaPhiM4D.h"

#ifndef getGenWpt_HH
#define getGenWpt_HH

class getGenWpt : public multidraw::TTreeFunction {
public:
  getGenWpt();

  char const* getName() const override { return "getGenWpt"; }
  TTreeFunction* clone() const override { return new getGenWpt(); }

  unsigned getNdata() override { return 1; }
  double evaluate(unsigned) override;

protected:
  void bindTree_(multidraw::FunctionLibrary&) override;

  UIntValueReader* nGenPart;
  FloatArrayReader* GenPart_pt;
  FloatArrayReader* GenPart_eta;
  FloatArrayReader* GenPart_phi;
  IntArrayReader* GenPart_pdgId;
  //IntArrayReader* GenPart_genPartIdxMother;
  IntArrayReader* GenPart_statusFlags;

};

getGenWpt::getGenWpt() :
  TTreeFunction()
{
}

double
getGenWpt::evaluate(unsigned)
{
    // Find Gen W and gen Lep, Neut
    unsigned nGen{*nGenPart->Get()};
    float lep_pt{0.}, lep_eta, lep_phi;
    float nu_pt{0.}, nu_eta, nu_phi;
    float W_pt{0.};
    bool hasW = false;

    for (unsigned iGen{0}; iGen != nGen; ++iGen){
        int pdgId = std::abs(GenPart_pdgId->At(iGen));
        int sFlag = GenPart_statusFlags->At(iGen);
        
        // Look for lepton, sFlag == 8449 => isLastCopy & fromHardProcess & isPrompt and nothing else
        if (((pdgId == 11) || (pdgId == 13) || (pdgId == 15)) && (sFlag == 8449)){
            lep_pt  = GenPart_pt->At(iGen);
            lep_eta = GenPart_eta->At(iGen);
            lep_phi = GenPart_phi->At(iGen);
            cout << "-- Found lepton: pdgId=" << pdgId << ", statusFlags= " << sFlag << endl;
        }
        // Look for neutrino, sFlag == 8449 => isLastCopy & fromHardProcess & isPrompt and nothing else
        if (((pdgId == 12) || (pdgId == 14) || (pdgId == 16)) && (sFlag == 8449)){
            nu_pt  = GenPart_pt->At(iGen);
            nu_eta = GenPart_eta->At(iGen);
            nu_phi = GenPart_phi->At(iGen);
            cout << "-- Found neutrino: pdgId=" << pdgId << ", statusFlags= " << sFlag << endl;
        }
        // Look for W directly 1<<13 => isLastCopy
        if ((pdgId == 24) && (sFlag & 1<<13)){
            W_pt = GenPart_pt->At(iGen);
            hasW = true;
            //cout << "-- Found W: pdgId=" << pdgId << ", statusFlags= " << sFlag << endl;
        }
        if (hasW){
            break;
        }
    }

    // If there was a W, we are done
    if (hasW){
        //cout << "-- W pt : " << W_pt << endl;
        return W_pt;
    }
    
    // Else reconstruct from lepton + neutrino
    ROOT::Math::PtEtaPhiMVector lep_4v{
      lep_pt, lep_eta, lep_phi, 0 // at these energies everything is massless...
    };
    ROOT::Math::PtEtaPhiMVector nu_4v{
      nu_pt, nu_eta, nu_phi, 0
    };

    W_pt = (lep_4v + nu_4v).Pt();
    cout << "-- W pt : " << W_pt << endl;
    return W_pt;
}

void
getGenWpt::bindTree_(multidraw::FunctionLibrary& _library)
{
  _library.bindBranch(nGenPart, "nGenPart");
  _library.bindBranch(GenPart_pt, "GenPart_pt");
  _library.bindBranch(GenPart_eta, "GenPart_eta");
  _library.bindBranch(GenPart_phi, "GenPart_phi");
  _library.bindBranch(GenPart_pdgId, "GenPart_pdgId");
  //_library.bindBranch(GenPart_genPartIdxMother, "GenPart_genPartIdxMother");
  _library.bindBranch(GenPart_statusFlags, "GenPart_statusFlags");
}
#endif
