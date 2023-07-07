#include "LatinoAnalysis/MultiDraw/interface/TTreeFunction.h"
#include "LatinoAnalysis/MultiDraw/interface/FunctionLibrary.h"

#include "TMath.h"
#include <vector>
#include "Math/Vector4D.h"                                              
#include <Math/GenVector/LorentzVector.h>                                              
#include <iostream>


#ifndef FatJet_matching_HH
#define FatJet_matching_HH

class FatJet_matching : public multidraw::TTreeFunction {
public:
  FatJet_matching(unsigned int var);
   
  char const* getName() const override { return "FatJet_matching"; }
  TTreeFunction* clone() const override { return new FatJet_matching(_var); }

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
  IntArrayReader* GenPart_pdgId{}; 
  FloatArrayReader* GenPart_eta{};
  FloatArrayReader* GenPart_phi{};
  UIntValueReader* nGenPart{};
  double isRes;
  double isBoo;
  std::vector <float> mass_H;
};

FatJet_matching::FatJet_matching(unsigned int var) :
 TTreeFunction()
{
    _var = var;
}




double
FatJet_matching::evaluate(unsigned)
{

bool GoodJet_cd = false;
int index_Good_0 = -1;
int index_Good_1 = -1;
int index_Good_2 = -1;
int index_Good_3 = -1;
int last_idx = -1;

const unsigned int nLep{*nLepton->Get()};
const unsigned int nJ{*nFatJet->Get()};
const unsigned int nGen{*nGenPart->Get()};
for (unsigned int ix{0}; ix < nJ; ix++) {
	bool GoodJet = true;
	
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
		}else{
			GoodJet_cd = true;
			last_idx = ix;
		}
	}
}
unsigned int jx ;
double deltaR = -10.0;
double deltaR_m = 100.0;
double ind_m = -10;
	if (GoodJet_cd == true){
		  if(index_Good_0 >= 0){ jx = 0;
                  }else if(index_Good_1 >= 1){jx = 1;
                  }else if(index_Good_2 >= 2){jx = 2;
                  }else if(index_Good_3 >= 3){jx = 3;
                  }else{ jx = last_idx;}
		for (unsigned int px{0}; px < nGen; px++) {
			if( abs(GenPart_pdgId->At(px))  != 24){
			continue; 
			}else{	
				deltaR = sqrt(pow( (FatJet_eta->At(jx) - GenPart_eta->At(px)),2) + pow( (FatJet_phi->At(jx) - GenPart_phi->At(px)),2));
				if (deltaR < deltaR_m){
					deltaR_m = deltaR;
					ind_m = px;
				}
			}	
		}
}
	
		if (_var == 0) return deltaR_m;
  

return -999;

}
    

 /*   ROOT::Math::PtEtaPhiMVector wHad_4v{
      Wfat_pt,
      Wfat_eta,
      CleanFatJet_phi->At(ix),
      CleanFatJet_mass->At(ix)
    };

    double HfatM{(wHad_4v + wLep_4v).M()};*/

//unsigned int jx ;
//double deltaR = -10.0;
//double deltaR_m = 100.0;
//double ind_m = -10;
//	cout << nGen << endl;
////if (GoodJet_cd == true){
////        if(index_Good_0 >= 0){ jx = 0;
////        }else if(index_Good_1 >= 1){jx = 1;
////        }else if(index_Good_2 >= 2){jx = 2;
////        }else if(index_Good_3 >= 3){jx = 3;
////        }else{ jx = last_idx;}
////	for (unsigned int px{0}; px < nGen; px++) {
////		if( abs(GenPart_pdgId->At(px))  != 24){
////		cout << GenPart_pdgId->At(px) << endl;
////		continue; 
////		}else{	
////			deltaR = sqrt(pow( (FatJet_eta->At(jx) - GenPart_eta->At(px)),2) + pow( (FatJet_phi->At(jx) - GenPart_phi->At(px)),2));
////			cout << deltaR << endl;	
////			if (deltaR < deltaR_m){
////				deltaR_m = deltaR;
////				ind_m = px;
////			}
////		}	
////	}
////}


void 
FatJet_matching::bindTree_(multidraw::FunctionLibrary& _library)
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
_library.bindBranch(FatJet_mass, "FatJet_mass_nom");
_library.bindBranch(FatJet_jetId, "FatJet_jetId");
_library.bindBranch(GenPart_pdgId, "GenPart_pdgId"); 
_library.bindBranch(GenPart_eta, "GenPart_eta");
_library.bindBranch(GenPart_phi, "GenPart_phi");
_library.bindBranch(nGenPart, "nGenPart");
}
#endif
