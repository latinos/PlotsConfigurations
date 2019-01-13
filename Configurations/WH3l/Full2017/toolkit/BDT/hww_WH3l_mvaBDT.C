#include <TMVA/Reader.h>

using namespace std;

TMVA::Reader* myreaderBDT = new TMVA::Reader();

    float minmtw_wh3l_32 ; 
    float dphilllmet_32  ; 
    float pTWWW_32       ; 
    float mtwww_32       ; 
    float mindphi_lmet_32; 
    float pt1_32         ; 
    float pt2_32         ; 
    float pt3_32         ; 
    float zveto_3l_32    ; 
    float drllmin3l_32   ; 
    float mlll_32        ; 
    float mllmin3l_32    ; 
    float metPfType1_32  ; 
    float ptlll_32       ; 

void initmyreaderBDT(){

  myreaderBDT->AddVariable("minmtw_wh3l ",&minmtw_wh3l_32 );
  myreaderBDT->AddVariable("dphilllmet  ",&dphilllmet_32  );
  myreaderBDT->AddVariable("pTWWW       ",&pTWWW_32       );
  myreaderBDT->AddVariable("mtwww       ",&mtwww_32       );
  myreaderBDT->AddVariable("mindphi_lmet",&mindphi_lmet_32);
  myreaderBDT->AddVariable("pt1         ",&pt1_32         );
  myreaderBDT->AddVariable("pt2         ",&pt2_32         );
  myreaderBDT->AddVariable("pt3         ",&pt3_32         );
  myreaderBDT->AddVariable("zveto_3l    ",&zveto_3l_32    );
  myreaderBDT->AddVariable("drllmin3l   ",&drllmin3l_32   );
  myreaderBDT->AddVariable("mlll        ",&mlll_32        );
  myreaderBDT->AddVariable("mllmin3l    ",&mllmin3l_32    );
  myreaderBDT->AddVariable("metPfType1  ",&metPfType1_32  );
  myreaderBDT->AddVariable("ptlll       ",&ptlll_32       );

  TString direction = "";

 direction = "/afs/cern.ch/work/p/pyu/HWAnalysis/wh3lFull2017/CMSSW_9_4_2/src/PlotsConfigurations/Configurations/WH3l/Full2017BDT/toolkit/BDT/weights/TMVAClassification_BDT.weights.xml";

  cout<<direction<<endl;
  myreaderBDT->BookMVA("BDT",direction);
}

float hww_VBF_mvaBDT(
    float minmtw_wh3l_33 ,
    float dphilllmet_33  ,
    float pTWWW_33       ,
    float mtwww_33       ,
    float mindphi_lmet_33,
    float pt1_33         ,
    float pt2_33         ,
    float pt3_33         ,
    float zveto_3l_33    ,
    float drllmin3l_33   ,
    float mlll_33        ,
    float mllmin3l_33    ,
    float metPfType1_33  ,
    float ptlll_33
             ){
    minmtw_wh3l_32  =  minmtw_wh3l_33 ; 
    dphilllmet_32   =  dphilllmet_33  ;
    pTWWW_32        =  pTWWW_33       ;
    mtwww_32        =  mtwww_33       ;
    mindphi_lmet_32 =  mindphi_lmet_33;
    pt1_32          =  pt1_33         ;
    pt2_32          =  pt2_33         ;
    pt3_32          =  pt3_33         ;
    zveto_3l_32     =  zveto_3l_33    ;
    drllmin3l_32    =  drllmin3l_33   ;
    mlll_32         =  mlll_33        ;
    mllmin3l_32     =  mllmin3l_33    ;
    metPfType1_32   =  metPfType1_33  ;
    ptlll_32        =  ptlll_33       ;

  return  myreaderBDT->EvaluateMVA("BDT");
}   
