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

## Signal regions
cuts['ww2l2v_13TeV'] = {
   'expr' : 'sr',
   'categories' : {
      'incl'  : '1',
      'em_0j' : 'zeroJet',
      'em_1j' : 'oneJet && Alt$(CleanJet_pt[1],0)<30',
      'em_2j' : 'twoJet && Alt$(CleanJet_pt[2],0)<30',
      'em_3j' : 'threeJet && Alt$(CleanJet_pt[3],0)<30',
      'em_4j' : 'fourJet && Alt$(CleanJet_pt[4],0)<30',
      'em_5j' : 'fiveJet',
   }
}



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
