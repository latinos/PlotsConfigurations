#include <TMVA/Reader.h>

using namespace std;


TMVA::Reader* myreaderBDT = new TMVA::Reader();

//   float lepton_pt1;
//   float lepton_pt2;
   float mll_32;
   float mjj_32;
   float jetpt1_32;
   float jetpt2_32;
   float detajj_32;
//   float ptll_32;
   float jeteta1_32;
   float jeteta2_32;
   float met_32;
   float mth_32;

void initmyreaderBDT(){


//  myreaderBDT->AddVariable( "std_vector_lepton_pt[0]", &lepton_pt1 );
//  myreaderBDT->AddVariable( "std_vector_lepton_pt[1]", &lepton_pt2 );
  myreaderBDT->AddVariable( "mll", &mll_32 );
  myreaderBDT->AddVariable( "mjj", &mjj_32 );
  myreaderBDT->AddVariable( "jetpt1", &jetpt1_32 );
  myreaderBDT->AddVariable( "jetpt2", &jetpt2_32 );
  myreaderBDT->AddVariable( "detajj",&detajj_32);
//  myreaderBDT->AddVariable( "ptll", &ptll_32 );
  myreaderBDT->AddVariable( "jeteta1", &jeteta1_32);
  myreaderBDT->AddVariable( "jeteta2", &jeteta2_32);
  myreaderBDT->AddVariable( "metPfType1",&met_32);
  myreaderBDT->AddVariable( "mth",&mth_32);

  TString direction = "";

 direction = "/afs/cern.ch/work/a/arun/Latinos/HWW_Full2016/CMSSW_8_0_26_patch1/src/MUCCA/Optimization/weights/VBF_INCL_TMVAClassification_VBF_new_BDT.weights.xml";

  cout<<direction<<endl;
  myreaderBDT->BookMVA("BDT",direction);
}



float hww_VBF_mvaBDT(
//float leppt1,
//		     float leppt2,
		     float mll_33,
		     float mjj_33,
		     float jetpt1_33,
		     float jetpt2_33,
                     float detajj_33,
  //                   float ptllf,
                     float jeteta1_33,
                     float jeteta2_33,
                     float met_33,
                     float mth_33
		     ){

//  lepton_pt1 = leppt1;
//  lepton_pt2 = leppt2;
  mll_32        = mll_33;
  mjj_32        = mjj_33;
  jetpt1_32     = jetpt1_33;
  jetpt2_32     = jetpt2_33;
  detajj_32     = detajj_33;
//  ptll_32       = ptllf;
  jeteta1_32    = jeteta1_33;
  jeteta2_32    = jeteta2_33;
  met_32 = met_33;
  mth_32 = mth_33;

  //cout<<"BEFORE READING!!!!!!-------"<<endl;

  return  myreaderBDT->EvaluateMVA("BDT");
}   
