// vim: set sw=1 sts=1 et:
#include <TMath.h>

class WW {
 public:
  //! constructor
  WW();
  virtual ~WW() {}
 
  //! check
  
  //! set functions
  void setXY(double x, double y);
 
 //! functions
  float ww();
 
 private:
  //! variables
  double xx_;
  double yy_;
};

//! constructor
WW::WW() {
 xx_ = 0.;
 yy_ = 0.;
}

void WW::setXY(double x, double y){
 xx_ = x;
 yy_ = y;
}

//! functions

float WW::ww(){
 return xx_+yy_;
}
