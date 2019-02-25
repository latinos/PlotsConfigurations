# cuts

supercut = ' mll > 12 \
             && Lepton_pt[0]>20 && Lepton_pt[1]>10 && (nLepton>=2 && Alt$(Lepton_pt[2],0)<10) \
             && run >= 281613 \
             && fabs(91.1876 - mll) < 15  \
               '               

cuts['uu_den'] = '(Lepton_pdgId[0] * Lepton_pdgId[1] == -13*13)   \
             && ( HLT_TkMu17_TrkIsoVVL_TkMu8_TrkIsoVVL || HLT_Mu17_TrkIsoVVL_Mu8_TrkIsoVVL ) \
               '

cuts['uu_num'] = '(Lepton_pdgId[0] * Lepton_pdgId[1] == -13*13)   \
             && ( ( HLT_TkMu17_TrkIsoVVL_TkMu8_TrkIsoVVL_DZ && HLT_TkMu17_TrkIsoVVL_TkMu8_TrkIsoVVL ) \
               || ( HLT_Mu17_TrkIsoVVL_Mu8_TrkIsoVVL_DZ && HLT_Mu17_TrkIsoVVL_Mu8_TrkIsoVVL ) ) \
               '

#&& ( Alt$(HLT_TkMu17_TrkIsoVVL_TkMu8_TrkIsoVVL,-1)==1 || Alt$(HLT_Mu17_TrkIsoVVL_Mu8_TrkIsoVVL,-1)==1) \
#&& ( ( Alt$(HLT_TkMu17_TrkIsoVVL_TkMu8_TrkIsoVVL_DZ,-1)==1 && Alt$(HLT_TkMu17_TrkIsoVVL_TkMu8_TrkIsoVVL)==1) \
#   ||( Alt$(HLT_Mu17_TrkIsoVVL_Mu8_TrkIsoVVL_DZ,-1)==1 && Alt$(HLT_Mu17_TrkIsoVVL_Mu8_TrkIsoVVL)==1)) \
