#include <TMVA/Reader.h>

using namespace std;


TMVA::Reader* myreaderBDTG6 = new TMVA::Reader();

//   float lepton_pt1;
//   float lepton_pt2;
   float mll_14;
   float mjj_14;
   float jetpt1_14;
   float jetpt2_14;
   float detajj_14;
//   float ptll_14;
   float jeteta1_14;
   float jeteta2_14;
   float met_14;
   float mth_14;

void initmyreaderBDTG6(){


//  myreaderBDTG6->AddVariable( "std_vector_lepton_pt[0]", &lepton_pt1 );
//  myreaderBDTG6->AddVariable( "std_vector_lepton_pt[1]", &lepton_pt2 );
  myreaderBDTG6->AddVariable( "mll", &mll_14 );
  myreaderBDTG6->AddVariable( "mjj", &mjj_14 );
  myreaderBDTG6->AddVariable( "jetpt1", &jetpt1_14 );
  myreaderBDTG6->AddVariable( "jetpt2", &jetpt2_14 );
  myreaderBDTG6->AddVariable( "detajj",&detajj_14);
//  myreaderBDTG6->AddVariable( "ptll", &ptll_14 );
  myreaderBDTG6->AddVariable( "jeteta1", &jeteta1_14);
  myreaderBDTG6->AddVariable( "jeteta2", &jeteta2_14);
  myreaderBDTG6->AddVariable( "metPfType1",&met_14);
  myreaderBDTG6->AddVariable( "mth",&mth_14);

  TString direction = "";

 direction = "/afs/cern.ch/work/a/arun/Latinos/HWW_Full2016/CMSSW_8_0_26_patch1/src/MUCCA/Optimization/weights/VBF_INCL_TMVAClassification_VBF_new_BDTG6.weights.xml";

  cout<<direction<<endl;
  myreaderBDTG6->BookMVA("BDTG6",direction);
}



float hww_VBF_mvaBDTG6(
//float leppt1,
//		     float leppt2,
		     float mll_15,
		     float mjj_15,
		     float jetpt1_15,
		     float jetpt2_15,
                     float detajj_15,
  //                   float ptllf,
                     float jeteta1_15,
                     float jeteta2_15,
                     float met_15,
                     float mth_15
		     ){

//  lepton_pt1 = leppt1;
//  lepton_pt2 = leppt2;
  mll_14        = mll_15;
  mjj_14        = mjj_15;
  jetpt1_14     = jetpt1_15;
  jetpt2_14     = jetpt2_15;
  detajj_14     = detajj_15;
//  ptll_14       = ptllf;
  jeteta1_14    = jeteta1_15;
  jeteta2_14    = jeteta2_15;
  met_14 = met_15;
  mth_14 = mth_15;

  //cout<<"BEFORE READING!!!!!!-------"<<endl;

  return  myreaderBDTG6->EvaluateMVA("BDTG6");
}   
