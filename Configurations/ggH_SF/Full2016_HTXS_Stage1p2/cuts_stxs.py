
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

dymva0jet = 'hww_DYmvaDNN_0j(Entry$) > 0.970'
dymva1jet = 'hww_DYmvaDNN_1j(Entry$) > 0.970'
dymva2jet = 'hww_DYmvaDNN_2j(Entry$) > 0.900'
dymvaVBF  = 'hww_DYmvaDNN_VBF(Entry$)> 0.910'
dymvaVH   = 'hww_DYmvaDNN_VBF(Entry$)> 0.845'

# Higgs Signal Regions: ee/uu * 0/1/2 jet
cuts['hww2l2v_13TeV'] = {
   'expr': 'sr * (Lepton_pdgId[0]==-Lepton_pdgId[1])' ,
   'categories' : {
       'sf0j_pth0_10' : ' zeroJet && pTWW <= 10 && Higgs0jet && '+dymva0jet,
       'sf0j_pth10_200' : ' zeroJet && pTWW > 10 && pTWW <= 200 && Higgs0jet && '+dymva0jet,
       'sf1j_pth0_60' : ' oneJet && Alt$(CleanJet_pt[1],0)<30 && pTWW <= 60 && Higgs1jet && '+dymva1jet,
       'sf1j_pth60_120' : ' oneJet && Alt$(CleanJet_pt[1],0)<30 && pTWW > 60 && pTWW <= 120 && Higgs1jet && '+dymva1jet,
       'sf1j_pth120_200' : ' oneJet && Alt$(CleanJet_pt[1],0)<30 && pTWW > 120 && pTWW <= 200 && Higgs1jet && '+dymva1jet,
       'sf2j_lowmjj_pth0_60' : ' multiJet && mjj<350 && pTWW <= 60 && Higgs2jet && '+dymva2jet,
       'sf2j_lowmjj_pth60_120' : ' multiJet && mjj<=350 && pTWW > 60 && pTWW <= 120 && Higgs2jet && '+dymva2jet,
       'sf2j_lowmjj_pth120_200' : ' multiJet && mjj<=350 && pTWW > 120 && pTWW <= 200 && Higgs2jet && '+dymva2jet,
       'sf2j_mjj350_700_pthjj0_25' : ' multiJet && mjj > 350 && mjj <= 700 && pTHjj <=25 && pTWW <= 200 && Higgs2jet && '+dymva2jet,
       'sf2j_mjj350_700_pthjjGT25' : ' multiJet && mjj > 350 && mjj <= 700 && pTHjj  >25 && pTWW <= 200 && Higgs2jet && '+dymva2jet,
       'sf2j_mjjGT700_pthjj0_25' : ' multiJet && mjj > 700 && pTHjj <=25 && pTWW <= 200 && Higgs2jet && '+dymva2jet,
       'sf2j_mjjGT700_pthjjGT25' : ' multiJet && mjj > 700 && pTHjj > 25 && pTWW <= 200 && Higgs2jet && '+dymva2jet,
       'sf_pth200_300' : ' pTWW > 200 && pTWW <= 300 ',
       'sf_pth300_450' : ' pTWW > 300 && pTWW <= 450 ',
       'sf_pth450_650' : ' pTWW > 450 && pTWW <= 650 ',
       'sf_pthGT650' : ' pTWW > 650 ',
   }
}


## Top CR: No H sel , bTag , tight DYmva
cuts['hww2l2v_13TeV_top']  = {
   'expr' : 'topcr && ZVeto',
   'categories' : {
      '0j' : 'zeroJet && '+dymva0jet,
      '1j' : 'oneJet && '+dymva1jet,
      '2j' : 'multiJet && '+dymva2jet,
   }
}

