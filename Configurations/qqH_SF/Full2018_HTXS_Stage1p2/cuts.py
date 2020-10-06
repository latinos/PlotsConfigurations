## supercut
supercut = '   mll > 12 \
            && Lepton_pt[0] > 25 \
            && Lepton_pt[1] > 10 \
            && (abs(Lepton_pdgId[1]) == 13 || Lepton_pt[1] > 13) \
            && (Lepton_pdgId[0] == -Lepton_pdgId[1]) \
            && (nLepton >= 2 && Alt$(Lepton_pt[2],0) < 10) \
            && abs(Lepton_eta[0]) < 2.5 && abs(Lepton_eta[1]) < 2.5 \
            && ptll > 30 \
            && PuppiMET_pt > 20 \
            && multiJet \
           '

## DYMVA cuts
dymvaVH  = 'dymva_alt_dnn_VH  > 0.825'
dymvaVBF = 'dymva_alt_dnn_VBF > 0.970'


## HWW signal region        - split based on STXS Stage 1.2 EWK qqH definition
## HAccNum (DY numerator)   - split based on STXS Stage 1.2 EWK qqH definition
## wwAcc   (WW numerator)   - split in VH, VBF and high pt regions
## AccDen  (DY denominator) - split in VH, VBF and high pt regions
## DYin    (DY peak)        - split in VH, VBF and high pt regions
## top control region       - split in VH, VBF and high pt regions
## WW  control region       - split in VH, VBF and high pt regions


## Higgs signal region
cuts['hww2l2v_13TeV'] = {
   'expr': 'sr && Higgs_qq && multiJet' ,
   'categories' : {
       # 65 < mjj < 105
       '2j_mjj65_105_ee'           : 'mjj >= 65 && mjj <= 105 && (Lepton_pdgId[0]*Lepton_pdgId[1] == -11*11) && ' +dymvaVH,
       '2j_mjj65_105_mm'           : 'mjj >= 65 && mjj <= 105 && (Lepton_pdgId[0]*Lepton_pdgId[1] == -13*13) && ' +dymvaVH,
       # 350 < mjj < 700, pTH < 200
       '2j_mjj350_700_pthLT200_ee' : 'mjj > 350 && mjj <= 700 && pTWW <= 200 && (Lepton_pdgId[0]*Lepton_pdgId[1] == -11*11) && ' +dymvaVBF,
       '2j_mjj350_700_pthLT200_mm' : 'mjj > 350 && mjj <= 700 && pTWW <= 200 && (Lepton_pdgId[0]*Lepton_pdgId[1] == -13*13) && ' +dymvaVBF,
       # mjj > 700, pTH < 200
       '2j_mjjGT700_pthLT200_ee'   : 'mjj > 700 && pTWW <= 200 && (Lepton_pdgId[0]*Lepton_pdgId[1] == -11*11) && ' +dymvaVBF,
       '2j_mjjGT700_pthLT200_mm'   : 'mjj > 700 && pTWW <= 200 && (Lepton_pdgId[0]*Lepton_pdgId[1] == -13*13) && ' +dymvaVBF,
       # mjj > 350, pTH > 200
       '2j_mjjGT350_pthGT200_ee'   : 'mjj > 350 && pTWW >  200 && (Lepton_pdgId[0]*Lepton_pdgId[1] == -11*11) && ' +dymvaVBF,
       '2j_mjjGT350_pthGT200_mm'   : 'mjj > 350 && pTWW >  200 && (Lepton_pdgId[0]*Lepton_pdgId[1] == -13*13) && ' +dymvaVBF,
   }
}

