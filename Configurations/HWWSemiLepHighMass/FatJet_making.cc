#include "LatinoAnalysis/MultiDraw/interface/TTreeFunction.h"
#include "LatinoAnalysis/MultiDraw/interface/FunctionLibrary.h"

#include "TMath.h"
#include <vector>
#include "Math/Vector4D.h"                                              
#include <Math/GenVector/LorentzVector.h>                                              
#include <iostream>


#ifndef FatJet_making_HH
#define FatJet_making_HH

class FatJet_making : public multidraw::TTreeFunction {
public:
  FatJet_making(unsigned int var);
   
  char const* getName() const override { return "FatJet_making"; }
  TTreeFunction* clone() const override { return new FatJet_making(_var); }

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
  double isRes;
double isBoo;
std::vector <float> mass_H;
 //ROOT::Math::LorentzVector* vJJ_4v;		
  //:ROOT::Math::LorentzVector* vFat_4v;		
};

FatJet_making::FatJet_making(unsigned int var) :
 TTreeFunction()
{
    _var = var;
}




double
FatJet_making::evaluate(unsigned)
{
int count_FJ = 0;
const unsigned int nFat{*nFatJet->Get()};
const unsigned int nJet{*nCleanJet->Get()};
const unsigned int nLep{*nLepton->Get()};
int index_Good_0 = -1;
int index_Good_1 = -1;
int index_Good_2 = -1;
int last_idx = -1;
int count_jet_ov = 0;
bool GoodJet_cd = false;
int index_Good_3 = -1;
for (unsigned int ix{0}; ix < nFat; ix++) {
	bool GoodJet = true;
	if (FatJet_tau1->At(ix) == 0.0) continue;
	
	if(FatJet_jetId->At(ix) < 0){
	GoodJet = false;
	}
	if(FatJet_pt->At(ix) < 200){
	GoodJet = false;
	}
	if(abs(FatJet_eta->At(ix)) < 2.4){
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
		if( ix == 0){
			GoodJet_cd = true;
			index_Good_0 = 0;
		}else if(ix == 1){
			GoodJet_cd = true;
			index_Good_1 = 1;
		}else if(ix == 2){
			GoodJet_cd = true;
			index_Good_2 = 2;
		}else if(ix == 3){
			GoodJet_cd = true;
			index_Good_3 = 3;
		}
		}else{
			GoodJet_cd = true;
			last_idx = ix;
		}
 	//vector<unsigned int> v_jets;  	
 	//vector<unsigned int> v_jets_0;  	
        
	if(GoodJet == true){
		for(unsigned int jx{0}; jx < nJet; jx++) {
			if(sqrt( pow((FatJet_eta->At(ix) - CleanJet_eta->At(jx)),2) + pow((FatJet_phi->At(ix) - CleanJet_phi->At(jx)),2)) < 0.8){
				count_jet_ov = count_jet_ov + 1;	
			}
		}
	}
	if (GoodJet_cd == true){
		count_FJ = count_FJ +1 ;
	}		
} 
	
	if(_var==0){
		return count_FJ;
	}	

	if(_var==0){
		if (GoodJet_cd == true){
		return 1;
		}else{
		return -1;
              }
	}	
	if(_var==0){
		if (GoodJet_cd == true){
		return 1;
		}else{
		return -1;
              }
	}	

	if(_var==0){
		if (GoodJet_cd == true){
		return 1;
		}else{
		return -1;
              }
	}	
	if(_var==1){
		if (GoodJet_cd == true){
		return count_jet_ov;
		}else{
		return -100;
              }
	}
	if(_var==2){
		if (GoodJet_cd == true){
			if(index_Good_0 >= 0){
				return 0;
			}else if(index_Good_1 >= 1){
				return 1;
			}else if(index_Good_2 >= 2){
				return 2;
			}else if(index_Good_3 >= 3){
				return 3;
		 	}else{ return last_idx;}		
		}else{
		return -10;
              }
	}	
return -10;

}

void 
FatJet_making::bindTree_(multidraw::FunctionLibrary& _library)
{
_library.bindBranch(nFatJet, "nFatJet"); 
_library.bindBranch(Lep_Id, "Lepton_pdgId"); 
_library.bindBranch(Lep_pt, "Lepton_pt");
_library.bindBranch(Lep_eta, "Lepton_eta");
_library.bindBranch(Lep_phi, "Lepton_phi");
_library.bindBranch(nLepton, "nLepton");
_library.bindBranch(MET_pt, "PuppiMET_pt");
_library.bindBranch(FatJet_pt, "FatJet_pt");
_library.bindBranch(FatJet_eta, "FatJet_eta");
_library.bindBranch(FatJet_phi, "FatJet_phi");
_library.bindBranch(FatJet_tau1, "FatJet_tau1");
_library.bindBranch(FatJet_mass, "FatJet_msoftdrop");
_library.bindBranch(FatJet_jetId, "FatJet_jetId");
_library.bindBranch(nCleanJet, "nCleanJet"); 
_library.bindBranch(CleanJet_pt, "CleanJet_pt");
_library.bindBranch(CleanJet_eta, "CleanJet_eta");
_library.bindBranch(CleanJet_phi, "CleanJet_phi");
_library.bindBranch(Jet_mass, "Jet_mass");
_library.bindBranch(CleanJet_jetIdx, "CleanJet_jetIdx");
}
#endif
