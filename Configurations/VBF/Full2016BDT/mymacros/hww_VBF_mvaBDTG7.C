#include <TMVA/Reader.h>

using namespace std;


TMVA::Reader* myreaderBDTG7 = new TMVA::Reader();

//   float lepton_pt1;
//   float lepton_pt2;
   float mll_16;
   float mjj_16;
   float jetpt1_16;
   float jetpt2_16;
   float detajj_16;
//   float ptll_16;
   float jeteta1_16;
   float jeteta2_16;
   float met_16;
   float mth_16;

void initmyreaderBDTG7(){


//  myreaderBDTG7->AddVariable( "std_vector_lepton_pt[0]", &lepton_pt1 );
//  myreaderBDTG7->AddVariable( "std_vector_lepton_pt[1]", &lepton_pt2 );
  myreaderBDTG7->AddVariable( "mll", &mll_16 );
  myreaderBDTG7->AddVariable( "mjj", &mjj_16 );
  myreaderBDTG7->AddVariable( "jetpt1", &jetpt1_16 );
  myreaderBDTG7->AddVariable( "jetpt2", &jetpt2_16 );
  myreaderBDTG7->AddVariable( "detajj",&detajj_16);
//  myreaderBDTG7->AddVariable( "ptll", &ptll_16 );
  myreaderBDTG7->AddVariable( "jeteta1", &jeteta1_16);
  myreaderBDTG7->AddVariable( "jeteta2", &jeteta2_16);
  myreaderBDTG7->AddVariable( "metPfType1",&met_16);
  myreaderBDTG7->AddVariable( "mth",&mth_16);

  TString direction = "";

 direction = "/afs/cern.ch/work/a/arun/Latinos/HWW_Full2016/CMSSW_8_0_26_patch1/src/MUCCA/Optimization/weights/VBF_INCL_TMVAClassification_VBF_new_BDTG7.weights.xml";

  cout<<direction<<endl;
  myreaderBDTG7->BookMVA("BDTG7",direction);
}



float hww_VBF_mvaBDTG7(
//float leppt1,
//		     float leppt2,
		     float mll_17,
		     float mjj_17,
		     float jetpt1_17,
		     float jetpt2_17,
                     float detajj_17,
  //                   float ptllf,
                     float jeteta1_17,
                     float jeteta2_17,
                     float met_17,
                     float mth_17
		     ){

//  lepton_pt1 = leppt1;
//  lepton_pt2 = leppt2;
  mll_16        = mll_17;
  mjj_16        = mjj_17;
  jetpt1_16     = jetpt1_17;
  jetpt2_16     = jetpt2_17;
  detajj_16     = detajj_17;
//  ptll_16       = ptllf;
  jeteta1_16    = jeteta1_17;
  jeteta2_16    = jeteta2_17;
  met_16 = met_17;
  mth_16 = mth_17;

  //cout<<"BEFORE READING!!!!!!-------"<<endl;

  return  myreaderBDTG7->EvaluateMVA("BDTG7");
}   
