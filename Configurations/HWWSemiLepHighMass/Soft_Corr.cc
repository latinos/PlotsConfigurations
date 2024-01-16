#include "LatinoAnalysis/MultiDraw/interface/TTreeFunction.h"
#include "LatinoAnalysis/MultiDraw/interface/FunctionLibrary.h"

// #include <vector>

#include "TGraph.h"
#include "TFile.h"
#include "TF1.h"
#include "TH2F.h"
#include "Math/Vector4Dfwd.h"
#include "Math/GenVector/LorentzVector.h"
#include "Math/GenVector/PtEtaPhiM4D.h"
#include <iostream>


#ifndef Softdrop_corr_HH
#define Softdrop_corr_HH

class Softdrop_corr : public multidraw::TTreeFunction {
public:
    Softdrop_corr(string file_name); //, string tgraph_name, string tgraph_name_etaDo, string tgraph_name_etaUp ); 
    
    char const* getName() const override { return "Softdrop_corr"; }
    TTreeFunction* clone() const override { 
        return new Softdrop_corr(file_name); //, tgraph_name, tgraph_name_etaDo, tgraph_name_etaUp); 
    }
    
    unsigned getNdata() override { return 1; } // nominal, stat_up, stat_do, jetsel
    double evaluate(unsigned) override;

protected:
  void bindTree_(multidraw::FunctionLibrary&) override;

  string file_name;
 // string tgraph_name;
 // string tgraph_name_etaDo;
 // string tgraph_name_etaUp;

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
 // TF1* Corr_nom;
  TF1* Corr_nom = new TF1("Corr_nom", "1.00 -0.321*pow(x*0.0354,-1.1)",200, 2500);
  TF1* Corr_eta_up;
  TF1* Corr_eta_do;
//  TH2F* Wpt_map_jetsel;
//  std::array<float,3> outputValues;
};


Softdrop_corr::Softdrop_corr(string in_file_name): //, string graph_name, string graph_name_etaDo, string graph_name_etaUp ) :
    TTreeFunction(),
    file_name(in_file_name)
    //tgraph_name(graph_name),
    //tgraph_name_etaDo(graph_name_etaDo),
    //tgraph_name_etaUp(graph_name_etaUp)
{
    std::cout << "Softdrop_corr constructor" << std::endl;
    TFile* src_file = new TFile(TString(std::getenv("CMSSW_BASE"))+"/src/" +file_name);
//    Corr_nom    = (TF1*)src_file->Get("puppiJECcorr_gen");
    Corr_eta_up = (TF1*)src_file->Get("puppiJECcorr_reco_0eta1v3");
    Corr_eta_do = (TF1*)src_file->Get("puppiJECcorr_reco_1v3eta2v5");
    //Wpt_map_jetsel  = (TH2F*)src_file->Get(n_graph+"_jetsel");
   // Corr_nom    ->SetDirectory(0);
    //Corr_eta_up ->SetDirectory(0);
    //Corr_eta_do ->SetDirectory(0);
    //Wpt_map_jetsel  ->SetDirectory(0);
    src_file->Close();
}


double
Softdrop_corr::evaluate(unsigned)
{
bool GoodJet_cd = false;
int index_Good_0 = -1;
int index_Good_1 = -1;
int index_Good_2 = -1;
int index_Good_3 = -1;
int last_idx = -1;

unsigned int jx ;
const unsigned int nLep{*nLepton->Get()};
const unsigned int nJ{*nFatJet->Get()};
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
	if (GoodJet_cd == true){
		  if(index_Good_0 >= 0){ jx = 0;
                  }else if(index_Good_1 >= 1){jx = 1;
                  }else if(index_Good_2 >= 2){jx = 2;
                  }else if(index_Good_3 >= 3){jx = 3;
                  }else{ jx = last_idx;}
    		float eta = FatJet_eta->At(jx);
    		float pt = 	FatJet_pt->At(jx);
    		float gen_corr = 1.;
    		float reco_corr = 1.;
    		float total_corr = 1.;
    
		gen_corr =  Corr_nom->Eval(pt);
 	       if( fabs(eta)  <= 1.3 ){
               reco_corr = Corr_eta_do->Eval( pt );
               }else{
    		reco_corr = Corr_eta_up->Eval( pt );
	  }
  
 total_corr = gen_corr * reco_corr;
  //total_corr = gen_corr;

  return FatJet_mass->At(jx) *total_corr;
}else{
return -999;
}

}

void
Softdrop_corr::bindTree_(multidraw::FunctionLibrary& _library)
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
}

#endif

