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
   TFile* outputFile = TFile::Open( outfileName, "RECREATE" );

   TMVA::Factory *factory = new TMVA::Factory( "TMVAMulticlass", outputFile,
                                               "!V:!Silent:Color:DrawProgressBar:Transformations=I;D;P;G,D:AnalysisType=multiclass" );
   TMVA::DataLoader *dataloader=new TMVA::DataLoader("dataset");

   dataloader->AddVariable( "mjj", 'F' );
   dataloader->AddVariable( "mll", 'F' );
   dataloader->AddVariable( "ptll", 'F' );
   dataloader->AddVariable( "detajj", 'F' );
   dataloader->AddVariable( "dphill", 'F' );   
   dataloader->AddVariable( "jet1_pt:=std_vector_jet_pt[0]", 'F' );
   dataloader->AddVariable( "jet2_pt:=std_vector_jet_pt[1]", 'F' );
   dataloader->AddVariable( "jet1_eta:=std_vector_jet_eta[0]", 'F' );
   dataloader->AddVariable( "jet2_eta:=std_vector_jet_eta[1]", 'F' );
   dataloader->AddVariable("Ctot:=log((abs(2*std_vector_lepton_eta[0]-std_vector_jet_eta[0]-std_vector_jet_eta[1])+abs(2*std_vector_lepton_eta[1]-std_vector_jet_eta[0]-std_vector_jet_eta[1]))/detajj)",'F');
   dataloader->AddVariable("mlj_11:=mlj(std_vector_lepton_pt[0], std_vector_lepton_eta[0], std_vector_lepton_phi[0], std_vector_jet_pt[0], std_vector_jet_eta[0], std_vector_jet_phi[0])",'F'); 
   dataloader->AddVariable("mlj_12:=mlj(std_vector_lepton_pt[0], std_vector_lepton_eta[0], std_vector_lepton_phi[0], std_vector_jet_pt[1], std_vector_jet_eta[1], std_vector_jet_phi[1])",'F');
   dataloader->AddVariable("mlj_21:=mlj(std_vector_lepton_pt[1], std_vector_lepton_eta[1], std_vector_lepton_phi[1], std_vector_jet_pt[0], std_vector_jet_eta[0], std_vector_jet_phi[0])",'F');
   dataloader->AddVariable("mlj_22:=mlj(std_vector_lepton_pt[1], std_vector_lepton_eta[1], std_vector_lepton_phi[1], std_vector_jet_pt[1], std_vector_jet_eta[1], std_vector_jet_phi[1])",'F');
   //dataloader->AddVariable("btag1:=std_vector_jet_cmvav2[0]", 'F');
   //dataloader->AddVariable("btag2:=std_vector_jet_cmvav2[1]", 'F');
   dataloader->AddVariable("qgl1:=std_vector_jet_QGlikelihood[0]", 'F');
   dataloader->AddVariable("qgl2:=std_vector_jet_QGlikelihood[1]", 'F');



   TFile *fVBF = new TFile("/eos/cms/store/group/phys_higgs/cmshww/amassiro/Full2016_Apr17/Apr2017_summer16/lepSel__MCWeights__bSFLpTEffMulti__cleanTauMC__l2loose__hadd__l2tightOR__LepTrgFix__dorochester__formulasMC__wwSel/latino_VBFHToWWTo2L2NuPowheg_M125.root");  
   TFile *fGG = new TFile("/eos/cms/store/group/phys_higgs/cmshww/amassiro/Full2016_Apr17/Apr2017_summer16/lepSel__MCWeights__bSFLpTEffMulti__cleanTauMC__l2loose__hadd__l2tightOR__LepTrgFix__dorochester__formulasMC__wwSel/latino_GluGluHToWWTo2L2NuPowheg_M125.root");
   TFile *fWW = new TFile("/eos/cms/store/group/phys_higgs/cmshww/amassiro/Full2016_Apr17/Apr2017_summer16/lepSel__MCWeights__bSFLpTEffMulti__cleanTauMC__l2loose__hadd__l2tightOR__LepTrgFix__dorochester__formulasMC__wwSel/latino_WWTo2L2Nu.root");

   TFile *dummy = new TFile("dummy.root", "RECREATE");
   TChain *TT=new TChain("latino");

   
   TT->Add("/eos/cms/store/group/phys_higgs/cmshww/amassiro/Full2016_Apr17/Apr2017_summer16/lepSel__MCWeights__bSFLpTEffMulti__cleanTauMC__l2loose__hadd__l2tightOR__LepTrgFix__dorochester__formulasMC__wwSel/latino_TTTo2L2Nu__part0.root");
   TT->Add("/eos/cms/store/group/phys_higgs/cmshww/amassiro/Full2016_Apr17/Apr2017_summer16/lepSel__MCWeights__bSFLpTEffMulti__cleanTauMC__l2loose__hadd__l2tightOR__LepTrgFix__dorochester__formulasMC__wwSel/latino_TTTo2L2Nu__part1.root");

   
   TTree *VBF = (TTree*)fVBF->Get("latino");
   TTree *GG = (TTree*)fGG->Get("latino");
   TTree *WW = (TTree*)fWW->Get("latino");

   float baseW_VBF;
   VBF->SetBranchAddress("baseW",&baseW_VBF);
   VBF->GetEntry(1);
   float baseW_TT;
   TT->SetBranchAddress("baseW",&baseW_TT);
   TT->GetEntry(1);
   float baseW_GG;
   GG->SetBranchAddress("baseW",&baseW_GG);
   GG->GetEntry(1);
   float baseW_WW;
   WW->SetBranchAddress("baseW",&baseW_WW);
   WW->GetEntry(1);


   gROOT->cd( outfileName+TString(":/") );
   dataloader->AddTree    (VBF,"VBF", 1., "mll>12 && std_vector_lepton_pt[0]>25 && std_vector_lepton_pt[1]>10 && std_vector_lepton_pt[2]<10 && ptll > 30 && (std_vector_lepton_flavour[0] * std_vector_lepton_flavour[1] == -11*13) && (abs(std_vector_lepton_flavour[1]) == 13 || std_vector_lepton_pt[1]>13) && (abs(std_vector_jet_eta[0])<4.7) && (abs(std_vector_jet_eta[1])<4.7) && (njet==2) && mjj>200 && metPfType1 > 20 && bveto_CMVAL==1", "Training and Testing");
   dataloader->AddTree    (TT,"TT", 8601./(2298+2326), "mll>12 && std_vector_lepton_pt[0]>25 && std_vector_lepton_pt[1]>10 && std_vector_lepton_pt[2]<10 && ptll > 30 && (std_vector_lepton_flavour[0] * std_vector_lepton_flavour[1] == -11*13) && (abs(std_vector_lepton_flavour[1]) == 13 || std_vector_lepton_pt[1]>13) && (abs(std_vector_jet_eta[0])<4.7) && (abs(std_vector_jet_eta[1])<4.7) && (njet==2) && mjj>200 && metPfType1 > 20 && bveto_CMVAL==1", "Training and Testing");
   dataloader->AddTree    (GG,"GG", 8601./835, "mll>12 && std_vector_lepton_pt[0]>25 && std_vector_lepton_pt[1]>10 && std_vector_lepton_pt[2]<10 && ptll > 30 && (std_vector_lepton_flavour[0] * std_vector_lepton_flavour[1] == -11*13) && (abs(std_vector_lepton_flavour[1]) == 13 || std_vector_lepton_pt[1]>13) && (abs(std_vector_jet_eta[0])<4.7) && (abs(std_vector_jet_eta[1])<4.7) && (njet==2) && mjj>200 && metPfType1 > 20 && bveto_CMVAL==1", "Training and Testing");
   dataloader->AddTree    (WW,"WW", 8601./3536, "mll>12 && std_vector_lepton_pt[0]>25 && std_vector_lepton_pt[1]>10 && std_vector_lepton_pt[2]<10 && ptll > 30 && (std_vector_lepton_flavour[0] * std_vector_lepton_flavour[1] == -11*13) && (abs(std_vector_lepton_flavour[1]) == 13 || std_vector_lepton_pt[1]>13) && (abs(std_vector_jet_eta[0])<4.7) && (abs(std_vector_jet_eta[1])<4.7) && (njet==2) && mjj>200 && metPfType1 > 20 && bveto_CMVAL==1", "Training and Testing");

   

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

