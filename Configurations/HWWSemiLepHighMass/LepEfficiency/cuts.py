# cuts
supercut = 'nLepton>=2 \
           '
# LepWPCut already implemented in Steps.py


##=== Define tag cut ===###

cuts['first'] = {
    'expr': '1',
    'categories': {
        'el': 'abs(Lepton_pdgId[1])==11',
        'mu': 'abs(Lepton_pdgId[1])==13'
    }
}


cuts['tag'] = {
    'expr': 'tag && LepWPCut',
    'categories': {
        'el': 'abs(Lepton_pdgId[1])==11',
        'mu': 'abs(Lepton_pdgId[1])==13'
    }
}

cuts['untagged'] = {
    'expr': '!tag && LepWPCut',
    'categories': {
        'el': 'abs(Lepton_pdgId[1])==11',
        'mu': 'abs(Lepton_pdgId[1])==13'
    }
}

