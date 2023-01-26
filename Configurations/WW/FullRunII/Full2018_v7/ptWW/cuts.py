# cuts
supercut = '   mll>12 \
            && Lepton_pt[0]>25 \
            && Lepton_pt[1]>20 \
            && (nLepton>=2 && Alt$(Lepton_pt[2],0)<10) \
            && abs(Lepton_eta[0])<2.5 && abs(Lepton_eta[1])<2.5 \
            && ptll>30 \
            && PuppiMET_pt > 20 \
            && (Lepton_pdgId[0]*Lepton_pdgId[1] == -11*13) \
            && mll > 20 \
           '



catCR = {
    '0j' : 'nGoodCleanJet == 0',
    '1j' : 'nGoodCleanJet == 1',
    '2j' : 'nGoodCleanJet >= 2',
}

catSR = {
    'B0'  : 'pTWW > 0.        && pTWW <= 10.',
    'B1'  : 'pTWW > 10.       && pTWW <= 20.',
    'B2'  : 'pTWW > 20.       && pTWW <= 30.',
    'B3'  : 'pTWW > 30.       && pTWW <= 40.',
    'B4'  : 'pTWW > 40.       && pTWW <= 50.',
    'B5'  : 'pTWW > 50       && pTWW <= 60.',
    'B6'  : 'pTWW > 60.       && pTWW <= 70.',
    'B7'  : 'pTWW > 70.       && pTWW <= 80.',
    'B8'  : 'pTWW > 80.       && pTWW <= 100.',
    'B9'  : 'pTWW > 100.       && pTWW <= 150.',
    'B10'  : 'pTWW > 150.       && pTWW <= 200.',
    'B11'  : 'pTWW > 200.       && pTWW <= 300.',
    'B12'  : 'pTWW > 300',
}

##  signal regions
cuts['ww2l2v_13TeV_sr']  = {
   'expr' : 'sr',
    # Define the sub-categorization of signal region
    'categories' : dict((iCR+'_'+iSR,catCR[iCR]+' && '+catSR[iSR]) for iCR in catCR.keys() for iSR in catSR.keys())
}

## Top control regions
cuts['ww2l2v_13TeV_top']  = {
   'expr' : 'topcr',
   'categories' : catCR

}
'''
cuts['ww2l2v_13TeV_dytt']  = {
   'expr' : 'dycr',
    # Define the sub-categorization of dycr
   'categories' : catCR
}
'''
