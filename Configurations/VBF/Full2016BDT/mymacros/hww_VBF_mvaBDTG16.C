#include <TMVA/Reader.h>

using namespace std;


TMVA::Reader* myreaderBDTG16 = new TMVA::Reader();

//   float lepton_pt1;
//   float lepton_pt2;
   float mll_28;
   float mjj_28;
   float jetpt1_28;
   float jetpt2_28;
   float detajj_28;
//   float ptll_28;
   float jeteta1_28;
   float jeteta2_28;
   float met_28;
   float mth_28;

void initmyreaderBDTG16(){


//  myreaderBDTG16->AddVariable( "std_vector_lepton_pt[0]", &lepton_pt1 );
//  myreaderBDTG16->AddVariable( "std_vector_lepton_pt[1]", &lepton_pt2 );
  myreaderBDTG16->AddVariable( "mll", &mll_28 );
  myreaderBDTG16->AddVariable( "mjj", &mjj_28 );
  myreaderBDTG16->AddVariable( "jetpt1", &jetpt1_28 );
  myreaderBDTG16->AddVariable( "jetpt2", &jetpt2_28 );
  myreaderBDTG16->AddVariable( "detajj",&detajj_28);
//  myreaderBDTG16->AddVariable( "ptll", &ptll_28 );
  myreaderBDTG16->AddVariable( "jeteta1", &jeteta1_28);
  myreaderBDTG16->AddVariable( "jeteta2", &jeteta2_28);
  myreaderBDTG16->AddVariable( "metPfType1",&met_28);
  myreaderBDTG16->AddVariable( "mth",&mth_28);

  TString direction = "";

 direction = "/afs/cern.ch/work/a/arun/Latinos/HWW_Full2016/CMSSW_8_0_26_patch1/src/MUCCA/Optimization/weights/VBF_INCL_TMVAClassification_VBF_new_BDTG16.weights.xml";

  cout<<direction<<endl;
  myreaderBDTG16->BookMVA("BDTG16",direction);
}



float hww_VBF_mvaBDTG16(
//float leppt1,
//		     float leppt2,
		     float mll_29,
		     float mjj_29,
		     float jetpt1_29,
		     float jetpt2_29,
                     float detajj_29,
  //                   float ptllf,
                     float jeteta1_29,
                     float jeteta2_29,
                     float met_29,
                     float mth_29
		     ){

//  lepton_pt1 = leppt1;
//  lepton_pt2 = leppt2;
  mll_28        = mll_29;
  mjj_28        = mjj_29;
  jetpt1_28     = jetpt1_29;
  jetpt2_28     = jetpt2_29;
  detajj_28     = detajj_29;
//  ptll_28       = ptllf;
  jeteta1_28    = jeteta1_29;
  jeteta2_28    = jeteta2_29;
  met_28 = met_29;
  mth_28 = mth_29;

  //cout<<"BEFORE READING!!!!!!-------"<<endl;

  return  myreaderBDTG16->EvaluateMVA("BDTG16");
}   
