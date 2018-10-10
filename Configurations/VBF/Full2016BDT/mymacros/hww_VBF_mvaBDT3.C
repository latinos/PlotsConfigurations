#include <TMVA/Reader.h>

using namespace std;


TMVA::Reader* myreaderBDT3 = new TMVA::Reader();

//   float lepton_pt1;
//   float lepton_pt2;
   float mll_36;
   float mjj_36;
   float jetpt1_36;
   float jetpt2_36;
   float detajj_36;
//   float ptll_36;
   float jeteta1_36;
   float jeteta2_36;
   float met_36;
   float mth_36;

void initmyreaderBDT3(){


//  myreaderBDT3->AddVariable( "std_vector_lepton_pt[0]", &lepton_pt1 );
//  myreaderBDT3->AddVariable( "std_vector_lepton_pt[1]", &lepton_pt2 );
  myreaderBDT3->AddVariable( "mll", &mll_36 );
  myreaderBDT3->AddVariable( "mjj", &mjj_36 );
  myreaderBDT3->AddVariable( "jetpt1", &jetpt1_36 );
  myreaderBDT3->AddVariable( "jetpt2", &jetpt2_36 );
  myreaderBDT3->AddVariable( "detajj",&detajj_36);
//  myreaderBDT3->AddVariable( "ptll", &ptll_36 );
  myreaderBDT3->AddVariable( "jeteta1", &jeteta1_36);
  myreaderBDT3->AddVariable( "jeteta2", &jeteta2_36);
  myreaderBDT3->AddVariable( "metPfType1",&met_36);
  myreaderBDT3->AddVariable( "mth",&mth_36);

  TString direction = "";

 direction = "/afs/cern.ch/work/a/arun/Latinos/HWW_Full2016/CMSSW_8_0_26_patch1/src/MUCCA/Optimization/weights/VBF_INCL_TMVAClassification_VBF_new_BDT3.weights.xml";

  cout<<direction<<endl;
  myreaderBDT3->BookMVA("BDT3",direction);
}



float hww_VBF_mvaBDT3(
//float leppt1,
//		     float leppt2,
		     float mll_37,
		     float mjj_37,
		     float jetpt1_37,
		     float jetpt2_37,
                     float detajj_37,
  //                   float ptllf,
                     float jeteta1_37,
                     float jeteta2_37,
                     float met_37,
                     float mth_37
		     ){

//  lepton_pt1 = leppt1;
//  lepton_pt2 = leppt2;
  mll_36        = mll_37;
  mjj_36        = mjj_37;
  jetpt1_36     = jetpt1_37;
  jetpt2_36     = jetpt2_37;
  detajj_36     = detajj_37;
//  ptll_36       = ptllf;
  jeteta1_36    = jeteta1_37;
  jeteta2_36    = jeteta2_37;
  met_36 = met_37;
  mth_36 = mth_37;

  //cout<<"BEFORE READING!!!!!!-------"<<endl;

  return  myreaderBDT3->EvaluateMVA("BDT3");
}   
