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
    'B0'  : 'mjjreco >= 0.   && mjjreco < 40.',
    'B1'  : 'mjjreco >= 40.  && mjjreco < 55.',
    'B2'  : 'mjjreco >= 55.  && mjjreco < 70.',
    'B3'  : 'mjjreco >= 70.  && mjjreco < 90.',
    'B4'  : 'mjjreco >= 90.  && mjjreco < 110.',
    'B5'  : 'mjjreco >= 110. && mjjreco < 135.',
    'B6'  : 'mjjreco >= 135. && mjjreco < 165.',
    'B7'  : 'mjjreco >= 165. && mjjreco < 200.',
    'B8'  : 'mjjreco >= 200. && mjjreco < 250.',
    'B9'  : 'mjjreco >= 250. && mjjreco < 300.',
    'B10' : 'mjjreco >= 300. && mjjreco < 400.',
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
