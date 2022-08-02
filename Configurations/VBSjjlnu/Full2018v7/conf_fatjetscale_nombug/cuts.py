# cuts

# Second lepton veto already done in post-processing 
#and Lepton WP setup in samples.py
supercut = '(   (abs(Lepton_pdgId[0])==11 && Lepton_pt[0]>35)\
             || (abs(Lepton_pdgId[0])==13 && Lepton_pt[0]>30 ) ) \
            && Alt$(Lepton_pt[1],0)<=10 && Alt$(Lepton_isLoose[1],1)> 0.5 \
            && vbs_0_pt > 50 && vbs_1_pt > 30 \
            && PuppiMET_pt > 30 \
            && deltaeta_vbs >= 2.5  \
            && mjj_vbs >= 500 \
            && Mtw_lep < 185 \
            '



# Tight top
cuts["boost_topcr_incl"] = 'VBS_category==0 \
                            && w_had_pt >= 200 \
                            && bReqTight \
                            '


# Tight top
cuts["boost_topcr_onshell"] = 'VBS_category==0 \
                            && w_had_pt >= 200 \
                            && mjj_vjet > 70 && mjj_vjet < 115 \
                            && bReqTight \
                            '


# Tight top
cuts["boost_topcr_offshell"] = 'VBS_category==0 \
                            && w_had_pt >= 200 \
                            && mjj_vjet > 40 && (mjj_vjet <= 70 || mjj_vjet >= 115) \
                            && bReqTight \
                            '

########################3

cuts["boost_wjetcr_incl"] = 'VBS_category==0 \
                            && w_had_pt >= 200 \
                            && bVeto \
                            '


# Tight top
cuts["boost_wjetcr_onshell"] = 'VBS_category==0 \
                            && w_had_pt >= 200 \
                            && mjj_vjet > 70 && mjj_vjet < 115 \
                            && bVeto \
                            '


# Tight top
cuts["boost_wjetcr_offshell"] = 'VBS_category==0 \
                            && w_had_pt >= 200 \
                            && mjj_vjet > 40 && (mjj_vjet <= 70 || mjj_vjet >= 115) \
                            && bVeto \
                            '

        #########################                    

# Tight top
cuts["boost_topcr_incl_nom"] = 'VBS_category==0 \
                            && w_had_pt_nom >= 200 \
                            && bReqTight \
                            '


# Tight top
cuts["boost_topcr_onshell_nom"] = 'VBS_category==0 \
                            && w_had_pt_nom >= 200 \
                            && mjj_vjet > 70 && mjj_vjet < 115 \
                            && bReqTight \
                            '


# Tight top
cuts["boost_topcr_offshell_nom"] = 'VBS_category==0 \
                            && w_had_pt_nom >= 200 \
                            && mjj_vjet > 40 && (mjj_vjet <= 70 || mjj_vjet >= 115) \
                            && bReqTight \
                            '

########################3

cuts["boost_wjetcr_incl_nom"] = 'VBS_category==0 \
                            && w_had_pt_nom >= 200 \
                            && bVeto \
                            '


# Tight top
cuts["boost_wjetcr_onshell_nom"] = 'VBS_category==0 \
                            && w_had_pt_nom >= 200 \
                            && mjj_vjet > 70 && mjj_vjet < 115 \
                            && bVeto \
                            '


# Tight top
cuts["boost_wjetcr_offshell_nom"] = 'VBS_category==0 \
                            && w_had_pt_nom >= 200 \
                            && mjj_vjet > 40 && (mjj_vjet <= 70 || mjj_vjet >= 115) \
                            && bVeto \
                            '


# ###############################3
# # Tight top
# cuts["boost_topcr_incl_scaled"] = 'VBS_category==0 \
#                             && w_had_pt_nom_scaled >= 200 \
#                             && bReqTight \
#                             '


# # Tight top
# cuts["boost_topcr_onshell_scaled"] = 'VBS_category==0 \
#                             && w_had_pt_nom_scaled >= 200 \
#                             && mjj_vjet_scaled > 70 && mjj_vjet_scaled < 115 \
#                             && bReqTight \
#                             '


# # Tight top
# cuts["boost_topcr_offshell_scaled"] = 'VBS_category==0 \
#                             && w_had_pt_nom_scaled >= 200 \
#                             && mjj_vjet_scaled > 40 && (mjj_vjet_scaled <= 70 || mjj_vjet_scaled >= 115) \
#                             && bReqTight \
#                             '

########################3

# cuts["boost_wjetcr_incl_scaled"] = 'VBS_category==0 \
#                             && w_had_pt_nom_scaled >= 200 \
#                             && bVeto \
#                             '


# # Tight top
# cuts["boost_wjetcr_onshell_scaled"] = 'VBS_category==0 \
#                             && w_had_pt_nom_scaled >= 200 \
#                             && mjj_vjet_scaled > 70 && mjj_vjet_scaled < 115 \
#                             && bVeto \
#                             '


# # Tight top
# cuts["boost_wjetcr_offshell_scaled"] = 'VBS_category==0 \
#                             && w_had_pt_nom_scaled >= 200 \
#                             && mjj_vjet_scaled > 40 && (mjj_vjet_scaled <= 70 || mjj_vjet_scaled >= 115) \
#                             && bVeto \
#                             '