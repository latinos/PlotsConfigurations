# cuts

#cuts = {}
  
supercut = ' std_vector_lepton_pt[0]>20 && std_vector_lepton_pt[1]>20 && std_vector_lepton_pt[2]<10 && Gen_ZGstar_MomId == 23 '
            

cuts['emOF']  = '(std_vector_lepton_flavour[0] * std_vector_lepton_flavour[1] == -11*13)'
cuts['emSF']  = '(std_vector_lepton_flavour[0] * std_vector_lepton_flavour[1] ==  11*13)'
cuts['eeOF']  = '(std_vector_lepton_flavour[0] * std_vector_lepton_flavour[1] == -11*11)'
cuts['eeSF']  = '(std_vector_lepton_flavour[0] * std_vector_lepton_flavour[1] ==  11*11)'
cuts['mmOF']  = '(std_vector_lepton_flavour[0] * std_vector_lepton_flavour[1] == -13*13)'
cuts['mmSF']  = '(std_vector_lepton_flavour[0] * std_vector_lepton_flavour[1] ==  13*13)'
cuts['All']  = '(1 == 1 )'




# 11 = e
# 13 = mu
# 15 = tau

