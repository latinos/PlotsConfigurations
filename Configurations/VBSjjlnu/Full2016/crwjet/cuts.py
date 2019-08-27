# cuts

#cuts = {}

l1pt = '(std_vector_lepton_pt[0]>30)'
# l2vetotight = '(  std_vector_muon_isTightLepton_cut_Tight80x[1]<0.5 &&  std_vector_electron_isTightLepton_cut_WP_Tight80X[1]<0.5 )'
l2veto = '(std_vector_lepton_pt[1]<0)'
crwjet = '(mjj_vjet > 40 && mjj_vjet < 65) || (mjj_vjet > 105 && mjj_vjet < 150)'
supercut = l1pt + ' && ' + l2veto + ' && ' + crwjet


cuts["events"] = '1.'
cuts['electron']  = '(abs(std_vector_lepton_flavour[0]) == 11)'
cuts['muon']      = '(abs(std_vector_lepton_flavour[0]) == 13)'

## this is not meant to be used in this control region
## cuts["vbslike"] = "mjj_vbs >= 200 && mjj_vjet > 65 && mjj_vjet < 105 && deltaeta_vbs > 2.5 && metPfType1> 20"
