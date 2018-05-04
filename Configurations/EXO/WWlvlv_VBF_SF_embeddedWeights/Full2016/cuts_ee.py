# cuts

#cuts = {}

                           


supercut = 'mll>70  \
            && std_vector_lepton_pt[0]>20 && std_vector_lepton_pt[1]>20 \
            && std_vector_lepton_pt[2]<10 \
            && metPfType1 > 50 \
            && ptll > 30 \
            '
#      __.....__                      __.....__                     
#   .-''         '.                .-''         '.                   
#  /     .-''"'-.  `.     .-.     /     .-''"'-.  `.                 
# /     /________\   \    | |    /     /________\   \ ,.----------.  
# |                  |,---| |---.|                  |//            \ 
# \    .-------------'`---| |---'\    .-------------'\\            / 
#  \    '-.____...---.    | |     \    '-.____...---. `'----------'  
#   `.             .'     `-'      `.             .'                 
#     `''-...... -'                  `''-...... -'                   
                                                                   


### Control  DY ####
      
cuts['hww2l2v_13TeV_dy_sfVBF_ee']  = 'mll>70 && mll<120 \
                && std_vector_lepton_flavour[0] * std_vector_lepton_flavour[1] == -11*11 \
                && ( mjj>500 ) \
                && ( detajj>3.5 ) \
                && ( std_vector_jet_pt[1] >= 30 ) \
                && '  + bVeto
 
 
### Control  TOP ####
cuts['hww2l2v_13TeV_top_sfVBF_ee']  = 'mll>120 \
                && ( std_vector_jet_pt[1] >= 30 ) \
                && std_vector_lepton_flavour[0] * std_vector_lepton_flavour[1] == -11*11 \
                && ( mjj>500 ) \
                && ( detajj>3.5 ) \
                && !('  + bVeto + ')'
 
# 
#### Signal Region ###

cuts['hwwhm_13TeV_sfVBF_ee']  = 'std_vector_lepton_flavour[0] * std_vector_lepton_flavour[1] == -11*11 \
                && ( mTi > 100 ) \
                && (mll>120) \
                && ( mjj>500 ) \
                && ( detajj>3.5  ) \
                && ( std_vector_jet_pt[1] >= 30 ) \
                && '  + bVeto






