//root -l -q 'yields.C("MuMu")'

#include "TROOT.h"
#include "TCanvas.h"
#include "THStack.h"
#include "TH1D.h"
#include "TLatex.h"
#include "TSystem.h"
#include "TTree.h"
#include "TFile.h"
#include "TGraph.h"
#include "TString.h"
#include "TMath.h"
#include <stdio.h>
#include <stdlib.h>
#include <string>
#include <iomanip>
#include <vector>

std::ofstream inFile("yields.txt",std::ios::out);

std::vector<float> sigVector;
std::vector<float> dataVector;
std::vector<float> totMC;

//float iData;
float imonoH;
const int nProcesses = 11;
TString process[nProcesses];
TH1F *gSignificance;

void yields(TString flavourChannel = "em", 
	    TString jetChannel = "0jet"
	    ){
  
  enum{iData, iWW, iWZ, iZZ, iTop, iVg, iWJets, iZJets, iTTV, iHWW, iVVV};
  
  process[iData]  = "01_Data";
  process[iWW]    = "05_WW";
  process[iWZ]    = "02_WZ";
  process[iZZ]    = "03_ZZ";
  process[iTop]   = "04_Top";
  process[iVg]    = "10_Vg";
  process[iWJets] = "07_WJets";
  process[iZJets] = "06_ZJets";
  process[iTTV]   = "08_TTV";
  process[iHWW]   = "09_HWW";
  process[iVVV]   = "11_VVV";
  
  TFile *input[nProcesses];
  TH1D  *histo[nProcesses];

  //  Int_t iSignal = iWW;

  const int nCuts = 10;
  
  //TGraphErrors *gSignificance = new TGraphErrors();
  gSignificance = new TH1F("Significance","Significance", nCuts, 0., nCuts);
  
  //defining cut levels
  TString cutLevel[nCuts];

  cutLevel[0] = "Has2Leptons";
  cutLevel[1] = "Mll > 12GeV";
  cutLevel[2] = "PfMet > 20GeV";
  cutLevel[3] = "ZVeto";
  cutLevel[4] = "MpMet > 20GeV";
  cutLevel[5] = "DPhiVeto";
  cutLevel[6] = "Ptll > 45GeV";
  cutLevel[7] = "BVeto";
  cutLevel[8] = "SoftMu";
  /*
  cutLevel[9] = "Ht < 250GeV";
  cutLevel[10] = "MonoH DRll";
  cutLevel[11] = "MonoH MpMet";
  cutLevel[12] = "MonoH CR";
  */
  /*
  cutLevel[0]   = "Inclusive Jet Bin";
  cutLevel[1]   = "Jet p$_{T}$ < 25GeV";
  cutLevel[2]   = "Jet p$_{T}$ < 26GeV";
  cutLevel[3]   = "Jet p$_{T}$ < 27GeV";
  cutLevel[4]   = "Jet p$_{T}$ < 28GeV";
  cutLevel[5]   = "Jet p$_{T}$ < 29GeV";
  cutLevel[6]   = "Jet p$_{T}$ < 30GeV";
  cutLevel[7]   = "Jet p$_{T}$ < 31GeV";
  cutLevel[8]   = "Jet p$_{T}$ < 32GeV";
  cutLevel[9]   = "Jet p$_{T}$ < 33GeV";
  cutLevel[10]  = "Jet p$_{T}$ < 34GeV";
  cutLevel[11]  = "Jet p$_{T}$ < 35GeV";
  cutLevel[11]  = "Jet p$_{T}$ < 36GeV";
  */
  TString cutHisto[nCuts];

  //  DYem0j/events/histo_VVV , WW, WJets, VV, DY, ttbar, Data, ggH

  cutHisto[0] = "DYem1j/events/histo_DATA";
  cutHisto[1] = "DYem1j/events/histo_WW";
  cutHisto[2] = "DYem1j/events/histo_Wjets";
  cutHisto[3] = "DYem1j/events/histo_VVV";
  cutHisto[4] = "DYem1j/events/histo_ggH";
  cutHisto[5] = "DYem1j/events/histo_ttbar";
  cutHisto[6] = "DYem1j/events/histo_VV";
  cutHisto[7] = "DYem1j/events/histo_DY";
  cutHisto[8] = "DYem1j/events/histo_DY_statUp";
  cutHisto[9] = "DYem1j/events/histo_DY_statDown";

  /*
  cutHisto[9] = "WW/09_Ht/" + jetChannel + "/h_nvtx_" + flavourChannel;
  cutHisto[10] = "WW/101_MonoH_DRll/" + jetChannel + "/h_nvtx_" + flavourChannel;
  cutHisto[11] = "WW/102_MonoH_MpMet/" + jetChannel + "/h_nvtx_" + flavourChannel;
  cutHisto[12] = "WW/103_MonoH_CR/" + jetChannel + "/h_nvtx_" + flavourChannel;
  */
  /*
  cutHisto[13] = "WW/10_DY/" + jetChannel + "/h_nvtx_" + flavourChannel;
  cutHisto[14] = "WW/11_ZWindow/" + jetChannel + "/h_nvtx_" + flavourChannel;
  cutHisto[15] = "WW/12_ZWindowPfMet/" + jetChannel + "/h_nvtx_" + flavourChannel;
  cutHisto[16] = "WW/13_ZWindowMpMet/" + jetChannel + "/h_nvtx_" + flavourChannel;
  cutHisto[17] = "WW/14_ZWindowPtll/" + jetChannel + "/h_nvtx_" + flavourChannel;
  cutHisto[18] = "WW/15_ZWindowDPhiVeto/" + jetChannel + "/h_nvtx_" + flavourChannel;
  cutHisto[19] = "WW/16_ZWindowBVeto/" + jetChannel + "/h_nvtx_" + flavourChannel;
  cutHisto[20] = "WW/17_ZWindowSoftMu/" + jetChannel + "/h_nvtx_" + flavourChannel;
  //cutHisto[20] = "WW/17_ZCR/" + jetChannel + "/h_nvtx_" + flavourChannel;
  cutHisto[21] = "WW/18_ZWindow25/" + jetChannel + "/h_nvtx_" + flavourChannel;
  cutHisto[22] = "WW/19_ZWindow26/" + jetChannel + "/h_nvtx_" + flavourChannel;
  cutHisto[23] = "WW/20_ZWindow27/" + jetChannel + "/h_nvtx_" + flavourChannel;
  cutHisto[24] = "WW/21_ZWindow28/" + jetChannel + "/h_nvtx_" + flavourChannel;
  cutHisto[25] = "WW/22_ZWindow29/" + jetChannel + "/h_nvtx_" + flavourChannel;
  cutHisto[26] = "WW/23_ZWindow30/" + jetChannel + "/h_nvtx_" + flavourChannel;
  cutHisto[27] = "WW/24_ZWindow31/" + jetChannel + "/h_nvtx_" + flavourChannel;
  cutHisto[28] = "WW/25_ZWindow32/" + jetChannel + "/h_nvtx_" + flavourChannel;
  cutHisto[29] = "WW/26_ZWindow33/" + jetChannel + "/h_nvtx_" + flavourChannel;
  cutHisto[30] = "WW/27_ZWindow34/" + jetChannel + "/h_nvtx_" + flavourChannel;
  cutHisto[31] = "WW/28_ZWindow35/" + jetChannel + "/h_nvtx_" + flavourChannel;
  cutHisto[32] = "WW/29_ZWindow36/" + jetChannel + "/h_nvtx_" + flavourChannel;
  //cutHisto[33] = "WW/30_ZWindow37/" + jetChannel + "/h_nvtx_" + flavourChannel;
  */
  
  Float_t yield[nProcesses][nCuts];
  
  TString path = "rootfiles/WW/";
  
  inFile<<"\\begin{tabular}{cSSSSSSSS}"<<endl;
  cout<<"\\begin{tabular}{cSSSSSSSS}"<<endl;
  inFile<<"\\toprule"<<endl;
  cout<<"\\toprule"<<endl;
  inFile<<"Cut Level";
  cout<<"Cut Level";

  for (int q = 0; q < nProcesses; ++q){
    inFile<<" & {"<<process[q]<<"}";
    cout<<" & {"<<process[q]<<"}";
  }			
  inFile<<" \\\\ "<<endl;	
  cout<<" \\\\ "<<endl;
  inFile<<"\\midrule"<<endl;
  cout<<"\\midrule"<<endl;
  
  TFile* f = new TFile("rootFile/plots_DY.root");
  
  float integ[nCuts];
  float err[nCuts];
  for(int i = 0; i < nCuts; ++i){
    histo[i] = (TH1D*) f -> Get(cutHisto[i]);
    if (!histo[i]) {cout<<i<<endl; continue;}//{cout<<"cannot find histo "<<i<<endl; return;}
    integ[i] = histo[i] -> Integral();
    err[i] = sqrt(integ[i]);
  }
  
  cout<<"alfa = ";
  float diff = integ[0] - integ[1] - integ[2] - integ[3] - integ[4] - integ[5] - integ[6];
  float alfa = diff / integ[7];
  cout<<alfa;

  float errDiff = sqrt(integ[0]);// + integ[1] + integ[2] + integ[3] + integ[4] + integ[5] + integ[6]);  
  float errDY = abs(integ[8] - integ[9]);
  cout<<"+-"<<(errDiff/diff + errDY/integ[7]) * alfa<<endl;
}
