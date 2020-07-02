
supercut = '    mll>12 \
            && Lepton_pt[0]>25 \
            && Lepton_pt[1]>10 \
            && (abs(Lepton_pdgId[1])==13 || Lepton_pt[1]>13) \
            && (nLepton>=2 && Alt$(Lepton_pt[2],0)<10) \
            && abs(Lepton_eta[0])<2.5 && abs(Lepton_eta[1])<2.5 \
            && ptll>30 \
            && PuppiMET_pt > 20 \
           '

# Some cuts

dymva0jet = 'dymva_alt_dnn_0j  > 0.945'
dymva1jet = 'dymva_alt_dnn_1j  > 0.900'
dymva2jet = 'dymva_alt_dnn_2j  > 0.960'
dymvaVBF  = 'dymva_alt_dnn_VBF > 0.970'
dymvaVH   = 'dymva_alt_dnn_VH  > 0.825'
dymvahpt  = '('+dymva0jet+' || '+dymva1jet+' || '+dymva2jet+')'
dymvahpt_loose  = '(dymva_alt_dnn_0j > 0.9 || dymva_alt_dnn_1j > 0.9 || dymva_alt_dnn_2j > 0.9 )'

# Higgs Signal Regions: ee/uu * 0/1/2 jet
cuts['hww2l2v_13TeV_0j'] = {
   'expr': 'sr && (Lepton_pdgId[0]==-Lepton_pdgId[1]) && zeroJet && Higgs0jet && pTWW <= 200 && '+dymva0jet,
   'categories' : {
       'ee_pth0_10'       : '(Lepton_pdgId[0]*Lepton_pdgId[1] == -11*11) && pTWW <= 10',
       'mm_pth0_10'       : '(Lepton_pdgId[0]*Lepton_pdgId[1] == -13*13) && pTWW <= 10',
       'ee_pth10_200'     : '(Lepton_pdgId[0]*Lepton_pdgId[1] == -11*11) && pTWW > 10',
       'mm_pth10_200'     : '(Lepton_pdgId[0]*Lepton_pdgId[1] == -13*13) && pTWW > 10',
   }
}
cuts['hww2l2v_13TeV_1j'] = {
   'expr': 'sr && (Lepton_pdgId[0]==-Lepton_pdgId[1]) && oneJet && Higgs1jet && pTWW <= 200 && '+dymva1jet,
   'categories' : {
       'ee_pth0_60'       : '(Lepton_pdgId[0]*Lepton_pdgId[1] == -11*11) && pTWW <= 60',
       'mm_pth0_60'       : '(Lepton_pdgId[0]*Lepton_pdgId[1] == -13*13) && pTWW <= 60',
       'ee_pth60_120'     : '(Lepton_pdgId[0]*Lepton_pdgId[1] == -11*11) && pTWW > 60 && pTWW <= 120',
       'mm_pth60_120'     : '(Lepton_pdgId[0]*Lepton_pdgId[1] == -13*13) && pTWW > 60 && pTWW <= 120',
       'ee_pth120_200'    : '(Lepton_pdgId[0]*Lepton_pdgId[1] == -11*11) && pTWW > 120',
       'mm_pth120_200'    : '(Lepton_pdgId[0]*Lepton_pdgId[1] == -13*13) && pTWW > 120',
   }
}
cuts['hww2l2v_13TeV_2j'] = {
   'expr': 'sr && (Lepton_pdgId[0]==-Lepton_pdgId[1]) && 2jggH && Higgs2jet && pTWW <= 200 && '+dymva2jet,
   'categories' : {
       'ee_mjj0_350_pth0_60'     : '(Lepton_pdgId[0]*Lepton_pdgId[1] == -11*11) && mjj <= 350 && pTWW <= 60',
       'mm_mjj0_350_pth0_60'     : '(Lepton_pdgId[0]*Lepton_pdgId[1] == -13*13) && mjj <= 350 && pTWW <= 60',
       'ee_mjj0_350_pth60_120'   : '(Lepton_pdgId[0]*Lepton_pdgId[1] == -11*11) && mjj <= 350 && pTWW > 60  && pTWW <= 120',
       'mm_mjj0_350_pth60_120'   : '(Lepton_pdgId[0]*Lepton_pdgId[1] == -13*13) && mjj <= 350 && pTWW > 60  && pTWW <= 120',
       'ee_mjj0_350_pth120_200'  : '(Lepton_pdgId[0]*Lepton_pdgId[1] == -11*11) && mjj <= 350 && pTWW > 120 && pTWW <= 200',
       'mm_mjj0_350_pth120_200'  : '(Lepton_pdgId[0]*Lepton_pdgId[1] == -13*13) && mjj <= 350 && pTWW > 120 && pTWW <= 200',
       'ee_mjj350_700_pthjj0_25' : '(Lepton_pdgId[0]*Lepton_pdgId[1] == -11*11) && mjj  > 350 && mjj <= 700 && pTHjj <= 25',
       'mm_mjj350_700_pthjj0_25' : '(Lepton_pdgId[0]*Lepton_pdgId[1] == -13*13) && mjj  > 350 && mjj <= 700 && pTHjj <= 25',
       'ee_mjj350_700_pthjj25'   : '(Lepton_pdgId[0]*Lepton_pdgId[1] == -11*11) && mjj  > 350 && mjj <= 700 && pTHjj  > 25',
       'mm_mjj350_700_pthjj25'   : '(Lepton_pdgId[0]*Lepton_pdgId[1] == -13*13) && mjj  > 350 && mjj <= 700 && pTHjj  > 25',
       'ee_mjj700_pthjj0_25'     : '(Lepton_pdgId[0]*Lepton_pdgId[1] == -11*11) && mjj  > 700 && pTHjj <= 25',
       'mm_mjj700_pthjj0_25'     : '(Lepton_pdgId[0]*Lepton_pdgId[1] == -13*13) && mjj  > 700 && pTHjj <= 25',
       'ee_mjj700_pthjj25'       : '(Lepton_pdgId[0]*Lepton_pdgId[1] == -11*11) && mjj  > 700 && pTHjj  > 25',
       'mm_mjj700_pthjj25'       : '(Lepton_pdgId[0]*Lepton_pdgId[1] == -13*13) && mjj  > 700 && pTHjj  > 25',
   }
}
cuts['hww2l2v_13TeV_hpt'] = {
   'expr': 'sr && (Lepton_pdgId[0]==-Lepton_pdgId[1]) && Higgshpt && pTWW > 200 && '+dymvahpt,
   'categories' : {
       'ee_pth200_300'  : '(Lepton_pdgId[0]*Lepton_pdgId[1] == -11*11) && pTWW <= 300',
       'mm_pth200_300'  : '(Lepton_pdgId[0]*Lepton_pdgId[1] == -13*13) && pTWW <= 300',
       'ee_pth300_450'  : '(Lepton_pdgId[0]*Lepton_pdgId[1] == -11*11) && pTWW > 300 && pTWW <= 450',
       'mm_pth300_450'  : '(Lepton_pdgId[0]*Lepton_pdgId[1] == -13*13) && pTWW > 300 && pTWW <= 450',
       'ee_pth450_650'  : '(Lepton_pdgId[0]*Lepton_pdgId[1] == -11*11) && pTWW > 450 && pTWW <= 650',
       'mm_pth450_650'  : '(Lepton_pdgId[0]*Lepton_pdgId[1] == -13*13) && pTWW > 450 && pTWW <= 650',
       'ee_pth650'      : '(Lepton_pdgId[0]*Lepton_pdgId[1] == -11*11) && pTWW > 650',
       'mm_pth650'      : '(Lepton_pdgId[0]*Lepton_pdgId[1] == -13*13) && pTWW > 650',
   }
}

