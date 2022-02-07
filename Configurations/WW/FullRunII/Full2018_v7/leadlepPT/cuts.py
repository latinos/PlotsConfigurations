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
    'B0'  : 'Lepton_pt[0] > 25       && Lepton_pt[0] <= 35',
    'B1'  : 'Lepton_pt[0] > 35       && Lepton_pt[0] <= 40',
    'B2'  : 'Lepton_pt[0] > 40       && Lepton_pt[0] <= 45',
    'B3'  : 'Lepton_pt[0] > 45       && Lepton_pt[0] <= 50',
    'B4'  : 'Lepton_pt[0] > 50       && Lepton_pt[0] <= 55',
    'B5'  : 'Lepton_pt[0] > 55       && Lepton_pt[0] <= 60',
    'B6'  : 'Lepton_pt[0] > 60       && Lepton_pt[0] <= 70',
    'B7'  : 'Lepton_pt[0] > 70       && Lepton_pt[0] <= 80',
    'B8'  : 'Lepton_pt[0] > 80       && Lepton_pt[0] <= 100',
    'B9'  : 'Lepton_pt[0] > 100       && Lepton_pt[0] <= 150',
    'B10'  : 'Lepton_pt[0] > 150       && Lepton_pt[0] <= 200',
    'B11'  : 'Lepton_pt[0] > 200       && Lepton_pt[0] <= 300',
    'B12'  : 'Lepton_pt[0] > 300'
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
