// float ComputeMT2(TLorentzVector VisibleA,
// 		 TLorentzVector VisibleB, 
// 		 TLorentzVector Invisible,
// 		 int            MT2Type,
// 		 float          MT2Precision) 
// {

#include "TLorentzVector.h"
#include "lester_mt2_bisect.h"

float ComputeMT2(float pt1,
		 float phi1,
		 float eta1,
		 float pt2,
		 float phi2,
		 float eta2,
		 float met,
		 float metphi
		 ){

  TLorentzVector VisibleA;
  TLorentzVector VisibleB;
  TLorentzVector Invisible;

  VisibleA.SetPtEtaPhiM(pt1,eta1,phi1,0);
  VisibleB.SetPtEtaPhiM(pt2,eta2,phi2,0);
  Invisible.SetPtEtaPhiM(met,0,metphi,0);

  float mVisA = fabs(VisibleA.M());  // Mass of visible object on side A. Must be >= 0
  float mVisB = fabs(VisibleB.M());  // Mass of visible object on side B. Must be >= 0

  float chiA = 0.;  // Hypothesised mass of invisible on side A. Must be >= 0
  float chiB = 0.;  // Hypothesised mass of invisible on side B. Must be >= 0
  
  int MT2Type;
  MT2Type = 0;

  if (MT2Type == 1){
    mVisA =  5.;
    mVisB =  5.;
    chiA  = 80.;
    chiB  = 80.;
  }

  float pxA = VisibleA.Px();  // x momentum of visible object on side A
  float pyA = VisibleA.Py();  // y momentum of visible object on side A
  
  float pxB = VisibleB.Px();  // x momentum of visible object on side B
  float pyB = VisibleB.Py();  // y momentum of visible object on side B
  
  float pxMiss = Invisible.Px();  // x component of missing transverse momentum
  float pyMiss = Invisible.Py();  // y component of missing transverse momentum
  
  // Must be >= 0
  // If = 0 algorithm aims for machine precision
  // If > 0 MT2 computed to supplied absolute precision
  float desiredPrecisionOnMt2 = 0;
  
  float MT2 = asymm_mt2_lester_bisect::get_mT2(mVisA, pxA, pyA,
						mVisB, pxB, pyB,
						pxMiss, pyMiss,
						chiA, chiB,
						desiredPrecisionOnMt2);

  return MT2;
}
