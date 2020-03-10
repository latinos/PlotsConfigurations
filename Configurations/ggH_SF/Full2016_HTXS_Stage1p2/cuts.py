
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

dymva0jet = 'dymva_dnn_0j  > 0.975'
dymva1jet = 'dymva_dnn_1j  > 0.975'
dymva2jet = 'dymva_dnn_2j  > 0.965'
dymvaVBF  = 'dymva_dnn_VBF > 0.965'
dymvaVH   = 'dymva_dnn_VH  > 0.850'
dymvahpt  = dymva0jet+' || '+dymva1jet+' || '+dymva2jet+' || '+dymvaVBF+' || '+dymvaVH
dymvahpt_loose  = '(dymva_dnn_0j > 0.8 || dymva_dnn_1j > 0.8 || dymva_dnn_2j > 0.8 || dymva_dnn_VH > 0.8 || dymva_dnn_VBF > 0.8)'

# Higgs Signal Regions: ee/uu * 0/1/2 jet
cuts['hww2l2v_13TeV'] = {
   'expr': 'sr && (Lepton_pdgId[0]==-Lepton_pdgId[1])' ,
   'categories' : {
       '0j_ee_pth0_10'       : ' zeroJet && (Lepton_pdgId[0]*Lepton_pdgId[1] == -11*11) && pTWW <= 10 && Higgs0jet && '+dymva0jet,
       '0j_mm_pth0_10'       : ' zeroJet && (Lepton_pdgId[0]*Lepton_pdgId[1] == -13*13) && pTWW <= 10 && Higgs0jet && '+dymva0jet,
       '0j_ee_pth10_200'     : ' zeroJet && (Lepton_pdgId[0]*Lepton_pdgId[1] == -11*11) && pTWW > 10 && pTWW <= 200 && Higgs0jet && '+dymva0jet,
       '0j_mm_pth10_200'     : ' zeroJet && (Lepton_pdgId[0]*Lepton_pdgId[1] == -13*13) && pTWW > 10 && pTWW <= 200 && Higgs0jet && '+dymva0jet,
       '1j_ee_pth0_60'       : ' oneJet && (Lepton_pdgId[0]*Lepton_pdgId[1] == -11*11) && pTWW <= 60 && Higgs1jet && '+dymva1jet,
       '1j_mm_pth0_60'       : ' oneJet && (Lepton_pdgId[0]*Lepton_pdgId[1] == -13*13) && pTWW <= 60 && Higgs1jet && '+dymva1jet,
       '1j_ee_pth60_120'     : ' oneJet && (Lepton_pdgId[0]*Lepton_pdgId[1] == -11*11) && pTWW > 60 && pTWW <= 120 && Higgs1jet && '+dymva1jet,
       '1j_mm_pth60_120'     : ' oneJet && (Lepton_pdgId[0]*Lepton_pdgId[1] == -13*13) && pTWW > 60 && pTWW <= 120 && Higgs1jet && '+dymva1jet,
       '1j_ee_pth120_200'    : ' oneJet && (Lepton_pdgId[0]*Lepton_pdgId[1] == -11*11) && pTWW > 120 && pTWW <= 200 && Higgs1jet && '+dymva1jet,
       '1j_mm_pth120_200'    : ' oneJet && (Lepton_pdgId[0]*Lepton_pdgId[1] == -13*13) && pTWW > 120 && pTWW <= 200 && Higgs1jet && '+dymva1jet,
       '2j_ee_mjj0_350_pth0_60'     : '2jggH && (Lepton_pdgId[0]*Lepton_pdgId[1] == -11*11) && mjj <= 350 && pTWW <= 60 && Higgs2jet && '+dymva2jet,
       '2j_mm_mjj0_350_pth0_60'     : '2jggH && (Lepton_pdgId[0]*Lepton_pdgId[1] == -13*13) && mjj <= 350 && pTWW <= 60 && Higgs2jet && '+dymva2jet,
       '2j_ee_mjj0_350_pth60_120'   : '2jggH && (Lepton_pdgId[0]*Lepton_pdgId[1] == -11*11) && mjj <= 350 && pTWW > 60  && pTWW <= 120 && Higgs2jet && '+dymva2jet,
       '2j_mm_mjj0_350_pth60_120'   : '2jggH && (Lepton_pdgId[0]*Lepton_pdgId[1] == -13*13) && mjj <= 350 && pTWW > 60  && pTWW <= 120 && Higgs2jet && '+dymva2jet,
       '2j_ee_mjj0_350_pth120_200'  : '2jggH && (Lepton_pdgId[0]*Lepton_pdgId[1] == -11*11) && mjj <= 350 && pTWW > 120 && pTWW <= 200 && Higgs2jet && '+dymva2jet,
       '2j_mm_mjj0_350_pth120_200'  : '2jggH && (Lepton_pdgId[0]*Lepton_pdgId[1] == -13*13) && mjj <= 350 && pTWW > 120 && pTWW <= 200 && Higgs2jet && '+dymva2jet,
       #'2j_ee_mjj350_700_pthjj0_25' : '2jggH && (Lepton_pdgId[0]*Lepton_pdgId[1] == -11*11) && mjj  > 350 && pTWW <= 200 && mjj <= 700 && pTHjj <= 25 && Higgs2jet && '+dymva2jet,
       '2j_ee_mjj350_700_pthjj0_25' : '2jggH && (Lepton_pdgId[0]*Lepton_pdgId[1] == -11*11) && mjj  > 350 && pTWW <= 200 && mjj <= 700 && pTHjj <= 25 && Higgs2jet && dymva_dnn_2j > 0.9',
       '2j_mm_mjj350_700_pthjj0_25' : '2jggH && (Lepton_pdgId[0]*Lepton_pdgId[1] == -13*13) && mjj  > 350 && pTWW <= 200 && mjj <= 700 && pTHjj <= 25 && Higgs2jet && '+dymva2jet,
       '2j_ee_mjj350_700_pthjj25'   : '2jggH && (Lepton_pdgId[0]*Lepton_pdgId[1] == -11*11) && mjj  > 350 && pTWW <= 200 && mjj <= 700 && pTHjj  > 25 && Higgs2jet && '+dymva2jet,
       '2j_mm_mjj350_700_pthjj25'   : '2jggH && (Lepton_pdgId[0]*Lepton_pdgId[1] == -13*13) && mjj  > 350 && pTWW <= 200 && mjj <= 700 && pTHjj  > 25 && Higgs2jet && '+dymva2jet,
       '2j_ee_mjj700_pthjj0_25'     : '2jggH && (Lepton_pdgId[0]*Lepton_pdgId[1] == -11*11) && mjj  > 700 && pTWW <= 200 && pTHjj <= 25 && Higgs2jet && '+dymva2jet,
       '2j_mm_mjj700_pthjj0_25'     : '2jggH && (Lepton_pdgId[0]*Lepton_pdgId[1] == -13*13) && mjj  > 700 && pTWW <= 200 && pTHjj <= 25 && Higgs2jet && '+dymva2jet,
       '2j_ee_mjj700_pthjj25'       : '2jggH && (Lepton_pdgId[0]*Lepton_pdgId[1] == -11*11) && mjj  > 700 && pTWW <= 200 && pTHjj  > 25 && Higgs2jet && '+dymva2jet,
       '2j_mm_mjj700_pthjj25'       : '2jggH && (Lepton_pdgId[0]*Lepton_pdgId[1] == -13*13) && mjj  > 700 && pTWW <= 200 && pTHjj  > 25 && Higgs2jet && '+dymva2jet,
       'hpt_ee_pth200_300'  : '(Lepton_pdgId[0]*Lepton_pdgId[1] == -11*11) && pTWW > 200 && pTWW <= 300 && Higgshpt && '+dymvahpt,
       'hpt_mm_pth200_300'  : '(Lepton_pdgId[0]*Lepton_pdgId[1] == -13*13) && pTWW > 200 && pTWW <= 300 && Higgshpt && '+dymvahpt,
       'hpt_ee_pth300_450'  : '(Lepton_pdgId[0]*Lepton_pdgId[1] == -11*11) && pTWW > 300 && pTWW <= 450 && Higgshpt && '+dymvahpt,
       'hpt_mm_pth300_450'  : '(Lepton_pdgId[0]*Lepton_pdgId[1] == -13*13) && pTWW > 300 && pTWW <= 450 && Higgshpt && '+dymvahpt,
       'hpt_ee_pth450_650'  : '(Lepton_pdgId[0]*Lepton_pdgId[1] == -11*11) && pTWW > 450 && pTWW <= 650 && Higgshpt && '+dymvahpt,
       'hpt_mm_pth450_650'  : '(Lepton_pdgId[0]*Lepton_pdgId[1] == -13*13) && pTWW > 450 && pTWW <= 650 && Higgshpt && '+dymvahpt,
       'hpt_ee_pth650'      : '(Lepton_pdgId[0]*Lepton_pdgId[1] == -11*11) && pTWW > 650 && Higgshpt && '+dymvahpt,
       'hpt_mm_pth650'      : '(Lepton_pdgId[0]*Lepton_pdgId[1] == -13*13) && pTWW > 650 && Higgshpt && '+dymvahpt,
   }
}

