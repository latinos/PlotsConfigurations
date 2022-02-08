//Computation of Matrix Elements (MEs) at Reconstruction (Reco) using MELA for the AC of the Higgs boson analysis using boosted VH events
//Author: Lourdes Urda (lourdes.urda@cern.ch)
//February 2021 (CIEMAT)

//The macro will search for HWW events to 2 leptons + MET.
//The boosted boson W or Z will be recognized as a FAT JET
//The macro is divided in three steps:
//1. Search for two leptons + MET + 1 FAT JET
//2. Configuration of MELA
//3. Calculation of Matrix Elements (MEs)

//The objective is reweighting the Latinos ntuples on the fly with the calculated MEs

//Libraries
#include "TString.h"
#include "TROOT.h"
#include "TSystem.h"
#include "TRint.h"
#include "TStyle.h"
#include "TFile.h"
#include "TCanvas.h"
#include "TH1D.h"
#include "TH2D.h"
#include "THStack.h"
#include "TTree.h"
#include "TLegend.h"
#include "TMath.h"
#include "TRandom2.h"
#include <vector>
#include <TLorentzVector.h>
#include <sys/stat.h>
#include <iostream>
#include <fstream>
#include <sstream>
#include <string>
#include <stdio.h>
#include <TBranch.h>
#include <TGraphErrors.h>
#include <TMultiGraph.h>
#include <TGraph.h>
#include <TList.h>
#include <TAxisEditor.h>
#include <TAxis.h>
#include <TGraphErrors.h>
#include <TClonesArray.h>
#include <TVectorF.h>
#include <TTimeStamp.h>
#include <TH1F.h>
#include <TH2F.h>
#include <new>
#include <map>
#include <TPad.h>
#include <typeinfo>

//It contains the considered samples for the analysis
#include "samples_RecoLevelME.h"
#include "nanovar.h"

using namespace nanovar;

struct FILES
{

	//Function that fills a map with the name of the sample and the number of root files
	std::map<std::string, double> mapsfilling(const TString& name)
        {
		std::map<std::string, double> Samples;
        	std::ifstream txtfile(name);
                std::string input_sample;
                double NumberOfFiles;

                while(true)
                {			
                        txtfile >> input_sample >> NumberOfFiles;
                        if(txtfile.eof()) break;
			std::cout << input_sample << "\t" << NumberOfFiles << std::endl;
                        Samples.insert({input_sample, NumberOfFiles});
                }
                txtfile.close();
		return Samples;
        }

	//Counting lines from a file
	int countlines(const TString& name)
	{
		std::ifstream txtfile(name);
		std::string path;
		int linecounter = 0;
		while(true)
		{
			txtfile >> path;
			if(txtfile.eof()) break;
			//std::cout << path << std::endl;
			linecounter++;
		}
		txtfile.close();
		return linecounter;
	}
};

struct SELECTION
{
	bool selecting2Leptons(UInt_t nelectron, UInt_t nmuon)
	{
		if(nelectron == 0) return false;
		if(nmuon+nelectron<2) 	return false;
		return true;	
	}
	bool selectingMET(Float_t metpt)
	{
		if(metpt<30.) return false;
		return true;
	}
	bool selecting1FatJet(UInt_t fatjets)
	{
		if(fatjets<1) return false;
		return true;
	}
};

