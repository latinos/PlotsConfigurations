/// \file
/// \ingroup tutorial_tmva
/// \notebook -nodraw
/// This macro provides a simple example for the training and testing of the TMVA
/// multiclass classification
/// - Project   : TMVA - a Root-integrated toolkit for multivariate data analysis
/// - Package   : TMVA
/// - Root Macro: TMVAMulticlass
///
/// \macro_output
/// \macro_code
/// \author Andreas Hoecker

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

#include "TMVA/Tools.h"
#include "TMVA/Factory.h"
#include "TMVA/DataLoader.h"
#include "TMVA/TMVAMultiClassGui.h"

#include "mlj.C"
//#include "qg_mac.C"

using namespace TMVA;

void TMVAMulticlass( TString myMethodList = "" )
{

   // This loads the library
   TMVA::Tools::Instance();

   // to get access to the GUI and all tmva macros
   //
   //     TString tmva_dir(TString(gRootDir) + "/tmva");
   //     if(gSystem->Getenv("TMVASYS"))
   //        tmva_dir = TString(gSystem->Getenv("TMVASYS"));
   //     gROOT->SetMacroPath(tmva_dir + "/test/:" + gROOT->GetMacroPath() );
   //     gROOT->ProcessLine(".L TMVAMultiClassGui.C");


   //---------------------------------------------------------------
   // Default MVA methods to be trained + tested
   std::map<std::string,int> Use;
   Use["MLP"]             = 1;
   Use["BDTG"]            = 1;
   Use["DNN_CPU"] 	  = 0;
   Use["FDA_GA"]          = 0;
   Use["PDEFoam"]         = 0;
   //---------------------------------------------------------------

   std::cout << std::endl;
   std::cout << "==> Start TMVAMulticlass" << std::endl;

   if (myMethodList != "") {
      for (std::map<std::string,int>::iterator it = Use.begin(); it != Use.end(); it++) it->second = 0;

      std::vector<TString> mlist = TMVA::gTools().SplitString( myMethodList, ',' );
      for (UInt_t i=0; i<mlist.size(); i++) {
         std::string regMethod(mlist[i]);

         if (Use.find(regMethod) == Use.end()) {
            std::cout << "Method \"" << regMethod << "\" not known in TMVA under this name. Choose among the following:" << std::endl;
            for (std::map<std::string,int>::iterator it = Use.begin(); it != Use.end(); it++) std::cout << it->first << " ";
            std::cout << std::endl;
            return;
         }
         Use[regMethod] = 1;
      }
   }

   // Create a new root output file.
   TString outfileName = "TMVAMulticlass.root";
   TString condizione0 = "(Alt$(Jet_qgl[0],-1)*(CleanJet_jetIdx[0]==0) + Alt$(Jet_qgl[1],-1)*(CleanJet_jetIdx[0]==1) + Alt$(Jet_qgl[2],-1)*(CleanJet_jetIdx[0]==2) + Alt$(Jet_qgl[3],-1)*(CleanJet_jetIdx[0]==3) + Alt$(Jet_qgl[4],-1)*(CleanJet_jetIdx[0]==4) + Alt$(Jet_qgl[5],-1)*(CleanJet_jetIdx[0]==5) + Alt$(Jet_qgl[6],-1)*(CleanJet_jetIdx[0]==6) + Alt$(Jet_qgl[7],-1)*(CleanJet_jetIdx[0]==7) + Alt$(Jet_qgl[8],-1)*(CleanJet_jetIdx[0]==8) + (CleanJet_jetIdx[0]>8)*(-1))";
   TString condizione1 = "(Alt$(Jet_qgl[0],-1)*(CleanJet_jetIdx[1]==0) + Alt$(Jet_qgl[1],-1)*(CleanJet_jetIdx[1]==1) + Alt$(Jet_qgl[2],-1)*(CleanJet_jetIdx[1]==2) + Alt$(Jet_qgl[3],-1)*(CleanJet_jetIdx[1]==3) + Alt$(Jet_qgl[4],-1)*(CleanJet_jetIdx[1]==4) + Alt$(Jet_qgl[5],-1)*(CleanJet_jetIdx[1]==5) + Alt$(Jet_qgl[6],-1)*(CleanJet_jetIdx[1]==6) + Alt$(Jet_qgl[7],-1)*(CleanJet_jetIdx[1]==7) + Alt$(Jet_qgl[8],-1)*(CleanJet_jetIdx[1]==8) + (CleanJet_jetIdx[1]>8)*(-1))";

   TFile* outputFile = TFile::Open( outfileName, "RECREATE" );

   TMVA::Factory *factory = new TMVA::Factory( "TMVAMulticlass", outputFile,
                                               "!V:!Silent:Color:DrawProgressBar:Transformations=I;D;P;G,D:AnalysisType=multiclass" );
   TMVA::DataLoader *dataloader=new TMVA::DataLoader("dataset");

   dataloader->AddVariable( "mjj", 'F' );
   dataloader->AddVariable( "mll", 'F' );
   dataloader->AddVariable( "ptll", 'F' );
   dataloader->AddVariable( "detajj", 'F' );
   dataloader->AddVariable( "dphill", 'F' );   
   dataloader->AddVariable( "jet1_pt:=CleanJet_pt[0]", 'F' );
   dataloader->AddVariable( "jet2_pt:=CleanJet_pt[1]", 'F' );
   dataloader->AddVariable( "jet1_eta:=CleanJet_eta[0]", 'F' );
   dataloader->AddVariable( "jet2_eta:=CleanJet_eta[1]", 'F' );
   dataloader->AddVariable("Ctot:=log((abs(2*Lepton_eta[0]-CleanJet_eta[0]-CleanJet_eta[1])+abs(2*Lepton_eta[1]-CleanJet_eta[0]-CleanJet_eta[1]))/detajj)",'F');
   dataloader->AddVariable("mlj_11:=mlj(Lepton_pt[0], Lepton_eta[0], Lepton_phi[0], CleanJet_pt[0], CleanJet_eta[0], CleanJet_phi[0])",'F'); 
   dataloader->AddVariable("mlj_12:=mlj(Lepton_pt[0], Lepton_eta[0], Lepton_phi[0], CleanJet_pt[1], CleanJet_eta[1], CleanJet_phi[1])",'F');
   dataloader->AddVariable("mlj_21:=mlj(Lepton_pt[1], Lepton_eta[1], Lepton_phi[1], CleanJet_pt[0], CleanJet_eta[0], CleanJet_phi[0])",'F');
   dataloader->AddVariable("mlj_22:=mlj(Lepton_pt[1], Lepton_eta[1], Lepton_phi[1], CleanJet_pt[1], CleanJet_eta[1], CleanJet_phi[1])",'F');
   //dataloader->AddVariable("qgl1:=Jet_qgl[CleanJet_jetIdx[0]]", 'F');
   //dataloader->AddVariable("qgl2:=Jet_qgl[CleanJet_jetIdx[1]]", 'F');
   //dataloader->AddVariable("qgl1:=qg_mac(Jet_qgl, CleanJet_jetIdx[0])", 'F'); 
   //dataloader->AddVariable("qgl2:=qg_mac(Jet_qgl, CleanJet_jetIdx[1])", 'F'); 
   dataloader->AddVariable("qgl1:=("+condizione0+">=0)*("+condizione0+"+1)-1", 'F'); 
   dataloader->AddVariable("qgl2:=("+condizione1+">=0)*("+condizione1+"+1)-1", 'F'); 


   TChain *VBF = new TChain("Events");
   VBF->Add("/eos/cms/store/group/phys_higgs/cmshww/amassiro/HWWNano/Fall2017_nAOD_v1_Full2017v2/MCl1loose2017v2__MCCorr2017__btagPerEvent__l2loose__l2tightOR2017/nanoLatino_VBFHToWWTo2L2NuPowheg_M125_CP5Up__part0.root");
   VBF->Add("/eos/cms/store/group/phys_higgs/cmshww/amassiro/HWWNano/Fall2017_nAOD_v1_Full2017v2/MCl1loose2017v2__MCCorr2017__btagPerEvent__l2loose__l2tightOR2017/nanoLatino_VBFHToWWTo2L2NuPowheg_M125_CP5Up__part1.root");
   VBF->Add("/eos/cms/store/group/phys_higgs/cmshww/amassiro/HWWNano/Fall2017_nAOD_v1_Full2017v2/MCl1loose2017v2__MCCorr2017__btagPerEvent__l2loose__l2tightOR2017/nanoLatino_VBFHToWWTo2L2NuPowheg_M125_CP5Up__part2.root");
   VBF->Add("/eos/cms/store/group/phys_higgs/cmshww/amassiro/HWWNano/Fall2017_nAOD_v1_Full2017v2/MCl1loose2017v2__MCCorr2017__btagPerEvent__l2loose__l2tightOR2017/nanoLatino_VBFHToWWTo2L2NuPowheg_M125_CP5Up__part3.root");
   VBF->Add("/eos/cms/store/group/phys_higgs/cmshww/amassiro/HWWNano/Fall2017_nAOD_v1_Full2017v2/MCl1loose2017v2__MCCorr2017__btagPerEvent__l2loose__l2tightOR2017/nanoLatino_VBFHToWWTo2L2NuPowheg_M125_CP5Up__part4.root");
   VBF->Add("/eos/cms/store/group/phys_higgs/cmshww/amassiro/HWWNano/Fall2017_nAOD_v1_Full2017v2/MCl1loose2017v2__MCCorr2017__btagPerEvent__l2loose__l2tightOR2017/nanoLatino_VBFHToWWTo2L2NuPowheg_M125_CP5Up__part5.root");
   VBF->Add("/eos/cms/store/group/phys_higgs/cmshww/amassiro/HWWNano/Fall2017_nAOD_v1_Full2017v2/MCl1loose2017v2__MCCorr2017__btagPerEvent__l2loose__l2tightOR2017/nanoLatino_VBFHToWWTo2L2NuPowheg_M125_CP5Down__part0.root");
   VBF->Add("/eos/cms/store/group/phys_higgs/cmshww/amassiro/HWWNano/Fall2017_nAOD_v1_Full2017v2/MCl1loose2017v2__MCCorr2017__btagPerEvent__l2loose__l2tightOR2017/nanoLatino_VBFHToWWTo2L2NuPowheg_M125_CP5Down__part1.root");
   VBF->Add("/eos/cms/store/group/phys_higgs/cmshww/amassiro/HWWNano/Fall2017_nAOD_v1_Full2017v2/MCl1loose2017v2__MCCorr2017__btagPerEvent__l2loose__l2tightOR2017/nanoLatino_VBFHToWWTo2L2NuPowheg_M125_CP5Down__part2.root");
   VBF->Add("/eos/cms/store/group/phys_higgs/cmshww/amassiro/HWWNano/Fall2017_nAOD_v1_Full2017v2/MCl1loose2017v2__MCCorr2017__btagPerEvent__l2loose__l2tightOR2017/nanoLatino_VBFHToWWTo2L2NuPowheg_M125_CP5Down__part3.root");
   VBF->Add("/eos/cms/store/group/phys_higgs/cmshww/amassiro/HWWNano/Fall2017_nAOD_v1_Full2017v2/MCl1loose2017v2__MCCorr2017__btagPerEvent__l2loose__l2tightOR2017/nanoLatino_VBFHToWWTo2L2NuPowheg_M125_CP5Down__part4.root");
   VBF->Add("/eos/cms/store/group/phys_higgs/cmshww/amassiro/HWWNano/Fall2017_nAOD_v1_Full2017v2/MCl1loose2017v2__MCCorr2017__btagPerEvent__l2loose__l2tightOR2017/nanoLatino_VBFHToWWTo2L2NuPowheg_M125_CP5Down__part5.root");
   TChain *Top = new TChain("Events");
   Top->Add("/eos/cms/store/group/phys_higgs/cmshww/amassiro/HWWNano/Fall2017_nAOD_v1_Full2017v2/MCl1loose2017v2__MCCorr2017__btagPerEvent__l2loose__l2tightOR2017/nanoLatino_TTTo2L2Nu_PSWeights__part0.root");
   Top->Add("/eos/cms/store/group/phys_higgs/cmshww/amassiro/HWWNano/Fall2017_nAOD_v1_Full2017v2/MCl1loose2017v2__MCCorr2017__btagPerEvent__l2loose__l2tightOR2017/nanoLatino_TTTo2L2Nu_PSWeights__part1.root");
   Top->Add("/eos/cms/store/group/phys_higgs/cmshww/amassiro/HWWNano/Fall2017_nAOD_v1_Full2017v2/MCl1loose2017v2__MCCorr2017__btagPerEvent__l2loose__l2tightOR2017/nanoLatino_TTTo2L2Nu_PSWeights__part2.root");
   Top->Add("/eos/cms/store/group/phys_higgs/cmshww/amassiro/HWWNano/Fall2017_nAOD_v1_Full2017v2/MCl1loose2017v2__MCCorr2017__btagPerEvent__l2loose__l2tightOR2017/nanoLatino_TTTo2L2Nu_PSWeights__part3.root");
   Top->Add("/eos/cms/store/group/phys_higgs/cmshww/amassiro/HWWNano/Fall2017_nAOD_v1_Full2017v2/MCl1loose2017v2__MCCorr2017__btagPerEvent__l2loose__l2tightOR2017/nanoLatino_TTTo2L2Nu_PSWeights__part4.root");
   Top->Add("/eos/cms/store/group/phys_higgs/cmshww/amassiro/HWWNano/Fall2017_nAOD_v1_Full2017v2/MCl1loose2017v2__MCCorr2017__btagPerEvent__l2loose__l2tightOR2017/nanoLatino_TTTo2L2Nu_PSWeights__part5.root");
   Top->Add("/eos/cms/store/group/phys_higgs/cmshww/amassiro/HWWNano/Fall2017_nAOD_v1_Full2017v2/MCl1loose2017v2__MCCorr2017__btagPerEvent__l2loose__l2tightOR2017/nanoLatino_TTTo2L2Nu_PSWeights__part6.root");
   Top->Add("/eos/cms/store/group/phys_higgs/cmshww/amassiro/HWWNano/Fall2017_nAOD_v1_Full2017v2/MCl1loose2017v2__MCCorr2017__btagPerEvent__l2loose__l2tightOR2017/nanoLatino_TTTo2L2Nu_PSWeights__part7.root");
   Top->Add("/eos/cms/store/group/phys_higgs/cmshww/amassiro/HWWNano/Fall2017_nAOD_v1_Full2017v2/MCl1loose2017v2__MCCorr2017__btagPerEvent__l2loose__l2tightOR2017/nanoLatino_TTTo2L2Nu_PSWeights__part8.root");
   Top->Add("/eos/cms/store/group/phys_higgs/cmshww/amassiro/HWWNano/Fall2017_nAOD_v1_Full2017v2/MCl1loose2017v2__MCCorr2017__btagPerEvent__l2loose__l2tightOR2017/nanoLatino_TTTo2L2Nu_PSWeights__part9.root");
  /* Top->Add("/eos/cms/store/group/phys_higgs/cmshww/amassiro/HWWNano/Fall2017_nAOD_v1_Full2017v2/MCl1loose2017v2__MCCorr2017__btagPerEvent__l2loose__l2tightOR2017/nanoLatino_TTTo2L2Nu_PSWeights__part10.root");
   Top->Add("/eos/cms/store/group/phys_higgs/cmshww/amassiro/HWWNano/Fall2017_nAOD_v1_Full2017v2/MCl1loose2017v2__MCCorr2017__btagPerEvent__l2loose__l2tightOR2017/nanoLatino_TTTo2L2Nu_PSWeights__part11.root");
   Top->Add("/eos/cms/store/group/phys_higgs/cmshww/amassiro/HWWNano/Fall2017_nAOD_v1_Full2017v2/MCl1loose2017v2__MCCorr2017__btagPerEvent__l2loose__l2tightOR2017/nanoLatino_TTTo2L2Nu_PSWeights__part12.root");
   Top->Add("/eos/cms/store/group/phys_higgs/cmshww/amassiro/HWWNano/Fall2017_nAOD_v1_Full2017v2/MCl1loose2017v2__MCCorr2017__btagPerEvent__l2loose__l2tightOR2017/nanoLatino_TTTo2L2Nu_PSWeights__part13.root");
   Top->Add("/eos/cms/store/group/phys_higgs/cmshww/amassiro/HWWNano/Fall2017_nAOD_v1_Full2017v2/MCl1loose2017v2__MCCorr2017__btagPerEvent__l2loose__l2tightOR2017/nanoLatino_TTTo2L2Nu_PSWeights__part14.root");
   Top->Add("/eos/cms/store/group/phys_higgs/cmshww/amassiro/HWWNano/Fall2017_nAOD_v1_Full2017v2/MCl1loose2017v2__MCCorr2017__btagPerEvent__l2loose__l2tightOR2017/nanoLatino_TTTo2L2Nu_PSWeights__part15.root");
   Top->Add("/eos/cms/store/group/phys_higgs/cmshww/amassiro/HWWNano/Fall2017_nAOD_v1_Full2017v2/MCl1loose2017v2__MCCorr2017__btagPerEvent__l2loose__l2tightOR2017/nanoLatino_TTTo2L2Nu_PSWeights__part16.root");
   Top->Add("/eos/cms/store/group/phys_higgs/cmshww/amassiro/HWWNano/Fall2017_nAOD_v1_Full2017v2/MCl1loose2017v2__MCCorr2017__btagPerEvent__l2loose__l2tightOR2017/nanoLatino_TTTo2L2Nu_PSWeights__part17.root");
   Top->Add("/eos/cms/store/group/phys_higgs/cmshww/amassiro/HWWNano/Fall2017_nAOD_v1_Full2017v2/MCl1loose2017v2__MCCorr2017__btagPerEvent__l2loose__l2tightOR2017/nanoLatino_TTTo2L2Nu_PSWeights__part18.root");
   Top->Add("/eos/cms/store/group/phys_higgs/cmshww/amassiro/HWWNano/Fall2017_nAOD_v1_Full2017v2/MCl1loose2017v2__MCCorr2017__btagPerEvent__l2loose__l2tightOR2017/nanoLatino_TTTo2L2Nu_PSWeights__part19.root");
   Top->Add("/eos/cms/store/group/phys_higgs/cmshww/amassiro/HWWNano/Fall2017_nAOD_v1_Full2017v2/MCl1loose2017v2__MCCorr2017__btagPerEvent__l2loose__l2tightOR2017/nanoLatino_TTTo2L2Nu_PSWeights__part20.root");
   Top->Add("/eos/cms/store/group/phys_higgs/cmshww/amassiro/HWWNano/Fall2017_nAOD_v1_Full2017v2/MCl1loose2017v2__MCCorr2017__btagPerEvent__l2loose__l2tightOR2017/nanoLatino_TTTo2L2Nu_PSWeights__part21.root");
   Top->Add("/eos/cms/store/group/phys_higgs/cmshww/amassiro/HWWNano/Fall2017_nAOD_v1_Full2017v2/MCl1loose2017v2__MCCorr2017__btagPerEvent__l2loose__l2tightOR2017/nanoLatino_TTTo2L2Nu_PSWeights__part22.root");
   Top->Add("/eos/cms/store/group/phys_higgs/cmshww/amassiro/HWWNano/Fall2017_nAOD_v1_Full2017v2/MCl1loose2017v2__MCCorr2017__btagPerEvent__l2loose__l2tightOR2017/nanoLatino_TTTo2L2Nu_PSWeights__part23.root");
   Top->Add("/eos/cms/store/group/phys_higgs/cmshww/amassiro/HWWNano/Fall2017_nAOD_v1_Full2017v2/MCl1loose2017v2__MCCorr2017__btagPerEvent__l2loose__l2tightOR2017/nanoLatino_TTTo2L2Nu_PSWeights__part24.root");
   Top->Add("/eos/cms/store/group/phys_higgs/cmshww/amassiro/HWWNano/Fall2017_nAOD_v1_Full2017v2/MCl1loose2017v2__MCCorr2017__btagPerEvent__l2loose__l2tightOR2017/nanoLatino_TTTo2L2Nu_PSWeights__part25.root");
   Top->Add("/eos/cms/store/group/phys_higgs/cmshww/amassiro/HWWNano/Fall2017_nAOD_v1_Full2017v2/MCl1loose2017v2__MCCorr2017__btagPerEvent__l2loose__l2tightOR2017/nanoLatino_TTTo2L2Nu_PSWeights__part26.root");
   Top->Add("/eos/cms/store/group/phys_higgs/cmshww/amassiro/HWWNano/Fall2017_nAOD_v1_Full2017v2/MCl1loose2017v2__MCCorr2017__btagPerEvent__l2loose__l2tightOR2017/nanoLatino_TTTo2L2Nu_PSWeights__part27.root");
   Top->Add("/eos/cms/store/group/phys_higgs/cmshww/amassiro/HWWNano/Fall2017_nAOD_v1_Full2017v2/MCl1loose2017v2__MCCorr2017__btagPerEvent__l2loose__l2tightOR2017/nanoLatino_TTTo2L2Nu_PSWeights__part28.root");
   Top->Add("/eos/cms/store/group/phys_higgs/cmshww/amassiro/HWWNano/Fall2017_nAOD_v1_Full2017v2/MCl1loose2017v2__MCCorr2017__btagPerEvent__l2loose__l2tightOR2017/nanoLatino_TTTo2L2Nu_PSWeights__part29.root");*/
   TChain *ggH = new TChain("Events");
   ggH->Add("/eos/cms/store/group/phys_higgs/cmshww/amassiro/HWWNano/Fall2017_nAOD_v1_Full2017v2/MCl1loose2017v2__MCCorr2017__btagPerEvent__l2loose__l2tightOR2017/nanoLatino_GluGluHToWWTo2L2NuPowheg_M125_CP5Up__part0.root");
   ggH->Add("/eos/cms/store/group/phys_higgs/cmshww/amassiro/HWWNano/Fall2017_nAOD_v1_Full2017v2/MCl1loose2017v2__MCCorr2017__btagPerEvent__l2loose__l2tightOR2017/nanoLatino_GluGluHToWWTo2L2NuPowheg_M125_CP5Up__part1.root");
   ggH->Add("/eos/cms/store/group/phys_higgs/cmshww/amassiro/HWWNano/Fall2017_nAOD_v1_Full2017v2/MCl1loose2017v2__MCCorr2017__btagPerEvent__l2loose__l2tightOR2017/nanoLatino_GluGluHToWWTo2L2NuPowheg_M125_CP5Up__part2.root");
   ggH->Add("/eos/cms/store/group/phys_higgs/cmshww/amassiro/HWWNano/Fall2017_nAOD_v1_Full2017v2/MCl1loose2017v2__MCCorr2017__btagPerEvent__l2loose__l2tightOR2017/nanoLatino_GluGluHToWWTo2L2NuPowheg_M125_CP5Up__part3.root");
   ggH->Add("/eos/cms/store/group/phys_higgs/cmshww/amassiro/HWWNano/Fall2017_nAOD_v1_Full2017v2/MCl1loose2017v2__MCCorr2017__btagPerEvent__l2loose__l2tightOR2017/nanoLatino_GluGluHToWWTo2L2NuPowheg_M125_CP5Up__part4.root");
   ggH->Add("/eos/cms/store/group/phys_higgs/cmshww/amassiro/HWWNano/Fall2017_nAOD_v1_Full2017v2/MCl1loose2017v2__MCCorr2017__btagPerEvent__l2loose__l2tightOR2017/nanoLatino_GluGluHToWWTo2L2NuPowheg_M125_CP5Up__part5.root");
   ggH->Add("/eos/cms/store/group/phys_higgs/cmshww/amassiro/HWWNano/Fall2017_nAOD_v1_Full2017v2/MCl1loose2017v2__MCCorr2017__btagPerEvent__l2loose__l2tightOR2017/nanoLatino_GluGluHToWWTo2L2NuPowheg_M125_CP5Down__part0.root");
   ggH->Add("/eos/cms/store/group/phys_higgs/cmshww/amassiro/HWWNano/Fall2017_nAOD_v1_Full2017v2/MCl1loose2017v2__MCCorr2017__btagPerEvent__l2loose__l2tightOR2017/nanoLatino_GluGluHToWWTo2L2NuPowheg_M125_CP5Down__part1.root");
   ggH->Add("/eos/cms/store/group/phys_higgs/cmshww/amassiro/HWWNano/Fall2017_nAOD_v1_Full2017v2/MCl1loose2017v2__MCCorr2017__btagPerEvent__l2loose__l2tightOR2017/nanoLatino_GluGluHToWWTo2L2NuPowheg_M125_CP5Down__part2.root");
   ggH->Add("/eos/cms/store/group/phys_higgs/cmshww/amassiro/HWWNano/Fall2017_nAOD_v1_Full2017v2/MCl1loose2017v2__MCCorr2017__btagPerEvent__l2loose__l2tightOR2017/nanoLatino_GluGluHToWWTo2L2NuPowheg_M125_CP5Down__part3.root");
   ggH->Add("/eos/cms/store/group/phys_higgs/cmshww/amassiro/HWWNano/Fall2017_nAOD_v1_Full2017v2/MCl1loose2017v2__MCCorr2017__btagPerEvent__l2loose__l2tightOR2017/nanoLatino_GluGluHToWWTo2L2NuPowheg_M125_CP5Down__part4.root");
   ggH->Add("/eos/cms/store/group/phys_higgs/cmshww/amassiro/HWWNano/Fall2017_nAOD_v1_Full2017v2/MCl1loose2017v2__MCCorr2017__btagPerEvent__l2loose__l2tightOR2017/nanoLatino_GluGluHToWWTo2L2NuPowheg_M125_CP5Down__part5.root");
   TFile *fWW = new TFile("/eos/cms/store/group/phys_higgs/cmshww/amassiro/HWWNano/Fall2017_nAOD_v1_Full2017v2/MCl1loose2017v2__MCCorr2017__btagPerEvent__l2loose__l2tightOR2017/nanoLatino_WWTo2L2Nu__part0.root");
   TTree *WW = (TTree*)fWW->Get("Events");


   gROOT->cd( outfileName+TString(":/") );
   dataloader->AddTree    (VBF,"VBF", 1., "mll>12 && Lepton_pt[0]>25 && Lepton_pt[1]>10 && Alt$(Lepton_pt[2],0)<10 && ptll > 30 && (Lepton_pdgId[0] * Lepton_pdgId[1] == -11*13) && (abs(Lepton_pdgId[1]) == 13 || Lepton_pt[1]>13) && (abs(CleanJet_eta[0])<4.7) && (abs(CleanJet_eta[1])<4.7) && Sum$(CleanJet_pt>30)==2 && mjj>200 && MET_pt > 20 && (Sum$(CleanJet_pt > 20. && abs(CleanJet_eta)<2.5 && Jet_btagDeepB[CleanJet_jetIdx] > 0.1522) == 0)", "Training and Testing");
   dataloader->AddTree    (Top,"Top", 5444./1792, "mll>12 && Lepton_pt[0]>25 && Lepton_pt[1]>10 && Alt$(Lepton_pt[2],0)<10 && ptll > 30 && (Lepton_pdgId[0] * Lepton_pdgId[1] == -11*13) && (abs(Lepton_pdgId[1]) == 13 || Lepton_pt[1]>13) && (abs(CleanJet_eta[0])<4.7) && (abs(CleanJet_eta[1])<4.7) && Sum$(CleanJet_pt>30)==2 && mjj>200 && MET_pt > 20 && (Sum$(CleanJet_pt > 20. && abs(CleanJet_eta)<2.5 && Jet_btagDeepB[CleanJet_jetIdx] > 0.1522) == 0)", "Training and Testing");
   dataloader->AddTree    (ggH,"ggH", 5444./1877, "mll>12 && Lepton_pt[0]>25 && Lepton_pt[1]>10 && Alt$(Lepton_pt[2],0)<10 && ptll > 30 && (Lepton_pdgId[0] * Lepton_pdgId[1] == -11*13) && (abs(Lepton_pdgId[1]) == 13 || Lepton_pt[1]>13) && (abs(CleanJet_eta[0])<4.7) && (abs(CleanJet_eta[1])<4.7) && Sum$(CleanJet_pt>30)==2 && mjj>200 && MET_pt > 20 && (Sum$(CleanJet_pt > 20. && abs(CleanJet_eta)<2.5 && Jet_btagDeepB[CleanJet_jetIdx] > 0.1522) == 0)", "Training and Testing");
   dataloader->AddTree    (WW,"WW", 5444./1276, "mll>12 && Lepton_pt[0]>25 && Lepton_pt[1]>10 && Alt$(Lepton_pt[2],0)<10 && ptll > 30 && (Lepton_pdgId[0] * Lepton_pdgId[1] == -11*13) && (abs(Lepton_pdgId[1]) == 13 || Lepton_pt[1]>13) && (abs(CleanJet_eta[0])<4.7) && (abs(CleanJet_eta[1])<4.7) && Sum$(CleanJet_pt>30)==2 && mjj>200 && MET_pt > 20 && (Sum$(CleanJet_pt > 20. && abs(CleanJet_eta)<2.5 && Jet_btagDeepB[CleanJet_jetIdx] > 0.1522) == 0)", "Training and Testing");

   

   // Apply additional cuts on the signal and background samples (can be different) 

   dataloader->PrepareTrainingAndTestTree( "", "SplitMode=Random:NormMode=None:!V" );

   if (Use["BDTG"]) // gradient boosted decision trees
      factory->BookMethod( dataloader,  TMVA::Types::kBDT, "BDTG", "!H:!V:NTrees=500:BoostType=Grad:Shrinkage=0.10:UseBaggedBoost:BaggedSampleFraction=0.50:nCuts=20:MaxDepth=2:SkipNormalization=1");
   if (Use["MLP"]) // neural network
      factory->BookMethod( dataloader,  TMVA::Types::kMLP, "MLP", "!H:!V:NeuronType=tanh:NCycles=1000:HiddenLayers=N+5,5:TestRate=5:EstimatorType=MSE");
   if (Use["FDA_GA"]) // functional discriminant with GA minimizer
      factory->BookMethod( dataloader,  TMVA::Types::kFDA, "FDA_GA", "H:!V:Formula=(0)+(1)*x0+(2)*x1+(3)*x2+(4)*x3:ParRanges=(-1,1);(-10,10);(-10,10);(-10,10);(-10,10):FitMethod=GA:PopSize=300:Cycles=3:Steps=20:Trim=True:SaveBestGen=1" );
   if (Use["PDEFoam"]) // PDE-Foam approach
      factory->BookMethod( dataloader,  TMVA::Types::kPDEFoam, "PDEFoam", "!H:!V:TailCut=0.001:VolFrac=0.0666:nActiveCells=500:nSampl=2000:nBin=5:Nmin=100:Kernel=None:Compress=T" );

   if (Use["DNN_CPU"]) {
      TString layoutString("Layout=TANH|100,TANH|50,TANH|10,LINEAR");
      TString training0("LearningRate=1e-1, Momentum=0.5, Repetitions=1, ConvergenceSteps=10,"
                        " BatchSize=256, TestRepetitions=10, Multithreading=True");
      TString training1("LearningRate=1e-2, Momentum=0.0, Repetitions=1, ConvergenceSteps=10,"
                        " BatchSize=256, TestRepetitions=7, Multithreading=True");
      TString trainingStrategyString("TrainingStrategy=");
      trainingStrategyString += training0 + "|" + training1;
      TString nnOptions("!H:V:ErrorStrategy=CROSSENTROPY:VarTransform=N:"
                        "WeightInitialization=XAVIERUNIFORM:Architecture=CPU");
      nnOptions.Append(":");
      nnOptions.Append(layoutString);
      nnOptions.Append(":");
      nnOptions.Append(trainingStrategyString);
      factory->BookMethod(dataloader, TMVA::Types::kDNN, "DNN_CPU", nnOptions);
   }

   // Train MVAs using the set of training events
   factory->TrainAllMethods();

   // Evaluate all MVAs using the set of test events
   factory->TestAllMethods();

   // Evaluate and compare performance of all configured MVAs
   factory->EvaluateAllMethods();

   // --------------------------------------------------------------

   // Save the output
   outputFile->Close();

   std::cout << "==> Wrote root file: " << outputFile->GetName() << std::endl;
   std::cout << "==> TMVAMulticlass is done!" << std::endl;

   delete factory;
   delete dataloader;

   // Launch the GUI for the root macros
   if (!gROOT->IsBatch()) TMVAMultiClassGui( outfileName );


}

int main( int argc, char** argv )
{
   // Select methods (don't look at this code - not of interest)
   TString methodList;
   for (int i=1; i<argc; i++) {
      TString regMethod(argv[i]);
      if(regMethod=="-b" || regMethod=="--batch") continue;
      if (!methodList.IsNull()) methodList += TString(",");
      methodList += regMethod;
   }
   TMVAMulticlass(methodList);
   return 0;
}

