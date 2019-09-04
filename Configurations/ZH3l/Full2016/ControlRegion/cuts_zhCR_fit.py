# cuts

#cuts = {}
#eleWP='cut_WP_Tight80X'
# eleWP='cut_WP_Tight80X_SS'  
# eleWP='mva_80p_Iso2015'
# eleWP='mva_80p_Iso2016'
# eleWP='mva_90p_Iso2015'
#eleWP='mva_90p_Iso2016'
  
supercut = 'mllmin3l>12  \
            && std_vector_lepton_pt[0]>25 && std_vector_lepton_pt[1]>20 \
            && std_vector_lepton_pt[2]>15 \
            && std_vector_lepton_pt[3]<10 \
            && abs(chlll) == 1 \
           '

# cuts['zh3l_WZ_CR_cut'] = ' ( std_vector_jet_pt[0] >= 30 ) \
#                    && ( std_vector_jet_pt[1] >= 30 ) \
#                    && zveto_3l < 25 \
#                    && bveto_CMVAL \
#                    && z4lveto > 20 \
#                    && dphilmetjj > 3.14159/2 \
#                  '
# 
cuts['zh3l_WZ_CR_cut_1j'] = ' ( std_vector_jet_pt[0] >= 30 ) \
                   && ( std_vector_jet_pt[1] < 30 ) \
                   && zveto_3l < 25 \
                   && bveto_CMVAL \
                   && z4lveto > 20 \
                   && dphilmetj > 3.14159/2 \
                 '


