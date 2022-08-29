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
# && Alt$( CleanJet_pt[0], 0) < 30 \

cuts['wh3l_wz_13TeV_incl'] = 'WH3l_flagOSSF == 1 && PuppiMET_pt > 45 && WH3l_ZVeto < 20 && WH3l_mlll > 100'

cuts['wh3l_wz_13TeV'] = {
    'expr' : 'WH3l_flagOSSF == 1 && PuppiMET_pt > 45 && WH3l_ZVeto < 20 && WH3l_mlll > 100',
    'categories' : {
        '0j' : 'zeroJet',
        '1j' : 'oneJet && Alt$(CleanJet_pt[1],0)<30',
        '2j' : 'multiJet',
    }
}
