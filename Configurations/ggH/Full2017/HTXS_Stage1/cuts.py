# cuts

supercut = '   mll>12 \
            && Lepton_pt[0]>20 \
            && Lepton_pt[1]>10 \
            && (abs(Lepton_pdgId[0])==13 || Lepton_pt[0]>25) \
            && (abs(Lepton_pdgId[1])==13 || Lepton_pt[1]>13) \
            && (nLepton>=2 && Alt$(Lepton_pt[2],0)<10) \
            && abs(Lepton_eta[0])<2.5 && abs(Lepton_eta[1])<2.5 \
            && ptll>30 \
            && PuppiMET_pt > 20 \
            && (Lepton_pdgId[0]*Lepton_pdgId[1] == -11*13) \
           '

'''
## Signal regions
cuts['hww2l2v_13TeV'] = {
   'expr': 'sr',
    # Define the sub-categorization of sr
   'categories' : {
      'em_pm_0j_pt2ge20' : ' Lepton_pdgId[0]==-11 && Lepton_pt[1]>=20 && zeroJet',
      'em_mp_0j_pt2ge20' : ' Lepton_pdgId[0]==11 && Lepton_pt[1]>=20 && zeroJet',
      'me_mp_0j_pt2ge20' : ' Lepton_pdgId[0]==-13 && Lepton_pt[1]>=20 && zeroJet',
      'me_pm_0j_pt2ge20' : ' Lepton_pdgId[0]==13 && Lepton_pt[1]>=20 && zeroJet',
      #
      'em_pm_0j_pt2lt20' : ' Lepton_pdgId[0]==-11 && Lepton_pt[1]<20 && zeroJet',
      'em_mp_0j_pt2lt20' : ' Lepton_pdgId[0]==11 && Lepton_pt[1]<20 && zeroJet',
      'me_mp_0j_pt2lt20' : ' Lepton_pdgId[0]==-13 && Lepton_pt[1]<20 && zeroJet',
      'me_pm_0j_pt2lt20' : ' Lepton_pdgId[0]==13 && Lepton_pt[1]<20 && zeroJet',
      #
      'em_pm_1j_pt2ge20' : ' Lepton_pdgId[0]==-11 && Lepton_pt[1]>=20 && oneJet && Alt$(CleanJet_pt[1],0)<30',
      'em_mp_1j_pt2ge20' : ' Lepton_pdgId[0]==11 && Lepton_pt[1]>=20 && oneJet && Alt$(CleanJet_pt[1],0)<30',
      'me_mp_1j_pt2ge20' : ' Lepton_pdgId[0]==-13 && Lepton_pt[1]>=20 && oneJet && Alt$(CleanJet_pt[1],0)<30',
      'me_pm_1j_pt2ge20' : ' Lepton_pdgId[0]==13 && Lepton_pt[1]>=20 && oneJet && Alt$(CleanJet_pt[1],0)<30',
      #
      'em_pm_1j_pt2lt20' : ' Lepton_pdgId[0]==-11 && Lepton_pt[1]<20 && oneJet && Alt$(CleanJet_pt[1],0)<30',
      'em_mp_1j_pt2lt20' : ' Lepton_pdgId[0]==11 && Lepton_pt[1]<20 && oneJet && Alt$(CleanJet_pt[1],0)<30',
      'me_mp_1j_pt2lt20' : ' Lepton_pdgId[0]==-13 && Lepton_pt[1]<20 && oneJet && Alt$(CleanJet_pt[1],0)<30',
      'me_pm_1j_pt2lt20' : ' Lepton_pdgId[0]==13 && Lepton_pt[1]<20 && oneJet && Alt$(CleanJet_pt[1],0)<30',
      # FIXME fix the mjj or additional cuts to make this orthogonal to VH2j and VBF
      '2j'               : ' mjj<400 && multiJet', 
   }
}

'''
## Signal regions
cuts['hww2l2v_13TeV'] = {
   'expr': 'sr',
    # Define the sub-categorization of sr
   'categories' : {
       'hww2l2v_13TeV_of0j_pth0-10' : ' mth>60 \
                               && mtw2>30 \
                               && Alt$(CleanJet_pt[0],0)<30 \
                               && bVeto \
                               && pTWW <= 10 ',
       'hww2l2v_13TeV_of0j_pth10-200' : ' mth>60 \
                               && mtw2>30 \
                               && Alt$(CleanJet_pt[0],0)<30 \
                               && bVeto \
                               && pTWW > 10 \
                               && pTWW <= 200 ',
       'hww2l2v_13TeV_of1j_pth0-60' : ' mth>60 \
                               && mtw2>30 \
                               && Alt$(CleanJet_pt[0],0)>30 \
                               && Alt$(CleanJet_pt[1],0)<30 \
                               && bVeto \
                               && pTWW <= 60 ',
       'hww2l2v_13TeV_of1j_pth60-120' : ' mth>60 \
                               && mtw2>30 \
                               && Alt$(CleanJet_pt[0],0)>30 \
                               && Alt$(CleanJet_pt[1],0)<30 \
                               && bVeto \
                               && pTWW > 60 \
                               && pTWW <= 120 ',
       'hww2l2v_13TeV_of1j_pth120-200' : ' mth>60 \
                               && mtw2>30 \
                               && Alt$(CleanJet_pt[0],0)>30 \
                               && Alt$(CleanJet_pt[1],0)<30 \
                               && bVeto \
                               && pTWW > 120 \
                               && pTWW <= 200 ',
       'hww2l2v_13TeV_of2j_lowmjj_pth0-60' : ' mth>60 \
                               && mtw2>30 \
                               && mjj<350 \
                               && Alt$(CleanJet_pt[0],0)>30 \
                               && Alt$(CleanJet_pt[1],0)>30 \
                               && Alt$(CleanJet_pt[2],0)<30 \
                               && bVeto \
                               && pTWW <= 60 ',
       'hww2l2v_13TeV_of2j_lowmjj_pth60-120' : ' mth>60 \
                               && mtw2>30 \
                               && mjj<350 \
                               && Alt$(CleanJet_pt[0],0)>30 \
                               && Alt$(CleanJet_pt[1],0)>30 \
                               && Alt$(CleanJet_pt[2],0)<30 \
                               && bVeto \
                               && pTWW > 60 \
                               && pTWW <= 120 ',
       'hww2l2v_13TeV_of2j_lowmjj_pth120-200' : ' mth>60 \
                               && mtw2>30 \
                               && mjj<350 \
                               && Alt$(CleanJet_pt[0],0)>30 \
                               && Alt$(CleanJet_pt[1],0)>30 \
                               && Alt$(CleanJet_pt[2],0)<30 \
                               && bVeto \
                               && pTWW > 120 \
                               && pTWW <= 200 ',
       'hww2l2v_13TeV_of2j_mjj350-750' : ' mth>60 \
                               && mtw2>30 \
                               && Alt$(CleanJet_pt[0],0)>30 \
                               && Alt$(CleanJet_pt[1],0)>30 \
                               && mjj > 350 \
                               && mjj < 700 \
                               && bVeto ',
   }
}

'''
## Top control regions
cuts['hww2l2v_13TeV_top']  = { 
   'expr' : 'topcr',
    # Define the sub-categorization of topcr
   'categories' : {
      '0j' : 'zeroJet',
      '1j' : 'oneJet && Alt$(CleanJet_pt[1],0)<30',
      '2j' : 'mjj<400 && multiJet',
   }
}

## DYtt control regions
cuts['hww2l2v_13TeV_dytt']  = { 
   'expr' : 'dycr',
   # Define the sub-categorization of dycr
   'categories' : { 
      '0j' : 'zeroJet',
      '1j' : 'oneJet && Alt$(CleanJet_pt[1],0)<30',
      '2j' : 'mjj<400 && multiJet',
   }
}
'''
