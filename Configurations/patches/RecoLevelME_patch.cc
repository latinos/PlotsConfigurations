
//  Temporary on-the-fly wlep1pt var for nanoLatino trees nAODv7_2016/2017/2018v7 or earlier.


#include "LatinoAnalysis/MultiDraw/interface/TTreeFunction.h"
#include "LatinoAnalysis/MultiDraw/interface/FunctionLibrary.h"
#include "TSystem.h"
#include "iostream"
#include "vector"
#include "TLorentzVector.h"
#include "TMath.h"
#include "ZZMatrixElement/MELA/interface/Mela.h"


//class RecoLevelME : public multidraw::TTreeFunction, public Mela {
class RecoLevelME : public multidraw::TTreeFunction {
	public:
		RecoLevelME();
		char const* getName() const override {return "RecoLevelME"; }
		TTreeFunction* clone() const override {return new RecoLevelME();}
		unsigned getNdata() override {return 1; }
		double evaluate(unsigned) override;

	protected:
		void bindTree_(multidraw::FunctionLibrary&) override;

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
		IntArrayReader*  CleanFatJet_jetIdx{};

		UIntValueReader*  nSubJet{};
		FloatArrayReader* SubJet_pt{};
		FloatArrayReader* SubJet_eta{};
		FloatArrayReader* SubJet_mass{};
		FloatArrayReader* SubJet_phi{};

		IntArrayReader* FatJet_subJetIdx1{};
		IntArrayReader* FatJet_subJetIdx2{};

		FloatValueReader* me_Wh_hsm;
		FloatValueReader* me_Wh_hm;
		FloatValueReader* me_Wh_hp;
		FloatValueReader* me_Wh_hl;

		FloatValueReader* me_Zh_hsm;
		FloatValueReader* me_Zh_hm;
		FloatValueReader* me_Zh_hp;
		FloatValueReader* me_Zh_hl;

	private:
		Double_t LHCsqrts_=13., mh_=125.;
		TVar::VerbosityLevel verbosity_=TVar::ERROR;
		Mela* mela  = new Mela(LHCsqrts_, mh_, verbosity_);
		

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
		TLorentzVector J1(0.,0.,0.,0.);
		TLorentzVector J2(0.,0.,0.,0.);

		unsigned ncleanfatjet{*nCleanFatJet->Get()};
		unsigned nlep{*nLepton->Get()};
		unsigned nsubjet{*nSubJet->Get()};
		float Pmet_pt{*PuppiMET_pt->Get()};
		float Pmet_phi{*PuppiMET_phi->Get()};
		
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

		//MELA MATRIX ELEMENTS CALCULATION
		mela->setCandidateDecayMode(TVar::CandidateDecay_Stable);
		mela->setInputEvent(&daughter_coll, &associated_coll, 0, 0);
		mela->setCurrentCandidateFromIndex(0);
		
		//Processes WH
		float me_WH_hsm = 0.;
		float me_WH_hm = 0.;
		float me_WH_hp = 0.;
		float me_WH_hl = 0.;

		//SM Higgs
		mela->setProcess(TVar::HSMHiggs, TVar::JHUGen, TVar::Had_WH);
		mela->computeProdP(me_WH_hsm, true);

 		//Higgs minus
		mela->setProcess(TVar::H0minus, TVar::JHUGen, TVar::Had_WH);
		mela->computeProdP(me_WH_hm, true);
		
		//Higgs plus
		mela->setProcess(TVar::H0hplus, TVar::JHUGen, TVar::Had_WH);
		mela->computeProdP(me_WH_hp, true);

		//Higgs lambda
		mela->setProcess(TVar::H0_g1prime2, TVar::JHUGen, TVar::Had_WH);
		mela->computeProdP(me_WH_hl, true);

		//Processes ZH
		float me_ZH_hsm = 0.;
		float me_ZH_hm = 0.;
		float me_ZH_hp = 0.;
		float me_ZH_hl = 0.;

