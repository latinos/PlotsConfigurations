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

#ifndef apply_ratio_trig_MC_HH
#define apply_ratio_trig_MC_HH

class apply_ratio_trig_MC : public multidraw::TTreeFunction {
public:
  //apply_ratio_trig_MC(string file, string ele_WP, string mu_WP, string fr_ele_path, string pr_ele_path, string fr_mu_path, string pr_mu_path);
  apply_ratio_trig_MC(TString file_name);

  char const* getName() const override { 
      return "apply_ratio_trig_MC"; 
  }
  TTreeFunction* clone() const override { 
      //return new apply_ratio_trig_MC(inputfile_path, ele_WP, mu_WP, fr_ele_path, pr_ele_path, fr_mu_path, pr_mu_path); 
      return new apply_ratio_trig_MC(n_file); 
  }

  unsigned getNdata() override { return 1; }
  double evaluate(unsigned) override;

protected:  
  void bindTree_(multidraw::FunctionLibrary&) override;
  TString n_file;
  IntArrayReader*   Lep_Id;
  FloatArrayReader* Lep_pt{}; 
  FloatArrayReader* Lep_eta{};	
  FloatArrayReader* Lep_phi{};
  UIntValueReader*  nLepton{};
  TH1D* h_mu;
  TH1D* h_el;

};

//apply_ratio_trig_MC::apply_ratio_trig_MC(string in_file, string ele_WP, string mu_WP, string in_fr_ele_path, string in_pr_ele_path, string in_fr_mu_path, string in_pr_mu_path) :
apply_ratio_trig_MC::apply_ratio_trig_MC(TString file_name) :
    n_file(file_name),
 //   n_graph(tgraph_name),
    TTreeFunction()
{
    TFile* src_file = new TFile(TString(std::getenv("CMSSW_BASE"))+"/src/" + n_file);
    h_mu     = (TH1D*)src_file->Get("histo_2018_triggerdiff_mu_wje");
    h_el     = (TH1D*)src_file->Get("histo_2018_triggerdiff_el_Wje");
    //Wpt_map_stat_up = (TH2F*)src_file->Get(n_graph+"_stat_up");
    //Wpt_map_stat_do = (TH2F*)src_file->Get(n_graph+"_stat_do");
    //Wpt_map_jetsel  = (TH2F*)src_file->Get(n_graph+"_jetsel");
        h_mu->SetDirectory(0);
        h_el->SetDirectory(0);
        src_file->Close();
    

}


double
apply_ratio_trig_MC::evaluate(unsigned)
{
  double lepEta{Lep_eta->At(0)};
  double lepPt{Lep_pt->At(0)};
  int lepIdx{Lep_Id->At(0)};

float  trigger_rate;
	if (lepIdx ==13 ){	
      	 trigger_rate   = h_mu->GetBinContent(h_mu->FindBin(lepPt));
	}else{
      	 trigger_rate   = h_el->GetBinContent(h_mu->FindBin(lepPt));
}
  return trigger_rate;
}
void
apply_ratio_trig_MC::bindTree_(multidraw::FunctionLibrary& _library)
{   
_library.bindBranch(Lep_Id, "Lepton_pdgId"); 
_library.bindBranch(Lep_pt, "Lepton_pt");
_library.bindBranch(Lep_eta, "Lepton_eta");
_library.bindBranch(Lep_phi, "Lepton_phi");
_library.bindBranch(nLepton, "nLepton");
}

#endif
