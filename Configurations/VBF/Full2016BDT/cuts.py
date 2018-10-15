# cuts

#cuts = {}
  
supercut = 'mll>12  \
            && std_vector_lepton_pt[0]>25 && std_vector_lepton_pt[1]>10 \
            && std_vector_lepton_pt[2]<10 \
            && ptll > 30 \
            && (std_vector_lepton_flavour[0] * std_vector_lepton_flavour[1] == -11*13) \
            '

cuts['hww2l2v_13TeV_of2j_vbf']  = '(std_vector_lepton_flavour[0] * std_vector_lepton_flavour[1] == -11*13)    \
                                      && (abs(std_vector_lepton_flavour[1]) == 13 || std_vector_lepton_pt[1]>13) \
                                      && (abs((std_vector_lepton_eta[0] - (jeteta1+jeteta2)/2)/detajj) < 0.5) \
                                      && (abs((std_vector_lepton_eta[1] - (jeteta1+jeteta2)/2)/detajj) < 0.5) \
                                      && (abs(std_vector_jet_eta[0])<4.7) && (abs(std_vector_jet_eta[1])<4.7) \
                                      && (std_vector_jet_pt[0] > 30. && std_vector_jet_pt[1]>30.) \
                                      && (njet==2) \
                                      && metPfType1 > 20 \
                                      && (detajj>3.0 && mjj>300) \
                                      && '+bVeto+' \
                                      && hww_VBF_mvaBDT_ggH(mjj,jetpt1,jetpt2,detajj,jeteta1,jeteta2) > 0.5 \
                                      '

#cuts['hww2l2v_13TeV_of2j_vbf_noMVAShape']  = '(std_vector_lepton_flavour[0] * std_vector_lepton_flavour[1] == -11*13)    \
#                                      && (abs(std_vector_lepton_flavour[1]) == 13 || std_vector_lepton_pt[1]>13) \
#                                      && (abs((std_vector_lepton_eta[0] - (jeteta1+jeteta2)/2)/detajj) < 0.5) \
#                                      && (abs((std_vector_lepton_eta[1] - (jeteta1+jeteta2)/2)/detajj) < 0.5) \
#                                      && (abs(std_vector_jet_eta[0])<4.7) && (abs(std_vector_jet_eta[1])<4.7) \
#                                      && (std_vector_jet_pt[0] > 30. && std_vector_jet_pt[1]>30.) \
#                                      && (njet==2) \
#                                      && hww_VBF_mvaBDT(mll,mjj,jetpt1,jetpt2,detajj,mth,dphill,dphillmet,mR) > 0. \
#                                      && metPfType1 > 20 \
#                                      && (detajj>3.0 && mjj>300) \
#                                      && '+bVeto+' \
#                                      && hww_VBF_mvaBDT_ggH(mjj,jetpt1,jetpt2,detajj,jeteta1,jeteta2) > 0.5 \
#                                      '

#cuts['hww2l2v_13TeV_of2j_vbf']  = '(std_vector_lepton_flavour[0] * std_vector_lepton_flavour[1] == -11*13)    \
#                                      && (abs(std_vector_lepton_flavour[1]) == 13 || std_vector_lepton_pt[1]>13) \
#                                      && (abs((std_vector_lepton_eta[0] - (jeteta1+jeteta2)/2)/detajj) < 0.5) \
#                                      && (abs((std_vector_lepton_eta[1] - (jeteta1+jeteta2)/2)/detajj) < 0.5) \
#                                      && (abs(std_vector_jet_eta[0])<4.7) && (abs(std_vector_jet_eta[1])<4.7) \
#                                      && (njet==2) \
#                                      && (detajj>3.5 && mjj>400) \
#                                      && '+bVeto+' \
#                                      '
#
#
#cuts['hww2l2v_13TeV_of2j_vbf_detajj']  = '(std_vector_lepton_flavour[0] * std_vector_lepton_flavour[1] == -11*13)    \
#                                      && (abs(std_vector_lepton_flavour[1]) == 13 || std_vector_lepton_pt[1]>13) \
#                                      && (abs((std_vector_lepton_eta[0] - (jeteta1+jeteta2)/2)/detajj) < 0.5) \
#                                      && (abs((std_vector_lepton_eta[1] - (jeteta1+jeteta2)/2)/detajj) < 0.5) \
#                                      && (abs(std_vector_jet_eta[0])<4.7) && (abs(std_vector_jet_eta[1])<4.7) \
#                                      && (njet==2) \
#                                      && (detajj>3.0 && mjj>400) \
#                                      && '+bVeto+' \
#                                      '
#
#
#cuts['hww2l2v_13TeV_of2j_vbf_mjj']  = '(std_vector_lepton_flavour[0] * std_vector_lepton_flavour[1] == -11*13)    \
#                                      && (abs(std_vector_lepton_flavour[1]) == 13 || std_vector_lepton_pt[1]>13) \
#                                      && (abs((std_vector_lepton_eta[0] - (jeteta1+jeteta2)/2)/detajj) < 0.5) \
#                                      && (abs((std_vector_lepton_eta[1] - (jeteta1+jeteta2)/2)/detajj) < 0.5) \
#                                      && (abs(std_vector_jet_eta[0])<4.7) && (abs(std_vector_jet_eta[1])<4.7) \
#                                      && (njet==2) \
#                                      && (detajj>3.5 && mjj>300) \
#                                      && '+bVeto+' \
#                                      '
#
#cuts['hww2l2v_13TeV_of2j_vbf_detajj_mjj']  = '(std_vector_lepton_flavour[0] * std_vector_lepton_flavour[1] == -11*13)    \
#                                      && (abs(std_vector_lepton_flavour[1]) == 13 || std_vector_lepton_pt[1]>13) \
#                                      && (abs((std_vector_lepton_eta[0] - (jeteta1+jeteta2)/2)/detajj) < 0.5) \
#                                      && (abs((std_vector_lepton_eta[1] - (jeteta1+jeteta2)/2)/detajj) < 0.5) \
#                                      && (abs(std_vector_jet_eta[0])<4.7) && (abs(std_vector_jet_eta[1])<4.7) \
#                                      && (njet==2) \
#                                      && (detajj>3.0 && mjj>300) \
#                                      && '+bVeto+' \
#                                      '
#
#cuts['hww2l2v_13TeV_of2j_vbf_met']  = '(std_vector_lepton_flavour[0] * std_vector_lepton_flavour[1] == -11*13)    \
#                                      && (abs(std_vector_lepton_flavour[1]) == 13 || std_vector_lepton_pt[1]>13) \
#                                      && (abs((std_vector_lepton_eta[0] - (jeteta1+jeteta2)/2)/detajj) < 0.5) \
#                                      && (abs((std_vector_lepton_eta[1] - (jeteta1+jeteta2)/2)/detajj) < 0.5) \
#                                      && (abs(std_vector_jet_eta[0])<4.7) && (abs(std_vector_jet_eta[1])<4.7) \
#                                      && (njet==2) \
#                                      && metPfType1 > 20 \
#                                      && (detajj>3.5 && mjj>400) \
#                                      && '+bVeto+' \
#                                      '

