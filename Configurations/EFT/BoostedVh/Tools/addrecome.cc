
#include "LatinoAnalysis/MultiDraw/interface/TTreeFunction.h"
#include "LatinoAnalysis/MultiDraw/interface/FunctionLibrary.h"
#include "TSystem.h"
#include "iostream"
#include "vector"
#include "TLorentzVector.h"
#include "TMath.h"
#include "JHUGenMELA/MELA/interface/Mela.h"
#include "TSystem.h"
#include <map>
#include "TString.h"

class AddRecoME : public multidraw::TTreeFunction {
	public:
		//Class Constructor 
		AddRecoME(char const* name);
		//Class Destructor 
		~AddRecoME() {
    		}
		//Functions from Multidraw namespace (TTreeFunction class)
		char const* getName() const override {return "AddRecoME"; }
		TTreeFunction* clone() const override {return new AddRecoME(name_.c_str());}
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
                IntArrayReader*   CleanJet_jetIdx{};

                FloatArrayReader* Jet_mass{};

		UIntValueReader*  nLepton{};
		FloatArrayReader* Lepton_pt{};
		FloatArrayReader* Lepton_eta{};
		FloatArrayReader* Lepton_phi{};

		FloatValueReader* MET_pt{};
		FloatValueReader* PuppiMET_pt{};
		FloatValueReader* PuppiMET_phi{};

	private:

