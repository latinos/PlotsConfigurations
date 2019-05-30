# cuts

#cuts = {}
  
# supercut = '1.'
supercut = 'std_vector_lepton_pt[0]>30'

cuts["events"] = '1.'

#cuts['wwlvjj_13TeV_e']  = 'std_vector_jet_pt[0]>25'
#cuts['wwlvjj_13TeV_m']  = 'std_vector_jet_pt[0]>25'

#&& std_vector_lepton_pt[0]>20 && (1*(std_vector_jet_cmvav2[0]>-0.715) + 1*(std_vector_jet_cmvav2[1]>-0.715) + 1*(std_vector_jet_cmvav2[2]>-0.715) + 1*(std_vector_jet_cmvav2[3]>-0.715) + 1*(std_vector_jet_cmvav2[4]>-0.715) + 1*(std_vector_jet_cmvav2[5]>-0.715))>=1 
#cuts['wwlvjj_13TeV_e']  = 'abs(std_vector_lepton_flavour[0]) == 11'
#cuts['wwlvjj_13TeV_m']  = 'abs(std_vector_lepton_flavour[0]) == 13'

#cuts['wwlvjj_13TeV_e']  = 'abs(std_vector_lepton_flavour[0]) == 11 && std_vector_fatjet_pt[0]>0 && std_vector_lepton_pt[1] <=0'
#cuts['wwlvjj_13TeV_m']  = 'abs(std_vector_lepton_flavour[0]) == 13 && std_vector_fatjet_pt[0]>0 && std_vector_lepton_pt[1] <=0'

# cuts['wwlvjj_13TeV_e']  = '1'
cuts['electron']  = '(abs(std_vector_lepton_flavour[0]) == 11)'
cuts['muon']  = '(abs(std_vector_lepton_flavour[0]) == 13)'

cuts["vbslike"] = "mjj_vbs >= 200 && mjj_vjet > 65 && mjj_vjet < 105 && deltaeta_vbs > 2.5 && metPfType1> 20"
# to be added recoMET 



