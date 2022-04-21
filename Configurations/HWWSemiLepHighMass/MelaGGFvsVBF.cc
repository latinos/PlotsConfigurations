#include "LatinoAnalysis/MultiDraw/interface/TTreeFunction.h"
#include "LatinoAnalysis/MultiDraw/interface/FunctionLibrary.h"
#include "JHUGenMELA/MELA/interface/Mela.h"

#include "TMath.h"
#include "TLorentzVector.h"
#include <vector>

#include <iostream>

class MelaGGFvsVBF : public multidraw::TTreeFunction {
public:
  MelaGGFvsVBF();
  MelaGGFvsVBF(unsigned int i);

  char const* getName() const override { return "MelaGGFvsVBF"; }
  TTreeFunction* clone() const override { return new MelaGGFvsVBF(); }

  virtual void beginEvent(long long iEntry) override;

  unsigned getNdata() override { return 1; }
  double evaluate(unsigned) override;

protected:
  void bindTree_(multidraw::FunctionLibrary&) override;

  void setValues(long long _iEntry);
  unsigned int _which;
  static long long currentEntry;

  static UIntValueReader* nCleanJet;
  static FloatArrayReader* CleanJet_pt;
  static FloatArrayReader* CleanJet_eta;
  static FloatArrayReader* CleanJet_phi;
  static IntArrayReader* CleanJet_jetIdx;
  static FloatArrayReader* Jet_mass;

  static IntValueReader* HM_idx_j1;
  static IntValueReader* HM_idx_j2;

  static IntValueReader* idxWfat;

  static UIntValueReader* nCleanFatJet;
  static FloatArrayReader* CleanFatJet_pt;
  static FloatArrayReader* CleanFatJet_eta;
  static FloatArrayReader* CleanFatJet_phi;
  static FloatArrayReader* CleanFatJet_mass;

  static FloatValueReader* Wlep_mass;
  static FloatValueReader* Wlep_pt;
  static FloatValueReader* Wlep_eta;
  static FloatValueReader* Wlep_phi;


  static float discriminatorBoosted;
  static float discriminatorResolved;
  static Mela* _mela;


};

long long MelaGGFvsVBF::currentEntry{-2};
UIntValueReader* MelaGGFvsVBF::nCleanJet{};
FloatArrayReader* MelaGGFvsVBF::CleanJet_pt{};
FloatArrayReader* MelaGGFvsVBF::CleanJet_eta{};
FloatArrayReader* MelaGGFvsVBF::CleanJet_phi{};
IntArrayReader*  MelaGGFvsVBF::CleanJet_jetIdx{};
FloatArrayReader* MelaGGFvsVBF::Jet_mass{};

IntValueReader* MelaGGFvsVBF::HM_idx_j1{};
IntValueReader* MelaGGFvsVBF::HM_idx_j2{};

IntValueReader* MelaGGFvsVBF::idxWfat{};

UIntValueReader* MelaGGFvsVBF::nCleanFatJet{};
FloatArrayReader* MelaGGFvsVBF::CleanFatJet_pt{};
FloatArrayReader* MelaGGFvsVBF::CleanFatJet_eta{};
FloatArrayReader* MelaGGFvsVBF::CleanFatJet_phi{};
FloatArrayReader* MelaGGFvsVBF::CleanFatJet_mass{};

FloatValueReader* MelaGGFvsVBF::Wlep_mass{};
FloatValueReader* MelaGGFvsVBF::Wlep_pt{};
FloatValueReader* MelaGGFvsVBF::Wlep_eta{};
FloatValueReader* MelaGGFvsVBF::Wlep_phi{};

float MelaGGFvsVBF::discriminatorBoosted{-999.};
float MelaGGFvsVBF::discriminatorResolved{-999.};
Mela* MelaGGFvsVBF::_mela{};

MelaGGFvsVBF::MelaGGFvsVBF() :
  TTreeFunction()
{
  _mela = new Mela(13., 125.);
}

