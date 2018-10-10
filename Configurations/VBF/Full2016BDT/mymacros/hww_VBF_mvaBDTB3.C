#include <TMVA/Reader.h>

using namespace std;


TMVA::Reader* myreaderBDTB3 = new TMVA::Reader();

//   float lepton_pt1;
//   float lepton_pt2;
   float mll_3;
   float mjj_3;
   float jetpt1_3;
   float jetpt2_3;
   float detajj_3;
//   float ptll_1;
   float jeteta1_3;
   float jeteta2_3;
   float met_3;
   float mth_3;

void initmyreaderBDTB3(){


//  myreaderBDTB->AddVariable( "std_vector_lepton_pt[0]", &lepton_pt1 );
//  myreaderBDTB->AddVariable( "std_vector_lepton_pt[1]", &lepton_pt2 );
  myreaderBDTB3->AddVariable( "mll", &mll_3 );
  myreaderBDTB3->AddVariable( "mjj", &mjj_3 );
  myreaderBDTB3->AddVariable( "jetpt1", &jetpt1_3 );
  myreaderBDTB3->AddVariable( "jetpt2", &jetpt2_3 );
  myreaderBDTB3->AddVariable( "detajj",&detajj_3);
//  myreaderBDTB->AddVariable( "ptll", &ptll_1 );
  myreaderBDTB3->AddVariable( "jeteta1", &jeteta1_3);
  myreaderBDTB3->AddVariable( "jeteta2", &jeteta2_3);
  myreaderBDTB3->AddVariable( "metPfType1",&met_3);
  myreaderBDTB3->AddVariable( "mth",&mth_3);

  TString direction = "";

 direction = "/afs/cern.ch/work/a/arun/Latinos/HWW_Full2016/CMSSW_8_0_26_patch1/src/MUCCA/Optimization/weights/VBF_INCL_TMVAClassification_VBF_new_BDTB3.weights.xml";

  cout<<direction<<endl;
  myreaderBDTB3->BookMVA("BDTB3",direction);
}



float hww_VBF_mvaBDTB3(
//float leppt1,
//		     float leppt2,
		     float mllg,
		     float mjjg,
		     float jetpt1g,
		     float jetpt2g,
                     float detajjg,
  //                   float ptllf,
                     float jeteta1g,
                     float jeteta2g,
                     float metg,
                     float mthg
		     ){

//  lepton_pt1 = leppt1;
//  lepton_pt2 = leppt2;
  mll_3        = mllg;
  mjj_3        = mjjg;
  jetpt1_3     = jetpt1g;
  jetpt2_3     = jetpt2g;
  detajj_3     = detajjg;
//  ptll_1       = ptllf;
  jeteta1_3    = jeteta1g;
  jeteta2_3    = jeteta2g;
  met_3 = metg;
  mth_3 = mthg;

  //cout<<"BEFORE READING!!!!!!-------"<<endl;

  return  myreaderBDTB3->EvaluateMVA("BDTB3");
}   
