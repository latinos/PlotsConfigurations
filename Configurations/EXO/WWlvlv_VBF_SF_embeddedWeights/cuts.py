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
                                                                   


### Control Region tt and DY ####
'''
cuts['hww2l2v_13TeV_dy_e_e_0j']  = '( mth<60) \
                && mll>70 && mll<120 \
                && std_vector_lepton_flavour[0] * std_vector_lepton_flavour[1] == -11*11 \
                && ( std_vector_jet_pt[0] < 30 ) \
                && bveto\
                '


cuts['hww2l2v_13TeV_dy_e_e_1j']  = '( mth<60) \
                && mll>70 && mll<120 \
                && std_vector_lepton_flavour[0] * std_vector_lepton_flavour[1] == -11*11 \
                && ( std_vector_jet_pt[0] >= 30 ) \
                && ( std_vector_jet_pt[1] < 30 ) \
                && bveto\
                '

cuts['hww2l2v_13TeV_dy_e_e_2j']  = '( mth<60) \
                && mll>70 && mll<120 \
                && std_vector_lepton_flavour[0] * std_vector_lepton_flavour[1] == -11*11 \
                && ( mjj<500 || detajj<3.5 ) \
                && ( std_vector_jet_pt[1] >= 30 ) \
                && bveto\
                '
'''
cuts['hww2l2v_13TeV_dy_e_e_2j_VBF']  = '( mth<60) \
                && mll>70 && mll<120 \
                && std_vector_lepton_flavour[0] * std_vector_lepton_flavour[1] == -11*11 \
                && ( mjj>500 ) \
                && ( detajj>3.5 ) \
                && ( std_vector_jet_pt[1] >= 30 ) \
                && bveto\
                '



'''
cuts['hww2l2v_13TeV_top_e_e_0j']  = 'mll>120 \
                && ( std_vector_jet_pt[0] < 30 ) \
                && std_vector_lepton_flavour[0] * std_vector_lepton_flavour[1] == -11*11 \
                && !bveto\
                '

cuts['hww2l2v_13TeV_top_e_e_1j']  = 'mll>120 \
                && std_vector_lepton_flavour[0] * std_vector_lepton_flavour[1] == -11*11 \
                && ( std_vector_jet_pt[0] >= 30 ) \
                && ( std_vector_jet_pt[1] < 30 ) \
                && !bveto\
                '

cuts['hww2l2v_13TeV_top_e_e_2j']  = 'mll>120 \
                && std_vector_lepton_flavour[0] * std_vector_lepton_flavour[1] == -11*11 \
                && ( std_vector_jet_pt[1] >= 30 ) \
                && ( mjj<500 || detajj<3.5  ) \
                && !bveto\
               '
'''
cuts['hww2l2v_13TeV_top_e_e_2j_VBF']  = 'mll>120 \
                && ( std_vector_jet_pt[1] >= 30 ) \
                && std_vector_lepton_flavour[0] * std_vector_lepton_flavour[1] == -11*11 \
                && ( mjj>500 ) \
                && ( detajj>3.5 ) \
                && !bveto\
                '


### Signal Region ###
'''
cuts['hwwhm_13TeV_e_e_0j'] = '( mth>=60) \
                && std_vector_lepton_flavour[0] * std_vector_lepton_flavour[1] == -11*11 \
                && ( mTi > 100 ) \
                && (mll>120) \
                && ( std_vector_jet_pt[0] < 30 ) \
                && bveto\
               '


cuts['hwwhm_13TeV_e_e_1j']  = '( mth>=60) \
                && std_vector_lepton_flavour[0] * std_vector_lepton_flavour[1] == -11*11 \
                && ( mTi > 100 ) \
                && (mll>120) \
                && ( std_vector_jet_pt[0] >= 30 ) \
                && ( std_vector_jet_pt[1] < 30 ) \
                && bveto\
                '


cuts['hwwhm_13TeV_e_e_2j']  = '( mth>=60) \
                && std_vector_lepton_flavour[0] * std_vector_lepton_flavour[1] == -11*11 \
                && ( mTi > 100 ) \
                && (mll>120) \
                && ( mjj<500 || detajj<3.5 ) \
                && ( std_vector_jet_pt[1] >= 30 ) \
                && bveto\
                '
'''


cuts['hwwhm_13TeV_e_e_2j_VBF']  = '( mth>=60) \
                && std_vector_lepton_flavour[0] * std_vector_lepton_flavour[1] == -11*11 \
                && ( mTi > 100 ) \
                && (mll>120) \
                && ( mjj>500 ) \
                && ( detajj>3.5  ) \
                && ( std_vector_jet_pt[1] >= 30 ) \
                && bveto\
                '