## Numerator for DY acceptance in signal region
cuts['hww2l2v_13TeV_HAccNum'] = {
   'expr': 'sr && Higgs_qq && multiJet' ,
   'categories' : {
       # 65 < mjj < 105
       '2j_mjj65_105_ee'           : 'mjj >= 65 && mjj <= 105 && (Lepton_pdgId[0]*Lepton_pdgId[1] == -11*11) && dymva_alt_dnn_VH > 0.8',
       '2j_mjj65_105_mm'           : 'mjj >= 65 && mjj <= 105 && (Lepton_pdgId[0]*Lepton_pdgId[1] == -13*13) && dymva_alt_dnn_VH > 0.8',
       # 350 < mjj < 700, pTH < 200
       '2j_mjj350_700_pthLT200_ee' : 'mjj > 350 && mjj <= 700 && pTWW <= 200 && (Lepton_pdgId[0]*Lepton_pdgId[1] == -11*11) && dymva_alt_dnn_VBF > 0.9',
       '2j_mjj350_700_pthLT200_mm' : 'mjj > 350 && mjj <= 700 && pTWW <= 200 && (Lepton_pdgId[0]*Lepton_pdgId[1] == -13*13) && dymva_alt_dnn_VBF > 0.9',
       # mjj > 700, pTH < 200
       '2j_mjjGT700_pthLT200_ee'   : 'mjj > 700 && pTWW <= 200 && (Lepton_pdgId[0]*Lepton_pdgId[1] == -11*11) && dymva_alt_dnn_VBF > 0.9',
       '2j_mjjGT700_pthLT200_mm'   : 'mjj > 700 && pTWW <= 200 && (Lepton_pdgId[0]*Lepton_pdgId[1] == -13*13) && dymva_alt_dnn_VBF > 0.9',
       # mjj > 350, pTH > 200
       '2j_mjjGT350_pthGT200_ee'   : 'mjj > 350 && pTWW >  200 && (Lepton_pdgId[0]*Lepton_pdgId[1] == -11*11) && dymva_alt_dnn_VBF > 0.9',
       '2j_mjjGT350_pthGT200_mm'   : 'mjj > 350 && pTWW >  200 && (Lepton_pdgId[0]*Lepton_pdgId[1] == -13*13) && dymva_alt_dnn_VBF > 0.9',
   }
}

## Top control region
cuts['hww2l2v_13TeV_top']  = {
   'expr' : 'topcr && ZVeto && multiJet',
   'categories' : {
       # 65 < mjj < 105
      '2j_vh_ee'  : 'mjj >= 65 && mjj  <= 105 && (Lepton_pdgId[0]*Lepton_pdgId[1] == -11*11) && ' +dymvaVH,
      '2j_vh_mm'  : 'mjj >= 65 && mjj  <= 105 && (Lepton_pdgId[0]*Lepton_pdgId[1] == -13*13) && ' +dymvaVH,
       # mjj > 350, pTH < 200
      '2j_vbf_ee' : 'mjj > 350 && pTWW <= 200 && (Lepton_pdgId[0]*Lepton_pdgId[1] == -11*11) && ' +dymvaVBF,
      '2j_vbf_mm' : 'mjj > 350 && pTWW <= 200 && (Lepton_pdgId[0]*Lepton_pdgId[1] == -13*13) && ' +dymvaVBF,
       # mjj > 350, pTH > 200
      '2j_hpt_ee' : 'mjj > 350 && pTWW >  200 && (Lepton_pdgId[0]*Lepton_pdgId[1] == -11*11) && ' +dymvaVBF,
      '2j_hpt_mm' : 'mjj > 350 && pTWW >  200 && (Lepton_pdgId[0]*Lepton_pdgId[1] == -13*13) && ' +dymvaVBF,
   }
}

## WW control region
cuts['hww2l2v_13TeV_WW']  = {
   'expr' : 'wwcr && multiJet',
   'categories' : {
       # 65 < mjj < 105
      '2j_vh_ee'  : 'mjj >= 65 && mjj  <= 105 && (Lepton_pdgId[0]*Lepton_pdgId[1] == -11*11) && ' +dymvaVH,
      '2j_vh_mm'  : 'mjj >= 65 && mjj  <= 105 && (Lepton_pdgId[0]*Lepton_pdgId[1] == -13*13) && ' +dymvaVH,
       # mjj > 350, pTH < 200
      '2j_vbf_ee' : 'mjj > 350 && pTWW <= 200 && (Lepton_pdgId[0]*Lepton_pdgId[1] == -11*11) && ' +dymvaVBF,
      '2j_vbf_mm' : 'mjj > 350 && pTWW <= 200 && (Lepton_pdgId[0]*Lepton_pdgId[1] == -13*13) && ' +dymvaVBF,
       # mjj > 350, pTH > 200
      '2j_hpt_ee' : 'mjj > 350 && pTWW >  200 && (Lepton_pdgId[0]*Lepton_pdgId[1] == -11*11) && ' +dymvaVBF,
      '2j_hpt_mm' : 'mjj > 350 && pTWW >  200 && (Lepton_pdgId[0]*Lepton_pdgId[1] == -13*13) && ' +dymvaVBF,
   }
}

