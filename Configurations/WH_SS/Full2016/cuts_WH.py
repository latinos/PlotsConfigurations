# cuts

#cuts = {}
  
supercut = 'mll>12  \
            && std_vector_lepton_pt[0]>25 && std_vector_lepton_pt[1]>10 \
            && std_vector_lepton_pt[2]<10 \
            && metPfType1 > 20 \
            && (abs(std_vector_lepton_flavour[1]) == 13 || std_vector_lepton_pt[1]>13) \
            && ((abs(std_vector_jet_eta[0]) < 2.5) && (abs(std_vector_jet_eta[1]) < 2.5)) \
            && (njet==2) \
            && (std_vector_jet_pt[0]>30 && std_vector_jet_pt[1]>30) \
            && (mjj>=65 && mjj<110) \
            '


#cuts['hww2l2v_13TeV_of2j_vbf']  = '(std_vector_lepton_flavour[0] * std_vector_lepton_flavour[1] == -11*13)    \
#                               && (abs(std_vector_lepton_flavour[1]) == 13 || std_vector_lepton_pt[1]>13) \
#                               && (mth>=60 && mth<125) \
#                               && (njet==2) \
#                               && (abs(std_vector_jet_eta[0])<4.7) && (abs(std_vector_jet_eta[1])<4.7) \
#                               && (abs((std_vector_lepton_eta[0] - (jeteta1+jeteta2)/2)/detajj) < 0.5) \
#                               && (abs((std_vector_lepton_eta[1] - (jeteta1+jeteta2)/2)/detajj) < 0.5) \
#                               && (detajj>3.5 && mjj>400) \
#                               && (std_vector_jet_pt[0]>30 && std_vector_jet_pt[1]>30) \
#                               && '+bVeto+' \
#                               '

#cuts['hww2l2v_13TeV_of2j_WH_SS']  = '((std_vector_lepton_flavour[0] * std_vector_lepton_flavour[1] == 11*13) || (std_vector_lepton_flavour[0] * std_vector_lepton_flavour[1] == -11*-13) || (std_vector_lepton_flavour[0] * std_vector_lepton_flavour[1] == 11*11) || (std_vector_lepton_flavour[0] * std_vector_lepton_flavour[1] == -11*-11) || (std_vector_lepton_flavour[0] * std_vector_lepton_flavour[1] == 13*13) || (std_vector_lepton_flavour[0] * std_vector_lepton_flavour[1] == -13*-13))   \
#                                      && (abs(std_vector_lepton_flavour[1]) == 13 || std_vector_lepton_pt[1]>13) \
#                                      && (abs(std_vector_lepton_eta[0]) < 2.5) \
#                                      && (njet==2) \
#                                      && (std_vector_jet_pt[0]>30 && std_vector_jet_pt[1]>30) \
#                                      && (mjj>=65 && mjj<110) \
#                                      && zveto_3l > 15 \
#                                      && '+bVeto+' \
#                                      '


cuts['hww2l2v_13TeV_of2j_WH_SS_ee'] = '((std_vector_lepton_flavour[0] * std_vector_lepton_flavour[1] == 11*11) || (std_vector_lepton_flavour[0] * std_vector_lepton_flavour[1] == -11*-11)) \
                                       && '+bVeto+' \
                                       '

cuts['hww2l2v_13TeV_of2j_WH_SS_uu'] = '((std_vector_lepton_flavour[0] * std_vector_lepton_flavour[1] == 13*13) || (std_vector_lepton_flavour[0] * std_vector_lepton_flavour[1] == -13*-13)) \
                                       && '+bVeto+' \
                                       '
cuts['hww2l2v_13TeV_of2j_WH_SS_eu'] = '((std_vector_lepton_flavour[0] == 11 && std_vector_lepton_flavour[1] == 13) || (std_vector_lepton_flavour[0] == -11 && std_vector_lepton_flavour[1] == -13) \
                                       && '+bVeto+' \
                                       '
cuts['hww2l2v_13TeV_of2j_WH_SS_ue'] = '((std_vector_lepton_flavour[0] == 13 && std_vector_lepton_flavour[1] == 11) || (std_vector_lepton_flavour[0] == -13 && std_vector_lepton_flavour[1] == -11)) \
                                       && '+bVeto+' \
                                       '




#cuts['hww2l2v_13TeV_of2j_vbf_highmjj']  = '(std_vector_lepton_flavour[0] * std_vector_lepton_flavour[1] == -11*13)    \
#                                     && (abs(std_vector_lepton_flavour[1]) == 13 || std_vector_lepton_pt[1]>13) \
#                                      && (mth>=60 && mth<125) \
#                                      && (njet==2) \
#                                      && (abs(std_vector_jet_eta[0])<4.7) && (abs(std_vector_jet_eta[1])<4.7) \
#                                      && (abs((std_vector_lepton_eta[0] - (jeteta1+jeteta2)/2)/detajj) < 0.5) \
#                                      && (abs((std_vector_lepton_eta[1] - (jeteta1+jeteta2)/2)/detajj) < 0.5) \
#                                      && (detajj>3.5 && mjj>=700) \
#                                      && (std_vector_jet_pt[0]>30 && std_vector_jet_pt[1]>30) \
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
