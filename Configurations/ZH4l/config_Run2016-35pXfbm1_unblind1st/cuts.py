# cuts

#cuts = {}
eleWP='mva_90p_Iso2016' 
#'cut_WP_Tight80X_SS'  
#'cut_WP_Tight80X_SS'  
#'mva_80p_Iso2015'
#'mva_80p_Iso2016'
#'mva_90p_Iso2015'
#'mva_90p_Iso2016'

# supercut = '1'
supercut = 'std_vector_lepton_pt[0]>25 && std_vector_lepton_pt[1]>15 && std_vector_lepton_pt[2]>10 && std_vector_lepton_pt[3]>10 \
            && std_vector_lepton_pt[4]<10 \
            && chllll_zh4l == 0\
            && z0Mass_zh4l > 4 && z1Mass_zh4l > 4\
            && (std_vector_muon_isTightLepton_cut_Tight80x[3]>0.5 || std_vector_electron_isTightLepton_'+eleWP+'[3]>0.5)\
            && (std_vector_muon_isTightLepton_cut_Tight80x[4]<0.5 && std_vector_electron_isTightLepton_'+eleWP+'[4]<0.5)\
            '
#####
#####
cuts['zh4l_preselection_13TeV'] = '((flagZ1SF_zh4l==1)&&(mllll_zh4l > 140)) || (flagZ1SF_zh4l==0)'
#####

cuts['zh4l_XSF_13TeV']  = 'flagZ1SF_zh4l==1\
        &&  z1Mass_zh4l < 60 && z1Mass_zh4l > 10 \
        && mllll_zh4l > 140 \
        && metPfType1 > 35 \
        && ( std_vector_jet_pt[0] < 20 || std_vector_jet_cmvav2[0] < -0.5884 ) \
        && ( std_vector_jet_pt[1] < 20 || std_vector_jet_cmvav2[1] < -0.5884 ) \
        && ( std_vector_jet_pt[2] < 20 || std_vector_jet_cmvav2[2] < -0.5884 ) \
        && ( std_vector_jet_pt[3] < 20 || std_vector_jet_cmvav2[3] < -0.5884 ) \
        && ( std_vector_jet_pt[4] < 20 || std_vector_jet_cmvav2[4] < -0.5884 ) \
        && ( std_vector_jet_pt[5] < 20 || std_vector_jet_cmvav2[5] < -0.5884 ) \
        && ( std_vector_jet_pt[6] < 20 || std_vector_jet_cmvav2[6] < -0.5884 ) \
        && ( std_vector_jet_pt[7] < 20 || std_vector_jet_cmvav2[7] < -0.5884 ) \
        && ( std_vector_jet_pt[8] < 20 || std_vector_jet_cmvav2[8] < -0.5884 ) \
        && ( std_vector_jet_pt[9] < 20 || std_vector_jet_cmvav2[9] < -0.5884 ) \
        && fabs(z0Mass_zh4l-91.1876)< 15'

cuts['zh4l_XDF_13TeV']  = 'flagZ1SF_zh4l==0\
        && z1Mass_zh4l < 70 && z1Mass_zh4l >10 \
        && ( std_vector_jet_pt[0] < 20 || std_vector_jet_cmvav2[0] < -0.5884 ) \
        && ( std_vector_jet_pt[1] < 20 || std_vector_jet_cmvav2[1] < -0.5884 ) \
        && ( std_vector_jet_pt[2] < 20 || std_vector_jet_cmvav2[2] < -0.5884 ) \
        && ( std_vector_jet_pt[3] < 20 || std_vector_jet_cmvav2[3] < -0.5884 ) \
        && ( std_vector_jet_pt[4] < 20 || std_vector_jet_cmvav2[4] < -0.5884 ) \
        && ( std_vector_jet_pt[5] < 20 || std_vector_jet_cmvav2[5] < -0.5884 ) \
        && ( std_vector_jet_pt[6] < 20 || std_vector_jet_cmvav2[6] < -0.5884 ) \
        && ( std_vector_jet_pt[7] < 20 || std_vector_jet_cmvav2[7] < -0.5884 ) \
        && ( std_vector_jet_pt[8] < 20 || std_vector_jet_cmvav2[8] < -0.5884 ) \
        && ( std_vector_jet_pt[9] < 20 || std_vector_jet_cmvav2[9] < -0.5884 ) \
        && metPfType1 > 20 \
        && fabs(z0Mass_zh4l-91.1876)< 15'

