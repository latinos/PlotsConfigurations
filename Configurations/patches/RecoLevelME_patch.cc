/*
  Temporary on-the-fly wlep1pt var for nanoLatino trees nAODv7_2016/2017/2018v7 or earlier.
*/

#include "LatinoAnalysis/MultiDraw/interface/TTreeFunction.h"
#include "LatinoAnalysis/MultiDraw/interface/FunctionLibrary.h"

#include "TSystem.h"

#include <iostream>
#include <vector>

#include "TLorentzVector.h"
#include "TMath.h"

class RecoLevelME : public multidraw::TTreeFunction {
	
	public:
		RecoLevelME();
		char const* getName() const override {return "RecoLevelME"; }
		TTreeFunction* clone() const override {return new RecoLevelME();}

		unsigned getNdata() override {return 1; }
		double evaluate(unsigned) override;

	protected:
		void bindTree_(multidraw::FunctionLibrary&) override;

		UIntValueReader*  nCleanJet;
		FloatArrayReader* CleanJet_pt;
		FloatArrayReader* CleanJet_eta;
		FloatArrayReader* CleanJet_phi;

		UIntValueReader*  nLepton;
		FloatArrayReader* Lepton_pt;
		FloatArrayReader* Lepton_eta;
		FloatArrayReader* Lepton_phi;

		FloatValueReader* MET_pt;
		FloatValueReader* PuppiMET_pt;
		FloatValueReader* PuppiMET_phi;

		UIntValueReader*  nCleanFatJet;
		FloatValueReader* CleanFatJet_pt;
		IntValueReader*   CleanFatJet_jetIdx;

		UIntValueReader*  nSubJet;
		FloatValueReader* SubJet_pt;
		FloatValueReader* SubJet_eta;
		FloatValueReader* SubJet_mass;
		FloatValueReader* SubJet_phi;

		UIntValueReader* FatJet_subJetIdx1;
		UIntValueReader* FatJet_subJetIdx2;
};

	RecoLevelME::RecoLevelME():
		TTreeFunction()
	{}

	double 
	RecoLevelME::evaluate(unsigned)
	{
		TLorentzVector L1(0.,0.,0.,0.);
		TLorentzVector L2(0.,0.,0.,0.);
		TLorentzVector LL(0.,0.,0.,0.);
		TLorentzVector NuNu(0.,0.,0.,0.);
		TLorentzVector Higgs(0.,0.,0.,0.);
		TLorentzVector LSub1(0.,0.,0.,0.);
		TLorentzVector LSub2(0.,0.,0.,0.);

		unsigned ncleanfatjet{*nCleanFatJet->Get()};
		unsigned nlep{*nLepton->Get()};
		unsigned nsubjet{*nSubJet->Get()};
		float Pmet_pt{*PuppiMET_pt->Get()};
		float Pmet_phi{*PuppiMET_phi->Get()};
		
		//if( ncleanfatjet == 0 || nlep < 1 || nsubjet < 1 ) continue; //Boosted//

		if(ncleanfatjet>0 && nlep>1 && nsubjet>1){

		//4-vectors of the leptons
		L1.SetPtEtaPhiM(Lepton_pt->At(0), Lepton_eta->At(0), Lepton_phi->At(0), 0.0);
		L2.SetPtEtaPhiM(Lepton_pt->At(1), Lepton_eta->At(1), Lepton_phi->At(1), 0.0);
		LL = L1 + L2;

		//Reconstructing Higgs 4 vector with MET
		double nunu_px = Pmet_pt*cos(Pmet_phi);
		double nunu_py = Pmet_pt*sin(Pmet_phi);
		double nunu_pz = LL.Pz();
		double nunu_m = 30.0;//https://indico.cern.ch/event/850505/contributions/3593915/

		double nunu_e = sqrt(nunu_px*nunu_px + nunu_py*nunu_py + nunu_pz*nunu_pz + nunu_m*nunu_m);
		NuNu.SetPxPyPzE(nunu_px, nunu_py, nunu_pz, nunu_e);
		Higgs = LL + NuNu;
		double hm = Higgs.M();
		std::cout << "**********ncleanfatjet*******" << ncleanfatjet << std::endl;
		//4-vector of the 2 subjets associated to the fat jet
		//int indexfatjet = CleanFatJet_pt->At(0);
		 
		/*int indexsubfatjet1 = FatJet_subJetIdx1->At(indexfatjet);
		int indexsubfatjet2 = FatJet_subJetIdx2->At(indexfatjet);

		LSub1.SetPtEtaPhiM(SubJet_pt->At(indexsubfatjet1), SubJet_eta->At(indexsubfatjet1), SubJet_phi->At(indexsubfatjet1), SubJet_mass->At(indexsubfatjet1));
		LSub2.SetPtEtaPhiM(SubJet_pt->At(indexsubfatjet2), SubJet_eta->At(indexsubfatjet2), SubJet_phi->At(indexsubfatjet2), SubJet_mass->At(indexsubfatjet2));*/
		}
		else return -9999;
	}

	void
	RecoLevelME::bindTree_(multidraw::FunctionLibrary& _library)
	{
		std::cout << "************LOADING RECOLEVELME ********" << std::endl;
		_library.bindBranch(nCleanJet, "nCleanJet");
  		_library.bindBranch(CleanJet_pt, "CleanJet_pt");
  		_library.bindBranch(CleanJet_eta, "CleanJet_eta");
  		_library.bindBranch(CleanJet_phi, "CleanJet_phi");

  		_library.bindBranch(nLepton, "nLepton");
  		_library.bindBranch(Lepton_pt, "Lepton_pt");
  		_library.bindBranch(Lepton_eta, "Lepton_eta");
  		_library.bindBranch(Lepton_phi, "Lepton_phi");

  		_library.bindBranch(MET_pt, "MET_pt");
		_library.bindBranch(PuppiMET_pt, "PuppiMET_pt");
		_library.bindBranch(PuppiMET_phi, "PuppiMET_phi");

		_library.bindBranch(nCleanFatJet, "nCleanFatJet");
		_library.bindBranch(nSubJet, "nSubJet");
		//_library.bindBranch(CleanFatJet_pt, "CleanFatJet_pt");
		/*_library.bindBranch(CleanFatJet_jetIdx, "CleanFatJet_jetIdx");

		_library.bindBranch(FatJet_subJetIdx1, "FatJet_subJetIdx1");
		_library.bindBranch(FatJet_subJetIdx2, "FatJet_subJetIdx2");

		_library.bindBranch(nSubJet, "nSubJet");
		_library.bindBranch(SubJet_pt, "SubJet_pt");
		_library.bindBranch(SubJet_eta, "SubJet_eta");
		_library.bindBranch(SubJet_phi, "SubJet_phi");
		_library.bindBranch(SubJet_mass, "SubJet_mass");*/

	}
























