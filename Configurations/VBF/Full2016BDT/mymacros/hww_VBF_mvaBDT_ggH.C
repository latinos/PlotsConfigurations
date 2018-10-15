#include <TMVA/Reader.h>

using namespace std;


TMVA::Reader* myreaderBDT1 = new TMVA::Reader();

//   float mll_50;
   float mjj_50;
   float jetpt1_50;
   float jetpt2_50;
   float detajj_50;
   float jeteta1_50;
   float jeteta2_50;
//   float met_50;
//   float mth_50;
//   float dphill_50;
//   float dphilmet_50;
//   float pTWW_50;
//   float dphillmet_50;
//   float dphijjmet_50;
//   float yll_50;
//   float mtw1_50;
 //  float mR_50;

void initmyreaderBDT1(){


//  myreaderBDT1->AddVariable( "mll", &mll_50 );
  myreaderBDT1->AddVariable( "mjj", &mjj_50 );
  myreaderBDT1->AddVariable( "jetpt1", &jetpt1_50 );
  myreaderBDT1->AddVariable( "jetpt2", &jetpt2_50 );
  myreaderBDT1->AddVariable( "detajj",&detajj_50);
  myreaderBDT1->AddVariable( "jeteta1", &jeteta1_50);
  myreaderBDT1->AddVariable( "jeteta2", &jeteta2_50);
//  myreaderBDT1->AddVariable( "metPfType1",&met_50);
//  myreaderBDT1->AddVariable( "mth",&mth_50);
//  myreaderBDT1->AddVariable( "dphill",&dphill_50);
//  myreaderBDT1->AddVariable( "dphilmet",&dphilmet_50);
//  myreaderBDT1->AddVariable( "pTWW",&pTWW_50);
//  myreaderBDT1->AddVariable( "dphillmet",&dphillmet_50);
//  myreaderBDT1->AddVariable( "dphijjmet",&dphijjmet_50);
//  myreaderBDT1->AddVariable( "yll",&yll_50);
//  myreaderBDT1->AddVariable( "mtw1",&mtw1_50);
//  myreaderBDT1->AddVariable( "mR",&mR_50);

  TString direction = "";

 direction = "/afs/cern.ch/work/a/arun/Latinos/HWW_Full2016/CMSSW_8_0_26_patch1/src/PlotsConfigurations/Configurations/VBF/Full2016BDT/weights/VBF_INCL_TMVAClassification_VBF_ggH_BDT.weights.xml";
//direction = "/afs/cern.ch/work/a/arun/Latinos/HWW_Full2016/CMSSW_8_0_26_patch1/src/MUCCA/Optimization/dataset/weights/VBF__TMVAClassification_VBF_newRoot_BDT.weights.xml";

  cout<<direction<<endl;
  myreaderBDT1->BookMVA("BDT",direction);
}



float hww_VBF_mvaBDT_ggH(
//		     float mll_51,
		     float mjj_51,
		     float jetpt1_51,
		     float jetpt2_51,
                     float detajj_51,
                     float jeteta1_51,
                     float jeteta2_51
 //                    float met_51,
 //                    float mth_51,
 //                    float dphill_51,
//   float dphilmet_51,
//   float pTWW_51,
 //  float dphillmet_51,
//   float dphijjmet_51
//   float yll_51,
//   float mtw1_51,
//   float mR_51
		     ){

//  mll_50        = mll_51;
  mjj_50        = mjj_51;
  jetpt1_50     = jetpt1_51;
  jetpt2_50     = jetpt2_51;
  detajj_50     = detajj_51;
  jeteta1_50    = jeteta1_51;
  jeteta2_50    = jeteta2_51;
//  met_50 = met_51;
//  mth_50 = mth_51;
//  dphill_50 = dphill_51;
//  dphilmet_50 = dphilmet_51;
//  pTWW_50 = pTWW_51;
//  dphillmet_50 =  dphillmet_51;
//  dphijjmet_50 =  dphijjmet_51;
//  yll_50 = yll_51;
//  mtw1_50 =  mtw1_51;
//  mR_50 = mR_51;

  //cout<<"BEFORE READING!!!!!!-------"<<endl;

  return  myreaderBDT1->EvaluateMVA("BDT");
}   
