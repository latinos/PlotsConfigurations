# cuts

supercut = 'mll>12 \
            && Lepton_pt[0]>25 \
            && Lepton_pt[1]>10 \
            && ( (Lepton_pdgId[0]*Lepton_pdgId[1] == 13*13) || (Lepton_pdgId[0]*Lepton_pdgId[1] == 13*11) || (Lepton_pdgId[0]*Lepton_pdgId[1] == 11*11) ) \
            && abs(Lepton_eta[0])<2.5 && abs(Lepton_eta[1])<2.5 \
            && PuppiMET_pt > 30 \
            && Alt$(CleanJet_pt[0],0)>30 \
            && Alt$(CleanJet_pt[1],0)>30 \
'

#            && abs(mll-91.2)>15 \
#            && bVeto \
