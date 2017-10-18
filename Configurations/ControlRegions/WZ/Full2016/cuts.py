# cuts

#cuts = {}
  
#std_vector_lepton_isTightLepton[2] == 1 \ not defined anymore Oct 2017
            #&& mllmin3l > 76. && mllmin3l < 106. \

supercut = 'std_vector_lepton_pt[0] > 20. \
            && std_vector_lepton_pt[1] > 20. \
            && std_vector_lepton_pt[2] > 20. \
            && metPfType1 > 30. \
           '

cuts['ZTomumuWTomu']  = 'fabs(std_vector_lepton_flavour[0] * std_vector_lepton_flavour[1] * std_vector_lepton_flavour[2])== 13*13*13 \
                '
cuts['ZTomumuWToe']  = ' fabs(std_vector_lepton_flavour[0] * std_vector_lepton_flavour[1] * std_vector_lepton_flavour[2])== 13*13*11 \
                '
cuts['ZTomumu']  = ' (fabs(std_vector_lepton_flavour[0] * std_vector_lepton_flavour[1] * std_vector_lepton_flavour[2])== 13*13*13) || (fabs(std_vector_lepton_flavour[0] * std_vector_lepton_flavour[1] * std_vector_lepton_flavour[2])== 13*13*11) \
                '
cuts['ZToeeWTomu']  = 'fabs(std_vector_lepton_flavour[0] * std_vector_lepton_flavour[1] * std_vector_lepton_flavour[2])== 11*11*13 \
                '
cuts['ZToeeWToe']  = ' fabs(std_vector_lepton_flavour[0] * std_vector_lepton_flavour[1] * std_vector_lepton_flavour[2])== 11*11*11 \
                '
cuts['ZToee']  = ' (fabs(std_vector_lepton_flavour[0] * std_vector_lepton_flavour[1] * std_vector_lepton_flavour[2])== 11*11*13) || (fabs(std_vector_lepton_flavour[0] * std_vector_lepton_flavour[1] * std_vector_lepton_flavour[2])== 11*11*11) \
                 '
