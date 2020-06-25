# cuts

# Second lepton veto already done in post-processing 
#and Lepton WP setup in samples.py
supercut = '( (abs(Lepton_pdgId[0])==11)*(Lepton_pt[0]>38) || (abs(Lepton_pdgId[0])==13)*(Lepton_pt[0]>30) ) \
            && vbs_0_pt > 30 && vbs_1_pt > 30 \
            && deltaeta_vbs >= 2  \
            && PuppiMET_pt > 30 \
            && mjj_vbs >=250 \
            && (abs(vbs_0_eta) <2.5 || abs(vbs_0_eta) > 3.2)\
            && (abs(vbs_1_eta) <2.5 || abs(vbs_1_eta) > 3.2)\
            && (abs(vjet_0_eta) <2.5 || abs(vjet_0_eta) > 3.2)\
            && (abs(vjet_1_eta) <2.5 || abs(vjet_1_eta) > 3.2)\
            '


#########################################################################
###############|----------------------------------|######################
###############|          Resolved category       |######################
###############|----------------------------------|######################
#########################################################################

#####################################
##  W-onshell, bveto --> Signal


cuts["res_sig_mjjincl_ele"] = 'VBS_category==1 \
                                && abs(Lepton_pdgId[0])==11 \
                                && vjet_0_pt > 30 && vjet_1_pt > 30 \
                                && mjj_vjet > 65 && mjj_vjet < 105 \
                                && bVeto \
                                '


# cuts["res_sig_mjjincl_dnnhigh_ele"] = 'VBS_category==1 \
#                                 && abs(Lepton_pdgId[0])==11 \
#                                 && vjet_0_pt > 30 && vjet_1_pt > 30 \
#                                 && mjj_vjet > 65 && mjj_vjet < 105 \
#                                 && bVeto \
#                                 && DNNoutput_resolved_v32 > 0.5 \
#                                 '

cuts["res_sig_mjjincl_mu"] = 'VBS_category==1 \
                                && abs(Lepton_pdgId[0])==13 \
                                && vjet_0_pt > 30 && vjet_1_pt > 30 \
                                && mjj_vjet > 65 && mjj_vjet < 105 \
                                && bVeto \
                                '


# cuts["res_sig_mjjincl_dnnhigh_mu"] = 'VBS_category==1 \
#                                 && abs(Lepton_pdgId[0])==13 \
#                                 && vjet_0_pt > 30 && vjet_1_pt > 30 \
#                                 && mjj_vjet > 65 && mjj_vjet < 105 \
#                                 && bVeto \
#                                 && DNNoutput_resolved_v32 > 0.5 \
#                                 '
##################################
# Won-shell, btag ---> top region


cuts["res_topcr_mjjincl_ele"] = 'VBS_category==1 \
                                && abs(Lepton_pdgId[0])==11 \
                                && vjet_0_pt > 30 && vjet_1_pt > 30 \
                                && mjj_vjet > 65 && mjj_vjet < 105 \
                                && bReq \
                                '


# cuts["res_topcr_mjjincl_dnnhigh_ele"] = 'VBS_category==1 \
#                                 && abs(Lepton_pdgId[0])==11 \
#                                 && vjet_0_pt > 30 && vjet_1_pt > 30 \
#                                 && mjj_vjet > 65 && mjj_vjet < 105 \
#                                 && DNNoutput_resolved_v32 > 0.5 \
#                                 && bReq \
#                                 '


cuts["res_topcr_mjjincl_mu"] = 'VBS_category==1 \
                                && abs(Lepton_pdgId[0])==13 \
                                && vjet_0_pt > 30 && vjet_1_pt > 30 \
                                && mjj_vjet > 65 && mjj_vjet < 105 \
                                && bReq \
                                '

# cuts["res_topcr_mjjincl_dnnhigh_mu"] = 'VBS_category==1 \
#                                 && abs(Lepton_pdgId[0])==13 \
#                                 && vjet_0_pt > 30 && vjet_1_pt > 30 \
#                                 && mjj_vjet > 65 && mjj_vjet < 105 \
#                                 && DNNoutput_resolved_v32 > 0.5 \
#                                 && bReq \
#                                 '

##################################
# Woff shell, bveto ---> WJet region


cuts["res_wjetcr_mjjincl_ele"] = 'VBS_category==1 \
                                && abs(Lepton_pdgId[0])==11 \
                                && vjet_0_pt > 30 && vjet_1_pt > 30 \
                                && (mjj_vjet <= 65 || mjj_vjet >= 105) \
                                && bVeto \
                                '


cuts["res_wjetcr_mjjincl_mu"] = 'VBS_category==1 \
                                && abs(Lepton_pdgId[0])==13 \
                                && vjet_0_pt > 30 && vjet_1_pt > 30 \
                                && (mjj_vjet <= 65 || mjj_vjet >= 105) \
                                && bVeto \
                                '


# cuts["res_wjetcr_mjjincl_dnnhigh_ele"] = 'VBS_category==1 \
#                                 && abs(Lepton_pdgId[0])==11 \
#                                 && vjet_0_pt > 30 && vjet_1_pt > 30 \
#                                 && bVeto \
#                                 && (mjj_vjet <= 65 || mjj_vjet >= 105) \
#                                 && DNNoutput_resolved_v32 > 0.5 \
#                                 '



# cuts["res_wjetcr_mjjincl_dnnhigh_mu"] = 'VBS_category==1 \
#                                 && abs(Lepton_pdgId[0])==13 \
#                                 && vjet_0_pt > 30 && vjet_1_pt > 30 \
#                                 && bVeto \
#                                 && (mjj_vjet <= 65 || mjj_vjet >= 105) \
#                                 && DNNoutput_resolved_v32 > 0.5 \
#                                 '



#########################################################################
###############|----------------------------------|######################
###############|          Boosted category       |######################
###############|----------------------------------|######################
#########################################################################


cuts["boost_sig_mjjincl_ele"] = 'VBS_category==0 \
                                && abs(Lepton_pdgId[0])==11 \
                                && vjet_0_pt > 200 \
                                && mjj_vjet > 65 && mjj_vjet < 105 \
                                && bVeto \
                                '


cuts["boost_wjetcr_mjjincl_ele"] = 'VBS_category==0 \
                                && abs(Lepton_pdgId[0])==11 \
                                && vjet_0_pt > 200 \
                                && (mjj_vjet <= 65 || mjj_vjet >= 105) \
                                && bVeto \
                                '

cuts["boost_topcr_mjjincl_ele"] = 'VBS_category==0 \
                                && abs(Lepton_pdgId[0])==11 \
                                && vjet_0_pt > 200 \
                                && mjj_vjet > 65 && mjj_vjet < 105 \
                                && bReq \
                                '

##############################################################################

cuts["boost_sig_mjjincl_mu"] = 'VBS_category==0 \
                                && abs(Lepton_pdgId[0])==13 \
                                && vjet_0_pt > 200 \
                                && mjj_vjet > 65 && mjj_vjet < 105 \
                                && bVeto \
                                '


cuts["boost_wjetcr_mjjincl_mu"] = 'VBS_category==0 \
                                && abs(Lepton_pdgId[0])==13 \
                                && vjet_0_pt > 200 \
                                && (mjj_vjet <= 65 || mjj_vjet >= 105) \
                                && bVeto \
                                '

cuts["boost_topcr_mjjincl_mu"] = 'VBS_category==0 \
                                && abs(Lepton_pdgId[0])==13 \
                                && vjet_0_pt > 200 \
                                && mjj_vjet > 65 && mjj_vjet < 105 \
                                && bReq \
                                '