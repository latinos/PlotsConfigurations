#include "TLorentzVector.h"
#include <cmath>


float mjj(float pt1, float eta1, float phi1, float m1,
            float pt2, float eta2, float phi2, float m2 ){
    TLorentzVector v1,v2; 
    float p1 = pt1* cosh(eta1);
    float p2 = pt2* cosh(eta2);
    v1.SetPtEtaPhiE(pt1,eta1,phi1, sqrt(p1*p1 + m1*m1));
    v2.SetPtEtaPhiE(pt2,eta2,phi2, sqrt(p2*p2 + m2*m2));

    return (v1+v2).M();

};

float Zepp(float eta, float etaf1, float etaf2){
    return (eta - (etaf1 + etaf2)/2 ) / abs(etaf1 -etaf2);
}



