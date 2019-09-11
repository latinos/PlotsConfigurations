#include "LatinoAnalysis/MultiDraw/interface/TTreeFunction.h"
#include "LatinoAnalysis/MultiDraw/interface/FunctionLibrary.h"
#include <vector>
#include "TVector2.h"
#include "Math/Vector4Dfwd.h"
#include "Math/GenVector/LorentzVector.h"
#include "Math/GenVector/PtEtaPhiM4D.h"
#include <iostream>

class Compute_pTHjj : public multidraw::TTreeFunction {
public:
  Compute_pTHjj();

  char const* getName() const override { return "Compute_pTHjj"; }
  TTreeFunction* clone() const override { return new Compute_pTHjj(); }

  unsigned getNdata() override { return 1; }
  double evaluate(unsigned) override;

protected:
  void bindTree_(multidraw::FunctionLibrary&) override;
  IntArrayReader*   Lepton_pdgId{};
  FloatArrayReader* Lepton_pt{};
  FloatArrayReader* Lepton_eta{};
  FloatArrayReader* Lepton_phi{};
  IntArrayReader*   CleanJet_Idx{};
  FloatArrayReader* CleanJet_pt{};
  FloatArrayReader* CleanJet_eta{};
  FloatArrayReader* CleanJet_phi{};
  FloatArrayReader* Jet_mass{};
  FloatReader* PuppiMET_pt{};
  FloatReader* PuppiMET_phi{};
};

Compute_pTHjj::Compute_pTHjj() :
  TTreeFunction()
{
}

double
Compute_pTHjj::evaluate(double)
{
  TLorentzVector lep1,lep2,jet1,jet2,MET,Hjj;
  double l1m=0;
  double l2m=0;
  if(fabs(Lepton_pdgId[0])==11)l1m=0.000510;
  else if(fabs(Lepton_pdgId[0])==13)l1m=0.106;
  if(fabs(Lepton_pdgId[1])==11)l2m=0.000510;
  else if(fabs(Lepton_pdgId[1])==13)l2m=0.106;

  lep1.SetPtEtaPhiM(Lepton_pt[0],Lepton_eta[0],Lepton_phi[0],l1m);
  lep2.SetPtEtaPhiM(Lepton_pt[1],Lepton_eta[1],Lepton_phi[1],l2m);
  jet1.SetPtEtaPhiM(CleanJet_pt[0],CleanJet_eta[0],CleanJet_phi[0],Jet_mass[CleanJet_Idx[0]]);
  jet2.SetPtEtaPhiM(CleanJet_pt[1],CleanJet_eta[1],CleanJet_phi[1],Jet_mass[CleanJet_Idx[1]]);
  MET.SetPtEtaPhiM(PuppiMET_pt,0,PuppiMET_phi,0);
  Hjj=lep1+lep2+jet1+jet2+MET;

  return Hjj.Pt();
}

void
Compute_pTHjj::bindTree_(multidraw::FunctionLibrary& _library)
{
  _library.bindBranch(Lepton_pdgId, "Lepton_pdgId");
  _library.bindBranch(Lepton_pt, "Lepton_pt");
  _library.bindBranch(Lepton_eta, "Lepton_eta");
  _library.bindBranch(Lepton_phi, "Lepton_phi");
  _library.bindBranch(CleanJet_Idx, "CleanJet_Idx");
  _library.bindBranch(CleanJet_pt, "CleanJet_pt");
  _library.bindBranch(CleanJet_eta, "CleanJet_eta");
  _library.bindBranch(CleanJet_phi, "CleanJet_phi");
  _library.bindBranch(Jet_mass, "Jet_mass");
  _library.bindBranch(PuppiMET_pt, "PuppiMET_pt");
  _library.bindBranch(PuppiMET_phi, "PuppiMET_phi");
}
