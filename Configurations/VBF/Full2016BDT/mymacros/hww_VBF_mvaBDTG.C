#include <TMVA/Reader.h>

using namespace std;


TMVA::Reader* myreaderBDTG = new TMVA::Reader();

//   float lepton_pt1;
//   float lepton_pt2;
   float mll_6;
   float mjj_6;
   float jetpt1_6;
   float jetpt2_6;
   float detajj_6;
//   float ptll_6;
   float jeteta1_6;
   float jeteta2_6;
   float met_6;
   float mth_6;

void initmyreaderBDTG(){


//  myreaderBDTG->AddVariable( "std_vector_lepton_pt[0]", &lepton_pt1 );
//  myreaderBDTG->AddVariable( "std_vector_lepton_pt[1]", &lepton_pt2 );
  myreaderBDTG->AddVariable( "mll", &mll_6 );
  myreaderBDTG->AddVariable( "mjj", &mjj_6 );
  myreaderBDTG->AddVariable( "jetpt1", &jetpt1_6 );
  myreaderBDTG->AddVariable( "jetpt2", &jetpt2_6 );
  myreaderBDTG->AddVariable( "detajj",&detajj_6);
//  myreaderBDTG->AddVariable( "ptll", &ptll_6 );
  myreaderBDTG->AddVariable( "jeteta1", &jeteta1_6);
  myreaderBDTG->AddVariable( "jeteta2", &jeteta2_6);
  myreaderBDTG->AddVariable( "metPfType1",&met_6);
  myreaderBDTG->AddVariable( "mth",&mth_6);

  TString direction = "";

 direction = "/afs/cern.ch/work/a/arun/Latinos/HWW_Full2016/CMSSW_8_0_26_patch1/src/MUCCA/Optimization/weights/VBF_INCL_TMVAClassification_VBF_new_BDTG.weights.xml";

  cout<<direction<<endl;
  myreaderBDTG->BookMVA("BDTG",direction);
}



float hww_VBF_mvaBDTG(
//float leppt1,
//		     float leppt2,
		     float mll_7,
		     float mjj_7,
		     float jetpt1_7,
		     float jetpt2_7,
                     float detajj_7,
  //                   float ptllf,
                     float jeteta1_7,
                     float jeteta2_7,
                     float met_7,
                     float mth_7
		     ){

//  lepton_pt1 = leppt1;
//  lepton_pt2 = leppt2;
  mll_6        = mll_7;
  mjj_6        = mjj_7;
  jetpt1_6     = jetpt1_7;
  jetpt2_6     = jetpt2_7;
  detajj_6     = detajj_7;
//  ptll_6       = ptllf;
  jeteta1_6    = jeteta1_7;
  jeteta2_6    = jeteta2_7;
  met_6 = met_7;
  mth_6 = mth_7;

  //cout<<"BEFORE READING!!!!!!-------"<<endl;

  return  myreaderBDTG->EvaluateMVA("BDTG");
}   
