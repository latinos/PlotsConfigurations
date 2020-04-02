




supercut = ' abs(mll - 3.1) > 0.1  && (Lepton_eta[0])<2.4 &&  (Lepton_eta[1])<2.4 &&  (Lepton_eta[2])<2.4 && njet<1 \
              '

#cuts['ZToeeWTom_mpmet_Zpeak']  = '  mpmet > 30  \
#                          && abs(Lepton_eta[0])<2.4 && abs(Lepton_eta[1])<2.1 && abs(Lepton_eta[2])<2.1 \
#                          && ((fabs(Lepton_pdgId[0] * Lepton_pdgId[1] * Lepton_pdgId[2])== 13*11*11)) && (Lepton_pdgId[1] * Lepton_pdgId[2] < 0) && fabs(mllTwoThree - 91.2) < 10. && (Lepton_isTightMuon_cut_Tight_HWWW[0]>0.5 ) && Lepton_isWgs[1]==1 && Lepton_isWgs[2]==1 '
#cuts['ZTommWToe_mpmet_Zpeak']  = '  mpmet > 30  \
#                          && abs(Lepton_eta[0])<2.1 && abs(Lepton_eta[1])<2.4 && abs(Lepton_eta[2])<2.4 \
#                          && ((fabs(Lepton_pdgId[0] * Lepton_pdgId[1] * Lepton_pdgId[2])== 11*13*13)) && (Lepton_pdgId[1] * Lepton_pdgId[2] < 0) && fabs(mllTwoThree - 91.2) < 10. &&  (Lepton_isTightElectron_mvaFall17V1Iso_WP90[0]>0.5) &&  Lepton_isWgs[1]==1 && Lepton_isWgs[2]==1 '
#
#cuts['ZToeeWTom_met_Zpeak']  = '  MET_pt > 30  \
#                          && abs(Lepton_eta[0])<2.4 && abs(Lepton_eta[1])<2.1 && abs(Lepton_eta[2])<2.1 \
#                          && ((fabs(Lepton_pdgId[0] * Lepton_pdgId[1] * Lepton_pdgId[2])== 13*11*11)) && (Lepton_pdgId[1] * Lepton_pdgId[2] < 0) && fabs(mllTwoThree - 91.2) < 10. && (Lepton_isTightMuon_cut_Tight_HWWW[0]>0.5 ) && Lepton_isWgs[1]==1 && Lepton_isWgs[2]==1 '
#cuts['ZTommWToe_met_Zpeak']  = '  MET_pt > 30  \
#                          && abs(Lepton_eta[0])<2.1 && abs(Lepton_eta[1])<2.4 && abs(Lepton_eta[2])<2.4 \
#                          && ((fabs(Lepton_pdgId[0] * Lepton_pdgId[1] * Lepton_pdgId[2])== 11*13*13)) && (Lepton_pdgId[1] * Lepton_pdgId[2] < 0) && fabs(mllTwoThree - 91.2) < 10. && ( Lepton_isTightElectron_mvaFall17V1Iso_WP90[0]>0.5) && Lepton_isWgs[1]==1 && Lepton_isWgs[2]==1 '
#
#cuts['ZToeeWToe_mpmet_Zpeak']  = '  mpmet > 30  \
#                          && abs(Lepton_eta[0])<2.1 && abs(Lepton_eta[1])<2.1 && abs(Lepton_eta[2])<2.1 \
#                          && ((fabs(Lepton_pdgId[0] * Lepton_pdgId[1] * Lepton_pdgId[2])== 11*11*11)) && (Lepton_pdgId[1] * Lepton_pdgId[2] < 0) && fabs(mllTwoThree - 91.2) < 10. && Lepton_isTightElectron_mvaFall17V1Iso_WP90[0]>0.5 && Lepton_isWgs[1]>0.5 && Lepton_isWgs[2]>0.5 '
#cuts['ZTommWTom_mpmet_Zpeak']  = '  mpmet > 30  \
#                          && abs(Lepton_eta[0])<2.4 && abs(Lepton_eta[1])<2.4 && abs(Lepton_eta[2])<2.4 \
#                          && ((fabs(Lepton_pdgId[0] * Lepton_pdgId[1] * Lepton_pdgId[2])== 13*13*13)) && (Lepton_pdgId[1] * Lepton_pdgId[2] < 0) && fabs(mllTwoThree - 91.2) < 10. && Lepton_isTightMuon_cut_Tight_HWWW[0]>0.5 && Lepton_isWgs[1]>0.5 && Lepton_isWgs[2]>0.5 '


