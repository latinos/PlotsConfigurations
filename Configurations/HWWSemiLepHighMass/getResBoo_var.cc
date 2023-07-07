#include "LatinoAnalysis/MultiDraw/interface/TTreeFunction.h"
#include "LatinoAnalysis/MultiDraw/interface/FunctionLibrary.h"

#include "TMath.h"
#include <vector>
#include "Math/Vector4D.h"                                              
#include <Math/GenVector/LorentzVector.h>                                              
#include <iostream>


#ifndef getResBoo_var_HH
#define getResBoo_var_HH

class getResBoo_var : public multidraw::TTreeFunction {
public:
  getResBoo_var(unsigned int var);
   
  char const* getName() const override { return "getResBoo_var"; }
  TTreeFunction* clone() const override { return new getResBoo_var(_var); }

  unsigned getNdata() override { return 1; }

  double evaluate(unsigned) override;
 

protected:
  unsigned int _var;
  void bindTree_(multidraw::FunctionLibrary&) override;

  UIntValueReader* nFatJet{};

  IntArrayReader* Lep_Id;
  FloatValueReader* Lep_pt{}; 
  FloatValueReader* Lep_eta{};	
  FloatValueReader* Lep_phi{};
  FloatValueReader* Lep_mass{};
  FloatValueReader* MET_pt{};	  
  FloatArrayReader* SingLep_pt{}; 
  FloatArrayReader* SingLep_eta{};	
  FloatArrayReader* SingLep_phi{};
  UIntValueReader*  nSingLepton{};
  FloatArrayReader* FatJet_pt{};	  
  FloatArrayReader* FatJet_eta{};	   
  FloatArrayReader* FatJet_phi{};
  FloatArrayReader* FatJet_mass{};	  
  FloatArrayReader* FatJet_msof{};	  
  IntArrayReader*   FatJet_jetId{};	  
  FloatValueReader* WJJ_pt{};	  
  FloatValueReader* WJJ_eta{};	   
  FloatValueReader* WJJ_phi{};
  FloatValueReader* WJJ_mass{};	  
  IntValueReader* CJet1_index{};
  IntValueReader* CJet2_index{};
  FloatValueReader* Wlep_mt{}; 
  double isRes;
double isBoo;
std::vector <float> mass_H;
 //ROOT::Math::LorentzVector* vJJ_4v;		
  //:ROOT::Math::LorentzVector* vFat_4v;		
};

getResBoo_var::getResBoo_var(unsigned int var) :
 TTreeFunction()
{
    _var = var;
}




