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


############ 
## Signal

# cuts["res_sig"] = 'VBS_category==1 \
#                 && vjet_0_pt > 30 && vjet_1_pt > 30 \
#                 && mjj_vjet > 65 && mjj_vjet < 105 \
#                 && bVeto \
#                 && w_had_pt < 200 \
#                 && veto_fatjet_wjet85 \
#                 '



###############
##### Wjets

cuts["res_wjetcr"] = 'VBS_category==1 \
                    && vjet_0_pt > 30 && vjet_1_pt > 30 \
                    && mjj_vjet> 40 && (mjj_vjet <= 65 || mjj_vjet >= 105) \
                    && bVeto \
                    && w_had_pt < 200 \
                    && veto_fatjet_wjet85 \
                    '


cuts["res_wjetcr_vbs0_higheta"] = 'VBS_category==1 \
                    && vjet_0_pt > 30 && vjet_1_pt > 30 \
                    && mjj_vjet> 40 && (mjj_vjet <= 65 || mjj_vjet >= 105) \
                    && bVeto \
                    && w_had_pt < 200 \
                    && veto_fatjet_wjet85 \
                    && abs(vbs_0_eta) > 2 \
                    '


cuts["res_wjetcr_vbs0_loweta"] = 'VBS_category==1 \
                    && vjet_0_pt > 30 && vjet_1_pt > 30 \
                    && mjj_vjet> 40 && (mjj_vjet <= 65 || mjj_vjet >= 105) \
                    && bVeto \
                    && w_had_pt < 200 \
                    && veto_fatjet_wjet85 \
                    && abs(vbs_0_eta) <= 2 \
                    '

cuts["res_wjetcr_vjet0_higheta"] = 'VBS_category==1 \
                    && vjet_0_pt > 30 && vjet_1_pt > 30 \
                    && mjj_vjet> 40 && (mjj_vjet <= 65 || mjj_vjet >= 105) \
                    && bVeto \
                    && w_had_pt < 200 \
                    && veto_fatjet_wjet85 \
                    && abs(vjet_0_eta) > 2 \
                    '


cuts["res_wjetcr_vjet0_loweta"] = 'VBS_category==1 \
                    && vjet_0_pt > 30 && vjet_1_pt > 30 \
                    && mjj_vjet> 40 && (mjj_vjet <= 65 || mjj_vjet >= 105) \
                    && bVeto \
                    && w_had_pt < 200 \
                    && veto_fatjet_wjet85 \
                    && abs(vjet_0_eta) <= 2 \
                    '

###############
##### Top

### Top Tight region

cuts["res_topcr_ele"] = 'VBS_category==1 \
                        && vjet_0_pt > 30 && vjet_1_pt > 30 \
                        && mjj_vjet > 65 && mjj_vjet < 105 \
                        && bReqTight \
                        && w_had_pt < 200 \
                        && veto_fatjet_wjet85 \
                        '


cuts["res_topcr_vbs0_higheta"] = 'VBS_category==1 \
                        && vjet_0_pt > 30 && vjet_1_pt > 30 \
                        && mjj_vjet > 65 && mjj_vjet < 105 \
                        && bReqTight \
                        && w_had_pt < 200 \
                        && veto_fatjet_wjet85 \
                        && abs(vbs_0_eta) > 2 \
                        '

cuts["res_topcr_vbs0_loweta"] = 'VBS_category==1 \
                        && vjet_0_pt > 30 && vjet_1_pt > 30 \
                        && mjj_vjet > 65 && mjj_vjet < 105 \
                        && bReqTight \
                        && w_had_pt < 200 \
                        && veto_fatjet_wjet85 \
                         && abs(vbs_0_eta) <= 2 \
                        '

cuts["res_topcr_vjet0_higheta"] = 'VBS_category==1 \
                        && vjet_0_pt > 30 && vjet_1_pt > 30 \
                        && mjj_vjet > 65 && mjj_vjet < 105 \
                        && bReqTight \
                        && w_had_pt < 200 \
                        && veto_fatjet_wjet85 \
                        && abs(vjet_0_eta) > 2 \
                        '

cuts["res_topcr_vjet0_loweta"] = 'VBS_category==1 \
                        && vjet_0_pt > 30 && vjet_1_pt > 30 \
                        && mjj_vjet > 65 && mjj_vjet < 105 \
                        && bReqTight \
                        && w_had_pt < 200 \
                        && veto_fatjet_wjet85 \
                         && abs(vjet_0_eta) <= 2 \
                        '