# cuts

supercut = ' mll>60 \
             && std_vector_lepton_pt[0]>20 && std_vector_lepton_pt[1]>10 \
             && std_vector_lepton_pt[2]<10 \
            '

cuts['Zee']  = '(std_vector_lepton_flavour[0] * std_vector_lepton_flavour[1] == -11*11)   \
                 && std_vector_lepton_pt[0]>25 && std_vector_lepton_pt[1]>13 \
                 && mll>80 && mll<100 \
               '

cuts['Zmm']  = '(std_vector_lepton_flavour[0] * std_vector_lepton_flavour[1] == -13*13)   \
                 && mll>80 && mll<100 \
               '
'''
cuts['Zee0j']  = '(std_vector_lepton_flavour[0] * std_vector_lepton_flavour[1] == -11*11)   \
                   && std_vector_lepton_pt[0]>25 && std_vector_lepton_pt[1]>13 \
                   && mll>80 && mll<100 \
                   && ( std_vector_jet_pt[0] < 30 ) \
                 '

cuts['Zmm0j']  = '(std_vector_lepton_flavour[0] * std_vector_lepton_flavour[1] == -13*13)   \
                   && mll>80 && mll<100 \
                   && ( std_vector_jet_pt[0] < 30 ) \
                 '

cuts['Zee1j']  = '(std_vector_lepton_flavour[0] * std_vector_lepton_flavour[1] == -11*11)   \
                   && std_vector_lepton_pt[0]>25 && std_vector_lepton_pt[1]>13 \
                   && mll>80 && mll<100 \
                   && ( std_vector_jet_pt[0] >= 30 ) \
                   && ( std_vector_jet_pt[1] < 30 ) \
                 '

cuts['Zmm1j']  = '(std_vector_lepton_flavour[0] * std_vector_lepton_flavour[1] == -13*13)   \
                   && mll>80 && mll<100 \
                   && ( std_vector_jet_pt[0] >= 30 ) \
                   && ( std_vector_jet_pt[1] < 30 ) \
                 '


'''
