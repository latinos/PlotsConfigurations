# cuts

# Second lepton veto already done in post-processing 
#and Lepton WP setup in samples.py
supercut = '(   (abs(Lepton_pdgId[0])==11 && Lepton_pt[0]>38) \
             || (abs(Lepton_pdgId[0])==13 && Lepton_pt[0]>30 ) ) \
            && vbs_0_pt > 50 && vbs_1_pt > 30 \
            && PuppiMET_pt > 30 \
            && deltaeta_vbs >= 2.5  \
            && mjj_vbs >= 500 \
            && Mtw_lep < 185 \
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

cuts["res_sig_dnnall_ele"] = 'VBS_category==1 \
                                && abs(Lepton_pdgId[0])==11 \
                                && vjet_0_pt > 30 && vjet_1_pt > 30 \
                                && mjj_vjet > 65 && mjj_vjet < 105 \
                                && bVeto \
                                && whad_pt < 200 \
                                '


cuts["res_sig_dnnhigh_ele"] = 'VBS_category==1 \
                                && abs(Lepton_pdgId[0])==11 \
                                && vjet_0_pt > 30 && vjet_1_pt > 30 \
                                && mjj_vjet > 65 && mjj_vjet < 105 \
                                && bVeto \
                                && whad_pt < 200 \
                                && DNNoutput_resolved > 0.3 \
                                '


cuts["res_sig_dnnall_mu"] = 'VBS_category==1 \
                                && abs(Lepton_pdgId[0])==13 \
                                && vjet_0_pt > 30 && vjet_1_pt > 30 \
                                && mjj_vjet > 65 && mjj_vjet < 105 \
                                && bVeto \
                                && whad_pt < 200 \
                                '



cuts["res_sig_dnnhigh_mu"] = 'VBS_category==1 \
                                && abs(Lepton_pdgId[0])==13 \
                                && vjet_0_pt > 30 && vjet_1_pt > 30 \
                                && mjj_vjet > 65 && mjj_vjet < 105 \
                                && bVeto \
                                && whad_pt < 200 \
                                && DNNoutput_resolved > 0.3 \
                                '


##################################
# Woff shell, bveto ---> WJet region

cuts["res_wjetcr_dnnall_ele"] = 'VBS_category==1 \
                                && abs(Lepton_pdgId[0])==11 \
                                && vjet_0_pt > 30 && vjet_1_pt > 30 \
                                && (mjj_vjet <= 65 || mjj_vjet >= 105) \
                                && bVeto \
                                && whad_pt < 200 \
                                '


cuts["res_wjetcr_dnnhigh_ele"] = 'VBS_category==1 \
                                && abs(Lepton_pdgId[0])==11 \
                                && vjet_0_pt > 30 && vjet_1_pt > 30 \
                                && (mjj_vjet <= 65 || mjj_vjet >= 105) \
                                && bVeto \
                                && whad_pt < 200 \
                                && DNNoutput_resolved > 0.3 \
                                '


cuts["res_wjetcr_dnnall_mu"] = 'VBS_category==1 \
                                && abs(Lepton_pdgId[0])==13 \
                                && vjet_0_pt > 30 && vjet_1_pt > 30 \
                                && (mjj_vjet <= 65 || mjj_vjet >= 105) \
                                && bVeto \
                                && whad_pt < 200 \
                                '


cuts["res_wjetcr_dnnhigh_mu"] = 'VBS_category==1 \
                                && abs(Lepton_pdgId[0])==13 \
                                && vjet_0_pt > 30 && vjet_1_pt > 30 \
                                && (mjj_vjet <= 65 || mjj_vjet >= 105) \
                                && bVeto \
                                && whad_pt < 200 \
                                && DNNoutput_resolved > 0.3 \
                                '



# Top Tight region

cuts["res_topcr_dnnall_ele"] = 'VBS_category==1 \
                                && abs(Lepton_pdgId[0])==11 \
                                && vjet_0_pt > 30 && vjet_1_pt > 30 \
                                && mjj_vjet > 65 && mjj_vjet < 105 \
                                && bReqTight \
                                && whad_pt < 200 \
                                '

cuts["res_topcr_dnnhigh_ele"] = 'VBS_category==1 \
                                && abs(Lepton_pdgId[0])==11 \
                                && vjet_0_pt > 30 && vjet_1_pt > 30 \
                                && mjj_vjet > 65 && mjj_vjet < 105 \
                                && bReqTight \
                                && whad_pt < 200 \
                                && DNNoutput_resolved > 0.3 \
                                '

cuts["res_topcr_dnnall_mu"] = 'VBS_category==1 \
                                && abs(Lepton_pdgId[0])==13 \
                                && vjet_0_pt > 30 && vjet_1_pt > 30 \
                                && mjj_vjet > 65 && mjj_vjet < 105 \
                                && bReqTight \
                                && whad_pt < 200 \
                                '

