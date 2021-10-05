#include "LatinoAnalysis/MultiDraw/interface/TTreeFunction.h"
#include "LatinoAnalysis/MultiDraw/interface/FunctionLibrary.h"

#include <iostream>
#include <stdexcept>
#include <map>

#include <TMVA/Reader.h>
#include <TMVA/PyMethodBase.h>

#ifndef Test_HH
#define Test_HH

using namespace std;

class Test : public multidraw::TTreeFunction {
    public:
        Test(); 
 
        void init();
   
        char const* getName() const override { 
            return "Test"; 
        }
        TTreeFunction* clone() const override { 
            return new Test();
        }
    
        unsigned getNdata() override { return 1; }
        double evaluate(unsigned) override;
    
    protected:  
        ~Test();
        void bindTree_(multidraw::FunctionLibrary&) override;
    
        TTreeReaderArray<float>* MHlnjj_pt_jj;
        TTreeReaderArray<float>* MHlnjj_pt_ljj;
        TTreeReaderArray<double>* Test_pt_ljj;
        TTreeReaderArray<double>* Test_pt_jj;
};                             

Test::Test(): 
    TTreeFunction() 
{
    //init();
}

//void
//Test::init()
//{
//}

double
Test::evaluate(unsigned)
{
    bool safe = true;
    if (abs(MHlnjj_pt_ljj->At(0) - Test_pt_ljj->At(0)) > 0.01) {
        //cout << "True value pt_ljj=" << MHlnjj_pt_ljj->At(0) <<", Test value pt_ljj=" << Test_pt_ljj->At(0) << endl;
        safe = false;
    }
    if (abs(MHlnjj_pt_jj->At(0) - Test_pt_jj->At(0)) > 0.01) {
        //cout << "True value  pt_jj=" << MHlnjj_pt_jj->At(0) <<", Test value  pt_jj=" << Test_pt_jj->At(0) << endl;
        safe = false;
    }
    if (safe) {
        return 1.;
    } else {
        return 0.;
    }
}

void
Test::bindTree_(multidraw::FunctionLibrary& _library)
{   
    _library.bindBranch(MHlnjj_pt_jj , "MHlnjj_pt_jj" );
    _library.bindBranch(MHlnjj_pt_ljj, "MHlnjj_pt_ljj");
    _library.bindBranch(Test_pt_ljj,   "Test_pt_ljj");
    _library.bindBranch(Test_pt_jj,    "Test_pt_jj");
}

Test::~Test(){
    MHlnjj_pt_ljj=nullptr;
    MHlnjj_pt_jj=nullptr;
    Test_pt_ljj=nullptr;
    Test_pt_jj=nullptr;
}
#endif
