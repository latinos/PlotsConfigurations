
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

dymva0jet = 'hww_DYmvaDNN_0j(Entry$) > 0.975'
dymva1jet = 'hww_DYmvaDNN_1j(Entry$) > 0.970'
dymva2jet = 'hww_DYmvaDNN_2j(Entry$) > 0.965'
dymvaVBF  = 'hww_DYmvaDNN_VBF(Entry$)> 0.965'
dymvaVH   = 'hww_DYmvaDNN_VH(Entry$) > 0.850'

# Higgs Signal Regions: ee/uu * 0/1/2 jet
cuts['hww2l2v_13TeV'] = {
   'expr': 'sr * (Lepton_pdgId[0]==-Lepton_pdgId[1])' ,
   'categories' : {
       'sf0j_ee_pth0_10' : ' zeroJet && (Lepton_pdgId[0]*Lepton_pdgId[1] == -11*11) && pTWW <= 10 && Higgs0jet && '+dymva0jet,
       'sf0j_mm_pth0_10' : ' zeroJet && (Lepton_pdgId[0]*Lepton_pdgId[1] == -13*13) && pTWW <= 10 && Higgs0jet && '+dymva0jet,
       'sf0j_ee_pth10_200' : ' zeroJet && (Lepton_pdgId[0]*Lepton_pdgId[1] == -11*11) && pTWW > 10 && pTWW <= 200 && Higgs0jet && '+dymva0jet,
       'sf0j_mm_pth10_200' : ' zeroJet && (Lepton_pdgId[0]*Lepton_pdgId[1] == -13*13) && pTWW > 10 && pTWW <= 200 && Higgs0jet && '+dymva0jet,
       # Numerator for DY acceptance in Signal region
       'HAccNum_sf0j_ee_pth0_10' : ' zeroJet && (Lepton_pdgId[0]*Lepton_pdgId[1] == -11*11) && pTWW <= 10 && Higgs0jet && hww_DYmvaDNN_0j(Entry$) > 0.8',
       'HAccNum_sf0j_mm_pth0_10' : ' zeroJet && (Lepton_pdgId[0]*Lepton_pdgId[1] == -13*13) && pTWW <= 10 && Higgs0jet && hww_DYmvaDNN_0j(Entry$) > 0.8',
       'HAccNum_sf0j_ee_pth10_200' : ' zeroJet && (Lepton_pdgId[0]*Lepton_pdgId[1] == -11*11) && pTWW > 10 && pTWW <= 200 && Higgs0jet && hww_DYmvaDNN_0j(Entry$) > 0.8',
       'HAccNum_sf0j_mm_pth10_200' : ' zeroJet && (Lepton_pdgId[0]*Lepton_pdgId[1] == -13*13) && pTWW > 10 && pTWW <= 200 && Higgs0jet && hww_DYmvaDNN_0j(Entry$) > 0.8',
   }
}


## Top CR: No H sel , bTag , tight DYmva
cuts['hww2l2v_13TeV_top']  = {
   'expr' : 'topcr && ZVeto',
   'categories' : {
      '0j_ee' : 'zeroJet && (Lepton_pdgId[0]*Lepton_pdgId[1] == -11*11) && '+dymva0jet,
      '0j_mm' : 'zeroJet && (Lepton_pdgId[0]*Lepton_pdgId[1] == -13*13) && '+dymva0jet,
   }
}

## WW CR: No H Sel , mll>80, tight DYMva
cuts['hww2l2v_13TeV_WW']  = {
   'expr' : 'wwcr',
   'categories' : {
      '0j_ee' : 'zeroJet && (Lepton_pdgId[0]*Lepton_pdgId[1] == -11*11) && '+dymva0jet,
      '0j_mm' : 'zeroJet && (Lepton_pdgId[0]*Lepton_pdgId[1] == -13*13) && '+dymva0jet,
   }
}

## DY Background IN with DYMVA>0.9X : Split ee/mm , No H cut !
cuts['hww2l2v_13TeV_DYin']  = {
   'expr' : 'Zpeak && bVeto',
   'categories' : {
      '0j_ee' : 'zeroJet && (Lepton_pdgId[0]*Lepton_pdgId[1] == -11*11) && '+dymva0jet,
      '0j_mm' : 'zeroJet && (Lepton_pdgId[0]*Lepton_pdgId[1] == -11*11) && '+dymva0jet,
      '0j_df' : 'zeroJet && (Lepton_pdgId[0]*Lepton_pdgId[1] == -11*13) && '+dymva0jet,
   }
}

## Acc Denominator
cuts['hww2l2v_13TeV_AccDen']  = {
   'expr' : 'sr',
   'categories' : {
      '0j_ee' : 'zeroJet && (Lepton_pdgId[0]*Lepton_pdgId[1] == -11*11) && hww_DYmvaDNN_0j(Entry$) > 0.8',
      '0j_mm' : 'zeroJet && (Lepton_pdgId[0]*Lepton_pdgId[1] == -13*13) && hww_DYmvaDNN_0j(Entry$) > 0.8',
   }
}

## WW Acc Numerator: loose dymva + WW sel
cuts['hww2l2v_13TeV_wwAcc']  = {
   'expr' : 'wwcr',
   'categories' : {
      '0j_ee' : 'zeroJet && (Lepton_pdgId[0]*Lepton_pdgId[1] == -11*11) && hww_DYmvaDNN_0j(Entry$) > 0.8',
      '0j_mm' : 'zeroJet && (Lepton_pdgId[0]*Lepton_pdgId[1] == -13*13) && hww_DYmvaDNN_0j(Entry$) > 0.8',
   }
} 
