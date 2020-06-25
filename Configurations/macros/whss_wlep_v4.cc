/*
  Building W pt proxy assuming second neutrino is collinear wrt to second lepton.
  1.) If event consist of 2 jets or more, the colinear neutrino2 is scaled with kfactor with invariant mass constrain from higgs boson.
  2.) The neutrino1 is recovered by subtracting MET with coliear neutrino2, and accounted with recovered pz by using invariant mass of W mass.
*/

#include "LatinoAnalysis/MultiDraw/interface/TTreeFunction.h"
#include "LatinoAnalysis/MultiDraw/interface/FunctionLibrary.h"

#include "TSystem.h"

#include <iostream>
#include <vector>
#include <utility>
#include <algorithm>
#include <iterator>

#include "TLorentzVector.h"
#include "TVector2.h"
#include "TMath.h"

class whss_wlep_v4 : public multidraw::TTreeFunction {
public:
  whss_wlep_v4();

  char const* getName() const override { return "whss_wlep_v4"; }
  TTreeFunction* clone() const override { return new whss_wlep_v4(); }
  //TTreeFunction* clone() const override;
  unsigned getNdata() override { return 1; }

  float deltaPhi(float, float);
  float deltaR(float, float, float, float);
  float deltaEta(float, float);
  float recoverNeutrinoPz(TLorentzVector, TLorentzVector);
  double evaluate(unsigned) override;
  std::vector<std::pair<int,float>> IndexByMaxPhi(std::vector<std::pair<int,float>> vector);
  std::vector<std::pair<std::pair<int,int>, float>> IndexByMinR(std::vector<std::pair<std::pair<int,int>, float>> vector);

  struct maxphi {
    bool operator() (std::pair<int,float> i, std::pair<int,float> j) { return ( (i.second) > (j.second) ); } // sort in Descending order
  };

  struct minR {
    bool operator() (std::pair<std::pair<int,int>, float> i, std::pair<std::pair<int,int>, float> j) { return ( (i.second) < (j.second) ); } // sort in Ascending order
  };


protected:
  void bindTree_(multidraw::FunctionLibrary&) override;

  UIntValueReader* nCleanJet;
  FloatArrayReader* CleanJet_pt;
  FloatArrayReader* CleanJet_eta;
  FloatArrayReader* CleanJet_phi;
  IntArrayReader* CleanJet_jetIdx;
  FloatArrayReader* Jet_mass;
  UIntValueReader* nLepton;
  IntArrayReader* Lepton_pdgId;
  FloatArrayReader* Lepton_pt;
  FloatArrayReader* Lepton_eta;
  FloatArrayReader* Lepton_phi;
  IntArrayReader* Lepton_electronIdx;
  IntArrayReader* Lepton_muonIdx;
  FloatArrayReader* Electron_mass;
  FloatArrayReader* Muon_mass;
  FloatValueReader* PuppiMET_pt;
  FloatValueReader* PuppiMET_phi;

};

whss_wlep_v4::whss_wlep_v4() :
  TTreeFunction()
{}

// --- Helper
float whss_wlep_v4::deltaPhi(float phi1, float phi2)
{
  float PHI = std::abs(phi1-phi2);
if (PHI<=3.14159265)
  return PHI;
else
  return 2*3.14159265-PHI;
}

float whss_wlep_v4::deltaR(float phi1, float eta1, float phi2, float eta2) {
  //return sqrt((eta2-eta1)**2+deltaPhi(phi1,phi2)**2);
  return sqrt( pow((eta2-eta1),2) + pow(deltaPhi(phi1,phi2),2) );
}

float whss_wlep_v4::deltaEta(float eta1, float eta2) {
  return std::abs(eta1 - eta2);
}

float whss_wlep_v4::recoverNeutrinoPz(TLorentzVector lep, TLorentzVector met){
  float pz = 0.; float a; float A; float B;
  float C; float D;
  a = pow(80.4,2) - pow(lep.M(),2) + 2.*lep.Px()*met.Px() + 2.*lep.Py()*met.Py();
  A = 4.*( pow(lep.E(),2) - pow(lep.Pz(),2) );
  B = -4.*a*lep.Pz();
  C = 4*(pow(lep.E(),2)) * (pow(met.Px(),2)  + pow(met.Py(),2)) - pow(a,2);
  D = pow(B,2) - 4*A*C;
  // If there are real solutions, use the one with lowest pz
  if (D >= 0.){
    float s1 = (-B+sqrt(D))/(2*A);
    float s2 = (-B-sqrt(D))/(2*A);
    pz = ( ( abs(s1) < abs(s2) ) ? s1 : s2 );
  }// Otherwise, use real part
  else{
    pz = -B/(2*A);
  }
  return pz;
}