#cuts['ZToeeWToe_met_Zpeak']  = '  MET_pt > 30  \
#                          && abs(Lepton_eta[0])<2.1 && abs(Lepton_eta[1])<2.1 && abs(Lepton_eta[2])<2.1 \
#                          && ((fabs(Lepton_pdgId[0] * Lepton_pdgId[1] * Lepton_pdgId[2])== 11*11*11)) && (Lepton_pdgId[1] * Lepton_pdgId[2] < 0) && fabs(mllTwoThree - 91.2) < 10. && Lepton_isTightElectron_mvaFall17V1Iso_WP90[0]>0.5 && Lepton_isWgs[1]>0.5 && Lepton_isWgs[2]>0.5 '
#cuts['ZTommWTom_met_Zpeak']  = '  MET_pt > 30  \
#                          && abs(Lepton_eta[0])<2.4 && abs(Lepton_eta[1])<2.4 && abs(Lepton_eta[2])<2.4 \
#                          && ((fabs(Lepton_pdgId[0] * Lepton_pdgId[1] * Lepton_pdgId[2])== 13*13*13)) && (Lepton_pdgId[1] * Lepton_pdgId[2] < 0) && fabs(mllTwoThree - 91.2) < 10. && Lepton_isTightMuon_cut_Tight_HWWW[0]>0.5 && Lepton_isWgs[1]>0.5 && Lepton_isWgs[2]>0.5 '

#cuts['ZToeeWToe']  = ' PuppiMET_pt > 30\
#                          && ((fabs(Lepton_pdgId[0] * Lepton_pdgId[1] * Lepton_pdgId[2])== 11*11*11)) && (Lepton_pdgId[1] * Lepton_pdgId[2] < 0)  && (Lepton_isTightElectron_mvaFall17V1Iso_WP90[0]>0.5 ) && Lepton_isWgs[1]>0.5 && Lepton_isWgs[2]>0.5 && fabs(mllTwoThree - 3.1) > 0.1 '
#cuts['ZTommWToe']  = '   Lepton_pt[0] > 30 && Lepton_pt[1] > 40 && Lepton_pt[2] > 40  \
#                         && ((fabs(Lepton_pdgId[0] * Lepton_pdgId[1] * Lepton_pdgId[2])== 11*13*13)) && (Lepton_pdgId[1] * Lepton_pdgId[2] < 0)  && (Lepton_isTightElectron_mvaFall17V1Iso_WP90[0]>0.5) && Lepton_isWgs[1]>0.5 && Lepton_isWgs[2]>0.5 '
#cuts['ZTommWToe']  = ' PuppiMET_pt > 30\
#                          && ((fabs(Lepton_pdgId[0] * Lepton_pdgId[1] * Lepton_pdgId[2])== 11*13*13)) && (Lepton_pdgId[1] * Lepton_pdgId[2] < 0)  && (Lepton_isTightElectron_mvaFall17V1Iso_WP90[0]>0.5 ) && Lepton_isWgs[1]>0.5 && Lepton_isWgs[2]>0.5 && fabs(mllTwoThree - 3.1) > 0.1 '

#cuts['ZToeeWTom']  = ' PuppiMET_pt > 30\
#                          && ((fabs(Lepton_pdgId[0] * Lepton_pdgId[1] * Lepton_pdgId[2])== 13*11*11)) && (Lepton_pdgId[1] * Lepton_pdgId[2] < 0)  && (Lepton_isTightMuon_cut_Tight_HWWW[0]>0.5 ) && Lepton_isWgs[1]>0.5 && Lepton_isWgs[2]>0.5 && fabs(mllTwoThree - 3.1) > 0.1 '

