#include "LatinoAnalysis/MultiDraw/interface/TTreeFunction.h"
#include "LatinoAnalysis/MultiDraw/interface/FunctionLibrary.h"

#include "TMath.h"
#include <vector>
#include "Math/Vector4D.h"                                              
#include <Math/GenVector/LorentzVector.h>                                              
#include <iostream>


#ifndef FatJet_EvtUnc_HH
#define FatJet_EvtUnc_HH

class FatJet_EvtUnc : public multidraw::TTreeFunction {
public:
  FatJet_EvtUnc(unsigned int var, TString unc);
   
  char const* getName() const override { return "FatJet_EvtUnc"; }
  TTreeFunction* clone() const override { return new FatJet_EvtUnc(_var, _unc); }

  unsigned getNdata() override { return 1; }

  double evaluate(unsigned) override;
 

protected:
  unsigned int _var;
  TString _unc;
  void bindTree_(multidraw::FunctionLibrary&) override;

  UIntValueReader*  nFatJet{};
  IntArrayReader*   Lep_Id;
  FloatArrayReader* Lep_pt{}; 
  FloatArrayReader* Lep_eta{};	
  FloatArrayReader* Lep_phi{};
  UIntValueReader*  nLepton{};
  FloatValueReader* MET_pt{};	  
  FloatArrayReader* FatJet_pt{};	  
  FloatArrayReader* FatJet_pt_sof{};	  
  FloatArrayReader* FatJet_eta{};	   
  FloatArrayReader* FatJet_phi{};
  FloatArrayReader* FatJet_tau1{};	  
  FloatArrayReader* FatJet_mass{};	  
  FloatArrayReader* FatJet_msof{};	  
  FloatArrayReader* FatJet_msof_jmsUp{};
  FloatArrayReader* FatJet_msof_jmsDo{};
  FloatArrayReader* FatJet_msof_jmrUp{};
  FloatArrayReader* FatJet_msof_jmrDo{};
  FloatArrayReader* FatJet_msof_jerUp{};
  FloatArrayReader* FatJet_msof_jerDo{};
  FloatArrayReader* FatJet_msof_jesUp{};
  FloatArrayReader* FatJet_msof_jesDo{};
  FloatArrayReader* FatJet_mass_jmsUp{};
  FloatArrayReader* FatJet_mass_jmsDo{};
  FloatArrayReader* FatJet_mass_jmrUp{};
  FloatArrayReader* FatJet_mass_jmrDo{};
  FloatArrayReader* FatJet_mass_jerUp{};
  FloatArrayReader* FatJet_mass_jerDo{};
  FloatArrayReader* FatJet_mass_jesUp{};
  FloatArrayReader* FatJet_mass_jesDo{};
  FloatArrayReader* FatJet_pt_jerUp{}; 
  FloatArrayReader* FatJet_pt_jerDo{}; 
  FloatArrayReader* FatJet_pt_jesUp{}; 
  FloatArrayReader* FatJet_pt_jesDo{}; 
  //FloatValueReader* WHad_pt{};
  //FloatValueReader* WHad_eta{}; 
  //FloatValueReader* WHad_phi{}; 
  //FloatValueReader* WHad_mass{};
  IntArrayReader*   FatJet_jetId{};	  
  UIntValueReader*  nCleanJet{};
  FloatArrayReader* CleanJet_pt{};	  
  FloatArrayReader* CleanJet_eta{};	   
  FloatArrayReader* CleanJet_phi{};
  FloatArrayReader* Jet_mass{};	  
  IntArrayReader*   CleanJet_jetIdx{};	  
  FloatValueReader* WLep_pt{}; 
  FloatValueReader* WLep_eta{}; 
  FloatValueReader* WLep_phi{}; 
  FloatValueReader* WLep_mass{};
 
  double isRes;
double isBoo;
std::vector <float> mass_H;
 //ROOT::Math::LorentzVector* vJJ_4v;		
  //:ROOT::Math::LorentzVector* vFat_4v;		
};

