# cuts

# Second lepton veto already done in post-processing 
#and Lepton WP setup in samples.py
supercut = '(   (abs(Lepton_pdgId[0])==11 && Lepton_pt[0]>30)\
             || (abs(Lepton_pdgId[0])==13 && Lepton_pt[0]>30 ) ) \
            && Alt$(Lepton_pt[1],0)<=10 && Alt$(Lepton_isLoose[1],1)> 0.5 \
            && vbs_0_pt > 50 && vbs_1_pt > 30 \
            && PuppiMET_pt > 30 \
            && deltaeta_vbs >= 2.5  \
            && mjj_vbs >= 500 \
            '
#s&& Mtw_lep < 185 \

cuts["res_wjetcr_ele_incl"] = 'VBS_category==1 \
                                && abs(Lepton_pdgId[0])==11 \
                                && vjet_0_pt > 30 && vjet_1_pt > 30 \
                                && (mjj_vjet <= 65 || mjj_vjet >= 105) \
                                && bVeto \
                                && w_had_pt < 200 \
                                '


cuts["res_wjetcr_ele_incl_cutsip"] = 'VBS_category==1 \
                                && abs(Lepton_pdgId[0])==11 \
                                && vjet_0_pt > 30 && vjet_1_pt > 30 \
                                && (mjj_vjet <= 65 || mjj_vjet >= 105) \
                                && bVeto \
                                && w_had_pt < 200 \
                                && sip3d_cut \
                                '


cuts["res_wjetcr_ele_loweta"] = 'VBS_category==1 \
                                && abs(Lepton_pdgId[0])==11 \
                                && vjet_0_pt > 30 && vjet_1_pt > 30 \
                                && (mjj_vjet <= 65 || mjj_vjet >= 105) \
                                && bVeto \
                                && w_had_pt < 200 \
                                && abs(Lepton_eta[0])< 1.49\
                                '

cuts["res_wjetcr_ele_higheta"] = 'VBS_category==1 \
                                && abs(Lepton_pdgId[0])==11 \
                                && vjet_0_pt > 30 && vjet_1_pt > 30 \
                                && (mjj_vjet <= 65 || mjj_vjet >= 105) \
                                && bVeto \
                                && w_had_pt < 200 \
                                && abs(Lepton_eta[0]) >= 1.49 \
                                '

cuts["res_wjetcr_ele_higheta_cutsip"] = 'VBS_category==1 \
                                && abs(Lepton_pdgId[0])==11 \
                                && vjet_0_pt > 30 && vjet_1_pt > 30 \
                                && (mjj_vjet <= 65 || mjj_vjet >= 105) \
                                && bVeto \
                                && w_had_pt < 200 \
                                && abs(Lepton_eta[0]) >= 1.49 \
                                && sip3d_cut \
                                '


cuts["res_wjetcr_ele_higheta_cutsipinv"] = 'VBS_category==1 \
                                && abs(Lepton_pdgId[0])==11 \
                                && vjet_0_pt > 30 && vjet_1_pt > 30 \
                                && (mjj_vjet <= 65 || mjj_vjet >= 105) \
                                && bVeto \
                                && w_had_pt < 200 \
                                && abs(Lepton_eta[0]) >= 1.49 \
                                && sip3d_cut \
                                '

cuts["res_topcr_ele_cutsip"] = 'VBS_category==1 \
                                && abs(Lepton_pdgId[0])==11 \
                                && vjet_0_pt > 30 && vjet_1_pt > 30 \
                                && mjj_vjet > 65 && mjj_vjet < 105 \
                                && bReqTight \
                                && w_had_pt < 200 \
                                && sip3d_cut \
                                '

cuts["res_topcr_ele_higheta_cutsip"] = 'VBS_category==1 \
                                && abs(Lepton_pdgId[0])==11 \
                                && vjet_0_pt > 30 && vjet_1_pt > 30 \
                                && mjj_vjet > 65 && mjj_vjet < 105 \
                                && bReqTight \
                                && w_had_pt < 200 \
                                && abs(Lepton_eta[0]) >= 1.49 \
                                && sip3d_cut \
                                '