//  Temporary on-the-fly wlep1pt var for nanoLatino trees nAODv7_2016/2017/2018v7 or earlier.


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
		//RecoLevelME();
		RecoLevelME(char const* name);
		~RecoLevelME() {
         		//delete mela;
    		}
		char const* getName() const override {return "RecoLevelME"; }
		TTreeFunction* clone() const override {return new RecoLevelME(name_.c_str());}

		unsigned getNdata() override {return 1; }
		double evaluate(unsigned) override;

	protected:
		void bindTree_(multidraw::FunctionLibrary&) override;

		std::string name_;
		//TString name_;
		//char name_;
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

		/*FloatValueReader* me_Wh_hsm;
		FloatValueReader* me_Wh_hm;
		FloatValueReader* me_Wh_hp;
		FloatValueReader* me_Wh_hl;
		FloatValueReader* me_Wh_mixhm;
		FloatValueReader* me_Wh_mixhp;
		FloatValueReader* me_Wh_mixhl;

		FloatValueReader* me_Zh_hsm;
		FloatValueReader* me_Zh_hm;
		FloatValueReader* me_Zh_hp;
		FloatValueReader* me_Zh_hl;
		FloatValueReader* me_Zh_mixhm;
		FloatValueReader* me_Zh_mixhp;
		FloatValueReader* me_Zh_mixhl;

		FloatValueReader* pjjSm_Wh;
		FloatValueReader* pjjTr_Wh;
		FloatValueReader* pjjSm_Zh;
		FloatValueReader* pjjTr_Zh;
		FloatValueReader* meAvg_wh;
		FloatValueReader* meAvg_zh;*/

		std::string SignalType;

	private:
		
		Double_t LHCsqrts_=13., mh_=125.;
		TVar::VerbosityLevel verbosity_ = TVar::SILENT;
		//Mela* mela  = new Mela(LHCsqrts_, mh_, verbosity_);
		static Mela* mela;
		

};
Mela* RecoLevelME :: mela = 0;

	RecoLevelME::RecoLevelME(char const* name):
		TTreeFunction()
		//name_{*name}
		//{
  	      	//	name_ = name;
		//}
	{
		//ERROR
		//std::cout<<"PRUEBA-0 "<<std::endl;
		name_ = name;
		if(mela == 0)
         	mela = new Mela(LHCsqrts_, mh_, verbosity_);
         	//std::cout<<"PRUEBA-1 "<<std::endl;
	}

	double
	RecoLevelME::evaluate(unsigned)
	{
		std::map<TString, float> MatrixElementsMap;

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
		float RecoLevel_me_Wh_hsm = 0.;
		float RecoLevel_me_Wh_hm = 0.;
		float RecoLevel_me_Wh_hp = 0.;
		float RecoLevel_me_Wh_hl = 0.;
		float RecoLevel_me_Wh_mixhm = 0.;
		float RecoLevel_me_Wh_mixhp = 0.;
		float RecoLevel_me_Wh_mixhl = 0.;

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

		//Processes ZH
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

		//Comparison to Dermot's ME
		/*std::cout << "* Matrix Element WH me_hsm * Lourdes: " << me_Wh_hsm_lou << " Dermot: " << *me_Wh_hsm->Get() << std::endl;
		std::cout << "* Matrix Element WH me_hm * Lourdes: " << me_Wh_hm_lou << " Dermot: " << *me_Wh_hm->Get() << std::endl;
		std::cout << "* Matrix Element WH me_hp * Lourdes: " << me_Wh_hp_lou << " Dermot: " << *me_Wh_hp->Get() << std::endl;
		std::cout << "* Matrix Element WH me_hl * Lourdes: " << me_Wh_hl_lou << " Dermot: " << *me_Wh_hl->Get() << std::endl;
		std::cout << "* Matrix Element WH me_mixhm * Lourdes: " << me_Wh_mixhm_lou << " Dermot: " << *me_Wh_mixhm->Get() << std::endl;
		std::cout << "* Matrix Element WH me_mixhp * Lourdes: " << me_Wh_mixhp_lou << " Dermot: " << *me_Wh_mixhp->Get() << std::endl;
		std::cout << "* Matrix Element WH me_mixhl * Lourdes: " << me_Wh_mixhl_lou << " Dermot: " << *me_Wh_mixhl->Get() << std::endl;

		std::cout << "* Matrix Element ZH me_hsm * Lourdes: " << me_Zh_hsm_lou << " Dermot:" << *me_Zh_hsm->Get() << std::endl;
		std::cout << "* Matrix Element ZH me_hm * Lourdes: " << me_Zh_hm_lou << " Dermot: " << *me_Zh_hm->Get() << std::endl;
		std::cout << "* Matrix Element ZH me_hp * Lourdes: " << me_Zh_hp_lou << " Dermot: " << *me_Zh_hp->Get() << std::endl;
		std::cout << "* Matrix Element ZH me_hl * Lourdes: " << me_Zh_hl_lou << " Dermot: " << *me_Zh_hl->Get() << std::endl;
		std::cout << "* Matrix Element ZH me_mixhm * Lourdes: " << me_Zh_mixhm_lou << " Dermot: " << *me_Zh_mixhm->Get() << std::endl;
		std::cout << "* Matrix Element ZH me_mixhp * Lourdes: " << me_Zh_mixhp_lou << " Dermot: " << *me_Zh_mixhp->Get() << std::endl;
		std::cout << "* Matrix Element ZH me_mixhl * Lourdes: " << me_Zh_mixhl_lou << " Dermot: " << *me_Zh_mixhl->Get() << std::endl;*/

		//VH correction
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

   		//Comparison to Dermot's corrections
		/*std::cout << "CORRECTION: * PjjSmeared_WH * Lourdes " << pjjSm_Wh_lou << " Dermot " << *pjjSm_Wh->Get() << std::endl;
		std::cout << "CORRECTION: * PjjTrue_WH * Lourdes " << pjjTr_Wh_lou << " Dermot " <<*pjjTr_Wh->Get() << std::endl;
		std::cout << "CORRECTION: * avgME_WH * Lourdes " << meAvg_wh_lou << " Dermot " << *meAvg_wh->Get() << std::endl;

		std::cout << "CORRECTION: * PjjSmeared_ZH * Lourdes " << pjjSm_Zh_lou << " Dermot " << *pjjSm_Zh->Get()<< std::endl;
		std::cout << "CORRECTION: * PjjTrue_ZH * Lourdes " << pjjTr_Zh_lou << " Dermot " << *pjjTr_Zh->Get()<< std::endl;
		std::cout << "CORRECTION: * avgME_ZH * Lourdes " << meAvg_zh_lou << " Dermot " << *meAvg_zh->Get() << std::endl;*/

		mela->resetInputEvent(); 
		
		float required_matrixelement= MatrixElementsMap.find(name_)->second;

		return (double)required_matrixelement;
		//return 0;
		
		}
		else return -9999;
	}


	/*std::map<TString,float>
	RecoLevelME::MatrixElementsMap(std::vector<float> mes)
	{
		std::map<TString, float> ME_map;

		ME_map.insert({"me_WH_hsm", me_Wh_hsm});
		ME_map.insert({"me_WH_hm",  me_Wh_hm});
		ME_map.insert({"me_WH_hp",  me_Wh_hp});
		ME_map.insert({"me_WH_hl",  me_Wh_hl});
		ME_map.insert({"me_WH_mixhm", me_Wh_mixhm});
		ME_map.insert({"me_WH_mixhp", me_Wh_mixhp});
		ME_map.insert({"me_WH_mixhl", me_Wh_mixhl});

		ME_map.insert({"me_ZH_hsm", me_Zh_hsm});
		ME_map.insert({"me_ZH_hm",  me_Zh_hm});
		ME_map.insert({"me_ZH_hp",  me_Zh_hp});
		ME_map.insert({"me_ZH_hl",  me_Zh_hl});
		ME_map.insert({"me_ZH_mixhm", me_Zh_mixhm});
		ME_map.insert({"me_ZH_mixhp", me_Zh_mixhp});
		ME_map.insert({"me_ZH_mixhl", me_Zh_mixhl});	

		ME_map.insert({"PjjSmeared_WH", PjjSmeared_Wh});
		ME_map.insert({"PjjTrue_WH", PjjTrue_WH});
		ME_map.insert({"avgME_WH", avgME_WH});
		
		ME_map.insert({"PjjSmeared_ZH", PjjSmeared_ZH});
		ME_map.insert({"PjjTrue_ZH", PjjTrue_ZH});
		ME_map.insert({"avgME_ZH", avgME_ZH});

	}*/




	void
	RecoLevelME::bindTree_(multidraw::FunctionLibrary& _library)
	{
		std::cout << "*LOADING RECO LEVEL Matrix Elements (MEs)*" << std::endl;

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
		//ME WH
		/*_library.bindBranch(me_Wh_hsm,   	"me_Wh_hsm");
		_library.bindBranch(me_Wh_hm,   	"me_Wh_hm");
		_library.bindBranch(me_Wh_hp,   	"me_Wh_hp");
		_library.bindBranch(me_Wh_hl,   	"me_Wh_hl");
		_library.bindBranch(me_Wh_mixhm, 	"me_Wh_mixhm");
		_library.bindBranch(me_Wh_mixhp, 	"me_Wh_mixhp");
		_library.bindBranch(me_Wh_mixhl, 	"me_Wh_mixhl");
		//ME ZH
		_library.bindBranch(me_Zh_hsm,   	"me_Zh_hsm");
		_library.bindBranch(me_Zh_hm,   	"me_Zh_hm");
		_library.bindBranch(me_Zh_hp,   	"me_Zh_hp");
		_library.bindBranch(me_Zh_hl,   	"me_Zh_hl");
		_library.bindBranch(me_Zh_mixhm, 	"me_Zh_mixhm");
		_library.bindBranch(me_Zh_mixhp, 	"me_Zh_mixhp");
		_library.bindBranch(me_Zh_mixhl, 	"me_Zh_mixhl");

		//VH Corrections
		_library.bindBranch(pjjSm_Wh, 		"pjjSm_Wh");
		_library.bindBranch(pjjTr_Wh, 		"pjjTr_Wh");
		_library.bindBranch(pjjSm_Zh, 		"pjjSm_Zh");
		_library.bindBranch(pjjTr_Zh, 		"pjjTr_Zh");
		_library.bindBranch(meAvg_wh, 		"meAvg_wh");
		_library.bindBranch(meAvg_zh, 		"meAvg_zh");*/


	}
























