# cuts

supercut = ' mll > 12 \
             && Lepton_pt[0]>20 && Lepton_pt[1]>10 && (nLepton>=2 && Alt$(Lepton_pt[2],0)<10) \
             && fabs(91.1876 - mll) < 15  \
             && HLT_Ele23_Ele12_CaloIdL_TrackIdL_IsoVL \
               '               

cuts['ee_den'] = '(Lepton_pdgId[0] * Lepton_pdgId[1] == -11*11)   \
               '
               
cuts['ee_num'] = '(Lepton_pdgId[0] * Lepton_pdgId[1] == -11*11)   \
             && (HLT_Ele23_Ele12_CaloIdL_TrackIdL_IsoVL && HLT_Ele23_Ele12_CaloIdL_TrackIdL_IsoVL_DZ) \
               '
