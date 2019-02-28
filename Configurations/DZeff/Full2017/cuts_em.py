# cuts

supercut = ' Lepton_pt[0]>20 && Lepton_pt[1]>10 && (nLepton>=2 && Alt$(Lepton_pt[2],0)<10) \
             && (abs(Lepton_pdgId[0]) == 13 || Lepton_pt[0] > 25 )  \
             && (abs(Lepton_pdgId[1]) == 13 || Lepton_pt[1] > 13 )  \
             && mll > 60 \
             && (Lepton_pdgId[0] * Lepton_pdgId[1] == -11*13) \
               '               

cuts['eu_den'] = 'HLT_Mu12_TrkIsoVVL_Ele23_CaloIdL_TrackIdL_IsoVL \
               '

cuts['eu_num'] = '(HLT_Mu12_TrkIsoVVL_Ele23_CaloIdL_TrackIdL_IsoVL && HLT_Mu12_TrkIsoVVL_Ele23_CaloIdL_TrackIdL_IsoVL_DZ) \
               '