#cuts['ZToeeWToe']  = '    Lepton_pt[0] > 30 && Lepton_pt[1] > 30 && Lepton_pt[2] > 30  \
#                          && ((fabs(Lepton_pdgId[0] * Lepton_pdgId[1] * Lepton_pdgId[2])== 11*11*11)) && (Lepton_pdgId[1] * Lepton_pdgId[2] < 0)  && Lepton_isTightElectron_mvaFall17V1Iso_WP90[0]>0.5 && Lepton_isWgs[1]>0.5 && Lepton_isWgs[2]>0.5 '
#cuts['ZTommWTom']  = '   Lepton_pt[0] > 40 && Lepton_pt[1] > 40 && Lepton_pt[2] > 40  \
#                          && ((fabs(Lepton_pdgId[0] * Lepton_pdgId[1] * Lepton_pdgId[2])== 13*13*13)) && (Lepton_pdgId[1] * Lepton_pdgId[2] < 0)  && Lepton_isTightMuon_cut_Tight_HWWW[0]>0.5 && Lepton_isWgs[1]>0.5 && Lepton_isWgs[2]>0.5 '


cuts['ZTommWTompuppimet']  = ' Lepton_pt[0] > 30 && Lepton_pt[1] > 10 && Lepton_pt[2] > 10 &&  PuppiMET_pt > 30\
                          && ((fabs(Lepton_pdgId[0] * Lepton_pdgId[1] * Lepton_pdgId[2])== 13*13*13)) && (Lepton_pdgId[1] * Lepton_pdgId[2] < 0)  && (Lepton_isTightMuon_cut_Tight_HWWW[0]>0.5 ) && Lepton_isWgs[1]>0.5 && Lepton_isWgs[2]>0.5 && fabs(mllTwoThree - 3.1) > 0.1 '

cuts['ZTommWTommpmet']  = 'Lepton_pt[0] > 30 && Lepton_pt[1] > 10 && Lepton_pt[2] > 10 && mpmet > 30\
                          && ((fabs(Lepton_pdgId[0] * Lepton_pdgId[1] * Lepton_pdgId[2])== 13*13*13)) && (Lepton_pdgId[1] * Lepton_pdgId[2] < 0)  && (Lepton_isTightMuon_cut_Tight_HWWW[0]>0.5 ) && Lepton_isWgs[1]>0.5 && Lepton_isWgs[2]>0.5 && fabs(mllTwoThree - 3.1) > 0.1 '

cuts['ZTommWTommtw']  = ' Lepton_pt[0] > 30 && Lepton_pt[1] > 10 && Lepton_pt[2] > 10 && mtw1 > 30\
                          && ((fabs(Lepton_pdgId[0] * Lepton_pdgId[1] * Lepton_pdgId[2])== 13*13*13)) && (Lepton_pdgId[1] * Lepton_pdgId[2] < 0)  && (Lepton_isTightMuon_cut_Tight_HWWW[0]>0.5) && Lepton_isWgs[1]>0.5 && Lepton_isWgs[2]>0.5 && fabs(mllTwoThree - 3.1) > 0.1 '

cuts['ZTommWTommet']  = ' Lepton_pt[0] > 30 && Lepton_pt[1] > 10 && Lepton_pt[2] > 10 && MET_pt > 30\
                          && ((fabs(Lepton_pdgId[0] * Lepton_pdgId[1] * Lepton_pdgId[2])== 13*13*13)) && (Lepton_pdgId[1] * Lepton_pdgId[2] < 0)  && (Lepton_isTightMuon_cut_Tight_HWWW[0]>0.5) && Lepton_isWgs[1]>0.5 && Lepton_isWgs[2]>0.5 && fabs(mllTwoThree - 3.1) > 0.1  '

cuts['ZTommWTompuppimet1']  = ' Lepton_pt[0] > 30 && Lepton_pt[1] > 8 && Lepton_pt[2] > 8 &&  PuppiMET_pt > 30\
                          && ((fabs(Lepton_pdgId[0] * Lepton_pdgId[1] * Lepton_pdgId[2])== 13*13*13)) && (Lepton_pdgId[1] * Lepton_pdgId[2] < 0)  && (Lepton_isTightMuon_cut_Tight_HWWW[0]>0.5 ) && Lepton_isWgs[1]>0.5 && Lepton_isWgs[2]>0.5 && fabs(mllTwoThree - 3.1) > 0.1 '

