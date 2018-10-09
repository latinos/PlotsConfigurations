#include <TMVA/Reader.h>

using namespace std;


TMVA::Reader* myreaderBDTG2 = new TMVA::Reader();

//   float lepton_pt1;
//   float lepton_pt2;
   float mll_8;
   float mjj_8;
   float jetpt1_8;
   float jetpt2_8;
   float detajj_8;
//   float ptll_8;
   float jeteta1_8;
   float jeteta2_8;
   float met_8;
   float mth_8;

void initmyreaderBDTG2(){


//  myreaderBDTG2->AddVariable( "std_vector_lepton_pt[0]", &lepton_pt1 );
//  myreaderBDTG2->AddVariable( "std_vector_lepton_pt[1]", &lepton_pt2 );
  myreaderBDTG2->AddVariable( "mll", &mll_8 );
  myreaderBDTG2->AddVariable( "mjj", &mjj_8 );
  myreaderBDTG2->AddVariable( "jetpt1", &jetpt1_8 );
  myreaderBDTG2->AddVariable( "jetpt2", &jetpt2_8 );
  myreaderBDTG2->AddVariable( "detajj",&detajj_8);
//  myreaderBDTG2->AddVariable( "ptll", &ptll_8 );
  myreaderBDTG2->AddVariable( "jeteta1", &jeteta1_8);
  myreaderBDTG2->AddVariable( "jeteta2", &jeteta2_8);
  myreaderBDTG2->AddVariable( "metPfType1",&met_8);
  myreaderBDTG2->AddVariable( "mth",&mth_8);

  TString direction = "";

 direction = "/afs/cern.ch/work/a/arun/Latinos/HWW_Full2016/CMSSW_8_0_26_patch1/src/MUCCA/Optimization/weights/VBF_INCL_TMVAClassification_VBF_new_BDTG2.weights.xml";

  cout<<direction<<endl;
  myreaderBDTG2->BookMVA("BDTG2",direction);
}



float hww_VBF_mvaBDTG2(
//float leppt1,
//		     float leppt2,
		     float mll_9,
		     float mjj_9,
		     float jetpt1_9,
		     float jetpt2_9,
                     float detajj_9,
  //                   float ptllf,
                     float jeteta1_9,
                     float jeteta2_9,
                     float met_9,
                     float mth_9
		     ){

//  lepton_pt1 = leppt1;
//  lepton_pt2 = leppt2;
  mll_8        = mll_9;
  mjj_8        = mjj_9;
  jetpt1_8     = jetpt1_9;
  jetpt2_8     = jetpt2_9;
  detajj_8     = detajj_9;
//  ptll_8       = ptllf;
  jeteta1_8    = jeteta1_9;
  jeteta2_8    = jeteta2_9;
  met_8 = met_9;
  mth_8 = mth_9;

  //cout<<"BEFORE READING!!!!!!-------"<<endl;

  return  myreaderBDTG2->EvaluateMVA("BDTG2");
}   
