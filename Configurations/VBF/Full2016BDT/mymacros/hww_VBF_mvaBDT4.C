#include <TMVA/Reader.h>

using namespace std;


TMVA::Reader* myreaderBDT4 = new TMVA::Reader();

//   float lepton_pt1;
//   float lepton_pt2;
   float mll_38;
   float mjj_38;
   float jetpt1_38;
   float jetpt2_38;
   float detajj_38;
//   float ptll_38;
   float jeteta1_38;
   float jeteta2_38;
   float met_38;
   float mth_38;

void initmyreaderBDT4(){


//  myreaderBDT4->AddVariable( "std_vector_lepton_pt[0]", &lepton_pt1 );
//  myreaderBDT4->AddVariable( "std_vector_lepton_pt[1]", &lepton_pt2 );
  myreaderBDT4->AddVariable( "mll", &mll_38 );
  myreaderBDT4->AddVariable( "mjj", &mjj_38 );
  myreaderBDT4->AddVariable( "jetpt1", &jetpt1_38 );
  myreaderBDT4->AddVariable( "jetpt2", &jetpt2_38 );
  myreaderBDT4->AddVariable( "detajj",&detajj_38);
//  myreaderBDT4->AddVariable( "ptll", &ptll_38 );
  myreaderBDT4->AddVariable( "jeteta1", &jeteta1_38);
  myreaderBDT4->AddVariable( "jeteta2", &jeteta2_38);
  myreaderBDT4->AddVariable( "metPfType1",&met_38);
  myreaderBDT4->AddVariable( "mth",&mth_38);

  TString direction = "";

 direction = "/afs/cern.ch/work/a/arun/Latinos/HWW_Full2016/CMSSW_8_0_26_patch1/src/MUCCA/Optimization/weights/VBF_INCL_TMVAClassification_VBF_new_BDT4.weights.xml";

  cout<<direction<<endl;
  myreaderBDT4->BookMVA("BDT4",direction);
}



float hww_VBF_mvaBDT4(
//float leppt1,
//		     float leppt2,
		     float mll_39,
		     float mjj_39,
		     float jetpt1_39,
		     float jetpt2_39,
                     float detajj_39,
  //                   float ptllf,
                     float jeteta1_39,
                     float jeteta2_39,
                     float met_39,
                     float mth_39
		     ){

//  lepton_pt1 = leppt1;
//  lepton_pt2 = leppt2;
  mll_38        = mll_39;
  mjj_38        = mjj_39;
  jetpt1_38     = jetpt1_39;
  jetpt2_38     = jetpt2_39;
  detajj_38     = detajj_39;
//  ptll_38       = ptllf;
  jeteta1_38    = jeteta1_39;
  jeteta2_38    = jeteta2_39;
  met_38 = met_39;
  mth_38 = mth_39;

  //cout<<"BEFORE READING!!!!!!-------"<<endl;

  return  myreaderBDT4->EvaluateMVA("BDT4");
}   
