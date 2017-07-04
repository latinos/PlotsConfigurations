// vim: set sw=1 sts=1 et:

#include <TROOT.h>
#include <TMath.h>
#include <vector>

class WWVEC {
 public:
  //! constructor
  WWVEC();
  virtual ~WWVEC() {}
 
  //! check
  
  //! set functions
  void setXY(float x, float y);
 
 //! functions
  std::vector<float> wwVec();
 
 private:
  //! variables
  float xx_;
  float yy_;
};

//! constructor
WWVEC::WWVEC() {
 xx_ = 0.;
 yy_ = 0.;
}

void WWVEC::setXY(float x, float y){
 xx_ = x;
 yy_ = y;
}

//! functions

std::vector<float> WWVEC::wwVec(){
 std::vector<float> out;
 out.push_back(xx_+yy_);
 if (xx_ > 1) out.push_back(xx_-yy_);
 return out;
}
