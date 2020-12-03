# cuts

# Second lepton veto already done in post-processing 
#and Lepton WP setup in samples.py
supercut = ' ((Lepton_pt[0]>27. && abs(Lepton_pdgId[0])==13) || (Lepton_pt[0]>35. && abs(Lepton_pdgId[0])==11) ) \
            && nCleanJet >= 1 \
            && mtw1 < 20. \
            && PuppiMET_pt < 20 \
            '

cut['ele'] = 'abs(Lepton_pdgId[0])==11'
cut['mu'] =  'abs(Lepton_pdgId[0])==13'

for Jet_Et in [25, 35, 45]:
    cut['ele_Jet_Et'+str(Jet_Et)] = 'abs(Lepton_pdgId[0])==11 && PassJet_Et'+str(Jet_Et)+' > 0.5'
    cut['mu_Jet_Et'+str(Jet_Et)] =  'abs(Lepton_pdgId[0])==13 && PassJet_Et'+str(Jet_Et)+' > 0.5'
    
