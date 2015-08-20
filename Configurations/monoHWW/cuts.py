# cuts

#cuts = {}
    
cuts['WWee']  = '(std_vector_lepton_flavour[0] * std_vector_lepton_flavour[1] == -11*11)   \
                && (abs(std_vector_lepton_flavour[0]) == 13 || std_vector_lepton_eleIdMedium[0] == 1) \
                && (abs(std_vector_lepton_flavour[1]) == 13 || std_vector_lepton_eleIdMedium[1] == 1) \
                &&  std_vector_lepton_pt[0]>10 && std_vector_lepton_pt[1]>5  \
                '

cuts['WWem']  = '(std_vector_lepton_flavour[0] * std_vector_lepton_flavour[1] == -11*13)   \
                && (abs(std_vector_lepton_flavour[0]) == 13 || std_vector_lepton_eleIdMedium[0] == 1) \
                && (abs(std_vector_lepton_flavour[1]) == 13 || std_vector_lepton_eleIdMedium[1] == 1) \
               &&  std_vector_lepton_pt[0]>10 && std_vector_lepton_pt[1]>5   \
               '


cuts['WWmm']  = '(std_vector_lepton_flavour[0] * std_vector_lepton_flavour[1] == -13*13)   \
                && (abs(std_vector_lepton_flavour[0]) == 13 || std_vector_lepton_eleIdMedium[0] == 1) \
                && (abs(std_vector_lepton_flavour[1]) == 13 || std_vector_lepton_eleIdMedium[1] == 1) \
                &&  std_vector_lepton_pt[0]>10 && std_vector_lepton_pt[1]>5  \
                '


cuts['WW']    = '(std_vector_lepton_flavour[0] * std_vector_lepton_flavour[1] < 0)   \
                &&  std_vector_lepton_pt[0]>10 && std_vector_lepton_pt[1]>5  \
                '

