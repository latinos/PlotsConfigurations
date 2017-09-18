#include <TMVA/Reader.h>

using namespace std;

float mth2HDMgrad,mtw22HDMgrad,metTtrk2HDMgrad,drll2HDMgrad,ptll2HDMgrad;//mpmet,mtw2,metTtrk,drll,mtw1,mll,ptll,dphilmet,dphilmet1,dphilmet2,pt1,pt2,metPfType1,dphill;

TMVA::Reader* myreader2HDMgrad = new TMVA::Reader();

void initMyReader2HDMgrad(){

  myreader2HDMgrad->AddVariable("mth",                     &mth2HDMgrad);
  myreader2HDMgrad->AddVariable("mtw2",                    &mtw22HDMgrad);
  myreader2HDMgrad->AddVariable("metTtrk",                 &metTtrk2HDMgrad);
  myreader2HDMgrad->AddVariable("drll",                    &drll2HDMgrad);
  myreader2HDMgrad->AddVariable("ptll",                    &ptll2HDMgrad);
  // myreader2HDMgrad->AddVariable("mpmet",                   &2HDMgradmpmet);
  // myreader2HDMgrad->AddVariable("mtw1",                    &2HDMgradmtw1);
  // myreader2HDMgrad->AddVariable("mll",                     &2HDMgradmll);
  // myreader2HDMgrad->AddVariable("dphilmet",                &2HDMgraddphilmet);
  // myreader2HDMgrad->AddVariable("dphilmet1",               &2HDMgraddphilmet1);
  // myreader2HDMgrad->AddVariable("dphilmet2",               &2HDMgraddphilmet2);
  // myreader2HDMgrad->AddVariable("std2HDMgradvector2HDMgradlepton2HDMgradpt[0]", &2HDMgradpt1);
  // myreader2HDMgrad->AddVariable("metPfType1",              &2HDMgradmetPfType1);
  // myreader2HDMgrad->AddVariable("dphill",                  &2HDMgraddphill);
  // myreader2HDMgrad->AddVariable("std2HDMgradvector2HDMgradlepton2HDMgradpt[1]", &2HDMgradpt2);

  TString direction = "";

  direction = "/afs/cern.ch/user/n/ntrevisa/work/CMSSW_8_0_26_patch1/src/MUCCA/Optimization/Weights-2HDM_TTbar_5var_em_high/TMVAClassification_BDTG18.weights.xml";

  cout<<direction<<endl;
  myreader2HDMgrad->BookMVA("BDTG18",direction);
}



float mucca2HDMgrad(float mthe,
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

  mth2HDMgrad        = mthe;
  mtw22HDMgrad       = mtw2e;
  metTtrk2HDMgrad    = metTtrke;
  drll2HDMgrad       = drlle;
  ptll2HDMgrad       = ptlle;
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

  return  myreader2HDMgrad->EvaluateMVA("BDTG18");
}             
