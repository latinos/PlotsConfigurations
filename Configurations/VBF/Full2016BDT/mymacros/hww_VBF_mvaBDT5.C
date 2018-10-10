#include <TMVA/Reader.h>

using namespace std;


TMVA::Reader* myreaderBDT5 = new TMVA::Reader();

//   float lepton_pt1;
//   float lepton_pt2;
   float mll_40;
   float mjj_40;
   float jetpt1_40;
   float jetpt2_40;
   float detajj_40;
//   float ptll_40;
   float jeteta1_40;
   float jeteta2_40;
   float met_40;
   float mth_40;

void initmyreaderBDT5(){


//  myreaderBDT5->AddVariable( "std_vector_lepton_pt[0]", &lepton_pt1 );
//  myreaderBDT5->AddVariable( "std_vector_lepton_pt[1]", &lepton_pt2 );
  myreaderBDT5->AddVariable( "mll", &mll_40 );
  myreaderBDT5->AddVariable( "mjj", &mjj_40 );
  myreaderBDT5->AddVariable( "jetpt1", &jetpt1_40 );
  myreaderBDT5->AddVariable( "jetpt2", &jetpt2_40 );
  myreaderBDT5->AddVariable( "detajj",&detajj_40);
//  myreaderBDT5->AddVariable( "ptll", &ptll_40 );
  myreaderBDT5->AddVariable( "jeteta1", &jeteta1_40);
  myreaderBDT5->AddVariable( "jeteta2", &jeteta2_40);
  myreaderBDT5->AddVariable( "metPfType1",&met_40);
  myreaderBDT5->AddVariable( "mth",&mth_40);

  TString direction = "";

 direction = "/afs/cern.ch/work/a/arun/Latinos/HWW_Full2016/CMSSW_8_0_26_patch1/src/MUCCA/Optimization/weights/VBF_INCL_TMVAClassification_VBF_new_BDT5.weights.xml";

  cout<<direction<<endl;
  myreaderBDT5->BookMVA("BDT5",direction);
}



float hww_VBF_mvaBDT5(
//float leppt1,
//		     float leppt2,
		     float mll_41,
		     float mjj_41,
		     float jetpt1_41,
		     float jetpt2_41,
                     float detajj_41,
  //                   float ptllf,
                     float jeteta1_41,
                     float jeteta2_41,
                     float met_41,
                     float mth_41
		     ){

//  lepton_pt1 = leppt1;
//  lepton_pt2 = leppt2;
  mll_40        = mll_41;
  mjj_40        = mjj_41;
  jetpt1_40     = jetpt1_41;
  jetpt2_40     = jetpt2_41;
  detajj_40     = detajj_41;
//  ptll_40       = ptllf;
  jeteta1_40    = jeteta1_41;
  jeteta2_40    = jeteta2_41;
  met_40 = met_41;
  mth_40 = mth_41;

  //cout<<"BEFORE READING!!!!!!-------"<<endl;

  return  myreaderBDT5->EvaluateMVA("BDT5");
}   
