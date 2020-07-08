# cuts
'''
supercut = '   mll>12 \
            && Lepton_pt[0]>25 \
            && Lepton_pt[1]>10 \
            && (abs(Lepton_pdgId[1])==13 || Lepton_pt[1]>13) \
            && (nLepton>=2 && Alt$(Lepton_pt[2],0)<10) \
            && abs(Lepton_eta[0])<2.5 && abs(Lepton_eta[1])<2.5 \
            && ptll>30 \
            && PuppiMET_pt > 20 \
            && (Lepton_pdgId[0]*Lepton_pdgId[1] == -11*13) \
           '
'''

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
   'expr': 'sr',
    # Define the sub-categorization of sr
   'categories' : {
      'em_0j' : 'zeroJet',
      'em_1j' : 'oneJet && Alt$(CleanJet_pt[1],0)<30',
      'em_2j' : 'multiJet', 
   }
}

## Top control regions
cuts['ww2l2v_13TeV_top']  = { 
   'expr' : 'topcr',
    # Define the sub-categorization of topcr
   'categories' : {
      '0j' : 'zeroJet',
      '1j' : 'oneJet && Alt$(CleanJet_pt[1],0)<30',
      '2j' : 'multiJet',
   }
}

## DYtt control regions
cuts['ww2l2v_13TeV_dytt']  = { 
	'expr' : 'dycr',
# Define the sub-categorization of dycr
   'categories' : { 
      '0j' : 'zeroJet',
      '1j' : 'oneJet && Alt$(CleanJet_pt[1],0)<30',
      '2j' : 'multiJet',
   }
}

### WW control regions
### Used only for control plots, no need to add these cuts for the fit
#cuts['hww2l2v_13TeV_ww'] = {
#  'expr' : 'wwcr',
#	  'categories' : {
#	    '0j' : 'zeroJet',
#	    '1j' : 'oneJet && Alt$(CleanJet_pt[1],0)<30',
#	    '2j' : '(mjj<65 || mjj>105) && mjj<200 && multiJet'
#	  }
#	}
#
