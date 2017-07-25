# cuts

#cuts = {}
  
supercut = 'std_vector_lepton_pt[0]>25 && std_vector_lepton_pt[1]>15 && std_vector_lepton_pt[2]>10 && std_vector_lepton_pt[3]>10 \
            && std_vector_lepton_pt[4]<10 \
            && chllll_zh4l == 0\
            && z0Mass_zh4l > 4 && z1Mass_zh4l > 4\
           '

cuts['zh4l_XSF_13TeV']  = 'flagZ1SF_zh4l==1\
        && std_vector_lepton_isTightLepton[3] > 0.5\
        &&  z1Mass_zh4l < 65 && z1Mass_zh4l > 10 \
        && metPfType1 > 35 \
        && mllll_zh4l > 140\
        && fabs(z0Mass_zh4l-91.1876)< 15 \ 
        '
cuts['zh4l_XDF_13TeV']  = 'flagZ1SF_zh4l==0\
        && std_vector_lepton_isTightLepton[3] > 0.5\
        && z1Mass_zh4l < 75 && z1Mass_zh4l >10 \
        && fabs(z0Mass_zh4l-91.1876)< 15 \ 
        '
cuts['zh4l_ZZ_13TeV']  = 'flagZ1SF_zh4l==1\
        && std_vector_lepton_isTightLepton[3] > 0.5\
        && z1Mass_zh4l < 105 && z1Mass_zh4l >75 \
        && metPfType1 < 35 \
        && fabs(z0Mass_zh4l-91.1876)< 15 \ 
        '
#cuts['zh4l_13TeV_MET']  = 'metPfType1 > 20'
#
#cuts['zh4l_13TeV_MetJet']  = 'metPfType1 > 20 \
#                        && std_vector_jet_pt[0] < 50  \
#                       && ( std_vector_jet_pt[0] < 20 || std_vector_jet_cmvav2[0] < -0.715 ) \
#                       && ( std_vector_jet_pt[1] < 20 || std_vector_jet_cmvav2[1] < -0.715 ) \
#                       && ( std_vector_jet_pt[2] < 20 || std_vector_jet_cmvav2[2] < -0.715 ) \
#                       && ( std_vector_jet_pt[3] < 20 || std_vector_jet_cmvav2[3] < -0.715 ) \
#                       && ( std_vector_jet_pt[4] < 20 || std_vector_jet_cmvav2[4] < -0.715 ) \
#                       && ( std_vector_jet_pt[5] < 20 || std_vector_jet_cmvav2[5] < -0.715 ) \
#                       && ( std_vector_jet_pt[6] < 20 || std_vector_jet_cmvav2[6] < -0.715 ) \
#                       && ( std_vector_jet_pt[7] < 20 || std_vector_jet_cmvav2[7] < -0.715 ) \
#                       && ( std_vector_jet_pt[8] < 20 || std_vector_jet_cmvav2[8] < -0.715 ) \
#                       && ( std_vector_jet_pt[9] < 20 || std_vector_jet_cmvav2[9] < -0.715 ) \
#                            '

 #11 = e
# 13 = mu
# 15 = tau

