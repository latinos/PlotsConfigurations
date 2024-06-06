# cuts

# https://github.com/latinos/PlotsConfigurations/blob/master/Configurations/ggH/Full2016_v7/cuts.py

supercut = '   mll>12 \
            && Lepton_pt[0]>25 \
            && Lepton_pt[1]>10 \
            && (abs(Lepton_pdgId[1])==13 || Lepton_pt[1]>13) \
            && abs(Lepton_eta[0])<2.5 && abs(Lepton_eta[1])<2.5 \
'
# WHSS signal region
cuts['hww2l2v_13TeV_samesign'] = {
    'expr' : 'PuppiMET_pt > 30 && (Lepton_pdgId[0]*Lepton_pdgId[1] == 11*13) && nLepton==2 && mjj < 100 && abs(Lepton_eta[0] - Lepton_eta[1])<2.0 && mlljj20_whss > 50',
    'categories' : {
        '1j' : 'oneJet && Alt$(CleanJet_pt[1],0)<30',
        '2j' : '(mjj<65 || mjj>105) && mjj<120 && multiJet'
    }
}

# WH3l signal region and WZ control regions
cuts['wh3l_13TeV'] = {
    'expr' : 'MinIf$( WH3l_mOSll[], WH3l_mOSll[Iteration$] > 0) > 12 && Alt$(Lepton_pt[2],0)>10 && (nLepton>=3 && Alt$(Lepton_pt[3],0)<10) && abs(WH3l_chlll) == 1',
    'categories' : {
        'ossf'     : 'WH3l_flagOSSF == 1 && WH3l_ZVeto > 20 && PuppiMET_pt > 40 && Alt$(CleanJet_pt[0], 0) < 30',
        'sssf'     : 'WH3l_flagOSSF == 0 && Alt$(CleanJet_pt[0], 0) < 30',
        'wz_CR_0j' : 'WH3l_flagOSSF == 1 && PuppiMET_pt > 45 && WH3l_ZVeto < 20 && WH3l_mlll > 100 && Alt$(CleanJet_pt[0], 0) < 30',
        'wz_CR_1j' : '((Lepton_pdgId[0]*Lepton_pdgId[1] == 13*13) || (Lepton_pdgId[0]*Lepton_pdgId[1] == 11*13) || (Lepton_pdgId[0]*Lepton_pdgId[1] == 11*11)) && Lepton_pt[2]>15 && Alt$(CleanJet_pt[0],0)>30 && Alt$(CleanJet_pt[1],0)<30 && WH3l_mlll > 100',
        'wz_CR_2j' : '((Lepton_pdgId[0]*Lepton_pdgId[1] == 13*13) || (Lepton_pdgId[0]*Lepton_pdgId[1] == 11*13) || (Lepton_pdgId[0]*Lepton_pdgId[1] == 11*11)) && Lepton_pt[2]>15 && Alt$(CleanJet_pt[0],0)>30 && Alt$(CleanJet_pt[1],0)>30 && WH3l_mlll > 100',
    }
}