std::vector<std::pair<int,float>> whss_wlep_v4::IndexByMaxPhi(std::vector<std::pair<int,float>> vector) {
  maxphi comparator;
  std::sort (vector.begin() , vector.end() , comparator);
  return vector;
};

std::vector<std::pair<std::pair<int,int>, float>> whss_wlep_v4::IndexByMinR(std::vector<std::pair<std::pair<int,int>, float>> vector){
  minR comparator;

  std::sort (vector.begin() , vector.end() , comparator);
  return vector;
}

// Helper ---

double
whss_wlep_v4::evaluate(unsigned)
{

  TLorentzVector Whad(0.,0.,0.,0.);
  TLorentzVector lepton1(0.,0.,0.,0.);
  TLorentzVector lepton2(0.,0.,0.,0.);
  TLorentzVector neutrino1(0.,0.,0.,0.);
  TLorentzVector neutrino2(0.,0.,0.,0.);
  TLorentzVector MET(0.,0.,0.,0.);

  unsigned int njet{*nCleanJet->Get()};
  unsigned int nlep{*nLepton->Get()};
  float metpt{*PuppiMET_pt->Get()};
  float metphi{*PuppiMET_phi->Get()};
  MET.SetPtEtaPhiM( metpt, 0., metphi, 0. );

  if (nlep<2) return -9999.;
  if (njet<1) return -9999.;

  if (njet>=2){
    // if more then one jet, choose the jet pair with minimal deltaR
    TLorentzVector jet1; jet1.SetPtEtaPhiM(0.,0.,0.,0.);
    TLorentzVector jet2; jet2.SetPtEtaPhiM(0.,0.,0.,0.);
    std::vector<std::pair<std::pair<int,int>, float>> jetPairIdx_;
    for (unsigned int ijet=0; ijet<njet; ijet++){
      for (unsigned int kjet=0; kjet<njet; kjet++){
        if (ijet==kjet) continue;
        float dr = deltaR ( CleanJet_phi->At(ijet) , CleanJet_eta->At(ijet) , CleanJet_phi->At(kjet) , CleanJet_eta->At(kjet) );
        jetPairIdx_.push_back(std::make_pair(std::make_pair(ijet,kjet),dr));
      } // end of ijet loop
    } // end of kjet loop
    std::vector<std::pair<std::pair<int,int>, float>> jetPairIdx = IndexByMinR(jetPairIdx_);

    int j1_Idx = jetPairIdx.front().first.first;
    int j2_Idx = jetPairIdx.front().first.second;
    jet1.SetPtEtaPhiM( CleanJet_pt->At(j1_Idx) , CleanJet_eta->At(j1_Idx) , CleanJet_phi->At(j1_Idx) , Jet_mass->At(CleanJet_jetIdx->At(j1_Idx)) );
    jet2.SetPtEtaPhiM( CleanJet_pt->At(j2_Idx) , CleanJet_eta->At(j2_Idx) , CleanJet_phi->At(j2_Idx) , Jet_mass->At(CleanJet_jetIdx->At(j2_Idx)) );
    Whad = jet1+jet2;

    // STEP 2, Identify lepton from jet system
    // furthest in phi , associated produced lepton1
    // closest in phi , associated produced lepton2
    std::vector<std::pair<int,float>> leptonIdx_;
    for (unsigned int ilep=0; ilep< nlep; ilep++){
      float dphi = deltaPhi( Lepton_phi->At(ilep) , Whad.Phi());
      leptonIdx_.push_back(std::make_pair(ilep,dphi));
    } // end of ilep

    std::vector<std::pair<int,float>> leptonIdx = IndexByMaxPhi(leptonIdx_);

    int lep1_Idx = leptonIdx.front().first; // further to jet system
    int lep2_Idx = leptonIdx.back().first; // closest to jet system

    float lep1_mass = (abs(Lepton_pdgId->At(lep1_Idx))==11) ? Electron_mass->At(Lepton_electronIdx->At(lep1_Idx)) : Muon_mass->At(Lepton_muonIdx->At(lep1_Idx));
    float lep2_mass = (abs(Lepton_pdgId->At(lep2_Idx))==11) ? Electron_mass->At(Lepton_electronIdx->At(lep2_Idx)) : Muon_mass->At(Lepton_muonIdx->At(lep2_Idx));

    lepton1.SetPtEtaPhiM( Lepton_pt->At(lep1_Idx) , Lepton_eta->At(lep1_Idx), Lepton_phi->At(lep1_Idx), lep1_mass );
    lepton2.SetPtEtaPhiM( Lepton_pt->At(lep2_Idx) , Lepton_eta->At(lep2_Idx), Lepton_phi->At(lep2_Idx), lep2_mass );

    // STEP 3, Estimate neutrino2, assuming lepton2 is collinear with neutrino2
    float kfactor_, kfactor;

    kfactor_ = 125./(Whad+lepton2).M();

    kfactor = ( ( (kfactor_-1) > 0 ) ? (kfactor_-1) : 0 );
    neutrino2 = lepton2 * kfactor;

    // Step 4, Reconstructing neutrino1, MET = neutrino1 + neutrino2
    TVector2 met_tot; met_tot.SetMagPhi(metpt,metphi);
    TVector2 met_neu2; met_neu2.SetMagPhi(neutrino2.Pt(),neutrino2.Phi());
    TVector2 met_neu1 = met_tot - met_neu2;

    float neu1_px = met_neu1.Px();
    float neu1_py = met_neu1.Py();
    TLorentzVector neutrino1_;  neutrino1_.SetPxPyPzE( neu1_px , neu1_py , 0. , 0. );
    float neu1_pz = recoverNeutrinoPz(lepton1,neutrino1_);
    neutrino1.SetPxPyPzE( neu1_px , neu1_py , neu1_pz , TMath::Sqrt( neu1_px*neu1_px + neu1_py*neu1_py + neu1_pz*neu1_pz ) );
    return (lepton1+neutrino1).Pt();
  }
  else{

    Whad.SetPtEtaPhiM( CleanJet_pt->At(0) , CleanJet_eta->At(0) , CleanJet_phi->At(0) , Jet_mass->At(CleanJet_jetIdx->At(0)) );

    std::vector<std::pair<int,float>> leptonIdx_;
    for (unsigned int ilep=0; ilep< nlep; ilep++){
      float dphi = deltaPhi( Lepton_phi->At(ilep) , Whad.Phi());
      leptonIdx_.push_back(std::make_pair(ilep,dphi));
    } // end of ilep
    std::vector<std::pair<int,float>> leptonIdx = IndexByMaxPhi(leptonIdx_);
    int lep1_Idx = leptonIdx.front().first; // further to jet system
    int lep2_Idx = leptonIdx.back().first; // closest to jet system

    float lep1_mass = (abs(Lepton_pdgId->At(lep1_Idx))==11) ? Electron_mass->At(Lepton_electronIdx->At(lep1_Idx)) : Muon_mass->At(Lepton_muonIdx->At(lep1_Idx));
    float lep2_mass = (abs(Lepton_pdgId->At(lep2_Idx))==11) ? Electron_mass->At(Lepton_electronIdx->At(lep2_Idx)) : Muon_mass->At(Lepton_muonIdx->At(lep2_Idx));

    lepton1.SetPtEtaPhiM( Lepton_pt->At(lep1_Idx) , Lepton_eta->At(lep1_Idx), Lepton_phi->At(lep1_Idx), lep1_mass );
    lepton2.SetPtEtaPhiM( Lepton_pt->At(lep2_Idx) , Lepton_eta->At(lep2_Idx), Lepton_phi->At(lep2_Idx), lep2_mass );

    TLorentzVector met1 = MET - lepton2;

    float met1px = met1.Pt()*TMath::Cos(met1.Phi());
    float met1py = met1.Pt()*TMath::Sin(met1.Phi());
    float met1pz = recoverNeutrinoPz(lepton1,met1);
    neutrino1.SetPxPyPzE( met1px , met1py , met1pz , TMath::Sqrt( met1px*met1px + met1py*met1py + met1pz*met1pz ) );
    return (lepton1+neutrino1).Pt();
  }
}

