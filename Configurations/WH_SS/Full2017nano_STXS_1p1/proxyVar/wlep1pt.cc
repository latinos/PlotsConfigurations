/*
  Temporary on-the-fly wlep1pt var for nanoLatino trees nAODv5_2016/2017/2018v5 or earlier.
*/

#include "LatinoAnalysis/MultiDraw/interface/TTreeFunction.h"
#include "LatinoAnalysis/MultiDraw/interface/FunctionLibrary.h"

#include "TSystem.h"

#include <iostream>
#include <vector>

#include "TLorentzVector.h"
#include "TMath.h"

class WHlepv1 : public multidraw::TTreeFunction {
public:
  WHlepv1();

  char const* getName() const override { return "WHlepv1"; }
  TTreeFunction* clone() const override { return new WHlepv1(); }
  //TTreeFunction* clone() const override;

  void beginEvent(long long) override;
  int getMultiplicity() override { return 1; }
  unsigned getNdata() override;
  double evaluate(unsigned) override;

protected:
  void bindTree_(multidraw::FunctionLibrary&) override;

  static void setValues(long long);
  
  static long long currentEntry;
  static UIntValueReader* nCleanJet;
  static FloatArrayReader* CleanJet_pt;
  static FloatArrayReader* CleanJet_eta;
  static FloatArrayReader* CleanJet_phi;
  static UIntValueReader* nLepton;
  static FloatArrayReader* Lepton_pt;
  static FloatArrayReader* Lepton_eta;
  static FloatArrayReader* Lepton_phi;

  static std::vector<float> wlep1pt;

};

/*static*/
long long WHlepv1::currentEntry{-2};
UIntValueReader* WHlepv1::nCleanJet{};
FloatArrayReader* WHlepv1::CleanJet_pt{};
FloatArrayReader* WHlepv1::CleanJet_eta{};
FloatArrayReader* WHlepv1::CleanJet_phi{};
UIntValueReader* WHlepv1::nLepton{};
FloatArrayReader* WHlepv1::Lepton_pt{};
FloatArrayReader* WHlepv1::Lepton_eta{};
FloatArrayReader* WHlepv1::Lepton_phi{};
std::vector<float> WHlepv1::wlep1pt{};

WHlepv1::WHlepv1() :
  TTreeFunction()
{}

void
WHlepv1::beginEvent(long long _iEntry)
{
  setValues(_iEntry);
}

unsigned
WHlepv1::getNdata()
{
  return wlep1pt.size();
}

double
WHlepv1::evaluate(unsigned ij)
{
  return wlep1pt[ij];
}

// --- Helper
float
deltaPhi(float phi1, float phi2)
{
  float PHI = std::abs(phi1-phi2);
if (PHI<=3.14159265)
  return PHI;
else
  return 2*3.14159265-PHI;
}

float
deltaR(float phi1, float eta1, float phi2, float eta2) {
  //return sqrt((eta2-eta1)**2+deltaPhi(phi1,phi2)**2);
  return sqrt( pow((eta2-eta1),2) + pow(deltaPhi(phi1,phi2),2) );
}

float
deltaEta(float eta1, float eta2) {
  return std::abs(eta1 - eta2);
}
// Helper ---

void
WHlepv1::setValues(long long _iEntry)
{
  if (_iEntry == currentEntry)
    return;

  currentEntry = _iEntry;

  wlep1pt.clear();

  float mindr = 9999.;
  int leptonIdx1=-1;
  float maxdphi = -9999.;
  float dphi;

  TLorentzVector Whad(0.,0.,0.,0.);
  TLorentzVector jets(0.,0.,0.,0.);

  unsigned njet{*nCleanJet->Get()};
  unsigned nlep{*nLepton->Get()};

  if (njet==0 or nlep==0)
    wlep1pt.push_back(-9999.);
  
  for (unsigned i{0}; i != njet; i++){
    jets.SetPtEtaPhiM(0.,0.,0.,0.);
    jets.SetPtEtaPhiM( CleanJet_pt->At(i) , CleanJet_eta->At(i) , CleanJet_phi->At(i) , 0. );
    Whad+=jets;
    if (i==1)
      break;
  }

  for (unsigned i=0; i != nlep; i++){
    dphi = deltaPhi( Lepton_phi->At(i) , Whad.Phi());
    if (maxdphi < dphi){
      maxdphi=dphi;
      leptonIdx1=i;
    }
  }
  wlep1pt.push_back(Lepton_pt->At(leptonIdx1));
}

void
WHlepv1::bindTree_(multidraw::FunctionLibrary& _library)
{
  if (currentEntry == -2) {
    currentEntry = -1;
    _library.bindBranch(nCleanJet, "nCleanJet");
    _library.bindBranch(CleanJet_pt, "CleanJet_pt");
    _library.bindBranch(CleanJet_eta, "CleanJet_eta");
    _library.bindBranch(CleanJet_phi, "CleanJet_phi");
    _library.bindBranch(nLepton, "nLepton");
    _library.bindBranch(Lepton_pt, "Lepton_pt");
    _library.bindBranch(Lepton_eta, "Lepton_eta");
    _library.bindBranch(Lepton_phi, "Lepton_phi");

    _library.addDestructorCallback([]() {
        currentEntry = -2;
        nCleanJet = nullptr;
        CleanJet_pt = nullptr;
        CleanJet_eta = nullptr;
        CleanJet_phi = nullptr;
        nLepton = nullptr;
        Lepton_pt = nullptr;
        Lepton_eta = nullptr;
        Lepton_phi = nullptr;
      });
  }
}