# Numerator for DY acceptance in Signal region
cuts['hww2l2v_13TeV_HAccNum_0j'] = {
   'expr': 'sr && (Lepton_pdgId[0]==-Lepton_pdgId[1]) && zeroJet && Higgs0jet && pTWW <= 200 && dymva_alt_dnn_0j > 0.9' ,
   'categories' : {
       'ee_pth0_10'       : '(Lepton_pdgId[0]*Lepton_pdgId[1] == -11*11) && pTWW <= 10',
       'mm_pth0_10'       : '(Lepton_pdgId[0]*Lepton_pdgId[1] == -13*13) && pTWW <= 10',
       'ee_pth10_200'     : '(Lepton_pdgId[0]*Lepton_pdgId[1] == -11*11) && pTWW > 10',
       'mm_pth10_200'     : '(Lepton_pdgId[0]*Lepton_pdgId[1] == -13*13) && pTWW > 10',
   }
}
cuts['hww2l2v_13TeV_HAccNum_1j'] = {
   'expr': 'sr && (Lepton_pdgId[0]==-Lepton_pdgId[1]) && oneJet && Higgs1jet && pTWW <= 200 && dymva_alt_dnn_1j > 0.9' ,
   'categories' : {
       'ee_pth0_60'       : '(Lepton_pdgId[0]*Lepton_pdgId[1] == -11*11) && pTWW <= 60',
       'mm_pth0_60'       : '(Lepton_pdgId[0]*Lepton_pdgId[1] == -13*13) && pTWW <= 60',
       'ee_pth60_120'     : '(Lepton_pdgId[0]*Lepton_pdgId[1] == -11*11) && pTWW > 60 && pTWW <= 120',
       'mm_pth60_120'     : '(Lepton_pdgId[0]*Lepton_pdgId[1] == -13*13) && pTWW > 60 && pTWW <= 120',
       'ee_pth120_200'    : '(Lepton_pdgId[0]*Lepton_pdgId[1] == -11*11) && pTWW > 120',
       'mm_pth120_200'    : '(Lepton_pdgId[0]*Lepton_pdgId[1] == -13*13) && pTWW > 120',
   }
}
cuts['hww2l2v_13TeV_HAccNum_2j'] = {
   'expr': 'sr && (Lepton_pdgId[0]==-Lepton_pdgId[1]) && 2jggH && Higgs2jet && pTWW <= 200 && dymva_alt_dnn_2j > 0.9' ,
   'categories' : {
       'ee_mjj0_350_pth0_60'     : '(Lepton_pdgId[0]*Lepton_pdgId[1] == -11*11) && mjj <= 350 && pTWW <= 60',
       'mm_mjj0_350_pth0_60'     : '(Lepton_pdgId[0]*Lepton_pdgId[1] == -13*13) && mjj <= 350 && pTWW <= 60',
       'ee_mjj0_350_pth60_120'   : '(Lepton_pdgId[0]*Lepton_pdgId[1] == -11*11) && mjj <= 350 && pTWW > 60  && pTWW <= 120',
       'mm_mjj0_350_pth60_120'   : '(Lepton_pdgId[0]*Lepton_pdgId[1] == -13*13) && mjj <= 350 && pTWW > 60  && pTWW <= 120',
       'ee_mjj0_350_pth120_200'  : '(Lepton_pdgId[0]*Lepton_pdgId[1] == -11*11) && mjj <= 350 && pTWW > 120 && pTWW <= 200',
       'mm_mjj0_350_pth120_200'  : '(Lepton_pdgId[0]*Lepton_pdgId[1] == -13*13) && mjj <= 350 && pTWW > 120 && pTWW <= 200',
       'ee_mjj350_700_pthjj0_25' : '(Lepton_pdgId[0]*Lepton_pdgId[1] == -11*11) && mjj  > 350 && mjj <= 700 && pTHjj <= 25',
       'mm_mjj350_700_pthjj0_25' : '(Lepton_pdgId[0]*Lepton_pdgId[1] == -13*13) && mjj  > 350 && mjj <= 700 && pTHjj <= 25',
       'ee_mjj350_700_pthjj25'   : '(Lepton_pdgId[0]*Lepton_pdgId[1] == -11*11) && mjj  > 350 && mjj <= 700 && pTHjj  > 25',
       'mm_mjj350_700_pthjj25'   : '(Lepton_pdgId[0]*Lepton_pdgId[1] == -13*13) && mjj  > 350 && mjj <= 700 && pTHjj  > 25',
       'ee_mjj700_pthjj0_25'     : '(Lepton_pdgId[0]*Lepton_pdgId[1] == -11*11) && mjj  > 700 && pTHjj <= 25',
       'mm_mjj700_pthjj0_25'     : '(Lepton_pdgId[0]*Lepton_pdgId[1] == -13*13) && mjj  > 700 && pTHjj <= 25',
       'ee_mjj700_pthjj25'       : '(Lepton_pdgId[0]*Lepton_pdgId[1] == -11*11) && mjj  > 700 && pTHjj  > 25',
       'mm_mjj700_pthjj25'       : '(Lepton_pdgId[0]*Lepton_pdgId[1] == -13*13) && mjj  > 700 && pTHjj  > 25',
   }
}
cuts['hww2l2v_13TeV_HAccNum_hpt'] = {
   'expr': 'sr && (Lepton_pdgId[0]==-Lepton_pdgId[1]) && Higgshpt && pTWW > 200 && '+dymvahpt_loose,
   'categories' : {
       'ee_pth200_300'  : '(Lepton_pdgId[0]*Lepton_pdgId[1] == -11*11) && pTWW <= 300',
       'mm_pth200_300'  : '(Lepton_pdgId[0]*Lepton_pdgId[1] == -13*13) && pTWW <= 300',
       'ee_pth300_450'  : '(Lepton_pdgId[0]*Lepton_pdgId[1] == -11*11) && pTWW > 300 && pTWW <= 450',
       'mm_pth300_450'  : '(Lepton_pdgId[0]*Lepton_pdgId[1] == -13*13) && pTWW > 300 && pTWW <= 450',
       'ee_pth450_650'  : '(Lepton_pdgId[0]*Lepton_pdgId[1] == -11*11) && pTWW > 450 && pTWW <= 650',
       'mm_pth450_650'  : '(Lepton_pdgId[0]*Lepton_pdgId[1] == -13*13) && pTWW > 450 && pTWW <= 650',
       'ee_pth650'      : '(Lepton_pdgId[0]*Lepton_pdgId[1] == -11*11) && pTWW > 650',
       'mm_pth650'      : '(Lepton_pdgId[0]*Lepton_pdgId[1] == -13*13) && pTWW > 650',
   }
}


