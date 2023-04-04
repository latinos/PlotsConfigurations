# cuts

supercut = 'mll>12 \
         && Lepton_pt[0]>25 \
         && Lepton_pt[1]>10 \
         && (abs(Lepton_pdgId[1])==13 || Lepton_pt[1]>13) \
         && (nLepton>=2 && Alt$(Lepton_pt[2],0)<10) \
         && abs(Lepton_eta[0])<2.5 && abs(Lepton_eta[1])<2.5 \
         && ptll>30 \
         && PuppiMET_pt > 20 \
         && (Lepton_pdgId[0]*Lepton_pdgId[1] == -11*13) \
         '

# # Inclusive regions
# cuts['Top_ee_incl'] = '(Lepton_pdgId[0] * Lepton_pdgId[1] == -11*11) && mll > 110 && ((zeroJet && !bVeto) || bReq)'
# cuts['Top_mm_incl'] = '(Lepton_pdgId[0] * Lepton_pdgId[1] == -13*13) && mll > 110 && ((zeroJet && !bVeto) || bReq)'
# cuts['Top_df_incl'] = '(Lepton_pdgId[0] * Lepton_pdgId[1] == -13*11) && mll > 50  && ((zeroJet && !bVeto) || bReq)'


# Jet bins regions
cuts['Top_cr']  = {
    'expr' : 'topcr',
    'categories' : {
        '0j' : 'zeroJet',
        '1j' : 'oneJet && Alt$(CleanJet_pt[1],0)<30',
        '2j' : '(mjj<65 || mjj>105) && mjj<120 && multiJet',
    }
}

# 0 Jets horns region
cuts['Top_0j_Horns']  = 'topcr && Alt$(CleanJet_pt[0], 0) > 0 && abs(Alt$(CleanJet_eta[0],0)) > 2.5 && abs(Alt$(CleanJet_eta[0],0)) < 3.2'

# Jet bins regions - only leading jet b tagged
cuts['Lead_bjet']  = {
    'expr' : 'lead_topcr',
    'categories' : {
        '0j' : 'zeroJet',
        '1j' : 'oneJet && Alt$(CleanJet_pt[1],0)<30',
        '2j' : '(mjj<65 || mjj>105) && mjj<120 && multiJet',
    }
}