FatJet_EvtUnc::FatJet_EvtUnc(unsigned int var, TString unc) :
 TTreeFunction()
{
    _var = var;
    _unc = unc;
}




double
FatJet_EvtUnc::evaluate(unsigned)
{
ROOT::Math::PtEtaPhiMVector wLep_4v{
    *WLep_pt->Get(),
    *WLep_eta->Get(),
    *WLep_phi->Get(),
    *WLep_mass->Get()

};		
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
//float wpt= *WHad_pt->Get();
//float wmass= *WHad_mass->Get();
//float wphi= *WHad_phi->Get();
//float weta= *WHad_eta->Get();
float disc_pt =0;
float disc_mass=0;
for (unsigned int ix{0}; ix < nFat; ix++) {
	
	if ( _unc == "jerUp"){
		disc_pt = FatJet_pt_jerUp->At(ix);
		disc_mass = FatJet_msof_jerUp->At(ix);
	}
	if ( _unc == "jesUp"){
		disc_pt   = FatJet_pt_jesUp->At(ix);
		disc_mass = FatJet_msof_jesUp->At(ix);
	}
	if ( _unc == "jmsUp"){
	        disc_pt   = FatJet_pt->At(ix);
	        disc_mass = FatJet_msof_jmsUp->At(ix);
	}
	if ( _unc == "jmrUp"){
		disc_pt   = FatJet_pt->At(ix);
		disc_mass = FatJet_msof_jmrUp->At(ix);
	}
	if ( _unc == "jerDo"){
	        disc_pt   = FatJet_pt_jerDo->At(ix);
	        disc_mass = FatJet_msof_jerDo->At(ix);
	}
	if ( _unc == "jesDo"){
	        disc_pt   = FatJet_pt_jesDo->At(ix);
	        disc_mass = FatJet_msof_jesDo->At(ix);
	}
	if ( _unc == "jmsDo"){
	       disc_pt   = FatJet_pt->At(ix);
	       disc_mass = FatJet_msof_jmsDo->At(ix);
	}
	if ( _unc == "jmrDo"){
		disc_pt = FatJet_pt->At(ix);
		disc_mass = FatJet_msof_jmrDo->At(ix);
	}
	bool GoodJet = true;
//	if (FatJet_tau1->At(ix) == 0.0) continue;
	
	if(FatJet_jetId->At(ix) < 0){
	GoodJet = false;
	}
	if(disc_pt < 200){
	GoodJet = false;
	}
	if(abs(FatJet_eta->At(ix)) > 2.4){
	GoodJet = false;
	}
	if(disc_mass < 55 || disc_mass > 115){
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
 	//vector<unsigned int> v_jets;  	
 	//vector<unsigned int> v_jets_0;  	
        
}		
	
	unsigned int jx ;

if (GoodJet_cd == true){
	  if(index_Good_0 >= 0){ jx = 0;
          }else if(index_Good_1 >= 1){jx = 1;
          }else if(index_Good_2 >= 2){jx = 2;
          }else if(index_Good_3 >= 3){jx = 3;
          }else{ jx = last_idx;}

         if ( _unc == "jerUp"){
		 const float Wfat_pt   = FatJet_pt_jerUp->At(jx);
		 const float Wfat_mass = FatJet_mass_jerUp->At(jx);
	    	 const float Wfat_eta  = FatJet_eta->At(jx);
	    	 ROOT::Math::PtEtaPhiMVector wHad_4v{
	      			Wfat_pt,
	      			Wfat_eta,
	      			FatJet_phi->At(jx),
	     			FatJet_mass_jerUp->At(jx)
	 	 };
		 double HfatM{(wHad_4v + wLep_4v).M()};
	    	 double HovFat = min( Wfat_pt, *WLep_pt->Get()  )/ HfatM;
		 const float Wfat_pt_nom   = FatJet_pt->At(jx);
		 const float Wfat_mass_nom = FatJet_mass->At(jx);
	    	 ROOT::Math::PtEtaPhiMVector wHad_nom_4v{
	      			Wfat_pt_nom,
	      			Wfat_eta,
	      			FatJet_phi->At(jx),
	     			FatJet_mass->At(jx)
	     			
	 	 };
		 double HfatM_nom{(wHad_nom_4v + wLep_4v).M()};

		 //cout << " Comparison is" <<  Wfat_mass_nom << "and " << Wfat_mass << " then" << Wfat_pt << "compared " << Wfat_pt_nom <<" and eventually " << HfatM << "with " << HfatM_nom << endl;	
	 	 if (_var == 0) return HfatM;
	 	 if (_var == 1) return HovFat;
	 	 if (_var == 2) return Wfat_pt;
	 	 if (_var == 3) return Wfat_mass;
	 	 if (_var == 4) return 1;
	 	 //if (_var == 4) return wpt;
	}
         if ( _unc == "jesUp"){
		 const float Wfat_pt   = FatJet_pt_jesUp->At(jx);
		 const float Wfat_mass = FatJet_mass_jesUp->At(jx);
	    	 const float Wfat_eta  = FatJet_eta->At(jx);
	    	 ROOT::Math::PtEtaPhiMVector wHad_4v{
	      			Wfat_pt,
	      			Wfat_eta,
	      			FatJet_phi->At(jx),
				Wfat_mass
	 	 };
		 double HfatM{(wHad_4v + wLep_4v).M()};
	    	 double HovFat = min( Wfat_pt, *WLep_pt->Get()  )/ HfatM;
	
	 	 if (_var == 0) return HfatM;
	 	 if (_var == 1) return HovFat;
	 	 if (_var == 2) return Wfat_pt;
	 	 if (_var == 3) return Wfat_mass;
	 	 if (_var == 4) return 1;
	 	 //if (_var == 4) return wpt;
	}
         if ( _unc == "jmsUp"){
		 const float Wfat_pt   = FatJet_pt->At(jx);
		 const float Wfat_mass = FatJet_mass_jmsUp->At(jx);
	    	 const float Wfat_eta  = FatJet_eta->At(jx);
	    	 ROOT::Math::PtEtaPhiMVector wHad_4v{
	      			Wfat_pt,
	      			Wfat_eta,
	      			FatJet_phi->At(jx),
				Wfat_mass
	 	 };
		 double HfatM{(wHad_4v + wLep_4v).M()};
	    	 double HovFat = min( Wfat_pt, *WLep_pt->Get()  )/ HfatM;
	
	 	 if (_var == 0) return HfatM;
	 	 if (_var == 1) return HovFat;
	 	 if (_var == 2) return Wfat_pt;
	 	 if (_var == 3) return Wfat_mass;
	 	 if (_var == 4) return 1;
	 	 //if (_var == 4) return wpt;
	}
         if ( _unc == "jmrUp"){
		 const float Wfat_pt   = FatJet_pt->At(jx);
		 const float Wfat_mass = FatJet_mass_jmrUp->At(jx);
	    	 const float Wfat_eta  = FatJet_eta->At(jx);
	    	 ROOT::Math::PtEtaPhiMVector wHad_4v{
	      			Wfat_pt,
	      			Wfat_eta,
	      			FatJet_phi->At(jx),
				Wfat_mass
	 	 };
		 double HfatM{(wHad_4v + wLep_4v).M()};
	    	 double HovFat = min( Wfat_pt, *WLep_pt->Get()  )/ HfatM;
	
	 	 if (_var == 0) return HfatM;
	 	 if (_var == 1) return HovFat;
	 	 if (_var == 2) return Wfat_pt;
	 	 if (_var == 3) return Wfat_mass;
	 	 if (_var == 4) return 1;
	 	 //if (_var == 4) return wpt;
	}
         if ( _unc == "jerDo"){
		 const float Wfat_pt   = FatJet_pt_jerDo->At(jx);
		 const float Wfat_mass = FatJet_mass_jerDo->At(jx);
	    	 const float Wfat_eta  = FatJet_eta->At(jx);
	    	 ROOT::Math::PtEtaPhiMVector wHad_4v{
	      			Wfat_pt,
	      			Wfat_eta,
	      			FatJet_phi->At(jx),
	     			FatJet_mass_jerDo->At(jx)
	 	 };
		 double HfatM{(wHad_4v + wLep_4v).M()};
	    	 double HovFat = min( Wfat_pt, *WLep_pt->Get()  )/ HfatM;
	
	 	 if (_var == 0) return HfatM;
	 	 if (_var == 1) return HovFat;
	 	 if (_var == 2) return Wfat_pt;
	 	 if (_var == 3) return Wfat_mass;
	 	 if (_var == 4) return 1;
	 	 //if (_var == 4) return wpt;
	}
         if ( _unc == "jesDo"){
		 const float Wfat_pt   = FatJet_pt_jesDo->At(jx);
		 const float Wfat_mass = FatJet_mass_jesDo->At(jx);
	    	 const float Wfat_eta  = FatJet_eta->At(jx);
	    	 ROOT::Math::PtEtaPhiMVector wHad_4v{
	      			Wfat_pt,
	      			Wfat_eta,
	      			FatJet_phi->At(jx),
				Wfat_mass
	 	 };
		 double HfatM{(wHad_4v + wLep_4v).M()};
	    	 double HovFat = min( Wfat_pt, *WLep_pt->Get()  )/ HfatM;
	
	 	 if (_var == 0) return HfatM;
	 	 if (_var == 1) return HovFat;
	 	 if (_var == 2) return Wfat_pt;
	 	 if (_var == 3) return Wfat_mass;
	 	 if (_var == 4) return 1;
	 	 //if (_var == 4) return wpt;
	}
         if ( _unc == "jmsDo"){
		 const float Wfat_pt   = FatJet_pt->At(jx);
		 const float Wfat_mass = FatJet_mass_jmsDo->At(jx);
	    	 const float Wfat_eta  = FatJet_eta->At(jx);
	    	 ROOT::Math::PtEtaPhiMVector wHad_4v{
	      			Wfat_pt,
	      			Wfat_eta,
	      			FatJet_phi->At(jx),
				Wfat_mass
	 	 };
		 double HfatM{(wHad_4v + wLep_4v).M()};
	    	 double HovFat = min( Wfat_pt, *WLep_pt->Get()  )/ HfatM;
	
	 	 if (_var == 0) return HfatM;
	 	 if (_var == 1) return HovFat;
	 	 if (_var == 2) return Wfat_pt;
	 	 if (_var == 3) return Wfat_mass;
	 	 if (_var == 4) return 1;
	 	 //if (_var == 4) return wpt;
	}
         if ( _unc == "jmrDo"){
		 const float Wfat_pt   = FatJet_pt->At(jx);
		 const float Wfat_mass = FatJet_mass_jmrDo->At(jx);
	    	 const float Wfat_eta  = FatJet_eta->At(jx);
	    	 ROOT::Math::PtEtaPhiMVector wHad_4v{
	      			Wfat_pt,
	      			Wfat_eta,
	      			FatJet_phi->At(jx),
				Wfat_mass
	 	 };
		 double HfatM{(wHad_4v + wLep_4v).M()};
	    	 double HovFat = min( Wfat_pt, *WLep_pt->Get()  )/ HfatM;
	
	 	 if (_var == 0) return HfatM;
	 	 if (_var == 1) return HovFat;
	 	 if (_var == 2) return Wfat_pt;
	 	 if (_var == 3) return Wfat_mass;
	 	 if (_var == 4) return 1;
	 	 //if (_var == 4) return wpt;
	}
}
return -999;

}

void 
FatJet_EvtUnc::bindTree_(multidraw::FunctionLibrary& _library)
{
_library.bindBranch(nFatJet, "nFatJet"); 
_library.bindBranch(Lep_Id, "Lepton_pdgId"); 
_library.bindBranch(Lep_pt, "Lepton_pt");
_library.bindBranch(Lep_eta, "Lepton_eta");
_library.bindBranch(Lep_phi, "Lepton_phi");
_library.bindBranch(nLepton, "nLepton");
_library.bindBranch(MET_pt, "PuppiMET_pt");
_library.bindBranch(FatJet_pt_sof, "FatJet_pt_nom");
_library.bindBranch(FatJet_pt, "FatJet_pt");
_library.bindBranch(FatJet_eta, "FatJet_eta");
_library.bindBranch(FatJet_phi, "FatJet_phi");
_library.bindBranch(FatJet_tau1, "FatJet_tau1");
_library.bindBranch(FatJet_msof, "FatJet_msoftdrop_nom");
_library.bindBranch(FatJet_mass, "FatJet_mass_nom");
_library.bindBranch(FatJet_jetId, "FatJet_jetId");
_library.bindBranch(nCleanJet, "nCleanJet"); 
_library.bindBranch(CleanJet_pt, "CleanJet_pt");
_library.bindBranch(CleanJet_eta, "CleanJet_eta");
_library.bindBranch(CleanJet_phi, "CleanJet_phi");
_library.bindBranch(Jet_mass, "Jet_mass");
_library.bindBranch(CleanJet_jetIdx, "CleanJet_jetIdx");
_library.bindBranch(FatJet_mass_jmsUp, "FatJet_mass_jmsUp");
_library.bindBranch(FatJet_mass_jmsDo, "FatJet_mass_jmsDown");
_library.bindBranch(FatJet_mass_jmrUp, "FatJet_mass_jmrUp");
_library.bindBranch(FatJet_mass_jmrDo, "FatJet_mass_jmrDown");
_library.bindBranch(FatJet_mass_jerUp, "FatJet_mass_jerUp");
_library.bindBranch(FatJet_mass_jerDo, "FatJet_mass_jerDown");
_library.bindBranch(FatJet_mass_jesUp, "FatJet_mass_jesTotalUp");
_library.bindBranch(FatJet_mass_jesDo, "FatJet_mass_jesTotalDown");
_library.bindBranch(FatJet_msof_jmsUp, "FatJet_msoftdrop_jmsUp");
_library.bindBranch(FatJet_msof_jmsDo, "FatJet_msoftdrop_jmsDown");
_library.bindBranch(FatJet_msof_jmrUp, "FatJet_msoftdrop_jmrUp");
_library.bindBranch(FatJet_msof_jmrDo, "FatJet_msoftdrop_jmrDown");
_library.bindBranch(FatJet_msof_jerUp, "FatJet_msoftdrop_jerUp");
_library.bindBranch(FatJet_msof_jerDo, "FatJet_msoftdrop_jerDown");
_library.bindBranch(FatJet_msof_jesUp, "FatJet_msoftdrop_jesTotalUp");
_library.bindBranch(FatJet_msof_jesDo, "FatJet_msoftdrop_jesTotalDown");
_library.bindBranch(FatJet_pt_jerUp, "FatJet_pt_jerUp");
_library.bindBranch(FatJet_pt_jerDo, "FatJet_pt_jerDown");
_library.bindBranch(FatJet_pt_jesUp, "FatJet_pt_jesTotalUp");
_library.bindBranch(FatJet_pt_jesDo, "FatJet_pt_jesTotalDown");
_library.bindBranch(WLep_pt, "HM_Wlep_pt_Puppi");
_library.bindBranch(WLep_eta, "HM_Wlep_eta_Puppi");
_library.bindBranch(WLep_phi, "HM_Wlep_phi_Puppi");
_library.bindBranch(WLep_mass, "HM_Wlep_mass_Puppi");
//_library.bindBranch(WHad_pt, "HM_Whad_pt");
//_library.bindBranch(WHad_eta, "HM_Whad_eta");
//_library.bindBranch(WHad_phi, "HM_Whad_phi");
//_library.bindBranch(WHad_mass, "HM_Whad_mass");
}
#endif
