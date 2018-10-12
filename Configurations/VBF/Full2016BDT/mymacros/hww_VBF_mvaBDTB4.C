#include <TMVA/Reader.h>

using namespace std;


TMVA::Reader* myreaderBDTB4 = new TMVA::Reader();

//   float lepton_pt1;
//   float lepton_pt2;
   float mll_4;
   float mjj_4;
   float jetpt1_4;
   float jetpt2_4;
   float detajj_4;
//   float ptll_1;
   float jeteta1_4;
   float jeteta2_4;
   float met_4;
   float mth_4;

void initmyreaderBDTB4(){


//  myreaderBDTB->AddVariable( "std_vector_lepton_pt[0]", &lepton_pt1 );
//  myreaderBDTB->AddVariable( "std_vector_lepton_pt[1]", &lepton_pt2 );
  myreaderBDTB4->AddVariable( "mll", &mll_4 );
  myreaderBDTB4->AddVariable( "mjj", &mjj_4 );
  myreaderBDTB4->AddVariable( "jetpt1", &jetpt1_4 );
  myreaderBDTB4->AddVariable( "jetpt2", &jetpt2_4 );
  myreaderBDTB4->AddVariable( "detajj",&detajj_4);
//  myreaderBDTB->AddVariable( "ptll", &ptll_1 );
  myreaderBDTB4->AddVariable( "jeteta1", &jeteta1_4);
  myreaderBDTB4->AddVariable( "jeteta2", &jeteta2_4);
  myreaderBDTB4->AddVariable( "metPfType1",&met_4);
  myreaderBDTB4->AddVariable( "mth",&mth_4);

  TString direction = "";

 direction = "/afs/cern.ch/work/a/arun/Latinos/HWW_Full2016/CMSSW_8_0_26_patch1/src/MUCCA/Optimization/weights/VBF_INCL_TMVAClassification_VBF_new_BDTB4.weights.xml";

  cout<<direction<<endl;
  myreaderBDTB4->BookMVA("BDTB4",direction);
}



float hww_VBF_mvaBDTB4(
//float leppt1,
//		     float leppt2,
		     float mlli,
		     float mjji,
		     float jetpt1i,
		     float jetpt2i,
                     float detajji,
  //                   float ptllf,
                     float jeteta1i,
                     float jeteta2i,
                     float meti,
                     float mthi
		     ){

//  lepton_pt1 = leppt1;
//  lepton_pt2 = leppt2;
  mll_4        = mlli;
  mjj_4        = mjji;
  jetpt1_4     = jetpt1i;
  jetpt2_4     = jetpt2i;
  detajj_4     = detajji;
//  ptll_1       = ptllf;
  jeteta1_4    = jeteta1i;
  jeteta2_4    = jeteta2i;
  met_4 = meti;
  mth_4 = mthi;

  //cout<<"BEFORE READING!!!!!!-------"<<endl;

  return  myreaderBDTB4->EvaluateMVA("BDTB4");
}   
