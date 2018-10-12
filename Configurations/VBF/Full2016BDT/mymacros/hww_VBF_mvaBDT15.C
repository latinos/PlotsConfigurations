#include <TMVA/Reader.h>

using namespace std;


TMVA::Reader* myreaderBDT15 = new TMVA::Reader();

//   float lepton_pt1;
//   float lepton_pt2;
   float mll_54;
   float mjj_54;
   float jetpt1_54;
   float jetpt2_54;
   float detajj_54;
//   float ptll_54;
   float jeteta1_54;
   float jeteta2_54;
   float met_54;
   float mth_54;

void initmyreaderBDT15(){


//  myreaderBDT15->AddVariable( "std_vector_lepton_pt[0]", &lepton_pt1 );
//  myreaderBDT15->AddVariable( "std_vector_lepton_pt[1]", &lepton_pt2 );
  myreaderBDT15->AddVariable( "mll", &mll_54 );
  myreaderBDT15->AddVariable( "mjj", &mjj_54 );
  myreaderBDT15->AddVariable( "jetpt1", &jetpt1_54 );
  myreaderBDT15->AddVariable( "jetpt2", &jetpt2_54 );
  myreaderBDT15->AddVariable( "detajj",&detajj_54);
//  myreaderBDT15->AddVariable( "ptll", &ptll_54 );
  myreaderBDT15->AddVariable( "jeteta1", &jeteta1_54);
  myreaderBDT15->AddVariable( "jeteta2", &jeteta2_54);
  myreaderBDT15->AddVariable( "metPfType1",&met_54);
  myreaderBDT15->AddVariable( "mth",&mth_54);

  TString direction = "";

 direction = "/afs/cern.ch/work/a/arun/Latinos/HWW_Full2016/CMSSW_8_0_26_patch1/src/MUCCA/Optimization/weights/VBF_INCL_TMVAClassification_VBF_new_BDT15.weights.xml";

  cout<<direction<<endl;
  myreaderBDT15->BookMVA("BDT15",direction);
}



float hww_VBF_mvaBDT15(
//float leppt1,
//		     float leppt2,
		     float mll_55,
		     float mjj_55,
		     float jetpt1_55,
		     float jetpt2_55,
                     float detajj_55,
  //                   float ptllf,
                     float jeteta1_55,
                     float jeteta2_55,
                     float met_55,
                     float mth_55
		     ){

//  lepton_pt1 = leppt1;
//  lepton_pt2 = leppt2;
  mll_54        = mll_55;
  mjj_54        = mjj_55;
  jetpt1_54     = jetpt1_55;
  jetpt2_54     = jetpt2_55;
  detajj_54     = detajj_55;
//  ptll_54       = ptllf;
  jeteta1_54    = jeteta1_55;
  jeteta2_54    = jeteta2_55;
  met_54 = met_55;
  mth_54 = mth_55;

  //cout<<"BEFORE READING!!!!!!-------"<<endl;

  return  myreaderBDT15->EvaluateMVA("BDT15");
}   
