# cuts

# Second lepton veto already done in post-processing 
#and Lepton WP setup in samples.py
supercut = '(   (abs(Lepton_pdgId[0])==11 && Lepton_pt[0]>35)\
             || (abs(Lepton_pdgId[0])==13 && Lepton_pt[0]>30 ) ) \
            && vbs_0_pt > 50 && vbs_1_pt > 30 \
            && PuppiMET_pt > 30 \
            && deltaeta_vbs >= 2.5  \
            && mjj_vbs >= 500 \
            && Mtw_lep < 185 \
            '


#########################################################################
###############|----------------------------------|######################
###############|          Resolved category       |######################
###############|----------------------------------|######################
#########################################################################

#####################################
##  W-onshell, bveto --> Signal

cuts["res_sig_dnnall_ele"] = 'VBS_category==1 \
                                && abs(Lepton_pdgId[0])==11 \
                                && vjet_0_pt > 30 && vjet_1_pt > 30 \
                                && mjj_vjet > 65 && mjj_vjet < 105 \
                                && bVeto \
                                && whad_pt < 200 \
                                '

cuts["res_sig_dnnall_higheta_ele"] = 'VBS_category==1 \
                                && abs(Lepton_pdgId[0])==11 \
                                && vjet_0_pt > 30 && vjet_1_pt > 30 \
                                && mjj_vjet > 65 && mjj_vjet < 105 \
                                && bVeto \
                                && whad_pt < 200 \
                                && abs(Lepton_eta[0])>2\
                                '


cuts["res_sig_dnnall_loweta_ele"] = 'VBS_category==1 \
                                && abs(Lepton_pdgId[0])==11 \
                                && vjet_0_pt > 30 && vjet_1_pt > 30 \
                                && mjj_vjet > 65 && mjj_vjet < 105 \
                                && bVeto \
                                && whad_pt < 200 \
                                && abs(Lepton_eta[0])<=2\
                                '


# cuts["res_sig_dnnhigh_ele"] = 'VBS_category==1 \
#                                 && abs(Lepton_pdgId[0])==11 \
#                                 && vjet_0_pt > 30 && vjet_1_pt > 30 \
#                                 && mjj_vjet > 65 && mjj_vjet < 105 \
#                                 && bVeto \
#                                 && whad_pt < 200 \
#                                 && DNNoutput_resolved > 0.3 \
#                                 '


cuts["res_sig_dnnall_mu"] = 'VBS_category==1 \
                                && abs(Lepton_pdgId[0])==13 \
                                && vjet_0_pt > 30 && vjet_1_pt > 30 \
                                && mjj_vjet > 65 && mjj_vjet < 105 \
                                && bVeto \
                                && whad_pt < 200 \
                                '



# cuts["res_sig_dnnhigh_mu"] = 'VBS_category==1 \
#                                 && abs(Lepton_pdgId[0])==13 \
#                                 && vjet_0_pt > 30 && vjet_1_pt > 30 \
#                                 && mjj_vjet > 65 && mjj_vjet < 105 \
#                                 && bVeto \
#                                 && whad_pt < 200 \
#                                 && DNNoutput_resolved > 0.3 \
#                                 '



##################################
# Woff shell, bveto ---> WJet region

cuts["res_wjetcr_dnnall_ele"] = 'VBS_category==1 \
                                && abs(Lepton_pdgId[0])==11 \
                                && vjet_0_pt > 30 && vjet_1_pt > 30 \
                                && (mjj_vjet <= 65 || mjj_vjet >= 105) \
                                && bVeto \
                                && whad_pt < 200 \
                                '

cuts["res_wjetcr_dnnall_higheta_ele"] = 'VBS_category==1 \
                                && abs(Lepton_pdgId[0])==11 \
                                && vjet_0_pt > 30 && vjet_1_pt > 30 \
                                && (mjj_vjet <= 65 || mjj_vjet >= 105) \
                                && bVeto \
                                && whad_pt < 200 \
                                && abs(Lepton_eta[0])>2\
                                '

