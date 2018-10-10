#include <TMVA/Reader.h>

using namespace std;


TMVA::Reader* myreaderBDTG17 = new TMVA::Reader();

//   float lepton_pt1;
//   float lepton_pt2;
   float mll_30;
   float mjj_30;
   float jetpt1_30;
   float jetpt2_30;
   float detajj_30;
//   float ptll_30;
   float jeteta1_30;
   float jeteta2_30;
   float met_30;
   float mth_30;

void initmyreaderBDTG17(){


//  myreaderBDTG17->AddVariable( "std_vector_lepton_pt[0]", &lepton_pt1 );
//  myreaderBDTG17->AddVariable( "std_vector_lepton_pt[1]", &lepton_pt2 );
  myreaderBDTG17->AddVariable( "mll", &mll_30 );
  myreaderBDTG17->AddVariable( "mjj", &mjj_30 );
  myreaderBDTG17->AddVariable( "jetpt1", &jetpt1_30 );
  myreaderBDTG17->AddVariable( "jetpt2", &jetpt2_30 );
  myreaderBDTG17->AddVariable( "detajj",&detajj_30);
//  myreaderBDTG17->AddVariable( "ptll", &ptll_30 );
  myreaderBDTG17->AddVariable( "jeteta1", &jeteta1_30);
  myreaderBDTG17->AddVariable( "jeteta2", &jeteta2_30);
  myreaderBDTG17->AddVariable( "metPfType1",&met_30);
  myreaderBDTG17->AddVariable( "mth",&mth_30);

  TString direction = "";

 direction = "/afs/cern.ch/work/a/arun/Latinos/HWW_Full2016/CMSSW_8_0_26_patch1/src/MUCCA/Optimization/weights/VBF_INCL_TMVAClassification_VBF_new_BDTG17.weights.xml";

  cout<<direction<<endl;
  myreaderBDTG17->BookMVA("BDTG17",direction);
}



float hww_VBF_mvaBDTG17(
//float leppt1,
//		     float leppt2,
		     float mll_31,
		     float mjj_31,
		     float jetpt1_31,
		     float jetpt2_31,
                     float detajj_31,
  //                   float ptllf,
                     float jeteta1_31,
                     float jeteta2_31,
                     float met_31,
                     float mth_31
		     ){

//  lepton_pt1 = leppt1;
//  lepton_pt2 = leppt2;
  mll_30        = mll_31;
  mjj_30        = mjj_31;
  jetpt1_30     = jetpt1_31;
  jetpt2_30     = jetpt2_31;
  detajj_30     = detajj_31;
//  ptll_30       = ptllf;
  jeteta1_30    = jeteta1_31;
  jeteta2_30    = jeteta2_31;
  met_30 = met_31;
  mth_30 = mth_31;

  //cout<<"BEFORE READING!!!!!!-------"<<endl;

  return  myreaderBDTG17->EvaluateMVA("BDTG17");
}   
