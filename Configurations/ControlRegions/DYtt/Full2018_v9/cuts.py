# cuts

supercut = 'Lepton_pt[0] > 25 \
         && Lepton_pt[1] > 10 \
         && (nLepton >= 2 && Alt$(Lepton_pt[2],0) < 10) \
         && PuppiMET_pt > 20 \
         && ptll > 30 \
         && mll > 30 \
         && mll < 80 \
         && mth < 60 \
'

cuts['hww2l2v_13TeV_dytt'] = { 
    'expr'       : 'Lepton_pdgId[0] * Lepton_pdgId[1] == -11*13',
    'categories' : {
        '0j' : 'zeroJet',
        '1j' : 'oneJet && Alt$(CleanJet_pt[1],0) < 30',
        '2j' : 'multiJet',
    }
}

