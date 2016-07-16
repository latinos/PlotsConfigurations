# cuts

#cuts = {}
  
supercut = 'mll>12  \
            && std_vector_lepton_pt[0]>20 && std_vector_lepton_pt[1]>10 \
            && std_vector_lepton_pt[2]<10 \
            && metPfType1 > 20 \
            && ptll > 30 \
            && (std_vector_lepton_flavour[0] * std_vector_lepton_flavour[1] == -11*13) \
            '


cuts['hww2l2v_13TeV_top_of2j']  = '(std_vector_lepton_flavour[0] * std_vector_lepton_flavour[1] == -11*13)    \
                && (abs(std_vector_lepton_flavour[1]) == 13 || std_vector_lepton_pt[1]>13) \
                && mll>50 \
                && mth>=60 \
                && mtw2 > 30 \
                && ( std_vector_jet_pt[0] >= 30 ) \
                && ( std_vector_jet_pt[1] >= 30 ) \
                && (mjj<65 || (mjj > 105 && mjj<400)) \
                && ( std_vector_jet_cmvav2[0]>-0.715 || std_vector_jet_cmvav2[1]>-0.715 ) \
                '



cuts['hww2l2v_13TeV_dytt_of2j']  = '(std_vector_lepton_flavour[0] * std_vector_lepton_flavour[1] == -11*13)    \
                && (abs(std_vector_lepton_flavour[1]) == 13 || std_vector_lepton_pt[1]>13) \
                && ( mth<60) \
                && mll>30 && mll<80 \
                && ( std_vector_jet_pt[0] >= 30 ) \
                && ( std_vector_jet_pt[1] >= 30 ) \
                && (mjj<65 || (mjj > 105 && mjj<400)) \
                && ( std_vector_jet_pt[0] < 20 || std_vector_jet_cmvav2[0] < -0.715 ) \
                && ( std_vector_jet_pt[1] < 20 || std_vector_jet_cmvav2[1] < -0.715 ) \
                && ( std_vector_jet_pt[2] < 20 || std_vector_jet_cmvav2[2] < -0.715 ) \
                && ( std_vector_jet_pt[3] < 20 || std_vector_jet_cmvav2[3] < -0.715 ) \
                && ( std_vector_jet_pt[4] < 20 || std_vector_jet_cmvav2[4] < -0.715 ) \
                && ( std_vector_jet_pt[5] < 20 || std_vector_jet_cmvav2[5] < -0.715 ) \
                && ( std_vector_jet_pt[6] < 20 || std_vector_jet_cmvav2[6] < -0.715 ) \
                && ( std_vector_jet_pt[7] < 20 || std_vector_jet_cmvav2[7] < -0.715 ) \
                && ( std_vector_jet_pt[8] < 20 || std_vector_jet_cmvav2[8] < -0.715 ) \
                && ( std_vector_jet_pt[9] < 20 || std_vector_jet_cmvav2[9] < -0.715 ) \
                '



cuts['hww2l2v_13TeV_of2j']  = '(std_vector_lepton_flavour[0] * std_vector_lepton_flavour[1] == -11*13)    \
                               && (abs(std_vector_lepton_flavour[1]) == 13 || std_vector_lepton_pt[1]>13) \
                               && (njet>=2) \
                               && (std_vector_jet_pt[0]>30 && std_vector_jet_pt[1]>30) \
                               && mtw2 > 30 \
                               && mth>=60 \
                               && (mjj<65 || (mjj > 105 && mjj<400)) \
                               && ( std_vector_jet_pt[0] < 20 || std_vector_jet_cmvav2[0] < -0.715 ) \
                               && ( std_vector_jet_pt[1] < 20 || std_vector_jet_cmvav2[1] < -0.715 ) \
                               && ( std_vector_jet_pt[2] < 20 || std_vector_jet_cmvav2[2] < -0.715 ) \
                               && ( std_vector_jet_pt[3] < 20 || std_vector_jet_cmvav2[3] < -0.715 ) \
                               && ( std_vector_jet_pt[4] < 20 || std_vector_jet_cmvav2[4] < -0.715 ) \
                               && ( std_vector_jet_pt[5] < 20 || std_vector_jet_cmvav2[5] < -0.715 ) \
                               && ( std_vector_jet_pt[6] < 20 || std_vector_jet_cmvav2[6] < -0.715 ) \
                               && ( std_vector_jet_pt[7] < 20 || std_vector_jet_cmvav2[7] < -0.715 ) \
                               && ( std_vector_jet_pt[8] < 20 || std_vector_jet_cmvav2[8] < -0.715 ) \
                               && ( std_vector_jet_pt[9] < 20 || std_vector_jet_cmvav2[9] < -0.715 ) \
                               '




cuts['hww2l2v_13TeV_of2j_nomth']  = '(std_vector_lepton_flavour[0] * std_vector_lepton_flavour[1] == -11*13)    \
                               && (abs(std_vector_lepton_flavour[1]) == 13 || std_vector_lepton_pt[1]>13) \
                               && (njet>=2) \
                               && (std_vector_jet_pt[0]>30 && std_vector_jet_pt[1]>30) \
                               && (mjj<65 || (mjj > 105 && mjj<400)) \
                               && ( std_vector_jet_pt[0] < 20 || std_vector_jet_cmvav2[0] < -0.715 ) \
                               && ( std_vector_jet_pt[1] < 20 || std_vector_jet_cmvav2[1] < -0.715 ) \
                               && ( std_vector_jet_pt[2] < 20 || std_vector_jet_cmvav2[2] < -0.715 ) \
                               && ( std_vector_jet_pt[3] < 20 || std_vector_jet_cmvav2[3] < -0.715 ) \
                               && ( std_vector_jet_pt[4] < 20 || std_vector_jet_cmvav2[4] < -0.715 ) \
                               && ( std_vector_jet_pt[5] < 20 || std_vector_jet_cmvav2[5] < -0.715 ) \
                               && ( std_vector_jet_pt[6] < 20 || std_vector_jet_cmvav2[6] < -0.715 ) \
                               && ( std_vector_jet_pt[7] < 20 || std_vector_jet_cmvav2[7] < -0.715 ) \
                               && ( std_vector_jet_pt[8] < 20 || std_vector_jet_cmvav2[8] < -0.715 ) \
                               && ( std_vector_jet_pt[9] < 20 || std_vector_jet_cmvav2[9] < -0.715 ) \
                               '


# 11 = e
# 13 = mu
# 15 = tau
