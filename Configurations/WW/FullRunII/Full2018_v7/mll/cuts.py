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
    'B0'  : 'mll > 20       && mll <= 30',
    'B1'  : 'mll > 30       && mll <= 40',
    'B2'  : 'mll > 40       && mll <= 45',
    'B3'  : 'mll > 45       && mll <= 50',
    'B4'  : 'mll > 50       && mll <= 55',
    'B5'  : 'mll > 55       && mll <= 60',
    'B6'  : 'mll > 60       && mll <= 70',
    'B7'  : 'mll > 70       && mll <= 80',
    'B8'  : 'mll > 80       && mll <= 100',
    'B9'  : 'mll > 100       && mll <= 150',
    'B10'  : 'mll > 150       && mll <= 200',
    'B11'  : 'mll > 200       && mll <= 300',
    'B12'  : 'mll > 300'
}

#  signal regions
cuts['ww2l2v_13TeV_sr']  = {
   'expr' : 'sr',
    # Define the sub-categorization of signal region
    'categories' : dict((iCR+'_'+iSR,catCR[iCR]+' && '+catSR[iSR]) for iCR in catCR.keys() for iSR in catSR.keys())
}

# Top control regions
cuts['ww2l2v_13TeV_top']  = {
   'expr' : 'topcr',
   'categories' : catCR

}
