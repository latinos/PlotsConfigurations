# cuts

# Second lepton veto already done in post-processing 
#and Lepton WP setup in samples.py
supercut = '(   (abs(Lepton_pdgId[0])==11 && Lepton_pt[0]>35)\
             || (abs(Lepton_pdgId[0])==13 && Lepton_pt[0]>30 ) ) \
            && vbs_0_pt > 50 && vbs_1_pt > 30 \
            && PuppiMET_pt > 30 \
            && deltaeta_vbs >= 2.5  \
            && mjj_vbs >= 500 \
            && (abs(vbs_0_eta)<2.5 || abs(vbs_0_eta)>3.2 || (Jet_puId[VBS_jets_maxmjj_massWZ[0]] & (1 << 0))==1) \
            && (abs(vbs_1_eta)<2.5 || abs(vbs_1_eta)>3.2 || (Jet_puId[VBS_jets_maxmjj_massWZ[1]] & (1 << 0))==1) \
            && (abs(vjet_0_eta)<2.5 || abs(vjet_0_eta)>3.2 || (Jet_puId[V_jets_maxmjj_massWZ[0]] & (1 << 0))==1) \
            && (abs(vjet_1_eta)<2.5 || abs(vjet_1_eta)>3.2 || (Jet_puId[V_jets_maxmjj_massWZ[1]] & (1 << 0))==1) \
            '


#########################################################################
###############|----------------------------------|######################
###############|          Resolved category       |######################
###############|----------------------------------|######################
#########################################################################

#####################################
##  W-onshell, bveto --> Signal

# cuts["res_sig_mib_ele"] = 'VBS_category==1 \
#                         && abs(Lepton_pdgId[0])==11 \
#                         && vjet_0_pt > 30 && vjet_1_pt > 30 \
#                         && mjj_vjet > 65 && mjj_vjet < 105 \
#                         && bVeto \
#                         && whad_pt < 200 \
#                         && Mtw_lep < 185 \
#                         '

cuts["res_sig_fnal_ele"] = 'VBS_category==1 \
                        && abs(Lepton_pdgId[0])==11 \
                        && vbs_0_pt > 50 && vbs_1_pt > 50 \
                        && CleanJet_eta[VBS_jets_maxmjj_massWZ[0]]*CleanJet_eta[VBS_jets_maxmjj_massWZ[1]] < 0 \
                        && vjet_0_pt > 30 && vjet_1_pt > 30 \
                        && abs(vjet_0_eta)<2.4 && abs(vjet_1_eta)<2.4 \
                        && mjj_vjet > 65 && mjj_vjet < 105 \
                        && bVeto \
                        && whad_pt < 200 \
                        '

# cuts["res_sig_mib_mu"] = 'VBS_category==1 \
#                         && abs(Lepton_pdgId[0])==13 \
#                         && vjet_0_pt > 30 && vjet_1_pt > 30 \
#                         && mjj_vjet > 65 && mjj_vjet < 105 \
#                         && bVeto \
#                         && whad_pt < 200 \
#                         && Mtw_lep < 185 \
#                         '


cuts["res_sig_fnal_mu"] = 'VBS_category==1 \
                        && abs(Lepton_pdgId[0])==13 \
                        && vbs_0_pt > 50 && vbs_1_pt > 50 \
                        && CleanJet_eta[VBS_jets_maxmjj_massWZ[0]]*CleanJet_eta[VBS_jets_maxmjj_massWZ[1]] < 0 \
                        && vjet_0_pt > 30 && vjet_1_pt > 30 \
                        && abs(vjet_0_eta)<2.4 && abs(vjet_1_eta)<2.4 \
                        && mjj_vjet > 65 && mjj_vjet < 105 \
                        && bVeto \
                        && whad_pt < 200 \
                        '

##################################
# Won-shell, btag ---> top region

# cuts["res_topcr_mib_ele"] = 'VBS_category==1 \
#                         && abs(Lepton_pdgId[0])==11 \
#                         && vjet_0_pt > 30 && vjet_1_pt > 30 \
#                         && mjj_vjet > 65 && mjj_vjet < 105 \
#                         && bReq \
#                         && whad_pt < 200 \
#                         && Mtw_lep < 185 \
#                         '

cuts["res_topcr_fnal_ele"] = 'VBS_category==1 \
                        && abs(Lepton_pdgId[0])==11 \
                        && vbs_0_pt > 50 && vbs_1_pt > 50 \
                        && CleanJet_eta[VBS_jets_maxmjj_massWZ[0]]*CleanJet_eta[VBS_jets_maxmjj_massWZ[1]] < 0 \
                        && vjet_0_pt > 30 && vjet_1_pt > 30 \
                        && abs(vjet_0_eta)<2.4 && abs(vjet_1_eta)<2.4 \
                        && mjj_vjet > 65 && mjj_vjet < 105 \
                        && bReq \
                        && whad_pt < 200 \
                        '

