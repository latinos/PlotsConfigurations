#include <TMVA/Reader.h>

using namespace std;


TMVA::Reader* myreaderBDT11 = new TMVA::Reader();

//   float lepton_pt1;
//   float lepton_pt2;
   float mll_48;
   float mjj_48;
   float jetpt1_48;
   float jetpt2_48;
   float detajj_48;
//   float ptll_48;
   float jeteta1_48;
   float jeteta2_48;
   float met_48;
   float mth_48;

void initmyreaderBDT11(){


//  myreaderBDT11->AddVariable( "std_vector_lepton_pt[0]", &lepton_pt1 );
//  myreaderBDT11->AddVariable( "std_vector_lepton_pt[1]", &lepton_pt2 );
  myreaderBDT11->AddVariable( "mll", &mll_48 );
  myreaderBDT11->AddVariable( "mjj", &mjj_48 );
  myreaderBDT11->AddVariable( "jetpt1", &jetpt1_48 );
  myreaderBDT11->AddVariable( "jetpt2", &jetpt2_48 );
  myreaderBDT11->AddVariable( "detajj",&detajj_48);
//  myreaderBDT11->AddVariable( "ptll", &ptll_48 );
  myreaderBDT11->AddVariable( "jeteta1", &jeteta1_48);
  myreaderBDT11->AddVariable( "jeteta2", &jeteta2_48);
  myreaderBDT11->AddVariable( "metPfType1",&met_48);
  myreaderBDT11->AddVariable( "mth",&mth_48);

  TString direction = "";

 direction = "/afs/cern.ch/work/a/arun/Latinos/HWW_Full2016/CMSSW_8_0_26_patch1/src/MUCCA/Optimization/weights/VBF_INCL_TMVAClassification_VBF_new_BDT11.weights.xml";

  cout<<direction<<endl;
  myreaderBDT11->BookMVA("BDT11",direction);
}



float hww_VBF_mvaBDT11(
//float leppt1,
//		     float leppt2,
		     float mll_49,
		     float mjj_49,
		     float jetpt1_49,
		     float jetpt2_49,
                     float detajj_49,
  //                   float ptllf,
                     float jeteta1_49,
                     float jeteta2_49,
                     float met_49,
                     float mth_49
		     ){

//  lepton_pt1 = leppt1;
//  lepton_pt2 = leppt2;
  mll_48        = mll_49;
  mjj_48        = mjj_49;
  jetpt1_48     = jetpt1_49;
  jetpt2_48     = jetpt2_49;
  detajj_48     = detajj_49;
//  ptll_48       = ptllf;
  jeteta1_48    = jeteta1_49;
  jeteta2_48    = jeteta2_49;
  met_48 = met_49;
  mth_48 = mth_49;

  //cout<<"BEFORE READING!!!!!!-------"<<endl;

  return  myreaderBDT11->EvaluateMVA("BDT11");
}   
