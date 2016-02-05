# cuts

#cuts = {}

  
supercut = 'mll>12 \
            && std_vector_lepton_pt[0]>30 && std_vector_lepton_pt[1]>20 \
            && std_vector_lepton_pt[2]<10 \
            && pfType1Met > 20 \
            && ptll > 30 \
           '


cuts['WWee']  = '(std_vector_lepton_flavour[0] * std_vector_lepton_flavour[1] == -11*11)   \
                '

cuts['WWmm']  = '(std_vector_lepton_flavour[0] * std_vector_lepton_flavour[1] == -13*13)   \
                '

cuts['WWem']  = '(std_vector_lepton_flavour[0] * std_vector_lepton_flavour[1] == -11*13)   \
                '
                