MelaGGFvsVBF::MelaGGFvsVBF(unsigned int i) :
  TTreeFunction()
{
  _mela = new Mela(13., 125.);
  _which = i;
}

void MelaGGFvsVBF::beginEvent(long long iEntry){
  setValues(iEntry);
}

void
MelaGGFvsVBF::setValues(long long _iEntry)
{
  if (_iEntry == currentEntry)
      return;
   //std::cout << "_iEntry: " << _iEntry << std::endl;
   currentEntry = _iEntry;
   discriminatorBoosted = -999;
   discriminatorResolved = -999;
   _mela->resetInputEvent();
 
   int idx_j1{*HM_idx_j1->Get()};      
   int idx_j2{*HM_idx_j2->Get()};      

   int idx_fat{*idxWfat->Get()};

   TLorentzVector lep;
   lep.SetPtEtaPhiM(*Wlep_pt->Get(), *Wlep_eta->Get(), *Wlep_phi->Get(), *Wlep_mass->Get());
   //std::cout << "nCleanJet: " << *nCleanJet->Get() << std::endl;
   // nothing to do if we don't have at least 2 jets 
   if (*nCleanJet->Get() < 2)
    return;
   // loop over the jets and find the pair with the highest invariant mass
   float mjjmax = 0;
   TLorentzVector vbfj1, vbfj2;
   bool foundVBFjets = false;
   for (int ij1 = 0; ij1 < *nCleanJet->Get()-1; ++ij1){
     for (int ij2 = ij1+1; ij2 < *nCleanJet->Get(); ++ij2){
       // skip if it is one of the two jets from the resolved candidate 
       if (ij1 == idx_j1 || ij1 == idx_j2 || ij2 == idx_j1 || ij2 == idx_j2) continue;
       TLorentzVector tmpj1, tmpj2;
       tmpj1.SetPtEtaPhiM(CleanJet_pt->At(ij1), CleanJet_eta->At(ij1), CleanJet_phi->At(ij1), Jet_mass->At(CleanJet_jetIdx->At(ij1)));
       tmpj2.SetPtEtaPhiM(CleanJet_pt->At(ij2), CleanJet_eta->At(ij2), CleanJet_phi->At(ij2), Jet_mass->At(CleanJet_jetIdx->At(ij2)));
       double tmpmjj = (tmpj1+tmpj2).M();
       if (tmpmjj > mjjmax ){
          foundVBFjets= true;
          mjjmax = tmpmjj;
          vbfj1 = tmpj1;
          vbfj2 = tmpj2;
       }
     }       
   }
   if (! foundVBFjets) return;
   vbfj1.Print();
   vbfj2.Print();
   SimpleParticleCollection_t daughter_coll;
   SimpleParticleCollection_t associated_coll;       
   associated_coll.push_back(SimpleParticle_t(0,vbfj1));
   associated_coll.push_back(SimpleParticle_t(0,vbfj2));
   // we have a resolved candidate
   if (idx_j1>=0){
      TLorentzVector j1;
      j1.SetPtEtaPhiM(CleanJet_pt->At(idx_j1), CleanJet_eta->At(idx_j1), CleanJet_phi->At(idx_j1), Jet_mass->At(CleanJet_jetIdx->At(idx_j1)));
      TLorentzVector j2;
      j2.SetPtEtaPhiM(CleanJet_pt->At(idx_j2), CleanJet_eta->At(idx_j2), CleanJet_phi->At(idx_j2), Jet_mass->At(CleanJet_jetIdx->At(idx_j2)));
      TLorentzVector h = lep+j1+j2;
      
      daughter_coll.push_back(SimpleParticle_t(25,h));
      _mela->setCandidateDecayMode(TVar::CandidateDecay_Stable);
      _mela->setInputEvent(&daughter_coll, &associated_coll, 0, 0);
      _mela->setCurrentCandidateFromIndex(0);
      float me_vbf = 0.;
      float me_ggH = 0.;
      _mela->setProcess(TVar::HSMHiggs, TVar::JHUGen, TVar::JJVBF);
      // set the two resonances AFTER setting the process
      _mela->setMelaHiggsMassWidth(h.M(), 10., 0);
      _mela->setMelaHiggsMassWidth(125., 4.07e-3, 1);
      _mela->computeProdP(me_vbf, true);
      _mela->setProcess(TVar::HSMHiggs, TVar::JHUGen, TVar::JJQCD);
      // set the two resonances AFTER setting the process
      _mela->setMelaHiggsMassWidth(h.M(), 10., 0);
      _mela->setMelaHiggsMassWidth(125., 4.07e-3, 1);
      _mela->computeProdP(me_ggH, true);

      //std::cout << "me_vbf: " << me_vbf << " me_ggH: " << me_ggH << std::endl;
      discriminatorResolved = me_vbf/(me_vbf+me_ggH);    
   }
   // we have a boosted candidate
   if (idx_fat >= 0){
      TLorentzVector jfat;
      jfat.SetPtEtaPhiM(CleanFatJet_pt->At(idx_fat), CleanFatJet_eta->At(idx_fat), CleanFatJet_phi->At(idx_fat), CleanFatJet_mass->At(idx_fat));
      TLorentzVector h = lep+jfat;
      
      daughter_coll.push_back(SimpleParticle_t(25,h));
      _mela->setCandidateDecayMode(TVar::CandidateDecay_Stable);
      _mela->setInputEvent(&daughter_coll, &associated_coll, 0, 0);
      _mela->setCurrentCandidateFromIndex(0);
      float me_vbf = 0.;
      float me_ggH = 0.;
      _mela->setProcess(TVar::HSMHiggs, TVar::JHUGen, TVar::JJVBF);
      // set the two resonances AFTER setting the process
      _mela->setMelaHiggsMassWidth(h.M(), 10., 0);
      _mela->setMelaHiggsMassWidth(125., 4.07e-3, 1);
      _mela->computeProdP(me_vbf, true);
      _mela->setProcess(TVar::HSMHiggs, TVar::JHUGen, TVar::JJQCD);
      // set the two resonances AFTER setting the process
      _mela->setMelaHiggsMassWidth(h.M(), 10., 0);
      _mela->setMelaHiggsMassWidth(125., 4.07e-3, 1);
      _mela->computeProdP(me_ggH, true);
      discriminatorBoosted = me_vbf/(me_vbf+me_ggH);    
   }
}   

