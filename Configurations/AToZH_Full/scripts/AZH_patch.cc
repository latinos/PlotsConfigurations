#include "LatinoAnalysis/MultiDraw/interface/TTreeFunction.h"
#include "LatinoAnalysis/MultiDraw/interface/FunctionLibrary.h"
#include "TLorentzVector.h"
#include <string>
#include <cmath>
#include "TSystem.h"
#include "Math/Vector4D.h"
#include "Math/Vector4Dfwd.h"
#include "Math/GenVector/VectorUtil.h"
using std::cout;
using std::endl;

using PtEtaPhiMVector = ROOT::Math::PtEtaPhiMVector;
class AZH_patch : public multidraw::TTreeFunction {
    public:
	AZH_patch(const char* variable_);

	char const* getName() const override { return "AZH_patch"; }
	TTreeFunction* clone() const override { return new AZH_patch(variable.c_str()); }
	unsigned getNdata() override { return 1; }
	double evaluate(unsigned) override;

    protected:
	void bindTree_(multidraw::FunctionLibrary&) override;
	int getXLepton();
	std::string variable;
	TLorentzVector ZLepton1;
	TLorentzVector ZLepton2;
	UIntValueReader*  nLepton;
	FloatArrayReader* Lepton_pt;
	FloatArrayReader* Lepton_eta;
	FloatArrayReader* Lepton_phi;
	IntArrayReader*   Lepton_pdgId;
	UIntValueReader*  nCleanJet;
	FloatArrayReader* CleanJet_pt;
	FloatArrayReader* CleanJet_eta;
	FloatArrayReader* CleanJet_phi;
	FloatValueReader* PuppiMET_pt;
	FloatValueReader* PuppiMET_phi;

	FloatArrayReader* Jet_btagDeepFlavB;
	IntArrayReader* CleanJet_jetIdx;
};

AZH_patch::AZH_patch(const char* variable_) :  //constructor
    TTreeFunction(),
    variable{variable_}
{}