cuts['zh4l_ZZ_13TeV']  = 'flagZ1SF_zh4l==1\
        && z1Mass_zh4l < 105 && z1Mass_zh4l >75 \
        && metPfType1 < 35 \
        && fabs(z0Mass_zh4l-91.1876)< 15'

### cutflow

# cuts['zh4l_XSF']  = 'flagZ1SF_zh4l==1\
        # && mllll_zh4l > 140\
        # '
# cuts['zh4l_XSF_mz0']  = 'flagZ1SF_zh4l==1\
        # && mllll_zh4l > 140\
        # && fabs(z0Mass_zh4l-91.1876)< 15'
# cuts['zh4l_XSF_mz0_met']  = 'flagZ1SF_zh4l==1\
        # && metPfType1 > 35 \
        # && mllll_zh4l > 140\
        # && fabs(z0Mass_zh4l-91.1876)< 15'
# cuts['zh4l_XSF_mz0_met_mz1']  = 'flagZ1SF_zh4l==1\
        # &&  z1Mass_zh4l < 60 && z1Mass_zh4l > 10 \
        # && metPfType1 > 35 \
        # && mllll_zh4l > 140\
        # && fabs(z0Mass_zh4l-91.1876)< 15'
# cuts['zh4l_XSF_mz0_met_mz1_bjet']  = 'flagZ1SF_zh4l==1\
        # &&  z1Mass_zh4l < 60 && z1Mass_zh4l > 10 \
        # && metPfType1 > 35 \
        # && mllll_zh4l > 140\
        # && ( std_vector_jet_pt[0] < 20 || std_vector_jet_cmvav2[0] < -0.5884 ) \
        # && ( std_vector_jet_pt[1] < 20 || std_vector_jet_cmvav2[1] < -0.5884 ) \
        # && ( std_vector_jet_pt[2] < 20 || std_vector_jet_cmvav2[2] < -0.5884 ) \
        # && ( std_vector_jet_pt[3] < 20 || std_vector_jet_cmvav2[3] < -0.5884 ) \
        # && ( std_vector_jet_pt[4] < 20 || std_vector_jet_cmvav2[4] < -0.5884 ) \
        # && ( std_vector_jet_pt[5] < 20 || std_vector_jet_cmvav2[5] < -0.5884 ) \
        # && ( std_vector_jet_pt[6] < 20 || std_vector_jet_cmvav2[6] < -0.5884 ) \
        # && ( std_vector_jet_pt[7] < 20 || std_vector_jet_cmvav2[7] < -0.5884 ) \
        # && ( std_vector_jet_pt[8] < 20 || std_vector_jet_cmvav2[8] < -0.5884 ) \
        # && ( std_vector_jet_pt[9] < 20 || std_vector_jet_cmvav2[9] < -0.5884 ) \
        # && fabs(z0Mass_zh4l-91.1876)< 15'

# cuts['zh4l_XSF_shape']  = 'flagZ1SF_zh4l==1\
        # && z1Mass_zh4l < 100 \
        # && metPfType1 > 35 \
        # && mllll_zh4l > 140\
        # && fabs(z0Mass_zh4l-91.1876)< 15'

# cuts['zh4l_XSF_bjet_shape']  = 'flagZ1SF_zh4l==1\
        # && z1Mass_zh4l < 100 \
        # && metPfType1 > 35 \
        # && mllll_zh4l > 140\
        # && ( std_vector_jet_pt[0] < 20 || std_vector_jet_cmvav2[0] < -0.5884 ) \
        # && ( std_vector_jet_pt[1] < 20 || std_vector_jet_cmvav2[1] < -0.5884 ) \
        # && ( std_vector_jet_pt[2] < 20 || std_vector_jet_cmvav2[2] < -0.5884 ) \
        # && ( std_vector_jet_pt[3] < 20 || std_vector_jet_cmvav2[3] < -0.5884 ) \
        # && ( std_vector_jet_pt[4] < 20 || std_vector_jet_cmvav2[4] < -0.5884 ) \
        # && ( std_vector_jet_pt[5] < 20 || std_vector_jet_cmvav2[5] < -0.5884 ) \
        # && ( std_vector_jet_pt[6] < 20 || std_vector_jet_cmvav2[6] < -0.5884 ) \
        # && ( std_vector_jet_pt[7] < 20 || std_vector_jet_cmvav2[7] < -0.5884 ) \
        # && ( std_vector_jet_pt[8] < 20 || std_vector_jet_cmvav2[8] < -0.5884 ) \
        # && ( std_vector_jet_pt[9] < 20 || std_vector_jet_cmvav2[9] < -0.5884 ) \
        # && fabs(z0Mass_zh4l-91.1876)< 15'

