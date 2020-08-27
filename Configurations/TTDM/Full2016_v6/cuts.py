# cuts

supercut = """Lepton_pt[0] > 25. && Lepton_pt[1] > 20. \
&& (nLepton>=2 && Alt$(Lepton_pt[2],0)<10) \
&& (Lepton_pdgId[0]*Lepton_pdgId[1]) < 0 \
&& abs(Lepton_eta[0])<2.4 && abs(Lepton_eta[1])<2.4 \
&& (mll > 20.) \
&& (Sum$(CleanJet_pt >= 30. && abs(CleanJet_eta) < 2.4) >= 1) && nbJet > 0"""

cuts['inclusiveCR_ll'] = '1'
cuts['inclusiveCR_ee'] = '(Lepton_pdgId[0] * Lepton_pdgId[1] == -11*11)'
cuts['inclusiveCR_mm'] = '(Lepton_pdgId[0] * Lepton_pdgId[1] == -13*13)'
cuts['inclusiveCR_df'] = '(Lepton_pdgId[0] * Lepton_pdgId[1] == -11*13)'

cuts['controlCR_ll'] = 'mt2ll < 40.'
cuts['controlCR_ee'] = 'mt2ll < 40. && (Lepton_pdgId[0] * Lepton_pdgId[1] == -11*11)'
cuts['controlCR_mm'] = 'mt2ll < 40. && (Lepton_pdgId[0] * Lepton_pdgId[1] == -13*13)'
cuts['controlCR_df'] = 'mt2ll < 40. && (Lepton_pdgId[0] * Lepton_pdgId[1] == -11*13)'

cuts['dyCR_ll_1jetonly'] = 'mt2ll > 40. && (Lepton_pdgId[0] * Lepton_pdgId[1] == -11*13 || (mll > 76 && mll < 106)) && (Sum$(CleanJet_pt >= 30. && abs(CleanJet_eta) < 2.4) == 1)'
cuts['dyCR_ee_1jetonly'] = 'mt2ll > 40. && (Lepton_pdgId[0] * Lepton_pdgId[1] == -11*13 || (mll > 76 && mll < 106)) && (Lepton_pdgId[0] * Lepton_pdgId[1] == -11*11) && (Sum$(CleanJet_pt >= 30. && abs(CleanJet_eta) < 2.4) == 1)'
cuts['dyCR_mm_1jetonly'] = 'mt2ll > 40. && (Lepton_pdgId[0] * Lepton_pdgId[1] == -11*13 || (mll > 76 && mll < 106)) && (Lepton_pdgId[0] * Lepton_pdgId[1] == -13*13) && (Sum$(CleanJet_pt >= 30. && abs(CleanJet_eta) < 2.4) == 1)'
cuts['dyCR_df_1jetonly'] = 'mt2ll > 40. && (Lepton_pdgId[0] * Lepton_pdgId[1] == -11*13 || (mll > 76 && mll < 106)) && (Lepton_pdgId[0] * Lepton_pdgId[1] == -11*13) && (Sum$(CleanJet_pt >= 30. && abs(CleanJet_eta) < 2.4) == 1)'

cuts['dyCR_ll_1jetormore'] = 'mt2ll > 40. && (Lepton_pdgId[0] * Lepton_pdgId[1] == -11*13 || (mll > 76 && mll < 106))'
cuts['dyCR_ee_1jetoremore'] = 'mt2ll > 40. && (Lepton_pdgId[0] * Lepton_pdgId[1] == -11*13 || (mll > 76 && mll < 106)) && (Lepton_pdgId[0] * Lepton_pdgId[1] == -11*11)'
cuts['dyCR_mm_1jetoremore'] = 'mt2ll > 40. && (Lepton_pdgId[0] * Lepton_pdgId[1] == -11*13 || (mll > 76 && mll < 106)) && (Lepton_pdgId[0] * Lepton_pdgId[1] == -13*13)'
cuts['dyCR_df_1jetormore'] = 'mt2ll > 40. && (Lepton_pdgId[0] * Lepton_pdgId[1] == -11*13 || (mll > 76 && mll < 106)) && (Lepton_pdgId[0] * Lepton_pdgId[1] == -11*13)'

cuts['dyCR_ll_2jetsormore'] = 'mt2ll > 40. && (Lepton_pdgId[0] * Lepton_pdgId[1] == -11*13 || (mll > 76 && mll < 106)) && (Sum$(CleanJet_pt >= 30. && abs(CleanJet_eta) < 2.4) > 1)'
cuts['dyCR_ee_2jetsormore'] = 'mt2ll > 40. && (Lepton_pdgId[0] * Lepton_pdgId[1] == -11*13 || (mll > 76 && mll < 106)) && (Lepton_pdgId[0] * Lepton_pdgId[1] == -11*11) && (Sum$(CleanJet_pt >= 30. && abs(CleanJet_eta) < 2.4) > 1)'
cuts['dyCR_mm_2jetsormore'] = 'mt2ll > 40. && (Lepton_pdgId[0] * Lepton_pdgId[1] == -11*13 || (mll > 76 && mll < 106)) && (Lepton_pdgId[0] * Lepton_pdgId[1] == -13*13) && (Sum$(CleanJet_pt >= 30. && abs(CleanJet_eta) < 2.4) > 1)'
cuts['dyCR_df_2jetsormore'] = 'mt2ll > 40. && (Lepton_pdgId[0] * Lepton_pdgId[1] == -11*13 || (mll > 76 && mll < 106)) && (Lepton_pdgId[0] * Lepton_pdgId[1] == -11*13) && (Sum$(CleanJet_pt >= 30. && abs(CleanJet_eta) < 2.4) > 1)'
