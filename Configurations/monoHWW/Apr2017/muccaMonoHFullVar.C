#include <TMVA/Reader.h>

float mth,mpmet,mtw2,metTtrk,drll,mtw1,mll,ptll,dphilmet,dphilmet1,dphilmet2,pt1,pt2,metPfType1,dphill;

TMVA::Reader* myreader = new TMVA::Reader();

void initMyReader(TString model_ = "2HDM",
		  TString channel_ = "em_",
		  TString training_ = "BDT7"
		  ){

  cout<<"Hola: "<<model_<<endl;

  myreader->AddVariable("mth",                     &mth);
  myreader->AddVariable("mtw2",                    &mtw2);
  myreader->AddVariable("metTtrk",                 &metTtrk);
  myreader->AddVariable("drll",                    &drll);
  myreader->AddVariable("ptll",                    &ptll);
  myreader->AddVariable("mpmet",                   &mpmet);
  myreader->AddVariable("mtw1",                    &mtw1);
  myreader->AddVariable("mll",                     &mll);
  myreader->AddVariable("dphilmet",                &dphilmet);
  myreader->AddVariable("dphilmet1",               &dphilmet1);
  myreader->AddVariable("dphilmet2",               &dphilmet2);
  myreader->AddVariable("std_vector_lepton_pt[0]", &pt1);
  myreader->AddVariable("metPfType1",              &metPfType1);
  myreader->AddVariable("dphill",                  &dphill);
  myreader->AddVariable("std_vector_lepton_pt[1]", &pt2);

  TString name = "";
  name = "BDT_" + model_ + "_" + channel_ + "_" + training_;

  myreader->BookMVA(name,"/afs/cern.ch/user/n/ntrevisa/work/oldPlots/28May2017/monoH/TMVA/plotsTMVA-" + model_ + "_TTbar_0var_em/Weights-" + model_ + "_TTbar_0var_" + channel_ + "/TMVAClassification_" + training_ + ".weights.xml");

}



float muccaMonoHFullVar(// variables
			float mthe,
			float mpmete,
			float mtw2e,
			float metTtrke,
			float drlle,
			float mtw1e,
			float mlle,
			float ptlle,
			float dphilmete,
			float dphilmet1e,
			float dphilmet2e,
			float pt1e,
			float metPfType1e,
			float dphille,
			float pt2e
			){


  mth        = mthe;
  mpmet      = mpmete;
  mtw2       = mtw2e;
  metTtrk    = metTtrke;
  drll       = drlle;
  mtw2       = mtw2e;
  mll        = mlle;
  ptll       = ptlle;
  dphilmet   = dphilmete;
  dphilmet1  = dphilmet1e;
  dphilmet2  = dphilmet2e;
  pt1        = pt1e;
  metPfType1 = metPfType1e;
  dphill     = dphille;
  pt2        = pt2e;

  float output =  myreader->EvaluateMVA("BDT");

  return output;

}             


void deleteMyReader(){

  delete myreader;
  
}
