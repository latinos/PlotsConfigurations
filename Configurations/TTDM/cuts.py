#cuts

#cuts = {}

#supercut = 'Lepton_pt[0] > 25. && Lepton_pt[1] > 20. \
#            && (Lepton_pdgId[0] * Lepton_pdgId[1]) < 0'

supercut = 'nLepton >= 2 && ((fabs(Lepton_pdgId[0]) == 13 && Lepton_isTightMuon_cut_Tight80x_HWWW[0] > 0.5) || (fabs(Lepton_pdgId[0]) == 11 && Electron_mvaFall17Iso_WP80[0] > 0.5 && Electron_dz[Lepton_electronIdx[0]]< 0.1) && ((Electron_pt[Lepton_electronIdx[0]]>20 && Electron_dxy[Lepton_electronIdx[0]]< 0.02)||(Electron_pt[Lepton_electronIdx[0]]<=20 && Electron_dxy[Lepton_electronIdx[0]]< 0.01)) && ((fabs(Lepton_pdgId[1]) == 13 && Lepton_isTightMuon_cut_Tight80x_HWWW[1] > 0.5) || (fabs(Lepton_pdgId[1]) == 11 && Electron_mvaFall17Iso_WP80[1] > 0.5 && Electron_dz[Lepton_electronIdx[1]]< 0.1 && ((Electron_pt[Lepton_electronIdx[1]]>20 && Electron_dxy[Lepton_electronIdx[1]]< 0.02)||(Electron_pt[Lepton_electronIdx[1]]<=20 && Electron_dxy[Lepton_electronIdx[1]]< 0.01)))))'


cuts['supercut_ll'] = '1'

cuts['leptons_ll'] = 'Lepton_pt[0] > 25. && Lepton_pt[1] > 20. && (Lepton_pdgId[0] * Lepton_pdgId[1]) < 0'

cuts['leptons_ee'] = 'Lepton_pt[0] > 25. && Lepton_pt[1] > 20. && (Lepton_pdgId[0] * Lepton_pdgId[1]) < 0 && (fabs(Lepton_pdgId[0] * Lepton_pdgId[1]) == 121)'
cuts['leptons_em'] = 'Lepton_pt[0] > 25. && Lepton_pt[1] > 20. && (Lepton_pdgId[0] * Lepton_pdgId[1]) < 0 && (fabs(Lepton_pdgId[0] * Lepton_pdgId[1]) == 143)'
cuts['leptons_mm'] = 'Lepton_pt[0] > 25. && Lepton_pt[1] > 20. && (Lepton_pdgId[0] * Lepton_pdgId[1]) < 0 && (fabs(Lepton_pdgId[0] * Lepton_pdgId[1]) == 169)'

cuts['ttbar_ll'] = 'Lepton_pt[0] > 25. && Lepton_pt[1] > 20. && (Lepton_pdgId[0] * Lepton_pdgId[1]) < 0 && njet > 1 && mll > 20. && (fabs(Lepton_pdgId[0] * Lepton_pdgId[1]) == 143) || (fabs(mll - 91.2) > 15)'

cuts['ttbar_ee'] = 'Lepton_pt[0] > 25. && Lepton_pt[1] > 20. && (Lepton_pdgId[0] * Lepton_pdgId[1]) < 0 && njet > 1 && mll > 20. && (fabs(Lepton_pdgId[0] * Lepton_pdgId[1]) == 143) || (fabs(mll - 91.2) > 15) && (fabs(Lepton_pdgId[0] * Lepton_pdgId[1]) == 121)'
cuts['ttbar_em'] = 'Lepton_pt[0] > 25. && Lepton_pt[1] > 20. && (Lepton_pdgId[0] * Lepton_pdgId[1]) < 0 && njet > 1 && mll > 20. && (fabs(Lepton_pdgId[0] * Lepton_pdgId[1]) == 143) || (fabs(mll - 91.2) > 15) && (fabs(Lepton_pdgId[0] * Lepton_pdgId[1]) == 143)'
cuts['ttbar_mm'] = 'Lepton_pt[0] > 25. && Lepton_pt[1] > 20. && (Lepton_pdgId[0] * Lepton_pdgId[1]) < 0 && njet > 1 && mll > 20. && (fabs(Lepton_pdgId[0] * Lepton_pdgId[1]) == 143) || (fabs(mll - 91.2) > 15) && (fabs(Lepton_pdgId[0] * Lepton_pdgId[1]) == 169)'

# Missing the nbjet > 0, pt3 < 10 

# Different flavour only: Use exclusive DY sample!!!
# cuts['monoH_MVA_em'] = 'njet >= 0 \
#             && metTtrk > 100 \
#             && dphilmet1 > 2.4 \
#             && dphilmet2 > 2.4 \
# '

# 11 = e
# 13 = mu
# 15 = tau

