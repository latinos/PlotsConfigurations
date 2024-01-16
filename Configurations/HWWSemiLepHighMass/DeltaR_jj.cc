#include "LatinoAnalysis/MultiDraw/interface/TTreeFunction.h"
#include "LatinoAnalysis/MultiDraw/interface/FunctionLibrary.h"

#include "TMath.h"
#include "TLorentzVector.h"
#include <vector>

#include <iostream>



class DeltaR_jj : public multidraw::TTreeFunction {
public:
  DeltaR_jj();

  char const* getName() const override { return "DeltaR_jj"; }
  TTreeFunction* clone() const override { return new DeltaR_jj(); }

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
};

DeltaR_jj::DeltaR_jj() :
  TTreeFunction()
{
}

double
DeltaR_jj::evaluate(unsigned)
{
   int idx_j1{*HM_idx_j1->Get()};      
   int idx_j2{*HM_idx_j2->Get()};      

   int idx_fat{*idxWfat->Get()};

   float DeltaR1 = 0;
   bool foundVBFjets = false;
   for (int ij1 = 0; ij1 < *nCleanJet->Get()-1; ++ij1){
     for (int ij2 = ij1+1; ij2 < *nCleanJet->Get(); ++ij2){     
      if ((ij1 == idx_j1 && ij2 == idx_j2 )||( ij2 == idx_j1 && ij1 == idx_j2)){
       TLorentzVector tmpj1, tmpj2;
       tmpj1.SetPtEtaPhiM(CleanJet_pt->At(ij1), CleanJet_eta->At(ij1), CleanJet_phi->At(ij1), Jet_mass->At(CleanJet_jetIdx->At(ij1)));
       tmpj2.SetPtEtaPhiM(CleanJet_pt->At(ij2), CleanJet_eta->At(ij2), CleanJet_phi->At(ij2), Jet_mass->At(CleanJet_jetIdx->At(ij2)));
   
       //check FatJet and vbfjet are not overlapping
   
	DeltaR1 = sqrt( pow(tmpj1.Phi() - tmpj2.Phi(), 2) + pow(tmpj1.Eta() - tmpj2.Eta(),2));
	return DeltaR1;
	}
	
     }       
   }
 return -999;
	
}   

void
DeltaR_jj::bindTree_(multidraw::FunctionLibrary& _library)
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
                                                                                                                                                                                                           }
