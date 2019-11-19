/*
  Temporary on-the-fly wh3l_wlep for nanoLatino trees nAODv5_2016/2017/2018v5 or earlier.
*/

#include "LatinoAnalysis/MultiDraw/interface/TTreeFunction.h"
#include "LatinoAnalysis/MultiDraw/interface/FunctionLibrary.h"

#include "TSystem.h"

#include <iostream>
#include <vector>

#include "TLorentzVector.h"
#include "TMath.h"

class WlepH3l : public multidraw::TTreeFunction {
public:
  WlepH3l();

  char const* getName() const override { return "WlepH3l"; }
  TTreeFunction* clone() const override { return new WlepH3l(); }
  //TTreeFunction* clone() const override;

  void beginEvent(long long) override;
  int getMultiplicity() override { return 1; }
  unsigned getNdata() override;
  double evaluate(unsigned) override;

protected:
  void bindTree_(multidraw::FunctionLibrary&) override;

  static void setValues(long long);

  static long long currentEntry;
  static UIntValueReader* nLepton;
  static FloatArrayReader* Lepton_pt;
  static FloatArrayReader* Lepton_eta;
  static FloatArrayReader* Lepton_phi;
  static IntArrayReader* Lepton_pdgId;
  static std::vector<float> wleph3l;

};

/*static*/
long long WlepH3l::currentEntry{-2};
UIntValueReader* WlepH3l::nLepton{};
FloatArrayReader* WlepH3l::Lepton_pt{};
FloatArrayReader* WlepH3l::Lepton_eta{};
FloatArrayReader* WlepH3l::Lepton_phi{};
IntArrayReader* WlepH3l::Lepton_pdgId{};

std::vector<float> WlepH3l::wleph3l{};

WlepH3l::WlepH3l() :
  TTreeFunction()
{}

void
WlepH3l::beginEvent(long long _iEntry)
{
  setValues(_iEntry);
}

unsigned
WlepH3l::getNdata()
{
  return wleph3l.size();
}

double
WlepH3l::evaluate(unsigned ij)
{
  return wleph3l[ij];
}

// --- Helper
float
deltaPhiv(float phi1, float phi2)
{
  float PHI = std::abs(phi1-phi2);
if (PHI<=3.14159265)
  return PHI;
else
  return 2*3.14159265-PHI;
}

float
deltaRv(float phi1, float eta1, float phi2, float eta2) {
  //return sqrt((eta2-eta1)**2+deltaPhi(phi1,phi2)**2);
  return sqrt( pow((eta2-eta1),2) + pow(deltaPhiv(phi1,phi2),2) );
}

float
deltaEtav(float eta1, float eta2) {
  return std::abs(eta1 - eta2);
}
// Helper ---

void
WlepH3l::setValues(long long _iEntry)
{
  if (_iEntry == currentEntry)
    return;

  currentEntry = _iEntry;

  wleph3l.clear();

  TLorentzVector Slepton1(0.,0.,0.,0.);
  TLorentzVector Slepton2(0.,0.,0.,0.);
  TLorentzVector SSlepton(0.,0.,0.,0.);
  unsigned nlep{*nLepton->Get()};
  //float mindr = 9999.;
  float maxdr = -9999.;
  float maxdphi = -9999.;
  float dr;
  float dphi;
  unsigned int leptonIdx1=999;
  unsigned int leptonIdx2=999;
  unsigned int leptonIdx3=999;

  for (unsigned i=0; i != nlep; i++){
    for (unsigned j=0; j != nlep; j++){
      if (i==j) continue;
      //take same sign, its ok to be different flavour
      if ( ( Lepton_pdgId->At(i)>0 && Lepton_pdgId->At(j)>0 ) || ( Lepton_pdgId->At(i)<0 && Lepton_pdgId->At(j)<0 ) ){
        dr = deltaRv( Lepton_phi->At(i) , Lepton_eta->At(i) , Lepton_phi->At(j) , Lepton_eta->At(j) );
        //find the minimum dr of dilepton same sign
        if (maxdr<dr){
          maxdr=dr;
          leptonIdx1=i;
          leptonIdx2=j;
        }
      }
    }
  }
  //Identify the third lepton
  if ( (leptonIdx1!=999 && leptonIdx2!=999) && nlep>2 ){
      Slepton1.SetPtEtaPhiM( Lepton_pt->At(leptonIdx1) , Lepton_eta->At(leptonIdx1) , Lepton_phi->At(leptonIdx1) , 0. );
      Slepton2.SetPtEtaPhiM( Lepton_pt->At(leptonIdx2) , Lepton_eta->At(leptonIdx2) , Lepton_phi->At(leptonIdx2) , 0. );
      SSlepton=Slepton1+Slepton2;
      for (unsigned i=0; i != nlep; i++){
        if (i==leptonIdx1) continue;
        if (i==leptonIdx2) continue;
        dphi = deltaPhiv( Lepton_phi->At(i) , SSlepton.Phi() );
        if (maxdphi<dphi){
          maxdphi = dphi;
          leptonIdx3 = i;
        }
      }
      wleph3l.push_back(Lepton_pt->At(leptonIdx3));
  }
  else{
    wleph3l.push_back(-9999.);
  }
}

void
WlepH3l::bindTree_(multidraw::FunctionLibrary& _library)
{
  if (currentEntry == -2) {
    currentEntry = -1;
    _library.bindBranch(nLepton, "nLepton");
    _library.bindBranch(Lepton_pt, "Lepton_pt");
    _library.bindBranch(Lepton_eta, "Lepton_eta");
    _library.bindBranch(Lepton_phi, "Lepton_phi");
    _library.bindBranch(Lepton_pdgId, "Lepton_pdgId");

    _library.addDestructorCallback([]() {
        currentEntry = -2;
        nLepton = nullptr;
        Lepton_pt = nullptr;
        Lepton_eta = nullptr;
        Lepton_phi = nullptr;
        Lepton_pdgId = nullptr;
      });
  }
}
