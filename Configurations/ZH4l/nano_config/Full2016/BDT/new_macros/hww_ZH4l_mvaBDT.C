#include <TMVA/Reader.h>

using namespace std;


TMVA::Reader* myreaderBDT = new TMVA::Reader();

   float pt1_32;
   float pt2_32;
   float pt3_32;
   float pt4_32;
   float z0Mass_zh4l_32;
   float z1Mass_zh4l_32;
   float z1DeltaPhi_zh4l_32;
   float z1dPhi_lep1MET_zh4l_32;
   float z1dPhi_lep2MET_zh4l_32;
//   float jeteta1_32;
//   float jeteta2_32;
//   float met_32;
//   float z1DeltaPhi_zh4l_32;
//   float dphill_32;
//   float dphilmet_32;
//   float pTWW_32;
//   float dphillmet_32;
//   float dphijjmet_32;
//   float yll_32;
//   float mtw1_32;
//   float mR_32;

void initmyreaderBDT(){


  myreaderBDT->AddVariable( "Lepton_pt[0]", &pt1_32 );
  myreaderBDT->AddVariable( "Lepton_pt[1]", &pt2_32 );
  myreaderBDT->AddVariable( "Lepton_pt[2]", &pt3_32 );
  myreaderBDT->AddVariable( "Lepton_pt[3]", &pt4_32 );
//  myreaderBDT->AddVariable( "z1dPhi_lep1MET_zh4l", &z1dPhi_lep1MET_zh4l_32 );
//  myreaderBDT->AddVariable( "z1dPhi_lep2MET_zh4l", &z1dPhi_lep2MET_zh4l_32 );
  myreaderBDT->AddVariable( "z0Mass_zh4l", &z0Mass_zh4l_32 );
  myreaderBDT->AddVariable( "z1Mass_zh4l",&z1Mass_zh4l_32);
  myreaderBDT->AddVariable( "z1DeltaPhi_zh4l",&z1DeltaPhi_zh4l_32);
  myreaderBDT->AddVariable( "z1dPhi_lep1MET_zh4l", &z1dPhi_lep1MET_zh4l_32 );
  myreaderBDT->AddVariable( "z1dPhi_lep2MET_zh4l", &z1dPhi_lep2MET_zh4l_32 );
//  myreaderBDT->AddVariable( "jeteta1", &jeteta1_32);
//  myreaderBDT->AddVariable( "jeteta2", &jeteta2_32);
//  myreaderBDT->AddVariable( "metPfType1",&met_32);
//  myreaderBDT->AddVariable( "z1DeltaPhi_zh4l",&z1DeltaPhi_zh4l_32);
//  myreaderBDT->AddVariable( "dphill",&dphill_32);
//  myreaderBDT->AddVariable( "dphilmet",&dphilmet_32);
//  myreaderBDT->AddVariable( "pTWW",&pTWW_32);
//  myreaderBDT->AddVariable( "dphillmet",&dphillmet_32);
//  myreaderBDT->AddVariable( "dphijjmet",&dphijjmet_32);
//  myreaderBDT->AddVariable( "yll",&yll_32);
//  myreaderBDT->AddVariable( "mtw1",&mtw1_32);
//  myreaderBDT->AddVariable( "mR",&mR_32);

  TString direction = "";

 direction = "/afs/cern.ch/work/k/kaura/NewLatino_v2/CMSSW_10_2_5/src/PlotsConfigurations/Configurations/ZH4l/nano_config/Full2016/BDT/weights/ZH4l__Tmva_ZH_std_root_BDT.weights.xml";
//direction = "/afs/cern.ch/work/a/arun/Latinos/HWW_Full2016/CMSSW_8_0_26_patch1/src/MUCCA/Optimization/dataset/weights/VBF__TMVAClassification_VBF_newRoot_BDT.weights.xml";

  cout<<direction<<endl;
  myreaderBDT->BookMVA("BDT",direction);
}



float hww_ZH4l_mvaBDT(
//		     float Lepton_pt[0]_33,
//		     float Lepton_pt[1]_33,
//		     float Lepton_pt[2]_33,
  //                   float Lepton_pt[3]_33,
 //                    float z1dPhi_lep1MET_zh4l_33,
 //                    float z1dPhi_lep2MET_zh4l_33,
   float pt1_33,
   float pt2_33,
   float pt3_33,
   float pt4_33,
		     float z0Mass_zh4l_33,
                     float z1Mass_zh4l_33,
                     float z1DeltaPhi_zh4l_33,
                   float z1dPhi_lep1MET_zh4l_33,
                     float z1dPhi_lep2MET_zh4l_33 
//                    float jeteta1_33,
 //                    float jeteta2_33,
 //                    float met_33,
//                     float z1DeltaPhi_zh4l_33
                   //  float dphill_33,
//   float dphilmet_33,
//   float pTWW_33,
//   float dphillmet_33,
//   float dphijjmet_33,
//   float yll_33,
//   float mtw1_33,
  // float mR_33

		     ){

//  Lepton_pt[0]_32    = Lepton_pt[0]_33;
 // Lepton_pt[1]_32    = Lepton_pt[1]_33;
//  Lepton_pt[2]_32    = Lepton_pt[2]_33;
//  Lepton_pt[3]_32    = Lepton_pt[3]_33;
//  z1dPhi_lep1MET_zh4l_32    = z1dPhi_lep1MET_zh4l_33;
  //z1dPhi_lep2MET_zh4l_32    = z1dPhi_lep2MET_zh4l_33;
  pt1_32 =pt1_33;
  pt2_32 =pt2_33;
  pt3_32 =pt3_33;
  pt4_32 =pt4_33;
  z0Mass_zh4l_32     = z0Mass_zh4l_33;
  z1Mass_zh4l_32     = z1Mass_zh4l_33;
  z1DeltaPhi_zh4l_32 = z1DeltaPhi_zh4l_33;
  z1dPhi_lep1MET_zh4l_32    = z1dPhi_lep1MET_zh4l_33;
  z1dPhi_lep2MET_zh4l_32    = z1dPhi_lep2MET_zh4l_33;

//  jeteta1_32    = jeteta1_33;
//  jeteta2_32    = jeteta2_33;
//  met_32 = met_33;
//  z1DeltaPhi_zh4l_32 = z1DeltaPhi_zh4l_33;
//  dphill_32 = dphill_33;
//  dphilmet_32 = dphilmet_33;
//  pTWW_32 = pTWW_33;
//  dphillmet_32 =  dphillmet_33;
//  dphijjmet_32 =  dphijjmet_33;
//  yll_32 = yll_33;
//  mtw1_32 =  mtw1_33;
//  mR_32 = mR_33;

  //cout<<"BEFORE READING!!!!!!-------"<<endl;

  return  myreaderBDT->EvaluateMVA("BDT");
}   
