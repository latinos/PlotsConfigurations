#include "TLorentzVector.h"
#include <iostream>

using namespace std;

float mlj(float ptl, float etal, float phil, float ptj, float etaj, float phij){
	TLorentzVector l;
	TLorentzVector j;
	l.SetPtEtaPhiM(ptl, etal, phil, 0.);
	j.SetPtEtaPhiM(ptj, etaj, phij, 0.);
	
	return (l+j).M();
}

float mlj(std::vector<float> *ptl, std::vector<float> *etal, std::vector<float> *phil, std::vector<float> *ptj, std::vector<float> *etaj, std::vector<float> *phij, int a, int b){
  	TLorentzVector l;
	TLorentzVector j;
	l.SetPtEtaPhiM((*ptl)[a], (*etal)[a], (*phil)[a], 0.);
	j.SetPtEtaPhiM((*ptj)[b], (*etaj)[b], (*phij)[b], 0.);
	if ((*ptl)[a] < 0)
	cout << "ptl is negative" << endl;
	if ((*ptj)[b] < 0)
	cout << "ptj is negative" << endl;
	
	return (l+j).M();
}

