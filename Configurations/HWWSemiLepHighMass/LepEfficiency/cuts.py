# cuts
supercut = 'nLepton>=2 \
        && LepWPCut \
         '
# LepWPCut already implemented in Steps.py


##=== Define tag cut ===###
cuts['tag'] = {
    'expr': 'tag',
    'categories': {
        'el': 'abs(Lepton_pdgId[1])==11',
        'mu': 'abs(Lepton_pdgId[1])==13'
    }
}

cuts['untagged'] = {
    'expr': '!tag',
    'categories': {
        'el': 'abs(Lepton_pdgId[1])==11',
        'mu': 'abs(Lepton_pdgId[1])==13'
    }
}

