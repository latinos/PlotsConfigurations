

#include "TLorentzVector.h"
#include "TVector2.h"
#include <iostream>


Float_t pt12  (double pt1, double eta1, double phi1,
               double pt2, double eta2, double phi2){
  TLorentzVector l1;
  l1.SetPtEtaPhiM(pt1,eta1,phi1,0);
  TLorentzVector l2;
  l2.SetPtEtaPhiM(pt2,eta2,phi2,0);
  
  TLorentzVector ll;
  ll=l1+l2;
  
  return ll.Pt();
                 
}






/*
Float_t ptbest  (double pt1, double eta1, double phi1, double ch1,
                 double pt2, double eta2, double phi2, double ch2,
                 double pt3 //, double phi3 //, double eta3, double ch3
                ){*/


// Float_t ptbest  (std::vector<float> v_pt, std::vector<float> v_eta, std::vector<float> v_phi, std::vector<float> v_ch){
//   
//   float pt1  = v_pt.at(0);
//   float eta1 = v_eta.at(0);
//   float phi1 = v_phi.at(0);
//   float ch1  = v_ch.at(0);
//   
//   float pt2  = v_pt.at(1);
//   float eta2 = v_eta.at(1);
//   float phi2 = v_phi.at(1);
//   float ch2  = v_ch.at(1);
//   
//   float pt3  = v_pt.at(2);
//   float eta3 = v_eta.at(2);
//   float phi3 = v_phi.at(2);
//   float ch3  = v_ch.at(2);
//   
//   std::cout << " lep [1] = " << pt1 << " , " << eta1 << " , " << phi1 << " , " << ch1 << "   " << std::endl;
//   std::cout << " lep [2] = " << pt2 << " , " << eta2 << " , " << phi2 << " , " << ch2 << "   " << std::endl;
// //   std::cout << " lep [3] = " << pt3 << " , " << eta3 << " , " << phi3 << " , " << ch3 << "   " << std::endl;
//   
//   
// //   return 12.0;
//   
//   
//   TLorentzVector l1;
//   l1.SetPtEtaPhiM(pt1,eta1,phi1,0);
//   TLorentzVector l2;
//   l2.SetPtEtaPhiM(pt2,eta2,phi2,0);
//   TLorentzVector l3;
//   l3.SetPtEtaPhiM(pt3,eta3,phi3,0);
//   
//   //     1 2 3  pt ordered
//   //##   + + -       --> (2,3)  or   (1,3)
//   //##   + - -       --> (1,2)  or   (1,3)
//   //##   + - +       --> (1,2)  or   (2,3)
// 
//   //##   - + -       --> (1,2)  or   (2,3)
//   //##   - - +       --> (1,3)  or   (2,3)
//   //##   - + +       --> (1,2)  or   (1,3)
//   
// 
//   //
//   // if possible, pick the lowest pt as one of the leptons from H>WW>lvlv, due to off-shell-ness
//   //
//   //##   + + -       --> (2,3)  or   (1,3)
//   //##   + - -       -->             (1,3)
//   //##   + - +       -->             (2,3)
//   
//   //##   - + -       -->             (2,3)
//   //##   - - +       --> (1,3)  or   (2,3)
//   //##   - + +       -->             (1,3)
//   
// 
//   //
//   // in case you have 2 configurations, pick the highest pt pair
//   //
//   
//   //##   + + -       --> (2,3)  or   (1,3)   A
//   //##   + - -       -->             (1,3)   C
//   //##   + - +       -->             (2,3)   B
//   
//   //##   - + -       -->             (2,3)   B
//   //##   - - +       --> (1,3)  or   (2,3)   A
//   //##   - + +       -->             (1,3)   C
//   
//   
//   
//   
//   
//   if (ch1 * ch2 > 0) {   // ---> A
//     
//     float pt23 = (l2+l3).Pt();
//     float pt13 = (l1+l3).Pt();
//     
//     if (pt13 > pt23) return pt13;
//     else return pt23;
//     
//   }
//   else {
//     // ---> B
//     if (ch1 * ch3 > 0)     
//       return (l2+l3).Pt();
//     else 
//       // ---> C
//       return (l1+l3).Pt();
//   }
//   
// }



               
               