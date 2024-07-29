#include "LatinoAnalysis/MultiDraw/interface/TTreeFunction.h"
#include "LatinoAnalysis/MultiDraw/interface/FunctionLibrary.h"

#include "TMath.h"
#include "TGraph.h"
#include "TFile.h"
#include "TF1.h"
#include "TH2F.h"
//#include "TVector2.h"
#include "TSystem.h"
#include "TLorentzVector.h"

#include "Math/Vector4D.h"                                              
#include <Math/GenVector/LorentzVector.h>                                              
#include <cmath>
#include <string>
#include <unordered_map>
#include <iostream>
#include <stdexcept>
#include <tuple>
#include <map>

using namespace std;

#ifndef apply_WjetsUnc_Boo_HH
#define apply_WjetsUnc_Boo_HH

class apply_WjetsUnc_Boo : public multidraw::TTreeFunction {
public:
  //apply_WjetsUnc_Boo(string file, string ele_WP, string mu_WP, string fr_ele_path, string pr_ele_path, string fr_mu_path, string pr_mu_path);
  apply_WjetsUnc_Boo(TString file_name, TString file_name_boo);

  char const* getName() const override { 
      return "apply_WjetsUnc_Boo"; 
  }
  TTreeFunction* clone() const override { 
      //return new apply_WjetsUnc_Boo(inputfile_path, ele_WP, mu_WP, fr_ele_path, pr_ele_path, fr_mu_path, pr_mu_path); 
      return new apply_WjetsUnc_Boo(n_file, n_file_boo); 
  }

  unsigned getNdata() override { return 2; }
  double evaluate(unsigned) override;

protected:  
  void bindTree_(multidraw::FunctionLibrary&) override;
  TString n_file;
  TString n_file_boo;

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
  FloatArrayReader* FatJet_pt_sof{};	  
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
//  double isRes;
//double isBoo;
//std::vector <float> mass_H;
//  IntArrayReader*   Lep_Id;
//  FloatArrayReader* Lep_pt{}; 
//  FloatArrayReader* Lep_eta{};	
//  FloatArrayReader* Lep_phi{};
//  UIntValueReader*  nLepton{};
//  TH1D* h_mu;
  TH1D* h_mu;
  TH1D* h_boo;

};

//apply_WjetsUnc_Boo::apply_WjetsUnc_Boo(string in_file, string ele_WP, string mu_WP, string in_fr_ele_path, string in_pr_ele_path, string in_fr_mu_path, string in_pr_mu_path) :
apply_WjetsUnc_Boo::apply_WjetsUnc_Boo(TString file_name, TString file_name_boo) :
    n_file(file_name),
    n_file_boo(file_name_boo),
 //   n_graph(tgraph_name),
    TTreeFunction()
{
    TFile* src_file = new TFile(TString(std::getenv("CMSSW_BASE"))+"/src/" + n_file);
    h_mu     = (TH1D*)src_file->Get("h1");
    h_mu->SetDirectory(0);
    
    TFile* src_file_boo = new TFile(TString(std::getenv("CMSSW_BASE"))+"/src/" + n_file_boo);
    h_boo     = (TH1D*)src_file_boo->Get("h1");
    h_boo->SetDirectory(0);
    src_file->Close();
    src_file_boo->Close();

}


double
apply_WjetsUnc_Boo::evaluate(unsigned)
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
//isRes = value_used;
//isBoo = value_used;
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
	if(FatJet_pt_sof->At(ix) < 200){
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

    const float Wfat_pt   = FatJet_pt_sof->At(jx);
    const float Wfat_eta  = FatJet_eta->At(jx);
                ROOT::Math::PtEtaPhiMVector wHad_4v{
                        Wfat_pt,
                        Wfat_eta,
                        FatJet_phi->At(jx),
                        FatJet_mass->At(jx)
         };

    double HfatM{(wHad_4v + wLep_4v).M()};
 //   double lepovM = *Lep_pt->Get() / HfatM;
 //                   //cout << " Instead in this var" <<  Wfat_pt << "and eventually " << HfatM << "and " << FatJet_mass->At(jx) << endl;
 //                                   if (_var == 0) return HfatM;
 //                                                   if (_var == 1) return HovFat;
 //
   //		if(_var == 4) return lepovM;
             float  trigger_rate;
      	     trigger_rate   = h_boo->GetBinContent(h_boo->FindBin(HfatM));
             return trigger_rate;
           //     return 1.;
  
    
}


if(( *CJet1_index->Get() != -1 ) && (*CJet2_index->Get() != -1)){
 double HjjM{(wHadJJ_4v + wLep_4v).M()};	  
//    isRes= 0;
double Hovjj = min(*WJJ_pt->Get(), *Lep_pt->Get() ) / HjjM;
double jjovM = *WJJ_pt->Get() / HjjM;
double lepovM = *Lep_pt->Get() / HjjM;

float  trigger_rate;
      	 trigger_rate   = h_mu->GetBinContent(h_mu->FindBin(HjjM));
  return 1;//trigger_rate;
}
return 1;
//return *Lep_phi->Get(); 

}

void
apply_WjetsUnc_Boo::bindTree_(multidraw::FunctionLibrary& _library)
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
_library.bindBranch(FatJet_pt_sof, "FatJet_pt_nom");
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
