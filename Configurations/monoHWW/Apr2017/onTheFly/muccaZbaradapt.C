#include <TMVA/Reader.h>

using namespace std;

float mthZbaradapt,mtw2Zbaradapt,metTtrkZbaradapt,drllZbaradapt,ptllZbaradapt;
//mpmetZbaradapt,mtw2Zbaradapt,metTtrkZbaradapt,drllZbaradapt,mtw1Zbaradapt,mllZbaradapt,ptllZbaradapt,dphilmetZbaradapt,dphilmet1Zbaradapt,dphilmet2Zbaradapt,pt1Zbaradapt,pt2Zbaradapt,metPfType1Zbaradapt,dphill;

TMVA::Reader* myreaderZbaradapt = new TMVA::Reader();

void initMyReaderZbaradapt(){

  myreaderZbaradapt->AddVariable("mth",                     &mthZbaradapt);
  myreaderZbaradapt->AddVariable("mtw2",                    &mtw2Zbaradapt);
  myreaderZbaradapt->AddVariable("metTtrk",                 &metTtrkZbaradapt);
  myreaderZbaradapt->AddVariable("drll",                    &drllZbaradapt);
  myreaderZbaradapt->AddVariable("ptll",                    &ptllZbaradapt);
  // myreaderZbaradapt->AddVariable("mpmet",                   &_mpmet);
  // myreaderZbaradapt->AddVariable("mtw1",                    &_mtw1);
  // myreaderZbaradapt->AddVariable("mll",                     &_mll);
  // myreaderZbaradapt->AddVariable("dphilmet",                &_dphilmet);
  // myreaderZbaradapt->AddVariable("dphilmet1",               &_dphilmet1);
  // myreaderZbaradapt->AddVariable("dphilmet2",               &_dphilmet2);
  // myreaderZbaradapt->AddVariable("std_vector_lepton_pt[0]", &_pt1);
  // myreaderZbaradapt->AddVariable("metPfType1",              &_metPfType1);
  // myreaderZbaradapt->AddVariable("dphill",                  &_dphill);
  // myreaderZbaradapt->AddVariable("std_vector_lepton_pt[1]", &_pt2);

  TString direction = "";

  direction = "/afs/cern.ch/user/n/ntrevisa/work/CMSSW_8_0_26_patch1/src/MUCCA/Optimization/Weights-Zbar_TTbar_5var_em_high/TMVAClassification_BDT7.weights.xml";

  cout<<direction<<endl;
  myreaderZbaradapt->BookMVA("BDT7",direction);
}



float muccaZbaradapt(float mthe,
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

  mthZbaradapt        = mthe;
  mtw2Zbaradapt       = mtw2e;
  metTtrkZbaradapt    = metTtrke;
  drllZbaradapt       = drlle;
  ptllZbaradapt       = ptlle;
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

  return  myreaderZbaradapt->EvaluateMVA("BDT7");
}             
