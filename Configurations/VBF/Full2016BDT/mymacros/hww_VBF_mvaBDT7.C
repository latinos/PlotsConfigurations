#include <TMVA/Reader.h>

using namespace std;


TMVA::Reader* myreaderBDT7 = new TMVA::Reader();

//   float lepton_pt1;
//   float lepton_pt2;
   float mll_44;
   float mjj_44;
   float jetpt1_44;
   float jetpt2_44;
   float detajj_44;
//   float ptll_44;
   float jeteta1_44;
   float jeteta2_44;
   float met_44;
   float mth_44;

void initmyreaderBDT7(){


//  myreaderBDT7->AddVariable( "std_vector_lepton_pt[0]", &lepton_pt1 );
//  myreaderBDT7->AddVariable( "std_vector_lepton_pt[1]", &lepton_pt2 );
  myreaderBDT7->AddVariable( "mll", &mll_44 );
  myreaderBDT7->AddVariable( "mjj", &mjj_44 );
  myreaderBDT7->AddVariable( "jetpt1", &jetpt1_44 );
  myreaderBDT7->AddVariable( "jetpt2", &jetpt2_44 );
  myreaderBDT7->AddVariable( "detajj",&detajj_44);
//  myreaderBDT7->AddVariable( "ptll", &ptll_44 );
  myreaderBDT7->AddVariable( "jeteta1", &jeteta1_44);
  myreaderBDT7->AddVariable( "jeteta2", &jeteta2_44);
  myreaderBDT7->AddVariable( "metPfType1",&met_44);
  myreaderBDT7->AddVariable( "mth",&mth_44);

  TString direction = "";

 direction = "/afs/cern.ch/work/a/arun/Latinos/HWW_Full2016/CMSSW_8_0_26_patch1/src/MUCCA/Optimization/weights/VBF_INCL_TMVAClassification_VBF_new_BDT7.weights.xml";

  cout<<direction<<endl;
  myreaderBDT7->BookMVA("BDT7",direction);
}



float hww_VBF_mvaBDT7(
//float leppt1,
//		     float leppt2,
		     float mll_45,
		     float mjj_45,
		     float jetpt1_45,
		     float jetpt2_45,
                     float detajj_45,
  //                   float ptllf,
                     float jeteta1_45,
                     float jeteta2_45,
                     float met_45,
                     float mth_45
		     ){

//  lepton_pt1 = leppt1;
//  lepton_pt2 = leppt2;
  mll_44        = mll_45;
  mjj_44        = mjj_45;
  jetpt1_44     = jetpt1_45;
  jetpt2_44     = jetpt2_45;
  detajj_44     = detajj_45;
//  ptll_44       = ptllf;
  jeteta1_44    = jeteta1_45;
  jeteta2_44    = jeteta2_45;
  met_44 = met_45;
  mth_44 = mth_45;

  //cout<<"BEFORE READING!!!!!!-------"<<endl;

  return  myreaderBDT7->EvaluateMVA("BDT7");
}   
