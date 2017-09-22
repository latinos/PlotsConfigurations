#include <TMVA/Reader.h>

using namespace std;

float mthZbargrad,mtw2Zbargrad,metTtrkZbargrad,drllZbargrad,ptllZbargrad;//mpmet,mtw2,metTtrk,drll,mtw1,mll,ptll,dphilmet,dphilmet1,dphilmet2,pt1,pt2,metPfType1,dphill;

TMVA::Reader* myreaderZbargrad = new TMVA::Reader();

void initMyReaderZbargrad(){

  myreaderZbargrad->AddVariable("mth",                     &mthZbargrad);
  myreaderZbargrad->AddVariable("mtw2",                    &mtw2Zbargrad);
  myreaderZbargrad->AddVariable("metTtrk",                 &metTtrkZbargrad);
  myreaderZbargrad->AddVariable("drll",                    &drllZbargrad);
  myreaderZbargrad->AddVariable("ptll",                    &ptllZbargrad);
  // myreaderZbargrad->AddVariable("mpmet",                   &_mpmetZbargrad);
  // myreaderZbargrad->AddVariable("mtw1",                    &_mtw1Zbargrad);
  // myreaderZbargrad->AddVariable("mll",                     &_mllZbargrad);
  // myreaderZbargrad->AddVariable("dphilmet",                &_dphilmetZbargrad);
  // myreaderZbargrad->AddVariable("dphilmet1",               &_dphilmet1Zbargrad);
  // myreaderZbargrad->AddVariable("dphilmet2",               &_dphilmet2Zbargrad);
  // myreaderZbargrad->AddVariable("std_vector_lepton_pt[0]", &_pt1Zbargrad);
  // myreaderZbargrad->AddVariable("metPfType1",              &_metPfType1Zbargrad);
  // myreaderZbargrad->AddVariable("dphill",                  &_dphillZbargrad);
  // myreaderZbargrad->AddVariable("std_vector_lepton_pt[1]", &_pt2Zbargrad);

  TString direction = "";

  direction = "/afs/cern.ch/user/n/ntrevisa/work/CMSSW_8_0_26_patch1/src/MUCCA/Optimization/Weights-Zbar_TTbar_5var_em_high/TMVAClassification_BDTG19.weights.xml";

  cout<<direction<<endl;
  myreaderZbargrad->BookMVA("BDTG19",direction);
}



float muccaZbargrad(float mthe,
		    float mtw2e,
		    float metTtrke,
		    float drlle,
		    float ptlle
		    // float mpmete,
		    // float mtw1e,
		    // float mlle,
		    // float dphilmete,
		    // float dphilmet1e
		    // float dphilmet2e,
		    // float pt1e,
		    // float metPfType1e,
		    // float dphille,
		    // float pt2e
		     ){

  mthZbargrad        = mthe;
  mtw2Zbargrad       = mtw2e;
  metTtrkZbargrad    = metTtrke;
  drllZbargrad       = drlle;
  ptllZbargrad       = ptlle;
  // mpmet      = mpmete;
  // mtw1       = mtw1e;
  // mll        = mlle;
  // dphilmet   = dphilmete;
  // dphilmet1  = dphilmet1e;
  // dphilmet2  = dphilmet2e;
  // pt1        = pt1e;
  // metPfType1 = metPfType1e;
  // dphill     = dphille;
  // pt2        = pt2e;

  //cout<<"BEFORE READING!!!!!!-------"<<endl;

  return  myreaderZbargrad->EvaluateMVA("BDTG19");
}             
