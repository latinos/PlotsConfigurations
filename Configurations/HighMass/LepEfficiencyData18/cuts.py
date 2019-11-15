# cuts
# request one "forward" and one "backward" (in eta) and opposite third of detector in phi
supercut = 'nLepton>=2 \
         && Lepton_pdgId[0]/Lepton_pdgId[1] == -1 \
         && abs(abs(Lepton_phi [0] - Lepton_phi[1]) - 3.14) < 1.05 \
         && Lepton_eta[0]*Lepton_eta[1] < 0 \
           '
# LepWPCut already implemented in Steps.py, also requested for data samples anyway

##=== Define tag cut ===###

cuts['tag_el'] = {
    'expr': 'tag && abs(Lepton_pdgId[1]==11)',
    'categories': {
        '50-130': '50<=mll && mll<=130',
        '130-500': '130<mll && mll<=500',
        '500-2000': '500<mll && mll<=2000'
    }
}

cuts['tag_mu'] = {
    'expr': 'tag && abs(Lepton_pdgId[1]==13)',
    'categories': {
        '50-130': '50<=mll && mll<=130',
        '130-500': '130<mll && mll<=500',
        '500-2000': '500<mll && mll<=2000'
    }
}

cuts['tag_el_passed'] = {
    'expr': 'tag && abs(Lepton_pdgId[1]==11) && probe',
    'categories': {
        '50-130': '50<=mll && mll<=130',
        '130-500': '130<mll && mll<=500',
        '500-2000': '500<mll && mll<=2000'
    }
}


cuts['tag_mu_passed'] = {
    'expr': 'tag && abs(Lepton_pdgId[1]==13) && probe',
    'categories': {
        '50-130': '50<=mll && mll<=130',
        '130-500': '130<mll && mll<=500',
        '500-2000': '500<mll && mll<=2000'
    }
}

cuts['tag_el_50-2000'] = 'tag && abs(Lepton_pdgId[1]==11) && 50<mll && mll <= 2000'
cuts['tag_el_passed_50-2000'] = 'tag && abs(Lepton_pdgId[1]==11) && probe && 50<mll && mll <= 2000'


cuts['standard_notHighPt'] = {
    'expr': 'LepWPCut',
    'categories': {
        'el': 'abs(Lepton_pdgId[0])==11 && !(Electron_cutBased_HEEP[0] > 0.5)',
        'mu': 'abs(Lepton_pdgId[0])==13 && !(Muon_highPtId[0] > 0.5)'
    }
}

cuts['notStandard_highPt'] = {
    'expr': '!LepWPCut',
    'categories': {
        'el': 'abs(Lepton_pdgId[0])==11 && Electron_cutBased_HEEP[0] > 0.5',
        'mu': 'abs(Lepton_pdgId[0])==13 && Muon_highPtId[0] > 0.5'
    }
}
