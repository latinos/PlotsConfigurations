#include <TMVA/Reader.h>

using namespace std;


TMVA::Reader* myreaderBDT = new TMVA::Reader();

   float mll_32;
   float mjj_32;
   float jetpt1_32;
   float jetpt2_32;
   float detajj_32;
//   float jeteta1_32;
//   float jeteta2_32;
//   float met_32;
   float mth_32;
   float dphill_32;
//   float dphilmet_32;
//   float pTWW_32;
   float dphillmet_32;
//   float dphijjmet_32;
//   float yll_32;
//   float mtw1_32;
   float mR_32;

void initmyreaderBDT(){


  myreaderBDT->AddVariable( "mll", &mll_32 );
  myreaderBDT->AddVariable( "mjj", &mjj_32 );
  myreaderBDT->AddVariable( "jetpt1", &jetpt1_32 );
  myreaderBDT->AddVariable( "jetpt2", &jetpt2_32 );
  myreaderBDT->AddVariable( "detajj",&detajj_32);
//  myreaderBDT->AddVariable( "jeteta1", &jeteta1_32);
//  myreaderBDT->AddVariable( "jeteta2", &jeteta2_32);
//  myreaderBDT->AddVariable( "metPfType1",&met_32);
  myreaderBDT->AddVariable( "mth",&mth_32);
  myreaderBDT->AddVariable( "dphill",&dphill_32);
//  myreaderBDT->AddVariable( "dphilmet",&dphilmet_32);
//  myreaderBDT->AddVariable( "pTWW",&pTWW_32);
  myreaderBDT->AddVariable( "dphillmet",&dphillmet_32);
//  myreaderBDT->AddVariable( "dphijjmet",&dphijjmet_32);
//  myreaderBDT->AddVariable( "yll",&yll_32);
//  myreaderBDT->AddVariable( "mtw1",&mtw1_32);
  myreaderBDT->AddVariable( "mR",&mR_32);

  TString direction = "";

 direction = "/afs/cern.ch/work/a/arun/Latinos/HWW_Full2016/CMSSW_8_0_26_patch1/src/PlotsConfigurations/Configurations/VBF/Full2016BDT/weights/VBF_INCL_TMVAClassification_VBF_final_BDT4.weights.xml";
//direction = "/afs/cern.ch/work/a/arun/Latinos/HWW_Full2016/CMSSW_8_0_26_patch1/src/MUCCA/Optimization/dataset/weights/VBF__TMVAClassification_VBF_newRoot_BDT.weights.xml";

  cout<<direction<<endl;
  myreaderBDT->BookMVA("BDT4",direction);
}



float hww_VBF_mvaBDT(
		     float mll_33,
		     float mjj_33,
		     float jetpt1_33,
		     float jetpt2_33,
                     float detajj_33,
 //                    float jeteta1_33,
 //                    float jeteta2_33,
 //                    float met_33,
                     float mth_33,
                     float dphill_33,
//   float dphilmet_33,
//   float pTWW_33,
   float dphillmet_33,
//   float dphijjmet_33,
//   float yll_33,
//   float mtw1_33,
   float mR_33

		     ){

  mll_32        = mll_33;
  mjj_32        = mjj_33;
  jetpt1_32     = jetpt1_33;
  jetpt2_32     = jetpt2_33;
  detajj_32     = detajj_33;
//  jeteta1_32    = jeteta1_33;
//  jeteta2_32    = jeteta2_33;
//  met_32 = met_33;
  mth_32 = mth_33;
  dphill_32 = dphill_33;
//  dphilmet_32 = dphilmet_33;
//  pTWW_32 = pTWW_33;
  dphillmet_32 =  dphillmet_33;
//  dphijjmet_32 =  dphijjmet_33;
//  yll_32 = yll_33;
//  mtw1_32 =  mtw1_33;
  mR_32 = mR_33;

  //cout<<"BEFORE READING!!!!!!-------"<<endl;

  return  myreaderBDT->EvaluateMVA("BDT4");
}   
