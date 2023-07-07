#include "LatinoAnalysis/MultiDraw/interface/TTreeFunction.h"
#include "LatinoAnalysis/MultiDraw/interface/FunctionLibrary.h"

#include "TMath.h"
#include <vector>
#include "Math/Vector4D.h"                                              
#include <Math/GenVector/LorentzVector.h>                                              
#include <iostream>
#include <string>


#ifndef FatJet_JetExcluding_HH
#define FatJet_JetExcluding_HH

class FatJet_JetExcluding : public multidraw::TTreeFunction {
public:
  FatJet_JetExcluding();
   
  char const* getName() const override { return "FatJet_JetExcluding"; }
  TTreeFunction* clone() const override { 
        return new FatJet_JetExcluding(); 
    }
  //TTreeFunction* clone() const override { return new FatJet_JetExcluding(n_vec); }

    unsigned getNdata() override { return vector_jets.size(); } // nominal, stat_up, stat_do, jetsel
    int getMultiplicity() override { return 1; }
    void beginEvent(long long) override;
    double evaluate(unsigned) override;
 

protected:
  void bindTree_(multidraw::FunctionLibrary&) override;


  UIntValueReader*  nFatJet{};
  IntArrayReader*   Lep_Id;
  FloatArrayReader* Lep_pt{}; 
  FloatArrayReader* Lep_eta{};	
  FloatArrayReader* Lep_phi{};
  UIntValueReader*  nLepton{};
  FloatValueReader* MET_pt{};	  
  FloatArrayReader* FatJet_pt{};	  
  FloatArrayReader* FatJet_eta{};	   
  FloatArrayReader* FatJet_phi{};
  FloatArrayReader* FatJet_tau1{};	  
  FloatArrayReader* FatJet_mass{};	  
  IntArrayReader*   FatJet_jetId{};	  
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

FatJet_JetExcluding::FatJet_JetExcluding():
  TTreeFunction(){
}

void
FatJet_JetExcluding::beginEvent(long long _iEntry)
{
vector_jets.clear();

const unsigned int nFat{*nFatJet->Get()};
const unsigned int nJet{*nCleanJet->Get()};
const unsigned int nLep{*nLepton->Get()};

bool FatJet_candidate = false;
int count_jet_ov = 0;
std::vector< unsigned int> Fatindex_jet;
std::vector< unsigned int> Cleanindex_jet;
for (unsigned int ix{0}; ix < nFat; ix++) {
	bool GoodJet = true;
	if (FatJet_tau1->At(ix) == 0.0) continue;
	
	if(FatJet_jetId->At(ix) < 0){
	GoodJet = false;
	}
	if(FatJet_pt->At(ix) < 200){
	GoodJet = false;
	}
	if(abs(FatJet_eta->At(ix)) > 2.4){
	GoodJet = false;
	}
	if(FatJet_mass->At(ix) < 55 || FatJet_mass->At(ix) > 115){
	GoodJet = false;
	}

	if(GoodJet == true){
		for(unsigned int jx{0}; jx < nLep; jx++) {
			if(sqrt( pow((FatJet_eta->At(ix) - Lep_eta->At(jx)),2) + pow((FatJet_phi->At(ix) - Lep_phi->At(jx)),2)) < 0.8){
				GoodJet = false;
			}
		}
	}

	if(GoodJet == true){
       		FatJet_candidate = true;
		Fatindex_jet.push_back(ix);
	} 
	if(GoodJet == true){
		for(unsigned int jx{0}; jx < nJet; jx++) {
			if(sqrt( pow((FatJet_eta->At(ix) - CleanJet_eta->At(jx)),2) + pow((FatJet_phi->At(ix) - CleanJet_phi->At(jx)),2)) < 0.8){
				count_jet_ov = count_jet_ov + 1;	
				Cleanindex_jet.push_back(jx);
			}
		}
	}
}
int nonOvpJet = nJet - count_jet_ov;
bool find = false;
for (unsigned int ix{0}; ix < nJet; ix++) {
	bool find = false;
	if(FatJet_candidate == true){
		for(unsigned int jx{0}; jx < Cleanindex_jet.size(); jx++){
			if(ix == Cleanindex_jet[jx]){
				find = true;
			}
		} 	 	
		if (find == true){continue;
		} else{vector_jets.push_back(ix);}	
	}else{	
		vector_jets.push_back(ix);}
} 
//if(FatJet_candidate == true){
//cout << nonOvpJet << endl;
//cout << vector_jets.size() << endl;
//}
			 	 
}

double
FatJet_JetExcluding::evaluate(unsigned iJ)
{
	return vector_jets[iJ] ;
}
void 
FatJet_JetExcluding::bindTree_(multidraw::FunctionLibrary& _library)
{
_library.bindBranch(nFatJet, "nFatJet"); 
_library.bindBranch(Lep_Id, "Lepton_pdgId"); 
_library.bindBranch(Lep_pt, "Lepton_pt");
_library.bindBranch(Lep_eta, "Lepton_eta");
_library.bindBranch(Lep_phi, "Lepton_phi");
_library.bindBranch(nLepton, "nLepton");
_library.bindBranch(MET_pt, "PuppiMET_pt");
_library.bindBranch(FatJet_pt, "FatJet_pt_nom");
_library.bindBranch(FatJet_eta, "FatJet_eta");
_library.bindBranch(FatJet_phi, "FatJet_phi");
_library.bindBranch(FatJet_tau1, "FatJet_tau1");
_library.bindBranch(FatJet_mass, "FatJet_msoftdrop_nom");
_library.bindBranch(FatJet_jetId, "FatJet_jetId");
_library.bindBranch(nCleanJet, "nCleanJet"); 
_library.bindBranch(CleanJet_pt, "CleanJet_pt");
_library.bindBranch(CleanJet_eta, "CleanJet_eta");
_library.bindBranch(CleanJet_phi, "CleanJet_phi");
_library.bindBranch(Jet_mass, "Jet_mass");
_library.bindBranch(CleanJet_jetIdx, "CleanJet_jetIdx");
}
#endif