## WW CR: No H Sel , mll>80, tight DYMva
cuts['hww2l2v_13TeV_WW']  = {
   'expr' : 'wwcr',
   'categories' : {
      '0j' : 'zeroJet && '+dymva0jet,
      '1j' : 'oneJet && '+dymva1jet,
      '2j' : 'multiJet && '+dymva2jet,
   }
}
## DY Background IN with DYMVA>0.9X : Split ee/mm , No H cut !
'''
cuts['hww2l2v_13TeV_2016_DYin_0jee'] = '(Lepton_pdgId[0]*Lepton_pdgId[1] == -11*11) && zeroJet && Zpeak && bVeto \
                             && '+dymva0jet+' \
                             '
cuts['hww2l2v_13TeV_2016_DYin_1jee'] = '(Lepton_pdgId[0]*Lepton_pdgId[1] == -11*11) && oneJet && Zpeak && bVeto \
                             && '+dymva1jet+' \
                             '
cuts['hww2l2v_13TeV_2016_DYin_0jmm'] = '(Lepton_pdgId[0]*Lepton_pdgId[1] == -13*13) && zeroJet && Zpeak && bVeto \
                             && '+dymva0jet+' \
                             '
cuts['hww2l2v_13TeV_2016_DYin_1jmm'] = '(Lepton_pdgId[0]*Lepton_pdgId[1] == -13*13) && oneJet && Zpeak && bVeto \
                             && '+dymva1jet+' \
                             '
cuts['hww2l2v_13TeV_2016_DYin_0jdf_ee'] = '(Lepton_pdgId[0]*Lepton_pdgId[1] == -11*13) && zeroJet && Zpeak && bVeto \
                             && '+dymva0jet+' \
                             '
cuts['hww2l2v_13TeV_2016_DYin_1jdf_ee'] = '(Lepton_pdgId[0]*Lepton_pdgId[1] == -11*13) && oneJet && Zpeak && bVeto \
                             && '+dymva1jet+' \
                             '
cuts['hww2l2v_13TeV_2016_DYin_0jdf_mm'] = '(Lepton_pdgId[0]*Lepton_pdgId[1] == -11*13) && zeroJet && Zpeak && bVeto \
                             && '+dymva0jet+' \
                             '
cuts['hww2l2v_13TeV_2016_DYin_1jdf_mm'] = '(Lepton_pdgId[0]*Lepton_pdgId[1] == -11*13) && oneJet && Zpeak && bVeto \
                             && '+dymva1jet+' \
                             '

## DY Background IN with btag : Split ee/mm , No H cut !
cuts['hww2l2v_13TeV_2016_DYin_btag_0jee'] = '(Lepton_pdgId[0]*Lepton_pdgId[1] == -11*11) && zeroJet && topcr && Zpeak \
                             && '+dymva0jet+' \
                             '
cuts['hww2l2v_13TeV_2016_DYin_btag_0jmm'] = '(Lepton_pdgId[0]*Lepton_pdgId[1] == -13*13) && zeroJet && topcr && Zpeak \
                             && '+dymva0jet+' \
                             '
cuts['hww2l2v_13TeV_2016_DYin_btag_0jdf_ee'] = '(Lepton_pdgId[0]*Lepton_pdgId[1] == -11*13) && zeroJet && topcr && Zpeak \
                             && '+dymva0jet+' \
                             '
cuts['hww2l2v_13TeV_2016_DYin_btag_0jdf_mm'] = '(Lepton_pdgId[0]*Lepton_pdgId[1] == -11*13) && zeroJet && topcr && Zpeak \
                             && '+dymva0jet+' \
                             '

## Acc Denominator
cuts['hww2l2v_13TeV_2016_0jee_AccDen'] = '(Lepton_pdgId[0]*Lepton_pdgId[1] == -11*11) && zeroJet && sr && hww_DYmvaDNN_0j(Entry$) > 0.8 \
                             '
cuts['hww2l2v_13TeV_2016_1jee_AccDen'] = '(Lepton_pdgId[0]*Lepton_pdgId[1] == -11*11) && oneJet && sr && hww_DYmvaDNN_1j(Entry$) > 0.8 \
                             '
cuts['hww2l2v_13TeV_2016_0jmm_AccDen'] = '(Lepton_pdgId[0]*Lepton_pdgId[1] == -13*13) && zeroJet && sr && hww_DYmvaDNN_0j(Entry$) > 0.8 \
                             '
cuts['hww2l2v_13TeV_2016_1jmm_AccDen'] = '(Lepton_pdgId[0]*Lepton_pdgId[1] == -13*13) && oneJet && sr && hww_DYmvaDNN_1j(Entry$) > 0.8 \
                             '

## H Acc Numerator: loose dymva + H sel
cuts['hww2l2v_13TeV_2016_0jee_HAccNum_pt2ge20'] = ' (Lepton_pdgId[0]*Lepton_pdgId[1] == -11*11) && zeroJet && sr && Lepton_pt[1]>=20 \
                             && Higgs0jet \
                             && hww_DYmvaDNN_0j(Entry$)>0.8 \
                             '
cuts['hww2l2v_13TeV_2016_0jee_HAccNum_pt2lt20'] = ' (Lepton_pdgId[0]*Lepton_pdgId[1] == -11*11) && zeroJet && sr && Lepton_pt[1]<20 \
                             && Higgs0jet \
                             && hww_DYmvaDNN_0j(Entry$)>0.8 \
                             '
cuts['hww2l2v_13TeV_2016_1jee_HAccNum'] = ' (Lepton_pdgId[0]*Lepton_pdgId[1] == -11*11) && oneJet && sr && Lepton_pt[1]<20 \
                             && Higgs1jet \
                             && hww_DYmvaDNN_1j(Entry$)>0.8 \
                             '
cuts['hww2l2v_13TeV_2016_0jmm_HAccNum_pt2ge20'] = ' (Lepton_pdgId[0]*Lepton_pdgId[1] == -13*13) && zeroJet && sr && Lepton_pt[1]>=20 \
                             && Higgs0jet \
                             && hww_DYmvaDNN_0j(Entry$)>0.8 \
                             '
cuts['hww2l2v_13TeV_2016_0jmm_HAccNum_pt2lt20'] = ' (Lepton_pdgId[0]*Lepton_pdgId[1] == -13*13) && zeroJet && sr && Lepton_pt[1]<20 \
                             && Higgs0jet \
                             && hww_DYmvaDNN_0j(Entry$)>0.8 \
                             '
cuts['hww2l2v_13TeV_2016_1jmm_HAccNum'] = ' (Lepton_pdgId[0]*Lepton_pdgId[1] == -13*13) && oneJet && sr && Lepton_pt[1]<20 \
                             && Higgs1jet \
                             && hww_DYmvaDNN_1j(Entry$)>0.8 \
                             '

## WW Acc Numerator: loose dymva + WW sel
cuts['hww2l2v_13TeV_2016_WW_0jee_WWAccNum'] = '(Lepton_pdgId[0]*Lepton_pdgId[1] == -11*11) && zeroJet && wwcr \
                             && hww_DYmvaDNN_0j(Entry$) > 0.8 \
                             '

cuts['hww2l2v_13TeV_2016_WW_1jee_WWAccNum'] = '(Lepton_pdgId[0]*Lepton_pdgId[1] == -11*11) && oneJet && wwcr \
                             && hww_DYmvaDNN_1j(Entry$) > 0.8 \
                             '

cuts['hww2l2v_13TeV_2016_WW_0jmm_WWAccNum'] = '(Lepton_pdgId[0]*Lepton_pdgId[1] == -13*13) && zeroJet && wwcr \
                             && hww_DYmvaDNN_0j(Entry$) > 0.8 \
                             '

cuts['hww2l2v_13TeV_2016_WW_1jmm_WWAccNum'] = '(Lepton_pdgId[0]*Lepton_pdgId[1] == -13*13) && oneJet && wwcr \
                             && hww_DYmvaDNN_1j(Entry$) > 0.8 \
                             '
'''