# Numerator for DY acceptance in Signal region
cuts['hww2l2v_13TeV_HAccNum'] = {
   'expr': 'sr && (Lepton_pdgId[0]==-Lepton_pdgId[1])' ,
   'categories' : {
       '0j_ee_pth0_10'       : ' zeroJet && (Lepton_pdgId[0]*Lepton_pdgId[1] == -11*11) && pTWW <= 10 && Higgs0jet && dymva_dnn_0j > 0.8',
       '0j_mm_pth0_10'       : ' zeroJet && (Lepton_pdgId[0]*Lepton_pdgId[1] == -13*13) && pTWW <= 10 && Higgs0jet && dymva_dnn_0j > 0.8',
       '0j_ee_pth10_200'     : ' zeroJet && (Lepton_pdgId[0]*Lepton_pdgId[1] == -11*11) && pTWW > 10 && pTWW <= 200 && Higgs0jet && dymva_dnn_0j > 0.8',
       '0j_mm_pth10_200'     : ' zeroJet && (Lepton_pdgId[0]*Lepton_pdgId[1] == -13*13) && pTWW > 10 && pTWW <= 200 && Higgs0jet && dymva_dnn_0j > 0.8',
       '1j_ee_pth0_60'       : ' oneJet && (Lepton_pdgId[0]*Lepton_pdgId[1] == -11*11) && pTWW <= 60 && Higgs1jet && dymva_dnn_1j > 0.8',
       '1j_mm_pth0_60'       : ' oneJet && (Lepton_pdgId[0]*Lepton_pdgId[1] == -13*13) && pTWW <= 60 && Higgs1jet && dymva_dnn_1j > 0.8',
       '1j_ee_pth60_120'     : ' oneJet && (Lepton_pdgId[0]*Lepton_pdgId[1] == -11*11) && pTWW > 60 && pTWW <= 120 && Higgs1jet && dymva_dnn_1j > 0.8',
       '1j_mm_pth60_120'     : ' oneJet && (Lepton_pdgId[0]*Lepton_pdgId[1] == -13*13) && pTWW > 60 && pTWW <= 120 && Higgs1jet && dymva_dnn_1j > 0.8',
       '1j_ee_pth120_200'    : ' oneJet && (Lepton_pdgId[0]*Lepton_pdgId[1] == -11*11) && pTWW > 120 && pTWW <= 200 && Higgs1jet && dymva_dnn_1j > 0.8',
       '1j_mm_pth120_200'    : ' oneJet && (Lepton_pdgId[0]*Lepton_pdgId[1] == -13*13) && pTWW > 120 && pTWW <= 200 && Higgs1jet && dymva_dnn_1j > 0.8',
       '2j_ee_mjj0_350_pth0_60'     : '2jggH && (Lepton_pdgId[0]*Lepton_pdgId[1] == -11*11) && mjj <= 350 && pTWW <= 60 && Higgs2jet && dymva_dnn_2j > 0.8',
       '2j_mm_mjj0_350_pth0_60'     : '2jggH && (Lepton_pdgId[0]*Lepton_pdgId[1] == -13*13) && mjj <= 350 && pTWW <= 60 && Higgs2jet && dymva_dnn_2j > 0.8',
       '2j_ee_mjj0_350_pth60_120'   : '2jggH && (Lepton_pdgId[0]*Lepton_pdgId[1] == -11*11) && mjj <= 350 && pTWW > 60  && pTWW <= 120 && Higgs2jet && dymva_dnn_2j > 0.8',
       '2j_mm_mjj0_350_pth60_120'   : '2jggH && (Lepton_pdgId[0]*Lepton_pdgId[1] == -13*13) && mjj <= 350 && pTWW > 60  && pTWW <= 120 && Higgs2jet && dymva_dnn_2j > 0.8',
       '2j_ee_mjj0_350_pth120_200'  : '2jggH && (Lepton_pdgId[0]*Lepton_pdgId[1] == -11*11) && mjj <= 350 && pTWW > 120 && pTWW <= 200 && Higgs2jet && dymva_dnn_2j > 0.8',
       '2j_mm_mjj0_350_pth120_200'  : '2jggH && (Lepton_pdgId[0]*Lepton_pdgId[1] == -13*13) && mjj <= 350 && pTWW > 120 && pTWW <= 200 && Higgs2jet && dymva_dnn_2j > 0.8',
       '2j_ee_mjj350_700_pthjj0_25' : '2jggH && (Lepton_pdgId[0]*Lepton_pdgId[1] == -11*11) && mjj  > 350 && pTWW <= 200 && mjj <= 700 && pTHjj <= 25 && Higgs2jet && dymva_dnn_2j > 0.8',
       '2j_mm_mjj350_700_pthjj0_25' : '2jggH && (Lepton_pdgId[0]*Lepton_pdgId[1] == -13*13) && mjj  > 350 && pTWW <= 200 && mjj <= 700 && pTHjj <= 25 && Higgs2jet && dymva_dnn_2j > 0.8',
       '2j_ee_mjj350_700_pthjj25'   : '2jggH && (Lepton_pdgId[0]*Lepton_pdgId[1] == -11*11) && mjj  > 350 && pTWW <= 200 && mjj <= 700 && pTHjj  > 25 && Higgs2jet && dymva_dnn_2j > 0.8',
       '2j_mm_mjj350_700_pthjj25'   : '2jggH && (Lepton_pdgId[0]*Lepton_pdgId[1] == -13*13) && mjj  > 350 && pTWW <= 200 && mjj <= 700 && pTHjj  > 25 && Higgs2jet && dymva_dnn_2j > 0.8',
       '2j_ee_mjj700_pthjj0_25'     : '2jggH && (Lepton_pdgId[0]*Lepton_pdgId[1] == -11*11) && mjj  > 700 && pTWW <= 200 && pTHjj <= 25 && Higgs2jet && dymva_dnn_2j > 0.8',
       '2j_mm_mjj700_pthjj0_25'     : '2jggH && (Lepton_pdgId[0]*Lepton_pdgId[1] == -13*13) && mjj  > 700 && pTWW <= 200 && pTHjj <= 25 && Higgs2jet && dymva_dnn_2j > 0.8',
       '2j_ee_mjj700_pthjj25'       : '2jggH && (Lepton_pdgId[0]*Lepton_pdgId[1] == -11*11) && mjj  > 700 && pTWW <= 200 && pTHjj  > 25 && Higgs2jet && dymva_dnn_2j > 0.8',
       '2j_mm_mjj700_pthjj25'       : '2jggH && (Lepton_pdgId[0]*Lepton_pdgId[1] == -13*13) && mjj  > 700 && pTWW <= 200 && pTHjj  > 25 && Higgs2jet && dymva_dnn_2j > 0.8',
       'hpt_ee_pth200_300'  : '(Lepton_pdgId[0]*Lepton_pdgId[1] == -11*11) && pTWW > 200 && pTWW <= 300 && Higgshpt && '+dymvahpt_loose,
       'hpt_mm_pth200_300'  : '(Lepton_pdgId[0]*Lepton_pdgId[1] == -13*13) && pTWW > 200 && pTWW <= 300 && Higgshpt && '+dymvahpt_loose,
       'hpt_ee_pth300_450'  : '(Lepton_pdgId[0]*Lepton_pdgId[1] == -11*11) && pTWW > 300 && pTWW <= 450 && Higgshpt && '+dymvahpt_loose,
       'hpt_mm_pth300_450'  : '(Lepton_pdgId[0]*Lepton_pdgId[1] == -13*13) && pTWW > 300 && pTWW <= 450 && Higgshpt && '+dymvahpt_loose,
       'hpt_ee_pth450_650'  : '(Lepton_pdgId[0]*Lepton_pdgId[1] == -11*11) && pTWW > 450 && pTWW <= 650 && Higgshpt && '+dymvahpt_loose,
       'hpt_mm_pth450_650'  : '(Lepton_pdgId[0]*Lepton_pdgId[1] == -13*13) && pTWW > 450 && pTWW <= 650 && Higgshpt && '+dymvahpt_loose,
       'hpt_ee_pth650'      : '(Lepton_pdgId[0]*Lepton_pdgId[1] == -11*11) && pTWW > 650 && Higgshpt && '+dymvahpt_loose,
       'hpt_mm_pth650'      : '(Lepton_pdgId[0]*Lepton_pdgId[1] == -13*13) && pTWW > 650 && Higgshpt && '+dymvahpt_loose,
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
      '0j_ee'  : 'pTWW <= 200 && zeroJet && (Lepton_pdgId[0]*Lepton_pdgId[1] == -11*11) && dymva_dnn_0j > 0.8',
      '0j_mm'  : 'pTWW <= 200 && zeroJet && (Lepton_pdgId[0]*Lepton_pdgId[1] == -13*13) && dymva_dnn_0j > 0.8',
      '1j_ee'  : 'pTWW <= 200 &&  oneJet && (Lepton_pdgId[0]*Lepton_pdgId[1] == -11*11) && dymva_dnn_1j > 0.8',
      '1j_mm'  : 'pTWW <= 200 &&  oneJet && (Lepton_pdgId[0]*Lepton_pdgId[1] == -13*13) && dymva_dnn_1j > 0.8',
      '2j_ee'  : 'pTWW <= 200 &&   2jggH && (Lepton_pdgId[0]*Lepton_pdgId[1] == -11*11) && dymva_dnn_2j > 0.8',
      '2j_mm'  : 'pTWW <= 200 &&   2jggH && (Lepton_pdgId[0]*Lepton_pdgId[1] == -13*13) && dymva_dnn_2j > 0.8',
      'hpt_ee' : 'pTWW >  200 &&            (Lepton_pdgId[0]*Lepton_pdgId[1] == -11*11) && '+dymvahpt_loose,
      'hpt_mm' : 'pTWW >  200 &&            (Lepton_pdgId[0]*Lepton_pdgId[1] == -13*13) && '+dymvahpt_loose,
   }
}

