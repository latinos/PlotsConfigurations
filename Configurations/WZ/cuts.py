# cuts

#cuts = {}
  
supercut = 'std_vector_lepton_pt[0] > 20.
            && std_vector_lepton_pt[1] > 10. \
            && std_vector_lepton_pt[2] > 20. \
            && metPfType1 > 30. \
            && mll > 76. && mll < 106. \ 
            && std_vector_lepton_isTightLepton[2] = 1 \
            && nbjet = 0 \
'

cuts['WZ(ee)'] = 'std_vector_lepton_flavour[0] * std_vector_lepton_flavour[1] = -11 * 11'

cuts['WZ(mm)'] = 'std_vector_lepton_flavour[0] * std_vector_lepton_flavour[1] = -13 * 13'
