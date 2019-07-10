# cuts

#cuts = {}
  
# supercut = '1.'
supercut = '(std_vector_lepton_pt[0]>30)'
l2vetotight = '(  std_vector_muon_isTightLepton_cut_Tight80x[1]<0.5 &&  std_vector_electron_isTightLepton_cut_WP_Tight80X[1]<0.5 )'
supercut += '&& ' + l2vetotight

cuts["events"] = '1.'

cuts['electron']  = '(abs(std_vector_lepton_flavour[0]) == 11)'
cuts['muon']  = '(abs(std_vector_lepton_flavour[0]) == 13)'

cuts["vbslike"] = "mjj_vbs >= 200 && mjj_vjet > 65 && mjj_vjet < 105 && deltaeta_vbs > 2.5 && metPfType1> 20"