## Top CR: No H sel , bTag , tight DYmva
cuts['hww2l2v_13TeV_top']  = {
   'expr' : 'topcr && ZVeto * (Lepton_pdgId[0]==-Lepton_pdgId[1])',
   'categories' : {
      '0j_ee'  : 'pTWW <= 200 && zeroJet && (Lepton_pdgId[0]*Lepton_pdgId[1] == -11*11) && '+dymva0jet,
      '0j_mm'  : 'pTWW <= 200 && zeroJet && (Lepton_pdgId[0]*Lepton_pdgId[1] == -13*13) && '+dymva0jet,
      '1j_ee'  : 'pTWW <= 200 &&  oneJet && (Lepton_pdgId[0]*Lepton_pdgId[1] == -11*11) && '+dymva1jet,
      '1j_mm'  : 'pTWW <= 200 &&  oneJet && (Lepton_pdgId[0]*Lepton_pdgId[1] == -13*13) && '+dymva1jet,
      '2j_ee'  : 'pTWW <= 200 &&   2jggH && (Lepton_pdgId[0]*Lepton_pdgId[1] == -11*11) && '+dymva2jet,
      '2j_mm'  : 'pTWW <= 200 &&   2jggH && (Lepton_pdgId[0]*Lepton_pdgId[1] == -13*13) && '+dymva2jet,
      'hpt_ee' : 'pTWW >  200 &&            (Lepton_pdgId[0]*Lepton_pdgId[1] == -11*11) && '+dymvahpt,
      'hpt_mm' : 'pTWW >  200 &&            (Lepton_pdgId[0]*Lepton_pdgId[1] == -13*13) && '+dymvahpt,
   }
}

