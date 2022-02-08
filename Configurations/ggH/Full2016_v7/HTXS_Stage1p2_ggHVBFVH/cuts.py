# cuts

supercut = '   mll>12 \
            && Lepton_pt[0]>25 \
            && Lepton_pt[1]>10 \
            && (nLepton>=2 && Alt$(Lepton_pt[2],0)<10) \
            && abs(Lepton_eta[0])<2.5 && abs(Lepton_eta[1])<2.5 \
            && ptll>30 \
            && (abs(Lepton_pdgId[1] == 13) || Lepton_pt[1]>13) \
            && PuppiMET_pt > 20 \
            && (Lepton_pdgId[0]*Lepton_pdgId[1] == -11*13) \
           '

## Signal regions
cuts['hww2l2v_13TeV'] = {
       'expr': 'sr',
        # Define the sub-categorization of sr
       'categories' : {
           # 350 < mjj < 700 && pTWW < 200
           'of2j_vbflike_mjj350_700_pthLT200' : ' multiJet && mjj > 350 && mjj <= 700 && pTWW<200 && vbflike',
           'of2j_gghlike_mjj350_700_pthLT200' : ' multiJet && mjj > 350 && mjj <= 700 && pTWW<200 && gghlike',
           'of2j_toplike_mjj350_700_pthLT200' : ' multiJet && mjj > 350 && mjj <= 700 && pTWW<200 && toplike',
           'of2j_wwlike_mjj350_700_pthLT200'  : ' multiJet && mjj > 350 && mjj <= 700 && pTWW<200 && wwlike',
           # mjj > 700 && pTWW < 200
           'of2j_vbflike_mjjGT700_pthLT200'   : ' multiJet && mjj > 700 && pTWW<200 && vbflike',
           'of2j_gghlike_mjjGT700_pthLT200'   : ' multiJet && mjj > 700 && pTWW<200 && gghlike',
           'of2j_toplike_mjjGT700_pthLT200'   : ' multiJet && mjj > 700 && pTWW<200 && toplike',
           'of2j_wwlike_mjjGT700_pthLT200'    : ' multiJet && mjj > 700 && pTWW<200 && wwlike',
           # mjj > 350 && pTWW > 200
           'of2j_vbflike_mjjGT350_pthGT200'   : ' multiJet && mjj > 350 && pTWW>200 && vbflike',
           'of2j_gghlike_mjjGT350_pthGT200'   : ' multiJet && mjj > 350 && pTWW>200 && gghlike',
           'of2j_toplike_mjjGT350_pthGT200'   : ' multiJet && mjj > 350 && pTWW>200 && toplike',
           'of2j_wwlike_mjjGT350_pthGT200'    : ' multiJet && mjj > 350 && pTWW>200 && wwlike',
           # pTWW > 200 && ( zeroJet || oneJet || ( multiJet && mjj < 350 && VH veto ) )
           'of_pth200_300'                    : ' pTWW > 200 && pTWW <= 300 && ( zeroJet || (oneJet && Alt$(CleanJet_pt[1],0)<30) || ( multiJet &&  mjj < 350 && (mjj<65 || mjj>105) ) )',
           'of_pthGT300'                      : ' pTWW > 300 && ( zeroJet || (oneJet && Alt$(CleanJet_pt[1],0)<30) || ( multiJet &&  mjj < 350 && (mjj<65 || mjj>105) ) )',
           # mjj < 200 && VH veto && pTWW < 200
           'of2j_pth0_60'                     : ' multiJet && (mjj<65 || mjj>105) && mjj<350 && pTWW <= 60 ',
           'of2j_pth60_120'                   : ' multiJet && (mjj<65 || mjj>105) && mjj<350 && pTWW > 60  && pTWW <= 120 ',
           'of2j_pth120_200'                  : ' multiJet && (mjj<65 || mjj>105) && mjj<350 && pTWW > 120 && pTWW <= 200 ',
           # VH
           'of2j_mjj65_105' : ' multiJet && mjj>=65 && mjj<=105 && drll < 2. && detajj < 3.5',
   }
}


## Top control regions
cuts['hww2l2v_13TeV_top']  = {
   'expr' : 'topcr',
    # Define the sub-categorization of topcr
   'categories' : {
      '2j_vh' : 'multiJet && mjj>=65 && mjj<=105',
      '2j_mjj350_700' : 'multiJet && mjj>350 && mjj<700 && pTWW<200',
      '2j_mjjGT350_pthGT200' : 'multiJet && mjj>350 && pTWW>200',
      '2j_mjjGT700'  : 'multiJet && mjj>700 && pTWW<200',
      '2j_pth0_60'   : 'multiJet && (mjj<65 || mjj>105) && mjj<350 && pTWW <= 60',
      '2j_pth60_120' : 'multiJet && (mjj<65 || mjj>105) && mjj<350 && pTWW > 60  && pTWW <= 120 ',
      '2j_pth120_200' : 'multiJet && (mjj<65 || mjj>105) && mjj<350 && pTWW > 120 && pTWW <= 200 ',
      'pth200_300'    : ' pTWW > 200 && pTWW <= 300 && ( zeroJet || (oneJet && Alt$(CleanJet_pt[1],0)<30) || ( multiJet &&  mjj < 350 && (mjj<65 || mjj>105) ) )',
      'pthGT300'    : ' pTWW > 300 && ( zeroJet || (oneJet && Alt$(CleanJet_pt[1],0)<30) || ( multiJet &&  mjj < 350 && (mjj<65 || mjj>105) ) )',
   }
}

## DYtt control regions
cuts['hww2l2v_13TeV_dytt']  = {
   'expr' : 'dycr',
   # Define the sub-categorization of dycr
   'categories' : {
      '2j_vh' : 'multiJet && mjj>=65 && mjj<=105',
      '2j_mjj350_700' : 'multiJet && mjj>350 && mjj<700 && pTWW<200',
      '2j_mjjGT350_pthGT200' : 'multiJet && mjj>350 && pTWW>200',
      '2j_mjjGT700'  : 'multiJet && mjj>700 && pTWW<200',
      '2j_pth0_60'   : 'multiJet && (mjj<65 || mjj>105) && mjj<350 && pTWW <= 60',
      '2j_pth60_120' : 'multiJet && (mjj<65 || mjj>105) && mjj<350 && pTWW > 60  && pTWW <= 120 ',
      '2j_pth120_200' : 'multiJet && (mjj<65 || mjj>105) && mjj<350 && pTWW > 120 && pTWW <= 200 ',
      'pth200_300'    : ' pTWW > 200 && pTWW <= 300 && ( zeroJet || (oneJet && Alt$(CleanJet_pt[1],0)<30) || ( multiJet &&  mjj < 350 && (mjj<65 || mjj>105) ) )',
      'pthGT300'    : ' pTWW > 300 && ( zeroJet || (oneJet && Alt$(CleanJet_pt[1],0)<30) || ( multiJet &&  mjj < 350 && (mjj<65 || mjj>105) ) )',
   }
}

