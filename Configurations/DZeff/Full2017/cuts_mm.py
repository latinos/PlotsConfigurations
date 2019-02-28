# cuts

supercut = ' Lepton_pt[0]>20 && Lepton_pt[1]>10 && (nLepton>=2 && Alt$(Lepton_pt[2],0)<10) \
             && (abs(Lepton_pdgId[0]) == 13 || Lepton_pt[0] > 25 )  \
             && (abs(Lepton_pdgId[1]) == 13 || Lepton_pt[1] > 13 )  \
             && fabs(91.1876 - mll) < 15  \
             && (Lepton_pdgId[0] * Lepton_pdgId[1] == -13*13)  \
               '               

cuts['uu_den'] = 'HLT_Mu17_TrkIsoVVL_Mu8_TrkIsoVVL \
               '

cuts['uu_num'] = '(HLT_Mu17_TrkIsoVVL_Mu8_TrkIsoVVL && HLT_Mu17_TrkIsoVVL_Mu8_TrkIsoVVL_DZ_Mass8) \
               '
