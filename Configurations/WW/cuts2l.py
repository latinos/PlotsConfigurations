# cuts

#cuts = {}

supercut = 'std_vector_lepton_pt[0]>20 && std_vector_lepton_pt[1]>20 \
            && std_vector_lepton_pt[2]<10 \
            && (std_vector_lepton_flavour[0] * std_vector_lepton_flavour[1] == -11*13) \
'

cuts['ww_TwoLept_em'] = 'njet >= 0'
