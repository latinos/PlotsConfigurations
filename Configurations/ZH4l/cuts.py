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

cuts['zh4l_XSF_13TeV']  = 'flagZ1SF_zh4l==1\
        &&  z1Mass_zh4l < 65 && z1Mass_zh4l > 10 \
        && metPfType1 > 35 \
        && fabs(z0Mass_zh4l-91.1876)< 15'

cuts['zh4l_XDF_13TeV']  = 'flagZ1SF_zh4l==0\
        && z1Mass_zh4l < 75 && z1Mass_zh4l >10 \
        && fabs(z0Mass_zh4l-91.1876)< 15'


cuts['zh4l_ZZ_13TeV']  = 'flagZ1SF_zh4l==1\
        && z1Mass_zh4l < 105 && z1Mass_zh4l >75 \
        && metPfType1 < 35 \
        && fabs(z0Mass_zh4l-91.1876)< 15'


