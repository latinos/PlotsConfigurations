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
    '2j' : 'nGoodCleanJet >= 2'
}

catSR = {
    'B0'  : 'mjjreco >= 0.   && mjjreco < 35.',
    'B1'  : 'mjjreco >= 35.  && mjjreco < 50.',
    'B2'  : 'mjjreco >= 50.  && mjjreco < 65.',
    'B3'  : 'mjjreco >= 65.  && mjjreco < 85.',
    'B4'  : 'mjjreco >= 85.  && mjjreco < 105.',
    'B5'  : 'mjjreco >= 105. && mjjreco < 130.',
    'B6'  : 'mjjreco >= 130. && mjjreco < 160.',
    'B7'  : 'mjjreco >= 160. && mjjreco < 200.',
    'B8'  : 'mjjreco >= 200. && mjjreco < 250.',
    'B9'  : 'mjjreco >= 250. && mjjreco < 300.',
    'B10' : 'mjjreco >= 300. && mjjreco < 350.',
    'B11' : 'mjjreco >= 350.',
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
