#include "LatinoAnalysis/MultiDraw/interface/TTreeFunction.h"
#include "LatinoAnalysis/MultiDraw/interface/FunctionLibrary.h"

#include "TMath.h"
#include "TLorentzVector.h"
#include <vector>

#include <iostream>



class DeltaR_Ljj : public multidraw::TTreeFunction {
public:
  DeltaR_Ljj();

  char const* getName() const override { return "DeltaR_Ljj"; }
  TTreeFunction* clone() const override { return new DeltaR_Ljj(); }

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
  FloatArrayReader* Lepton_eta;
  FloatArrayReader* Lepton_pt;
  FloatArrayReader* Lepton_phi;


};

DeltaR_Ljj::DeltaR_Ljj() :
  TTreeFunction()
{
}

double
DeltaR_Ljj::evaluate(unsigned)
{

   double DeltaR1 = 0;
   double DeltaR1_max = 100;
   double Index_max = -999;
   for (int ij1 = 0; ij1 < *nCleanJet->Get(); ++ij1){
       double Aphi = TMath::Abs(Lepton_phi->At(0) - CleanJet_phi->At(ij1));
       double dphi = (Aphi < 3.141592653)*Aphi + (Aphi >= 3.141592653)*TMath::Abs(Aphi - 2*3.141592653);
       double deta = TMath::Abs(Lepton_eta->At(0) - CleanJet_eta->At(ij1));
       double dr = TMath::Abs(Lepton_eta->At(0) - CleanJet_eta->At(ij1));
  	if( dr <= DeltaR1_max){
		DeltaR1_max = dr;
		Index_max = ij1;
          }
	 
       //check FatJet and vbfjet are not overlapping
   
	}
	if (Index_max >= 0){
	return Index_max;
	}else{
	return -99;
}
}   

void
DeltaR_Ljj::bindTree_(multidraw::FunctionLibrary& _library)
{
  _library.bindBranch(nCleanJet, "nCleanJet");
  _library.bindBranch(CleanJet_pt, "CleanJet_pt");
  _library.bindBranch(CleanJet_eta, "CleanJet_eta");
  _library.bindBranch(CleanJet_phi, "CleanJet_phi");
  _library.bindBranch(CleanJet_jetIdx, "CleanJet_jetIdx");
  _library.bindBranch(Jet_mass, "Jet_mass");
  _library.bindBranch(Lepton_eta,"Lepton_eta");
  _library.bindBranch(Lepton_pt,"Lepton_pt");
  _library.bindBranch(Lepton_phi,"Lepton_phi");
}
