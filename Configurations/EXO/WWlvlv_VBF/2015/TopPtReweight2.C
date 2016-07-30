#include "TLorentzVector.h"
#include "TMath.h"
#include <vector>

float TopPtReweight2(float lid1, float lpt1, float leta1, float lphi1,
                     float lid2, float lpt2, float leta2, float lphi2,
                     float lid3, float lpt3, float leta3, float lphi3,

                     float nid1, float npt1, float neta1, float nphi1,
                     float nid2, float npt2, float neta2, float nphi2,
                     float nid3, float npt3, float neta3, float nphi3,

                     float bid1, float bpt1, float beta1, float bphi1,
                     float bid2, float bpt2, float beta2, float bphi2,
                     float bid3, float bpt3, float beta3, float bphi3){ 


  std::vector<float> std_vector_LHElepton_id;
  std_vector_LHElepton_id.push_back(lid1);
  std_vector_LHElepton_id.push_back(lid2);
  std_vector_LHElepton_id.push_back(lid3);

  std::vector<float> std_vector_LHElepton_pt;
  std_vector_LHElepton_pt.push_back(lpt1);
  std_vector_LHElepton_pt.push_back(lpt2);
  std_vector_LHElepton_pt.push_back(lpt3);      

  std::vector<float> std_vector_LHElepton_eta;
  std_vector_LHElepton_eta.push_back(leta1);
  std_vector_LHElepton_eta.push_back(leta2);
  std_vector_LHElepton_eta.push_back(leta3);

  std::vector<float> std_vector_LHElepton_phi;
  std_vector_LHElepton_phi.push_back(lphi1);
  std_vector_LHElepton_phi.push_back(lphi2);
  std_vector_LHElepton_phi.push_back(lphi3); 


  std::vector<float> std_vector_LHEneutrino_id;
  std_vector_LHEneutrino_id.push_back(nid1);
  std_vector_LHEneutrino_id.push_back(nid2);
  std_vector_LHEneutrino_id.push_back(nid3);

  std::vector<float> std_vector_LHEneutrino_pt;
  std_vector_LHEneutrino_pt.push_back(npt1);
  std_vector_LHEneutrino_pt.push_back(npt2);
  std_vector_LHEneutrino_pt.push_back(npt3);

  std::vector<float> std_vector_LHEneutrino_eta;
  std_vector_LHEneutrino_eta.push_back(neta1);
  std_vector_LHEneutrino_eta.push_back(neta2);
  std_vector_LHEneutrino_eta.push_back(neta3);

  std::vector<float> std_vector_LHEneutrino_phi;
  std_vector_LHEneutrino_phi.push_back(nphi1);
  std_vector_LHEneutrino_phi.push_back(nphi2);
  std_vector_LHEneutrino_phi.push_back(nphi3);

  std::vector<float> std_vector_LHEparton_id;
  std_vector_LHEparton_id.push_back(bid1);
  std_vector_LHEparton_id.push_back(bid2);
  std_vector_LHEparton_id.push_back(bid3);

  std::vector<float> std_vector_LHEparton_pt;
  std_vector_LHEparton_pt.push_back(bpt1);
  std_vector_LHEparton_pt.push_back(bpt2);
  std_vector_LHEparton_pt.push_back(bpt3);

  std::vector<float> std_vector_LHEparton_eta;
  std_vector_LHEparton_eta.push_back(beta1);
  std_vector_LHEparton_eta.push_back(beta2);
  std_vector_LHEparton_eta.push_back(beta3);

  std::vector<float> std_vector_LHEparton_phi;
  std_vector_LHEparton_phi.push_back(bphi1);
  std_vector_LHEparton_phi.push_back(bphi2);
  std_vector_LHEparton_phi.push_back(bphi3);

  //using namespace std;

  int ilTop=-1;
  int ilAntiTop=-1;
  int inTop = -1;
  int inAntiTop = -1;
  int ibTop = -1;
  int ibAntiTop = -1;

  for (unsigned int i = 0; i < 3; ++i){
    if (std_vector_LHElepton_id[i]== 11 || std_vector_LHElepton_id[i] ==  13 || std_vector_LHElepton_id[i] ==  15)
      ilAntiTop = i;
    if (std_vector_LHElepton_id[i]==-11 || std_vector_LHElepton_id[i] == -13 || std_vector_LHElepton_id[i] == -15)  
      ilTop = i;
  }

  for (unsigned int i = 0; i < 3; ++i){
    if (std_vector_LHEneutrino_id[i]==-12 || std_vector_LHEneutrino_id[i] == -14 || std_vector_LHEneutrino_id[i]==-16)
      inAntiTop = i;
    if (std_vector_LHEneutrino_id[i]== 12 || std_vector_LHEneutrino_id[i] ==  14 || std_vector_LHEneutrino_id[i]== 16)
      inTop = i;
  }

  for (unsigned int i = 0; i < 3; ++i){
    if (std_vector_LHEparton_id[i] == -5)
      ibAntiTop = i;
    if (std_vector_LHEparton_id[i] ==  5)
      ibTop = i;
  }

  TLorentzVector Top(0.,0.,0.,0.);
  TLorentzVector AntiTop(0.,0.,0.,0.);

  if (ilTop != -1 && inTop != -1 && ibTop != -1 && ilAntiTop != -1 && inAntiTop != -1/* && ibAntiTop != -1*/){
    TLorentzVector lTop(0.,0.,0.,0.);
    lTop.SetPtEtaPhiM(std_vector_LHElepton_pt[ilTop], std_vector_LHElepton_eta[ilTop], std_vector_LHElepton_phi[ilTop], 0.);
    TLorentzVector nTop(0.,0.,0.,0.);
    nTop.SetPtEtaPhiM(std_vector_LHEneutrino_pt[inTop], std_vector_LHEneutrino_eta[inTop], std_vector_LHEneutrino_phi[inTop], 0.);
    double massDiffTop=9999.;
    for (unsigned int i = 0; i < 3; ++i){
      if (std_vector_LHEparton_id[i] == 5){
        TLorentzVector bTop(0.,0.,0.,0.);
        bTop.SetPtEtaPhiM(std_vector_LHEparton_pt[i], std_vector_LHEparton_eta[i], std_vector_LHEparton_phi[i], 5.4);  
        TLorentzVector tempTop = lTop+nTop+bTop;
        if (TMath::Abs(tempTop.M() - 172.5) < massDiffTop){
          massDiffTop = TMath::Abs(tempTop.M() - 172.5);
          Top = tempTop;
        }

      }
    }  

    TLorentzVector lAntiTop(0.,0.,0.,0.);
    lAntiTop.SetPtEtaPhiM(std_vector_LHElepton_pt[ilAntiTop], std_vector_LHElepton_eta[ilAntiTop], std_vector_LHElepton_phi[ilAntiTop], 0.);
    TLorentzVector nAntiTop(0.,0.,0.,0.);
    nAntiTop.SetPtEtaPhiM(std_vector_LHEneutrino_pt[inAntiTop], std_vector_LHEneutrino_eta[inAntiTop], std_vector_LHEneutrino_phi[inAntiTop], 0.);
    double massDiffAntiTop=9999.;
    for (unsigned int i = 0; i < 3; ++i){
      if (std_vector_LHEparton_id[i] == 5){
        TLorentzVector bTop(0.,0.,0.,0.);
        bTop.SetPtEtaPhiM(std_vector_LHEparton_pt[i], std_vector_LHEparton_eta[i], std_vector_LHEparton_phi[i], 5.4);
        TLorentzVector tempTop = lAntiTop+nAntiTop+bTop;
        if (TMath::Abs(tempTop.M() - 172.5) < massDiffAntiTop){
          massDiffAntiTop = TMath::Abs(tempTop.M() - 172.5);
          AntiTop = tempTop;
        }

      }
    } 
    //printf("massDiffTop: %f, massDiffAntiTop: %f\n", massDiffTop, massDiffAntiTop);  
    //cout << "Top :    " << endl;
    //Top.Print();
    //cout << "AntiTop: " << endl;
    //AntiTop.Print();

    if (massDiffTop > 10. || massDiffAntiTop > 10.)
      return 1.;

    float a = 0.148;
    float b = -0.00129;

    return TMath::Sqrt(TMath::Exp(a+b*Top.Pt()) * TMath::Exp(a+b*AntiTop.Pt()));

  }  
  
  return 1.;

}
