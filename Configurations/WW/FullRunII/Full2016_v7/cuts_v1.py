# cuts
supercut = '   mll>12 \
            && Lepton_pt[0]>25 \
            && Lepton_pt[1]>20 \
            && (abs(Lepton_pdgId[1])==13 || Lepton_pt[1]>13) \
            && (nLepton>=2 && Alt$(Lepton_pt[2],0)<10) \
            && abs(Lepton_eta[0])<2.5 && abs(Lepton_eta[1])<2.5 \
            && ptll>30 \
            && PuppiMET_pt > 20 \
            && (Lepton_pdgId[0]*Lepton_pdgId[1] == -11*13) \
           '

## SR 
cuts['ww2l2v_13TeV_incl'] = 'mth > 60 \
                            && mtw2 > 30  \
                            && bVeto \
                         '

## Signal regions
cuts['ww2l2v_13TeV_0j'] = ' mth>60 \
                          && mtw2>30 \
                          && bVeto \
                          && Alt$(CleanJet_pt[0],100)<30 \
                         '

cuts['ww2l2v_13TeV_1j'] = ' mth>60 \
                          && mtw2>30 \
                          && bVeto \
                          && Alt$(CleanJet_pt[0],0)>=30 \
                          && Alt$(CleanJet_pt[1],100)<30 \
                         '

cuts['ww2l2v_13TeV_2j'] = ' mth>60 \
                          && mtw2>30 \
                          && bVeto \
                          && Alt$(CleanJet_pt[0],0)>=30 \
                          && Alt$(CleanJet_pt[1],0)>=30 \
                          && Alt$(CleanJet_pt[2],100)<30 \
                         '

cuts['ww2l2v_13TeV_3j'] = ' mth>60 \
                          && mtw2>30 \
                          && bVeto \
                          && Alt$(CleanJet_pt[0],0)>=30 \
                          && Alt$(CleanJet_pt[1],0)>=30 \
                          && Alt$(CleanJet_pt[2],0)>=30 \
                          && Alt$(CleanJet_pt[3],100)<30 \
                         '

cuts['ww2l2v_13TeV_4j'] = ' mth>60 \
                          && mtw2>30 \
                          && bVeto \
                          && Alt$(CleanJet_pt[0],0)>=30 \
                          && Alt$(CleanJet_pt[1],0)>=30 \
                          && Alt$(CleanJet_pt[2],0)>=30 \
                          && Alt$(CleanJet_pt[3],0)>=30 \
                          && Alt$(CleanJet_pt[4],100)<30 \
                         '

cuts['ww2l2v_13TeV_5j'] = ' mth>60 \
                          && mtw2>30 \
                          && bVeto \
                          && Alt$(CleanJet_pt[0],0)>=30 \
                          && Alt$(CleanJet_pt[1],0)>=30 \
                          && Alt$(CleanJet_pt[2],0)>=30 \
                          && Alt$(CleanJet_pt[3],0)>=30 \
                          && Alt$(CleanJet_pt[4],0)>=30 \
                         '

'''
## Top control regions
cuts['ww2l2v_13TeV_top']  = { 
   'expr' : 'topcr',
    # Define the sub-categorization of topcr
   'categories' : {
      'incl' : '1',
      '0j' : 'zeroJet',
      '1j' : 'oneJet && Alt$(CleanJet_pt[1],0)<30',
      '2j' : 'twoJet && Alt$(CleanJet_pt[2],0)<30',
      '3j' : 'threeJet && Alt$(CleanJet_pt[3],0)<30',
      '4j' : 'fourJet && Alt$(CleanJet_pt[4],0)<30',
      '5j' : 'fiveJet',
   }
}

## DYtt control regions
cuts['ww2l2v_13TeV_dytt']  = { 
	'expr' : 'dycr',
# Define the sub-categorization of dycr
   'categories' : { 
      'incl'  : '1',
      '0j' : 'zeroJet',
      '1j' : 'oneJet && Alt$(CleanJet_pt[1],0)<30',
      '2j' : 'twoJet && Alt$(CleanJet_pt[2],0)<30',
      '3j' : 'threeJet && Alt$(CleanJet_pt[3],0)<30',
      '4j' : 'fourJet && Alt$(CleanJet_pt[4],0)<30',
      '5j' : 'fiveJet',
   }
}
'''