## WW Acc Numerator: loose dymva + WW sel
cuts['hww2l2v_13TeV_wwAcc']  = {
   'expr' : 'wwcr * (Lepton_pdgId[0]==-Lepton_pdgId[1])',
   'categories' : {
      '0j_ee'  : 'pTWW <= 200 && zeroJet && (Lepton_pdgId[0]*Lepton_pdgId[1] == -11*11) && dymva_dnn_0j > 0.8',
      '0j_mm'  : 'pTWW <= 200 && zeroJet && (Lepton_pdgId[0]*Lepton_pdgId[1] == -13*13) && dymva_dnn_0j > 0.8',
      '1j_ee'  : 'pTWW <= 200 &&  oneJet && (Lepton_pdgId[0]*Lepton_pdgId[1] == -11*11) && dymva_dnn_1j > 0.8',
      '1j_mm'  : 'pTWW <= 200 &&  oneJet && (Lepton_pdgId[0]*Lepton_pdgId[1] == -13*13) && dymva_dnn_1j > 0.8',
      '2j_ee'  : 'pTWW <= 200 &&   2jggH && (Lepton_pdgId[0]*Lepton_pdgId[1] == -11*11) && dymva_dnn_2j > 0.8',
      '2j_mm'  : 'pTWW <= 200 &&   2jggH && (Lepton_pdgId[0]*Lepton_pdgId[1] == -13*13) && dymva_dnn_2j > 0.8',
      'hpt_ee' : 'pTWW >  200 &&            (Lepton_pdgId[0]*Lepton_pdgId[1] == -11*11) && '+dymvahpt_loose,
      'hpt_mm' : 'pTWW >  200 &&            (Lepton_pdgId[0]*Lepton_pdgId[1] == -13*13) && '+dymvahpt_loose,
   }
} 
