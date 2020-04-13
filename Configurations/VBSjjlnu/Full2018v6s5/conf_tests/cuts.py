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

cuts["res_sig_dnn"] = 'VBS_category==1 \
                                && vjet_0_pt > 30 && vjet_1_pt > 30 \
                                && mjj_vjet > 65 && mjj_vjet < 105 \
                                && bVeto \
                                && whad_pt < 200 \
                                '

cuts["res_sig_dnn3"] = 'VBS_category==1 \
                                && vjet_0_pt > 30 && vjet_1_pt > 30 \
                                && mjj_vjet > 65 && mjj_vjet < 105 \
                                && bVeto \
                                && whad_pt < 200 \
                                && DNNoutput_resolved > 0.3 \
                                '

cuts["res_sig_dnn4"] = 'VBS_category==1 \
                                && vjet_0_pt > 30 && vjet_1_pt > 30 \
                                && mjj_vjet > 65 && mjj_vjet < 105 \
                                && bVeto \
                                && whad_pt < 200 \
                                && DNNoutput_resolved > 0.4 \
                                '


cuts["res_sig_dnn5"] = 'VBS_category==1 \
                                && vjet_0_pt > 30 && vjet_1_pt > 30 \
                                && mjj_vjet > 65 && mjj_vjet < 105 \
                                && bVeto \
                                && whad_pt < 200 \
                                && DNNoutput_resolved > 0.5 \
                                '

cuts["res_sig_dnn6"] = 'VBS_category==1 \
                                && vjet_0_pt > 30 && vjet_1_pt > 30 \
                                && mjj_vjet > 65 && mjj_vjet < 105 \
                                && bVeto \
                                && whad_pt < 200 \
                                && DNNoutput_resolved > 0.6 \
                                '


##################################
# Won-shell, btag ---> top region

cuts["res_topcr_dnn"] = 'VBS_category==1 \
                                && vjet_0_pt > 30 && vjet_1_pt > 30 \
                                && mjj_vjet > 65 && mjj_vjet < 105 \
                                && bReq \
                                && whad_pt < 200 \
                                '

cuts["res_topcr_dnn3"] = 'VBS_category==1 \
                                && vjet_0_pt > 30 && vjet_1_pt > 30 \
                                && mjj_vjet > 65 && mjj_vjet < 105 \
                                && bReq \
                                && whad_pt < 200 \
                                && DNNoutput_resolved > 0.3 \
                                '

cuts["res_topcr_dnn4"] = 'VBS_category==1 \
                                && vjet_0_pt > 30 && vjet_1_pt > 30 \
                                && mjj_vjet > 65 && mjj_vjet < 105 \
                                && bReq \
                                && whad_pt < 200 \
                                && DNNoutput_resolved > 0.4 \
                                '


cuts["res_topcr_dnn5"] = 'VBS_category==1 \
                                && vjet_0_pt > 30 && vjet_1_pt > 30 \
                                && mjj_vjet > 65 && mjj_vjet < 105 \
                                && bReq \
                                && whad_pt < 200 \
                                && DNNoutput_resolved > 0.5 \
                                '

cuts["res_topcr_dnn6"] = 'VBS_category==1 \
                                && vjet_0_pt > 30 && vjet_1_pt > 30 \
                                && mjj_vjet > 65 && mjj_vjet < 105 \
                                && bReq \
                                && whad_pt < 200 \
                                && DNNoutput_resolved > 0.6 \
                                '


##################################
# Woff shell, bveto ---> WJet region

cuts["res_wjetcr_dnn"] = 'VBS_category==1 \
                                && vjet_0_pt > 30 && vjet_1_pt > 30 \
                                && (mjj_vjet <= 65 || mjj_vjet >= 105)  \
                                && bVeto \
                                && whad_pt < 200 \
                                '

cuts["res_wjetcr_dnn3"] = 'VBS_category==1 \
                                && vjet_0_pt > 30 && vjet_1_pt > 30 \
                                && (mjj_vjet <= 65 || mjj_vjet >= 105)  \
                                && bVeto \
                                && whad_pt < 200 \
                                && DNNoutput_resolved > 0.3 \
                                '

cuts["res_wjetcr_dnn4"] = 'VBS_category==1 \
                                && vjet_0_pt > 30 && vjet_1_pt > 30 \
                                && (mjj_vjet <= 65 || mjj_vjet >= 105)  \
                                && bVeto \
                                && whad_pt < 200 \
                                && DNNoutput_resolved > 0.4 \
                                '


cuts["res_wjetcr_dnn5"] = 'VBS_category==1 \
                                && vjet_0_pt > 30 && vjet_1_pt > 30 \
                                && (mjj_vjet <= 65 || mjj_vjet >= 105)  \
                                && bVeto \
                                && whad_pt < 200 \
                                && DNNoutput_resolved > 0.5 \
                                '

