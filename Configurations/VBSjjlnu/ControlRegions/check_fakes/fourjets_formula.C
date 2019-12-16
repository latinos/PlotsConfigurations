#include "TLorentzVector.h"
#include "TMath.h"
#include <cmath>

using namespace ROOT;

float fourjet_pt(float jpt1, float jpt2, float jpt3, float jpt4, 
                float jeta1, float jeta2, float jeta3, float jeta4,
                float jphi1, float jphi2, float jphi3, float jphi4,
                float jm1, float jm2, float jm3, float jm4){
    
    TLorentzVector fourj; 
    TLorentzVector v1; 
    v1.SetPtEtaPhiM(jpt1, jeta1, jphi1, jm1);
    fourj += v1;
    TLorentzVector v2; 
    v2.SetPtEtaPhiM(jpt2, jeta2, jphi2, jm2);
    fourj += v2;
    TLorentzVector v3; 
    v3.SetPtEtaPhiM(jpt3, jeta3, jphi3, jm3);
    fourj += v3;
    TLorentzVector v4; 
    v4.SetPtEtaPhiM(jpt4, jeta4, jphi4, jm4);
    fourj += v4;

    return fourj.Pt();
    
};


float fourjet_lep_deltaphi(float jpt1, float jpt2, float jpt3, float jpt4, 
                        float jeta1, float jeta2, float jeta3, float jeta4,
                        float jphi1, float jphi2, float jphi3, float jphi4,
                        float jm1, float jm2, float jm3, float jm4,
                        float lep_pt, float lep_eta, float lep_phi, 
                        float met_pt, float met_phi){
    
    TLorentzVector fourj; 
    TLorentzVector v1; 
    v1.SetPtEtaPhiM(jpt1, jeta1, jphi1, jm1);
    fourj += v1;
    TLorentzVector v2; 
    v2.SetPtEtaPhiM(jpt2, jeta2, jphi2, jm2);
    fourj += v2;
    TLorentzVector v3; 
    v3.SetPtEtaPhiM(jpt3, jeta3, jphi3, jm3);
    fourj += v3;
    TLorentzVector v4; 
    v4.SetPtEtaPhiM(jpt4, jeta4, jphi4, jm4);
    fourj += v4;

    TLorentzVector lep;
    TLorentzVector met;

    lep.SetPtEtaPhiM(lep_pt, lep_eta, lep_phi, 0.);
    met.SetPtEtaPhiM(met_pt, 0, met_phi, 0.);

    return  fourj.DeltaPhi(lep);
};


float fourjet_met_deltaphi(float jpt1, float jpt2, float jpt3, float jpt4, 
                        float jeta1, float jeta2, float jeta3, float jeta4,
                        float jphi1, float jphi2, float jphi3, float jphi4,
                        float jm1, float jm2, float jm3, float jm4,
                        float lep_pt, float lep_eta, float lep_phi, 
                        float met_pt, float met_phi)
{
    TLorentzVector fourj; 
    TLorentzVector v1; 
    v1.SetPtEtaPhiM(jpt1, jeta1, jphi1, jm1);
    fourj += v1;
    TLorentzVector v2; 
    v2.SetPtEtaPhiM(jpt2, jeta2, jphi2, jm2);
    fourj += v2;
    TLorentzVector v3; 
    v3.SetPtEtaPhiM(jpt3, jeta3, jphi3, jm3);
    fourj += v3;
    TLorentzVector v4; 
    v4.SetPtEtaPhiM(jpt4, jeta4, jphi4, jm4);
    fourj += v4;

    TLorentzVector lep;
    TLorentzVector met;

    lep.SetPtEtaPhiM(lep_pt, lep_eta, lep_phi, 0.);
    met.SetPtEtaPhiM(met_pt, 0, met_phi, 0.);

    return  fourj.DeltaPhi(met);
};

float fourjet_lep_ptratio(float jpt1, float jpt2, float jpt3, float jpt4, 
                        float jeta1, float jeta2, float jeta3, float jeta4,
                        float jphi1, float jphi2, float jphi3, float jphi4,
                        float jm1, float jm2, float jm3, float jm4,
                        float lep_pt, float lep_eta, float lep_phi,
                        float met_pt, float met_phi)
{
    
    TLorentzVector fourj; 
    TLorentzVector v1; 
    v1.SetPtEtaPhiM(jpt1, jeta1, jphi1, jm1);
    fourj += v1;
    TLorentzVector v2; 
    v2.SetPtEtaPhiM(jpt2, jeta2, jphi2, jm2);
    fourj += v2;
    TLorentzVector v3; 
    v3.SetPtEtaPhiM(jpt3, jeta3, jphi3, jm3);
    fourj += v3;
    TLorentzVector v4; 
    v4.SetPtEtaPhiM(jpt4, jeta4, jphi4, jm4);
    fourj += v4;

    TLorentzVector lep;
    TLorentzVector met;

    lep.SetPtEtaPhiM(lep_pt, lep_eta, lep_phi, 0.);
    met.SetPtEtaPhiM(met_pt, 0, met_phi, 0.);

    return  fourj.Pt()/ lep.Pt();
};

float fourjet_pmet(float jpt1, float jpt2, float jpt3, float jpt4,float jpt5, float jpt6, float jpt7, float jpt8, float jpt9)
{
    
    // TLorentzVector fourj; 
    // TLorentzVector v1; 
    // v1.SetPtEtaPhiM(jpt1, jeta1, jphi1, jm1);
    // fourj += v1;
    // TLorentzVector v2; 
    // v2.SetPtEtaPhiM(jpt2, jeta2, jphi2, jm2);
    // fourj += v2;
    // TLorentzVector v3; 
    // v3.SetPtEtaPhiM(jpt3, jeta3, jphi3, jm3);
    // fourj += v3;
    // TLorentzVector v4; 
    // v4.SetPtEtaPhiM(jpt4, jeta4, jphi4, jm4);
    // fourj += v4;

    // TLorentzVector lep;
    // TLorentzVector met;

    // lep.SetPtEtaPhiM(lep_pt, lep_eta, lep_phi, 0.);
    // met.SetPtEtaPhiM(met_pt, 0, met_phi, 0.);

    // float dphi = fourj.DeltaPhi(met);
    // if (dphi< TMath::Pi() / 2){
    //     return sin(dphi)*met.Pt();
    // }else{
    //     return met.Pt();
    // }
    return 1.0;
};


float lep_pmet(float lep_pt, float lep_eta, float lep_phi, float met_pt, float met_phi){
    TLorentzVector lep;
    TLorentzVector met;

    lep.SetPtEtaPhiM(lep_pt, lep_eta, lep_phi, 0.);
    met.SetPtEtaPhiM(met_pt, 0, met_phi, 0.);

    float dphi = lep.DeltaPhi(met);
    if (dphi< TMath::Pi() / 2){
        return sin(dphi)*met.Pt();
    }else{
        return met.Pt();
    }
}