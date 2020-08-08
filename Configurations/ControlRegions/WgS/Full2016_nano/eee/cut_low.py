


supercut = '  (Lepton_eta[1])<2.1 &&  (Lepton_eta[2])<2.1 && (Lepton_eta[2])<2.1  \
              '


cuts['preselection'] = '1'  
              




cuts['ZToeeWToe']  = ' Lepton_pt[0] > 15 && Lepton_pt[1] > 6 && Lepton_pt[2] > 6 && PuppiMET_pt > 10 \
                          && ((fabs(Lepton_pdgId[0] * Lepton_pdgId[1] * Lepton_pdgId[2])== 11*11*11)) && (Lepton_pdgId[1] * Lepton_pdgId[2] < 0)  && (Lepton_isTightElectron_mva_90p_Iso2016[0]>0.5 ) && Lepton_isWgs[1]>0.5 && Lepton_isWgs[2]>0.5 && fabs(mllTwoThree - 3.1) > 0.1 '

cuts['ZToeeWToempmet']  = ' Lepton_pt[0] > 15 && Lepton_pt[1] > 6 && Lepton_pt[2] > 6 && mpmet > 10\
                          && ((fabs(Lepton_pdgId[0] * Lepton_pdgId[1] * Lepton_pdgId[2])== 11*11*11)) && (Lepton_pdgId[1] * Lepton_pdgId[2] < 0)  && (Lepton_isTightElectron_mva_90p_Iso2016[0]>0.5 ) && Lepton_isWgs[1]>0.5 && Lepton_isWgs[2]>0.5 && fabs(mllTwoThree - 3.1) > 0.1 '

cuts['ZToeeWToemtw']  = ' Lepton_pt[0] > 15 && Lepton_pt[1] > 6 && Lepton_pt[2] > 6 && mtw1 > 10\
                          && ((fabs(Lepton_pdgId[0] * Lepton_pdgId[1] * Lepton_pdgId[2])== 11*11*11)) && (Lepton_pdgId[1] * Lepton_pdgId[2] < 0)  && (Lepton_isTightElectron_mva_90p_Iso2016[0]>0.5) && Lepton_isWgs[1]>0.5 && Lepton_isWgs[2]>0.5 && fabs(mllTwoThree - 3.1) > 0.1 '

cuts['ZToeeWToemet']  = ' Lepton_pt[0] > 15 && Lepton_pt[1] > 6 && Lepton_pt[2] > 6 && MET_pt > 10\
                          && ((fabs(Lepton_pdgId[0] * Lepton_pdgId[1] * Lepton_pdgId[2])== 11*11*11)) && (Lepton_pdgId[1] * Lepton_pdgId[2] < 0)  && (Lepton_isTightElectron_mva_90p_Iso2016[0]>0.5) && Lepton_isWgs[1]>0.5 && Lepton_isWgs[2]>0.5 && fabs(mllTwoThree - 3.1) > 0.1  '