void compute_RecoLevelME()
{
	FILES files;

	NANOvariables var;

	//I first count how many Data, signal and background samples we have.
	//This files contain the path to the txt file that contains the samples path in eos.
	int idata = files.countlines("data_RecoLevelME.txt");
	int isignal = files.countlines("signal_RecoLevelME.txt");
	int ibackground = files.countlines("background_RecoLevelME.txt");

	//I print the obtained numbers
	std::cout << " Number of considered Data sets " <<  idata << std::endl;
	std::cout << " Number of considered Signals " << isignal << std::endl;
	std::cout << " Number of considered MC Backgrounds " << ibackground << std::endl;

	//Getting samples from eos
	//std::map<std::string, double> Data;
	//std::map<std::string, double> Signal;
	//std::map<std::string, double> Background;

	//Notice defined variables and paths in "samples_RecoLevelME.h"
	//Data = files.mapsfilling(Data2016B_v1_path);

	//Path to the files
	string Path = "/eos/cms/store/group/phys_higgs/cmshww/amassiro/HWWNano/";

	string Data = Path+"Run2016_102X_nAODv7_Full2016v7/DATAl1loose2016v7__l2loose__l2tightOR2016v7/nanoLatino_MuonEG_Run2016B-02Apr2020_ver2-v1__part0.root";

	string SM_Signal = Path+"Summer16_102X_nAODv7_Full2016v7/MCl1loose2016v7__MCCorr2016v7__l2loose__l2tightOR2016v7/nanoLatino_VBF_H0PM_ToWWTo2L2Nu__part0.root";

	string BSM_Signal = Path+"Summer16_102X_nAODv7_Full2016v7/MCl1loose2016v7__MCCorr2016v7__l2loose__l2tightOR2016v7/nanoLatino_VBF_H0M_ToWWTo2L2Nu__part0.root";

	string Background_DY = Path+"Summer16_102X_nAODv7_Full2016v7/MCl1loose2016v7__MCCorr2016v7__l2loose__l2tightOR2016v7/nanoLatino_DYJetsToLL_M-50-LO_ext1__part0.root";

	string Background_TTbar = Path+"Summer16_102X_nAODv7_Full2016v7/MCl1loose2016v7__MCCorr2016v7__l2loose__l2tightOR2016v7/nanoLatino_TTTo2L2Nu__part0.root";

	string Background_WW = Path+"Summer16_102X_nAODv7_Full2016v7/MCl1loose2016v7__MCCorr2016v7__l2loose__l2tightOR2016v7/nanoLatino_WWTo2L2Nu__part0.root";

	//Define a vector of samples to open the files one by one and make the selection
	std::vector<string> sampleVector;
	sampleVector.push_back(Data);
	sampleVector.push_back(SM_Signal);
	sampleVector.push_back(BSM_Signal);
	sampleVector.push_back(Background_DY);
	sampleVector.push_back(Background_TTbar);
	sampleVector.push_back(Background_WW);

	SELECTION selection;

	for(auto &xsample: sampleVector)
	{
		//Open the file
		std::cout << xsample << std::endl;
		TFile *file = TFile::Open(xsample.c_str());
		file->GetName();
		TTree *tr = (TTree*)file->Get("Events");
		var.SetBranches(tr);
		//Count the events in the file
		long long nevents = tr->GetEntriesFast();
		std::cout << "Number of entries in this root file " << nevents << std::endl;
		//Loop over the events
		int counter = 0;
		for (long long iEvent=0; iEvent<nevents; iEvent++)
		{
			tr->GetEntry(iEvent);
			
			/*if (!selection.selecting2Leptons(var.nElectron, var.nMuon)){std::cout << "No leptons found" << std::endl; continue;}
			if (!selection.selectingMET(var.MET_pt)){std::cout << "No MET criteria matched " << std::endl; continue;}
			if (!selection.selecting1FatJet(var.nFatJet)){std::cout << "No Fat Jet found" << std::endl; continue;}*/

			if (!selection.selecting2Leptons(var.nElectron, var.nMuon)) continue;
			if (!selection.selectingMET(var.MET_pt)) continue;
			if (!selection.selecting1FatJet(var.nFatJet)) continue;

			counter ++;
			//The event at this point contains: 2 leptons, MET>30GeV and 1 fat jet
			TLorentzVector L1, L2, FATJET;
			
			if(var.nMuon>=1) std::cout << "nMuon and muon_pt " << var.nMuon << "\t" << (&var.Muon_pt)->At(0) << std::endl;
			/*if(var.Muon_pt->at(0)>var.Electron_pt->at(0))
			{
				L1.SetPtEtaPhiM(var.Muon_pt->at(0), var.Muon_eta->at(0), var.Muon_phi->at(0), var.Muon_mass->at(0));
				//L2.SetPtEtaPhiM(var.Electron_pt[0], var.Electron_eta[0], var.Electron_phi[0], var.Electron_mass[0]);
			}
			else
			{
				//L1.SetPtEtaPhiM(var.Electron_pt[0], var.Electron_eta[0], var.Electron_phi[0], var.Electron_mass[0]);
				//L2.SetPtEtaPhiM(var.Muon_pt[0], var.Muon_eta[0], var.Muon_phi[0], var.Muon_mass[0]);
			}*/
			//FATJET.SetPtEtaPhiM((double)1.*var.FatJet_pt, var.FatJet_eta, var.FatJet_phi, var.FatJet_mass);
			
		}
		std::cout << "Total number of events matching the criteria " <<counter << std::endl;

		file->Close();
	}

}


































