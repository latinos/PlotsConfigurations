//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
//
//  root -l VH2j_TMVAReader.C
//
//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~

#include "TFile.h"
#include "TLorentzVector.h"
#include "TMVA/Reader.h"
#include "TROOT.h"
#include "TString.h"
#include "TSystem.h"
#include "TTree.h"


namespace multidraw {extern thread_local TTree* currentTree;}

TMVA::Reader* myreader = new TMVA::Reader();

bool debug = false;

bool initialized = false;

TString name_temp = "";


// Variables fed into the BDT

float loc_mll;
float loc_drll;
float loc_ptll;
float loc_Lepton_pt0;
float loc_Lepton_pt1;
float loc_MET_pt;
float loc_TkMET_pt;
float loc_mpmet;
float loc_mT2;
float loc_mTi;
float loc_mth;
float loc_mtw1;
float loc_mtw2;
float loc_dphill;
float loc_dphilmet;
float loc_dphilmet1;
float loc_dphilmet2;


// Variables read from the tree

float loc0_drll;
float loc0_mll;
float loc0_ptll;
float loc0_Lepton_pt[100];
float loc0_MET_pt;
float loc0_TkMET_pt;
float loc0_mpmet;
float loc0_mT2;
float loc0_mTi;
float loc0_mth;
float loc0_mtw1;
float loc0_mtw2;
float loc0_dphill;
float loc0_dphilmet;
float loc0_dphilmet1;
float loc0_dphilmet2;



// User defined function
// float mindetajl(float jet1_eta,
// 		float jet2_eta,
// 		float lep1_eta,
// 		float lep2_eta)
// {
//   float themin = 999;

//   float detaj1l1 = fabs(jet1_eta - lep1_eta);
//   float detaj1l2 = fabs(jet1_eta - lep2_eta);
//   float detaj2l1 = fabs(jet2_eta - lep1_eta);
//   float detaj2l2 = fabs(jet2_eta - lep2_eta);

//   if (detaj1l1 < themin) themin = detaj1l1;
//   if (detaj1l2 < themin) themin = detaj1l2;
//   if (detaj2l1 < themin) themin = detaj2l1;
//   if (detaj2l2 < themin) themin = detaj2l2;

//   return themin;
// }


// Init
void init_2HDMa_TMVAReader(TTree* tree)
{
  tree->SetBranchAddress("mth",    &loc0_mth);
  tree->SetBranchAddress("mtw2", &loc0_mtw2);
  tree->SetBranchAddress("TkMET_pt",    &loc0_TkMET_pt);
  tree->SetBranchAddress("drll",          &loc0_drll);
  tree->SetBranchAddress("ptll",          &loc0_ptll);
  tree->SetBranchAddress("mpmet",   &loc0_mpmet);
  tree->SetBranchAddress("mtw1",   &loc0_mtw1);
  tree->SetBranchAddress("mll",          &loc0_mll);
  tree->SetBranchAddress("dphilmet",   &loc0_dphilmet);
  tree->SetBranchAddress("dphilmet1",   &loc0_dphilmet1);
  tree->SetBranchAddress("dphilmet2", &loc0_dphilmet2);
  tree->SetBranchAddress("Lepton_pt",          &loc0_Lepton_pt);
  tree->SetBranchAddress("MET_pt",       &loc0_MET_pt);
  tree->SetBranchAddress("dphill",    &loc0_dphill);
  tree->SetBranchAddress("mT2",    &loc0_mT2);
  tree->SetBranchAddress("mTi",    &loc0_mTi);



  // The variables' names and their order have to agree with those in VH2j_TMVAClassification.C
  myreader->AddVariable("mth",          &loc_mth);
  myreader->AddVariable("mtw2", &loc_mtw2);
  myreader->AddVariable("TkMET_pt",    &loc_TkMET_pt);
  myreader->AddVariable("drll",    &loc_drll);
  myreader->AddVariable("ptll",          &loc_ptll);
  myreader->AddVariable("mpmet",   &loc_mpmet);
  myreader->AddVariable("mtw1",   &loc_mtw1);
  myreader->AddVariable("mll",          &loc_mll);
  myreader->AddVariable("dphilmet",   &loc_dphilmet);
  myreader->AddVariable("dphilmet1",   &loc_dphilmet1);
  myreader->AddVariable("dphilmet2",   &loc_dphilmet2);
  myreader->AddVariable("Lepton_pt[0]",          &loc_Lepton_pt0);
  myreader->AddVariable("MET_pt",       &loc_MET_pt);
  myreader->AddVariable("dphill",    &loc_dphill);
  myreader->AddVariable("mT2",    &loc_mT2);
  myreader->AddVariable("mTi",    &loc_mTi);
  myreader->AddVariable("Lepton_pt[1]",          &loc_Lepton_pt1);

                
  myreader->BookMVA("BDT","/afs/cern.ch/user/f/fernanpe/public/for_Francesca/TMVAClassificationsf_BDT7.weights.xml");
}


// Main function
float sf2HDMa_TMVAReader(int entry)
{
  if (name_temp != multidraw::currentTree->GetCurrentFile()->GetName()) {

    std::cout << " name_temp = " << name_temp << std::endl;

    name_temp = multidraw::currentTree->GetCurrentFile()->GetName();

    std::cout << " name_temp = " << name_temp << std::endl;

    initialized = false;
  }

  if (!initialized) {

    delete myreader;

    myreader = new TMVA::Reader();

    init_2HDMa_TMVAReader(multidraw::currentTree);

    std::cout << " check init" << std::endl;	

    initialized = true;		
  }

  multidraw::currentTree->GetEntry(entry);

  loc_mll= loc0_mll;
  loc_drll= loc0_drll;
  loc_ptll= loc0_ptll;
  loc_Lepton_pt0= loc0_Lepton_pt[0];
  loc_Lepton_pt1= loc0_Lepton_pt[1];
  loc_MET_pt= loc0_MET_pt;
  loc_TkMET_pt= loc0_TkMET_pt;
  loc_mpmet= loc0_mpmet;
  loc_mth= loc0_mth;
  loc_mtw1= loc0_mtw1;
  loc_mtw2= loc0_mtw2;
  loc_dphill= loc0_dphill;
  loc_dphilmet= loc0_dphilmet;
  loc_dphilmet1= loc0_dphilmet1;
  loc_dphilmet2= loc0_dphilmet2;
  loc_mT2= loc0_mT2;
  loc_mTi= loc0_mTi;

	
  float classifier = myreader->EvaluateMVA("BDT");

  if (debug) std::cout << " classifier " << classifier << std::endl;

  return classifier;
}
