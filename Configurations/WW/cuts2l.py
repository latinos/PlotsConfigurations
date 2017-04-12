# cuts

#cuts = {}

supercut = 'std_vector_lepton_pt[0]>25 && std_vector_lepton_pt[1]>20 \
            && std_vector_lepton_pt[2]<10 \
'

cuts['ww_TwoLept_em'] = 'njet >= 0 \
            && (std_vector_lepton_flavour[0] * std_vector_lepton_flavour[1] == -11*13) \
'

# cuts['ww_TwoLept_sf'] = 'njet >= 0 \
#             && ((std_vector_lepton_flavour[0] * std_vector_lepton_flavour[1] == -11*11) || (std_vector_lepton_flavour[0] * std_vector_lepton_flavour[1] == -13*13)) \
# '

cuts['ww_DY_ee'] = 'njet >= 0 \
            && (std_vector_lepton_flavour[0] * std_vector_lepton_flavour[1] == -11*11) \
            && (mll > (91 - 15)) \
            && (mll < (91 + 15)) \
'

cuts['ww_DY_mm'] = 'njet >= 0 \
            && (std_vector_lepton_flavour[0] * std_vector_lepton_flavour[1] == -13*13) \
            && (mll > (91 - 15)) \
            && (mll < (91 + 15)) \
'
