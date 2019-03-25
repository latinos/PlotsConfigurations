#include <iostream>
#include <cmath>


using namespace std;

Float_t  max_mjj(double eta1, double eta2, double eta3, 
                 double pt1, double pt2, double pt3, 
                 double phi1, double phi2, double phi3)
{

        double m_12 = sqrt(2*pt1*pt2*(cosh(eta1-eta2) - cos(phi1-phi2)));
        double m_13 = sqrt(2*pt1*pt3*(cosh(eta1-eta3) - cos(phi1-phi3)));
        double m_23 = sqrt(2*pt2*pt3*(cosh(eta2-eta3) - cos(phi2-phi3)));


	return std::max(m_12, std::max(m_13, m_23));
}



