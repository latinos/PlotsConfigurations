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


cuts["res_wjetcr_mu_incl"] = 'VBS_category==1 \
                                && abs(Lepton_pdgId[0])==13 \
                                && vjet_0_pt > 30 && vjet_1_pt > 30 \
                                && (mjj_vjet <= 65 || mjj_vjet >= 105) \
                                && bVeto \
                                && whad_pt < 200 \
                               '

cuts["res_wjetcr_ele_incl"] = 'VBS_category==1 \
                                && abs(Lepton_pdgId[0])==11 \
                                && vjet_0_pt > 30 && vjet_1_pt > 30 \
                                && (mjj_vjet <= 65 || mjj_vjet >= 105) \
                                && bVeto \
                                && whad_pt < 200 \
                                '

cuts["res_wjetcr_ele_dnnhigh"] = 'VBS_category==1 \
                                && abs(Lepton_pdgId[0])==11 \
                                && vjet_0_pt > 30 && vjet_1_pt > 30 \
                                && (mjj_vjet <= 65 || mjj_vjet >= 105) \
                                && bVeto \
                                && whad_pt < 200 \
                                && DNNoutput_resolved > 0.3 \
                                '

cuts["res_wjetcr_ele_loweta"] = 'VBS_category==1 \
                                && abs(Lepton_pdgId[0])==11 \
                                && vjet_0_pt > 30 && vjet_1_pt > 30 \
                                && (mjj_vjet <= 65 || mjj_vjet >= 105) \
                                && bVeto \
                                && whad_pt < 200 \
                                && abs(Lepton_eta[0])< 2\
                                '

cuts["res_wjetcr_ele_higheta"] = 'VBS_category==1 \
                                && abs(Lepton_pdgId[0])==11 \
                                && vjet_0_pt > 30 && vjet_1_pt > 30 \
                                && (mjj_vjet <= 65 || mjj_vjet >= 105) \
                                && bVeto \
                                && whad_pt < 200 \
                                && abs(Lepton_eta[0]) >= 2 \
                                '

# cuts["res_wjetcr_ele_loweta_highnvtx"] = 'VBS_category==1 \
#                                 && abs(Lepton_pdgId[0])==11 \
#                                 && vjet_0_pt > 30 && vjet_1_pt > 30 \
#                                 && (mjj_vjet <= 65 || mjj_vjet >= 105) \
#                                 && bVeto \
#                                 && whad_pt < 200 \
#                                 && abs(Lepton_eta[0])< 2\
#                                 && PV_npvs >= 25\
#                                 '

# cuts["res_wjetcr_ele_higheta_highnvtx"] = 'VBS_category==1 \
#                                 && abs(Lepton_pdgId[0])==11 \
#                                 && vjet_0_pt > 30 && vjet_1_pt > 30 \
#                                 && (mjj_vjet <= 65 || mjj_vjet >= 105) \
#                                 && bVeto \
#                                 && whad_pt < 200 \
#                                 && abs(Lepton_eta[0]) >= 2 \
#                                 &&  PV_npvs >= 25\
#                                 '

# cuts["res_wjetcr_ele_loweta_lownvtx"] = 'VBS_category==1 \
#                                 && abs(Lepton_pdgId[0])==11 \
#                                 && vjet_0_pt > 30 && vjet_1_pt > 30 \
#                                 && (mjj_vjet <= 65 || mjj_vjet >= 105) \
#                                 && bVeto \
#                                 && whad_pt < 200 \
#                                 && abs(Lepton_eta[0])< 2\
#                                 && PV_npvs < 25\
#                                 '

# cuts["res_wjetcr_ele_higheta_lownvtx"] = 'VBS_category==1 \
#                                 && abs(Lepton_pdgId[0])==11 \
#                                 && vjet_0_pt > 30 && vjet_1_pt > 30 \
#                                 && (mjj_vjet <= 65 || mjj_vjet >= 105) \
#                                 && bVeto \
#                                 && whad_pt < 200 \
#                                 && abs(Lepton_eta[0]) >= 2 \
#                                 && PV_npvs < 25 \
#                                 '

