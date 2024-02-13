# cuts

# https://github.com/latinos/PlotsConfigurations/blob/master/Configurations/ggH/Full2016_v7/cuts.py

supercut = '   mll>12 \
            && Lepton_pt[0]>25 \
            && Lepton_pt[1]>10 \
            && (abs(Lepton_pdgId[1])==13 || Lepton_pt[1]>13) \
            && (nLepton>=2 && Alt$(Lepton_pt[2],0)<10) \
            && abs(Lepton_eta[0])<2.5 && abs(Lepton_eta[1])<2.5 \
            && abs(mll-91.2)>15 \
'

# WW control regions
cuts['hww2l2v_13TeV_ww_ee'] = {
    'expr' : 'wwcr && ptll > 30 && PuppiMET_pt > 20 && (Lepton_pdgId[0]*Lepton_pdgId[1] == -11*11)',
    'categories' : {
        '0j' : 'zeroJet',
        '1j' : 'oneJet && Alt$(CleanJet_pt[1],0)<30',
        '2j' : '(mjj<65 || mjj>105) && mjj<120 && multiJet'
    }
}

# Inclusive DF region
cuts['hww2l2v_13TeV_ww_ee_incl'] = 'wwcr \
                                    && ptll > 30 \
                                    && PuppiMET_pt > 20 \
                                    && (Lepton_pdgId[0]*Lepton_pdgId[1] == -11*11)'

# Top control regions
cuts['hww2l2v_13TeV_top_ee'] = {
    'expr' : 'topcr && ptll > 30 && PuppiMET_pt > 20 && (Lepton_pdgId[0]*Lepton_pdgId[1] == -11*11)',
    'categories' : {
        '0j' : 'zeroJet',
        '1j' : 'oneJet && Alt$(CleanJet_pt[1],0)<30',
        '2j' : '(mjj<65 || mjj>105) && mjj<120 && multiJet'
    }
}

# Inclusive DF region
cuts['hww2l2v_13TeV_top_ee_incl'] = 'topcr \
                                     && ptll > 30 \
                                     && PuppiMET_pt > 20 \
                                     && (Lepton_pdgId[0]*Lepton_pdgId[1] == -11*11) \
'
