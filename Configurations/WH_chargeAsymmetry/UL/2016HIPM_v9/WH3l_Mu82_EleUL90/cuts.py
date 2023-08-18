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
#             && Sum$( CleanJet_pt > 20. && abs(CleanJet_eta)<2.5 && Jet_btagDeepB[CleanJet_jetIdx] > 0.4184) == 0\

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

# OSSF
cuts['wh3l_13TeV_ossf'] = {
    'expr' : 'WH3l_flagOSSF == 1 && WH3l_ZVeto > 20 && PuppiMET_pt > 40 && Alt$(CleanJet_pt[0], 0) < 30',
    'categories' : {
        'plus_pt2ge20'  : 'Lepton_pdgId[0]*Lepton_pdgId[1]*Lepton_pdgId[2]>0 && Lepton_pt[1]>=20 && Lepton_pt[2]>=15',
        'minus_pt2ge20' : 'Lepton_pdgId[0]*Lepton_pdgId[1]*Lepton_pdgId[2]<0 && Lepton_pt[1]>=20 && Lepton_pt[2]>=15',
        'plus_pt2lt20'  : 'Lepton_pdgId[0]*Lepton_pdgId[1]*Lepton_pdgId[2]>0 && Lepton_pt[1]<20',
        'minus_pt2lt20' : 'Lepton_pdgId[0]*Lepton_pdgId[1]*Lepton_pdgId[2]<0 && Lepton_pt[1]<20',
    }
}

## WZ control region

# CR 0jet - WH3l
cuts['wh3l_wz_13TeV'] = 'WH3l_flagOSSF == 1 \
                         && PuppiMET_pt > 45 \
                         && WH3l_ZVeto < 20 \
                         && WH3l_mlll > 100 \
                         && Alt$( CleanJet_pt[0], 0) < 30 \
                         '

# CR 1jet - WHSS
cuts['hww2l2v_13TeV_WH_SS_WZ_1j'] = '((Lepton_pdgId[0]*Lepton_pdgId[1] == 13*13) || (Lepton_pdgId[0]*Lepton_pdgId[1] == 11*13) || (Lepton_pdgId[0]*Lepton_pdgId[1] == 11*11))\
                                       && Lepton_pt[2]>15 \
                                       && Alt$(CleanJet_pt[0],0)>30 \
                                       && Alt$(CleanJet_pt[1],0)<30 \
                                       && WH3l_mlll > 100 \
                                       '

# CR 2jets - WHSS
cuts['hww2l2v_13TeV_WH_SS_WZ_2j'] = '((Lepton_pdgId[0]*Lepton_pdgId[1] == 13*13) || (Lepton_pdgId[0]*Lepton_pdgId[1] == 11*13) || (Lepton_pdgId[0]*Lepton_pdgId[1] == 11*11)) \
                                       && Lepton_pt[2]>15 \
                                       && Alt$(CleanJet_pt[0],0)>30 \
                                       && Alt$(CleanJet_pt[1],0)>30 \
                                       && WH3l_mlll > 100 \
                                       '

# 11 = e
# 13 = mu
# 15 = tau
