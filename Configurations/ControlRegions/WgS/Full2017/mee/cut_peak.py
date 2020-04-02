






supercut = ' Lepton_pt[0] > 40 && Lepton_pt[1] > 25 && Lepton_pt[2] > 25 && abs(mll - 3.1) > 0.1 && (Lepton_eta[0])<2.4 &&  (Lepton_eta[1])<2.1 &&  (Lepton_eta[2])<2.1   \
              '

cuts['ZToeeWTom']  = ' PuppiMET_pt > 30\
                          && ((fabs(Lepton_pdgId[0] * Lepton_pdgId[1] * Lepton_pdgId[2])== 13*11*11)) && (Lepton_pdgId[1] * Lepton_pdgId[2] < 0)  && (Lepton_isTightMuon_cut_Tight_HWWW[0]>0.5 ) && Lepton_isWgs[1]>0.5 && Lepton_isWgs[2]>0.5 && fabs(mllTwoThree - 3.1) > 0.1'

cuts['ZToeeWTommpmet']  = ' mpmet > 30\
                          && ((fabs(Lepton_pdgId[0] * Lepton_pdgId[1] * Lepton_pdgId[2])== 13*11*11)) && (Lepton_pdgId[1] * Lepton_pdgId[2] < 0)  && (Lepton_isTightMuon_cut_Tight_HWWW[0]>0.5 ) && Lepton_isWgs[1]>0.5 && Lepton_isWgs[2]>0.5 && fabs(mllTwoThree - 3.1) > 0.1'
cuts['ZToeeWTommtw']  = ' mtw1 > 30\
                          && ((fabs(Lepton_pdgId[0] * Lepton_pdgId[1] * Lepton_pdgId[2])== 13*11*11)) && (Lepton_pdgId[1] * Lepton_pdgId[2] < 0)  && (Lepton_isTightMuon_cut_Tight_HWWW[0]>0.5) && Lepton_isWgs[1]>0.5 && Lepton_isWgs[2]>0.5 && fabs(mllTwoThree - 3.1) > 0.1'

cuts['ZToeeWTommet']  = ' MET_pt > 30\
                          && ((fabs(Lepton_pdgId[0] * Lepton_pdgId[1] * Lepton_pdgId[2])== 13*11*11)) && (Lepton_pdgId[1] * Lepton_pdgId[2] < 0)  && (Lepton_isTightMuon_cut_Tight_HWWW[0]>0.5) && Lepton_isWgs[1]>0.5 && Lepton_isWgs[2]>0.5 && fabs(mllTwoThree - 3.1) > 0.1 '
