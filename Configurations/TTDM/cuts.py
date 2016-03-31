# cuts

#cuts = {}

supercut = 'std_vector_lepton_pt[0]>30 && std_vector_lepton_pt[1]>10 \
            && run <= 258750 \
            && trigger \
            && njet > 0 \
            && metPfType1 > 50 \
            && (std_vector_lepton_flavour[0] * std_vector_lepton_flavour[1] < 0) \
            && (std_vector_lepton_flavour[0] * std_vector_lepton_flavour[1] == -11*13 || abs(mll - 91.1876) > 15) \
'

cuts['ttdm_cut_ll'] = 'mll>20'


# 11 = e
# 13 = mu
# 15 = tau

