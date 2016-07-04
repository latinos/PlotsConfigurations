# cuts

#cuts = {}
  
supercut = 'mllmin3l>12  \
            && std_vector_lepton_pt[0]>20 && std_vector_lepton_pt[1]>15 \
            && std_vector_lepton_pt[2]>10 \
            && std_vector_lepton_pt[3]<10 \
            && abs(chlll) == 1 \
           '


#cuts['wh3l_top_13TeV']  = '(njet_3l > 0 || nbjet_3l > 0)\
 #                      && metPfType1 > 40\
 #                      && zveto_3l > 25\
 #                      && abs(chlll) == 1\
 #                     '

#cuts['wh3l_zjets_13TeV'] = 'njet_3l == 0\
#                        && nbjet_3l == 0\
#                        && metPfType1 < 40\
#                        && zveto_3l < 25\
#                           '

#cuts['wh3l_wz_13TeV'] = 'njet_3l == 0\
#                        && nbjet_3l == 0\
#                        && metPfType1 > 40\
#                        && zveto_3l < 25\
#                       '

#cuts['wh3l_zg_13TeV'] = 'njet_3l == 0\
#                        && nbjet_3l == 0\
#                        && metPfType1 < 40\
#                        && mlll > 80\
#                        && mlll < 100\
#                       '

cuts['wh3l_Pre_OSSF_13TeV']  = 'flagOSSF == 1'

cuts['wh3l_Pre_SSSF_13TeV']  = 'flagOSSF == 0'

#cuts['wh3l_MET_13TeV']  = 'metPfType1 > 40'

#cuts['wh3l_MET_JetV_13TeV'] = 'njet_3l == 0 \
   #                           && metPfType1 > 40 \
  #                            && nbjet_3l == 0 \
 #                             '
#cuts['wh3l_MET_JetV_ZVeto_13TeV'] = 'njet_3l == 0 \
 #                                 && metPfType1 > 40 \
 #                                 && nbjet_3l == 0 \
 #                                 && zveto_3l > 25 \
  #                                '
#cuts['wh3l_MET_JetV_ZVeto_mll_13TeV'] = 'njet_3l == 0 \
#                                        && metPfType1 > 40 \
#                                        && nbjet_3l == 0 \
#                                        && zveto_3l > 25 \
#                                        && mllmin3l < 100 \
#                                        '
# 11 = e
# 13 = mu
# 15 = tau

