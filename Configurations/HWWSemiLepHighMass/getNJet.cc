#include "LatinoAnalysis/MultiDraw/interface/TTreeFunction.h"
#include "LatinoAnalysis/MultiDraw/interface/FunctionLibrary.h"

#include "TMath.h"
#include "TLorentzVector.h"
#include <vector>

#include <iostream>



class getNJet : public multidraw::TTreeFunction {
public:
  getNJet();

  char const* getName() const override { return "getNJet"; }
  TTreeFunction* clone() const override { return new getNJet(); }

 // virtual void beginEvent(long long iEntry) override;

  unsigned getNdata() override { return 1; }
  double evaluate(unsigned) override;

protected:
  void bindTree_(multidraw::FunctionLibrary&) override;


  UIntValueReader* nCleanJet;
  FloatArrayReader* CleanJet_pt;
  FloatArrayReader* CleanJet_eta;
  FloatArrayReader* CleanJet_phi;
  IntArrayReader* CleanJet_jetIdx;
  FloatArrayReader* Jet_mass;

  IntValueReader* HM_idx_j1;
  IntValueReader* HM_idx_j2;

  IntValueReader* idxWfat;

  UIntValueReader* nCleanFatJet;
  FloatArrayReader* CleanFatJet_pt;
  FloatArrayReader* CleanFatJet_eta;
  FloatArrayReader* CleanFatJet_phi;
  FloatArrayReader* CleanFatJet_mass;

  FloatValueReader* Wlep_mass;
  FloatValueReader* Wlep_pt;
  FloatValueReader* Wlep_eta;
  FloatValueReader* Wlep_phi;

};

getNJet::getNJet() :
  TTreeFunction()
{
}

double
getNJet::evaluate(unsigned)
{
   int idx_j1{*HM_idx_j1->Get()};      
   int idx_j2{*HM_idx_j2->Get()};      

   int idx_fat{*idxWfat->Get()};

   TLorentzVector lep;
   lep.SetPtEtaPhiM(*Wlep_pt->Get(), *Wlep_eta->Get(), *Wlep_phi->Get(), *Wlep_mass->Get());        
    //std::cout << "nCleanJet: " << *nCleanJet->Get() << std::endl;
   if (*nCleanJet->Get() < 2)
     return -1.;    
   
  /* float mjjmax = 0;
   TLorentzVector vbfj1, vbfj2;
   bool foundVBFjets = false;
   for (int ij1 = 0; ij1 < *nCleanJet->Get()-1; ++ij1){
     for (int ij2 = ij1+1; ij2 < *nCleanJet->Get(); ++ij2){     
      if (ij1 == idx_j1 || ij1 == idx_j2 || ij2 == idx_j1 || ij2 == idx_j2) continue;
       TLorentzVector tmpj1, tmpj2;
       tmpj1.SetPtEtaPhiM(CleanJet_pt->At(ij1), CleanJet_eta->At(ij1), CleanJet_phi->At(ij1), Jet_mass->At(CleanJet_jetIdx->At(ij1)));
       tmpj2.SetPtEtaPhiM(CleanJet_pt->At(ij2), CleanJet_eta->At(ij2), CleanJet_phi->At(ij2), Jet_mass->At(CleanJet_jetIdx->At(ij2)));
   
       //check FatJet and vbfjet are not overlapping
   
	float DeltaR1 = 0;
	float DeltaR2 = 0;
	int nR1min = 0;
	int nR2min = 0;
	int nRBmin = 0;
        if (idx_fat >= 0){
      	TLorentzVector jfat;
      	jfat.SetPtEtaPhiM(CleanFatJet_pt->At(idx_fat), CleanFatJet_eta->At(idx_fat), CleanFatJet_phi->At(idx_fat), CleanFatJet_mass->At(idx_fat));
	DeltaR1 = sqrt( pow(tmpj1.Phi() - CleanFatJet_phi->At(idx_fat),2) + pow(tmpj1.Eta() - CleanFatJet_eta->At(idx_fat),2));
	DeltaR2 = sqrt( pow(tmpj2.Phi() - CleanFatJet_phi->At(idx_fat),2) + pow(tmpj2.Eta() - CleanFatJet_eta->At(idx_fat),2));
	if ((DeltaR1 < 0.8) || (DeltaR2 < 0.8))continue;
	}
	if ( tmpj1.Pt()  > 30 && tmpj2.Pt() > 30 && idx_fat >= 0) { 
	     foundVBFjets= true;
	     return 1.;
	}
	
     }       
   }
 //  std::cout << foundVBFjets << std::endl;
  // std::cout << "##################" << std::endl;
   bool cross_check = false;

*/ TLorentzVector vbfj1_res, vbfj2_res;
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
      	TLorentzVector jfat;
      	jfat.SetPtEtaPhiM(CleanFatJet_pt->At(idx_fat), CleanFatJet_eta->At(idx_fat), CleanFatJet_phi->At(idx_fat), CleanFatJet_mass->At(idx_fat));
        if ( tmpj.DeltaR(jfat) < 0.8) continue;
     }
     nVBF_boo+=1; 
     if (nVBF_boo == 1)
       vbfj1_boo = tmpj;
     else if (nVBF_boo == 2)
       vbfj2_boo = tmpj;
   }  


  if( idx_fat >= 0 && nVBF_boo == 2){
//	foundVBFjets = true;
	return 1;
}

//  std::cout << cross_check << std::endl;
 // std::cout <<"___________________________"<< std::endl;


  
 return -1.;
	
}   

void
getNJet::bindTree_(multidraw::FunctionLibrary& _library)
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
   _library.bindBranch(Wlep_phi, "HM_Wlep_phi_Puppi");                                                                                                                                                                                                                                                                                                                                                                      }