# cuts["res_topcr_mib_mu"] = 'VBS_category==1 \
#                         && abs(Lepton_pdgId[0])==13 \
#                         && vjet_0_pt > 30 && vjet_1_pt > 30 \
#                         && mjj_vjet > 65 && mjj_vjet < 105 \
#                         && bReq \
#                         && whad_pt < 200 \
#                         && Mtw_lep < 185 \
#                         '


cuts["res_topcr_fnal_mu"] = 'VBS_category==1 \
                        && abs(Lepton_pdgId[0])==13 \
                        && vbs_0_pt > 50 && vbs_1_pt > 50 \
                        && CleanJet_eta[VBS_jets_maxmjj_massWZ[0]]*CleanJet_eta[VBS_jets_maxmjj_massWZ[1]] < 0 \
                        && vjet_0_pt > 30 && vjet_1_pt > 30 \
                        && abs(vjet_0_eta)<2.4 && abs(vjet_1_eta)<2.4 \
                        && mjj_vjet > 65 && mjj_vjet < 105 \
                        && bReq \
                        && whad_pt < 200 \
                        '

##################################
# Woff shell, bveto ---> WJet region


# cuts["res_wjetcr_mib_ele"] = 'VBS_category==1 \
#                         && abs(Lepton_pdgId[0])==11 \
#                         && vjet_0_pt > 30 && vjet_1_pt > 30 \
#                         && (mjj_vjet <= 65 || mjj_vjet >= 105) \
#                         && bVeto \
#                         && whad_pt < 200 \
#                         && Mtw_lep < 185 \
#                         '

cuts["res_wjetcr_fnal_ele"] = 'VBS_category==1 \
                        && abs(Lepton_pdgId[0])==11 \
                        && vbs_0_pt > 50 && vbs_1_pt > 50 \
                        && CleanJet_eta[VBS_jets_maxmjj_massWZ[0]]*CleanJet_eta[VBS_jets_maxmjj_massWZ[1]] < 0 \
                        && vjet_0_pt > 30 && vjet_1_pt > 30 \
                        && abs(vjet_0_eta)<2.4 && abs(vjet_1_eta)<2.4 \
                        && mjj_vjet>40 && (mjj_vjet <= 65 || mjj_vjet >= 105) && mjj_vjet < 150 \
                        && bVeto \
                        && whad_pt < 200 \
                        '

# cuts["res_wjetcr_mib_mu"] = 'VBS_category==1 \
#                         && abs(Lepton_pdgId[0])==13 \
#                         && vjet_0_pt > 30 && vjet_1_pt > 30 \
#                         && (mjj_vjet <= 65 || mjj_vjet >= 105) \
#                         && bVeto \
#                         && whad_pt < 200 \
#                         && Mtw_lep < 185 \
#                         '


cuts["res_wjetcr_fnal_mu"] = 'VBS_category==1 \
                        && abs(Lepton_pdgId[0])==13 \
                        && vbs_0_pt > 50 && vbs_1_pt > 50 \
                        && CleanJet_eta[VBS_jets_maxmjj_massWZ[0]]*CleanJet_eta[VBS_jets_maxmjj_massWZ[1]] < 0 \
                        && vjet_0_pt > 30 && vjet_1_pt > 30 \
                        && abs(vjet_0_eta)<2.4 && abs(vjet_1_eta)<2.4 \
                        && mjj_vjet>40 && (mjj_vjet <= 65 || mjj_vjet >= 105) && mjj_vjet < 150 \
                        && bVeto \
                        && whad_pt < 200 \
                        '


#########################################################################
###############|----------------------------------|######################
###############|          Boosted category       |######################
###############|----------------------------------|######################
#########################################################################


# cuts["boost_sig_mib_ele"] = 'VBS_category==0 \
#                             && abs(Lepton_pdgId[0])==11 \
#                             && vjet_0_pt > 200 \
#                             && mjj_vjet > 65 && mjj_vjet < 105 \
#                             && bVeto \
#                             '

cuts["boost_sig_fnal_ele"] = 'VBS_category==0 \
                            && abs(Lepton_pdgId[0])==11 \
                            && vbs_0_pt > 50 && vbs_1_pt > 50 \
                            && CleanJet_eta[VBS_jets_maxmjj_massWZ[0]]*CleanJet_eta[VBS_jets_maxmjj_massWZ[1]] < 0 \
                            && vjet_0_pt > 200 \
                            && mjj_vjet > 65 && mjj_vjet < 105 \
                            && bVeto \
                            '

