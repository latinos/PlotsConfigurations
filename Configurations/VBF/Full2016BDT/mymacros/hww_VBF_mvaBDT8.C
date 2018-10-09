#include <TMVA/Reader.h>

using namespace std;


TMVA::Reader* myreaderBDT8 = new TMVA::Reader();

//   float lepton_pt1;
//   float lepton_pt2;
   float mll_46;
   float mjj_46;
   float jetpt1_46;
   float jetpt2_46;
   float detajj_46;
//   float ptll_46;
   float jeteta1_46;
   float jeteta2_46;
   float met_46;
   float mth_46;

void initmyreaderBDT8(){


//  myreaderBDT8->AddVariable( "std_vector_lepton_pt[0]", &lepton_pt1 );
//  myreaderBDT8->AddVariable( "std_vector_lepton_pt[1]", &lepton_pt2 );
  myreaderBDT8->AddVariable( "mll", &mll_46 );
  myreaderBDT8->AddVariable( "mjj", &mjj_46 );
  myreaderBDT8->AddVariable( "jetpt1", &jetpt1_46 );
  myreaderBDT8->AddVariable( "jetpt2", &jetpt2_46 );
  myreaderBDT8->AddVariable( "detajj",&detajj_46);
//  myreaderBDT8->AddVariable( "ptll", &ptll_46 );
  myreaderBDT8->AddVariable( "jeteta1", &jeteta1_46);
  myreaderBDT8->AddVariable( "jeteta2", &jeteta2_46);
  myreaderBDT8->AddVariable( "metPfType1",&met_46);
  myreaderBDT8->AddVariable( "mth",&mth_46);

  TString direction = "";

 direction = "/afs/cern.ch/work/a/arun/Latinos/HWW_Full2016/CMSSW_8_0_26_patch1/src/MUCCA/Optimization/weights/VBF_INCL_TMVAClassification_VBF_new_BDT8.weights.xml";

  cout<<direction<<endl;
  myreaderBDT8->BookMVA("BDT8",direction);
}



float hww_VBF_mvaBDT8(
//float leppt1,
//		     float leppt2,
		     float mll_47,
		     float mjj_47,
		     float jetpt1_47,
		     float jetpt2_47,
                     float detajj_47,
  //                   float ptllf,
                     float jeteta1_47,
                     float jeteta2_47,
                     float met_47,
                     float mth_47
		     ){

//  lepton_pt1 = leppt1;
//  lepton_pt2 = leppt2;
  mll_46        = mll_47;
  mjj_46        = mjj_47;
  jetpt1_46     = jetpt1_47;
  jetpt2_46     = jetpt2_47;
  detajj_46     = detajj_47;
//  ptll_46       = ptllf;
  jeteta1_46    = jeteta1_47;
  jeteta2_46    = jeteta2_47;
  met_46 = met_47;
  mth_46 = mth_47;

  //cout<<"BEFORE READING!!!!!!-------"<<endl;

  return  myreaderBDT8->EvaluateMVA("BDT8");
}   