## WW CR: No H Sel , mll>80, tight DYMva
cuts['hww2l2v_13TeV_WW']  = {
   'expr' : 'wwcr * (Lepton_pdgId[0]==-Lepton_pdgId[1])',
   'categories' : {
      '0j_ee'  : 'pTWW <= 200 && zeroJet && (Lepton_pdgId[0]*Lepton_pdgId[1] == -11*11) && '+dymva0jet,
      '0j_mm'  : 'pTWW <= 200 && zeroJet && (Lepton_pdgId[0]*Lepton_pdgId[1] == -13*13) && '+dymva0jet,
      '1j_ee'  : 'pTWW <= 200 &&  oneJet && (Lepton_pdgId[0]*Lepton_pdgId[1] == -11*11) && '+dymva1jet,
      '1j_mm'  : 'pTWW <= 200 &&  oneJet && (Lepton_pdgId[0]*Lepton_pdgId[1] == -13*13) && '+dymva1jet,
      '2j_ee'  : 'pTWW <= 200 &&   2jggH && (Lepton_pdgId[0]*Lepton_pdgId[1] == -11*11) && '+dymva2jet,
      '2j_mm'  : 'pTWW <= 200 &&   2jggH && (Lepton_pdgId[0]*Lepton_pdgId[1] == -13*13) && '+dymva2jet,
      'hpt_ee' : 'pTWW >  200 &&            (Lepton_pdgId[0]*Lepton_pdgId[1] == -11*11) && '+dymvahpt,
      'hpt_mm' : 'pTWW >  200 &&            (Lepton_pdgId[0]*Lepton_pdgId[1] == -13*13) && '+dymvahpt,
   }
}

