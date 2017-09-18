// #include <TMVA/Reader.h>
// #include<iostream>
// #include<stdio.h>

// using namespace std;

// float _mth,_mpmet,_mtw2,_metTtrk,_drll,_mtw1,_mll,_ptll,_dphilmet,_dphilmet1,_dphilmet2,_pt1,_pt2,_metPfType1,_dphill;

//TMVA::Reader* myreader = new TMVA::Reader();

// void initMyReader(){

//   cout<<" Entering initMyReader -------"<<endl;

//   myreader->AddVariable("mth",                     &_mth);
//   myreader->AddVariable("mtw2",                    &_mtw2);
//   myreader->AddVariable("metTtrk",                 &_metTtrk);
//   myreader->AddVariable("drll",                    &_drll);
//   myreader->AddVariable("ptll",                    &_ptll);
//   myreader->AddVariable("mpmet",                   &_mpmet);
//   myreader->AddVariable("mtw1",                    &_mtw1);
//   myreader->AddVariable("mll",                     &_mll);
//   myreader->AddVariable("dphilmet",                &_dphilmet);
//   myreader->AddVariable("dphilmet1",               &_dphilmet1);
//   myreader->AddVariable("dphilmet2",               &_dphilmet2);
//   myreader->AddVariable("std_vector_lepton_pt[0]", &_pt1);
//   myreader->AddVariable("metPfType1",              &_metPfType1);
//   myreader->AddVariable("dphill",                  &_dphill);
//   myreader->AddVariable("std_vector_lepton_pt[1]", &_pt2);

//   TString direction = "";

//   direction = "/afs/cern.ch/user/n/ntrevisa/work/CMSSW_8_0_26_patch1/src/MUCCA/Optimization/Weights-2HDM_TTbar_0var_em_high/TMVAClassification_BDT7.weights.xml";

//   cout<<direction<<endl;

//   cout<<"BEFORE BOOKING!!!!!!-------"<<endl;

//   //  myreader->BookMVA("BDT7",direction);

//   //  cout<<"AFTER BOOKING!!!!!!-------"<<endl;

// }



float mucca2HDMadapt(// variables
		     float mthe,
		     float mtw2e,
		     float metTtrke,
		     float drlle,
		     float ptlle,
		     float mpmete,
		     float mtw1e,
		     float mlle,
		     float dphilmete,
		     float dphilmet1e,
		     float dphilmet2e,
		     float pt1e,
		     float metPfType1e,
		     float dphille,
		     float pt2e
		     // parameters
		     // TString model,
		     // TString channel,
		     // TString training,
		     // TString massPoint
		     ){
  // _mth        = mthe;
  // _mtw2       = mtw2e;
  // _metTtrk    = metTtrke;
  // _drll       = drlle;
  // _ptll       = ptlle;
  // _mpmet      = mpmete;
  // _mtw1       = mtw1e;
  // _mll        = mlle;
  // _dphilmet   = dphilmete;
  // _dphilmet1  = dphilmet1e;
  // _dphilmet2  = dphilmet2e;
  // _pt1        = pt1e;
  // _metPfType1 = metPfType1e;
  // _dphill     = dphille;
  // _pt2        = pt2e;

  //cout<<"BEFORE READING!!!!!!-------"<<endl;

  return 1.25;

  //  return  myreader->EvaluateMVA("BDT7");
}             
