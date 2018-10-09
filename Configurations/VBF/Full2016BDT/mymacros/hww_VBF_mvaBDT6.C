#include <TMVA/Reader.h>

using namespace std;


TMVA::Reader* myreaderBDT6 = new TMVA::Reader();

//   float lepton_pt1;
//   float lepton_pt2;
   float mll_42;
   float mjj_42;
   float jetpt1_42;
   float jetpt2_42;
   float detajj_42;
//   float ptll_42;
   float jeteta1_42;
   float jeteta2_42;
   float met_42;
   float mth_42;

void initmyreaderBDT6(){


//  myreaderBDT6->AddVariable( "std_vector_lepton_pt[0]", &lepton_pt1 );
//  myreaderBDT6->AddVariable( "std_vector_lepton_pt[1]", &lepton_pt2 );
  myreaderBDT6->AddVariable( "mll", &mll_42 );
  myreaderBDT6->AddVariable( "mjj", &mjj_42 );
  myreaderBDT6->AddVariable( "jetpt1", &jetpt1_42 );
  myreaderBDT6->AddVariable( "jetpt2", &jetpt2_42 );
  myreaderBDT6->AddVariable( "detajj",&detajj_42);
//  myreaderBDT6->AddVariable( "ptll", &ptll_42 );
  myreaderBDT6->AddVariable( "jeteta1", &jeteta1_42);
  myreaderBDT6->AddVariable( "jeteta2", &jeteta2_42);
  myreaderBDT6->AddVariable( "metPfType1",&met_42);
  myreaderBDT6->AddVariable( "mth",&mth_42);

  TString direction = "";

 direction = "/afs/cern.ch/work/a/arun/Latinos/HWW_Full2016/CMSSW_8_0_26_patch1/src/MUCCA/Optimization/weights/VBF_INCL_TMVAClassification_VBF_new_BDT6.weights.xml";

  cout<<direction<<endl;
  myreaderBDT6->BookMVA("BDT6",direction);
}



float hww_VBF_mvaBDT6(
//float leppt1,
//		     float leppt2,
		     float mll_43,
		     float mjj_43,
		     float jetpt1_43,
		     float jetpt2_43,
                     float detajj_43,
  //                   float ptllf,
                     float jeteta1_43,
                     float jeteta2_43,
                     float met_43,
                     float mth_43
		     ){

//  lepton_pt1 = leppt1;
//  lepton_pt2 = leppt2;
  mll_42        = mll_43;
  mjj_42        = mjj_43;
  jetpt1_42     = jetpt1_43;
  jetpt2_42     = jetpt2_43;
  detajj_42     = detajj_43;
//  ptll_42       = ptllf;
  jeteta1_42    = jeteta1_43;
  jeteta2_42    = jeteta2_43;
  met_42 = met_43;
  mth_42 = mth_43;

  //cout<<"BEFORE READING!!!!!!-------"<<endl;

  return  myreaderBDT6->EvaluateMVA("BDT6");
}   
