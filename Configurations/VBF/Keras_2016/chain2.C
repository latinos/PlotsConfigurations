#include <cstdlib>
#include <iostream>
#include <map>
#include <string>

#include "TFile.h"
#include "TTree.h"
#include "TString.h"
#include "TSystem.h"
#include "TROOT.h"
#include "TObjString.h"
#include "TChain.h"

void chain2(){

//TString Ctrl="(mth>=60 && mth<125) && mll>12 && Lepton_pt[0]>25 && Lepton_pt[1]>10 && Alt$(Lepton_pt[2],0)<10 && ptll > 30 && (Lepton_pdgId[0] * Lepton_pdgId[1] == -11*13) && (abs(Lepton_pdgId[1]) == 13 || Lepton_pt[1]>13) && (abs(CleanJet_eta[0])<4.7) && (abs(CleanJet_eta[1])<4.7) && Sum$(CleanJet_pt>30)==2 && mjj>200 && MET_pt > 20 && (Sum$(CleanJet_pt > 20. && abs(CleanJet_eta)<2.5 && Jet_btagDeepB[CleanJet_jetIdx] > 0.1522) == 0)";
  

//TString Ctrl="(mth>=60 && mth<125) && mll>12 && Lepton_pt[0]>25 && Lepton_pt[1]>10 && Alt$(Lepton_pt[2],0)<10 && ptll > 30 && (abs(CleanJet_eta[0])<4.7) && (abs(CleanJet_eta[1])<4.7) && (Sum$(CleanJet_pt>30)>=2 || (Sum$(CleanJet_pt>30)==1 && CleanJet_pt[1]>20.)) && mjj>200 && MET_pt > 20 && (Sum$(CleanJet_pt > 20. && abs(CleanJet_eta)<2.5 && Jet_btagDeepB[CleanJet_jetIdx] > 0.1522) == 0)";

  
TString Ctrl="(mth>=60 && mth<125) && Lepton_pt[0]>25 && Lepton_pt[1]>10 && Alt$(Lepton_pt[2],0)<10 && ptll > 30 && Sum$(CleanJet_pt>30)>=2 && (Sum$(CleanJet_pt > 20. && abs(CleanJet_eta)<2.5 && Jet_btagDeepB[CleanJet_jetIdx] > 0.2217) == 0)";

TChain *VBF = new TChain("Events");

/*
VBF->AddFile("/eos/cms/store/group/phys_higgs/cmshww/amassiro/HWWNano/Summer16_102X_nAODv4_Full2016v5/MCl1loose2016v5__MCCorr2016v5__l2loose__l2tightOR2016v5/nanoLatino_VBFHToWWTo2L2Nu_M125_herwigpp_PrivateNano__part0.root");
VBF->AddFile("/eos/cms/store/group/phys_higgs/cmshww/amassiro/HWWNano/Summer16_102X_nAODv4_Full2016v5/MCl1loose2016v5__MCCorr2016v5__l2loose__l2tightOR2016v5/nanoLatino_VBFHToWWTo2L2Nu_M125_herwigpp_PrivateNano__part1.root");
VBF->AddFile("/eos/cms/store/group/phys_higgs/cmshww/amassiro/HWWNano/Summer16_102X_nAODv4_Full2016v5/MCl1loose2016v5__MCCorr2016v5__l2loose__l2tightOR2016v5/nanoLatino_VBFHToWWTo2L2Nu_M125_herwigpp_PrivateNano__part2.root");
VBF->AddFile("/eos/cms/store/group/phys_higgs/cmshww/amassiro/HWWNano/Summer16_102X_nAODv4_Full2016v5/MCl1loose2016v5__MCCorr2016v5__l2loose__l2tightOR2016v5/nanoLatino_VBFHToWWTo2L2Nu_M125_herwigpp_PrivateNano__part3.root");
VBF->AddFile("/eos/cms/store/group/phys_higgs/cmshww/amassiro/HWWNano/Summer16_102X_nAODv4_Full2016v5/MCl1loose2016v5__MCCorr2016v5__l2loose__l2tightOR2016v5/nanoLatino_VBFHToWWTo2L2Nu_M125_herwigpp_PrivateNano__part4.root");
VBF->AddFile("/eos/cms/store/group/phys_higgs/cmshww/amassiro/HWWNano/Summer16_102X_nAODv4_Full2016v5/MCl1loose2016v5__MCCorr2016v5__l2loose__l2tightOR2016v5/nanoLatino_VBFHToWWTo2L2Nu_M125_herwigpp_PrivateNano__part5.root");
VBF->AddFile("/eos/cms/store/group/phys_higgs/cmshww/amassiro/HWWNano/Summer16_102X_nAODv4_Full2016v5/MCl1loose2016v5__MCCorr2016v5__l2loose__l2tightOR2016v5/nanoLatino_VBFHToWWTo2L2Nu_M125_herwigpp_PrivateNano__part6.root");
*/
VBF->AddFile("/eos/cms/store/group/phys_higgs/cmshww/amassiro/HWWNano/Summer16_102X_nAODv4_Full2016v5/MCl1loose2016v5__MCCorr2016v5__l2loose__l2tightOR2016v5/nanoLatino_VBFHToWWTo2L2Nu_M125_CUETDown__part0.root");
VBF->AddFile("/eos/cms/store/group/phys_higgs/cmshww/amassiro/HWWNano/Summer16_102X_nAODv4_Full2016v5/MCl1loose2016v5__MCCorr2016v5__l2loose__l2tightOR2016v5/nanoLatino_VBFHToWWTo2L2Nu_M125_CUETUp__part0.root");
VBF->AddFile("/eos/cms/store/group/phys_higgs/cmshww/amassiro/HWWNano/Summer16_102X_nAODv4_Full2016v5/MCl1loose2016v5__MCCorr2016v5__l2loose__l2tightOR2016v5/nanoLatino_VBFHToWWTo2L2Nu_M125_CUETUp__part1.root");



TCanvas *g1 = new TCanvas("g1","g1",5,5,800,600);
        TH1F* h1 = new TH1F("h1","VBF",1, 0,1);
        VBF->Draw("1>>h1", Ctrl);


TChain *top = new TChain("Events");

top->AddFile("/eos/cms/store/group/phys_higgs/cmshww/amassiro/HWWNano/Summer16_102X_nAODv4_Full2016v5/MCl1loose2016v5__MCCorr2016v5__l2loose__l2tightOR2016v5/nanoLatino_TTTo2L2Nu__part0.root");
top->AddFile("/eos/cms/store/group/phys_higgs/cmshww/amassiro/HWWNano/Summer16_102X_nAODv4_Full2016v5/MCl1loose2016v5__MCCorr2016v5__l2loose__l2tightOR2016v5/nanoLatino_TTTo2L2Nu__part1.root");
top->AddFile("/eos/cms/store/group/phys_higgs/cmshww/amassiro/HWWNano/Summer16_102X_nAODv4_Full2016v5/MCl1loose2016v5__MCCorr2016v5__l2loose__l2tightOR2016v5/nanoLatino_TTTo2L2Nu__part2.root");
top->AddFile("/eos/cms/store/group/phys_higgs/cmshww/amassiro/HWWNano/Summer16_102X_nAODv4_Full2016v5/MCl1loose2016v5__MCCorr2016v5__l2loose__l2tightOR2016v5/nanoLatino_TTTo2L2Nu__part3.root");
top->AddFile("/eos/cms/store/group/phys_higgs/cmshww/amassiro/HWWNano/Summer16_102X_nAODv4_Full2016v5/MCl1loose2016v5__MCCorr2016v5__l2loose__l2tightOR2016v5/nanoLatino_TTTo2L2Nu__part4.root");
top->AddFile("/eos/cms/store/group/phys_higgs/cmshww/amassiro/HWWNano/Summer16_102X_nAODv4_Full2016v5/MCl1loose2016v5__MCCorr2016v5__l2loose__l2tightOR2016v5/nanoLatino_TTTo2L2Nu__part5.root");
top->AddFile("/eos/cms/store/group/phys_higgs/cmshww/amassiro/HWWNano/Summer16_102X_nAODv4_Full2016v5/MCl1loose2016v5__MCCorr2016v5__l2loose__l2tightOR2016v5/nanoLatino_TTTo2L2Nu__part6.root");
top->AddFile("/eos/cms/store/group/phys_higgs/cmshww/amassiro/HWWNano/Summer16_102X_nAODv4_Full2016v5/MCl1loose2016v5__MCCorr2016v5__l2loose__l2tightOR2016v5/nanoLatino_TTTo2L2Nu__part7.root");
/*
top->AddFile("/eos/cms/store/group/phys_higgs/cmshww/amassiro/HWWNano/Summer16_102X_nAODv4_Full2016v5/MCl1loose2016v5__MCCorr2016v5__l2loose__l2tightOR2016v5/nanoLatino_TTTo2L2Nu__part8.root");
top->AddFile("/eos/cms/store/group/phys_higgs/cmshww/amassiro/HWWNano/Summer16_102X_nAODv4_Full2016v5/MCl1loose2016v5__MCCorr2016v5__l2loose__l2tightOR2016v5/nanoLatino_TTTo2L2Nu__part9.root");
top->AddFile("/eos/cms/store/group/phys_higgs/cmshww/amassiro/HWWNano/Summer16_102X_nAODv4_Full2016v5/MCl1loose2016v5__MCCorr2016v5__l2loose__l2tightOR2016v5/nanoLatino_TTTo2L2Nu__part10.root");
top->AddFile("/eos/cms/store/group/phys_higgs/cmshww/amassiro/HWWNano/Summer16_102X_nAODv4_Full2016v5/MCl1loose2016v5__MCCorr2016v5__l2loose__l2tightOR2016v5/nanoLatino_TTTo2L2Nu__part11.root");
top->AddFile("/eos/cms/store/group/phys_higgs/cmshww/amassiro/HWWNano/Summer16_102X_nAODv4_Full2016v5/MCl1loose2016v5__MCCorr2016v5__l2loose__l2tightOR2016v5/nanoLatino_TTTo2L2Nu__part12.root");
top->AddFile("/eos/cms/store/group/phys_higgs/cmshww/amassiro/HWWNano/Summer16_102X_nAODv4_Full2016v5/MCl1loose2016v5__MCCorr2016v5__l2loose__l2tightOR2016v5/nanoLatino_TTTo2L2Nu__part13.root");
top->AddFile("/eos/cms/store/group/phys_higgs/cmshww/amassiro/HWWNano/Summer16_102X_nAODv4_Full2016v5/MCl1loose2016v5__MCCorr2016v5__l2loose__l2tightOR2016v5/nanoLatino_TTTo2L2Nu__part14.root");
top->AddFile("/eos/cms/store/group/phys_higgs/cmshww/amassiro/HWWNano/Summer16_102X_nAODv4_Full2016v5/MCl1loose2016v5__MCCorr2016v5__l2loose__l2tightOR2016v5/nanoLatino_TTTo2L2Nu__part15.root");
top->AddFile("/eos/cms/store/group/phys_higgs/cmshww/amassiro/HWWNano/Summer16_102X_nAODv4_Full2016v5/MCl1loose2016v5__MCCorr2016v5__l2loose__l2tightOR2016v5/nanoLatino_TTTo2L2Nu__part16.root");
top->AddFile("/eos/cms/store/group/phys_higgs/cmshww/amassiro/HWWNano/Summer16_102X_nAODv4_Full2016v5/MCl1loose2016v5__MCCorr2016v5__l2loose__l2tightOR2016v5/nanoLatino_TTTo2L2Nu__part17.root");
top->AddFile("/eos/cms/store/group/phys_higgs/cmshww/amassiro/HWWNano/Summer16_102X_nAODv4_Full2016v5/MCl1loose2016v5__MCCorr2016v5__l2loose__l2tightOR2016v5/nanoLatino_TTTo2L2Nu__part18.root");
top->AddFile("/eos/cms/store/group/phys_higgs/cmshww/amassiro/HWWNano/Summer16_102X_nAODv4_Full2016v5/MCl1loose2016v5__MCCorr2016v5__l2loose__l2tightOR2016v5/nanoLatino_TTTo2L2Nu__part19.root");
top->AddFile("/eos/cms/store/group/phys_higgs/cmshww/amassiro/HWWNano/Summer16_102X_nAODv4_Full2016v5/MCl1loose2016v5__MCCorr2016v5__l2loose__l2tightOR2016v5/nanoLatino_TTTo2L2Nu__part20.root");
*/

TCanvas *g2 = new TCanvas("g2","g2",5,5,800,600);
        TH1F* h2 = new TH1F("h2","Top",1, 0,1);
        top->Draw("1>>h2", Ctrl);





TChain *ggh = new TChain("Events");

ggh->AddFile("/eos/cms/store/group/phys_higgs/cmshww/amassiro/HWWNano/Summer16_102X_nAODv4_Full2016v5/MCl1loose2016v5__MCCorr2016v5__l2loose__l2tightOR2016v5/nanoLatino_GluGluHToWWTo2L2NuPowheg_M125__part0.root");
ggh->AddFile("/eos/cms/store/group/phys_higgs/cmshww/amassiro/HWWNano/Summer16_102X_nAODv4_Full2016v5/MCl1loose2016v5__MCCorr2016v5__l2loose__l2tightOR2016v5/nanoLatino_GluGluHToWWTo2L2Nu_M125_herwigpp__part0.root");
ggh->AddFile("/eos/cms/store/group/phys_higgs/cmshww/amassiro/HWWNano/Summer16_102X_nAODv4_Full2016v5/MCl1loose2016v5__MCCorr2016v5__l2loose__l2tightOR2016v5/nanoLatino_GluGluHToWWTo2L2Nu_M125_herwigpp_PrivateNano__part0.root");
ggh->AddFile("/eos/cms/store/group/phys_higgs/cmshww/amassiro/HWWNano/Summer16_102X_nAODv4_Full2016v5/MCl1loose2016v5__MCCorr2016v5__l2loose__l2tightOR2016v5/nanoLatino_GluGluHToWWTo2L2Nu_M125_herwigpp_PrivateNano__part1.root");
ggh->AddFile("/eos/cms/store/group/phys_higgs/cmshww/amassiro/HWWNano/Summer16_102X_nAODv4_Full2016v5/MCl1loose2016v5__MCCorr2016v5__l2loose__l2tightOR2016v5/nanoLatino_GluGluHToWWTo2L2Nu_M125_herwigpp_PrivateNano__part2.root");
ggh->AddFile("/eos/cms/store/group/phys_higgs/cmshww/amassiro/HWWNano/Summer16_102X_nAODv4_Full2016v5/MCl1loose2016v5__MCCorr2016v5__l2loose__l2tightOR2016v5/nanoLatino_GluGluHToWWTo2L2Nu_M125_herwigpp_PrivateNano__part3.root");
ggh->AddFile("/eos/cms/store/group/phys_higgs/cmshww/amassiro/HWWNano/Summer16_102X_nAODv4_Full2016v5/MCl1loose2016v5__MCCorr2016v5__l2loose__l2tightOR2016v5/nanoLatino_GluGluHToWWTo2L2Nu_M125_herwigpp_PrivateNano__part4.root");
ggh->AddFile("/eos/cms/store/group/phys_higgs/cmshww/amassiro/HWWNano/Summer16_102X_nAODv4_Full2016v5/MCl1loose2016v5__MCCorr2016v5__l2loose__l2tightOR2016v5/nanoLatino_GluGluHToWWTo2L2Nu_M125_herwigpp_PrivateNano__part5.root");
ggh->AddFile("/eos/cms/store/group/phys_higgs/cmshww/amassiro/HWWNano/Summer16_102X_nAODv4_Full2016v5/MCl1loose2016v5__MCCorr2016v5__l2loose__l2tightOR2016v5/nanoLatino_GluGluHToWWTo2L2Nu_M125_herwigpp_PrivateNano__part6.root");
ggh->AddFile("/eos/cms/store/group/phys_higgs/cmshww/amassiro/HWWNano/Summer16_102X_nAODv4_Full2016v5/MCl1loose2016v5__MCCorr2016v5__l2loose__l2tightOR2016v5/nanoLatino_GluGluHToWWTo2L2Nu_M125_herwigpp_PrivateNano__part7.root");
ggh->AddFile("/eos/cms/store/group/phys_higgs/cmshww/amassiro/HWWNano/Summer16_102X_nAODv4_Full2016v5/MCl1loose2016v5__MCCorr2016v5__l2loose__l2tightOR2016v5/nanoLatino_GluGluHToWWTo2L2Nu_M125_CUETDown__part0.root");
ggh->AddFile("/eos/cms/store/group/phys_higgs/cmshww/amassiro/HWWNano/Summer16_102X_nAODv4_Full2016v5/MCl1loose2016v5__MCCorr2016v5__l2loose__l2tightOR2016v5/nanoLatino_GluGluHToWWTo2L2Nu_M125_CUETUp__part0.root");
ggh->AddFile("/eos/cms/store/group/phys_higgs/cmshww/amassiro/HWWNano/Summer16_102X_nAODv4_Full2016v5/MCl1loose2016v5__MCCorr2016v5__l2loose__l2tightOR2016v5/nanoLatino_GluGluHToWWTo2L2NuAMCNLO_M125__part0.root");
ggh->AddFile("/eos/cms/store/group/phys_higgs/cmshww/amassiro/HWWNano/Summer16_102X_nAODv4_Full2016v5/MCl1loose2016v5__MCCorr2016v5__l2loose__l2tightOR2016v5/nanoLatino_GluGluHToWWTo2L2NuAMCNLO_M125__part1.root");


TCanvas *g3 = new TCanvas("g3","g3",5,5,800,600);
        TH1F* h3 = new TH1F("h3","ggH",1, 0,1);
        ggh->Draw("1>>h3", Ctrl);



TChain *ww = new TChain("Events");

ww->AddFile("/eos/cms/store/group/phys_higgs/cmshww/amassiro/HWWNano/Summer16_102X_nAODv4_Full2016v5/MCl1loose2016v5__MCCorr2016v5__l2loose__l2tightOR2016v5/nanoLatino_WWTo2L2Nu_CUETDown__part0.root");
ww->AddFile("/eos/cms/store/group/phys_higgs/cmshww/amassiro/HWWNano/Summer16_102X_nAODv4_Full2016v5/MCl1loose2016v5__MCCorr2016v5__l2loose__l2tightOR2016v5/nanoLatino_WWTo2L2Nu_CUETDown__part1.root");
ww->AddFile("/eos/cms/store/group/phys_higgs/cmshww/amassiro/HWWNano/Summer16_102X_nAODv4_Full2016v5/MCl1loose2016v5__MCCorr2016v5__l2loose__l2tightOR2016v5/nanoLatino_WWTo2L2Nu_CUETDown__part2.root");
ww->AddFile("/eos/cms/store/group/phys_higgs/cmshww/amassiro/HWWNano/Summer16_102X_nAODv4_Full2016v5/MCl1loose2016v5__MCCorr2016v5__l2loose__l2tightOR2016v5/nanoLatino_WWTo2L2Nu_CUETUp__part0.root");
ww->AddFile("/eos/cms/store/group/phys_higgs/cmshww/amassiro/HWWNano/Summer16_102X_nAODv4_Full2016v5/MCl1loose2016v5__MCCorr2016v5__l2loose__l2tightOR2016v5/nanoLatino_WWTo2L2Nu_CUETUp__part1.root");
ww->AddFile("/eos/cms/store/group/phys_higgs/cmshww/amassiro/HWWNano/Summer16_102X_nAODv4_Full2016v5/MCl1loose2016v5__MCCorr2016v5__l2loose__l2tightOR2016v5/nanoLatino_WWTo2L2NuHerwigPS__part0.root");
ww->AddFile("/eos/cms/store/group/phys_higgs/cmshww/amassiro/HWWNano/Summer16_102X_nAODv4_Full2016v5/MCl1loose2016v5__MCCorr2016v5__l2loose__l2tightOR2016v5/nanoLatino_WWTo2L2NuHerwigPS__part1.root");
ww->AddFile("/eos/cms/store/group/phys_higgs/cmshww/amassiro/HWWNano/Summer16_102X_nAODv4_Full2016v5/MCl1loose2016v5__MCCorr2016v5__l2loose__l2tightOR2016v5/nanoLatino_WWTo2L2NuHerwigPS__part2.root");




TCanvas *g4 = new TCanvas("g4","g4",5,5,800,600);
        TH1F* h4 = new TH1F("h4","WW",1, 0,1);
        ww->Draw("1>>h4", Ctrl);
}
