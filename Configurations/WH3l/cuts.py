# cuts

#cuts = {}
  
supercut = 'mll>12  \
            && std_vector_lepton_pt[0]>20 && std_vector_lepton_pt[1]>10 \
            && std_vector_lepton_pt[2]>10 \
            && abs(chlll) == 1 \
           '





cuts['wh3l_13TeV']  = 'njet_3l == 0 \
                       && nbjet_3l == 0\
                      '

# 11 = e
# 13 = mu
# 15 = tau

