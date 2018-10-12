#include <TMVA/Reader.h>

using namespace std;


TMVA::Reader* myreaderBDT14 = new TMVA::Reader();

//   float lepton_pt1;
//   float lepton_pt2;
   float mll_52;
   float mjj_52;
   float jetpt1_52;
   float jetpt2_52;
   float detajj_52;
//   float ptll_52;
   float jeteta1_52;
   float jeteta2_52;
   float met_52;
   float mth_52;

void initmyreaderBDT14(){


//  myreaderBDT14->AddVariable( "std_vector_lepton_pt[0]", &lepton_pt1 );
//  myreaderBDT14->AddVariable( "std_vector_lepton_pt[1]", &lepton_pt2 );
  myreaderBDT14->AddVariable( "mll", &mll_52 );
  myreaderBDT14->AddVariable( "mjj", &mjj_52 );
  myreaderBDT14->AddVariable( "jetpt1", &jetpt1_52 );
  myreaderBDT14->AddVariable( "jetpt2", &jetpt2_52 );
  myreaderBDT14->AddVariable( "detajj",&detajj_52);
//  myreaderBDT14->AddVariable( "ptll", &ptll_52 );
  myreaderBDT14->AddVariable( "jeteta1", &jeteta1_52);
  myreaderBDT14->AddVariable( "jeteta2", &jeteta2_52);
  myreaderBDT14->AddVariable( "metPfType1",&met_52);
  myreaderBDT14->AddVariable( "mth",&mth_52);

  TString direction = "";

 direction = "/afs/cern.ch/work/a/arun/Latinos/HWW_Full2016/CMSSW_8_0_26_patch1/src/MUCCA/Optimization/weights/VBF_INCL_TMVAClassification_VBF_new_BDT14.weights.xml";

  cout<<direction<<endl;
  myreaderBDT14->BookMVA("BDT14",direction);
}



float hww_VBF_mvaBDT14(
//float leppt1,
//		     float leppt2,
		     float mll_53,
		     float mjj_53,
		     float jetpt1_53,
		     float jetpt2_53,
                     float detajj_53,
  //                   float ptllf,
                     float jeteta1_53,
                     float jeteta2_53,
                     float met_53,
                     float mth_53
		     ){

//  lepton_pt1 = leppt1;
//  lepton_pt2 = leppt2;
  mll_52        = mll_53;
  mjj_52        = mjj_53;
  jetpt1_52     = jetpt1_53;
  jetpt2_52     = jetpt2_53;
  detajj_52     = detajj_53;
//  ptll_52       = ptllf;
  jeteta1_52    = jeteta1_53;
  jeteta2_52    = jeteta2_53;
  met_52 = met_53;
  mth_52 = mth_53;

  //cout<<"BEFORE READING!!!!!!-------"<<endl;

  return  myreaderBDT14->EvaluateMVA("BDT14");
}   