cuts["res_topcr_dnnhigh_mu"] = 'VBS_category==1 \
                                && abs(Lepton_pdgId[0])==13 \
                                && vjet_0_pt > 30 && vjet_1_pt > 30 \
                                && mjj_vjet > 65 && mjj_vjet < 105 \
                                && bReqTight \
                                && whad_pt < 200 \
                                && DNNoutput_resolved > 0.3 \
                                '

#########################################################################
###############|----------------------------------|######################
###############|          Boosted category       |######################
###############|----------------------------------|######################
#########################################################################


# cuts["boost_sig_dnnall_ele"] = 'VBS_category==0 \
#                             && abs(Lepton_pdgId[0])==11 \
#                             && vjet_0_pt > 200 \
#                             && mjj_vjet > 65 && mjj_vjet < 105 \
#                             && bVeto \
#                             '

# cuts["boost_sig_dnnhigh_ele"] = 'VBS_category==0 \
#                             && abs(Lepton_pdgId[0])==11 \
#                             && vjet_0_pt > 200 \
#                             && mjj_vjet > 65 && mjj_vjet < 105 \
#                             && bVeto \
#                             && DNNoutput_boosted > 0.3 \
#                             '

# cuts["boost_sig_dnnall_mu"] = 'VBS_category==0 \
#                             && abs(Lepton_pdgId[0])==13 \
#                             && vjet_0_pt > 200 \
#                             && mjj_vjet > 65 && mjj_vjet < 105 \
#                             && bVeto \
#                             '


# cuts["boost_sig_dnnhigh_mu"] = 'VBS_category==0 \
#                             && abs(Lepton_pdgId[0])==13 \
#                             && vjet_0_pt > 200 \
#                             && mjj_vjet > 65 && mjj_vjet < 105 \
#                             && bVeto \
#                             && DNNoutput_boosted > 0.3 \
#                             '


# ###############################################
# # Wjets

# cuts["boost_wjetcr_dnnall_ele"] = 'VBS_category==0 \
#                             && abs(Lepton_pdgId[0])==11 \
#                             && vjet_0_pt > 200 \
#                             && (mjj_vjet <= 65 || mjj_vjet >= 105)  \
#                             && bVeto \
#                             '


# cuts["boost_wjetcr_dnnhigh_ele"] = 'VBS_category==0 \
#                             && abs(Lepton_pdgId[0])==11 \
#                             && vjet_0_pt > 200 \
#                             && (mjj_vjet <= 65 || mjj_vjet >= 105)  \
#                             && bVeto \
#                             && DNNoutput_boosted > 0.3 \
#                             '

# cuts["boost_wjetcr_dnnall_mu"] = 'VBS_category==0 \
#                             && abs(Lepton_pdgId[0])==13 \
#                             && vjet_0_pt > 200 \
#                             && (mjj_vjet <= 65 || mjj_vjet >= 105)  \
#                             && bVeto \
#                             '


# cuts["boost_wjetcr_dnnhigh_mu"] = 'VBS_category==0 \
#                             && abs(Lepton_pdgId[0])==13 \
#                             && vjet_0_pt > 200 \
#                             && (mjj_vjet <= 65 || mjj_vjet >= 105)  \
#                             && bVeto \
#                             && DNNoutput_boosted > 0.3 \
#                              '


# ###############################################
# #Top


# ## Tight top
# cuts["boost_topcr_dnnall_ele"] = 'VBS_category==0 \
#                             && abs(Lepton_pdgId[0])==11 \
#                             && vjet_0_pt > 200 \
#                             && mjj_vjet > 65 && mjj_vjet < 105 \
#                             && bReqTight \
#                             '

# cuts["boost_topcr_dnnhigh_ele"] = 'VBS_category==0 \
#                             && abs(Lepton_pdgId[0])==11 \
#                             && vjet_0_pt > 200 \
#                             && mjj_vjet > 65 && mjj_vjet < 105 \
#                             && bReqTight \
#                             && DNNoutput_boosted > 0.3 \
#                             '


# cuts["boost_topcr_dnnall_mu"] = 'VBS_category==0 \
#                             && abs(Lepton_pdgId[0])==13 \
#                             && vjet_0_pt > 200 \
#                             && mjj_vjet > 65 && mjj_vjet < 105 \
#                             && bReqTight \
#                             '



# cuts["boost_topcr_dnnhigh_mu"] = 'VBS_category==0 \
#                             && abs(Lepton_pdgId[0])==13 \
#                             && vjet_0_pt > 200 \
#                             && mjj_vjet > 65 && mjj_vjet < 105 \
#                             && bReqTight \
#                             && DNNoutput_boosted > 0.3 \
#                              '