## DY Background IN with DYMVA>0.9X : Split ee/mm , No H cut !
cuts['hww2l2v_13TeV_DYin']  = {
   'expr' : 'Zpeak && bVeto',
   'categories' : {
      '0j_ee'  : 'pTWW <= 200 && zeroJet && (Lepton_pdgId[0]*Lepton_pdgId[1] == -11*11) && '+dymva0jet,
      '0j_mm'  : 'pTWW <= 200 && zeroJet && (Lepton_pdgId[0]*Lepton_pdgId[1] == -13*13) && '+dymva0jet,
      '0j_df'  : 'pTWW <= 200 && zeroJet && (Lepton_pdgId[0]*Lepton_pdgId[1] == -11*13) && '+dymva0jet,
      '1j_ee'  : 'pTWW <= 200 &&  oneJet && (Lepton_pdgId[0]*Lepton_pdgId[1] == -11*11) && '+dymva1jet,
      '1j_mm'  : 'pTWW <= 200 &&  oneJet && (Lepton_pdgId[0]*Lepton_pdgId[1] == -13*13) && '+dymva1jet,
      '1j_df'  : 'pTWW <= 200 &&  oneJet && (Lepton_pdgId[0]*Lepton_pdgId[1] == -11*13) && '+dymva1jet,
      '2j_ee'  : 'pTWW <= 200 &&   2jggH && (Lepton_pdgId[0]*Lepton_pdgId[1] == -11*11) && '+dymva2jet,
      '2j_mm'  : 'pTWW <= 200 &&   2jggH && (Lepton_pdgId[0]*Lepton_pdgId[1] == -13*13) && '+dymva2jet,
      '2j_df'  : 'pTWW <= 200 &&   2jggH && (Lepton_pdgId[0]*Lepton_pdgId[1] == -11*13) && '+dymva2jet,
      'hpt_ee' : 'pTWW >  200 &&            (Lepton_pdgId[0]*Lepton_pdgId[1] == -11*11) && '+dymvahpt,
      'hpt_mm' : 'pTWW >  200 &&            (Lepton_pdgId[0]*Lepton_pdgId[1] == -13*13) && '+dymvahpt,
      'hpt_df' : 'pTWW >  200 &&            (Lepton_pdgId[0]*Lepton_pdgId[1] == -11*13) && '+dymvahpt,
   }
}

