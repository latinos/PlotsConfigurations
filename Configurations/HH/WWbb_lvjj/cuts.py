# cuts

#cuts = {}
  
supercut = '1.'
#cuts['wwlvjj_13TeV_e']  = 'std_vector_jet_pt[0]>25'
#cuts['wwlvjj_13TeV_m']  = 'std_vector_jet_pt[0]>25'

#&& std_vector_lepton_pt[0]>20 && (1*(std_vector_jet_cmvav2[0]>-0.715) + 1*(std_vector_jet_cmvav2[1]>-0.715) + 1*(std_vector_jet_cmvav2[2]>-0.715) + 1*(std_vector_jet_cmvav2[3]>-0.715) + 1*(std_vector_jet_cmvav2[4]>-0.715) + 1*(std_vector_jet_cmvav2[5]>-0.715))>=1 
#cuts['wwlvjj_13TeV_e']  = 'abs(std_vector_lepton_flavour[0]) == 11'
#cuts['wwlvjj_13TeV_m']  = 'abs(std_vector_lepton_flavour[0]) == 13'

#cuts['wwlvjj_13TeV_e']  = 'abs(std_vector_lepton_flavour[0]) == 11 && std_vector_fatjet_pt[0]>0 && std_vector_lepton_pt[1] <=0'
#cuts['wwlvjj_13TeV_m']  = 'abs(std_vector_lepton_flavour[0]) == 13 && std_vector_fatjet_pt[0]>0 && std_vector_lepton_pt[1] <=0'


cuts['nocut_1']  = '1.'
cuts['cmva_loose']  = '(1*(std_vector_jet_cmvav2[0]>-0.5884)*std_vector_jet_pt[0]>25 + \
                        1*(std_vector_jet_cmvav2[1]>-0.5884)*std_vector_jet_pt[1]>25 + \
                        1*(std_vector_jet_cmvav2[2]>-0.5884)*std_vector_jet_pt[2]>25 + \
                        1*(std_vector_jet_cmvav2[3]>-0.5884)*std_vector_jet_pt[3]>25 + \
                        1*(std_vector_jet_cmvav2[4]>-0.5884)*std_vector_jet_pt[4]>25 + \
                        1*(std_vector_jet_cmvav2[5]>-0.5884)*std_vector_jet_pt[5]>25 + \
                        1*(std_vector_jet_cmvav2[6]>-0.5884)*std_vector_jet_pt[6]>25 + \
                        1*(std_vector_jet_cmvav2[7]>-0.5884)*std_vector_jet_pt[7]>25 + \
                        1*(std_vector_jet_cmvav2[8]>-0.5884)*std_vector_jet_pt[8]>25 + \
                        1*(std_vector_jet_cmvav2[9]>-0.5884)*std_vector_jet_pt[9]>25)>=1'

cuts['cmva_tight']  = '(1*(std_vector_jet_cmvav2[0]>0.9432)*std_vector_jet_pt[0]>25 + \
                        1*(std_vector_jet_cmvav2[1]>0.9432)*std_vector_jet_pt[1]>25 + \
                        1*(std_vector_jet_cmvav2[2]>0.9432)*std_vector_jet_pt[2]>25 + \
                        1*(std_vector_jet_cmvav2[3]>0.9432)*std_vector_jet_pt[3]>25 + \
                        1*(std_vector_jet_cmvav2[4]>0.9432)*std_vector_jet_pt[4]>25 + \
                        1*(std_vector_jet_cmvav2[5]>0.9432)*std_vector_jet_pt[5]>25 + \
                        1*(std_vector_jet_cmvav2[6]>0.9432)*std_vector_jet_pt[6]>25 + \
                        1*(std_vector_jet_cmvav2[7]>0.9432)*std_vector_jet_pt[7]>25 + \
                        1*(std_vector_jet_cmvav2[8]>0.9432)*std_vector_jet_pt[8]>25 + \
                        1*(std_vector_jet_cmvav2[9]>0.9432)*std_vector_jet_pt[9]>25)>=1'

