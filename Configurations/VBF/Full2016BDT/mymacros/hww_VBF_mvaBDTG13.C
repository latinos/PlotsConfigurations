#include <TMVA/Reader.h>

using namespace std;


TMVA::Reader* myreaderBDTG13 = new TMVA::Reader();

//   float lepton_pt1;
//   float lepton_pt2;
   float mll_22;
   float mjj_22;
   float jetpt1_22;
   float jetpt2_22;
   float detajj_22;
//   float ptll_22;
   float jeteta1_22;
   float jeteta2_22;
   float met_22;
   float mth_22;

void initmyreaderBDTG13(){


//  myreaderBDTG13->AddVariable( "std_vector_lepton_pt[0]", &lepton_pt1 );
//  myreaderBDTG13->AddVariable( "std_vector_lepton_pt[1]", &lepton_pt2 );
  myreaderBDTG13->AddVariable( "mll", &mll_22 );
  myreaderBDTG13->AddVariable( "mjj", &mjj_22 );
  myreaderBDTG13->AddVariable( "jetpt1", &jetpt1_22 );
  myreaderBDTG13->AddVariable( "jetpt2", &jetpt2_22 );
  myreaderBDTG13->AddVariable( "detajj",&detajj_22);
//  myreaderBDTG13->AddVariable( "ptll", &ptll_22 );
  myreaderBDTG13->AddVariable( "jeteta1", &jeteta1_22);
  myreaderBDTG13->AddVariable( "jeteta2", &jeteta2_22);
  myreaderBDTG13->AddVariable( "metPfType1",&met_22);
  myreaderBDTG13->AddVariable( "mth",&mth_22);

  TString direction = "";

 direction = "/afs/cern.ch/work/a/arun/Latinos/HWW_Full2016/CMSSW_8_0_26_patch1/src/MUCCA/Optimization/weights/VBF_INCL_TMVAClassification_VBF_new_BDTG13.weights.xml";

  cout<<direction<<endl;
  myreaderBDTG13->BookMVA("BDTG13",direction);
}



float hww_VBF_mvaBDTG13(
//float leppt1,
//		     float leppt2,
		     float mll_23,
		     float mjj_23,
		     float jetpt1_23,
		     float jetpt2_23,
                     float detajj_23,
  //                   float ptllf,
                     float jeteta1_23,
                     float jeteta2_23,
                     float met_23,
                     float mth_23
		     ){

//  lepton_pt1 = leppt1;
//  lepton_pt2 = leppt2;
  mll_22        = mll_23;
  mjj_22        = mjj_23;
  jetpt1_22     = jetpt1_23;
  jetpt2_22     = jetpt2_23;
  detajj_22     = detajj_23;
//  ptll_22       = ptllf;
  jeteta1_22    = jeteta1_23;
  jeteta2_22    = jeteta2_23;
  met_22 = met_23;
  mth_22 = mth_23;

  //cout<<"BEFORE READING!!!!!!-------"<<endl;

  return  myreaderBDTG13->EvaluateMVA("BDTG13");
}   