cuts['ZTommWTommpmet1']  = 'Lepton_pt[0] > 30 && Lepton_pt[1] > 8 && Lepton_pt[2] > 8 && mpmet > 30\
                          && ((fabs(Lepton_pdgId[0] * Lepton_pdgId[1] * Lepton_pdgId[2])== 13*13*13)) && (Lepton_pdgId[1] * Lepton_pdgId[2] < 0)  && (Lepton_isTightMuon_cut_Tight_HWWW[0]>0.5 ) && Lepton_isWgs[1]>0.5 && Lepton_isWgs[2]>0.5 && fabs(mllTwoThree - 3.1) > 0.1 '

cuts['ZTommWTommtw1']  = ' Lepton_pt[0] > 30 && Lepton_pt[1] > 8 && Lepton_pt[2] > 8 && mtw1 > 30\
                          && ((fabs(Lepton_pdgId[0] * Lepton_pdgId[1] * Lepton_pdgId[2])== 13*13*13)) && (Lepton_pdgId[1] * Lepton_pdgId[2] < 0)  && (Lepton_isTightMuon_cut_Tight_HWWW[0]>0.5) && Lepton_isWgs[1]>0.5 && Lepton_isWgs[2]>0.5 && fabs(mllTwoThree - 3.1) > 0.1 '

cuts['ZTommWTommet1']  = ' Lepton_pt[0] > 30 && Lepton_pt[1] > 8 && Lepton_pt[2] > 8 && MET_pt > 30\
                          && ((fabs(Lepton_pdgId[0] * Lepton_pdgId[1] * Lepton_pdgId[2])== 13*13*13)) && (Lepton_pdgId[1] * Lepton_pdgId[2] < 0)  && (Lepton_isTightMuon_cut_Tight_HWWW[0]>0.5) && Lepton_isWgs[1]>0.5 && Lepton_isWgs[2]>0.5 && fabs(mllTwoThree - 3.1) > 0.1  '

cuts['ZTommWTompuppimet2']  = ' Lepton_pt[0] > 30 && Lepton_pt[1] > 20 && Lepton_pt[2] > 20 &&  PuppiMET_pt > 30\
                          && ((fabs(Lepton_pdgId[0] * Lepton_pdgId[1] * Lepton_pdgId[2])== 13*13*13)) && (Lepton_pdgId[1] * Lepton_pdgId[2] < 0)  && (Lepton_isTightMuon_cut_Tight_HWWW[0]>0.5 ) && Lepton_isWgs[1]>0.5 && Lepton_isWgs[2]>0.5 && fabs(mllTwoThree - 3.1) > 0.1 '

cuts['ZTommWTommpmet2']  = 'Lepton_pt[0] > 30 && Lepton_pt[1] > 20 && Lepton_pt[2] > 20 && mpmet > 30\
                          && ((fabs(Lepton_pdgId[0] * Lepton_pdgId[1] * Lepton_pdgId[2])== 13*13*13)) && (Lepton_pdgId[1] * Lepton_pdgId[2] < 0)  && (Lepton_isTightMuon_cut_Tight_HWWW[0]>0.5 ) && Lepton_isWgs[1]>0.5 && Lepton_isWgs[2]>0.5 && fabs(mllTwoThree - 3.1) > 0.1 '

cuts['ZTommWTommtw2']  = ' Lepton_pt[0] > 30 && Lepton_pt[1] > 20 && Lepton_pt[2] > 20 && mtw1 > 30\
                          && ((fabs(Lepton_pdgId[0] * Lepton_pdgId[1] * Lepton_pdgId[2])== 13*13*13)) && (Lepton_pdgId[1] * Lepton_pdgId[2] < 0)  && (Lepton_isTightMuon_cut_Tight_HWWW[0]>0.5) && Lepton_isWgs[1]>0.5 && Lepton_isWgs[2]>0.5 && fabs(mllTwoThree - 3.1) > 0.1 '

cuts['ZTommWTommet2']  = ' Lepton_pt[0] > 30 && Lepton_pt[1] > 20 && Lepton_pt[2] > 20 && MET_pt > 30\
                          && ((fabs(Lepton_pdgId[0] * Lepton_pdgId[1] * Lepton_pdgId[2])== 13*13*13)) && (Lepton_pdgId[1] * Lepton_pdgId[2] < 0)  && (Lepton_isTightMuon_cut_Tight_HWWW[0]>0.5) && Lepton_isWgs[1]>0.5 && Lepton_isWgs[2]>0.5 && fabs(mllTwoThree - 3.1) > 0.1  '












