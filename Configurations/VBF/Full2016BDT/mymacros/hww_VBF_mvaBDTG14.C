#include <TMVA/Reader.h>

using namespace std;


TMVA::Reader* myreaderBDTG14 = new TMVA::Reader();

//   float lepton_pt1;
//   float lepton_pt2;
   float mll_24;
   float mjj_24;
   float jetpt1_24;
   float jetpt2_24;
   float detajj_24;
//   float ptll_24;
   float jeteta1_24;
   float jeteta2_24;
   float met_24;
   float mth_24;

void initmyreaderBDTG14(){


//  myreaderBDTG14->AddVariable( "std_vector_lepton_pt[0]", &lepton_pt1 );
//  myreaderBDTG14->AddVariable( "std_vector_lepton_pt[1]", &lepton_pt2 );
  myreaderBDTG14->AddVariable( "mll", &mll_24 );
  myreaderBDTG14->AddVariable( "mjj", &mjj_24 );
  myreaderBDTG14->AddVariable( "jetpt1", &jetpt1_24 );
  myreaderBDTG14->AddVariable( "jetpt2", &jetpt2_24 );
  myreaderBDTG14->AddVariable( "detajj",&detajj_24);
//  myreaderBDTG14->AddVariable( "ptll", &ptll_24 );
  myreaderBDTG14->AddVariable( "jeteta1", &jeteta1_24);
  myreaderBDTG14->AddVariable( "jeteta2", &jeteta2_24);
  myreaderBDTG14->AddVariable( "metPfType1",&met_24);
  myreaderBDTG14->AddVariable( "mth",&mth_24);

  TString direction = "";

 direction = "/afs/cern.ch/work/a/arun/Latinos/HWW_Full2016/CMSSW_8_0_26_patch1/src/MUCCA/Optimization/weights/VBF_INCL_TMVAClassification_VBF_new_BDTG14.weights.xml";

  cout<<direction<<endl;
  myreaderBDTG14->BookMVA("BDTG14",direction);
}



float hww_VBF_mvaBDTG14(
//float leppt1,
//		     float leppt2,
		     float mll_25,
		     float mjj_25,
		     float jetpt1_25,
		     float jetpt2_25,
                     float detajj_25,
  //                   float ptllf,
                     float jeteta1_25,
                     float jeteta2_25,
                     float met_25,
                     float mth_25
		     ){

//  lepton_pt1 = leppt1;
//  lepton_pt2 = leppt2;
  mll_24        = mll_25;
  mjj_24        = mjj_25;
  jetpt1_24     = jetpt1_25;
  jetpt2_24     = jetpt2_25;
  detajj_24     = detajj_25;
//  ptll_24       = ptllf;
  jeteta1_24    = jeteta1_25;
  jeteta2_24    = jeteta2_25;
  met_24 = met_25;
  mth_24 = mth_25;

  //cout<<"BEFORE READING!!!!!!-------"<<endl;

  return  myreaderBDTG14->EvaluateMVA("BDTG14");
}   
