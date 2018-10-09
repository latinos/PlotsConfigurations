#include <TMVA/Reader.h>

using namespace std;


TMVA::Reader* myreaderBDTB2 = new TMVA::Reader();

//   float lepton_pt1;
//   float lepton_pt2;
   float mll_2;
   float mjj_2;
   float jetpt1_2;
   float jetpt2_2;
   float detajj_2;
//   float ptll_1;
   float jeteta1_2;
   float jeteta2_2;
   float met_2;
   float mth_2;

void initmyreaderBDTB2(){


//  myreaderBDTB->AddVariable( "std_vector_lepton_pt[0]", &lepton_pt1 );
//  myreaderBDTB->AddVariable( "std_vector_lepton_pt[1]", &lepton_pt2 );
  myreaderBDTB2->AddVariable( "mll", &mll_2 );
  myreaderBDTB2->AddVariable( "mjj", &mjj_2 );
  myreaderBDTB2->AddVariable( "jetpt1", &jetpt1_2 );
  myreaderBDTB2->AddVariable( "jetpt2", &jetpt2_2 );
  myreaderBDTB2->AddVariable( "detajj",&detajj_2);
//  myreaderBDTB->AddVariable( "ptll", &ptll_1 );
  myreaderBDTB2->AddVariable( "jeteta1", &jeteta1_2);
  myreaderBDTB2->AddVariable( "jeteta2", &jeteta2_2);
  myreaderBDTB2->AddVariable( "metPfType1",&met_2);
  myreaderBDTB2->AddVariable( "mth",&mth_2);

  TString direction = "";

 direction = "/afs/cern.ch/work/a/arun/Latinos/HWW_Full2016/CMSSW_8_0_26_patch1/src/MUCCA/Optimization/weights/VBF_INCL_TMVAClassification_VBF_new_BDTB2.weights.xml";

  cout<<direction<<endl;
  myreaderBDTB2->BookMVA("BDTB2",direction);
}



float hww_VBF_mvaBDTB2(
//float leppt1,
//		     float leppt2,
		     float mllj,
		     float mjjj,
		     float jetpt1j,
		     float jetpt2j,
                     float detajjj,
  //                   float ptllf,
                     float jeteta1j,
                     float jeteta2j,
                     float metj,
                     float mthj
		     ){

//  lepton_pt1 = leppt1;
//  lepton_pt2 = leppt2;
  mll_2        = mllj;
  mjj_2        = mjjj;
  jetpt1_2     = jetpt1j;
  jetpt2_2     = jetpt2j;
  detajj_2     = detajjj;
//  ptll_1       = ptllf;
  jeteta1_2    = jeteta1j;
  jeteta2_2    = jeteta2j;
  met_2 = metj;
  mth_2 = mthj;

  //cout<<"BEFORE READING!!!!!!-------"<<endl;

  return  myreaderBDTB2->EvaluateMVA("BDTB2");
}   
