#include "LatinoAnalysis/MultiDraw/interface/TTreeFunction.h"
#include "LatinoAnalysis/MultiDraw/interface/FunctionLibrary.h"

#include "TMath.h"
#include "TGraph.h"
#include "TFile.h"
#include "TF1.h"
#include "TH2F.h"
#include "TVector2.h"
#include "TSystem.h"
#include "TLorentzVector.h"

#include <cmath>
#include <string>
#include <unordered_map>
#include <iostream>
#include <stdexcept>
#include <tuple>
#include <map>

using namespace std;

#ifndef apply_TaggerW_HH
#define apply_TaggerW_HH

class apply_TaggerW : public multidraw::TTreeFunction {
public:
  //apply_TaggerW(string file, string ele_WP, string mu_WP, string fr_ele_path, string pr_ele_path, string fr_mu_path, string pr_mu_path);
  apply_TaggerW(TString file_name, TString tgraph_name);

  char const* getName() const override { 
      return "apply_TaggerW"; 
  }
  TTreeFunction* clone() const override { 
      //return new apply_TaggerW(inputfile_path, ele_WP, mu_WP, fr_ele_path, pr_ele_path, fr_mu_path, pr_mu_path); 
      return new apply_TaggerW(n_file,n_graph); 
  }

  unsigned getNdata() override { return 1; }
  double evaluate(unsigned) override;

protected:  
  void bindTree_(multidraw::FunctionLibrary&) override;
  TString n_file;
  TString n_graph;
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
  FloatArrayReader* FatJet_mass{};	  
  FloatArrayReader* FatJet_Tagger{};	  
  IntArrayReader*   FatJet_jetId{};	  
  TH2F* Tag_map;

};

//apply_TaggerW::apply_TaggerW(string in_file, string ele_WP, string mu_WP, string in_fr_ele_path, string in_pr_ele_path, string in_fr_mu_path, string in_pr_mu_path) :
apply_TaggerW::apply_TaggerW(TString file_name, TString tgraph_name) :
    n_file(file_name),
    n_graph(tgraph_name),
    TTreeFunction()
{
    TFile* src_file = new TFile(TString(std::getenv("CMSSW_BASE"))+"/src/" + n_file);
    Tag_map     = (TH2F*)src_file->Get(n_graph);
    //Wpt_map_stat_up = (TH2F*)src_file->Get(n_graph+"_stat_up");
    //Wpt_map_stat_do = (TH2F*)src_file->Get(n_graph+"_stat_do");
    //Wpt_map_jetsel  = (TH2F*)src_file->Get(n_graph+"_jetsel");
        Tag_map->SetDirectory(0);
        src_file->Close();
    

}


double
apply_TaggerW::evaluate(unsigned)
{
bool GoodJet_cd = false;
int index_Good_0 = -1;
int index_Good_1 = -1;
int index_Good_2 = -1;
int index_Good_3 = -1;
int last_idx = -1;
const unsigned int nFat{*nFatJet->Get()};
const unsigned int nLep{*nLepton->Get()};
bool FatJet_candidate = false;
int count_jet_ov = 0;
std::vector< unsigned int> Fatindex_jet;
std::vector< unsigned int> Cleanindex_jet;
for (unsigned int ix{0}; ix < nFat; ix++) {
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
	if (GoodJet_cd == true){
		  if(index_Good_0 >= 0){ jx = 0;
                  }else if(index_Good_1 >= 1){jx = 1;
                  }else if(index_Good_2 >= 2){jx = 2;
                  }else if(index_Good_3 >= 3){jx = 3;
                  }else{ jx = last_idx;}

			 	 
      float top_rate;
       top_rate   = Tag_map->GetBinContent(Tag_map->FindBin(FatJet_mass->At(jx), FatJet_Tagger->At(jx)));
  return top_rate;
}
return -1;
}
void
apply_TaggerW::bindTree_(multidraw::FunctionLibrary& _library)
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
_library.bindBranch(FatJet_mass, "FatJet_msoftdrop_nom");
_library.bindBranch(FatJet_jetId, "FatJet_jetId");
_library.bindBranch(FatJet_Tagger, "FatJet_deepTag_WvsQCD");
}

#endif