'''

cuts['ZToeeWToe']  = ' Lepton_pt[0] > 20 && Lepton_pt[1] > 8 && Lepton_pt[2] > 8 && PuppiMET_pt > 15 \
                          && ((fabs(Lepton_pdgId[0] * Lepton_pdgId[1] * Lepton_pdgId[2])== 11*11*11)) && (Lepton_pdgId[1] * Lepton_pdgId[2] < 0)  && (Lepton_isTightElectron_mva_90p_Iso2016[0]>0.5 ) && Lepton_isWgs[1]>0.5 && Lepton_isWgs[2]>0.5 && fabs(mllTwoThree - 3.1) > 0.1 '

cuts['ZToeeWToempmet']  = ' Lepton_pt[0] > 30 && Lepton_pt[1] > 8 && Lepton_pt[2] > 8 && mpmet > 30\
                          && ((fabs(Lepton_pdgId[0] * Lepton_pdgId[1] * Lepton_pdgId[2])== 11*11*11)) && (Lepton_pdgId[1] * Lepton_pdgId[2] < 0)  && (Lepton_isTightElectron_mva_90p_Iso2016[0]>0.5 ) && Lepton_isWgs[1]>0.5 && Lepton_isWgs[2]>0.5 && fabs(mllTwoThree - 3.1) > 0.1 '

cuts['ZToeeWToemtw']  = ' Lepton_pt[0] > 30 && Lepton_pt[1] > 8 && Lepton_pt[2] > 8 && mtw1 > 30\
                          && ((fabs(Lepton_pdgId[0] * Lepton_pdgId[1] * Lepton_pdgId[2])== 11*11*11)) && (Lepton_pdgId[1] * Lepton_pdgId[2] < 0)  && (Lepton_isTightElectron_mva_90p_Iso2016[0]>0.5) && Lepton_isWgs[1]>0.5 && Lepton_isWgs[2]>0.5 && fabs(mllTwoThree - 3.1) > 0.1 '

cuts['ZToeeWToemet']  = ' Lepton_pt[0] > 30 && Lepton_pt[1] > 8 && Lepton_pt[2] > 8 && MET_pt > 30\
                          && ((fabs(Lepton_pdgId[0] * Lepton_pdgId[1] * Lepton_pdgId[2])== 11*11*11)) && (Lepton_pdgId[1] * Lepton_pdgId[2] < 0)  && (Lepton_isTightElectron_mva_90p_Iso2016[0]>0.5) && Lepton_isWgs[1]>0.5 && Lepton_isWgs[2]>0.5 && fabs(mllTwoThree - 3.1) > 0.1  '

cuts['ZToeeWToe1']  = ' Lepton_pt[0] > 30 && Lepton_pt[1] > 20 && Lepton_pt[2] > 20 && PuppiMET_pt > 30 \
                          && ((fabs(Lepton_pdgId[0] * Lepton_pdgId[1] * Lepton_pdgId[2])== 11*11*11)) && (Lepton_pdgId[1] * Lepton_pdgId[2] < 0)  && (Lepton_isTightElectron_mva_90p_Iso2016[0]>0.5 ) && Lepton_isWgs[1]>0.5 && Lepton_isWgs[2]>0.5 && fabs(mllTwoThree - 3.1) > 0.1 && fabs(mll - 3.1) > 0.1 '

cuts['ZToeeWToempmet1']  = ' Lepton_pt[0] > 30 && Lepton_pt[1] > 20 && Lepton_pt[2] > 20 && mpmet > 30\
                          && ((fabs(Lepton_pdgId[0] * Lepton_pdgId[1] * Lepton_pdgId[2])== 11*11*11)) && (Lepton_pdgId[1] * Lepton_pdgId[2] < 0)  && (Lepton_isTightElectron_mva_90p_Iso2016[0]>0.5 ) && Lepton_isWgs[1]>0.5 && Lepton_isWgs[2]>0.5 && fabs(mllTwoThree - 3.1) > 0.1 '

cuts['ZToeeWToemtw1']  = ' Lepton_pt[0] > 30 && Lepton_pt[1] > 20 && Lepton_pt[2] > 20 && mtw1 > 30\
                          && ((fabs(Lepton_pdgId[0] * Lepton_pdgId[1] * Lepton_pdgId[2])== 11*11*11)) && (Lepton_pdgId[1] * Lepton_pdgId[2] < 0)  && (Lepton_isTightElectron_mva_90p_Iso2016[0]>0.5) && Lepton_isWgs[1]>0.5 && Lepton_isWgs[2]>0.5 && fabs(mllTwoThree - 3.1) > 0.1 '

cuts['ZToeeWToemet1']  = ' Lepton_pt[0] > 30 && Lepton_pt[1] > 20 && Lepton_pt[2] > 20 && MET_pt > 30\
                          && ((fabs(Lepton_pdgId[0] * Lepton_pdgId[1] * Lepton_pdgId[2])== 11*11*11)) && (Lepton_pdgId[1] * Lepton_pdgId[2] < 0)  && (Lepton_isTightElectron_mva_90p_Iso2016[0]>0.5) && Lepton_isWgs[1]>0.5 && Lepton_isWgs[2]>0.5 && fabs(mllTwoThree - 3.1) > 0.1  '


cuts['ZToeeWToe2']  = ' Lepton_pt[0] > 30 && Lepton_pt[1] > 10 && Lepton_pt[2] > 10 && PuppiMET_pt > 20 \
                          && ((fabs(Lepton_pdgId[0] * Lepton_pdgId[1] * Lepton_pdgId[2])== 11*11*11)) && (Lepton_pdgId[1] * Lepton_pdgId[2] < 0)  && (Lepton_isTightElectron_mva_90p_Iso2016[0]>0.5 ) && Lepton_isWgs[1]>0.5 && Lepton_isWgs[2]>0.5 && fabs(mllTwoThree - 3.1) > 0.1 && fabs(mll - 3.1) > 0.1 '

cuts['ZToeeWToempmet2']  = ' Lepton_pt[0] > 30 && Lepton_pt[1] > 10 && Lepton_pt[2] > 10 && mpmet > 20\
                          && ((fabs(Lepton_pdgId[0] * Lepton_pdgId[1] * Lepton_pdgId[2])== 11*11*11)) && (Lepton_pdgId[1] * Lepton_pdgId[2] < 0)  && (Lepton_isTightElectron_mva_90p_Iso2016[0]>0.5 ) && Lepton_isWgs[1]>0.5 && Lepton_isWgs[2]>0.5 && fabs(mllTwoThree - 3.1) > 0.1 '

cuts['ZToeeWToemtw2']  = ' Lepton_pt[0] > 30 && Lepton_pt[1] > 10 && Lepton_pt[2] > 10 && mtw1 > 20\
                          && ((fabs(Lepton_pdgId[0] * Lepton_pdgId[1] * Lepton_pdgId[2])== 11*11*11)) && (Lepton_pdgId[1] * Lepton_pdgId[2] < 0)  && (Lepton_isTightElectron_mva_90p_Iso2016[0]>0.5) && Lepton_isWgs[1]>0.5 && Lepton_isWgs[2]>0.5 && fabs(mllTwoThree - 3.1) > 0.1 '

cuts['ZToeeWToemet2']  = ' Lepton_pt[0] > 30 && Lepton_pt[1] > 10 && Lepton_pt[2] > 10 && MET_pt > 20\
                          && ((fabs(Lepton_pdgId[0] * Lepton_pdgId[1] * Lepton_pdgId[2])== 11*11*11)) && (Lepton_pdgId[1] * Lepton_pdgId[2] < 0)  && (Lepton_isTightElectron_mva_90p_Iso2016[0]>0.5) && Lepton_isWgs[1]>0.5 && Lepton_isWgs[2]>0.5 && fabs(mllTwoThree - 3.1) > 0.1  '


cuts['ZToeeWToe2']  = ' Lepton_pt[0] > 25 && Lepton_pt[1] > 10 && Lepton_pt[2] > 10 && PuppiMET_pt > 20 \
                          && ((fabs(Lepton_pdgId[0] * Lepton_pdgId[1] * Lepton_pdgId[2])== 11*11*11)) && (Lepton_pdgId[1] * Lepton_pdgId[2] < 0)  && (Lepton_isTightElectron_mva_90p_Iso2016[0]>0.5 ) && Lepton_isWgs[1]>0.5 && Lepton_isWgs[2]>0.5 && fabs(mllTwoThree - 3.1) > 0.1 && fabs(mll - 3.1) > 0.1 '

cuts['ZToeeWToempmet2']  = ' Lepton_pt[0] > 25 && Lepton_pt[1] > 8 && Lepton_pt[2] > 8 && mpmet > 20\
                          && ((fabs(Lepton_pdgId[0] * Lepton_pdgId[1] * Lepton_pdgId[2])== 11*11*11)) && (Lepton_pdgId[1] * Lepton_pdgId[2] < 0)  && (Lepton_isTightElectron_mva_90p_Iso2016[0]>0.5 ) && Lepton_isWgs[1]>0.5 && Lepton_isWgs[2]>0.5 && fabs(mllTwoThree - 3.1) > 0.1 '

cuts['ZToeeWToemtw2']  = ' Lepton_pt[0] > 25 && Lepton_pt[1] > 8 && Lepton_pt[2] > 8 && mtw1 > 20\
                          && ((fabs(Lepton_pdgId[0] * Lepton_pdgId[1] * Lepton_pdgId[2])== 11*11*11)) && (Lepton_pdgId[1] * Lepton_pdgId[2] < 0)  && (Lepton_isTightElectron_mva_90p_Iso2016[0]>0.5) && Lepton_isWgs[1]>0.5 && Lepton_isWgs[2]>0.5 && fabs(mllTwoThree - 3.1) > 0.1 '

cuts['ZToeeWToemet2']  = ' Lepton_pt[0] > 25 && Lepton_pt[1] > 8 && Lepton_pt[2] > 8 && MET_pt > 20\
                          && ((fabs(Lepton_pdgId[0] * Lepton_pdgId[1] * Lepton_pdgId[2])== 11*11*11)) && (Lepton_pdgId[1] * Lepton_pdgId[2] < 0)  && (Lepton_isTightElectron_mva_90p_Iso2016[0]>0.5) && Lepton_isWgs[1]>0.5 && Lepton_isWgs[2]>0.5 && fabs(mllTwoThree - 3.1) > 0.1  '
'''




