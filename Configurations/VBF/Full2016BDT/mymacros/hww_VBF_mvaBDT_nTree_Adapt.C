#include <TMVA/Reader.h>

using namespace std;


TMVA::Reader* myreaderVbfHww_Adapt = new TMVA::Reader();

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


void initmyreaderVbfHww_Adapt(){


//  myreaderVbfHww_Adapt->AddVariable( "std_vector_lepton_pt[0]", &lepton_pt1 );
//  myreaderVbfHww_Adapt->AddVariable( "std_vector_lepton_pt[1]", &lepton_pt2 );
  myreaderVbfHww_Adapt->AddVariable( "mll", &mll );
  myreaderVbfHww_Adapt->AddVariable( "mjj", &mjj );
  myreaderVbfHww_Adapt->AddVariable( "jetpt1", &jetpt1 );
  myreaderVbfHww_Adapt->AddVariable( "jetpt2", &jetpt2 );
  myreaderVbfHww_Adapt->AddVariable( "detajj",&detajj);
  myreaderVbfHww_Adapt->AddVariable( "ptll", &ptll );
  myreaderVbfHww_Adapt->AddVariable( "jeteta1", &jeteta1);
  myreaderVbfHww_Adapt->AddVariable( "jeteta2", &jeteta2);


  TString direction = "";

//  direction = "/afs/cern.ch/work/a/arun/Latinos/HWW_Full2016/CMSSW_8_0_26_patch1/src/MUCCA/Optimization/weights_test/VBF_INCL_TMVAClassification_VBF_BDT.weights.xml";
// direction = "/afs/cern.ch/work/a/arun/Latinos/HWW_Full2016/CMSSW_8_0_26_patch1/src/MUCCA/Optimization/weights/VBF_INCL_TMVAClassification_VBF_BDT.weights.xml";
direction = "/afs/cern.ch/work/a/arun/Latinos/HWW_Full2016/CMSSW_8_0_26_patch1/src/MUCCA/Optimization/weights/VBF_INCL_TMVAClassification_VBF_BDT_AdaptBoost.weights.xml";

  cout<<direction<<endl;
  myreaderVbfHww_Adapt->BookMVA("BDT",direction);
}



float hww_VBF_mvaBDT_nTree_Adapt(
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
  mll        = mlle;
  mjj        = mjje;
  jetpt1     = jetpt1e;
  detajj     = detajje;
  ptll       = ptlle;
  jeteta1    = jeteta1e;
  jeteta2    = jeteta2e;

  //cout<<"BEFORE READING!!!!!!-------"<<endl;

  return  myreaderVbfHww_Adapt->EvaluateMVA("BDT");
}             
