#include <iostream>
#include <fstream>
#include <sstream>
#include <string>

using namespace std;

float get2HDMxs(float mZ = 100,
		float mX = 1
		){


  // cout<<"mZ = "<<mZ<<endl;
  // cout<<"mX = "<<mX<<endl;

  std::ifstream f;
  f.open("/afs/cern.ch/user/n/ntrevisa/work/CMSSW_8_0_26_patch1/src/PlotsConfigurations/Configurations/monoHWW/Apr2017/monoH_xs_ZpB.txt",std::ios::in);
  std::string str; 
  float str1; 
  float str2; 
  float str3; 
  float XS = 0.01;
  while (!f.eof()){
    f>>str1>>str2>>str3;
    if (str1 == mZ)
      if (str2 == mX){
	XS = str3;
	break;
      }
  }
  //  cout<<"XS = "<<XS<<endl;
  return XS;
}
