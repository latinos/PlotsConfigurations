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

catCR = {
    '2j' : 'nGoodCleanJet >= 2'
}

catSR = {
    'B0'  : 'dphijjsign >= 0.0       && dphijjsign < 1./7.*pi',
    'B1'  : 'dphijjsign >= 1./7.*pi  && dphijjsign < 2./7.*pi',
    'B2'  : 'dphijjsign >= 2./7.*pi  && dphijjsign < 3./7.*pi',
    'B3'  : 'dphijjsign >= 3./7.*pi  && dphijjsign < 4./7.*pi',
    'B4'  : 'dphijjsign >= 4./7.*pi  && dphijjsign < 5./7.*pi',
    'B5'  : 'dphijjsign >= 5./7.*pi  && dphijjsign < 6./7.*pi',
    'B6'  : 'dphijjsign >= 6./7.*pi  && dphijjsign < pi',
    'B7'  : 'dphijjsign >= pi        && dphijjsign < 8./7.*pi',
    'B8'  : 'dphijjsign >= 8./7.*pi  && dphijjsign < 9./7.*pi',
    'B9'  : 'dphijjsign >= 9./7.*pi  && dphijjsign < 10./7.*pi',
    'B10' : 'dphijjsign >= 10./7.*pi && dphijjsign < 11./7.*pi',
    'B11' : 'dphijjsign >= 11./7.*pi && dphijjsign < 12./7.*pi',
    'B12' : 'dphijjsign >= 12./7.*pi && dphijjsign < 13./7.*pi',
    'B13' : 'dphijjsign >= 13./7.*pi && dphijjsign < 2.*pi'
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
