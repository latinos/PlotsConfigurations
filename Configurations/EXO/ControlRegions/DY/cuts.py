# cuts

#cuts = {}
  
supercut = 'mll>50  \
            && std_vector_lepton_pt[0]>30 && std_vector_lepton_pt[1]>30 \
            && std_vector_lepton_pt[2]<10 \
            && (abs(std_vector_lepton_flavour[0])==abs(std_vector_lepton_flavour[1])) \
           '
cuts['dyee_13TeV'] = 'abs(std_vector_lepton_flavour[0]) == 11 && abs(std_vector_lepton_flavour[1]) == 11'
cuts['dymm_13TeV'] = 'abs(std_vector_lepton_flavour[0]) == 13 && abs(std_vector_lepton_flavour[1]) == 13'