double
AZH_patch::evaluate(unsigned)
{
    int iL = getXLepton();
    if (iL == -1) return -9999.0;
    TLorentzVector XLepton;
    XLepton.SetPtEtaPhiM(Lepton_pt->At(iL),Lepton_eta->At(iL),Lepton_phi->At(iL), 0.0);
    float Wmass = 80.4;
    float Zmass = 91.1876;
    float TopMassLeptonic_true = 168.7;
    float TopMassHadronic_true = 163;
    float sigmaleptonic = 26.64;
    float sigmahadronic = 37.73;
    float METpt{*PuppiMET_pt->Get()};
    float METphi{*PuppiMET_phi->Get()};
    TLorentzVector MET;
    MET.SetPtEtaPhiM(METpt,0,METphi,0);
    float Zeta = 0.5* std::pow(Wmass, 2) + MET.Pt() *  XLepton.Pt() *(std::cos(std::abs(ROOT::Math::VectorUtil::DeltaPhi(XLepton,MET))));
    float A = (std::pow(Zeta,2)* std::pow(XLepton.Pz(), 2) / std::pow(XLepton.Pt(), 4) - (std::pow(MET.Pt(), 2)*std::pow(XLepton.E(), 2) - std::pow(Zeta, 2)) / std::pow(XLepton.Pt(), 2));
    if (A > 0)  {A = std::sqrt(A);} else {A = 0;} 
    float Pznu1 = ((Zeta * XLepton.Pz())/std::pow(XLepton.Pt(), 2)) + A;
    float Pznu2 = ((Zeta * XLepton.Pz())/std::pow(XLepton.Pt(), 2)) - A;
    float Enu1 = std::sqrt(std::pow(MET.Pt(), 2) + std::pow(Pznu1, 2));
    float Enu2 = std::sqrt(std::pow(MET.Pt(), 2) + std::pow(Pznu2, 2));  
    TLorentzVector AZH_Neutrino1; 
    AZH_Neutrino1.SetPxPyPzE(MET.Px(), MET.Py(), Pznu1, Enu1);
    TLorentzVector AZH_Neutrino2;                                                                                        
    AZH_Neutrino2.SetPxPyPzE(MET.Px(), MET.Py(), Pznu2, Enu2); 

    std::vector<TLorentzVector> AZH_bJet_4vecId;
    std::vector<TLorentzVector> CleanJet_4vecId;   
    unsigned nJetLoose{*nCleanJet->Get()}; 
    for (unsigned z = 0; z < nJetLoose; z++){ 
	if (CleanJet_pt->At(z) > 30 && std::abs(CleanJet_eta->At(z)) < 4.7){ 
	    TLorentzVector j; 
	    j.SetPtEtaPhiM(CleanJet_pt->At(z), CleanJet_eta->At(z), CleanJet_phi->At(z), 0);
	    CleanJet_4vecId.push_back(j);
	    if (Jet_btagDeepFlavB->At(CleanJet_jetIdx->At(z)) > 0.3040) {
		AZH_bJet_4vecId.push_back(j);
	    }
	}
    }

    float ChisqMin = 9999;
    TLorentzVector WJet1_best;
    TLorentzVector WJet2_best;
    TLorentzVector bJetHadronic_best;
    TLorentzVector bJetLeptonic_best;
    TLorentzVector AZH_Neutrino_best;
    TLorentzVector Neutrinos[2] = {AZH_Neutrino1, AZH_Neutrino2};
    for (TLorentzVector Neutrino : Neutrinos) {
	for (int ibJet1 = 0; ibJet1 <  AZH_bJet_4vecId.size(); ++ibJet1){
	    for (int ibJet2 = ibJet1 +1; ibJet2 < AZH_bJet_4vecId.size(); ++ibJet2){
		TLorentzVector bJetPair[2] = {AZH_bJet_4vecId[ibJet1], AZH_bJet_4vecId[ibJet2]};
		std::vector<TLorentzVector> WJets;
		for (int ij = 0; ij < CleanJet_4vecId.size(); ++ij){ 
		    if ((CleanJet_4vecId[ij] != bJetPair[0]) && (CleanJet_4vecId[ij] != bJetPair[1])) {
			WJets.push_back(CleanJet_4vecId[ij]);
		    }
		}

		for(int k = 0; k < 2; k++){                   
		    for (int iWJet1 = 0; iWJet1 < WJets.size(); ++iWJet1){
			for (int iWJet2 = iWJet1 + 1; iWJet2 < WJets.size(); ++iWJet2){ 
			    TLorentzVector WJet1 = WJets[iWJet1];
			    TLorentzVector WJet2 = WJets[iWJet2];
			    TLorentzVector bJetHadronic = bJetPair[k];
			    TLorentzVector bJetLeptonic = bJetPair[1-k];
			    float WMassLeptonic = (XLepton + Neutrino).M();
			    float WMassHadronic = (WJet1 + WJet2).M();
			    float TopMassLeptonic = (XLepton + Neutrino + bJetLeptonic).M();
			    float TopMassHadronic = (WJet1 + WJet2 + bJetHadronic).M();
			    float  Chisq = std::pow((TopMassLeptonic-TopMassLeptonic_true)/sigmaleptonic,2) + std::pow((TopMassHadronic-TopMassHadronic_true)/sigmahadronic, 2);
			    if(Chisq < ChisqMin) { 
				ChisqMin = Chisq;
				WJet1_best = WJet1;
				WJet2_best = WJet2;
				bJetHadronic_best = bJetHadronic;
				bJetLeptonic_best = bJetLeptonic;
				AZH_Neutrino_best = Neutrino;

			    }
			}
		    }
		}
	    }  
	}
    }

    //1 b-jet signal region definition
    TLorentzVector WJet1_best_onebjet;
    TLorentzVector WJet2_best_onebjet;
    TLorentzVector bJetHadronic_best_onebjet;
    TLorentzVector bJetLeptonic_best_onebjet;
    TLorentzVector AZH_Neutrino_best_onebjet;
    if (AZH_bJet_4vecId.size()==1){
	for (TLorentzVector Neutrino : Neutrinos) {
	    int ibJet2 = 0; 
	    std::vector<TLorentzVector> WJets;
	    for (int ij = 0; ij < CleanJet_4vecId.size(); ++ij){
		if((CleanJet_4vecId[ij] != AZH_bJet_4vecId[0]) && ((Jet_btagDeepFlavB->At(CleanJet_jetIdx->At(ij)))>(Jet_btagDeepFlavB->At(CleanJet_jetIdx->At(ibJet2))))){
		    ibJet2 = ij;
		}
	    }
	    TLorentzVector bJetPair[2] = {AZH_bJet_4vecId[0], CleanJet_4vecId[ibJet2]};
	    for (int iw =0; iw < CleanJet_4vecId.size(); ++iw){
		if((CleanJet_4vecId[iw] != AZH_bJet_4vecId[0]) && (CleanJet_4vecId[iw] != CleanJet_4vecId[ibJet2])) {
		    WJets.push_back(CleanJet_4vecId[iw]);
		}
	    }
	    for(int k = 0; k < 2; k++) {
		for (int iWJet1 = 0; iWJet1 < WJets.size(); ++iWJet1){
		    for (int iWJet2 = iWJet1 + 1; iWJet2 < WJets.size(); ++iWJet2){ 
			TLorentzVector WJet1_onebjet = WJets[iWJet1];
			TLorentzVector WJet2_onebjet = WJets[iWJet2];
			TLorentzVector bJetHadronic_onebjet = bJetPair[k];
			TLorentzVector bJetLeptonic_onebjet = bJetPair[1-k];
			float WMassLeptonic_onebjet = (XLepton + Neutrino).M();
			float WMassHadronic_onebjet = (WJet1_onebjet + WJet2_onebjet).M();
			float TopMassLeptonic_onebjet = (XLepton + Neutrino + bJetLeptonic_onebjet).M();
			float TopMassHadronic_onebjet = (WJet1_onebjet + WJet2_onebjet + bJetHadronic_onebjet).M();
			float  Chisq_onebjet = std::pow((TopMassLeptonic_onebjet-TopMassLeptonic_true)/sigmaleptonic,2) + std::pow((TopMassHadronic_onebjet-TopMassHadronic_true)/sigmahadronic, 2);
			if(Chisq_onebjet < ChisqMin) { 
			    ChisqMin = Chisq_onebjet;
			    WJet1_best_onebjet = WJet1_onebjet;
			    WJet2_best_onebjet = WJet2_onebjet;
			    bJetHadronic_best_onebjet = bJetHadronic_onebjet;
			    bJetLeptonic_best_onebjet = bJetLeptonic_onebjet;
			    AZH_Neutrino_best_onebjet = Neutrino;

			}
		    }
		}
	    }
	}
    }






unsigned nJet = 0;
unsigned nbJet = 0;
for (unsigned ij = 0; ij < nJetLoose; ij++){
    if (CleanJet_pt->At(ij) > 30 && std::abs(CleanJet_eta->At(ij)) < 4.7) {
	nJet++;
	if (Jet_btagDeepFlavB->At(CleanJet_jetIdx->At(ij)) > 0.3040) nbJet++; }
}

if (variable == "AZH_mA_minus_mH"){
    if (nJet < 4 || nbJet < 2) return -9999.0;
    return (XLepton + AZH_Neutrino_best + bJetLeptonic_best + bJetHadronic_best + WJet1_best + WJet2_best + ZLepton1 + ZLepton2).M() - (XLepton + AZH_Neutrino_best + bJetLeptonic_best + bJetHadronic_best + WJet1_best + WJet2_best).M();  
}      

else if (variable == "AZH_Amass") {
    if (nJet < 4 || nbJet < 2) return -9999.0;
    return (XLepton + AZH_Neutrino_best + bJetLeptonic_best + bJetHadronic_best + WJet1_best + WJet2_best + ZLepton1 + ZLepton2).M();
}

else if (variable == "AZH_Amass_onebjet") {
        if (nJet < 4 || nbJet != 1) return -9999.0;
	    return (XLepton + AZH_Neutrino_best_onebjet + bJetLeptonic_best_onebjet + bJetHadronic_best_onebjet + WJet1_best_onebjet + WJet2_best_onebjet + ZLepton1 + ZLepton2).M();
}


else if (variable == "AZH_Hmass") {
    if (nJet < 4 || nbJet < 2) return -9999.0;
    return (XLepton + AZH_Neutrino_best + bJetLeptonic_best + bJetHadronic_best + WJet1_best + WJet2_best).M();
}

else if (variable == "AZH_Hmass_onebjet") {
        if (nJet < 4 || nbJet != 1) return -9999.0;
	    return (XLepton + AZH_Neutrino_best_onebjet + bJetLeptonic_best_onebjet + bJetHadronic_best_onebjet + WJet1_best_onebjet + WJet2_best_onebjet).M();
}

else if (variable == "nbjet") {
    return nbJet;
}

else if (variable == "AZH_mA_minus_mH_onebjet"){
    if (nJet < 4 || nbJet != 1) return -9999.0;
    return (XLepton + AZH_Neutrino_best_onebjet + bJetLeptonic_best_onebjet + bJetHadronic_best_onebjet + WJet1_best_onebjet + WJet2_best_onebjet + ZLepton1 + ZLepton2).M() - (XLepton + AZH_Neutrino_best_onebjet + bJetLeptonic_best_onebjet + bJetHadronic_best_onebjet + WJet1_best_onebjet + WJet2_best_onebjet).M();
}



else if (variable == "mTlmetjj"){
    if (nJet < 2) return -9999.0;
    TLorentzVector Jet0;
    TLorentzVector Jet1;
    Jet0.SetPtEtaPhiM(CleanJet_pt->At(0),CleanJet_eta->At(0),CleanJet_phi->At(0),0);
    Jet1.SetPtEtaPhiM(CleanJet_pt->At(1),CleanJet_eta->At(1),CleanJet_phi->At(1),0);
    TLorentzVector sumvec;
    sumvec = MET      + XLepton      + Jet0      + Jet1;
    float sumpt            = MET.Pt() + XLepton.Pt() + Jet0.Pt() + Jet1.Pt();
    return std::sqrt(std::pow(sumpt,2) - std::pow(sumvec.Px(),2) - std::pow(sumvec.Py(),2));
}

else if (variable == "AZH_ChiSquare") {
    if (nJet < 4 || nbJet < 2) return -9999.0;
    return ChisqMin;

}

else if (variable == "AZH_Tophadronic") {
    if (nJet < 4 || nbJet < 2) return -9999.0;
    return (WJet1_best +  WJet2_best + bJetHadronic_best).M();
}

else if (variable == "AZH_Topleptonic") {
    if (nJet < 4 || nbJet < 2) return -9999.0;
    return (XLepton + AZH_Neutrino_best + bJetLeptonic_best).M();
}

else {
    std::cout << "Invalid variable! Supported variables are AZH_mA_minus_mH, AZH_Amass, AZH_Hmass and AZH_ChiSquare" << std::endl;
    return -9999.0;
}


} 


