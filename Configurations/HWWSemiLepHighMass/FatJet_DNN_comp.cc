#include "LatinoAnalysis/MultiDraw/interface/TTreeFunction.h"
#include "LatinoAnalysis/MultiDraw/interface/FunctionLibrary.h"

#include "TMath.h"
#include <vector>
#include "Math/Vector4D.h"                                              
#include <Math/GenVector/LorentzVector.h>                                              
#include "TLorentzVector.h"
#include <iostream>


#ifndef FatJet_DNN_comp_HH
#define FatJet_DNN_comp_HH

class FatJet_DNN_comp : public multidraw::TTreeFunction {
public:
  FatJet_DNN_comp(unsigned int var);
   
  char const* getName() const override { return "FatJet_DNN_comp"; }
  TTreeFunction* clone() const override { return new FatJet_DNN_comp(_var); }

  unsigned getNdata() override { return 1; }

  double evaluate(unsigned) override;
 

protected:
  unsigned int _var;
  void bindTree_(multidraw::FunctionLibrary&) override;

  ULong64ValueReader* event;
  UIntValueReader* nFatJet{};

  IntArrayReader* Lepton_Id;
  FloatValueReader* WLep_pt{}; 
  FloatValueReader* WLep_eta{};	
  FloatValueReader* WLep_phi{};
  FloatValueReader* WLep_mass{};
  FloatValueReader* MET_pt{};	  
  FloatArrayReader* Lepton_pt{}; 
  FloatArrayReader* Lepton_eta{};	
  FloatArrayReader* Lepton_phi{};
  FloatArrayReader* CleanJet_pt{};
  FloatArrayReader* CleanJet_eta{};
  FloatArrayReader* CleanJet_phi{};
  IntArrayReader* CleanJet_jetIdx{};
  FloatArrayReader* Jet_mass{};
  FloatValueReader* PuppiMET_phi{};
  UIntValueReader* nCleanJet{};
  UIntValueReader*  nLepton{};
  FloatArrayReader* SubJet_pt{};	  
  FloatArrayReader* SubJet_eta{};	   
  FloatArrayReader* SubJet_phi{};
  FloatArrayReader* SubJet_mass{};	  
  FloatArrayReader* FatJet_pt{};	  
  FloatArrayReader* FatJet_pt_nom{};	  
  FloatArrayReader* FatJet_eta{};	   
  FloatArrayReader* FatJet_phi{};
  FloatArrayReader* FatJet_mass{};	  
  FloatArrayReader* FatJet_msof{};
  IntArrayReader*   FatJet_jetId{};	  
  IntArrayReader*   SubJet_idx1{};	  
  IntArrayReader*   SubJet_idx2{};	  
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

FatJet_DNN_comp::FatJet_DNN_comp(unsigned int var) :
 TTreeFunction()
{
    _var = var;
}




double
FatJet_DNN_comp::evaluate(unsigned)
{
  unsigned nJet{*nCleanJet->Get()};
  float njet30 = 0.0;
  for (unsigned iJet{0}; iJet != nJet; ++iJet){  
    if (CleanJet_pt->At(iJet) >= 30.0){
      njet30 = njet30+1.0;
    }else{
      break;
    }
  }

  float jetpt1 = 0.0;
  float jeteta1 = 0.0;
  float jetphi1 = 0.0;
  float jetmass1 = 0.0;
  float jetpt2 = 0.0;
  float jeteta2 = 0.0;
  float jetphi2 = 0.0;
  float jetmass2 = 0.0;
  float jetpt3 = 0.0;
  float jeteta3 = 0.0;
  float jetphi3 = 0.0;
  float jetmass3 = 0.0;
  float jetpt4 = 0.0;
  float jeteta4 = 0.0;
  float jetphi4 = 0.0;
  float jetmass4 = 0.0;
  float mjj_12 = 0.0;
  float detajj_12 = 0.0;
  float mjj_13 = 0.0;
  float detajj_13 = 0.0;
  float mjj_23 = 0.0;
  float detajj_23 = 0.0;
  float mjj_14 = 0.0;
  float detajj_14 = 0.0;
  float mjj_24 = 0.0;
  float detajj_24 = 0.0;
  float mjj_34 = 0.0;
  float detajj_34 = 0.0;
  TLorentzVector LorJ1,LorJ2,LorJ3,LorJ4;

  std::vector<float> input{};
  float wpt, weta, wphi, wmass, wr1pt, wr1eta, wr1phi, wr1mass, wr2pt, wr2eta, wr2phi, wr2mass; //, WWmass
  unsigned wjet1, wjet2;
  std::vector<int> vbfjet = {-1, -1, -1, -1};
  unsigned j = 0;
  TLorentzVector J1,J2;
ROOT::Math::PtEtaPhiMVector wLep_4v{
    *WLep_pt->Get(),
    *WLep_eta->Get(),
    *WLep_phi->Get(),
    *WLep_mass->Get()

};		

bool GoodJet_cd = false;
int index_Good_0 = -1;
int index_Good_1 = -1;
int index_Good_2 = -1;
int index_Good_3 = -1;
int last_idx = -1;

const unsigned int nLep{*nLepton->Get()};
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
	if(FatJet_pt_nom->At(ix) < 200){
	GoodJet = false;
	}
	if(abs(FatJet_eta->At(ix)) > 2.4){
	GoodJet = false;
	}
	if(FatJet_msof->At(ix) < 55 || FatJet_msof->At(ix) > 115){
	GoodJet = false;
	}

	if(GoodJet == true){
		for(unsigned int px{0}; px < nLep; px++) {
			if(sqrt( pow((FatJet_eta->At(ix) - Lepton_eta->At(px)),2) + pow((FatJet_phi->At(ix) - Lepton_phi->At(px)),2)) < 0.8){
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
	
    const float wpt   = FatJet_pt_nom->At(jx);
    const float weta  = FatJet_eta->At(jx);
    const float wphi  = FatJet_phi->At(jx);
    const float wmass  = FatJet_mass->At(jx);
    const int idx1  = SubJet_idx1->At(jx);
    const int idx2  = SubJet_idx2->At(jx);

    const float sub1_pt   = SubJet_pt->At(idx1);
    const float sub1_eta  = SubJet_eta->At(idx1);
    const float sub1_phi  = SubJet_phi->At(idx1);
    const float sub1_mass = SubJet_mass->At(idx1);
    const float sub2_pt   = SubJet_pt->At(idx2);
    const float sub2_eta  = SubJet_eta->At(idx2);
    const float sub2_phi  = SubJet_phi->At(idx2);
    const float sub2_mass = SubJet_mass->At(idx2);
	    //WWmass = HM_CleanFatJetPassMBoosted_HlnFat_mass->At(0);
	    wr1pt = 0.0;
	    wr1eta = 0.0;
	    wr1phi = 0.0;
	    wr1mass = 0.0;
	    wr2pt = 0.0;
	    wr2eta = 0.0;
	    wr2phi = 0.0;
	    wr2mass = 0.0;
	    for (int i{0}; i != 4 and (unsigned)i != nJet ; ++i) {
	    // if(CleanJet_pt->At(i) > 30){
	      vbfjet[i] = i;
	    // }
	    }
	/*  }else if (*HM_idx_j1->Get() != -1 && *HM_idx_j2->Get() != -1){
	    wpt = *HM_Whad_pt->Get();
	    weta = *HM_Whad_eta->Get();
	    wphi = *HM_Whad_phi->Get();
	    wmass = *HM_Whad_mass->Get();
	    //WWmass = *HM_Hlnjj_mass->Get();
	    wjet1 = *HM_idx_j1->Get();
	    wjet2 = *HM_idx_j2->Get();
	    wr1pt = CleanJet_pt->At(wjet1);
	    wr1eta = CleanJet_eta->At(wjet1);
	    wr1phi = CleanJet_phi->At(wjet1);
	    wr1mass = Jet_mass->At(CleanJet_jetIdx->At(wjet1));
	    wr2pt = CleanJet_pt->At(wjet2);
	    wr2eta = CleanJet_eta->At(wjet2);
	    wr2phi = CleanJet_phi->At(wjet2);
	    wr2mass = Jet_mass->At(CleanJet_jetIdx->At(wjet2));
	    for (int i{0}; j != 4 and (unsigned)i != nJet ; ++i) {
	      if ( (unsigned)i != wjet1 and (unsigned) i != wjet2){
	        vbfjet[j] = i;
	        j++;
	      }
	    }*/
	
	  if (vbfjet[0]>-1){
	    jetpt1 = CleanJet_pt->At(vbfjet[0]);
	    jeteta1 = CleanJet_eta->At(vbfjet[0]);
	    jetphi1 = CleanJet_phi->At(vbfjet[0]);
	    jetmass1 = Jet_mass->At(CleanJet_jetIdx->At(vbfjet[0]));
	    LorJ1.SetPtEtaPhiM(jetpt1, jeteta1, jetphi1, jetmass1);
	  }
	  if (vbfjet[1]>-1){
	    jetpt2 = CleanJet_pt->At(vbfjet[1]);
	    jeteta2 = CleanJet_eta->At(vbfjet[1]);
	    jetphi2 = CleanJet_phi->At(vbfjet[1]);
	    jetmass2 = Jet_mass->At(CleanJet_jetIdx->At(vbfjet[1]));
	    LorJ2.SetPtEtaPhiM(jetpt2, jeteta2, jetphi2, jetmass2);
	    mjj_12 = (LorJ1+LorJ2).M();
	    detajj_12 = abs(LorJ1.Eta()-LorJ2.Eta());
	  }
	  if (vbfjet[2]>-1){
	    jetpt3 = CleanJet_pt->At(vbfjet[2]);
	    jeteta3 = CleanJet_eta->At(vbfjet[2]);
	    jetphi3 = CleanJet_phi->At(vbfjet[2]);
	    jetmass3 = Jet_mass->At(CleanJet_jetIdx->At(vbfjet[2]));
	    LorJ3.SetPtEtaPhiM(jetpt3, jeteta3, jetphi3, jetmass3);
	    mjj_13 = (LorJ1+LorJ3).M();
	    detajj_13 = abs(LorJ1.Eta()-LorJ3.Eta());
	    mjj_23 = (LorJ2+LorJ3).M();
	    detajj_23 = abs(LorJ2.Eta()-LorJ3.Eta());
	  }
	  if (vbfjet[3]>-1){
	    jetpt4 = CleanJet_pt->At(vbfjet[3]);
	    jeteta4 = CleanJet_eta->At(vbfjet[3]);
	    jetphi4 = CleanJet_phi->At(vbfjet[3]);
	    jetmass4 = Jet_mass->At(CleanJet_jetIdx->At(vbfjet[3]));
	    LorJ4.SetPtEtaPhiM(jetpt4, jeteta4, jetphi4, jetmass4);
	    mjj_14 = (LorJ1+LorJ4).M();
	    detajj_14 = abs(LorJ1.Eta()-LorJ4.Eta());
	    mjj_24 = (LorJ2+LorJ4).M();
	    detajj_24 = abs(LorJ2.Eta()-LorJ4.Eta());
	    mjj_34 = (LorJ3+LorJ4).M();
	    detajj_34 = abs(LorJ3.Eta()-LorJ4.Eta());
	  }
	
	
	  if(_var==0) return Lepton_pt->At(0) * TMath::Cos(Lepton_phi->At(0));
	  if(_var==1) return Lepton_pt->At(0) * TMath::Sin(Lepton_phi->At(0));
	  if(_var==2) return Lepton_pt->At(0) * TMath::SinH(Lepton_eta->At(0));
	
	  if(_var==3) return jetpt1 * TMath::Cos(jetphi1);
	  if(_var==4) return jetpt1 * TMath::Sin(jetphi1);
	  if(_var==5) return jetpt1 * TMath::SinH(jeteta1);
	  if(_var==6) return jetmass1;
	  if(_var==7) return jetpt2 * TMath::Cos(jetphi2);
	  if(_var==8) return jetpt2 * TMath::Sin(jetphi2);
	  if(_var==9) return jetpt2 * TMath::SinH(jeteta2);
	  if(_var==10) return jetmass2;
	  if(_var==11) return jetpt3 * TMath::Cos(jetphi3);
	  if(_var==12) return jetpt3 * TMath::Sin(jetphi3);
	  if(_var==13) return jetpt3 * TMath::SinH(jeteta3);
	  if(_var==14) return jetmass3;
	  if(_var==15) return jetpt4 * TMath::Cos(jetphi4);
	  if(_var==16) return jetpt4 * TMath::Sin(jetphi4);
	  if(_var==17) return jetpt4 * TMath::SinH(jeteta4);
	  if(_var==18) return jetmass4;
	
	  if(_var==19) return wpt * TMath::Cos(wphi);
	  if(_var==20) return wpt * TMath::Sin(wphi);
	  if(_var==21) return wpt * TMath::SinH(weta);
	  if(_var==22) return wmass;
	  if(_var==23) return *WLep_pt->Get() * TMath::Cos(*WLep_phi->Get());
	  if(_var==24) return *WLep_pt->Get() * TMath::Sin(*WLep_phi->Get());
	  if(_var==25) return *WLep_pt->Get() * TMath::SinH(*WLep_eta->Get());
	  if(_var==26) return *WLep_mass->Get();
	  if(_var==27) return sub1_pt;
	  if(_var==28) return sub1_eta;
	  if(_var==29) return sub1_phi;
	  if(_var==30) return sub1_mass;
	  if(_var==31) return sub2_pt;
	  if(_var==32) return sub2_eta;
	  if(_var==33) return sub2_phi;
	  if(_var==34) return sub2_mass;
	
	  if(_var==35) return *MET_pt->Get() * TMath::Cos(*PuppiMET_phi->Get());
	  if(_var==36) return *MET_pt->Get() * TMath::Sin(*PuppiMET_phi->Get());
	  if(_var==37) return *nCleanJet->Get();
	  if(_var==38) return njet30;
	  if(_var==39) return 0;
	  //if(_var==0) return WWmass);
	
	  if(_var==40) return mjj_12;
	  if(_var==41) return detajj_12;
	  if(_var==42) return mjj_13;
	  if(_var==43) return detajj_13;
	  if(_var==44) return mjj_14;
	  if(_var==45) return detajj_14;
	  if(_var==46) return mjj_23;
	  if(_var==47) return detajj_23;
	  if(_var==48) return mjj_24;
	  if(_var==49) return detajj_24;
	  if(_var==50) return mjj_34;
	  if(_var==51) return detajj_34;
  	  if(_var==52) return jetpt1;
  	  if(_var==53) return jetpt2;
  	  if(_var==54) return jetpt3;
  	  if(_var==55) return jetpt4;

  
    
}


return -999;
//return *Lep_phi->Get(); 

}

void 
FatJet_DNN_comp::bindTree_(multidraw::FunctionLibrary& _library)
{
_library.bindBranch(event, "event");
_library.bindBranch(nFatJet, "nFatJet"); 
_library.bindBranch(Lepton_Id, "Lepton_pdgId"); 
_library.bindBranch(WLep_pt, "HM_Wlep_pt_Puppi");
_library.bindBranch(WLep_eta, "HM_Wlep_eta_Puppi");
_library.bindBranch(WLep_phi, "HM_Wlep_phi_Puppi");
_library.bindBranch(WLep_mass, "HM_Wlep_mass_Puppi");
_library.bindBranch(CleanJet_pt, "CleanJet_pt");
_library.bindBranch(CleanJet_eta, "CleanJet_eta");
_library.bindBranch(CleanJet_phi, "CleanJet_phi");
_library.bindBranch(CleanJet_jetIdx, "CleanJet_jetIdx");
_library.bindBranch(Jet_mass, "Jet_mass");
_library.bindBranch(Lepton_pt, "Lepton_pt");
_library.bindBranch(Lepton_eta, "Lepton_eta");
_library.bindBranch(Lepton_phi, "Lepton_phi");
_library.bindBranch(nLepton, "nLepton");  
_library.bindBranch(MET_pt, "PuppiMET_pt");
_library.bindBranch(PuppiMET_phi, "PuppiMET_phi");
_library.bindBranch(nCleanJet, "nCleanJet");
_library.bindBranch(SubJet_pt, "SubJet_pt");
_library.bindBranch(SubJet_eta, "SubJet_eta");
_library.bindBranch(SubJet_phi, "SubJet_phi");
_library.bindBranch(SubJet_mass, "SubJet_mass");
_library.bindBranch(SubJet_idx1, "FatJet_subJetIdx1");
_library.bindBranch(SubJet_idx2, "FatJet_subJetIdx2");
_library.bindBranch(FatJet_pt, "FatJet_pt");
_library.bindBranch(FatJet_pt_nom, "FatJet_pt_nom");
_library.bindBranch(FatJet_eta, "FatJet_eta");
_library.bindBranch(FatJet_phi, "FatJet_phi");
_library.bindBranch(FatJet_mass, "FatJet_mass_nom");
_library.bindBranch(FatJet_msof, "FatJet_msoftdrop_nom");
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