# cuts['zh4l_XDF']  = 'flagZ1SF_zh4l==0\
#         '
# cuts['zh4l_XDF_mz0']  = 'flagZ1SF_zh4l==0\
        # && fabs(z0Mass_zh4l-91.1876)< 15'
# cuts['zh4l_XDF_mz0_met']  = 'flagZ1SF_zh4l==0\
        # && metPfType1 > 20 \
        # && fabs(z0Mass_zh4l-91.1876)< 15'
# cuts['zh4l_XDF_mz0_met_mz1']  = 'flagZ1SF_zh4l==0\
        # && metPfType1 > 20 \
        # && z1Mass_zh4l < 70 && z1Mass_zh4l >10 \
        # && fabs(z0Mass_zh4l-91.1876)< 15'
# cuts['zh4l_XDF_mz0_met_mz1_jet']  = 'flagZ1SF_zh4l==0\
        # && metPfType1 > 20 \
        # && z1Mass_zh4l < 70 && z1Mass_zh4l >10 \
        # && ( std_vector_jet_pt[0] < 20 || std_vector_jet_cmvav2[0] < -0.5884 ) \
        # && ( std_vector_jet_pt[1] < 20 || std_vector_jet_cmvav2[1] < -0.5884 ) \
        # && ( std_vector_jet_pt[2] < 20 || std_vector_jet_cmvav2[2] < -0.5884 ) \
        # && ( std_vector_jet_pt[3] < 20 || std_vector_jet_cmvav2[3] < -0.5884 ) \
        # && ( std_vector_jet_pt[4] < 20 || std_vector_jet_cmvav2[4] < -0.5884 ) \
        # && ( std_vector_jet_pt[5] < 20 || std_vector_jet_cmvav2[5] < -0.5884 ) \
        # && ( std_vector_jet_pt[6] < 20 || std_vector_jet_cmvav2[6] < -0.5884 ) \
        # && ( std_vector_jet_pt[7] < 20 || std_vector_jet_cmvav2[7] < -0.5884 ) \
        # && ( std_vector_jet_pt[8] < 20 || std_vector_jet_cmvav2[8] < -0.5884 ) \
        # && ( std_vector_jet_pt[9] < 20 || std_vector_jet_cmvav2[9] < -0.5884 ) \
        # && fabs(z0Mass_zh4l-91.1876)< 15'

# cuts['zh4l_XDF_shape']  = 'flagZ1SF_zh4l==0\
        # && z1Mass_zh4l < 100 \
        # && metPfType1 > 20 \
        # && ( std_vector_jet_pt[0] < 20 || std_vector_jet_cmvav2[0] < -0.5884 ) \
        # && ( std_vector_jet_pt[1] < 20 || std_vector_jet_cmvav2[1] < -0.5884 ) \
        # && ( std_vector_jet_pt[2] < 20 || std_vector_jet_cmvav2[2] < -0.5884 ) \
        # && ( std_vector_jet_pt[3] < 20 || std_vector_jet_cmvav2[3] < -0.5884 ) \
        # && ( std_vector_jet_pt[4] < 20 || std_vector_jet_cmvav2[4] < -0.5884 ) \
        # && ( std_vector_jet_pt[5] < 20 || std_vector_jet_cmvav2[5] < -0.5884 ) \
        # && ( std_vector_jet_pt[6] < 20 || std_vector_jet_cmvav2[6] < -0.5884 ) \
        # && ( std_vector_jet_pt[7] < 20 || std_vector_jet_cmvav2[7] < -0.5884 ) \
        # && ( std_vector_jet_pt[8] < 20 || std_vector_jet_cmvav2[8] < -0.5884 ) \
        # && ( std_vector_jet_pt[9] < 20 || std_vector_jet_cmvav2[9] < -0.5884 ) \
        # && fabs(z0Mass_zh4l-91.1876)< 15'

# 11 = e
# 13 = mu
# 15 = tau

