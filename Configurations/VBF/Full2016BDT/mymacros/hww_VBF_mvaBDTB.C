#include <TMVA/Reader.h>

using namespace std;


TMVA::Reader* myreaderBDTB = new TMVA::Reader();

//   float lepton_pt1;
//   float lepton_pt2;
   float mll_1;
   float mjj_1;
   float jetpt1_1;
   float jetpt2_1;
   float detajj_1;
//   float ptll_1;
   float jeteta1_1;
   float jeteta2_1;
   float met_1;
   float mth_1;

void initmyreaderBDTB(){


//  myreaderBDTB->AddVariable( "std_vector_lepton_pt[0]", &lepton_pt1 );
//  myreaderBDTB->AddVariable( "std_vector_lepton_pt[1]", &lepton_pt2 );
  myreaderBDTB->AddVariable( "mll", &mll_1 );
  myreaderBDTB->AddVariable( "mjj", &mjj_1 );
  myreaderBDTB->AddVariable( "jetpt1", &jetpt1_1 );
  myreaderBDTB->AddVariable( "jetpt2", &jetpt2_1 );
  myreaderBDTB->AddVariable( "detajj",&detajj_1);
//  myreaderBDTB->AddVariable( "ptll", &ptll_1 );
  myreaderBDTB->AddVariable( "jeteta1", &jeteta1_1);
  myreaderBDTB->AddVariable( "jeteta2", &jeteta2_1);
  myreaderBDTB->AddVariable( "metPfType1",&met_1);
  myreaderBDTB->AddVariable( "mth",&mth_1);

  TString direction = "";

 direction = "/afs/cern.ch/work/a/arun/Latinos/HWW_Full2016/CMSSW_8_0_26_patch1/src/MUCCA/Optimization/weights/VBF_INCL_TMVAClassification_VBF_new_BDTB.weights.xml";

  cout<<direction<<endl;
  myreaderBDTB->BookMVA("BDTB",direction);
}



float hww_VBF_mvaBDTB(
//float leppt1,
//		     float leppt2,
		     float mllf,
		     float mjjf,
		     float jetpt1f,
		     float jetpt2f,
                     float detajjf,
  //                   float ptllf,
                     float jeteta1f,
                     float jeteta2f,
                     float metf,
                     float mthf
		     ){

//  lepton_pt1 = leppt1;
//  lepton_pt2 = leppt2;
  mll_1        = mllf;
  mjj_1        = mjjf;
  jetpt1_1     = jetpt1f;
  jetpt2_1     = jetpt2f;
  detajj_1     = detajjf;
//  ptll_1       = ptllf;
  jeteta1_1    = jeteta1f;
  jeteta2_1    = jeteta2f;
  met_1 = metf;
  mth_1 = mthf;

  //cout<<"BEFORE READING!!!!!!-------"<<endl;

  return  myreaderBDTB->EvaluateMVA("BDTB");
}   
