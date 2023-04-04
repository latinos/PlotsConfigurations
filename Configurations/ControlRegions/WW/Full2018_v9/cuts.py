# cuts

# https://github.com/latinos/PlotsConfigurations/blob/master/Configurations/ggH/Full2016_v7/cuts.py

supercut = '   mll>12 \
            && Lepton_pt[0]>25 \
            && Lepton_pt[1]>10 \
            && (abs(Lepton_pdgId[1])==13 || Lepton_pt[1]>13) \
            && (nLepton>=2 && Alt$(Lepton_pt[2],0)<10) \
            && abs(Lepton_eta[0])<2.5 && abs(Lepton_eta[1])<2.5 \
            && (Lepton_pdgId[0]*Lepton_pdgId[1] == -11*13) \
'

# WW control regions
cuts['hww2l2v_13TeV_ww'] = {
    'expr' : 'wwcr && ptll > 30 && PuppiMET_pt > 20',
    'categories' : {
        '0j' : 'zeroJet',
        '1j' : 'oneJet && Alt$(CleanJet_pt[1],0)<30',
        '2j' : '(mjj<65 || mjj>105) && mjj<120 && multiJet'
    }
}

# Inclusive DF region
cuts['hww2l2v_13TeV_df_incl'] = 'mtw2 > 30'
