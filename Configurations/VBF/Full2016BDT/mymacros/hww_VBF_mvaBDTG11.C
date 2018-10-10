#include <TMVA/Reader.h>

using namespace std;


TMVA::Reader* myreaderBDTG11 = new TMVA::Reader();

//   float lepton_pt1;
//   float lepton_pt2;
   float mll_18;
   float mjj_18;
   float jetpt1_18;
   float jetpt2_18;
   float detajj_18;
//   float ptll_18;
   float jeteta1_18;
   float jeteta2_18;
   float met_18;
   float mth_18;

void initmyreaderBDTG11(){


//  myreaderBDTG11->AddVariable( "std_vector_lepton_pt[0]", &lepton_pt1 );
//  myreaderBDTG11->AddVariable( "std_vector_lepton_pt[1]", &lepton_pt2 );
  myreaderBDTG11->AddVariable( "mll", &mll_18 );
  myreaderBDTG11->AddVariable( "mjj", &mjj_18 );
  myreaderBDTG11->AddVariable( "jetpt1", &jetpt1_18 );
  myreaderBDTG11->AddVariable( "jetpt2", &jetpt2_18 );
  myreaderBDTG11->AddVariable( "detajj",&detajj_18);
//  myreaderBDTG11->AddVariable( "ptll", &ptll_18 );
  myreaderBDTG11->AddVariable( "jeteta1", &jeteta1_18);
  myreaderBDTG11->AddVariable( "jeteta2", &jeteta2_18);
  myreaderBDTG11->AddVariable( "metPfType1",&met_18);
  myreaderBDTG11->AddVariable( "mth",&mth_18);

  TString direction = "";

 direction = "/afs/cern.ch/work/a/arun/Latinos/HWW_Full2016/CMSSW_8_0_26_patch1/src/MUCCA/Optimization/weights/VBF_INCL_TMVAClassification_VBF_new_BDTG11.weights.xml";

  cout<<direction<<endl;
  myreaderBDTG11->BookMVA("BDTG11",direction);
}



float hww_VBF_mvaBDTG11(
//float leppt1,
//		     float leppt2,
		     float mll_19,
		     float mjj_19,
		     float jetpt1_19,
		     float jetpt2_19,
                     float detajj_19,
  //                   float ptllf,
                     float jeteta1_19,
                     float jeteta2_19,
                     float met_19,
                     float mth_19
		     ){

//  lepton_pt1 = leppt1;
//  lepton_pt2 = leppt2;
  mll_18        = mll_19;
  mjj_18        = mjj_19;
  jetpt1_18     = jetpt1_19;
  jetpt2_18     = jetpt2_19;
  detajj_18     = detajj_19;
//  ptll_18       = ptllf;
  jeteta1_18    = jeteta1_19;
  jeteta2_18    = jeteta2_19;
  met_18 = met_19;
  mth_18 = mth_19;

  //cout<<"BEFORE READING!!!!!!-------"<<endl;

  return  myreaderBDTG11->EvaluateMVA("BDTG11");
}   
