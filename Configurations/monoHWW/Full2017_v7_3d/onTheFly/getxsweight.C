#include <iostream>
#include <fstream>
#include <sstream>
#include <string>

using namespace std;

float getxsweight(float mDH = 160,
	    float mChi = 150,
	    float mZp = 900,
	    float mDH_ref = 160,
	    float mChi_ref = 100,
	    float mZp_ref = 1500){

  std::ifstream f;
  f.open("/afs/cern.ch/user/f/fernanpe/public/for_MonoH_analysis/xsecs.csv",std::ios::in);
  float str1; 
  float str2; 
  float str3; 
  float str4; 
  float XS = 0.0;
  float XS_ref = 0.0;
  while (!f.eof()){
    f>>str1>>str2>>str3>>str4;
    if (str1 == mDH && str2 == mChi && str3 == mZp){
	XS = str4;
    }
    if (str1 == mDH_ref && str2 == mChi_ref && str3 == mZp_ref){
	XS_ref = str4;
    }


  }
  return XS/XS_ref;
}
