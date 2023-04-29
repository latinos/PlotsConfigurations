#include "LatinoAnalysis/MultiDraw/interface/TTreeFunction.h"
#include "LatinoAnalysis/MultiDraw/interface/FunctionLibrary.h"

#include <vector>
#include "TLorentzVector.h"

#include "TVector2.h"
#include "Math/Vector4Dfwd.h"
#include "Math/GenVector/LorentzVector.h"
#include "Math/GenVector/PtEtaPhiM4D.h"

#include <iostream>

class GetGenObservables : public multidraw::TTreeFunction {
public:
  GetGenObservables( std::string observable_);

  char const* getName() const override { return "GetGenObservables"; }
  TTreeFunction* clone() const override { return new GetGenObservables(observable); }

  unsigned getNdata() override { return 1; }
  double evaluate(unsigned) override;

protected:
  void bindTree_(multidraw::FunctionLibrary&) override;

  UIntValueReader* nGenDressedLepton{};
  IntArrayReader* GenDressedLepton_pdgId{};
  FloatArrayReader* GenDressedLepton_pt{};
  FloatArrayReader* GenDressedLepton_eta{};
  FloatArrayReader* GenDressedLepton_phi{};
  FloatArrayReader* GenDressedLepton_mass{};
  UIntValueReader* nGenJet{};
  FloatArrayReader* GenJet_pt{};
  FloatArrayReader* GenJet_eta{};
  FloatArrayReader* GenJet_phi{};
  FloatArrayReader* GenJet_mass{};
  FloatValueReader* GenMET_pt{};
  IntArrayReader* GenJet_partonFlavour{};
  FloatValueReader* GenMET_phi{};
  std::string observable;
};

GetGenObservables::GetGenObservables(std::string observable_) :
  TTreeFunction()
{
  observable=observable_;
}

// The actual function begins here, above is C++ bloat <3