## Acc Denominator
cuts['hww2l2v_13TeV_AccDen']  = {
   'expr' : 'sr * (Lepton_pdgId[0]==-Lepton_pdgId[1])',
   'categories' : {
      '0j_ee'  : 'pTWW <= 200 && zeroJet && (Lepton_pdgId[0]*Lepton_pdgId[1] == -11*11) && dymva_alt_dnn_0j > 0.9',
      '0j_mm'  : 'pTWW <= 200 && zeroJet && (Lepton_pdgId[0]*Lepton_pdgId[1] == -13*13) && dymva_alt_dnn_0j > 0.9',
      '1j_ee'  : 'pTWW <= 200 &&  oneJet && (Lepton_pdgId[0]*Lepton_pdgId[1] == -11*11) && dymva_alt_dnn_1j > 0.9',
      '1j_mm'  : 'pTWW <= 200 &&  oneJet && (Lepton_pdgId[0]*Lepton_pdgId[1] == -13*13) && dymva_alt_dnn_1j > 0.9',
      '2j_ee'  : 'pTWW <= 200 &&   2jggH && (Lepton_pdgId[0]*Lepton_pdgId[1] == -11*11) && dymva_alt_dnn_2j > 0.9',
      '2j_mm'  : 'pTWW <= 200 &&   2jggH && (Lepton_pdgId[0]*Lepton_pdgId[1] == -13*13) && dymva_alt_dnn_2j > 0.9',
      'hpt_ee' : 'pTWW >  200 &&            (Lepton_pdgId[0]*Lepton_pdgId[1] == -11*11) && '+dymvahpt_loose,
      'hpt_mm' : 'pTWW >  200 &&            (Lepton_pdgId[0]*Lepton_pdgId[1] == -13*13) && '+dymvahpt_loose,
   }
}

## WW Acc Numerator: loose dymva + WW sel
cuts['hww2l2v_13TeV_wwAcc']  = {
   'expr' : 'wwcr * (Lepton_pdgId[0]==-Lepton_pdgId[1])',
   'categories' : {
      '0j_ee'  : 'pTWW <= 200 && zeroJet && (Lepton_pdgId[0]*Lepton_pdgId[1] == -11*11) && dymva_alt_dnn_0j > 0.9',
      '0j_mm'  : 'pTWW <= 200 && zeroJet && (Lepton_pdgId[0]*Lepton_pdgId[1] == -13*13) && dymva_alt_dnn_0j > 0.9',
      '1j_ee'  : 'pTWW <= 200 &&  oneJet && (Lepton_pdgId[0]*Lepton_pdgId[1] == -11*11) && dymva_alt_dnn_1j > 0.9',
      '1j_mm'  : 'pTWW <= 200 &&  oneJet && (Lepton_pdgId[0]*Lepton_pdgId[1] == -13*13) && dymva_alt_dnn_1j > 0.9',
      '2j_ee'  : 'pTWW <= 200 &&   2jggH && (Lepton_pdgId[0]*Lepton_pdgId[1] == -11*11) && dymva_alt_dnn_2j > 0.9',
      '2j_mm'  : 'pTWW <= 200 &&   2jggH && (Lepton_pdgId[0]*Lepton_pdgId[1] == -13*13) && dymva_alt_dnn_2j > 0.9',
      'hpt_ee' : 'pTWW >  200 &&            (Lepton_pdgId[0]*Lepton_pdgId[1] == -11*11) && '+dymvahpt_loose,
      'hpt_mm' : 'pTWW >  200 &&            (Lepton_pdgId[0]*Lepton_pdgId[1] == -13*13) && '+dymvahpt_loose,
   }
} 
