#include <TMVA/Reader.h>

using namespace std;


TMVA::Reader* myreaderVbfHww_nTree1000_Depth3 = new TMVA::Reader();

//   float lepton_pt1;
//   float lepton_pt2;
   float mll;
   float mjj;
   float jetpt1;
   float jetpt2;
   float detajj;
   float ptll;
   float jeteta1;
   float jeteta2;


void initmyreaderVbfHww_nTree1000_Depth3(){


//  myreaderVbfHww_nTree1000_Depth3->AddVariable( "std_vector_lepton_pt[0]", &lepton_pt1 );
//  myreaderVbfHww_nTree1000_Depth3->AddVariable( "std_vector_lepton_pt[1]", &lepton_pt2 );
  myreaderVbfHww_nTree1000_Depth3->AddVariable( "mll", &mll );
  myreaderVbfHww_nTree1000_Depth3->AddVariable( "mjj", &mjj );
  myreaderVbfHww_nTree1000_Depth3->AddVariable( "jetpt1", &jetpt1 );
  myreaderVbfHww_nTree1000_Depth3->AddVariable( "jetpt2", &jetpt2 );
  myreaderVbfHww_nTree1000_Depth3->AddVariable( "detajj",&detajj);
  myreaderVbfHww_nTree1000_Depth3->AddVariable( "ptll", &ptll );
  myreaderVbfHww_nTree1000_Depth3->AddVariable( "jeteta1", &jeteta1);
  myreaderVbfHww_nTree1000_Depth3->AddVariable( "jeteta2", &jeteta2);


  TString direction = "";

//  direction = "/afs/cern.ch/work/a/arun/Latinos/HWW_Full2016/CMSSW_8_0_26_patch1/src/MUCCA/Optimization/weights_test/VBF_INCL_TMVAClassification_VBF_BDT.weights.xml";
// direction = "/afs/cern.ch/work/a/arun/Latinos/HWW_Full2016/CMSSW_8_0_26_patch1/src/MUCCA/Optimization/weights/VBF_INCL_TMVAClassification_VBF_BDT.weights.xml";
direction = "/afs/cern.ch/work/a/arun/Latinos/HWW_Full2016/CMSSW_8_0_26_patch1/src/MUCCA/Optimization/weights/VBF_INCL_TMVAClassification_VBF_BDT.weights_NTrees1000_MaxDepth3.xml";

  cout<<direction<<endl;
  myreaderVbfHww_nTree1000_Depth3->BookMVA("BDT",direction);
}



float hww_VBF_mvaBDT_nTree_Depth(
//float leppt1,
//		     float leppt2,
		     float mll1,
		     float mjj1,
		     float jetpt11,
		     float jetpt21,
                     float detajj1,
                     float ptll1,
                     float jeteta11,
                     float jeteta21
		     ){

//  lepton_pt1 = leppt1;
//  lepton_pt2 = leppt2;
  mll        = mll1;
  mjj        = mjj1;
  jetpt1     = jetpt11;
  detajj     = detajj1;
  ptll       = ptll1;
  jeteta1    = jeteta11;
  jeteta2    = jeteta21;

  //cout<<"BEFORE READING!!!!!!-------"<<endl;

  return  myreaderVbfHww_nTree1000_Depth3->EvaluateMVA("BDT");
}             
