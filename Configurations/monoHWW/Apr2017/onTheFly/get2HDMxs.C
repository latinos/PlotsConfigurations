#include <iostream>
#include <fstream>
#include <sstream>
#include <string>

using namespace std;

float get2HDMxs(float mZ = 600,
		float mA = 300
		){

  std::ifstream f;
  f.open("/afs/cern.ch/user/n/ntrevisa/work/CMSSW_8_0_26_patch1/src/PlotsConfigurations/Configurations/monoHWW/Apr2017/crosssectionZp2HDM.txt",std::ios::in);
  std::string str; 
  float str1; 
  float str2; 
  float str3; 
  cout<<"mZ = "<<mZ<<endl;
  cout<<"mA = "<<mA<<endl;
  float XS = 0.01;
  while (!f.eof()){
    f>>str1>>str2>>str3;
    cout<<str1<<endl;
    cout<<str2<<endl;
    cout<<str3<<endl;
    if (str1 == mZ)
      if (str2 == mA){
	cout<<str3<<endl;
	XS = str3;
	break;
      }
  }
  return XS;
}