## WW acceptance numerator
cuts['hww2l2v_13TeV_wwAcc']  = {
   'expr' : 'wwcr && multiJet',
   'categories' : {
       # 65 < mjj < 105
      '2j_vh_ee'  : 'mjj >= 65 && mjj  <= 105 && (Lepton_pdgId[0]*Lepton_pdgId[1] == -11*11) && dymva_alt_dnn_VH  > 0.8',
      '2j_vh_mm'  : 'mjj >= 65 && mjj  <= 105 && (Lepton_pdgId[0]*Lepton_pdgId[1] == -13*13) && dymva_alt_dnn_VH  > 0.8',
       # mjj > 350, pTH < 200
      '2j_vbf_ee' : 'mjj > 350 && pTWW <= 200 && (Lepton_pdgId[0]*Lepton_pdgId[1] == -11*11) && dymva_alt_dnn_VBF > 0.9',
      '2j_vbf_mm' : 'mjj > 350 && pTWW <= 200 && (Lepton_pdgId[0]*Lepton_pdgId[1] == -13*13) && dymva_alt_dnn_VBF > 0.9',
       # mjj > 350, pTH > 200
      '2j_hpt_ee' : 'mjj > 350 && pTWW >  200 && (Lepton_pdgId[0]*Lepton_pdgId[1] == -11*11) && dymva_alt_dnn_VBF > 0.9',
      '2j_hpt_mm' : 'mjj > 350 && pTWW >  200 && (Lepton_pdgId[0]*Lepton_pdgId[1] == -13*13) && dymva_alt_dnn_VBF > 0.9',
   }
} 

## Denominator for DY acceptance in signal region
cuts['hww2l2v_13TeV_AccDen']  = {
   'expr' : 'sr && multiJet',
   'categories' : {
       # 65 < mjj < 105
      '2j_vh_ee'  : 'mjj >= 65 && mjj  <= 105 && (Lepton_pdgId[0]*Lepton_pdgId[1] == -11*11) && dymva_alt_dnn_VH  > 0.8',
      '2j_vh_mm'  : 'mjj >= 65 && mjj  <= 105 && (Lepton_pdgId[0]*Lepton_pdgId[1] == -13*13) && dymva_alt_dnn_VH  > 0.8',
       # mjj > 350, pTH < 200
      '2j_vbf_ee' : 'mjj > 350 && pTWW <= 200 && (Lepton_pdgId[0]*Lepton_pdgId[1] == -11*11) && dymva_alt_dnn_VBF > 0.9',
      '2j_vbf_mm' : 'mjj > 350 && pTWW <= 200 && (Lepton_pdgId[0]*Lepton_pdgId[1] == -13*13) && dymva_alt_dnn_VBF > 0.9',
       # mjj > 350, pTH > 200
      '2j_hpt_ee' : 'mjj > 350 && pTWW >  200 && (Lepton_pdgId[0]*Lepton_pdgId[1] == -11*11) && dymva_alt_dnn_VBF > 0.9',
      '2j_hpt_mm' : 'mjj > 350 && pTWW >  200 && (Lepton_pdgId[0]*Lepton_pdgId[1] == -13*13) && dymva_alt_dnn_VBF > 0.9',
   }
}

## DY background in the DY peak
cuts['hww2l2v_13TeV_DYin']  = {
   'expr' : 'Zpeak && bVeto && multiJet',
   'categories' : {
       # 65 < mjj < 105
      '2j_vh_ee'  : 'mjj >= 65 && mjj  <= 105 && (Lepton_pdgId[0]*Lepton_pdgId[1] == -11*11) && ' +dymvaVH,
      '2j_vh_mm'  : 'mjj >= 65 && mjj  <= 105 && (Lepton_pdgId[0]*Lepton_pdgId[1] == -13*13) && ' +dymvaVH,
      '2j_vh_df'  : 'mjj >= 65 && mjj  <= 105 && (Lepton_pdgId[0]*Lepton_pdgId[1] == -11*13) && ' +dymvaVH,
       # mjj > 350, pTH < 200
      '2j_vbf_ee' : 'mjj > 350 && pTWW <= 200 && (Lepton_pdgId[0]*Lepton_pdgId[1] == -11*11) && ' +dymvaVBF,
      '2j_vbf_mm' : 'mjj > 350 && pTWW <= 200 && (Lepton_pdgId[0]*Lepton_pdgId[1] == -13*13) && ' +dymvaVBF,
      '2j_vbf_df' : 'mjj > 350 && pTWW <= 200 && (Lepton_pdgId[0]*Lepton_pdgId[1] == -11*13) && ' +dymvaVBF,
       # mjj > 350, pTH > 200
      '2j_hpt_ee' : 'mjj > 350 && pTWW >  200 && (Lepton_pdgId[0]*Lepton_pdgId[1] == -11*11) && ' +dymvaVBF,
      '2j_hpt_mm' : 'mjj > 350 && pTWW >  200 && (Lepton_pdgId[0]*Lepton_pdgId[1] == -13*13) && ' +dymvaVBF,
      '2j_hpt_df' : 'mjj > 350 && pTWW >  200 && (Lepton_pdgId[0]*Lepton_pdgId[1] == -11*13) && ' +dymvaVBF,
   }
}
