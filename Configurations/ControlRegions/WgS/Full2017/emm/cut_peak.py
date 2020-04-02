






supercut = ' Lepton_pt[0] > 30 && Lepton_pt[1] > 30 && Lepton_pt[2] > 30 && abs(mll - 3.1) > 0.1  && (Lepton_eta[0])<2.1 &&  (Lepton_eta[1])<2.4 &&  (Lepton_eta[2])<2.4 \
              '


cuts['ZTommWToe']  = ' PuppiMET_pt > 30\
                          && ((fabs(Lepton_pdgId[0] * Lepton_pdgId[1] * Lepton_pdgId[2])== 11*13*13)) && (Lepton_pdgId[1] * Lepton_pdgId[2] < 0)  && (Lepton_isTightElectron_mvaFall17V1Iso_WP90[0]>0.5 ) && Lepton_isWgs[1]>0.5 && Lepton_isWgs[2]>0.5 && fabs(mllTwoThree - 3.1) > 0.1'



cuts['ZTommWToempmet']  = ' mpmet > 30\
                          && ((fabs(Lepton_pdgId[0] * Lepton_pdgId[1] * Lepton_pdgId[2])== 11*13*13)) && (Lepton_pdgId[1] * Lepton_pdgId[2] < 0)  && (Lepton_isTightElectron_mvaFall17V1Iso_WP90[0]>0.5 ) && Lepton_isWgs[1]>0.5 && Lepton_isWgs[2]>0.5 && fabs(mllTwoThree - 3.1) > 0.1'
cuts['ZTommWToemtw']  = ' mtw1 > 30\
                          && ((fabs(Lepton_pdgId[0] * Lepton_pdgId[1] * Lepton_pdgId[2])== 11*13*13)) && (Lepton_pdgId[1] * Lepton_pdgId[2] < 0)  && (Lepton_isTightElectron_mvaFall17V1Iso_WP90[0]>0.5) && Lepton_isWgs[1]>0.5 && Lepton_isWgs[2]>0.5 && fabs(mllTwoThree - 3.1) > 0.1'

cuts['ZTommWToemet']  = ' MET_pt > 30\
                          && ((fabs(Lepton_pdgId[0] * Lepton_pdgId[1] * Lepton_pdgId[2])== 11*13*13)) && (Lepton_pdgId[1] * Lepton_pdgId[2] < 0)  && (Lepton_isTightElectron_mvaFall17V1Iso_WP90[0]>0.5) && Lepton_isWgs[1]>0.5 && Lepton_isWgs[2]>0.5 && fabs(mllTwoThree - 3.1) > 0.1'
