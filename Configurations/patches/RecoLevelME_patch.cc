//Computation of Matrix Elements (MEs) at Reconstruction (Reco) 
//using MELA for the AC of the Higgs boson analysis using boosted VH events
//nanoLatino trees nAODv7_2016/2017/2018v7.
//Supervisors: Maria Cepeda, Dermot Moran, Oscar Gonzalez
//Author: Lourdes Urda (lourdes.urda@cern.ch)
//February 2021 (CIEMAT)
//The macro will search for HWW events to 2 leptons + MET.
//The boosted boson W or Z will be recognized as a FAT JET
//The macro is divided in three steps:
//1. Search for two leptons + MET + 1 FAT JET
//2. Configuration of MELA
//3. Calculation of Matrix Elements (MEs) for WH, ZH, and VH corrections

#include "LatinoAnalysis/MultiDraw/interface/TTreeFunction.h"
#include "LatinoAnalysis/MultiDraw/interface/FunctionLibrary.h"
#include "TSystem.h"
#include "iostream"
#include "vector"
#include "TLorentzVector.h"
#include "TMath.h"
#include "ZZMatrixElement/MELA/interface/Mela.h"
#include "TSystem.h"
#include <map>
#include "TString.h"

class RecoLevelME : public multidraw::TTreeFunction {
	public:
		//Class Constructor 
		RecoLevelME(char const* name);
		//Class Destructor 
		~RecoLevelME() {
    		}
		//Functions from Multidraw namespace (TTreeFunction class)
		char const* getName() const override {return "RecoLevelME"; }
		TTreeFunction* clone() const override {return new RecoLevelME(name_.c_str());}
		unsigned getNdata() override {return 1; }
		//This function will return the required value
		double evaluate(unsigned) override;

	protected:
		void bindTree_(multidraw::FunctionLibrary&) override;

		//name of the required ME
		std::string name_;

		//Needed variables to select the events
		UIntValueReader*  nCleanJet{};
		FloatArrayReader* CleanJet_pt{};
		FloatArrayReader* CleanJet_eta{};
		FloatArrayReader* CleanJet_phi{};

		UIntValueReader*  nLepton{};
		FloatArrayReader* Lepton_pt{};
		FloatArrayReader* Lepton_eta{};
		FloatArrayReader* Lepton_phi{};

		FloatValueReader* MET_pt{};
		FloatValueReader* PuppiMET_pt{};
		FloatValueReader* PuppiMET_phi{};

		UIntValueReader*  nCleanFatJet{};
		FloatArrayReader* CleanFatJet_pt{};
		IntArrayReader*   CleanFatJet_jetIdx{};

		UIntValueReader*  nSubJet{};
		FloatArrayReader* SubJet_pt{};
		FloatArrayReader* SubJet_eta{};
		FloatArrayReader* SubJet_mass{};
		FloatArrayReader* SubJet_phi{};

		IntArrayReader*   FatJet_subJetIdx1{};
		IntArrayReader*   FatJet_subJetIdx2{};

	private:

		Double_t LHCsqrts_= 13., mh_= 125.;
		TVar::VerbosityLevel verbosity_ = TVar::SILENT;
		
