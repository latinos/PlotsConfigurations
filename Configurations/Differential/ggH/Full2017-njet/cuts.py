# cuts

supercut = '   mll>12 \
            && Lepton_pt[0]>25 \
            && Lepton_pt[1]>10 \
            && (abs(Lepton_pdgId[1])==13 || Lepton_pt[1]>13) \
            && (nLepton>=2 && Alt$(Lepton_pt[2],0)<10) \
            && abs(Lepton_eta[0])<2.5 && abs(Lepton_eta[1])<2.5 \
            && ptll>30 \
            && PuppiMET_pt > 20 \
           '

bAlgo = 'DeepB'
bWP = '0.1522'

## DY control regions
categorization = '0*(Alt$(CleanJet_pt[0], 0) < 30)+(Alt$(CleanJet_pt[0], 0) >= 30)*('
categorization += '1*(Alt$(CleanJet_pt[1], 0) < 30)+(Alt$(CleanJet_pt[1], 0) >= 30)*('
categorization += '2*(Alt$(CleanJet_pt[2], 0) < 30)+(Alt$(CleanJet_pt[2], 0) >= 30)*('
categorization += '3*(Alt$(CleanJet_pt[3], 0) < 30)+4*(Alt$(CleanJet_pt[3], 0) >= 30))))'

cuts['hww_CR_catDY'] = {
    'expr': '(Lepton_pdgId[0] * Lepton_pdgId[1] == -11*13)    \
            && ( mth<60) \
            && mll>40 && mll<80 \
            && bVeto',
    'categories': ['0j_2017', '1j_2017', '2j_2017', '3j_2017', 'ge4j_2017'],
    'categorization': categorization
}

## Top control regions
categorization = '-1' # default
categorization += '+1*(Sum$(CleanJet_pt > 30) == 0 && Sum$(CleanJet_pt > 20 && Jet_btag'+bAlgo+'[CleanJet_jetIdx]>'+bWP+') != 0)'
categorization += '+(Sum$(CleanJet_pt >= 30 && Jet_btag'+bAlgo+'[CleanJet_jetIdx]>'+bWP+') != 0 && Alt$(CleanJet_pt[0], 0) >= 30)*('
categorization += '2*(Alt$(CleanJet_pt[1], 0) < 30)+(Alt$(CleanJet_pt[1], 0) >= 30)*('
categorization += '3*(Alt$(CleanJet_pt[2], 0) < 30)+(Alt$(CleanJet_pt[2], 0) >= 30)*('
categorization += '4*(Alt$(CleanJet_pt[3], 0) < 30)+5*(Alt$(CleanJet_pt[3], 0) >= 30))))'

cuts['hww_CR_cattop'] = {
    'expr': '(Lepton_pdgId[0] * Lepton_pdgId[1] == -11*13)    \
                && mll>50 \
                && ( mtw2>30)',
    'categories': ['0j_2017', '1j_2017', '2j_2017', '3j_2017', 'ge4j_2017'],
    'categorization': categorization
}

## Signal regions

categories = []
for njbin in ['0', '1', '2', '3', 'GE4']:
    for ptcat in ['pt2lt20', 'pt2ge20']:
        for flavcat in ['em', 'me']:
            for chargecat in ['pm', 'mp']:
                categories.append('NJ_%s_cat%s%s%s_2017' % (njbin, ptcat, flavcat, chargecat))

categorization = '0*(Alt$(CleanJet_pt[0], 0) < 30)+(Alt$(CleanJet_pt[0], 0) >= 30)*('
categorization += '8*(Alt$(CleanJet_pt[1], 0) < 30)+(Alt$(CleanJet_pt[1], 0) >= 30)*('
categorization += '16*(Alt$(CleanJet_pt[2], 0) < 30)+(Alt$(CleanJet_pt[2], 0) >= 30)*('
categorization += '24*(Alt$(CleanJet_pt[3], 0) < 30)+32*(Alt$(CleanJet_pt[3], 0) >= 30))))'
categorization += '+4*(Lepton_pt[1] >= 20)'
categorization += '+2*(abs(Lepton_pdgId[0]) == 13)'
categorization += '+1*(Lepton_pdgId[0]>0)' # note: sign is opposite from 2016 (correct pdgid of e- is 11)

cuts['hww'] = {
    'expr': '(Lepton_pdgId[0] * Lepton_pdgId[1] == -11*13)    \
                && ( mth>=60) \
                && ( mtw2>30) \
                && bVeto',
    'categories': categories,
    'categorization': categorization
}