double GetGenObservables::evaluate(unsigned)
{
  float  ptl_1{-999}, ptl_2{-999}, ptl_3{-999}, ptll_{-999}, mll_{-999}, ptj_1{-999}, ptj_2{-999}, mjj_{-999},mjjmax_{-999},mth_{1}, MET_{-999}, eta_l1{-999}, eta_l2{-999}, eta_j1{-999}, eta_j2{-999},pdgid_1{-999}, pdgid_2{-999}, dphijj{-999}, met_{-999}, mtw1_{-999}, mtw2_{-999}, nj_pt_30{0}, nj_pt_20{0}, detajj{-999}, dphill{-999}, mTi{-999}, dphillmet{-999}, drll{-999}, ht{0}, ctot{-999}, bjets{0}, phij1{-999}, phij2{-999}, phil1{-999}, phil2{-999}, ptww{-999}; 

  unsigned nJ{*nGenJet->Get()};
  
  unsigned nL{*nGenDressedLepton->Get()};

  // If there are no prompt leptons don't bother checking and just count the jets w/ pt > 30
  // Why not returning default value?

  if (nL == 0) {
    unsigned n{0};
    for (unsigned iJ{0}; iJ != nJ; ++iJ) {
      if (GenJet_pt->At(iJ) > 30.){
        ++n;
      }   
    }
    //return n;
   
  }

  // Create prompt gen leptons 4-vectors

  std::vector<ROOT::Math::PtEtaPhiMVector> dressedLeptons{};
  for (unsigned iL=0; iL<nL; ++iL) {
    dressedLeptons.emplace_back(
      GenDressedLepton_pt->At(iL),
      GenDressedLepton_eta->At(iL),
      GenDressedLepton_phi->At(iL),
      GenDressedLepton_mass->At(iL));
  }

  // Do the actual cleaning, hacked to stop at 2

  // If there are less than 2 jets, return underflow value

  TLorentzVector j1{}; // clean gen jet 1 & 2
  TLorentzVector j2{};
  std::vector<int> CleanJet_ids;

  // Loop opver prompt gen jets and check overlap with prompt gen leptons
  // If there is no overlap, keep the jet (up to two jets kept)

  unsigned n{0};
  for (unsigned iJ{0}; iJ != nJ; ++iJ) {
    if (GenJet_pt->At(iJ) < 30.) // FIXME!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!
      continue;

    bool overlap{false};
    for (auto& p4 : dressedLeptons) {
      if (p4.pt() < 10.)
        continue;

      double dEta{p4.eta() - GenJet_eta->At(iJ)};
      double dPhi{TVector2::Phi_mpi_pi(p4.phi() - GenJet_phi->At(iJ))};
      if (dEta * dEta + dPhi * dPhi < 0.16) {
        overlap = true;
        break;
      }
    }
    if (!overlap) {
      CleanJet_ids.push_back(iJ);
      if (n == 0) { j1.SetPtEtaPhiM(GenJet_pt->At(iJ), GenJet_eta->At(iJ), GenJet_phi->At(iJ), GenJet_mass->At(iJ)); }
      else if (n == 1){ j2.SetPtEtaPhiM(GenJet_pt->At(iJ), GenJet_eta->At(iJ), GenJet_phi->At(iJ), GenJet_mass->At(iJ)); }
      ++n;
      if (GenJet_pt->At(iJ) > 20.) { nj_pt_20++;}
      if (GenJet_pt->At(iJ) > 30.) { 
        nj_pt_30++;
        if (abs(GenJet_partonFlavour->At(iJ)) == 5) {
          bjets++;
        }
        ht += GenJet_pt->At(iJ);
      }
    }
  }
  
  TLorentzVector MET{};
  MET.SetPtEtaPhiM(*GenMET_pt->Get(), 0., *GenMET_phi->Get(), 0.);
  met_=MET.Pt();

if (dressedLeptons.size() >0){
  ptl_1 = dressedLeptons[0].pt();
  eta_l1=dressedLeptons[0].eta();
  pdgid_1=(int)GenDressedLepton_pdgId->At(0);
  phil1=dressedLeptons[0].phi();
  if (dressedLeptons.size() >1) {
    TLorentzVector PTl1{};
    PTl1.SetPtEtaPhiM(dressedLeptons[0].pt(), dressedLeptons[0].eta(),dressedLeptons[0].phi(),dressedLeptons[0].M());
    TLorentzVector PTl2{};
    PTl2.SetPtEtaPhiM(dressedLeptons[1].pt(), dressedLeptons[1].eta(),dressedLeptons[1].phi(),dressedLeptons[1].M());
    ptl_2 = dressedLeptons[1].pt();
    ptll_= (dressedLeptons[0]+dressedLeptons[1]).pt();
    mll_=(dressedLeptons[0]+dressedLeptons[1]).M();
    eta_l2=dressedLeptons[1].eta();
    pdgid_2=(int)GenDressedLepton_pdgId->At(1);
    phil2=dressedLeptons[1].phi();

    ptww = (PTl1+PTl2+MET).Pt();

    
    dphill = PTl1.DeltaPhi(PTl2); 
    if (dphill >  TMath::Pi()) dphill = dphill - 2*TMath::Pi();
    if (dphill < -TMath::Pi()) dphill = dphill + 2*TMath::Pi();

    drll = PTl1.DeltaR(PTl2); 

    mth_ = TMath::Sqrt(ptll_*MET.Pt()*2*(1-TMath::Cos((PTl1+PTl2).DeltaPhi(MET))));
    dphillmet = (PTl1+PTl2).DeltaPhi(MET);
    mTi = (PTl1+PTl2+MET).M();
    mtw1_ = TMath::Sqrt(PTl1.Pt()*MET.Pt()*2*(1-TMath::Cos(PTl1.DeltaPhi(MET))));
    mtw2_ = TMath::Sqrt(PTl2.Pt()*MET.Pt()*2*(1-TMath::Cos(PTl2.DeltaPhi(MET))));
  
    if (dressedLeptons.size() >2) ptl_3 = dressedLeptons[2].pt();
  } 
}


if (n >0){
  ptj_1 = j1.Pt();
  eta_j1=j1.Eta();
  
  if (n >1) {
    ptj_2 = j2.Pt();
    mjj_=(j1+j2).M();
    eta_j2=j2.Eta();
  
    detajj=TMath::Abs(eta_j1-eta_j2);

    phij1 = j1.Phi();
    phij2 = j2.Phi();
    if (eta_j1 > eta_j2)       dphijj = phij1 - phij2;
    else if (eta_j1 <= eta_j2) dphijj = phij2 - phij1;
    if (dphijj >  TMath::Pi()) dphijj = dphijj - 2*TMath::Pi();
    if (dphijj < -TMath::Pi()) dphijj = dphijj + 2*TMath::Pi();
    if (dressedLeptons.size() >1) {
      ctot = TMath::Log((TMath::Abs(2*eta_l1-eta_j1-eta_j2)+TMath::Abs(2*eta_l2-eta_j1-eta_j2))/detajj); 
    }
  } 
}
if (CleanJet_ids.size()>=2){
  for (int ij1 = 0; ij1 < CleanJet_ids.size()-1; ++ij1){
    TLorentzVector j1_tmp{};
    TLorentzVector j2_tmp{};
    j1_tmp.SetPtEtaPhiM(GenJet_pt->At(ij1), GenJet_eta->At(ij1), GenJet_phi->At(ij1), GenJet_mass->At(ij1));
    for (int ij2 = ij1+1; ij2 < CleanJet_ids.size(); ++ij2){
      j2_tmp.SetPtEtaPhiM(GenJet_pt->At(ij2), GenJet_eta->At(ij2), GenJet_phi->At(ij2), GenJet_mass->At(ij2));
    }
    double mjj_tmp = (j1_tmp+j2_tmp).M();
    if (mjj_tmp > mjjmax_){ mjjmax_ = mjj_tmp;}
  }
}  





  // Define additional useful variables (for fiducial region definition)
if (observable.compare("ptl1")==0) return ptl_1;
if (observable.compare("ptl2")==0) return ptl_2;
if (observable.compare("ptl3")==0) return ptl_3;
if (observable.compare("ptll")==0) return ptll_;
if (observable.compare("mll")==0) return mll_;
if (observable.compare("etal1")==0) return eta_l1;
if (observable.compare("etal2")==0) return eta_l2;
if (observable.compare("pdgid1")==0) return pdgid_1;
if (observable.compare("pdgid2")==0) return pdgid_2;
if (observable.compare("phil1")==0) return phil1;
if (observable.compare("phil2")==0) return phil2;
if (observable.compare("dphill")==0) return dphill;
if (observable.compare("drll")==0) return drll;
if (observable.compare("ptww")==0) return ptww;

if (observable.compare("ptj1")==0) return ptj_1;
if (observable.compare("ptj2")==0) return ptj_2;
if (observable.compare("etaj1")==0) return eta_j1;
if (observable.compare("etaj2")==0) return eta_j2;
if (observable.compare("phij1")==0) return phij1;
if (observable.compare("phij2")==0) return phij2;
if (observable.compare("mjj")==0) return mjj_;
if (observable.compare("mjjmax")==0) return mjjmax_;
if (observable.compare("dphijj")==0) return dphijj;
if (observable.compare("detajj")==0) return detajj;
if (observable.compare("nj_pt_30")==0) return nj_pt_30;
if (observable.compare("nj_pt_20")==0) return nj_pt_20;
if (observable.compare("ht")==0) return ht;
if (observable.compare("ctot")==0) return ctot;
if (observable.compare("bjets")==0) return bjets;

if (observable.compare("mth")==0) return mth_;
if (observable.compare("mti")==0) return mTi;
if (observable.compare("dphillmet")==0) return dphillmet;
if (observable.compare("met")==0) return met_;
if (observable.compare("mtw1")==0) return mtw1_;
if (observable.compare("mtw2")==0) return mtw2_;


return -300;
}

void GetGenObservables::bindTree_(multidraw::FunctionLibrary& _library)
{
  _library.bindBranch(nGenDressedLepton, "nGenDressedLepton");
  _library.bindBranch(GenDressedLepton_pdgId, "GenDressedLepton_pdgId");
  _library.bindBranch(GenDressedLepton_pt, "GenDressedLepton_pt");
  _library.bindBranch(GenDressedLepton_eta, "GenDressedLepton_eta");
  _library.bindBranch(GenDressedLepton_phi, "GenDressedLepton_phi");
  _library.bindBranch(GenDressedLepton_mass, "GenDressedLepton_mass");
  _library.bindBranch(nGenJet, "nGenJet");
  _library.bindBranch(GenJet_pt, "GenJet_pt");
  _library.bindBranch(GenJet_eta, "GenJet_eta");
  _library.bindBranch(GenJet_phi, "GenJet_phi");
  _library.bindBranch(GenJet_partonFlavour, "GenJet_partonFlavour");
  _library.bindBranch(GenJet_mass, "GenJet_mass");
  _library.bindBranch(GenMET_pt, "GenMET_pt");
  _library.bindBranch(GenMET_phi, "GenMET_phi");
}
