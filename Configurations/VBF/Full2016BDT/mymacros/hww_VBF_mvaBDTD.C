#include <TMVA/Reader.h>

using namespace std;


TMVA::Reader* myreaderBDTD = new TMVA::Reader();

//   float lepton_pt1;
//   float lepton_pt2;
   float mll_5;
   float mjj_5;
   float jetpt1_5;
   float jetpt2_5;
   float detajj_5;
//   float ptll_1;
   float jeteta1_5;
   float jeteta2_5;
   float met_5;
   float mth_5;

void initmyreaderBDTD(){


//  myreaderBDTB->AddVariable( "std_vector_lepton_pt[0]", &lepton_pt1 );
//  myreaderBDTB->AddVariable( "std_vector_lepton_pt[1]", &lepton_pt2 );
  myreaderBDTD->AddVariable( "mll", &mll_5 );
  myreaderBDTD->AddVariable( "mjj", &mjj_5 );
  myreaderBDTD->AddVariable( "jetpt1", &jetpt1_5 );
  myreaderBDTD->AddVariable( "jetpt2", &jetpt2_5 );
  myreaderBDTD->AddVariable( "detajj",&detajj_5);
//  myreaderBDTB->AddVariable( "ptll", &ptll_1 );
  myreaderBDTD->AddVariable( "jeteta1", &jeteta1_5);
  myreaderBDTD->AddVariable( "jeteta2", &jeteta2_5);
  myreaderBDTD->AddVariable( "metPfType1",&met_5);
  myreaderBDTD->AddVariable( "mth",&mth_5);

  TString direction = "";

 direction = "/afs/cern.ch/work/a/arun/Latinos/HWW_Full2016/CMSSW_8_0_26_patch1/src/MUCCA/Optimization/weights/VBF_INCL_TMVAClassification_VBF_new_BDTD.weights.xml";

  cout<<direction<<endl;
  myreaderBDTD->BookMVA("BDTD",direction);
}



float hww_VBF_mvaBDTD(
//float leppt1,
//		     float leppt2,
		     float mllh,
		     float mjjh,
		     float jetpt1h,
		     float jetpt2h,
                     float detajjh,
  //                   float ptllf,
                     float jeteta1h,
                     float jeteta2h,
                     float meth,
                     float mthh
		     ){

//  lepton_pt1 = leppt1;
//  lepton_pt2 = leppt2;
  mll_5        = mllh;
  mjj_5        = mjjh;
  jetpt1_5     = jetpt1h;
  jetpt2_5     = jetpt2h;
  detajj_5     = detajjh;
//  ptll_1       = ptllf;
  jeteta1_5    = jeteta1h;
  jeteta2_5    = jeteta2h;
  met_5 = meth;
  mth_5 = mthh;

  //cout<<"BEFORE READING!!!!!!-------"<<endl;

  return  myreaderBDTD->EvaluateMVA("BDTD");
}   