		//SM Higgs
		mela->setProcess(TVar::HSMHiggs, TVar::JHUGen, TVar::Had_ZH);
		mela->computeProdP(me_ZH_hsm, true);

 		//Higgs minus
		mela->setProcess(TVar::H0minus, TVar::JHUGen, TVar::Had_ZH);
		mela->computeProdP(me_ZH_hm, true);
		
		//Higgs plus
		mela->setProcess(TVar::H0hplus, TVar::JHUGen, TVar::Had_ZH);
		mela->computeProdP(me_ZH_hp, true);

		//Higgs lambda
		mela->setProcess(TVar::H0_g1prime2, TVar::JHUGen, TVar::Had_ZH);
		mela->computeProdP(me_ZH_hl, true);

		mela->resetInputEvent();

		//Comparison to Dermot's ME
		std::cout << "* Matrix Element WH me_hsm * Lourdes: " << me_WH_hsm << " Dermot: " << *me_Wh_hsm->Get() << std::endl;
		std::cout << "* Matrix Element WH me_hm * Lourdes: " << me_WH_hm << " Dermot: " << *me_Wh_hm->Get() << std::endl;
		std::cout << "* Matrix Element WH me_hp * Lourdes: " << me_WH_hp << " Dermot: " << *me_Wh_hp->Get() << std::endl;
		std::cout << "* Matrix Element WH me_hl * Lourdes: " << me_WH_hl << " Dermot: " << *me_Wh_hl->Get() << std::endl;

		std::cout << "* Matrix Element ZH me_hsm * Lourdes: " << me_ZH_hsm << " Dermot:" << *me_Zh_hsm->Get() << std::endl;
		std::cout << "* Matrix Element ZH me_hm * Lourdes: " << me_ZH_hm << " Dermot: " << *me_Zh_hm->Get() << std::endl;
		std::cout << "* Matrix Element ZH me_hp * Lourdes: " << me_ZH_hp << " Dermot: " << *me_Zh_hp->Get() << std::endl;
		std::cout << "* Matrix Element ZH me_hl * Lourdes: " << me_ZH_hl << " Dermot: " << *me_Zh_hl->Get() << std::endl;

		//VH correction


		return 0;

		}
		else return -9999;
	}

	void
	RecoLevelME::bindTree_(multidraw::FunctionLibrary& _library)
	{
		std::cout << "************LOADING RECO LEVEL Matrix Elements (MEs) ********" << std::endl;
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
		_library.bindBranch(CleanFatJet_pt, "CleanFatJet_pt");
		_library.bindBranch(CleanFatJet_jetIdx, "CleanFatJet_jetIdx");

		_library.bindBranch(FatJet_subJetIdx1, "FatJet_subJetIdx1");
		_library.bindBranch(FatJet_subJetIdx2, "FatJet_subJetIdx2");

		_library.bindBranch(nSubJet, "nSubJet");
		_library.bindBranch(SubJet_pt, "SubJet_pt");
		_library.bindBranch(SubJet_eta, "SubJet_eta");
		_library.bindBranch(SubJet_phi, "SubJet_phi");
		_library.bindBranch(SubJet_mass, "SubJet_mass");

		_library.bindBranch(me_Wh_hsm,   "me_Wh_hsm");
		_library.bindBranch(me_Wh_hm,   "me_Wh_hm");
		_library.bindBranch(me_Wh_hp,   "me_Wh_hp");
		_library.bindBranch(me_Wh_hl,   "me_Wh_hl");

		_library.bindBranch(me_Zh_hsm,   "me_Zh_hsm");
		_library.bindBranch(me_Zh_hm,   "me_Zh_hm");
		_library.bindBranch(me_Zh_hp,   "me_Zh_hp");
		_library.bindBranch(me_Zh_hl,   "me_Zh_hl");


	}
