cuts["res_wjetcr_ele_loweta_lowPVsig"] = 'VBS_category==1 \
                                && abs(Lepton_pdgId[0])==11 \
                                && vjet_0_pt > 30 && vjet_1_pt > 30 \
                                && (mjj_vjet <= 65 || mjj_vjet >= 105) \
                                && bVeto \
                                && whad_pt < 200 \
                                && abs(Lepton_eta[0])< 2\
                                && Electron_sip3d[0] < 2.2\
                                '

cuts["res_wjetcr_ele_loweta_highPVsig"] = 'VBS_category==1 \
                                && abs(Lepton_pdgId[0])==11 \
                                && vjet_0_pt > 30 && vjet_1_pt > 30 \
                                && (mjj_vjet <= 65 || mjj_vjet >= 105) \
                                && bVeto \
                                && whad_pt < 200 \
                                && abs(Lepton_eta[0])< 2\
                                && Electron_sip3d[0] >= 2.2 \
                                '

cuts["res_wjetcr_ele_higheta_lowPVsig"] = 'VBS_category==1 \
                                && abs(Lepton_pdgId[0])==11 \
                                && vjet_0_pt > 30 && vjet_1_pt > 30 \
                                && (mjj_vjet <= 65 || mjj_vjet >= 105) \
                                && bVeto \
                                && whad_pt < 200 \
                                && abs(Lepton_eta[0]) >= 2 \
                                && Electron_sip3d[0] < 2.2 \
                                '


cuts["res_wjetcr_ele_higheta_highPVsig"] = 'VBS_category==1 \
                                && abs(Lepton_pdgId[0])==11 \
                                && vjet_0_pt > 30 && vjet_1_pt > 30 \
                                && (mjj_vjet <= 65 || mjj_vjet >= 105) \
                                && bVeto \
                                && whad_pt < 200 \
                                && abs(Lepton_eta[0]) >= 2 \
                                && Electron_sip3d[0] >= 2.2 \
                                '


cuts["res_wjetcr_ele_incl_lowPVsig"] = 'VBS_category==1 \
                                && abs(Lepton_pdgId[0])==11 \
                                && vjet_0_pt > 30 && vjet_1_pt > 30 \
                                && (mjj_vjet <= 65 || mjj_vjet >= 105) \
                                && bVeto \
                                && whad_pt < 200 \
                                && Electron_sip3d[0] < 2.2 \
                                '

cuts["res_wjetcr_ele_incl_highPVsig"] = 'VBS_category==1 \
                                && abs(Lepton_pdgId[0])==11 \
                                && vjet_0_pt > 30 && vjet_1_pt > 30 \
                                && (mjj_vjet <= 65 || mjj_vjet >= 105) \
                                && bVeto \
                                && whad_pt < 200 \
                                && Electron_sip3d[0] >= 2.2 \
                                '

# cuts["boost_wjetcr_ele_incl"] = 'VBS_category==0 \
#                             && abs(Lepton_pdgId[0])==11 \
#                             && vjet_0_pt > 200 \
#                             && (mjj_vjet <= 65 || mjj_vjet >= 105)  \
#                             && bVeto \
#                             '



# cuts["boost_wjetcr_ele_loweta"] = 'VBS_category==0 \
#                             && abs(Lepton_pdgId[0])==11 \
#                             && vjet_0_pt > 200 \
#                             && (mjj_vjet <= 65 || mjj_vjet >= 105)  \
#                             && bVeto \
#                             && abs(Lepton_eta[0])< 2 \
#                              '



# cuts["boost_wjetcr_ele_higheta"] = 'VBS_category==0 \
#                             && abs(Lepton_pdgId[0])==11 \
#                             && vjet_0_pt > 200 \
#                             && (mjj_vjet <= 65 || mjj_vjet >= 105)  \
#                             && bVeto \
#                             && abs(Lepton_eta[0]) >= 2 \
#                             '

                   