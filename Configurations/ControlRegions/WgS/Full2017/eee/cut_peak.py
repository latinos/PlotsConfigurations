






supercut = ' Lepton_pt[0] > 30 && Lepton_pt[1] > 25 && Lepton_pt[2] > 25 && (Lepton_eta[0])<2.1 &&  (Lepton_eta[1])<2.1 &&  (Lepton_eta[2])<2.1 \
              '

cuts['ZToeeWToe']  = ' PuppiMET_pt > 30\
                          && ((fabs(Lepton_pdgId[0] * Lepton_pdgId[1] * Lepton_pdgId[2])== 11*11*11)) && (Lepton_pdgId[1] * Lepton_pdgId[2] < 0)  && (Lepton_isTightElectron_mvaFall17V1Iso_WP90[0]>0.5 ) && Lepton_isWgs[1]>0.5 && Lepton_isWgs[2]>0.5 && fabs(mllTwoThree - 3.1) > 0.1&& fabs(mll - 3.1) > 0.1 '

cuts['ZToeeWToempmet']  = ' mpmet > 30\
                          && ((fabs(Lepton_pdgId[0] * Lepton_pdgId[1] * Lepton_pdgId[2])== 11*11*11)) && (Lepton_pdgId[1] * Lepton_pdgId[2] < 0)  && (Lepton_isTightElectron_mvaFall17V1Iso_WP90[0]>0.5 ) && Lepton_isWgs[1]>0.5 && Lepton_isWgs[2]>0.5 && fabs(mllTwoThree - 3.1) > 0.1'
cuts['ZToeeWToemtw']  = ' mtw1 > 30\
                          && ((fabs(Lepton_pdgId[0] * Lepton_pdgId[1] * Lepton_pdgId[2])== 11*11*11)) && (Lepton_pdgId[1] * Lepton_pdgId[2] < 0)  && (Lepton_isTightElectron_mvaFall17V1Iso_WP90[0]>0.5) && Lepton_isWgs[1]>0.5 && Lepton_isWgs[2]>0.5 && fabs(mllTwoThree - 3.1) > 0.1'

cuts['ZToeeWToemet']  = ' MET_pt > 30\
                          && ((fabs(Lepton_pdgId[0] * Lepton_pdgId[1] * Lepton_pdgId[2])== 11*11*11)) && (Lepton_pdgId[1] * Lepton_pdgId[2] < 0)  && (Lepton_isTightElectron_mvaFall17V1Iso_WP90[0]>0.5) && Lepton_isWgs[1]>0.5 && Lepton_isWgs[2]>0.5 && fabs(mllTwoThree - 3.1) > 0.1 '
