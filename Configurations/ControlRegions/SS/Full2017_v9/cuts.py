# cuts

# https://github.com/latinos/PlotsConfigurations/blob/master/Configurations/ControlRegions/SS/Full2017_v7/cuts.py

supercut = 'Lepton_pt[0] > 20 && Lepton_pt[1] > 13 \
         && (abs(Lepton_pdgId[0]) == 13 || Lepton_pt[0] > 25) \
         && (abs(Lepton_pdgId[1]) == 13 || Lepton_pt[1] > 13) \
         && (nLepton >= 2 && Alt$(Lepton_pt[2],0) < 10) \
         && abs(Lepton_eta[0]) < 2.5 && abs(Lepton_eta[1]) < 2.5 \
         && mll > 12 \
         && PuppiMET_pt > 20 \
         && ptll > 30 \
         && mth > 60 \
         && Lepton_pdgId[0]*Lepton_pdgId[1] > 0 \
'

################
# pT2 > 20 GeV #
################

# Different-flavor
cuts['SS_df'] = {
    'expr' : 'Lepton_pdgId[0]*Lepton_pdgId[1] == 11*13 && Lepton_pt[1] > 20',
    'categories' : {
        '0j' : 'zeroJet',
        '1j' : 'oneJet && Alt$(CleanJet_pt[1],0)<30',
        '2j' : 'multiJet && Alt$(CleanJet_pt[2],0)<30'
    }
}

# Different-flavor (em)
cuts['SS_em'] = {
    'expr' : 'Lepton_pdgId[0]*Lepton_pdgId[1] == 11*13 && abs(Lepton_pdgId[0]) == 11 && abs(Lepton_pdgId[1]) == 13 && Lepton_pt[1] > 20',
    'categories' : {
        '0j' : 'zeroJet',
        '1j' : 'oneJet && Alt$(CleanJet_pt[1],0)<30',
        '2j' : 'multiJet && Alt$(CleanJet_pt[2],0)<30'
    }
}

# Different-flavor (me)
cuts['SS_me'] = {
    'expr' : 'Lepton_pdgId[0]*Lepton_pdgId[1] == 11*13 && abs(Lepton_pdgId[0]) == 13 && abs(Lepton_pdgId[1]) == 11 && Lepton_pt[1] > 20',
    'categories' : {
        '0j' : 'zeroJet',
        '1j' : 'oneJet && Alt$(CleanJet_pt[1],0)<30',
        '2j' : 'multiJet && Alt$(CleanJet_pt[2],0)<30'
    }
}

# Same-flavor
cuts['SS_sf'] = {
    'expr' : 'Lepton_pdgId[0]*Lepton_pdgId[1] > 0 && ( (abs(Lepton_pdgId[0]) == 11 && abs(Lepton_pdgId[1]) == 11) || (abs(Lepton_pdgId[0]) == 13 && abs(Lepton_pdgId[1]) == 13) ) && abs(mll-91.2) > 20 && Lepton_pt[1] > 20',
    'categories' : {
        '0j' : 'zeroJet',
        '1j' : 'oneJet && Alt$(CleanJet_pt[1],0)<30',
        '2j' : 'multiJet && Alt$(CleanJet_pt[2],0)<30'
    }
}

# Same-flavor (ee)
cuts['SS_ee'] = {
    'expr' : 'Lepton_pdgId[0]*Lepton_pdgId[1] == 11*11 && abs(Lepton_pdgId[0]) == 11 && abs(Lepton_pdgId[1]) == 11 && abs(mll-91.2) > 20 && Lepton_pt[1] > 20',
    'categories' : {
        '0j' : 'zeroJet',
        '1j' : 'oneJet && Alt$(CleanJet_pt[1],0)<30',
        '2j' : 'multiJet && Alt$(CleanJet_pt[2],0)<30'
    }
}