# __  __   ___               __  __   ___                   
#|  |/  `.'   `.            |  |/  `.'   `.                 
#|   .-.  .-.   '    .-.    |   .-.  .-.   '                
#|  |  |  |  |  |    | |    |  |  |  |  |  | ,.----------.  
#|  |  |  |  |  |,---| |---.|  |  |  |  |  |//            \ 
#|  |  |  |  |  |`---| |---'|  |  |  |  |  |\\            / 
#|  |  |  |  |  |    | |    |  |  |  |  |  | `'----------'  
#|__|  |__|  |__|    `-'    |__|  |__|  |__|                
                                                           
'''
cuts['hww2l2v_13TeV_dy_mu_mu_0j']  = '( mth<60) \
                && std_vector_lepton_flavour[0] * std_vector_lepton_flavour[1] == -13*13 \
                && mll>70 && mll<120 \
                && ( std_vector_jet_pt[0] < 30 ) \
                && bveto\
                '


cuts['hww2l2v_13TeV_dy_mu_mu_1j']  = '( mth<60) \
                && std_vector_lepton_flavour[0] * std_vector_lepton_flavour[1] == -13*13 \
                && mll>70 && mll<120 \
                && ( std_vector_jet_pt[0] >= 30 ) \
                && ( std_vector_jet_pt[1] < 30 ) \
                && bveto\
                '

cuts['hww2l2v_13TeV_dy_mu_mu_2j']  = '( mth<60) \
                && std_vector_lepton_flavour[0] * std_vector_lepton_flavour[1] == -13*13 \
                && mll>70 && mll<120 \
                && ( mjj<500 || detajj<3.5 ) \
                && ( std_vector_jet_pt[1] >= 30 ) \
                && bveto\
                '
'''
cuts['hww2l2v_13TeV_dy_mu_mu_2j_VBF']  = '( mth<60) \
                && std_vector_lepton_flavour[0] * std_vector_lepton_flavour[1] == -13*13 \
                && mll>70 && mll<120 \
                && ( mjj>500 ) \
                && ( detajj>3.5 ) \
                && ( std_vector_jet_pt[1] >= 30 ) \
                && bveto\
                '


'''

cuts['hww2l2v_13TeV_top_mu_mu_0j']  = 'mll>120 \
                && std_vector_lepton_flavour[0] * std_vector_lepton_flavour[1] == -13*13 \
                && ( std_vector_jet_pt[0] < 30 ) \
                && !bveto\
                '

cuts['hww2l2v_13TeV_top_mu_mu_1j']  = 'mll>120 \
                && std_vector_lepton_flavour[0] * std_vector_lepton_flavour[1] == -13*13 \
                && ( std_vector_jet_pt[0] >= 30 ) \
                && ( std_vector_jet_pt[1] < 30 ) \
                && !bveto\
                '

cuts['hww2l2v_13TeV_top_mu_mu_2j']  = 'mll>120 \
                && std_vector_lepton_flavour[0] * std_vector_lepton_flavour[1] == -13*13 \
                && ( std_vector_jet_pt[1] >= 30 ) \
                && ( mjj<500 || detajj<3.5  ) \
                && !bveto\
               '
'''
cuts['hww2l2v_13TeV_top_mu_mu_2j_VBF']  = 'mll>120 \
                && std_vector_lepton_flavour[0] * std_vector_lepton_flavour[1] == -13*13 \
                && ( std_vector_jet_pt[1] >= 30 ) \
                && ( mjj>500 ) \
                && ( detajj>3.5 ) \
                && !bveto\
                '


### Signal Region ###
'''
cuts['hwwhm_13TeV_mu_mu_0j'] = '( mth>=60) \
                && std_vector_lepton_flavour[0] * std_vector_lepton_flavour[1] == -13*13 \
                && ( mTi > 100 ) \
                && (mll>120) \
                && ( std_vector_jet_pt[0] < 30 ) \
                && bveto\
               '


cuts['hwwhm_13TeV_mu_mu_1j']  = '( mth>=60) \
                && std_vector_lepton_flavour[0] * std_vector_lepton_flavour[1] == -13*13 \
                && ( mTi > 100 ) \
                && (mll>120) \
                && ( std_vector_jet_pt[0] >= 30 ) \
                && ( std_vector_jet_pt[1] < 30 ) \
                && bveto\
                '


cuts['hwwhm_13TeV_mu_mu_2j']  = '( mth>=60) \
                && std_vector_lepton_flavour[0] * std_vector_lepton_flavour[1] == -13*13 \
                && ( mTi > 100 ) \
                && (mll>120) \
                && ( mjj<500 || detajj<3.5 ) \
                && ( std_vector_jet_pt[1] >= 30 ) \
                && bveto\
                '

'''

cuts['hwwhm_13TeV_mu_mu_2j_VBF']  = '( mth>=60) \
                && std_vector_lepton_flavour[0] * std_vector_lepton_flavour[1] == -13*13 \
                && ( mTi > 100 ) \
                && (mll>120) \
                && ( mjj>500 ) \
                && ( detajj>3.5  ) \
                && ( std_vector_jet_pt[1] >= 30 ) \
                && bveto\
                '

