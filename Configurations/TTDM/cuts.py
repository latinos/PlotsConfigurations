
#cuts

#cuts = {}

#supercut = 'Lepton_pt[0] > 25. && Lepton_pt[1] > 20. \
#            && (Lepton_pdgId[0] * Lepton_pdgId[1]) < 0'

supercut = 'nLepton >= 2'

cuts['all'] = '1'

cuts['leptons'] = 'Lepton_pt[0] > 25. && Lepton_pt[1] > 20. && (Lepton_pdgId[0] * Lepton_pdgId[1]) < 0'

cuts['ttbar'] = 'Lepton_pt[0] > 25. && Lepton_pt[1] > 20. && (Lepton_pdgId[0] * Lepton_pdgId[1]) < 0 && njet > 1 && mll > 20. && (fabs(Lepton_pdgId[0] * Lepton_pdgId[1]) == 143) || (fabs(mll - 91.2) > 15)'

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

