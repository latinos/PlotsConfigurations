#include <TMVA/Reader.h>

using namespace std;

//   float lepton_pt1;
//   float lepton_pt2;
   float mll_2;
   float mjj_2;
   float jetpt1_2;
   float jetpt2_2;
   float detajj_2;
   float ptll_2;
   float jeteta1_2;
   float jeteta2_2;

TMVA::Reader* myreaderVbfHww_nTree500_Depth3 = new TMVA::Reader();



void initmyreaderVbfHww_nTree500_Depth3(){


//  myreaderVbfHww_nTree500_Depth3->AddVariable( "std_vector_lepton_pt[0]", &lepton_pt1 );
//  myreaderVbfHww_nTree500_Depth3->AddVariable( "std_vector_lepton_pt[1]", &lepton_pt2 );
  myreaderVbfHww_nTree500_Depth3->AddVariable( "mll", &mll_2 );
  myreaderVbfHww_nTree500_Depth3->AddVariable( "mjj", &mjj_2 );
  myreaderVbfHww_nTree500_Depth3->AddVariable( "jetpt1", &jetpt1_2 );
  myreaderVbfHww_nTree500_Depth3->AddVariable( "jetpt2", &jetpt2_2 );
  myreaderVbfHww_nTree500_Depth3->AddVariable( "detajj",&detajj_2);
  myreaderVbfHww_nTree500_Depth3->AddVariable( "ptll", &ptll_2 );
  myreaderVbfHww_nTree500_Depth3->AddVariable( "jeteta1", &jeteta1_2);
  myreaderVbfHww_nTree500_Depth3->AddVariable( "jeteta2", &jeteta2_2);


  TString direction = "";

//  direction = "/afs/cern.ch/work/a/arun/Latinos/HWW_Full2016/CMSSW_8_0_26_patch1/src/MUCCA/Optimization/weights_test/VBF_INCL_TMVAClassification_VBF_BDT.weights.xml";
// direction = "/afs/cern.ch/work/a/arun/Latinos/HWW_Full2016/CMSSW_8_0_26_patch1/src/MUCCA/Optimization/weights/VBF_INCL_TMVAClassification_VBF_BDT.weights.xml";
direction = "/afs/cern.ch/work/a/arun/Latinos/HWW_Full2016/CMSSW_8_0_26_patch1/src/MUCCA/Optimization/weights/VBF_INCL_TMVAClassification_VBF_BDT.weights_NTrees500_MaxDepth3.xml";

  cout<<direction<<endl;
  myreaderVbfHww_nTree500_Depth3->BookMVA("BDT",direction);
}



float hww_VBF_mvaBDT_nTree500_Depth3(
//float leppt1,
//		     float leppt2,
		     float mlle,
		     float mjje,
		     float jetpt1e,
		     float jetpt2e,
                     float detajje,
                     float ptlle,
                     float jeteta1e,
                     float jeteta2e
		     ){

//  lepton_pt1 = leppt1;
//  lepton_pt2 = leppt2;
  mll_2        = mlle;
  mjj_2        = mjje;
  jetpt1_2     = jetpt1e;
  detajj_2     = detajje;
  ptll_2       = ptlle;
  jeteta1_2    = jeteta1e;
  jeteta2_2    = jeteta2e;

  //cout<<"BEFORE READING!!!!!!-------"<<endl;

  return  myreaderVbfHww_nTree500_Depth3->EvaluateMVA("BDT");
}             
