# cuts
supercut = '   mll>12 \
            && Alt$(Lepton_pt[0],0)>25 \
            && Alt$(Lepton_pt[1],0)>20 \
            && Alt$(Lepton_pt[2],0)<10 \
            && abs(Lepton_eta[0])<2.5 && abs(Lepton_eta[1])<2.5 \
            && ptll>30 \
            && PuppiMET_pt > 20 \
            && (Lepton_pdgId[0]*Lepton_pdgId[1] == -11*13) \
            && mll > 20 \
           '

catCR = {
    '1j' : 'nGoodCleanJet == 1',
    '2j' : 'nGoodCleanJet >= 2'
}

catSR = {
    'B0'  : 'jetpt0reco >= 30.  && jetpt0reco < 40.',
    'B1'  : 'jetpt0reco >= 40.  && jetpt0reco < 55.',
    'B2'  : 'jetpt0reco >= 55.  && jetpt0reco < 75.',
    'B3'  : 'jetpt0reco >= 75.  && jetpt0reco < 95.',
    'B4'  : 'jetpt0reco >= 95.  && jetpt0reco < 120.',
    'B5'  : 'jetpt0reco >= 120. && jetpt0reco < 145.',
    'B6'  : 'jetpt0reco >= 145. && jetpt0reco < 180.',
    'B7'  : 'jetpt0reco >= 180. && jetpt0reco < 215.',
    'B8'  : 'jetpt0reco >= 215. && jetpt0reco < 250.',
    'B9'  : 'jetpt0reco >= 250. && jetpt0reco < 300.',
    'B10' : 'jetpt0reco >= 300. && jetpt0reco < 350.',
    'B11' : 'jetpt0reco >= 350.',
}

#  signal regions
cuts['ww2l2v_13TeV_sr']  = {
    'expr' : 'sr',
    'categories' : dict((iCR+'_'+iSR,catCR[iCR]+' && '+catSR[iSR]) for iCR in catCR.keys() for iSR in catSR.keys()) 
}

# Top control region
cuts['ww2l2v_13TeV_top']  = {
    'expr' : 'topcr',
    'categories' : catCR
}
