#include <TMVA/Reader.h>

using namespace std;


TMVA::Reader* myreaderBDT16 = new TMVA::Reader();

//   float lepton_pt1;
//   float lepton_pt2;
   float mll_56;
   float mjj_56;
   float jetpt1_56;
   float jetpt2_56;
   float detajj_56;
//   float ptll_56;
   float jeteta1_56;
   float jeteta2_56;
   float met_56;
   float mth_56;

void initmyreaderBDT16(){


//  myreaderBDT16->AddVariable( "std_vector_lepton_pt[0]", &lepton_pt1 );
//  myreaderBDT16->AddVariable( "std_vector_lepton_pt[1]", &lepton_pt2 );
  myreaderBDT16->AddVariable( "mll", &mll_56 );
  myreaderBDT16->AddVariable( "mjj", &mjj_56 );
  myreaderBDT16->AddVariable( "jetpt1", &jetpt1_56 );
  myreaderBDT16->AddVariable( "jetpt2", &jetpt2_56 );
  myreaderBDT16->AddVariable( "detajj",&detajj_56);
//  myreaderBDT16->AddVariable( "ptll", &ptll_56 );
  myreaderBDT16->AddVariable( "jeteta1", &jeteta1_56);
  myreaderBDT16->AddVariable( "jeteta2", &jeteta2_56);
  myreaderBDT16->AddVariable( "metPfType1",&met_56);
  myreaderBDT16->AddVariable( "mth",&mth_56);

  TString direction = "";

 direction = "/afs/cern.ch/work/a/arun/Latinos/HWW_Full2016/CMSSW_8_0_26_patch1/src/MUCCA/Optimization/weights/VBF_INCL_TMVAClassification_VBF_new_BDT16.weights.xml";

  cout<<direction<<endl;
  myreaderBDT16->BookMVA("BDT16",direction);
}



float hww_VBF_mvaBDT16(
//float leppt1,
//		     float leppt2,
		     float mll_57,
		     float mjj_57,
		     float jetpt1_57,
		     float jetpt2_57,
                     float detajj_57,
  //                   float ptllf,
                     float jeteta1_57,
                     float jeteta2_57,
                     float met_57,
                     float mth_57
		     ){

//  lepton_pt1 = leppt1;
//  lepton_pt2 = leppt2;
  mll_56        = mll_57;
  mjj_56        = mjj_57;
  jetpt1_56     = jetpt1_57;
  jetpt2_56     = jetpt2_57;
  detajj_56     = detajj_57;
//  ptll_56       = ptllf;
  jeteta1_56    = jeteta1_57;
  jeteta2_56    = jeteta2_57;
  met_56 = met_57;
  mth_56 = mth_57;

  //cout<<"BEFORE READING!!!!!!-------"<<endl;

  return  myreaderBDT16->EvaluateMVA("BDT16");
}   