cuts['deepCSV_loose']  = '(1*(std_vector_jet_DeepCSVB[0] > 0.2219)*std_vector_jet_pt[0]>25 +\
			  1*(std_vector_jet_DeepCSVB[1] > 0.2219)*std_vector_jet_pt[1]>25 +\
                          1*(std_vector_jet_DeepCSVB[2] > 0.2219)*std_vector_jet_pt[2]>25 +\
                          1*(std_vector_jet_DeepCSVB[3] > 0.2219)*std_vector_jet_pt[3]>25 +\
                          1*(std_vector_jet_DeepCSVB[4] > 0.2219)*std_vector_jet_pt[4]>25 +\
                          1*(std_vector_jet_DeepCSVB[5] > 0.2219)*std_vector_jet_pt[5]>25 +\
                          1*(std_vector_jet_DeepCSVB[6] > 0.2219)*std_vector_jet_pt[6]>25 +\
                          1*(std_vector_jet_DeepCSVB[7] > 0.2219)*std_vector_jet_pt[7]>25 +\
                          1*(std_vector_jet_DeepCSVB[8] > 0.2219)*std_vector_jet_pt[8]>25 +\
                          1*(std_vector_jet_DeepCSVB[9] > 0.2219)*std_vector_jet_pt[9]>25)>=1'

cuts['deepCSV_tight']  = '(1*(std_vector_jet_DeepCSVB[0] > 0.8958)*std_vector_jet_pt[0]>25 +\
                          1*(std_vector_jet_DeepCSVB[1] > 0.8958)*std_vector_jet_pt[1]>25 +\
                          1*(std_vector_jet_DeepCSVB[2] > 0.8958)*std_vector_jet_pt[2]>25 +\
                          1*(std_vector_jet_DeepCSVB[3] > 0.8958)*std_vector_jet_pt[3]>25 +\
                          1*(std_vector_jet_DeepCSVB[4] > 0.8958)*std_vector_jet_pt[4]>25 +\
                          1*(std_vector_jet_DeepCSVB[5] > 0.8958)*std_vector_jet_pt[5]>25 +\
                          1*(std_vector_jet_DeepCSVB[6] > 0.8958)*std_vector_jet_pt[6]>25 +\
                          1*(std_vector_jet_DeepCSVB[7] > 0.8958)*std_vector_jet_pt[7]>25 +\
                          1*(std_vector_jet_DeepCSVB[8] > 0.8958)*std_vector_jet_pt[8]>25 +\
                          1*(std_vector_jet_DeepCSVB[9] > 0.8958)*std_vector_jet_pt[9]>25)>=1'

#cuts['wwlvjj_13TeV_lep']  = 'std_vector_jet_pt[3]>25 && std_vector_lepton_pt[0]>20'
#cuts['wwlvjj_13TeV_btag']  = 'std_vector_jet_pt[3]>25 && (1*(std_vector_jet_cmvav2[0]>-0.715) + 1*(std_vector_jet_cmvav2[1]>-0.715) + 1*(std_vector_jet_cmvav2[2]>-0.715) + 1*(std_vector_jet_cmvav2[3]>-0.715) + 1*(std_vector_jet_cmvav2[4]>-0.715) + 1*(std_vector_jet_cmvav2[5]>-0.715))>=1'
##cuts['wwlvjj_13TeV_ptlep_btag']  = 'std_vector_lepton_pt[0]>25 && (1*(std_vector_jet_cmvav2[0]>-0.715) + 1*(std_vector_jet_cmvav2[1]>-0.715) + 1*(std_vector_jet_cmvav2[2]>-0.715) + 1*(std_vector_jet_cmvav2[3]>-0.715) + 1*(std_vector_jet_cmvav2[4]>-0.715) + 1*(std_vector_jet_cmvav2[5]>-0.715))>=1'
#cuts['wwlvjj_13TeV_e']  = 'abs(std_vector_lepton_flavour[0]) == 11'
#cuts['wwlvjj_13TeV_m']  = 'abs(std_vector_lepton_flavour[0]) == 13'