# Same-flavor (mm)
cuts['SS_mm'] = {
    'expr' : 'Lepton_pdgId[0]*Lepton_pdgId[1] == 13*13 && abs(Lepton_pdgId[0]) == 13 && abs(Lepton_pdgId[1]) == 13 && abs(mll-91.2) > 20 && Lepton_pt[1] > 20',
    'categories' : {
        '0j' : 'zeroJet',
        '1j' : 'oneJet && Alt$(CleanJet_pt[1],0)<30',
        '2j' : 'multiJet && Alt$(CleanJet_pt[2],0)<30'
    }
}

################
# pT2 < 20 GeV #
################

# Different-flavor
cuts['SS_pt2lt20_df'] = {
    'expr' : 'Lepton_pdgId[0]*Lepton_pdgId[1] == 11*13 && Lepton_pt[1] < 20',
    'categories' : {
        '0j' : 'zeroJet',
        '1j' : 'oneJet && Alt$(CleanJet_pt[1],0)<30',
        '2j' : 'multiJet && Alt$(CleanJet_pt[2],0)<30'
    }
}

# Different-flavor (em)
cuts['SS_pt2lt20_em'] = {
    'expr' : 'Lepton_pdgId[0]*Lepton_pdgId[1] == 11*13 && abs(Lepton_pdgId[0]) == 11 && abs(Lepton_pdgId[1]) == 13 && Lepton_pt[1] < 20',
    'categories' : {
        '0j' : 'zeroJet',
        '1j' : 'oneJet && Alt$(CleanJet_pt[1],0)<30',
        '2j' : 'multiJet && Alt$(CleanJet_pt[2],0)<30'
    }
}

# Different-flavor (me)
cuts['SS_pt2lt20_me'] = {
    'expr' : 'Lepton_pdgId[0]*Lepton_pdgId[1] == 11*13 && abs(Lepton_pdgId[0]) == 13 && abs(Lepton_pdgId[1]) == 11 && Lepton_pt[1] < 20',
    'categories' : {
        '0j' : 'zeroJet',
        '1j' : 'oneJet && Alt$(CleanJet_pt[1],0)<30',
        '2j' : 'multiJet && Alt$(CleanJet_pt[2],0)<30'
    }
}

# Same-flavor
cuts['SS_pt2lt20_sf'] = {
    'expr' : 'Lepton_pdgId[0]*Lepton_pdgId[1] > 0 && ( (abs(Lepton_pdgId[0]) == 11 && abs(Lepton_pdgId[1]) == 11) || (abs(Lepton_pdgId[0]) == 13 && abs(Lepton_pdgId[1]) == 13) ) && abs(mll-91.2) > 20 && Lepton_pt[1] < 20',
    'categories' : {
        '0j' : 'zeroJet',
        '1j' : 'oneJet && Alt$(CleanJet_pt[1],0)<30',
        '2j' : 'multiJet && Alt$(CleanJet_pt[2],0)<30'
    }
}

# Same-flavor (ee)
cuts['SS_pt2lt20_ee'] = {
    'expr' : 'Lepton_pdgId[0]*Lepton_pdgId[1] == 11*11 && abs(Lepton_pdgId[0]) == 11 && abs(Lepton_pdgId[1]) == 11 && abs(mll-91.2) > 20 && Lepton_pt[1] < 20',
    'categories' : {
        '0j' : 'zeroJet',
        '1j' : 'oneJet && Alt$(CleanJet_pt[1],0)<30',
        '2j' : 'multiJet && Alt$(CleanJet_pt[2],0)<30'
    }
}

# Same-flavor (mm)
cuts['SS_pt2lt20_mm'] = {
    'expr' : 'Lepton_pdgId[0]*Lepton_pdgId[1] == 13*13 && abs(Lepton_pdgId[0]) == 13 && abs(Lepton_pdgId[1]) == 13 && abs(mll-91.2) > 20 && Lepton_pt[1] < 20',
    'categories' : {
        '0j' : 'zeroJet',
        '1j' : 'oneJet && Alt$(CleanJet_pt[1],0)<30',
        '2j' : 'multiJet && Alt$(CleanJet_pt[2],0)<30'
    }
}
