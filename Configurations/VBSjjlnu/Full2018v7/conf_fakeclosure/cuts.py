# cuts

# Second lepton veto already done in post-processing 
#and Lepton WP setup in samples.py
supercut = ' ((Lepton_pt[0]>27. && abs(Lepton_pdgId[0])==13) || (Lepton_pt[0]>35. && abs(Lepton_pdgId[0])==11) ) \
            && nCleanJet >= 1 \
            && mtw1 < 20. \
            && PuppiMET_pt < 20 \
            '

cuts['ele'] = 'abs(Lepton_pdgId[0])==11'
cuts['mu'] =  'abs(Lepton_pdgId[0])==13'

for Jet_Et in [25, 35, 45]:
    cuts['ele_Jet_Et'+str(Jet_Et)] = 'abs(Lepton_pdgId[0])==11 && PassJet_Et'+str(Jet_Et)+' > 0.5'
    cuts['mu_Jet_Et'+str(Jet_Et)] =  'abs(Lepton_pdgId[0])==13 && PassJet_Et'+str(Jet_Et)+' > 0.5'
    
