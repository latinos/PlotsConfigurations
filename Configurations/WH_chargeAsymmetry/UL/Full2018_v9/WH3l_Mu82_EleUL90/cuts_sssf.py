# cuts
supercut = 'MinIf$( WH3l_mOSll[], WH3l_mOSll[Iteration$] > 0) > 12 \
            && Alt$(Lepton_pt[0],0)>25 \
            && Alt$(Lepton_pt[1],0)>10 \
            && (abs(Lepton_pdgId[1])==13 || Lepton_pt[1]>13) \
            && Alt$(Lepton_pt[2],0)>10 \
            && (nLepton>=3 && Alt$(Lepton_pt[3],0)<10) \
            && abs(WH3l_chlll) == 1 \
            && bVeto \
'
# Plus: two leptons with positive charge and one with negative charge: product of the three charges is negative (product of pdgIds is POSITIVE)
# Minus: two leptons with negative charge and one with positive charge: product of the three charges is positive (product of pdgIds is NEGATIVE)

## Signal region

# SSSF
cuts['wh3l_13TeV_sssf'] = {
    'expr' : 'WH3l_flagOSSF == 0 && Alt$(CleanJet_pt[0], 0) < 30',
    'categories' : {
        'plus_pt2ge20'  : 'Lepton_pdgId[0]*Lepton_pdgId[1]*Lepton_pdgId[2]>0 && Lepton_pt[1]>=20 && Lepton_pt[2]>=15',
        'minus_pt2ge20' : 'Lepton_pdgId[0]*Lepton_pdgId[1]*Lepton_pdgId[2]<0 && Lepton_pt[1]>=20 && Lepton_pt[2]>=15',
        'plus_pt2lt20'  : 'Lepton_pdgId[0]*Lepton_pdgId[1]*Lepton_pdgId[2]>0 && Lepton_pt[1]<20',
        'minus_pt2lt20' : 'Lepton_pdgId[0]*Lepton_pdgId[1]*Lepton_pdgId[2]<0 && Lepton_pt[1]<20',
    }
}
