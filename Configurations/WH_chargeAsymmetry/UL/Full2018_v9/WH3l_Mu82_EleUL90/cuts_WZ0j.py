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

## WZ control region

# CR 0jet - WH3l
cuts['wh3l_wz_13TeV'] = 'WH3l_flagOSSF == 1 \
                         && PuppiMET_pt > 45 \
                         && WH3l_ZVeto < 20 \
                         && WH3l_mlll > 100 \
                         && Alt$( CleanJet_pt[0], 0) < 30 \
                         '