# cuts["boost_sig_mib_mu"] = 'VBS_category==0 \
#                             && abs(Lepton_pdgId[0])==13 \
#                             && vjet_0_pt > 200 \
#                             && mjj_vjet > 65 && mjj_vjet < 105 \
#                             && bVeto \
#                             '

cuts["boost_sig_fnal_mu"] = 'VBS_category==0 \
                            && abs(Lepton_pdgId[0])==13 \
                            && vbs_0_pt > 50 && vbs_1_pt > 50 \
                            && CleanJet_eta[VBS_jets_maxmjj_massWZ[0]]*CleanJet_eta[VBS_jets_maxmjj_massWZ[1]] < 0 \
                            && vjet_0_pt > 200 \
                            && mjj_vjet > 65 && mjj_vjet < 105 \
                            && bVeto \
                            '

###############################################
# Wjets
# cuts["boost_topcr_mib_ele"] = 'VBS_category==0 \
#                             && abs(Lepton_pdgId[0])==11 \
#                             && vjet_0_pt > 200 \
#                             && mjj_vjet > 65 && mjj_vjet < 105 \
#                             && bReq \
#                             '

cuts["boost_topcr_fnal_ele"] = 'VBS_category==0 \
                            && abs(Lepton_pdgId[0])==11 \
                            && vbs_0_pt > 50 && vbs_1_pt > 50 \
                            && CleanJet_eta[VBS_jets_maxmjj_massWZ[0]]*CleanJet_eta[VBS_jets_maxmjj_massWZ[1]] < 0 \
                            && vjet_0_pt > 200 \
                            && mjj_vjet > 65 && mjj_vjet < 105 \
                            && bReq \
                            '

# cuts["boost_topcr_mib_mu"] = 'VBS_category==0 \
#                             && abs(Lepton_pdgId[0])==13 \
#                             && vjet_0_pt > 200 \
#                             && mjj_vjet > 65 && mjj_vjet < 105 \
#                             && bReq \
#                             '

cuts["boost_topcr_fnal_mu"] = 'VBS_category==0 \
                            && abs(Lepton_pdgId[0])==13 \
                            && vbs_0_pt > 50 && vbs_1_pt > 50 \
                            && CleanJet_eta[VBS_jets_maxmjj_massWZ[0]]*CleanJet_eta[VBS_jets_maxmjj_massWZ[1]] < 0 \
                            && vjet_0_pt > 200 \
                            && mjj_vjet > 65 && mjj_vjet < 105 \
                            && bReq \
                            '



###############################################
#Top

# cuts["boost_wjetcr_mib_ele"] = 'VBS_category==0 \
#                             && abs(Lepton_pdgId[0])==11 \
#                             && vjet_0_pt > 200 \
#                             && (mjj_vjet <= 65 || mjj_vjet >= 105) \
#                             && bVeto \
#                             '

cuts["boost_wjetcr_fnal_ele"] = 'VBS_category==0 \
                            && abs(Lepton_pdgId[0])==11 \
                            && vbs_0_pt > 50 && vbs_1_pt > 50 \
                            && CleanJet_eta[VBS_jets_maxmjj_massWZ[0]]*CleanJet_eta[VBS_jets_maxmjj_massWZ[1]] < 0 \
                            && vjet_0_pt > 200 \
                            && mjj_vjet>40 && (mjj_vjet <= 65 || mjj_vjet >= 105) && mjj_vjet < 150 \
                            && bVeto \
                            '

# cuts["boost_wjetcr_mib_mu"] = 'VBS_category==0 \
#                             && abs(Lepton_pdgId[0])==13 \
#                             && vjet_0_pt > 200 \
#                             && (mjj_vjet <= 65 || mjj_vjet >= 105) \
#                             && bVeto \
#                             '

cuts["boost_wjetcr_fnal_mu"] = 'VBS_category==0 \
                            && abs(Lepton_pdgId[0])==13 \
                            && vbs_0_pt > 50 && vbs_1_pt > 50 \
                            && CleanJet_eta[VBS_jets_maxmjj_massWZ[0]]*CleanJet_eta[VBS_jets_maxmjj_massWZ[1]] < 0 \
                            && vjet_0_pt > 200 \
                            && mjj_vjet>40 && (mjj_vjet <= 65 || mjj_vjet >= 105) && mjj_vjet < 150 \
                            && bVeto \
                            '
