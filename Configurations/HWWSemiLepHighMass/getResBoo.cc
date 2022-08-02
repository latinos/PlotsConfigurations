#include "LatinoAnalysis/MultiDraw/interface/TTreeFunction.h"
#include "LatinoAnalysis/MultiDraw/interface/FunctionLibrary.h"

#include "TMath.h"
#include <vector>
#include "Math/Vector4D.h"                                              
#include <Math/GenVector/LorentzVector.h>                                              
#include <iostream>


#ifndef getResBoo_HH
#define getResBoo_HH

class getResBoo : public multidraw::TTreeFunction {
public:
  getResBoo(unsigned int var);
   
  char const* getName() const override { return "getResBoo"; }
  TTreeFunction* clone() const override { return new getResBoo(_var); }

  unsigned getNdata() override { return 1; }

  double evaluate(unsigned) override;
 

protected:
  unsigned int _var;
  void bindTree_(multidraw::FunctionLibrary&) override;

  UIntValueReader* nCleanFatJet{};

  IntArrayReader* Lep_Id;
  FloatValueReader* Lep_pt{}; 
  FloatValueReader* Lep_eta{};	
  FloatValueReader* Lep_phi{};
  FloatValueReader* Lep_mass{};
  FloatValueReader* MET_pt{};	  
  FloatArrayReader* CleanFatJet_pt{};	  
  FloatArrayReader* CleanFatJet_eta{};	   
  FloatArrayReader* CleanFatJet_phi{};
  FloatArrayReader* CleanFatJet_mass{};	  
  FloatArrayReader* CleanFatJet_tau21{};	  
  FloatValueReader* WJJ_pt{};	  
  FloatValueReader* WJJ_eta{};	   
  FloatValueReader* WJJ_phi{};
  FloatValueReader* WJJ_mass{};	  
  IntValueReader* CleanJet_notFat_index{};
  IntValueReader* CJet1_index{};
  IntValueReader* CJet2_index{};
  FloatValueReader* Wlep_mt{}; 
  double isRes;
double isBoo;
std::vector <float> mass_H;
 //ROOT::Math::LorentzVector* vJJ_4v;		
  //:ROOT::Math::LorentzVector* vFat_4v;		
};

getResBoo::getResBoo(unsigned int var) :
 TTreeFunction()
{
    _var = var;
}




double
getResBoo::evaluate(unsigned)
{
ROOT::Math::PtEtaPhiMVector wLep_4v{
    *Lep_pt->Get(),
    *Lep_eta->Get(),
    *Lep_phi->Get(),
    *Lep_mass->Get()

};		


const unsigned int nJ{*nCleanFatJet->Get()};
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
    const float Wfat_pt   = CleanFatJet_pt->At(ix);
    const float Wfat_eta  = CleanFatJet_eta->At(ix);
    		ROOT::Math::PtEtaPhiMVector wHad_4v{
      			Wfat_pt,
      			Wfat_eta,
      			CleanFatJet_phi->At(ix),
     			CleanFatJet_mass->At(ix)
 	 };

    double HfatM{(wHad_4v + wLep_4v).M()};
    double HovFat = min( Wfat_pt, *Lep_pt->Get()  )/ HfatM;
 //   double lepovM = *Lep_pt->Get() / HfatM;

		if (_var == 0) return HfatM;
		if (_var == 1) return HovFat;
   //		if(_var == 4) return lepovM;
  
    if (Wfat_pt < 200 || abs(Wfat_eta) > 2.4)
      continue;
     
    

 /*   ROOT::Math::PtEtaPhiMVector wHad_4v{
      Wfat_pt,
      Wfat_eta,
      CleanFatJet_phi->At(ix),
      CleanFatJet_mass->At(ix)
    };

    double HfatM{(wHad_4v + wLep_4v).M()};*/


    if( (Wfat_pt / HfatM > 0.4) && (CleanFatJet_tau21->At(ix)) < 0.4 && (CleanFatJet_mass->At(ix)> 40) && (*MET_pt->Get() >40)){
      isBoo = 1;

	//std::cout << " vs " << HfatM << std::endl;

 
    }else{
      isBoo= 0;
  }
}

if(( *CJet1_index->Get() != -1 ) && (*CJet2_index->Get() != -1)){
 double HjjM{(wHadJJ_4v + wLep_4v).M()};	  
    isRes= 0;
double Hovjj = min(*WJJ_pt->Get(), *Lep_pt->Get() ) / HjjM;
double jjovM = *WJJ_pt->Get() / HjjM;
double lepovM = *Lep_pt->Get() / HjjM;
   if(_var == 2)	return HjjM;
   if(_var == 3) 	return Hovjj;
   if(_var == 4)	return lepovM;
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
getResBoo::bindTree_(multidraw::FunctionLibrary& _library)
{
_library.bindBranch(nCleanFatJet, "nCleanFatJet"); 
_library.bindBranch(Lep_Id, "Lepton_pdgId"); 
_library.bindBranch(Lep_pt, "HM_Wlep_pt_Puppi");
_library.bindBranch(Lep_eta, "HM_Wlep_eta_Puppi");
_library.bindBranch(Lep_phi, "HM_Wlep_phi_Puppi");
_library.bindBranch(Lep_mass, "HM_Wlep_mass_Puppi");
_library.bindBranch(MET_pt, "PuppiMET_pt");
_library.bindBranch(CleanFatJet_pt, "CleanFatJet_pt");
_library.bindBranch(CleanFatJet_eta, "CleanFatJet_eta");
_library.bindBranch(CleanFatJet_phi, "CleanFatJet_phi");
_library.bindBranch(CleanFatJet_mass, "CleanFatJet_mass");
_library.bindBranch(CleanFatJet_tau21, "CleanFatJet_tau21");
_library.bindBranch(WJJ_pt, "HM_Whad_pt");
_library.bindBranch(WJJ_eta, "HM_Whad_eta");
_library.bindBranch(WJJ_phi, "HM_Whad_phi");
_library.bindBranch(WJJ_mass, "HM_Whad_mass");
_library.bindBranch(CJet1_index, "HM_idx_j1");
_library.bindBranch(CJet2_index, "HM_idx_j2");
_library.bindBranch(Wlep_mt, "HM_Wlep_mt");
}
#endif