void
whss_wlep_v4::bindTree_(multidraw::FunctionLibrary& _library)
{
  std::cout << "Loading whss_wlep_v4" << std::endl;
  _library.bindBranch(nCleanJet, "nCleanJet");
  _library.bindBranch(CleanJet_pt, "CleanJet_pt");
  _library.bindBranch(CleanJet_eta, "CleanJet_eta");
  _library.bindBranch(CleanJet_phi, "CleanJet_phi");
  _library.bindBranch(CleanJet_jetIdx, "CleanJet_jetIdx");
  _library.bindBranch(Jet_mass, "Jet_mass");
  _library.bindBranch(nLepton, "nLepton");
  _library.bindBranch(Lepton_pdgId, "Lepton_pdgId");
  _library.bindBranch(Lepton_pt, "Lepton_pt");
  _library.bindBranch(Lepton_eta, "Lepton_eta");
  _library.bindBranch(Lepton_phi, "Lepton_phi");
  _library.bindBranch(Lepton_electronIdx, "Lepton_electronIdx");
  _library.bindBranch(Lepton_muonIdx, "Lepton_muonIdx");
  _library.bindBranch(Electron_mass, "Electron_mass");
  _library.bindBranch(Muon_mass, "Muon_mass");
  _library.bindBranch(PuppiMET_pt, "PuppiMET_pt");
  _library.bindBranch(PuppiMET_phi, "PuppiMET_phi");

}