cuts["res_wjetcr_dnnall_loweta_ele"] = 'VBS_category==1 \
                                && abs(Lepton_pdgId[0])==11 \
                                && vjet_0_pt > 30 && vjet_1_pt > 30 \
                                && (mjj_vjet <= 65 || mjj_vjet >= 105) \
                                && bVeto \
                                && whad_pt < 200 \
                                && abs(Lepton_eta[0])<=2\
                                '

# cuts["res_wjetcr_dnnhigh_ele"] = 'VBS_category==1 \
#                                 && abs(Lepton_pdgId[0])==11 \
#                                 && vjet_0_pt > 30 && vjet_1_pt > 30 \
#                                 && (mjj_vjet <= 65 || mjj_vjet >= 105) \
#                                 && bVeto \
#                                 && whad_pt < 200 \
#                                 && DNNoutput_resolved > 0.3 \
#                                 '


cuts["res_wjetcr_dnnall_mu"] = 'VBS_category==1 \
                                && abs(Lepton_pdgId[0])==13 \
                                && vjet_0_pt > 30 && vjet_1_pt > 30 \
                                && (mjj_vjet <= 65 || mjj_vjet >= 105) \
                                && bVeto \
                                && whad_pt < 200 \
                                '


# cuts["res_wjetcr_dnnhigh_mu"] = 'VBS_category==1 \
#                                 && abs(Lepton_pdgId[0])==13 \
#                                 && vjet_0_pt > 30 && vjet_1_pt > 30 \
#                                 && (mjj_vjet <= 65 || mjj_vjet >= 105) \
#                                 && bVeto \
#                                 && whad_pt < 200 \
#                                 && DNNoutput_resolved > 0.3 \
#                                 '


#########################################################################
###############|----------------------------------|######################
###############|          Boosted category       |######################
###############|----------------------------------|######################
#########################################################################


cuts["boost_sig_dnnall_ele"] = 'VBS_category==0 \
                            && abs(Lepton_pdgId[0])==11 \
                            && vjet_0_pt > 200 \
                            && mjj_vjet > 65 && mjj_vjet < 105 \
                            && bVeto \
                            '

# cuts["boost_sig_dnnhigh_ele"] = 'VBS_category==0 \
#                             && abs(Lepton_pdgId[0])==11 \
#                             && vjet_0_pt > 200 \
#                             && mjj_vjet > 65 && mjj_vjet < 105 \
#                             && bVeto \
#                             && DNNoutput_boosted > 0.3 \
#                             '

cuts["boost_sig_dnnall_mu"] = 'VBS_category==0 \
                            && abs(Lepton_pdgId[0])==13 \
                            && vjet_0_pt > 200 \
                            && mjj_vjet > 65 && mjj_vjet < 105 \
                            && bVeto \
                            '


# cuts["boost_sig_dnnhigh_mu"] = 'VBS_category==0 \
#                             && abs(Lepton_pdgId[0])==13 \
#                             && vjet_0_pt > 200 \
#                             && mjj_vjet > 65 && mjj_vjet < 105 \
#                             && bVeto \
#                             && DNNoutput_boosted > 0.3 \
#                             '

###############################################
# Wjets

cuts["boost_wjetcr_dnnall_ele"] = 'VBS_category==0 \
                            && abs(Lepton_pdgId[0])==11 \
                            && vjet_0_pt > 200 \
                            && mjj_vjet >= 60  && (mjj_vjet <= 65 || mjj_vjet >= 105)  \
                            && bVeto \
                            '


# cuts["boost_wjetcr_dnnhigh_ele"] = 'VBS_category==0 \
#                             && abs(Lepton_pdgId[0])==11 \
#                             && vjet_0_pt > 200 \
#                             && mjj_vjet >= 60  && (mjj_vjet <= 65 || mjj_vjet >= 105)  \
#                             && bVeto \
#                             && DNNoutput_boosted > 0.3 \
#                             '

cuts["boost_wjetcr_dnnall_mu"] = 'VBS_category==0 \
                            && abs(Lepton_pdgId[0])==13 \
                            && vjet_0_pt > 200 \
                            && mjj_vjet >= 60  && (mjj_vjet <= 65 || mjj_vjet >= 105)  \
                            && bVeto \
                            '


