# cuts

#supercut = 'mll>60 && mll<120 && Lepton_pt[0]>25 && Lepton_pt[1]>13 && (nLepton>=2 && Alt$(Lepton_pt[2],0)<10) && abs(Lepton_eta[0])<2.5 && abs(Lepton_eta[1])<2.5'

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

#cuts['Zee']  = '(Lepton_pdgId[0] * Lepton_pdgId[1] == -11*11) '

#cuts['Zmm']  = '(Lepton_pdgId[0] * Lepton_pdgId[1] == -13*13) '

## Top control regions
cuts['hww2l2v_13TeV_top']  = { 
   'expr' : 'topcr',
    # Define the sub-categorization of topcr
   'categories' : {
      '0j' : 'zeroJet',
      '1j' : 'oneJet && Alt$(CleanJet_pt[1],0)<30',
      '2j' : '(mjj<65 || mjj>105) && mjj<200 && multiJet',
   }
}

'''
cuts['Zee']  = {
   'expr' : '(Lepton_pdgId[0] * Lepton_pdgId[1] == -11*11)',
   'categories' : {
      '0j' : 'zeroJet',
      '1j' : 'oneJet && Alt$(CleanJet_pt[1],0)<30',
      '2j' : 'multiJet',
   }
}

cuts['Zmm']  = {
   'expr' : '(Lepton_pdgId[0] * Lepton_pdgId[1] == -13*13)',
   'categories' : {
      '0j' : 'zeroJet',
      '1j' : 'oneJet && Alt$(CleanJet_pt[1],0)<30',
      '2j' : 'multiJet',
   }
}
'''


