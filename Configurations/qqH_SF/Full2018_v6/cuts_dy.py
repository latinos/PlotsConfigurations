
supercut = '    mll>12 \
            && Lepton_pt[0]>25 \
            && Lepton_pt[1]>10 \
            && (abs(Lepton_pdgId[1])==13 || Lepton_pt[1]>13) \
            && (nLepton>=2 && Alt$(Lepton_pt[2],0)<10) \
            && abs(Lepton_eta[0])<2.5 && abs(Lepton_eta[1])<2.5 \
            && ptll>30 \
            && PuppiMET_pt > 20 \
           '

# Higgs Signal Regions: ee/uu * 0/1/2 jet
cuts['hww2l2v_13TeV'] = {
   'expr': 'sr && (Lepton_pdgId[0]==-Lepton_pdgId[1]) && multiJet' ,
   'categories' : {
       '2j_vh_ee'   : ' 2jVH && (Lepton_pdgId[0]*Lepton_pdgId[1] == -11*11) && Higgsvh',
       '2j_vh_mm'   : ' 2jVH && (Lepton_pdgId[0]*Lepton_pdgId[1] == -13*13) && Higgsvh',
       '2j_vbf_ee'  : '2jVBF && (Lepton_pdgId[0]*Lepton_pdgId[1] == -11*11) && Higgsvbf',
       '2j_vbf_mm'  : '2jVBF && (Lepton_pdgId[0]*Lepton_pdgId[1] == -13*13) && Higgsvbf',
   }
}

# Numerator for DY acceptance in Signal region
cuts['hww2l2v_13TeV_HAccNum'] = {
   'expr': 'sr && (Lepton_pdgId[0]==-Lepton_pdgId[1]) && multiJet' ,
   'categories' : {
       '2j_vh_ee'   : ' 2jVH && (Lepton_pdgId[0]*Lepton_pdgId[1] == -11*11) && Higgsvh && dymva_alt_dnn_VH > 0.8',
       '2j_vh_mm'   : ' 2jVH && (Lepton_pdgId[0]*Lepton_pdgId[1] == -13*13) && Higgsvh && dymva_alt_dnn_VH > 0.8',
       '2j_vbf_ee'  : '2jVBF && (Lepton_pdgId[0]*Lepton_pdgId[1] == -11*11) && Higgsvbf  && dymva_alt_dnn_VBF > 0.9',
       '2j_vbf_mm'  : '2jVBF && (Lepton_pdgId[0]*Lepton_pdgId[1] == -13*13) && Higgsvbf  && dymva_alt_dnn_VBF > 0.9',
   }
}


## Top CR: No H sel , bTag , tight DYmva
cuts['hww2l2v_13TeV_top']  = {
   'expr' : 'topcr && ZVeto * (Lepton_pdgId[0]==-Lepton_pdgId[1]) && multiJet',
   'categories' : {
      '2j_vh_ee'  : ' 2jVH && (Lepton_pdgId[0]*Lepton_pdgId[1] == -11*11)',
      '2j_vh_mm'  : ' 2jVH && (Lepton_pdgId[0]*Lepton_pdgId[1] == -13*13)',
      '2j_vbf_ee' : '2jVBF && (Lepton_pdgId[0]*Lepton_pdgId[1] == -11*11)',
      '2j_vbf_mm' : '2jVBF && (Lepton_pdgId[0]*Lepton_pdgId[1] == -13*13)',
   }
}

## WW CR: No H Sel , mll>80, tight DYMva
cuts['hww2l2v_13TeV_WW']  = {
   'expr' : 'wwcr * (Lepton_pdgId[0]==-Lepton_pdgId[1]) && multiJet',
   'categories' : {
      '2j_vh_ee'  : '2jVH && (Lepton_pdgId[0]*Lepton_pdgId[1] == -11*11)',
      '2j_vh_mm'  : '2jVH && (Lepton_pdgId[0]*Lepton_pdgId[1] == -13*13)',
      '2j_vbf_ee' : '2jVBF && (Lepton_pdgId[0]*Lepton_pdgId[1] == -11*11)',
      '2j_vbf_mm' : '2jVBF && (Lepton_pdgId[0]*Lepton_pdgId[1] == -13*13)',
   }
}

## DY Background IN with DYMVA>0.9X : Split ee/mm , No H cut !
cuts['hww2l2v_13TeV_DYin']  = {
   'expr' : 'Zpeak && bVeto && multiJet',
   'categories' : {
      '2j_vh_ee'  : '2jVH  && (Lepton_pdgId[0]*Lepton_pdgId[1] == -11*11)',
      '2j_vh_mm'  : '2jVH  && (Lepton_pdgId[0]*Lepton_pdgId[1] == -13*13)',
      '2j_vh_df'  : '2jVH  && (Lepton_pdgId[0]*Lepton_pdgId[1] == -11*13)',
      '2j_vbf_ee' : '2jVBF && (Lepton_pdgId[0]*Lepton_pdgId[1] == -11*11)',
      '2j_vbf_mm' : '2jVBF && (Lepton_pdgId[0]*Lepton_pdgId[1] == -13*13)',
      '2j_vbf_df' : '2jVBF && (Lepton_pdgId[0]*Lepton_pdgId[1] == -11*13)',
   }
}

## Acc Denominator
cuts['hww2l2v_13TeV_AccDen']  = {
   'expr' : 'sr * (Lepton_pdgId[0]==-Lepton_pdgId[1]) && multiJet',
   'categories' : {
      '2j_vh_ee'  : '2jVH  && (Lepton_pdgId[0]*Lepton_pdgId[1] == -11*11) && dymva_alt_dnn_VH > 0.8',
      '2j_vh_mm'  : '2jVH  && (Lepton_pdgId[0]*Lepton_pdgId[1] == -13*13) && dymva_alt_dnn_VH > 0.8',
      '2j_vbf_ee' : '2jVBF && (Lepton_pdgId[0]*Lepton_pdgId[1] == -11*11) && dymva_alt_dnn_VBF > 0.9',
      '2j_vbf_mm' : '2jVBF && (Lepton_pdgId[0]*Lepton_pdgId[1] == -13*13) && dymva_alt_dnn_VBF > 0.9',
   }
}

## WW Acc Numerator: loose dymva + WW sel
cuts['hww2l2v_13TeV_wwAcc']  = {
   'expr' : 'wwcr * (Lepton_pdgId[0]==-Lepton_pdgId[1]) && multiJet',
   'categories' : {
      '2j_vh_ee'  : '2jVH  && (Lepton_pdgId[0]*Lepton_pdgId[1] == -11*11) && dymva_alt_dnn_VH > 0.8',
      '2j_vh_mm'  : '2jVH  && (Lepton_pdgId[0]*Lepton_pdgId[1] == -13*13) && dymva_alt_dnn_VH > 0.8',
      '2j_vbf_ee' : '2jVBF && (Lepton_pdgId[0]*Lepton_pdgId[1] == -11*11) && dymva_alt_dnn_VBF > 0.9',
      '2j_vbf_mm' : '2jVBF && (Lepton_pdgId[0]*Lepton_pdgId[1] == -13*13) && dymva_alt_dnn_VBF > 0.9',
   }
} 