		static Mela* mela;

};
Mela* RecoLevelME :: mela = 0;

	RecoLevelME::RecoLevelME(char const* name):
		TTreeFunction()
	{
		name_ = name;
		if(mela == 0)
         	mela = new Mela(LHCsqrts_, mh_, verbosity_);
	}

	double
	RecoLevelME::evaluate(unsigned)
	{
		//Map to store the ME
		std::map<TString, float> MatrixElementsMap;

		//Initializing 4-vectors
		TLorentzVector L1(0.,0.,0.,0.);
		TLorentzVector L2(0.,0.,0.,0.);
		TLorentzVector LL(0.,0.,0.,0.);
		TLorentzVector NuNu(0.,0.,0.,0.);
		TLorentzVector Higgs(0.,0.,0.,0.);
		TLorentzVector J1(0.,0.,0.,0.);
		TLorentzVector J2(0.,0.,0.,0.);

		//Getting some values to select the events
		unsigned ncleanfatjet{*nCleanFatJet->Get()};
		unsigned nlep{*nLepton->Get()};
		unsigned nsubjet{*nSubJet->Get()};
		float Pmet_pt{*PuppiMET_pt->Get()};
		float Pmet_phi{*PuppiMET_phi->Get()};

		//Conditions to select the event
		if(ncleanfatjet>0 && nlep>1 && nsubjet>1){
		//STEP-1
		//4-vectors of the leptons
		L1.SetPtEtaPhiM(Lepton_pt->At(0), Lepton_eta->At(0), Lepton_phi->At(0), 0.0);
		L2.SetPtEtaPhiM(Lepton_pt->At(1), Lepton_eta->At(1), Lepton_phi->At(1), 0.0);
		LL = L1 + L2;
		//Reconstructing Higgs 4 vector with MET
		double nunu_px = Pmet_pt*cos(Pmet_phi);
		double nunu_py = Pmet_pt*sin(Pmet_phi);
		double nunu_pz = LL.Pz();
		double nunu_m = 30.0; //Why 30? --> https://indico.cern.ch/event/850505/contributions/3593915/

		double nunu_e = sqrt(nunu_px*nunu_px + nunu_py*nunu_py + nunu_pz*nunu_pz + nunu_m*nunu_m);
		NuNu.SetPxPyPzE(nunu_px, nunu_py, nunu_pz, nunu_e);
		Higgs = LL + NuNu;
		double hm = Higgs.M();

		//FAT JET
		int indexfatjet = CleanFatJet_jetIdx->At(0);
		int indexsubfatjet1 = FatJet_subJetIdx1->At(indexfatjet);
		int indexsubfatjet2 = FatJet_subJetIdx2->At(indexfatjet);

		J1.SetPtEtaPhiM(SubJet_pt->At(indexsubfatjet1), SubJet_eta->At(indexsubfatjet1), SubJet_phi->At(indexsubfatjet1), SubJet_mass->At(indexsubfatjet1));
		J2.SetPtEtaPhiM(SubJet_pt->At(indexsubfatjet2), SubJet_eta->At(indexsubfatjet2), SubJet_phi->At(indexsubfatjet2), SubJet_mass->At(indexsubfatjet2));

		SimpleParticleCollection_t daughter_coll;
		SimpleParticleCollection_t associated_coll;	

		daughter_coll.push_back(SimpleParticle_t(25,Higgs));
		associated_coll.push_back(SimpleParticle_t(0,J1));
		associated_coll.push_back(SimpleParticle_t(0,J2));	

		//MELA MATRIX ELEMENTS CALCULATION (STEP-2)
		mela->setCandidateDecayMode(TVar::CandidateDecay_Stable);
		mela->setInputEvent(&daughter_coll, &associated_coll, 0, 0);
		mela->setCurrentCandidateFromIndex(0);

		//->WH Processes
		float RecoLevel_me_Wh_hsm = 0.;
		float RecoLevel_me_Wh_hm = 0.;
		float RecoLevel_me_Wh_hp = 0.;
		float RecoLevel_me_Wh_hl = 0.;
		float RecoLevel_me_Wh_mixhm = 0.;
		float RecoLevel_me_Wh_mixhp = 0.;
		float RecoLevel_me_Wh_mixhl = 0.;

		//STEP-3
		//SM Higgs
		mela->setProcess(TVar::HSMHiggs, TVar::JHUGen, TVar::Had_WH);
		mela->computeProdP(RecoLevel_me_Wh_hsm, true);
		MatrixElementsMap.insert({"RecoLevel_me_Wh_hsm", RecoLevel_me_Wh_hsm});

 		//Higgs minus
		mela->setProcess(TVar::H0minus, TVar::JHUGen, TVar::Had_WH);
		mela->computeProdP(RecoLevel_me_Wh_hm, true);
		MatrixElementsMap.insert({"RecoLevel_me_Wh_hm", RecoLevel_me_Wh_hm});

		//Higgs plus
		mela->setProcess(TVar::H0hplus, TVar::JHUGen, TVar::Had_WH);
		mela->computeProdP(RecoLevel_me_Wh_hp, true);
		MatrixElementsMap.insert({"RecoLevel_me_Wh_hp", RecoLevel_me_Wh_hp});

		//Higgs lambda
		mela->setProcess(TVar::H0_g1prime2, TVar::JHUGen, TVar::Had_WH);
		mela->computeProdP(RecoLevel_me_Wh_hl, true);
		MatrixElementsMap.insert({"RecoLevel_me_Wh_hl", RecoLevel_me_Wh_hl});

		//Higgs Mix HM
		mela->setProcess(TVar::SelfDefine_spin0, TVar::JHUGen, TVar::Had_WH);
		mela->selfDHzzcoupl[0][gHIGGS_VV_1][0] = 1.;
  		mela->selfDHzzcoupl[0][gHIGGS_VV_4][0] = 1.; 
		mela->computeProdP(RecoLevel_me_Wh_mixhm, true);
		MatrixElementsMap.insert({"RecoLevel_me_Wh_mixhm", RecoLevel_me_Wh_mixhm});

		//Higgs Mix HP
		mela->setProcess(TVar::SelfDefine_spin0, TVar::JHUGen, TVar::Had_WH);
		mela->selfDHzzcoupl[0][gHIGGS_VV_1][0]= 1.;
  		mela->selfDHzzcoupl[0][gHIGGS_VV_2][0]= 1.;
		mela->computeProdP(RecoLevel_me_Wh_mixhp, true);
		MatrixElementsMap.insert({"RecoLevel_me_Wh_mixhp", RecoLevel_me_Wh_mixhp});

		//Higgs Mix HL
		mela->setProcess(TVar::SelfDefine_spin0, TVar::JHUGen, TVar::Had_WH);
		mela->selfDHzzcoupl[0][gHIGGS_VV_1][0]= 1.;
		mela->selfDHzzcoupl[0][gHIGGS_VV_1_PRIME2][0]= 1;
		mela->computeProdP(RecoLevel_me_Wh_mixhl, true);
		MatrixElementsMap.insert({"RecoLevel_me_Wh_mixhl", RecoLevel_me_Wh_mixhl});

		//->ZH Processes
		float RecoLevel_me_Zh_hsm = 0.;
		float RecoLevel_me_Zh_hm = 0.;
		float RecoLevel_me_Zh_hp = 0.;
		float RecoLevel_me_Zh_hl = 0.;
		float RecoLevel_me_Zh_mixhm = 0.;
		float RecoLevel_me_Zh_mixhp = 0.;
		float RecoLevel_me_Zh_mixhl = 0.;

		//SM Higgs
		mela->setProcess(TVar::HSMHiggs, TVar::JHUGen, TVar::Had_ZH);
		mela->computeProdP(RecoLevel_me_Zh_hsm, true);
		MatrixElementsMap.insert({"RecoLevel_me_Zh_hsm", RecoLevel_me_Zh_hsm});

 		//Higgs minus
		mela->setProcess(TVar::H0minus, TVar::JHUGen, TVar::Had_ZH);
		mela->computeProdP(RecoLevel_me_Zh_hm, true);
		MatrixElementsMap.insert({"RecoLevel_me_Zh_hm", RecoLevel_me_Zh_hm});

		//Higgs plus
		mela->setProcess(TVar::H0hplus, TVar::JHUGen, TVar::Had_ZH);
		mela->computeProdP(RecoLevel_me_Zh_hp, true);
		MatrixElementsMap.insert({"RecoLevel_me_Zh_hp", RecoLevel_me_Zh_hp});

		//Higgs lambda
		mela->setProcess(TVar::H0_g1prime2, TVar::JHUGen, TVar::Had_ZH);
		mela->computeProdP(RecoLevel_me_Zh_hl, true);
		MatrixElementsMap.insert({"RecoLevel_me_Zh_hl", RecoLevel_me_Zh_hl});

		//Higgs Mix HM
		mela->setProcess(TVar::SelfDefine_spin0, TVar::JHUGen, TVar::Had_ZH);
		mela->selfDHzzcoupl[0][gHIGGS_VV_1][0] = 1.;
  		mela->selfDHzzcoupl[0][gHIGGS_VV_4][0] = 1.; 
		mela->computeProdP(RecoLevel_me_Zh_mixhm, true);
		MatrixElementsMap.insert({"RecoLevel_me_Zh_mixhm", RecoLevel_me_Zh_mixhm});

		//Higgs Mix HP
		mela->setProcess(TVar::SelfDefine_spin0, TVar::JHUGen, TVar::Had_ZH);
		mela->selfDHzzcoupl[0][gHIGGS_VV_1][0]= 1.;
  		mela->selfDHzzcoupl[0][gHIGGS_VV_2][0]= 1.;
		mela->computeProdP(RecoLevel_me_Zh_mixhp, true);
		MatrixElementsMap.insert({"RecoLevel_me_Zh_mixhp", RecoLevel_me_Zh_mixhp});

		//Higgs Mix HL
		mela->setProcess(TVar::SelfDefine_spin0, TVar::JHUGen, TVar::Had_ZH);
		mela->selfDHzzcoupl[0][gHIGGS_VV_1][0]= 1.;
		mela->selfDHzzcoupl[0][gHIGGS_VV_1_PRIME2][0]= 1;
		mela->computeProdP(RecoLevel_me_Zh_mixhl, true);
		MatrixElementsMap.insert({"RecoLevel_me_Zh_mixhl", RecoLevel_me_Zh_mixhl});

		//->VH correction
   		float RecoLevel_pjjSm_Wh = 0.;
   		float RecoLevel_pjjTr_Wh = 0.;
   		float RecoLevel_meAvg_wh = 0.;

   		float RecoLevel_pjjSm_Zh = 0.;
   		float RecoLevel_pjjTr_Zh = 0.;
   		float RecoLevel_meAvg_zh = 0.;

   		mela->setProcess(TVar::HSMHiggs, TVar::JHUGen, TVar::Had_WH);
   		mela->computeDijetConvBW(RecoLevel_pjjSm_Wh, false);
  		mela->computeDijetConvBW(RecoLevel_pjjTr_Wh, true);
   		mela->computeProdP(RecoLevel_meAvg_wh, true); 
   		mela->getConstant(RecoLevel_meAvg_wh); 
		MatrixElementsMap.insert({"RecoLevel_pjjSm_Wh", RecoLevel_pjjSm_Wh});
		MatrixElementsMap.insert({"RecoLevel_pjjTr_Wh", RecoLevel_pjjTr_Wh});
		MatrixElementsMap.insert({"RecoLevel_meAvg_wh", RecoLevel_meAvg_wh});

   		mela->setProcess(TVar::HSMHiggs, TVar::JHUGen, TVar::Had_ZH);
   		mela->computeDijetConvBW(RecoLevel_pjjSm_Zh, false);
  		mela->computeDijetConvBW(RecoLevel_pjjTr_Zh, true);
   		mela->computeProdP(RecoLevel_meAvg_zh, true); 
   		mela->getConstant(RecoLevel_meAvg_zh); 
		MatrixElementsMap.insert({"RecoLevel_pjjSm_Zh", RecoLevel_pjjSm_Zh});
		MatrixElementsMap.insert({"RecoLevel_pjjTr_Zh", RecoLevel_pjjTr_Zh});
		MatrixElementsMap.insert({"RecoLevel_meAvg_zh", RecoLevel_meAvg_zh});

		mela->resetInputEvent(); 
		
		float required_matrixelement = MatrixElementsMap.find(name_)->second;

		return (double)required_matrixelement;
		
		}
		else return -9999;
	}
	void
	RecoLevelME::bindTree_(multidraw::FunctionLibrary& _library)
	{
		//CleanJets
		_library.bindBranch(nCleanJet, 		"nCleanJet");
  		_library.bindBranch(CleanJet_pt, 	"CleanJet_pt");
  		_library.bindBranch(CleanJet_eta, 	"CleanJet_eta");
  		_library.bindBranch(CleanJet_phi, 	"CleanJet_phi");
		//Leptons
  		_library.bindBranch(nLepton, 		"nLepton");
  		_library.bindBranch(Lepton_pt, 		"Lepton_pt");
  		_library.bindBranch(Lepton_eta, 	"Lepton_eta");
  		_library.bindBranch(Lepton_phi, 	"Lepton_phi");
		//MET
  		_library.bindBranch(MET_pt, 		"MET_pt");
		_library.bindBranch(PuppiMET_pt, 	"PuppiMET_pt");
		_library.bindBranch(PuppiMET_phi, 	"PuppiMET_phi");
		//CleanFatJets
		_library.bindBranch(nCleanFatJet, 	"nCleanFatJet");
		_library.bindBranch(nSubJet, 		"nSubJet");
		_library.bindBranch(CleanFatJet_pt, 	"CleanFatJet_pt");
		_library.bindBranch(CleanFatJet_jetIdx, "CleanFatJet_jetIdx");
		//FatJets
		_library.bindBranch(FatJet_subJetIdx1, 	"FatJet_subJetIdx1");
		_library.bindBranch(FatJet_subJetIdx2, 	"FatJet_subJetIdx2");
		//Subjets
		_library.bindBranch(nSubJet, 		"nSubJet");
		_library.bindBranch(SubJet_pt, 		"SubJet_pt");
		_library.bindBranch(SubJet_eta, 	"SubJet_eta");
		_library.bindBranch(SubJet_phi, 	"SubJet_phi");
		_library.bindBranch(SubJet_mass, 	"SubJet_mass");
	}
