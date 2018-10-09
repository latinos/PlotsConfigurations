#include <TMVA/Reader.h>

using namespace std;


TMVA::Reader* myreaderBDT12 = new TMVA::Reader();

//   float lepton_pt1;
//   float lepton_pt2;
   float mll_50;
   float mjj_50;
   float jetpt1_50;
   float jetpt2_50;
   float detajj_50;
//   float ptll_50;
   float jeteta1_50;
   float jeteta2_50;
   float met_50;
   float mth_50;

void initmyreaderBDT12(){


//  myreaderBDT12->AddVariable( "std_vector_lepton_pt[0]", &lepton_pt1 );
//  myreaderBDT12->AddVariable( "std_vector_lepton_pt[1]", &lepton_pt2 );
  myreaderBDT12->AddVariable( "mll", &mll_50 );
  myreaderBDT12->AddVariable( "mjj", &mjj_50 );
  myreaderBDT12->AddVariable( "jetpt1", &jetpt1_50 );
  myreaderBDT12->AddVariable( "jetpt2", &jetpt2_50 );
  myreaderBDT12->AddVariable( "detajj",&detajj_50);
//  myreaderBDT12->AddVariable( "ptll", &ptll_50 );
  myreaderBDT12->AddVariable( "jeteta1", &jeteta1_50);
  myreaderBDT12->AddVariable( "jeteta2", &jeteta2_50);
  myreaderBDT12->AddVariable( "metPfType1",&met_50);
  myreaderBDT12->AddVariable( "mth",&mth_50);

  TString direction = "";

 direction = "/afs/cern.ch/work/a/arun/Latinos/HWW_Full2016/CMSSW_8_0_26_patch1/src/MUCCA/Optimization/weights/VBF_INCL_TMVAClassification_VBF_new_BDT12.weights.xml";

  cout<<direction<<endl;
  myreaderBDT12->BookMVA("BDT12",direction);
}



float hww_VBF_mvaBDT12(
//float leppt1,
//		     float leppt2,
		     float mll_51,
		     float mjj_51,
		     float jetpt1_51,
		     float jetpt2_51,
                     float detajj_51,
  //                   float ptllf,
                     float jeteta1_51,
                     float jeteta2_51,
                     float met_51,
                     float mth_51
		     ){

//  lepton_pt1 = leppt1;
//  lepton_pt2 = leppt2;
  mll_50        = mll_51;
  mjj_50        = mjj_51;
  jetpt1_50     = jetpt1_51;
  jetpt2_50     = jetpt2_51;
  detajj_50     = detajj_51;
//  ptll_50       = ptllf;
  jeteta1_50    = jeteta1_51;
  jeteta2_50    = jeteta2_51;
  met_50 = met_51;
  mth_50 = mth_51;

  //cout<<"BEFORE READING!!!!!!-------"<<endl;

  return  myreaderBDT12->EvaluateMVA("BDT12");
}   