#cuts['hww2l2v_13TeV_of2j_vbf_detajj_mjj_met']  = '(std_vector_lepton_flavour[0] * std_vector_lepton_flavour[1] == -11*13)    \
#                                      && (abs(std_vector_lepton_flavour[1]) == 13 || std_vector_lepton_pt[1]>13) \
#                                      && (abs((std_vector_lepton_eta[0] - (jeteta1+jeteta2)/2)/detajj) < 0.5) \
#                                      && (abs((std_vector_lepton_eta[1] - (jeteta1+jeteta2)/2)/detajj) < 0.5) \
#                                      && (abs(std_vector_jet_eta[0])<4.7) && (abs(std_vector_jet_eta[1])<4.7) \
#                                      && (njet==2) \
#                                      && metPfType1 > 20 \
#                                      && (detajj>3.0 && mjj>300) \
#                                      && '+bVeto+' \
#                                      '

#cuts['hww2l2v_13TeV_of2j_vbf_detajj_mjj_met_jetpt']  = '(std_vector_lepton_flavour[0] * std_vector_lepton_flavour[1] == -11*13)    \
#                                      && (abs(std_vector_lepton_flavour[1]) == 13 || std_vector_lepton_pt[1]>13) \
#                                      && (abs((std_vector_lepton_eta[0] - (jeteta1+jeteta2)/2)/detajj) < 0.5) \
#                                      && (abs((std_vector_lepton_eta[1] - (jeteta1+jeteta2)/2)/detajj) < 0.5) \
#                                      && (abs(std_vector_jet_eta[0])<4.7) && (abs(std_vector_jet_eta[1])<4.7) \
#                                      && (std_vector_jet_pt[0] > 30. && std_vector_jet_pt[1]>30.) \
#                                      && (njet==2) \
#                                      && metPfType1 > 20 \
#                                      && (detajj>3.0 && mjj>300) \
#                                      && '+bVeto+' \
#                                      '

#
# control regions
#


#cuts['hww2l2v_13TeV_top_of2j_vbf']  = '(std_vector_lepton_flavour[0] * std_vector_lepton_flavour[1] == -11*13)    \
#                && (abs(std_vector_lepton_flavour[1]) == 13 || std_vector_lepton_pt[1]>13) \
#                && mll>50 \
#                && ( std_vector_jet_pt[0] >= 30 ) \
#                && ( std_vector_jet_pt[1] >= 30 ) \
#                && (njet==2) \
#                && (detajj>3.5 && mjj>400) \
#                && ( std_vector_jet_cmvav2[0]>-0.5884 || std_vector_jet_cmvav2[1]>-0.5884 ) \
#                '
#
#
#
#cuts['hww2l2v_13TeV_dytt_of2j_vbf']  = '(std_vector_lepton_flavour[0] * std_vector_lepton_flavour[1] == -11*13)    \
#                && (abs(std_vector_lepton_flavour[1]) == 13 || std_vector_lepton_pt[1]>13) \
#                && ( mth<60) \
#                && mll>40 && mll<80 \
#                && ( std_vector_jet_pt[0] >= 30 ) \
#                && ( std_vector_jet_pt[1] >= 30 ) \
#                && (njet==2) \
#                && (detajj>3.5 && mjj>400) \
#                && '+bVeto+' \
#                '





# 11 = e
# 13 = mu
# 15 = tau
