# cuts

# Second lepton veto already done in post-processing 
# and Lepton WP setup in samples.py
supercut = ' ((Lepton_pt[0]>27. && abs(Lepton_pdgId[0])==13) || (Lepton_pt[0]>35. && abs(Lepton_pdgId[0])==11) ) \
            && nCleanJet >= 1 \
            && PuppiMET_pt < 30 \
            '

cuts['ele_lowmtw'] = 'abs(Lepton_pdgId[0])==11 && mtw1 < 20.'
cuts['mu_lowmtw'] =  'abs(Lepton_pdgId[0])==13 && mtw1 < 20.'

cuts['ele_lowmtw_jetet35'] = 'abs(Lepton_pdgId[0])==11 && PassJet_Et35 > 0.5 && mtw1 < 20.'
cuts['mu_lowmtw_jetet35'] =  'abs(Lepton_pdgId[0])==13 && PassJet_Et35 > 0.5 && mtw1 < 20.'

cuts['ele'] = 'abs(Lepton_pdgId[0])==11'
cuts['mu'] =  'abs(Lepton_pdgId[0])==13'

cuts['ele_jetet35'] = 'abs(Lepton_pdgId[0])==11 && PassJet_Et35 > 0.5 '
cuts['mu_jetet35'] =  'abs(Lepton_pdgId[0])==13 && PassJet_Et35 > 0.5 '

cuts['ele_4jets'] = 'abs(Lepton_pdgId[0])==11 && Alt$(CleanJet_pt[3],-1)>=30'
cuts['mu_4jets'] =  'abs(Lepton_pdgId[0])==13 && Alt$(CleanJet_pt[3],-1)>=30'
