# cuts

#cuts = {}
    
#cuts['WWee']  = '(std_vector_lepton_flavour[0] * std_vector_lepton_flavour[1] == -11*11)   \
                #&&  std_vector_lepton_pt[0]>30 && std_vector_lepton_pt[1]>20  \
                #&& mll>50    '

cuts['WWem']  = '(std_vector_lepton_flavour[0] * std_vector_lepton_flavour[1] == -11*13)   \
               &&  std_vector_lepton_pt[0]>30 && std_vector_lepton_pt[1]>20   \
               && mll>50     '


cuts['WWmm']  = '(std_vector_lepton_flavour[0] * std_vector_lepton_flavour[1] == -13*13)   \
                &&  std_vector_lepton_pt[0]>30 && std_vector_lepton_pt[1]>20  \
                && mll>50    '



#cuts['TTee']  = '(std_vector_lepton_flavour[0] * std_vector_lepton_flavour[1] == -11*11) && std_vector_jet_csvv2ivf[0]>0.5 && std_vector_jet_csvv2ivf[1]>0.5 '

#cuts['TTem']  = '(std_vector_lepton_flavour[0] * std_vector_lepton_flavour[1] == -11*13) && std_vector_jet_csvv2ivf[0]>0.5 && std_vector_jet_csvv2ivf[1]>0.5 '

