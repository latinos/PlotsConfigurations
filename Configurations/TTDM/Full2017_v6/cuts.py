# cuts

supercut = """Lepton_pt[0] > 25. && Lepton_pt[1] > 20. \
&& (nLepton>=2 && Alt$(Lepton_pt[2],0)<10) \
&& (Lepton_pdgId[0]*Lepton_pdgId[1]) < 0 \
&& abs(Lepton_eta[0])<2.4 && abs(Lepton_eta[1])<2.4 \
&& (mll > 20.) \
&& (Lepton_pdgId[0] * Lepton_pdgId[1] == -11*13 || PuppiMET_pt > 50.) \
&& (Lepton_pdgId[0] * Lepton_pdgId[1] == -11*13 || (mll > 76 && mll < 106)) \
&& nbJet > 0 \
&& (Sum$(CleanJet_pt >= 30. && abs(CleanJet_eta) < 2.4) >= 1)"""

#cuts['dyCR_ll'] = '1' #Similar to the signal region, currently blinded
cuts['dyCR_ee'] = '(Lepton_pdgId[0] * Lepton_pdgId[1] == -11*11)'
cuts['dyCR_mm'] = '(Lepton_pdgId[0] * Lepton_pdgId[1] == -13*13)'
#cuts['dyCR_df'] = '(Lepton_pdgId[0] * Lepton_pdgId[1] == -11*13)' #Similar to the signal region, currently blinded
