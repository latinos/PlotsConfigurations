#include "LatinoAnalysis/MultiDraw/interface/TTreeFunction.h"
#include "LatinoAnalysis/MultiDraw/interface/FunctionLibrary.h"

// #include <vector>

#include "TGraph.h"
#include "Math/Vector4Dfwd.h"
#include "Math/GenVector/LorentzVector.h"
#include "Math/GenVector/PtEtaPhiM4D.h"

//#include <iostream>

class EWKnloW_otf : public multidraw::TTreeFunction {
public:
  EWKnloW_otf(const char * file);
  ~EWKnloW_otf();

  char const* getName() const override { return "EWKnloW_otf"; }
  TTreeFunction* clone() const override { return new EWKnloW_otf(file_.c_str()); };

  unsigned getNdata() override { return 1; }
  double evaluate(unsigned) override;

protected:
  void bindTree_(multidraw::FunctionLibrary&) override;
  string file_;
  
  UIntValueReader* nLHEPart{};
  FloatArrayReader* LHEPart_pt{};
  FloatArrayReader* LHEPart_eta{};
  FloatArrayReader* LHEPart_phi{};
  IntArrayReader* LHEPart_pdgId{};

  TGraph* Wpt_map;
};

EWKnloW_otf::EWKnloW_otf(const char * file) :
  TTreeFunction(),
  file_(file)
{
  std::cout << "EWKnloW_otf constructor" << std::endl;
  Wpt_map = new TGraph(file_.c_str());
}

EWKnloW_otf::~EWKnloW_otf(){
  nLHEPart = nullptr;
  LHEPart_pt = nullptr;
  LHEPart_eta = nullptr;
  LHEPart_phi = nullptr;
  LHEPart_pdgId = nullptr;
  delete Wpt_map;
}

double
EWKnloW_otf::evaluate(unsigned)
{
  // Recontruct W boson from its leptonic decay
  const unsigned int n{*nLHEPart->Get()};

  float lep_pt{-1.0}, lep_eta, lep_phi;
  float nu_pt{-1.0}, nu_eta, nu_phi;

  for (unsigned int ix{0}; ix < n; ix++) {
    const int pdgId = LHEPart_pdgId->At(ix);

    if (lep_pt == -1.0 && (abs(pdgId)==11 || abs(pdgId)==13 || abs(pdgId)==15)) {
      lep_pt  = LHEPart_pt->At(ix);
      lep_eta = LHEPart_eta->At(ix);
      lep_phi = LHEPart_phi->At(ix);
    }
    else if (nu_pt == -1.0 && (abs(pdgId)==12 || abs(pdgId)==14 || abs(pdgId)==16)) {
      nu_pt  = LHEPart_pt->At(ix);
      nu_eta = LHEPart_eta->At(ix);
      nu_phi = LHEPart_phi->At(ix);
    }
  }
  // If for any reason it was not possible to assign the leptons,
  // set the pT to -2 --> it can be followed up later
  if (lep_pt == -1.0 || nu_pt == -1.0) {
    cout << "ERROR: missing neutrino"<<endl;
    return -2;
  }

  ROOT::Math::PtEtaPhiMVector lep_4v{
    lep_pt, lep_eta, lep_phi, 0 // at these energies everything is massless...
  };
  ROOT::Math::PtEtaPhiMVector nu_4v{
    nu_pt, nu_eta, nu_phi, 0
  };

  double Wlep_pt{(lep_4v + nu_4v).Pt()};

  if (Wlep_pt < 35.0) Wlep_pt = 35.0;
  else if (Wlep_pt > 2000.0) Wlep_pt = 2000.0;

  //return Wlep_pt;
  double weight{Wpt_map->Eval(Wlep_pt)};

  return weight;
}

void
EWKnloW_otf::bindTree_(multidraw::FunctionLibrary& _library)
{
  _library.bindBranch(nLHEPart, "nLHEPart");
  _library.bindBranch(LHEPart_pt, "LHEPart_pt");
  _library.bindBranch(LHEPart_eta, "LHEPart_eta");
  _library.bindBranch(LHEPart_phi, "LHEPart_phi");
  _library.bindBranch(LHEPart_pdgId, "LHEPart_pdgId");
}
