#include <TMVA/Reader.h>

using namespace std;


TMVA::Reader* myreaderBDTG5 = new TMVA::Reader();

//   float lepton_pt1;
//   float lepton_pt2;
   float mll_12;
   float mjj_12;
   float jetpt1_12;
   float jetpt2_12;
   float detajj_12;
//   float ptll_12;
   float jeteta1_12;
   float jeteta2_12;
   float met_12;
   float mth_12;

void initmyreaderBDTG5(){


//  myreaderBDTG5->AddVariable( "std_vector_lepton_pt[0]", &lepton_pt1 );
//  myreaderBDTG5->AddVariable( "std_vector_lepton_pt[1]", &lepton_pt2 );
  myreaderBDTG5->AddVariable( "mll", &mll_12 );
  myreaderBDTG5->AddVariable( "mjj", &mjj_12 );
  myreaderBDTG5->AddVariable( "jetpt1", &jetpt1_12 );
  myreaderBDTG5->AddVariable( "jetpt2", &jetpt2_12 );
  myreaderBDTG5->AddVariable( "detajj",&detajj_12);
//  myreaderBDTG5->AddVariable( "ptll", &ptll_12 );
  myreaderBDTG5->AddVariable( "jeteta1", &jeteta1_12);
  myreaderBDTG5->AddVariable( "jeteta2", &jeteta2_12);
  myreaderBDTG5->AddVariable( "metPfType1",&met_12);
  myreaderBDTG5->AddVariable( "mth",&mth_12);

  TString direction = "";

 direction = "/afs/cern.ch/work/a/arun/Latinos/HWW_Full2016/CMSSW_8_0_26_patch1/src/MUCCA/Optimization/weights/VBF_INCL_TMVAClassification_VBF_new_BDTG5.weights.xml";

  cout<<direction<<endl;
  myreaderBDTG5->BookMVA("BDTG5",direction);
}



float hww_VBF_mvaBDTG5(
//float leppt1,
//		     float leppt2,
		     float mll_13,
		     float mjj_13,
		     float jetpt1_13,
		     float jetpt2_13,
                     float detajj_13,
  //                   float ptllf,
                     float jeteta1_13,
                     float jeteta2_13,
                     float met_13,
                     float mth_13
		     ){

//  lepton_pt1 = leppt1;
//  lepton_pt2 = leppt2;
  mll_12        = mll_13;
  mjj_12        = mjj_13;
  jetpt1_12     = jetpt1_13;
  jetpt2_12     = jetpt2_13;
  detajj_12     = detajj_13;
//  ptll_12       = ptllf;
  jeteta1_12    = jeteta1_13;
  jeteta2_12    = jeteta2_13;
  met_12 = met_13;
  mth_12 = mth_13;

  //cout<<"BEFORE READING!!!!!!-------"<<endl;

  return  myreaderBDTG5->EvaluateMVA("BDTG5");
}   
