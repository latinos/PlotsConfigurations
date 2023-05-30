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
    '2j' : 'nGoodCleanJet >= 2'
}

catSR = {
    'B0'  : 'jetpt1reco >= 30.  && jetpt1reco < 40.',
    'B1'  : 'jetpt1reco >= 40.  && jetpt1reco < 55.',
    'B2'  : 'jetpt1reco >= 55.  && jetpt1reco < 75.',
    'B3'  : 'jetpt1reco >= 75.  && jetpt1reco < 100.',
    'B4'  : 'jetpt1reco >= 100. && jetpt1reco < 150.',
    'B5'  : 'jetpt1reco >= 150. && jetpt1reco < 400.',
}

##  signal regions
cuts['ww2l2v_13TeV_sr']  = {
    'expr' : 'sr',
    'categories' : dict((iCR+'_'+iSR,catCR[iCR]+' && '+catSR[iSR]) for iCR in catCR.keys() for iSR in catSR.keys()) 
}

# Top control region
cuts['ww2l2v_13TeV_top']  = {
    'expr' : 'topcr',
    'categories' : catCR
}
