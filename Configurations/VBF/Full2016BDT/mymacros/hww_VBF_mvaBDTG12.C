#include <TMVA/Reader.h>

using namespace std;


TMVA::Reader* myreaderBDTG12 = new TMVA::Reader();

//   float lepton_pt1;
//   float lepton_pt2;
   float mll_20;
   float mjj_20;
   float jetpt1_20;
   float jetpt2_20;
   float detajj_20;
//   float ptll_20;
   float jeteta1_20;
   float jeteta2_20;
   float met_20;
   float mth_20;

void initmyreaderBDTG12(){


//  myreaderBDTG12->AddVariable( "std_vector_lepton_pt[0]", &lepton_pt1 );
//  myreaderBDTG12->AddVariable( "std_vector_lepton_pt[1]", &lepton_pt2 );
  myreaderBDTG12->AddVariable( "mll", &mll_20 );
  myreaderBDTG12->AddVariable( "mjj", &mjj_20 );
  myreaderBDTG12->AddVariable( "jetpt1", &jetpt1_20 );
  myreaderBDTG12->AddVariable( "jetpt2", &jetpt2_20 );
  myreaderBDTG12->AddVariable( "detajj",&detajj_20);
//  myreaderBDTG12->AddVariable( "ptll", &ptll_20 );
  myreaderBDTG12->AddVariable( "jeteta1", &jeteta1_20);
  myreaderBDTG12->AddVariable( "jeteta2", &jeteta2_20);
  myreaderBDTG12->AddVariable( "metPfType1",&met_20);
  myreaderBDTG12->AddVariable( "mth",&mth_20);

  TString direction = "";

 direction = "/afs/cern.ch/work/a/arun/Latinos/HWW_Full2016/CMSSW_8_0_26_patch1/src/MUCCA/Optimization/weights/VBF_INCL_TMVAClassification_VBF_new_BDTG12.weights.xml";

  cout<<direction<<endl;
  myreaderBDTG12->BookMVA("BDTG12",direction);
}



float hww_VBF_mvaBDTG12(
//float leppt1,
//		     float leppt2,
		     float mll_21,
		     float mjj_21,
		     float jetpt1_21,
		     float jetpt2_21,
                     float detajj_21,
  //                   float ptllf,
                     float jeteta1_21,
                     float jeteta2_21,
                     float met_21,
                     float mth_21
		     ){

//  lepton_pt1 = leppt1;
//  lepton_pt2 = leppt2;
  mll_20        = mll_21;
  mjj_20        = mjj_21;
  jetpt1_20     = jetpt1_21;
  jetpt2_20     = jetpt2_21;
  detajj_20     = detajj_21;
//  ptll_20       = ptllf;
  jeteta1_20    = jeteta1_21;
  jeteta2_20    = jeteta2_21;
  met_20 = met_21;
  mth_20 = mth_21;

  //cout<<"BEFORE READING!!!!!!-------"<<endl;

  return  myreaderBDTG12->EvaluateMVA("BDTG12");
}   
