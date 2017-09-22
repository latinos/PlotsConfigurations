# cuts

#cuts = {}

                           


supercut = 'mll>70  \
            && std_vector_lepton_pt[0]>20 && std_vector_lepton_pt[1]>20 \
            && std_vector_lepton_pt[2]<10 \
            && metPfType1 > 50 \
            && ptll > 30 \
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
cuts['hww2l2v_13TeV_dy_mu_mu_0j']  = 'std_vector_lepton_flavour[0] * std_vector_lepton_flavour[1] == -13*13 \
                && mll>70 && mll<120 \
                && ( std_vector_jet_pt[0] < 30 ) \
                && '  + bVeto

cuts['hww2l2v_13TeV_dy_mu_mu_1j']  = 'std_vector_lepton_flavour[0] * std_vector_lepton_flavour[1] == -13*13 \
                && mll>70 && mll<120 \
                && ( std_vector_jet_pt[0] >= 30 ) \
                && ( std_vector_jet_pt[1] < 30 ) \
                && '  + bVeto

cuts['hww2l2v_13TeV_dy_mu_mu_2j']  = 'std_vector_lepton_flavour[0] * std_vector_lepton_flavour[1] == -13*13 \
                && mll>70 && mll<120 \
                && ( mjj<500 || detajj<3.5 ) \
                && ( std_vector_jet_pt[1] >= 30 ) \
                && '  + bVeto
'''
cuts['hww2l2v_13TeV_dy_mu_mu_2j_VBF']  = 'std_vector_lepton_flavour[0] * std_vector_lepton_flavour[1] == -13*13 \
                && mll>70 && mll<120 \
                && ( mjj>500 ) \
                && ( detajj>3.5 ) \
                && ( std_vector_jet_pt[1] >= 30 ) \
                && '  + bVeto

'''

cuts['hww2l2v_13TeV_top_mu_mu_0j']  = 'std_vector_lepton_flavour[0] * std_vector_lepton_flavour[1] == -13*13 \
                && ( std_vector_jet_pt[0] < 30 ) \
                && !('  + bVeto + ')'

cuts['hww2l2v_13TeV_top_mu_mu_1j']  = 'mll>120 \
                && std_vector_lepton_flavour[0] * std_vector_lepton_flavour[1] == -13*13 \
                && ( std_vector_jet_pt[0] >= 30 ) \
                && ( std_vector_jet_pt[1] < 30 ) \
                && !('  + bVeto + ')'                  

cuts['hww2l2v_13TeV_top_mu_mu_2j']  = 'mll>120 \
                && std_vector_lepton_flavour[0] * std_vector_lepton_flavour[1] == -13*13 \
                && ( std_vector_jet_pt[1] >= 30 ) \
                && ( mjj<500 || detajj<3.5  ) \
                && !('  + bVeto + ')'  
'''
cuts['hww2l2v_13TeV_top_mu_mu_2j_VBF']  = 'mll>120 \
                && std_vector_lepton_flavour[0] * std_vector_lepton_flavour[1] == -13*13 \
                && ( std_vector_jet_pt[1] >= 30 ) \
                && ( mjj>500 ) \
                && ( detajj>3.5 ) \
                && !('  + bVeto + ')'


### Signal Region ###
'''
cuts['hwwhm_13TeV_mu_mu_0j'] = 'std_vector_lepton_flavour[0] * std_vector_lepton_flavour[1] == -13*13 \
                && ( mTi > 100 ) \
                && (mll>120) \
                && ( std_vector_jet_pt[0] < 30 ) \
                && '  + bVeto

cuts['hwwhm_13TeV_mu_mu_1j']  = 'std_vector_lepton_flavour[0] * std_vector_lepton_flavour[1] == -13*13 \
                && ( mTi > 100 ) \
                && (mll>120) \
                && ( std_vector_jet_pt[0] >= 30 ) \
                && ( std_vector_jet_pt[1] < 30 ) \
                && '  + bVeto

cuts['hwwhm_13TeV_mu_mu_2j']  = 'std_vector_lepton_flavour[0] * std_vector_lepton_flavour[1] == -13*13 \
                && ( mTi > 100 ) \
                && (mll>120) \
                && ( mjj<500 || detajj<3.5 ) \
                && ( std_vector_jet_pt[1] >= 30 ) \
                && '  + bVeto
'''

cuts['hwwhm_13TeV_mu_mu_2j_VBF']  = 'std_vector_lepton_flavour[0] * std_vector_lepton_flavour[1] == -13*13 \
                && ( mTi > 100 ) \
                && (mll>120) \
                && ( mjj>500 ) \
                && ( detajj>3.5  ) \
                && ( std_vector_jet_pt[1] >= 30 ) \
                && '  + bVeto
