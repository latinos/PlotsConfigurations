#include <TMVA/Reader.h>

using namespace std;


TMVA::Reader* myreaderBDTG4 = new TMVA::Reader();

//   float lepton_pt1;
//   float lepton_pt2;
   float mll_10;
   float mjj_10;
   float jetpt1_10;
   float jetpt2_10;
   float detajj_10;
//   float ptll_10;
   float jeteta1_10;
   float jeteta2_10;
   float met_10;
   float mth_10;

void initmyreaderBDTG4(){


//  myreaderBDTG4->AddVariable( "std_vector_lepton_pt[0]", &lepton_pt1 );
//  myreaderBDTG4->AddVariable( "std_vector_lepton_pt[1]", &lepton_pt2 );
  myreaderBDTG4->AddVariable( "mll", &mll_10 );
  myreaderBDTG4->AddVariable( "mjj", &mjj_10 );
  myreaderBDTG4->AddVariable( "jetpt1", &jetpt1_10 );
  myreaderBDTG4->AddVariable( "jetpt2", &jetpt2_10 );
  myreaderBDTG4->AddVariable( "detajj",&detajj_10);
//  myreaderBDTG4->AddVariable( "ptll", &ptll_10 );
  myreaderBDTG4->AddVariable( "jeteta1", &jeteta1_10);
  myreaderBDTG4->AddVariable( "jeteta2", &jeteta2_10);
  myreaderBDTG4->AddVariable( "metPfType1",&met_10);
  myreaderBDTG4->AddVariable( "mth",&mth_10);

  TString direction = "";

 direction = "/afs/cern.ch/work/a/arun/Latinos/HWW_Full2016/CMSSW_8_0_26_patch1/src/MUCCA/Optimization/weights/VBF_INCL_TMVAClassification_VBF_new_BDTG4.weights.xml";

  cout<<direction<<endl;
  myreaderBDTG4->BookMVA("BDTG4",direction);
}



float hww_VBF_mvaBDTG4(
//float leppt1,
//		     float leppt2,
		     float mll_11,
		     float mjj_11,
		     float jetpt1_11,
		     float jetpt2_11,
                     float detajj_11,
  //                   float ptllf,
                     float jeteta1_11,
                     float jeteta2_11,
                     float met_11,
                     float mth_11
		     ){

//  lepton_pt1 = leppt1;
//  lepton_pt2 = leppt2;
  mll_10        = mll_11;
  mjj_10        = mjj_11;
  jetpt1_10     = jetpt1_11;
  jetpt2_10     = jetpt2_11;
  detajj_10     = detajj_11;
//  ptll_10       = ptllf;
  jeteta1_10    = jeteta1_11;
  jeteta2_10    = jeteta2_11;
  met_10 = met_11;
  mth_10 = mth_11;

  //cout<<"BEFORE READING!!!!!!-------"<<endl;

  return  myreaderBDTG4->EvaluateMVA("BDTG4");
}   