		Double_t LHCsqrts_= 13., mh_= 125.;
		TVar::VerbosityLevel verbosity_ = TVar::SILENT;
		static Mela* mela;

};
Mela* AddRecoME :: mela = 0;

	AddRecoME::AddRecoME(char const* name):
		TTreeFunction()
	{
		name_ = name;
		if(mela == 0)
         	mela = new Mela(LHCsqrts_, mh_, verbosity_);
	}

	double
	AddRecoME::evaluate(unsigned)
	{
		std::map<TString, float> MatrixElementsMap;

		TLorentzVector L1(0.,0.,0.,0.);
		TLorentzVector L2(0.,0.,0.,0.);
		TLorentzVector LL(0.,0.,0.,0.);
		TLorentzVector NuNu(0.,0.,0.,0.);
		TLorentzVector Higgs(0.,0.,0.,0.);
		TLorentzVector J1(0.,0.,0.,0.);
		TLorentzVector J2(0.,0.,0.,0.);

		unsigned ncleanjet{*nCleanJet->Get()};
		unsigned nlep{*nLepton->Get()};
		float Pmet_pt{*PuppiMET_pt->Get()};
		float Pmet_phi{*PuppiMET_phi->Get()};

		if(ncleanjet>1 && nlep>1){
		
		L1.SetPtEtaPhiM(Lepton_pt->At(0), Lepton_eta->At(0), Lepton_phi->At(0), 0.0);
		L2.SetPtEtaPhiM(Lepton_pt->At(1), Lepton_eta->At(1), Lepton_phi->At(1), 0.0);
		LL = L1 + L2;
		double nunu_px = Pmet_pt*cos(Pmet_phi);
		double nunu_py = Pmet_pt*sin(Pmet_phi);
		double nunu_pz = LL.Pz();
		double nunu_m = 30.0; 

		double nunu_e = sqrt(nunu_px*nunu_px + nunu_py*nunu_py + nunu_pz*nunu_pz + nunu_m*nunu_m);
		NuNu.SetPxPyPzE(nunu_px, nunu_py, nunu_pz, nunu_e);
		Higgs = LL + NuNu;
		double hm = Higgs.M();

                int indx_oj1 = CleanJet_jetIdx->At(0);
	        int indx_oj2 = CleanJet_jetIdx->At(1);
                J1.SetPtEtaPhiM(CleanJet_pt->At(0), CleanJet_eta->At(0), CleanJet_phi->At(0), Jet_mass->At(indx_oj1));
		J2.SetPtEtaPhiM(CleanJet_pt->At(1), CleanJet_eta->At(1), CleanJet_phi->At(1), Jet_mass->At(indx_oj2));

		SimpleParticleCollection_t daughter_coll;
		SimpleParticleCollection_t associated_coll;	

		daughter_coll.push_back(SimpleParticle_t(25,Higgs));
		associated_coll.push_back(SimpleParticle_t(0,J1));
		associated_coll.push_back(SimpleParticle_t(0,J2));	

		mela->setCandidateDecayMode(TVar::CandidateDecay_Stable);
		mela->setInputEvent(&daughter_coll, &associated_coll, 0, 0);
		mela->setCurrentCandidateFromIndex(0);

		float me_qcd_hsm = 0.;
		float me_qcd_hm = 0.;
		float me_qcd_mixhm = 0.;
 	        float me_zh_hlzg = 0.;
                float me_vbf_hlzg = 0.;

		mela->setProcess(TVar::HSMHiggs, TVar::JHUGen, TVar::JJQCD);
		mela->computeProdP(me_qcd_hsm, true);
		MatrixElementsMap.insert({"me_qcd_hsm", me_qcd_hsm});

		mela->setProcess(TVar::H0minus, TVar::JHUGen, TVar::JJQCD);
		mela->computeProdP(me_qcd_hm, true);
		MatrixElementsMap.insert({"ME_qcd_hm", me_qcd_hm});

		mela->setProcess(TVar::SelfDefine_spin0, TVar::JHUGen, TVar::JJQCD);
		mela->selfDHzzcoupl[0][gHIGGS_VV_1][0] = 1.;
  		mela->selfDHzzcoupl[0][gHIGGS_VV_4][0] = 1.; 
                mela->selfDHggcoupl[0][gHIGGS_GG_4][0] = 1;    
                mela->selfDHggcoupl[0][gHIGGS_GG_2][0] = 1;      
		mela->computeProdP(me_qcd_mixhm, true);
		MatrixElementsMap.insert({"ME_qcd_mixhm", me_qcd_mixhm});

   	        mela->setProcess(TVar::H0_Zgsg1prime2, TVar::JHUGen, TVar::Had_ZH);
		mela->computeProdP(me_zh_hlzg, true);
		MatrixElementsMap.insert({"ME_zh_hlzg", me_zh_hlzg});  	    

                mela->setProcess(TVar::H0_Zgsg1prime2, TVar::JHUGen, TVar::JJVBF);
		mela->computeProdP(me_vbf_hlzg, true);
		MatrixElementsMap.insert({"ME_vbf_hlzg", me_vbf_hlzg});  	     

		mela->resetInputEvent(); 
		
		float required_matrixelement = MatrixElementsMap.find(name_)->second;

		return (double)required_matrixelement;
		
		}
		else return -9999;
	}
	void
	AddRecoME::bindTree_(multidraw::FunctionLibrary& _library)
	{
		//CleanJets
		_library.bindBranch(nCleanJet, 		"nCleanJet");
  		_library.bindBranch(CleanJet_pt, 	"CleanJet_pt");
  		_library.bindBranch(CleanJet_eta, 	"CleanJet_eta");
  		_library.bindBranch(CleanJet_phi, 	"CleanJet_phi");
  	        _library.bindBranch(CleanJet_jetIdx,    "CleanJet_jetIdx");
	        //Jets
  		_library.bindBranch(Jet_mass,     	"Jet_mass");
		//Leptons
  		_library.bindBranch(nLepton, 		"nLepton");
  		_library.bindBranch(Lepton_pt, 		"Lepton_pt");
  		_library.bindBranch(Lepton_eta, 	"Lepton_eta");
  		_library.bindBranch(Lepton_phi, 	"Lepton_phi");
		//MET
  		_library.bindBranch(MET_pt, 		"MET_pt");
		_library.bindBranch(PuppiMET_pt, 	"PuppiMET_pt");
		_library.bindBranch(PuppiMET_phi, 	"PuppiMET_phi");
	
	}
