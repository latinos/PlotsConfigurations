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
    'B0'  : 'ptll > 30       && ptll <= 35',
    'B1'  : 'ptll > 35       && ptll <= 40',
    'B2'  : 'ptll > 40       && ptll <= 45',
    'B3'  : 'ptll > 45       && ptll <= 50',
    'B4'  : 'ptll > 50       && ptll <= 55',
    'B5'  : 'ptll > 55       && ptll <= 60',
    'B6'  : 'ptll > 60       && ptll <= 70',
    'B7'  : 'ptll > 70       && ptll <= 80',
    'B8'  : 'ptll > 80       && ptll <= 100',
    'B9'  : 'ptll > 100       && ptll <= 150',
    'B10'  : 'ptll > 150       && ptll <= 200',
    'B11'  : 'ptll > 200       && ptll <= 300',
    'B12'  : 'ptll > 300'
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