int
AZH_patch::getXLepton(){
    //Require an event with 3 leptons and chlll = 1
    unsigned nLep{*nLepton->Get()};
    if (nLep<3) return -1;
    //Determine X lepton
    int XLepton = -1;
    float minmllDiffToZ = 9999.0;
    for (int iL = 0; iL < 2; iL++){
	for (int jL = iL+1; jL < 3; jL++){
	    if (Lepton_pdgId->At(iL) + Lepton_pdgId->At(jL) == 0){
		TLorentzVector temp1;
		TLorentzVector temp2;
		temp1.SetPtEtaPhiM(Lepton_pt->At(iL),Lepton_eta->At(iL),Lepton_phi->At(iL),0.0);
		temp2.SetPtEtaPhiM(Lepton_pt->At(jL),Lepton_eta->At(jL),Lepton_phi->At(jL),0.0);
		float mllDiffToZ = std::abs((temp1+temp2).M()-91.1876);
		if (mllDiffToZ < minmllDiffToZ){
		    XLepton = 3-iL-jL;
		    minmllDiffToZ = mllDiffToZ;
		    ZLepton1 = temp1;
		    ZLepton2 = temp2;

		}
	    }
	}
    } 
    return XLepton;
}


void
AZH_patch::bindTree_(multidraw::FunctionLibrary& _library)
{
    _library.bindBranch(nLepton,       "nLepton");
    _library.bindBranch(Lepton_pt,     "Lepton_pt");
    _library.bindBranch(Lepton_eta,    "Lepton_eta");
    _library.bindBranch(Lepton_phi,    "Lepton_phi");
    _library.bindBranch(Lepton_pdgId,  "Lepton_pdgId");
    _library.bindBranch(nCleanJet,     "nCleanJet");
    _library.bindBranch(CleanJet_pt,   "CleanJet_pt");
    _library.bindBranch(CleanJet_eta,  "CleanJet_eta");
    _library.bindBranch(CleanJet_phi,  "CleanJet_phi");
    _library.bindBranch(PuppiMET_pt,   "PuppiMET_pt");
    _library.bindBranch(PuppiMET_phi,  "PuppiMET_phi");
    _library.bindBranch(Jet_btagDeepFlavB, "Jet_btagDeepFlavB");
    _library.bindBranch(CleanJet_jetIdx, "CleanJet_jetIdx");

}

