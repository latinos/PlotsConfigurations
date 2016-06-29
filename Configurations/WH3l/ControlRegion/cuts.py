# cuts

#cuts = {}
  
supercut = 'mllmin3l>12  \
            && pt1>20 && pt2>15 \
            && pt3>10 \
           '

#cuts['wh3l_13TeV']  = 'njet_3l == 0 \
#                       && nbjet_3l == 0\
#                       && metPfType1 > 35\
#                       && zveto_3l > 25\
#                       && mllmin3l < 100\
#                       '

cuts['wh3l_top_13TeV']  = '(njet_3l > 0 || nbjet_3l > 0)\
                       && metPfType1 > 40\
                       && zveto_3l > 25\
                       && abs(chlll) == 1\
                      '

cuts['wh3l_wz_13TeV'] = 'njet_3l == 0\
                        && nbjet_3l == 0\
                        && metPfType1 > 40\
                        && zveto_3l < 25\
                        && abs(chlll) == 1\
                       '
cuts['wh3l_zg_13TeV'] = 'njet_3l == 0\
                        && nbjet_3l == 0\
                        && metPfType1 < 40\
                        && mlll > 80\
                        && mlll < 100\
                        && abs(chlll) == 1\
                       '

cuts['wh3l_fakes_13TeV']  = '(njet_3l > 0 || nbjet_3l > 0)\
                       && metPfType1 > 40\
                       && abs(chlll) == 3\
                      '

#cuts['wh3l_13TeV']  = '1'



# 11 = e
# 13 = mu
# 15 = tau

