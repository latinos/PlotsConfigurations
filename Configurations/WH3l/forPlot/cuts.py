# cuts

#cuts = {}
  
supercut = 'mllmin3l>12  \
            && std_vector_lepton_pt[0]>20 && std_vector_lepton_pt[1]>15 \
            && std_vector_lepton_pt[2]>10 \
            && std_vector_lepton_pt[3]<10 \
            && abs(chlll) == 1 \
           '

#cuts['wh3l_13TeV_ossf']  = 'njet_3l == 0 \
#                       && nbjet_3l == 0\
#                       && metPfType1 > 40\
#                       && zveto_3l > 25\
#                       && mllmin3l < 100\
#                       && flagOSSF == 1\
#                       '

#cuts['wh3l_13TeV_sssf']  = 'njet_3l == 0 \
#                       && nbjet_3l == 0\
#                       && metPfType1 > 30\
#                       && zveto_3l > 25\
#                       && mllmin3l < 100\
#                       && flagOSSF == 0\
#                       '
cuts['wh3l_13TeV']  = 'njet_3l == 0\
                       && nbjet_3l == 0\
                       && metPfType1 > 40\
                       && zveto_3l > 25\
                       && mllmin3l < 100\
                       '

cuts['wh3l_plot_13TeV']  = 'njet_3l == 0\
                       && nbjet_3l == 0\
                       && metPfType1 > 40\
                       && zveto_3l > 25\
                       '
cuts['wh3l_noMET_13TeV']  = 'njet_3l == 0\
                       && nbjet_3l == 0\
                       && zveto_3l > 25\
                       '

cuts['wh3l_nobTag_13TeV'] = 'metPfType1 > 40\
                       && zveto_3l > 25\
                       '
#cuts['wh3l_nojetVeto_13TeV'] = 'metPfType1 > 40\
#                       && zveto_3l > 25\
#                       '

#cuts['wh3l_top_13TeV']  = '(njet_3l > 0 || nbjet_3l > 0)\
#                       && metPfType1 > 35\
#                       && zveto_3l > 25\
#                      '

#cuts['wh3l_wz_13TeV'] = 'njet_3l == 0\
#                        && nbjet_3l == 0\
#                        && metPfType1 > 35\
#                        && zveto_3l < 25\
#                       '

#cuts['wh3l_13TeV']  = '1'



# 11 = e
# 13 = mu
# 15 = tau