cuts["res_wjetcr_dnn6"] = 'VBS_category==1 \
                                && vjet_0_pt > 30 && vjet_1_pt > 30 \
                                && (mjj_vjet <= 65 || mjj_vjet >= 105)  \
                                && bVeto \
                                && whad_pt < 200 \
                                && DNNoutput_resolved > 0.6 \
                                '


#########################################################################
###############|----------------------------------|######################
###############|          Boosted category       |######################
###############|----------------------------------|######################
#########################################################################


cuts["boost_sig_dnn"] = 'VBS_category==0 \
                                && vjet_0_pt > 200 \
                                && mjj_vjet > 65 && mjj_vjet < 105 \
                                && bVeto \
                                '

cuts["boost_sig_dnn3"] = 'VBS_category==0 \
                                && vjet_0_pt > 200 \
                                && mjj_vjet > 65 && mjj_vjet < 105 \
                                && bVeto \
                                && DNNoutput_boosted > 0.3 \
                                '

cuts["boost_sig_dnn4"] = 'VBS_category==0 \
                                && vjet_0_pt > 200 \
                                && mjj_vjet > 65 && mjj_vjet < 105 \
                                && bVeto \
                                && DNNoutput_boosted > 0.4 \
                                '


cuts["boost_sig_dnn5"] = 'VBS_category==0 \
                                && vjet_0_pt > 200 \
                                && mjj_vjet > 65 && mjj_vjet < 105 \
                                && bVeto \
                                && DNNoutput_boosted > 0.5 \
                                '

cuts["boost_sig_dnn6"] = 'VBS_category==0 \
                                && vjet_0_pt > 200 \
                                && mjj_vjet > 65 && mjj_vjet < 105 \
                                && bVeto \
                                && DNNoutput_boosted > 0.6 \
                                '

###############################################
# Wjets


cuts["boost_wjetcr_dnn"] = 'VBS_category==0 \
                                && vjet_0_pt > 200 \
                                && (mjj_vjet <= 65 || mjj_vjet >= 105) \
                                && bVeto \
                                '

cuts["boost_wjetcr_dnn3"] = 'VBS_category==0 \
                                && vjet_0_pt > 200 \
                                && (mjj_vjet <= 65 || mjj_vjet >= 105) \
                                && bVeto \
                                && DNNoutput_boosted > 0.3 \
                                '

cuts["boost_wjetcr_dnn4"] = 'VBS_category==0 \
                                && vjet_0_pt > 200 \
                                && (mjj_vjet <= 65 || mjj_vjet >= 105) \
                                && bVeto \
                                && DNNoutput_boosted > 0.4 \
                                '


cuts["boost_wjetcr_dnn5"] = 'VBS_category==0 \
                                && vjet_0_pt > 200 \
                                && (mjj_vjet <= 65 || mjj_vjet >= 105) \
                                && bVeto \
                                && DNNoutput_boosted > 0.5 \
                                '

cuts["boost_wjetcr_dnn6"] = 'VBS_category==0 \
                                && vjet_0_pt > 200 \
                                && (mjj_vjet <= 65 || mjj_vjet >= 105) \
                                && bVeto \
                                && DNNoutput_boosted > 0.6 \
                                '


###############################################
#Top

cuts["boost_topcr_dnn"] = 'VBS_category==0 \
                                && vjet_0_pt > 200 \
                                && mjj_vjet > 65 && mjj_vjet < 105 \
                                && bReq \
                                '

cuts["boost_topcr_dnn3"] = 'VBS_category==0 \
                                && vjet_0_pt > 200 \
                                && mjj_vjet > 65 && mjj_vjet < 105 \
                                && bReq \
                                && DNNoutput_boosted > 0.3 \
                                '

cuts["boost_topcr_dnn4"] = 'VBS_category==0 \
                                && vjet_0_pt > 200 \
                                && mjj_vjet > 65 && mjj_vjet < 105 \
                                && bReq \
                                && DNNoutput_boosted > 0.4 \
                                '


cuts["boost_topcr_dnn5"] = 'VBS_category==0 \
                                && vjet_0_pt > 200 \
                                && mjj_vjet > 65 && mjj_vjet < 105 \
                                && bReq \
                                && DNNoutput_boosted > 0.5 \
                                '

cuts["boost_topcr_dnn6"] = 'VBS_category==0 \
                                && vjet_0_pt > 200 \
                                && mjj_vjet > 65 && mjj_vjet < 105 \
                                && bReq \
                                && DNNoutput_boosted > 0.6 \
                                '
