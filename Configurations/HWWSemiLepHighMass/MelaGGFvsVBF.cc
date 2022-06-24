#include "LatinoAnalysis/MultiDraw/interface/TTreeFunction.h"
#include "LatinoAnalysis/MultiDraw/interface/FunctionLibrary.h"
#include "JHUGenMELA/MELA/interface/Mela.h"

#include "TMath.h"
#include "TLorentzVector.h"
#include <vector>

#include <iostream>

class getconstant {
public:
  //! constructor
  getconstant(TString baseloc);
  
  virtual ~getconstant() {}
  
  float CforHM(float mass);

  TString loc;

  TFile* f_DjjVBF;
  TSpline3 *DjjVBF;


};


getconstant::getconstant(TString baseloc) { 
  loc = baseloc;
  f_DjjVBF = TFile::Open(""+loc+"/SmoothKDConstant_m4l_DjjVBF_13TeV.root","read");
  DjjVBF = (TSpline3*)f_DjjVBF->Get("sp_gr_varReco_Constant_Smooth");
}


float getconstant::CforHM(float mass){


  if(mass<0)mass=0;
  if(mass>12000)mass=12000;

  float cVBF = DjjVBF->Eval(mass);
  return cVBF;
}


class MelaGGFvsVBF : public multidraw::TTreeFunction {
public:
  MelaGGFvsVBF();
  MelaGGFvsVBF(unsigned int i, const char* baseconstants);

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
  static getconstant* _constants;


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
getconstant* MelaGGFvsVBF::_constants{};

MelaGGFvsVBF::MelaGGFvsVBF() :
  TTreeFunction()
{
  _mela = new Mela(14., 125.);
}

MelaGGFvsVBF::MelaGGFvsVBF(unsigned int i, const char* baseconstants) :
  TTreeFunction()
{
  _mela = new Mela(14., 125.);
  _which = i;
  _constants = new getconstant(baseconstants);
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
 
   int idx_j1{*HM_idx_j1->Get()};      
   int idx_j2{*HM_idx_j2->Get()};      

   int idx_fat{*idxWfat->Get()};
   TLorentzVector jfat;
   if (idx_fat >= 0)
    jfat.SetPtEtaPhiM(CleanFatJet_pt->At(idx_fat), CleanFatJet_eta->At(idx_fat), CleanFatJet_phi->At(idx_fat), CleanFatJet_mass->At(idx_fat));

   TLorentzVector lep;
   lep.SetPtEtaPhiM(*Wlep_pt->Get(), *Wlep_eta->Get(), *Wlep_phi->Get(), *Wlep_mass->Get());
   //std::cout << "nCleanJet: " << *nCleanJet->Get() << std::endl;
   // nothing to do if we don't have at least 2 jets 
   if (*nCleanJet->Get() < 2)
    return;
   /*
   // loop over the jets and find the pair with the highest invariant mass
   float mjjmax = 0;
   TLorentzVector vbfj1, vbfj2;
   bool foundVBFjets = false;
   for (int ij1 = 0; ij1 < *nCleanJet->Get()-1; ++ij1){
     for (int ij2 = ij1+1; ij2 < *nCleanJet->Get(); ++ij2){
       // skip if it is one of the two jets from the resolved candidate 
       if (ij1 == idx_j1 || ij1 == idx_j2 || ij2 == idx_j1 || ij2 == idx_j2) continue;
       // we also skip jets if they overlap with the boosted candidate
       TLorentzVector tmpj1, tmpj2;
       tmpj1.SetPtEtaPhiM(CleanJet_pt->At(ij1), CleanJet_eta->At(ij1), CleanJet_phi->At(ij1), Jet_mass->At(CleanJet_jetIdx->At(ij1)));
       tmpj2.SetPtEtaPhiM(CleanJet_pt->At(ij2), CleanJet_eta->At(ij2), CleanJet_phi->At(ij2), Jet_mass->At(CleanJet_jetIdx->At(ij2)));
       if (tmpj1.Pt() < 30 || tmpj2.Pt() < 30) continue;
       if (idx_fat >= 0) {
        if ( (tmpj1.DeltaR(jfat) < 0.8) || (tmpj2.DeltaR(jfat) < 0.8) ) continue;
       } 
       double tmpmjj = (tmpj1+tmpj2).M();
       if (tmpmjj > mjjmax ){
          foundVBFjets= true;
          mjjmax = tmpmjj;
          vbfj1 = tmpj1;
          vbfj2 = tmpj2;
       }
     }       
   }
   */
   // loop over the jets and find the two leading not overlapping with the candidate
   TLorentzVector vbfj1_res, vbfj2_res;
   int nVBF_res = 0;
   for (int ij = 0; ij < *nCleanJet->Get() && nVBF_res <=2 ; ++ij){
     if (ij == idx_j1 || ij == idx_j2) continue;
     TLorentzVector tmpj;
     tmpj.SetPtEtaPhiM(CleanJet_pt->At(ij), CleanJet_eta->At(ij), CleanJet_phi->At(ij), Jet_mass->At(CleanJet_jetIdx->At(ij)));
     if (tmpj.Pt() < 30) continue;
     nVBF_res+=1; 
     if (nVBF_res == 1)
       vbfj1_res = tmpj;
     else if (nVBF_res == 2)
       vbfj2_res = tmpj;
   }    
   
   TLorentzVector vbfj1_boo, vbfj2_boo;
   int nVBF_boo = 0;
   for (int ij = 0; ij < *nCleanJet->Get() && nVBF_boo <=2 ; ++ij){
     TLorentzVector tmpj;
     tmpj.SetPtEtaPhiM(CleanJet_pt->At(ij), CleanJet_eta->At(ij), CleanJet_phi->At(ij), Jet_mass->At(CleanJet_jetIdx->At(ij)));
     if (tmpj.Pt() < 30) continue;
     if (idx_fat >= 0) {
        if ( tmpj.DeltaR(jfat) < 0.8) continue;
     }
     nVBF_boo+=1; 
     if (nVBF_boo == 1)
       vbfj1_boo = tmpj;
     else if (nVBF_boo == 2)
       vbfj2_boo = tmpj;
   }    

   // if they are not correctly ordered in pT, reorder. Mela requires this
   //vbfj1.Print();
   //vbfj2.Print();
   SimpleParticleCollection_t daughter_coll;
   // we have a resolved candidate
   if (idx_j1>=0 && nVBF_res == 2){
      SimpleParticleCollection_t associated_coll;       
      associated_coll.push_back(SimpleParticle_t(0,vbfj1_res.Pt()>vbfj2_res.Pt() ? vbfj1_res : vbfj2_res));
      associated_coll.push_back(SimpleParticle_t(0,vbfj1_res.Pt()>vbfj2_res.Pt() ? vbfj2_res : vbfj1_res));
      TLorentzVector j1;
      j1.SetPtEtaPhiM(CleanJet_pt->At(idx_j1), CleanJet_eta->At(idx_j1), CleanJet_phi->At(idx_j1), Jet_mass->At(CleanJet_jetIdx->At(idx_j1)));
      TLorentzVector j2;
      j2.SetPtEtaPhiM(CleanJet_pt->At(idx_j2), CleanJet_eta->At(idx_j2), CleanJet_phi->At(idx_j2), Jet_mass->At(CleanJet_jetIdx->At(idx_j2)));
      TLorentzVector h = lep+j1+j2;
      float CforHM = _constants->CforHM(h.M());
      //std::cout << CforHM << std::endl; 
      // reset to make sure...
      _mela->resetInputEvent();
      daughter_coll.push_back(SimpleParticle_t(25,h));
      _mela->setCandidateDecayMode(TVar::CandidateDecay_Stable);
      _mela->setInputEvent(&daughter_coll, &associated_coll, 0, 0);
      _mela->setCurrentCandidateFromIndex(0);
      float me_vbf = 0.;
      float me_ggH = 0.;
      _mela->setProcess(TVar::HSMHiggs, TVar::JHUGen, TVar::JJVBF);
      _mela->setMelaHiggsMassWidth(h.M(), 10, 0);
      _mela->computeProdP(me_vbf, true);
      _mela->setProcess(TVar::HSMHiggs, TVar::JHUGen, TVar::JJQCD);
      _mela->setMelaHiggsMassWidth(h.M(), 10, 0);
      _mela->computeProdP(me_ggH, true);

      //vbfj1.Print();
      //vbfj2.Print();
      //std::cout << "me_vbf: " << me_vbf << " me_ggH: " << me_ggH << std::endl;
      discriminatorResolved = me_vbf/(me_vbf+CforHM*me_ggH);  
   }
   // we have a boosted candidate

if (idx_fat >= 0 && nVBF_boo ==2){

      SimpleParticleCollection_t associated_coll;       
      associated_coll.push_back(SimpleParticle_t(0,vbfj1_boo.Pt()>vbfj2_boo.Pt() ? vbfj1_boo : vbfj2_boo));
      associated_coll.push_back(SimpleParticle_t(0,vbfj1_boo.Pt()>vbfj2_boo.Pt() ? vbfj2_boo : vbfj1_boo));
      TLorentzVector h = lep+jfat;
      float CforHM = _constants->CforHM(h.M());  
      daughter_coll.push_back(SimpleParticle_t(25,h));
      // important to reset here, in case we have both resolved and boosted candidates
      _mela->resetInputEvent();
      _mela->setCandidateDecayMode(TVar::CandidateDecay_Stable);
      _mela->setInputEvent(&daughter_coll, &associated_coll, 0, 0);
      _mela->setCurrentCandidateFromIndex(0);
      float me_vbf = 0.;
      float me_ggH = 0.;
      _mela->setProcess(TVar::HSMHiggs, TVar::JHUGen, TVar::JJVBF);
      _mela->setMelaHiggsMassWidth(h.M(), 10, 0);
      _mela->computeProdP(me_vbf, true);
      _mela->setProcess(TVar::HSMHiggs, TVar::JHUGen, TVar::JJQCD);
      _mela->setMelaHiggsMassWidth(h.M(), 10, 0);
      _mela->computeProdP(me_ggH, true);
      discriminatorBoosted = me_vbf/(me_vbf+CforHM*me_ggH);    
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
