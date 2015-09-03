# cuts

#cuts = {}
    
#supercut = 'std_vector_lepton_flavour[0] * std_vector_lepton_flavour[1] < 0   \
            #&&  std_vector_lepton_pt[0]>30 && std_vector_lepton_pt[1]>20 \
            #&&  std_vector_lepton_pt[2]<10 \
            #&& (abs(std_vector_lepton_flavour[0]) == 13 || std_vector_lepton_eleIdMedium[0] == 1) \
            #&& (abs(std_vector_lepton_flavour[1]) == 13 || std_vector_lepton_eleIdMedium[1] == 1) \
            #&& (abs(std_vector_lepton_flavour[0]) == 11 || std_vector_lepton_isMediumMuon[0] == 1) \
            #&& (abs(std_vector_lepton_flavour[1]) == 11 || std_vector_lepton_isMediumMuon[1] == 1) \
            #&& (abs(std_vector_lepton_flavour[0]) == 11 || (std_vector_lepton_chargedHadronIso[0] + std_vector_lepton_neutralHadronIso[0] + std_vector_lepton_photonIso[0])/std_vector_lepton_pt[0] < 0.20) \
            #&& (abs(std_vector_lepton_flavour[1]) == 11 || (std_vector_lepton_chargedHadronIso[1] + std_vector_lepton_neutralHadronIso[1] + std_vector_lepton_photonIso[1])/std_vector_lepton_pt[1] < 0.20) \
            #&& mll>10 \
           #'
#supercut = '1 \
           #'
  
supercut = 'mll>10 \
            && std_vector_lepton_pt[0]>30 && std_vector_lepton_pt[1]>20 \
           '

cuts['WWee']  = '(std_vector_lepton_flavour[0] * std_vector_lepton_flavour[1] == -11*11)   \
                &&  std_vector_lepton_pt[0]>20 && std_vector_lepton_pt[1]>10  \
                && mll>12    '

cuts['WWem']  = '(std_vector_lepton_flavour[0] * std_vector_lepton_flavour[1] == -11*13)   \
               &&  std_vector_lepton_pt[0]>20 && std_vector_lepton_pt[1]>10   \
               && mll>12     '


cuts['WWmm']  = '(std_vector_lepton_flavour[0] * std_vector_lepton_flavour[1] == -13*13)   \
                &&  std_vector_lepton_pt[0]>20 && std_vector_lepton_pt[1]>10  \
                && mll>12    '


cuts['WZ']  = ' std_vector_lepton_pt[0]>20 && std_vector_lepton_pt[1]>10 && std_vector_lepton_pt[2]>10 \
              '


cuts['ZZ']  = ' std_vector_lepton_pt[0]>20 && std_vector_lepton_pt[1]>10 && std_vector_lepton_pt[2]>10 && std_vector_lepton_pt[3]>10 \
              '


cuts['WWtightmm']  = '(std_vector_lepton_flavour[0] * std_vector_lepton_flavour[1] == -13*13)   \
                &&  std_vector_lepton_pt[0]>20 && std_vector_lepton_pt[1]>10  \
                && (abs(std_vector_lepton_flavour[0]) == 11 || std_vector_lepton_isTightMuon[0] == 1) \
                && (abs(std_vector_lepton_flavour[1]) == 11 || std_vector_lepton_isTightMuon[1] == 1) \
                && mll>12    '


cuts['SS']  = '(std_vector_lepton_flavour[0] * std_vector_lepton_flavour[1] > 0)   \
                &&  std_vector_lepton_pt[0]>20 && std_vector_lepton_pt[1]>10  \
              '


