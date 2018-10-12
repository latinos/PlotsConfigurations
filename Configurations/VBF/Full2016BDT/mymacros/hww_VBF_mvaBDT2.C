#include <TMVA/Reader.h>

using namespace std;


TMVA::Reader* myreaderBDT2 = new TMVA::Reader();

//   float lepton_pt1;
//   float lepton_pt2;
   float mll_34;
   float mjj_34;
   float jetpt1_34;
   float jetpt2_34;
   float detajj_34;
//   float ptll_34;
   float jeteta1_34;
   float jeteta2_34;
   float met_34;
   float mth_34;

void initmyreaderBDT2(){


//  myreaderBDT2->AddVariable( "std_vector_lepton_pt[0]", &lepton_pt1 );
//  myreaderBDT2->AddVariable( "std_vector_lepton_pt[1]", &lepton_pt2 );
  myreaderBDT2->AddVariable( "mll", &mll_34 );
  myreaderBDT2->AddVariable( "mjj", &mjj_34 );
  myreaderBDT2->AddVariable( "jetpt1", &jetpt1_34 );
  myreaderBDT2->AddVariable( "jetpt2", &jetpt2_34 );
  myreaderBDT2->AddVariable( "detajj",&detajj_34);
//  myreaderBDT2->AddVariable( "ptll", &ptll_34 );
  myreaderBDT2->AddVariable( "jeteta1", &jeteta1_34);
  myreaderBDT2->AddVariable( "jeteta2", &jeteta2_34);
  myreaderBDT2->AddVariable( "metPfType1",&met_34);
  myreaderBDT2->AddVariable( "mth",&mth_34);

  TString direction = "";

 direction = "/afs/cern.ch/work/a/arun/Latinos/HWW_Full2016/CMSSW_8_0_26_patch1/src/MUCCA/Optimization/weights/VBF_INCL_TMVAClassification_VBF_new_BDT2.weights.xml";

  cout<<direction<<endl;
  myreaderBDT2->BookMVA("BDT2",direction);
}



float hww_VBF_mvaBDT2(
//float leppt1,
//		     float leppt2,
		     float mll_35,
		     float mjj_35,
		     float jetpt1_35,
		     float jetpt2_35,
                     float detajj_35,
  //                   float ptllf,
                     float jeteta1_35,
                     float jeteta2_35,
                     float met_35,
                     float mth_35
		     ){

//  lepton_pt1 = leppt1;
//  lepton_pt2 = leppt2;
  mll_34        = mll_35;
  mjj_34        = mjj_35;
  jetpt1_34     = jetpt1_35;
  jetpt2_34     = jetpt2_35;
  detajj_34     = detajj_35;
//  ptll_34       = ptllf;
  jeteta1_34    = jeteta1_35;
  jeteta2_34    = jeteta2_35;
  met_34 = met_35;
  mth_34 = mth_35;

  //cout<<"BEFORE READING!!!!!!-------"<<endl;

  return  myreaderBDT2->EvaluateMVA("BDT2");
}   
