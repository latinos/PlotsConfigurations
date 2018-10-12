#include <TMVA/Reader.h>

using namespace std;


TMVA::Reader* myreaderBDTG15 = new TMVA::Reader();

//   float lepton_pt1;
//   float lepton_pt2;
   float mll_26;
   float mjj_26;
   float jetpt1_26;
   float jetpt2_26;
   float detajj_26;
//   float ptll_26;
   float jeteta1_26;
   float jeteta2_26;
   float met_26;
   float mth_26;

void initmyreaderBDTG15(){


//  myreaderBDTG15->AddVariable( "std_vector_lepton_pt[0]", &lepton_pt1 );
//  myreaderBDTG15->AddVariable( "std_vector_lepton_pt[1]", &lepton_pt2 );
  myreaderBDTG15->AddVariable( "mll", &mll_26 );
  myreaderBDTG15->AddVariable( "mjj", &mjj_26 );
  myreaderBDTG15->AddVariable( "jetpt1", &jetpt1_26 );
  myreaderBDTG15->AddVariable( "jetpt2", &jetpt2_26 );
  myreaderBDTG15->AddVariable( "detajj",&detajj_26);
//  myreaderBDTG15->AddVariable( "ptll", &ptll_26 );
  myreaderBDTG15->AddVariable( "jeteta1", &jeteta1_26);
  myreaderBDTG15->AddVariable( "jeteta2", &jeteta2_26);
  myreaderBDTG15->AddVariable( "metPfType1",&met_26);
  myreaderBDTG15->AddVariable( "mth",&mth_26);

  TString direction = "";

 direction = "/afs/cern.ch/work/a/arun/Latinos/HWW_Full2016/CMSSW_8_0_26_patch1/src/MUCCA/Optimization/weights/VBF_INCL_TMVAClassification_VBF_new_BDTG15.weights.xml";

  cout<<direction<<endl;
  myreaderBDTG15->BookMVA("BDTG15",direction);
}



float hww_VBF_mvaBDTG15(
//float leppt1,
//		     float leppt2,
		     float mll_27,
		     float mjj_27,
		     float jetpt1_27,
		     float jetpt2_27,
                     float detajj_27,
  //                   float ptllf,
                     float jeteta1_27,
                     float jeteta2_27,
                     float met_27,
                     float mth_27
		     ){

//  lepton_pt1 = leppt1;
//  lepton_pt2 = leppt2;
  mll_26        = mll_27;
  mjj_26        = mjj_27;
  jetpt1_26     = jetpt1_27;
  jetpt2_26     = jetpt2_27;
  detajj_26     = detajj_27;
//  ptll_26       = ptllf;
  jeteta1_26    = jeteta1_27;
  jeteta2_26    = jeteta2_27;
  met_26 = met_27;
  mth_26 = mth_27;

  //cout<<"BEFORE READING!!!!!!-------"<<endl;

  return  myreaderBDTG15->EvaluateMVA("BDTG15");
}   
