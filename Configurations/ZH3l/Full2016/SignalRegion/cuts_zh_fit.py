# cuts

supercut = 'mllmin3l>12  \
            && std_vector_lepton_pt[0]>25 && std_vector_lepton_pt[1]>20 \
            && std_vector_lepton_pt[2]>15 \
            && std_vector_lepton_pt[3]<10 \
            && abs(chlll) == 1 \
           '

# cuts['zh3l_dphi_cut'] = ' ( std_vector_jet_pt[0] >= 30 ) \
#                    && ( std_vector_jet_pt[1] >= 30 ) \
#                    && zveto_3l < 25 \
#                    && bveto_CMVAL \
#                    && z4lveto > 20 \
#                    && dphilmetjj < 3.14159/2 \
#                  '
# 
cuts['zh3l_dphi_cut_Wp'] = ' ( std_vector_jet_pt[0] >= 30 ) \
                   && ( std_vector_jet_pt[1] >= 30 ) \
                   && zveto_3l < 25 \
                   && bveto_CMVAL \
                   && z4lveto > 20 \
                   && dphilmetjj < 3.14159/2 \
                   && pdgid_notZ > 0 \
                 '

cuts['zh3l_dphi_cut_Wm'] = ' ( std_vector_jet_pt[0] >= 30 ) \
                   && ( std_vector_jet_pt[1] >= 30 ) \
                   && zveto_3l < 25 \
                   && bveto_CMVAL \
                   && z4lveto > 20 \
                   && dphilmetjj < 3.14159/2 \
                   && pdgid_notZ < 0 \
                 '

# cuts['zh3l_dphi_cut_1j'] = ' ( std_vector_jet_pt[0] >= 30 ) \
#                    && ( std_vector_jet_pt[1] < 30 ) \
#                    && zveto_3l < 25 \
#                    && bveto_CMVAL \
#                    && z4lveto > 20 \
#                    && dphilmetj < 3.14159/2 \
#                  '
# 
cuts['dphi_cut_1j_Wp'] = ' ( std_vector_jet_pt[0] >= 30 ) \
                   && ( std_vector_jet_pt[1] < 30 ) \
                   && zveto_3l < 25 \
                   && bveto_CMVAL \
                   && z4lveto > 20 \
                   && dphilmetj < 3.14159/2 \
                   && pdgid_notZ > 0 \
                 '

cuts['dphi_cut_1j_Wm'] = ' ( std_vector_jet_pt[0] >= 30 ) \
                   && ( std_vector_jet_pt[1] < 30 ) \
                   && zveto_3l < 25 \
                   && bveto_CMVAL \
                   && z4lveto > 20 \
                   && dphilmetj < 3.14159/2 \
                   && pdgid_notZ < 0 \
                 '


'''
 #11 = e
# 13 = mu
# 15 = tau
'''
