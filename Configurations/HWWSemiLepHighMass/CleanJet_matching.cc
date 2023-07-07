#include "LatinoAnalysis/MultiDraw/interface/TTreeFunction.h"
#include "LatinoAnalysis/MultiDraw/interface/FunctionLibrary.h"

#include "TMath.h"
#include <vector>
#include "Math/Vector4D.h"                                              
#include <Math/GenVector/LorentzVector.h>                                              
#include <iostream>
#include <string>


#ifndef CleanJet_matching_HH
#define CleanJet_matching_HH

class CleanJet_matching : public multidraw::TTreeFunction {
public:
  CleanJet_matching(unsigned int var);
   
  char const* getName() const override { return "CleanJet_matching"; }
  TTreeFunction* clone() const override { return new CleanJet_matching(_var); }

  unsigned getNdata() override { return 1; }

  double evaluate(unsigned) override;
 

protected:
  unsigned int _var;
  void bindTree_(multidraw::FunctionLibrary&) override;


  UIntValueReader*  nFatJet{};
  IntArrayReader*   Lep_Id;
  FloatArrayReader* Lep_pt{}; 
  FloatArrayReader* Lep_eta{};	
  FloatArrayReader* Lep_phi{};
  UIntValueReader*  nLepton{};
  FloatValueReader* MET_pt{};	  
  UIntValueReader*  nCleanJet{};
  FloatArrayReader* CleanJet_pt{};	  
  FloatArrayReader* CleanJet_eta{};	   
  FloatArrayReader* CleanJet_phi{};
  FloatArrayReader* Jet_mass{};	  
  IntArrayReader*   CleanJet_jetIdx{};	  
  std::vector<float> vector_jets{};
//  void setValues();
//  double isRes;
//double isBoo;
//std::vector <float> mass_H;
 //ROOT::Math::LorentzVector* vJJ_4v;		
  //:ROOT::Math::LorentzVector* vFat_4v;		
};

CleanJet_matching::CleanJet_matching(unsigned int var):
  TTreeFunction(){
_var = var;
}



double
CleanJet_matching::evaluate(unsigned)
{

const unsigned int nJet{*nCleanJet->Get()};
const unsigned int nLep{*nLepton->Get()};
bool GoodJet_cd = false;

for(unsigned int jx{0}; jx < nJet; jx++) {
	if(sqrt( pow((Lep_eta->At(0) - CleanJet_eta->At(jx)),2) + pow((Lep_phi->At(0) - CleanJet_phi->At(jx)),2)) < 0.4){
		GoodJet_cd = true;
		break;	
}
}

if( GoodJet_cd == true){
				 	 
	return 0.  ;
	}else{
	return 1.;
}
}

void 
CleanJet_matching::bindTree_(multidraw::FunctionLibrary& _library)
{
_library.bindBranch(nFatJet, "nFatJet"); 
_library.bindBranch(Lep_Id, "Lepton_pdgId"); 
_library.bindBranch(Lep_pt, "Lepton_pt");
_library.bindBranch(Lep_eta, "Lepton_eta");
_library.bindBranch(Lep_phi, "Lepton_phi");
_library.bindBranch(nLepton, "nLepton");
_library.bindBranch(MET_pt, "PuppiMET_pt");
_library.bindBranch(nCleanJet, "nCleanJet"); 
_library.bindBranch(CleanJet_pt, "CleanJet_pt");
_library.bindBranch(CleanJet_eta, "CleanJet_eta");
_library.bindBranch(CleanJet_phi, "CleanJet_phi");
_library.bindBranch(Jet_mass, "Jet_mass");
_library.bindBranch(CleanJet_jetIdx, "CleanJet_jetIdx");
}
#endif
