# cuts
supercut = 'nLepton>=2 \
         && Lepton_pdgId[0]*Lepton_pdgId[1] < 0 \
           '
# LepWPCut already implemented in Steps.py


##=== Define tag cut ===###

cuts['intergral'] = '1'

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

