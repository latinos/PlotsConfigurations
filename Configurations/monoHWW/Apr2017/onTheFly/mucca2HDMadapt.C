#include <TMVA/Reader.h>

using namespace std;

float mth2HDMadapt,mtw22HDMadapt,metTtrk2HDMadapt,drll2HDMadapt,ptll2HDMadapt;//mpmet2HDMadapt,mtw22HDMadapt,metTtrk2HDMadapt,drll2HDMadapt,mtw12HDMadapt,mll2HDMadapt,ptll2HDMadapt,dphilmet2HDMadapt,dphilmet12HDMadapt,dphilmet22HDMadapt,pt12HDMadapt,pt22HDMadapt,metPfType12HDMadapt,dphill2HDMadapt;

TMVA::Reader* myreader2HDMadapt = new TMVA::Reader();

void initMyReader2HDMadapt(){

  myreader2HDMadapt->AddVariable("mth",                     &mth2HDMadapt);
  myreader2HDMadapt->AddVariable("mtw2",                    &mtw22HDMadapt);
  myreader2HDMadapt->AddVariable("metTtrk",                 &metTtrk2HDMadapt);
  myreader2HDMadapt->AddVariable("drll",                    &drll2HDMadapt);
  myreader2HDMadapt->AddVariable("ptll",                    &ptll2HDMadapt);
  // myreader2HDMadapt->AddVariable("mpmet",                   &_mpmet2HDMadapt);
  // myreader2HDMadapt->AddVariable("mtw1",                    &_mtw12HDMadapt);
  // myreader2HDMadapt->AddVariable("mll",                     &_mll2HDMadapt);
  // myreader2HDMadapt->AddVariable("dphilmet",                &_dphilmet2HDMadapt);
  // myreader2HDMadapt->AddVariable("dphilmet1",               &_dphilmet12HDMadapt);
  // myreader2HDMadapt->AddVariable("dphilmet2",               &_dphilmet22HDMadapt);
  // myreader2HDMadapt->AddVariable("std_vector_lepton_pt[0]", &_pt12HDMadapt);
  // myreader2HDMadapt->AddVariable("metPfType1",              &_metPfType12HDMadapt);
  // myreader2HDMadapt->AddVariable("dphill",                  &_dphill2HDMadapt);
  // myreader2HDMadapt->AddVariable("std_vector_lepton_pt[1]", &_pt22HDMadapt);

  TString direction = "";

  direction = "/afs/cern.ch/user/n/ntrevisa/work/CMSSW_8_0_26_patch1/src/MUCCA/Optimization/Weights-2HDM_TTbar_5var_em_high/TMVAClassification_BDT7.weights.xml";

  cout<<direction<<endl;
  myreader2HDMadapt->BookMVA("BDT7",direction);
}



float mucca2HDMadapt(float mthe,
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

  mth2HDMadapt        = mthe;
  mtw22HDMadapt       = mtw2e;
  metTtrk2HDMadapt    = metTtrke;
  drll2HDMadapt       = drlle;
  ptll2HDMadapt       = ptlle;
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

  return  myreader2HDMadapt->EvaluateMVA("BDT7");
}             
