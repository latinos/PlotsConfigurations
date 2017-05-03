# cuts

#cuts = {}
  
supercut = 'std_vector_lepton_pt[0]>30 \
            && ( std_vector_jet_pt[0] < 20 || std_vector_jet_cmvav2[0] < -0.5884 ) \
            && ( std_vector_jet_pt[1] < 20 || std_vector_jet_cmvav2[1] < -0.5884 ) \
            && ( std_vector_jet_pt[2] < 20 || std_vector_jet_cmvav2[2] < -0.5884 ) \
            && ( std_vector_jet_pt[3] < 20 || std_vector_jet_cmvav2[3] < -0.5884 ) \
            && ( std_vector_jet_pt[4] < 20 || std_vector_jet_cmvav2[4] < -0.5884 ) \
            && ( std_vector_jet_pt[5] < 20 || std_vector_jet_cmvav2[5] < -0.5884 ) \
            && ( std_vector_jet_pt[6] < 20 || std_vector_jet_cmvav2[6] < -0.5884 ) \
            && ( std_vector_jet_pt[7] < 20 || std_vector_jet_cmvav2[7] < -0.5884 ) \
            && ( std_vector_jet_pt[8] < 20 || std_vector_jet_cmvav2[8] < -0.5884 ) \
            && ( std_vector_jet_pt[9] < 20 || std_vector_jet_cmvav2[9] < -0.5884 ) \
      '


#cuts['wwlvjj_13TeV_e']  = 'abs(std_vector_lepton_flavour[0]) == 11'
#cuts['wwlvjj_13TeV_m']  = 'abs(std_vector_lepton_flavour[0]) == 13'

#cuts['wwlvjj_13TeV_e']  = 'abs(std_vector_lepton_flavour[0]) == 11 && std_vector_fatjet_pt[0]>0 && std_vector_lepton_pt[1] <=0'
#cuts['wwlvjj_13TeV_m']  = 'abs(std_vector_lepton_flavour[0]) == 13 && std_vector_fatjet_pt[0]>0 && std_vector_lepton_pt[1] <=0'

cuts['wwlvjj_13TeV_e']  = 'abs(std_vector_lepton_flavour[0]) == 11 && std_vector_lepton_pt[1] <=0'
cuts['wwlvjj_13TeV_m']  = 'abs(std_vector_lepton_flavour[0]) == 13 && std_vector_lepton_pt[1] <=0'



