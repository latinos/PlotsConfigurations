# cuts

#cuts = {}
    
supercut = 'std_vector_lepton_flavour[0] * std_vector_lepton_flavour[1] < 0   \
            &&  std_vector_lepton_pt[0]>30 && std_vector_lepton_pt[1]>20 \
            && (abs(std_vector_lepton_flavour[0]) == 13 || std_vector_lepton_eleIdMedium[0] == 1) \
            && (abs(std_vector_lepton_flavour[1]) == 13 || std_vector_lepton_eleIdMedium[1] == 1) \
            && (abs(std_vector_lepton_flavour[0]) == 11 || std_vector_lepton_isMediumMuon[0] == 1) \
            && (abs(std_vector_lepton_flavour[1]) == 11 || std_vector_lepton_isMediumMuon[1] == 1) \
            && (abs(std_vector_lepton_flavour[0]) == 11 || std_vector_lepton_chargedParticleIso[0]/std_vector_lepton_pt[0] < 0.20) \
            && (abs(std_vector_lepton_flavour[1]) == 11 || std_vector_lepton_chargedParticleIso[1]/std_vector_lepton_pt[1] < 0.20) \
            && mll>10 \
           '
#supercut = '1 \
           #'
  

cuts['WWee']  = '(std_vector_lepton_flavour[0] * std_vector_lepton_flavour[1] == -11*11)   \
                &&  std_vector_lepton_pt[0]>30 && std_vector_lepton_pt[1]>20  \
                && mll>50    '

cuts['WWem']  = '(std_vector_lepton_flavour[0] * std_vector_lepton_flavour[1] == -11*13)   \
               &&  std_vector_lepton_pt[0]>30 && std_vector_lepton_pt[1]>20   \
               && mll>50     '


cuts['WWmm']  = '(std_vector_lepton_flavour[0] * std_vector_lepton_flavour[1] == -13*13)   \
                &&  std_vector_lepton_pt[0]>30 && std_vector_lepton_pt[1]>20  \
                && mll>50    '



#cuts['TTee']  = '(std_vector_lepton_flavour[0] * std_vector_lepton_flavour[1] == -11*11) && std_vector_jet_csvv2ivf[0]>0.5 && std_vector_jet_csvv2ivf[1]>0.5 '

#cuts['TTem']  = '(std_vector_lepton_flavour[0] * std_vector_lepton_flavour[1] == -11*13) && std_vector_jet_csvv2ivf[0]>0.5 && std_vector_jet_csvv2ivf[1]>0.5 '