# cuts["boost_wjetcr_dnnhigh_mu"] = 'VBS_category==0 \
#                             && abs(Lepton_pdgId[0])==13 \
#                             && vjet_0_pt > 200 \
#                             && mjj_vjet >= 60  && (mjj_vjet <= 65 || mjj_vjet >= 105)  \
#                             && bVeto \
#                             && DNNoutput_boosted > 0.3 \
#                              '


###############################################
#Top


# ### Top Tight region

cuts["res_topcr_dnnall_ele"] = 'VBS_category==1 \
                                && abs(Lepton_pdgId[0])==11 \
                                && vjet_0_pt > 30 && vjet_1_pt > 30 \
                                && mjj_vjet > 65 && mjj_vjet < 105 \
                                && bReqTight \
                                && whad_pt < 200 \
                                '

cuts["res_topcr_dnnall_higheta_ele"] = 'VBS_category==1 \
                                && abs(Lepton_pdgId[0])==11 \
                                && vjet_0_pt > 30 && vjet_1_pt > 30 \
                                && mjj_vjet > 65 && mjj_vjet < 105 \
                                && bReqTight \
                                && whad_pt < 200 \
                                && abs(Lepton_eta[0])>2\
                                '

cuts["res_topcr_dnnall_loweta_ele"] = 'VBS_category==1 \
                                && abs(Lepton_pdgId[0])==11 \
                                && vjet_0_pt > 30 && vjet_1_pt > 30 \
                                && mjj_vjet > 65 && mjj_vjet < 105 \
                                && bReqTight \
                                && whad_pt < 200 \
                                && abs(Lepton_eta[0]) <= 2\
                                '

# cuts["res_topcr_dnnhigh_ele"] = 'VBS_category==1 \
#                                 && abs(Lepton_pdgId[0])==11 \
#                                 && vjet_0_pt > 30 && vjet_1_pt > 30 \
#                                 && mjj_vjet > 65 && mjj_vjet < 105 \
#                                 && bReqTight \
#                                 && whad_pt < 200 \
#                                 && DNNoutput_resolved > 0.3 \
#                                 '

cuts["res_topcr_dnnall_mu"] = 'VBS_category==1 \
                                && abs(Lepton_pdgId[0])==13 \
                                && vjet_0_pt > 30 && vjet_1_pt > 30 \
                                && mjj_vjet > 65 && mjj_vjet < 105 \
                                && bReqTight \
                                && whad_pt < 200 \
                                '

# cuts["res_topcr_dnnhigh_mu"] = 'VBS_category==1 \
#                                 && abs(Lepton_pdgId[0])==13 \
#                                 && vjet_0_pt > 30 && vjet_1_pt > 30 \
#                                 && mjj_vjet > 65 && mjj_vjet < 105 \
#                                 && bReqTight \
#                                 && whad_pt < 200 \
#                                 && DNNoutput_resolved > 0.3 \
#                                 '


# Tight top
cuts["boost_topcr_dnnall_ele"] = 'VBS_category==0 \
                            && abs(Lepton_pdgId[0])==11 \
                            && vjet_0_pt > 200 \
                            && mjj_vjet > 65 && mjj_vjet < 105 \
                            && bReqTight \
                            '

# cuts["boost_topcr_dnnhigh_ele"] = 'VBS_category==0 \
#                             && abs(Lepton_pdgId[0])==11 \
#                             && vjet_0_pt > 200 \
#                             && mjj_vjet > 65 && mjj_vjet < 105 \
#                             && bReqTight \
#                             && DNNoutput_boosted > 0.3 \
#                             '


cuts["boost_topcr_dnnall_mu"] = 'VBS_category==0 \
                            && abs(Lepton_pdgId[0])==13 \
                            && vjet_0_pt > 200 \
                            && mjj_vjet > 65 && mjj_vjet < 105 \
                            && bReqTight \
                            '



# cuts["boost_topcr_dnnhigh_mu"] = 'VBS_category==0 \
#                             && abs(Lepton_pdgId[0])==13 \
#                             && vjet_0_pt > 200 \
#                             && mjj_vjet > 65 && mjj_vjet < 105 \
#                             && bReqTight \
#                             && DNNoutput_boosted > 0.3 \
#                              '