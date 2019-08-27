# cuts

#cuts = {}

# l1pt = '(std_vector_lepton_pt[0]>30)'
# btag_4jets_l1tight ='( (1*(std_vector_jet_DeepCSVB[0] > 0.8958)*(std_vector_jet_pt[0]>25) + \
#                         1*(std_vector_jet_DeepCSVB[1] > 0.8958)*(std_vector_jet_pt[1]>25) + \
#                         1*(std_vector_jet_DeepCSVB[2] > 0.8958)*(std_vector_jet_pt[2]>25) + \
#                         1*(std_vector_jet_DeepCSVB[3] > 0.8958)*(std_vector_jet_pt[3]>25) + \
#                         1*(std_vector_jet_DeepCSVB[4] > 0.8958)*(std_vector_jet_pt[4]>25) + \
#                         1*(std_vector_jet_DeepCSVB[5] > 0.8958)*(std_vector_jet_pt[5]>25) + \
#                         1*(std_vector_jet_DeepCSVB[6] > 0.8958)*(std_vector_jet_pt[6]>25) + \
#                         1*(std_vector_jet_DeepCSVB[7] > 0.8958)*(std_vector_jet_pt[7]>25) + \
#                         1*(std_vector_jet_DeepCSVB[8] > 0.8958)*(std_vector_jet_pt[8]>25) + \
#                         1*(std_vector_jet_DeepCSVB[9] > 0.8958)*(std_vector_jet_pt[9]>25)   \
#                         ) >= 1 )  && \
#                         (std_vector_jet_pt[3]>=30) && \
#                         ((std_vector_muon_isTightLepton_cut_Tight80x[0]>0.5 || std_vector_electron_isTightLepton_cut_WP_Tight80X[0]>0.5)) ' 
# crdy = '(mll > 60 && mll < 105)'

# supercut = '(' + l1pt + ' && ' + btag_4jets_l1tight + ' && ' + crdy + ')'
supercut = '1.'

cuts["inclusive"]   = '1.'
# cuts['electron'] = '(abs(std_vector_lepton_flavour[0]) == 11)'
# cuts['muon']     = '(abs(std_vector_lepton_flavour[0]) == 13)'
