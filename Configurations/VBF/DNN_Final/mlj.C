#include "TLorentzVector.h"

float mlj(float ptl, float etal, float phil, float ptj, float etaj, float phij){
        TLorentzVector l;
        TLorentzVector j;
        l.SetPtEtaPhiM(ptl, etal, phil, 0.);
        j.SetPtEtaPhiM(ptj, etaj, phij, 0.);

        return (l+j).M();
}
