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
            && mll > 20 \
           '

##  signal regions
cuts['ww2l2v_13TeV_sr']  = {
   'expr' : 'sr',
    # Define the sub-categorization of signal region
   'categories' : {
       'B0' : 'nGoodCleanJet == 0',
       'B1' : 'nGoodCleanJet == 1',
       'B2' : 'nGoodCleanJet == 2',
       'B3' : 'nGoodCleanJet >= 3'
   }
}

## Top control regions
cuts['ww2l2v_13TeV_top']  = {
   'expr' : 'topcr',
    # Define the sub-categorization of topcr
   'categories' : {
       'B0' : 'nGoodCleanJet == 0',
       'B1' : 'nGoodCleanJet == 1',
       'B2' : 'nGoodCleanJet == 2',
       'B3' : 'nGoodCleanJet >= 3'
   }
}