double
getResBoo_var::evaluate(unsigned)
{
ROOT::Math::PtEtaPhiMVector wLep_4v{
    *Lep_pt->Get(),
    *Lep_eta->Get(),
    *Lep_phi->Get(),
    *Lep_mass->Get()

};		

bool GoodJet_cd = false;
int index_Good_0 = -1;
int index_Good_1 = -1;
int index_Good_2 = -1;
int index_Good_3 = -1;
int last_idx = -1;

const unsigned int nLep{*nSingLepton->Get()};
const unsigned int nJ{*nFatJet->Get()};
double value_used = -1;
double *HiggFat;
isRes = value_used;
isBoo = value_used;
 //  std::cout << nJ << std::endl;
 
ROOT::Math::PtEtaPhiMVector wHadJJ_4v{
    *WJJ_pt->Get(),
    *WJJ_eta->Get(),
    *WJJ_phi->Get(),
    *WJJ_mass->Get()

};
	 
//std::cout << isRes<< "ehehe" << std::endl;
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
	if(FatJet_msof->At(ix) < 55 || FatJet_msof->At(ix) > 115){
	GoodJet = false;
	}

	if(GoodJet == true){
		for(unsigned int jx{0}; jx < nLep; jx++) {
			if(sqrt( pow((FatJet_eta->At(ix) - SingLep_eta->At(jx)),2) + pow((FatJet_phi->At(ix) - SingLep_phi->At(jx)),2)) < 0.8){
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
	if (GoodJet_cd == true){
		  if(index_Good_0 >= 0){ jx = 0;
                  }else if(index_Good_1 >= 1){jx = 1;
                  }else if(index_Good_2 >= 2){jx = 2;
                  }else if(index_Good_3 >= 3){jx = 3;
                  }else{ jx = last_idx;}
	
    const float Wfat_pt   = FatJet_pt->At(jx);
    const float Wfat_eta  = FatJet_eta->At(jx);
    		ROOT::Math::PtEtaPhiMVector wHad_4v{
      			Wfat_pt,
      			Wfat_eta,
      			FatJet_phi->At(jx),
     			FatJet_mass->At(jx)
 	 };

    double HfatM{(wHad_4v + wLep_4v).M()};
    double HovFat = min( Wfat_pt, *Lep_pt->Get()  )/ HfatM;
 //   double lepovM = *Lep_pt->Get() / HfatM;

		if (_var == 0) return HfatM;
		if (_var == 1) return HovFat;
   //		if(_var == 4) return lepovM;
  
    
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


if(( *CJet1_index->Get() != -1 ) && (*CJet2_index->Get() != -1)){
 double HjjM{(wHadJJ_4v + wLep_4v).M()};	  
    isRes= 0;
double Hovjj = min(*WJJ_pt->Get(), *Lep_pt->Get() ) / HjjM;
double jjovM = *WJJ_pt->Get() / HjjM;
double lepovM = *Lep_pt->Get() / HjjM;
   if(_var == 2)	return HjjM;
   if(_var == 3) 	return Hovjj;
   if(_var == 4)	return lepovM;
//   if(_var == 5)	return jjovM;
    if((*WJJ_pt->Get() > 40 ) && (*WJJ_pt->Get() / HjjM > 0.35) && ( *MET_pt->Get() > 30)) {
        isRes = 1;
	if( isBoo == 1){
	   isRes =2;
//		std::cout << HjjM << " vs " << *HiggFat << std::endl;
	 //return *WJJ_mass->Get();
	}
    }
}
return -999;
//return *Lep_phi->Get(); 

}

void 
getResBoo_var::bindTree_(multidraw::FunctionLibrary& _library)
{
_library.bindBranch(nFatJet, "nFatJet"); 
_library.bindBranch(Lep_Id, "Lepton_pdgId"); 
_library.bindBranch(Lep_pt, "HM_Wlep_pt_Puppi");
_library.bindBranch(Lep_eta, "HM_Wlep_eta_Puppi");
_library.bindBranch(Lep_phi, "HM_Wlep_phi_Puppi");
_library.bindBranch(Lep_mass, "HM_Wlep_mass_Puppi");
_library.bindBranch(SingLep_pt, "Lepton_pt");
_library.bindBranch(SingLep_eta, "Lepton_eta");
_library.bindBranch(SingLep_phi, "Lepton_phi");
_library.bindBranch(nSingLepton, "nLepton");  
_library.bindBranch(MET_pt, "PuppiMET_pt");
_library.bindBranch(FatJet_pt, "FatJet_pt");
_library.bindBranch(FatJet_eta, "FatJet_eta");
_library.bindBranch(FatJet_phi, "FatJet_phi");
_library.bindBranch(FatJet_msof, "FatJet_msoftdrop_nom");
_library.bindBranch(FatJet_mass, "FatJet_mass_nom");
_library.bindBranch(FatJet_jetId, "FatJet_jetId");
_library.bindBranch(WJJ_pt, "HM_Whad_pt");
_library.bindBranch(WJJ_eta, "HM_Whad_eta");
_library.bindBranch(WJJ_phi, "HM_Whad_phi");
_library.bindBranch(WJJ_mass, "HM_Whad_mass");
_library.bindBranch(CJet1_index, "HM_idx_j1");
_library.bindBranch(CJet2_index, "HM_idx_j2");
_library.bindBranch(Wlep_mt, "HM_Wlep_mt");
}
#endif