double
MelaGGFvsVBF::evaluate(unsigned)
{
  if (_which == 0) return discriminatorBoosted;
  return discriminatorResolved;
}

void
MelaGGFvsVBF::bindTree_(multidraw::FunctionLibrary& _library)
{
  _library.bindBranch(nCleanJet, "nCleanJet");
  _library.bindBranch(CleanJet_pt, "CleanJet_pt");
  _library.bindBranch(CleanJet_eta, "CleanJet_eta");
  _library.bindBranch(CleanJet_phi, "CleanJet_phi");
  _library.bindBranch(CleanJet_jetIdx, "CleanJet_jetIdx");
  _library.bindBranch(Jet_mass, "Jet_mass");

  _library.bindBranch(HM_idx_j1, "HM_idx_j1");
  _library.bindBranch(HM_idx_j2, "HM_idx_j2");

  _library.bindBranch(idxWfat, "HM_idxWfat_noTau21Cut");
    
  _library.bindBranch(nCleanFatJet, "nCleanFatJet");
  _library.bindBranch(CleanFatJet_pt, "CleanFatJet_pt");
  _library.bindBranch(CleanFatJet_eta, "CleanFatJet_eta");
  _library.bindBranch(CleanFatJet_phi, "CleanFatJet_phi");
  _library.bindBranch(CleanFatJet_mass, "CleanFatJet_mass");

   _library.bindBranch(Wlep_mass, "HM_Wlep_mass_Puppi");
   _library.bindBranch(Wlep_pt, "HM_Wlep_pt_Puppi");
   _library.bindBranch(Wlep_eta, "HM_Wlep_eta_Puppi");
   _library.bindBranch(Wlep_phi, "HM_Wlep_phi_Puppi");
}
