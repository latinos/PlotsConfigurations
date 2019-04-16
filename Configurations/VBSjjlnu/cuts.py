# cuts

#cuts = {}
  
supercut = '1'
#cuts['wwlvjj_13TeV_e']  = 'std_vector_jet_pt[0]>25'
#cuts['wwlvjj_13TeV_m']  = 'std_vector_jet_pt[0]>25'

#&& std_vector_lepton_pt[0]>20 && (1*(std_vector_jet_cmvav2[0]>-0.715) + 1*(std_vector_jet_cmvav2[1]>-0.715) + 1*(std_vector_jet_cmvav2[2]>-0.715) + 1*(std_vector_jet_cmvav2[3]>-0.715) + 1*(std_vector_jet_cmvav2[4]>-0.715) + 1*(std_vector_jet_cmvav2[5]>-0.715))>=1 
#cuts['wwlvjj_13TeV_e']  = 'abs(std_vector_lepton_flavour[0]) == 11'
#cuts['wwlvjj_13TeV_m']  = 'abs(std_vector_lepton_flavour[0]) == 13'

#cuts['wwlvjj_13TeV_e']  = 'abs(std_vector_lepton_flavour[0]) == 11 && std_vector_fatjet_pt[0]>0 && std_vector_lepton_pt[1] <=0'
#cuts['wwlvjj_13TeV_m']  = 'abs(std_vector_lepton_flavour[0]) == 13 && std_vector_fatjet_pt[0]>0 && std_vector_lepton_pt[1] <=0'

# cuts['wwlvjj_13TeV_e']  = '1'
cuts['wwlvjj_e']  = '(abs(std_vector_lepton_flavour[0]) == 11)'
cuts['wwlvjj_m']  = '(abs(std_vector_lepton_flavour[0]) == 13)'

cuts['wwlvjj_e_pt_low'] = cuts['wwlvjj_e'] + '&&(std_vector_lepton_pt[0] > 20)'
cuts['wwlvjj_m_pt_low'] = cuts['wwlvjj_m'] + '&&(std_vector_lepton_pt[0] > 20)'

cuts['wwlvjj_e_jetpt'] = cuts['wwlvjj_e_pt_low'] + '&&(std_vector_jet_pt[0] > 30)'
cuts['wwlvjj_m_jetpt'] = cuts['wwlvjj_m_pt_low'] + '&&(std_vector_jet_pt[0] > 30)'



'''
cuts['cut_nbjet_deepcsv_loose'] = \
                '1*(std_vector_jet_pt[0]>25)*(std_vector_jet_DeepCSVB[0]>0.2219) + \
                1*(std_vector_jet_pt[1]>25)*(std_vector_jet_DeepCSVB[1]>0.2219) + \
                1*(std_vector_jet_pt[2]>25)*(std_vector_jet_DeepCSVB[2]>0.2219) + \
                1*(std_vector_jet_pt[3]>25)*(std_vector_jet_DeepCSVB[3]>0.2219) + \
                1*(std_vector_jet_pt[4]>25)*(std_vector_jet_DeepCSVB[4]>0.2219) + \
                1*(std_vector_jet_pt[5]>25)*(std_vector_jet_DeepCSVB[5]>0.2219) + \
                1*(std_vector_jet_pt[6]>25)*(std_vector_jet_DeepCSVB[6]>0.2219) + \
                1*(std_vector_jet_pt[7]>25)*(std_vector_jet_DeepCSVB[7]>0.2219) + \
                1*(std_vector_jet_pt[8]>25)*(std_vector_jet_DeepCSVB[8]>0.2219) + \
                1*(std_vector_jet_pt[9]>25)*(std_vector_jet_DeepCSVB[9]>0.2219)>=1'

cuts['cut_nbjet_deepcsv_medium'] = \
                '1*(std_vector_jet_pt[0]>25)*(std_vector_jet_DeepCSVB[0]>0.6324) + \
                1*(std_vector_jet_pt[1]>25)*(std_vector_jet_DeepCSVB[1]>0.6324) + \
                1*(std_vector_jet_pt[2]>25)*(std_vector_jet_DeepCSVB[2]>0.6324) + \
                1*(std_vector_jet_pt[3]>25)*(std_vector_jet_DeepCSVB[3]>0.6324) + \
                1*(std_vector_jet_pt[4]>25)*(std_vector_jet_DeepCSVB[4]>0.6324) + \
                1*(std_vector_jet_pt[5]>25)*(std_vector_jet_DeepCSVB[5]>0.6324) + \
                1*(std_vector_jet_pt[6]>25)*(std_vector_jet_DeepCSVB[6]>0.6324) + \
                1*(std_vector_jet_pt[7]>25)*(std_vector_jet_DeepCSVB[7]>0.6324) + \
                1*(std_vector_jet_pt[8]>25)*(std_vector_jet_DeepCSVB[8]>0.6324) + \
                1*(std_vector_jet_pt[9]>25)*(std_vector_jet_DeepCSVB[9]>0.6324)>=1'

cuts['cut_nbjet_deepcsv_tight'] = \
                '1*(std_vector_jet_pt[0]>25)*(std_vector_jet_DeepCSVB[0]>0.8958) + \
                1*(std_vector_jet_pt[1]>25)*(std_vector_jet_DeepCSVB[1]>0.8958) + \
                1*(std_vector_jet_pt[2]>25)*(std_vector_jet_DeepCSVB[2]>0.8958) + \
                1*(std_vector_jet_pt[3]>25)*(std_vector_jet_DeepCSVB[3]>0.8958) + \
                1*(std_vector_jet_pt[4]>25)*(std_vector_jet_DeepCSVB[4]>0.8958) + \
                1*(std_vector_jet_pt[5]>25)*(std_vector_jet_DeepCSVB[5]>0.8958) + \
                1*(std_vector_jet_pt[6]>25)*(std_vector_jet_DeepCSVB[6]>0.8958) + \
                1*(std_vector_jet_pt[7]>25)*(std_vector_jet_DeepCSVB[7]>0.8958) + \
                1*(std_vector_jet_pt[8]>25)*(std_vector_jet_DeepCSVB[8]>0.8958) + \
                1*(std_vector_jet_pt[9]>25)*(std_vector_jet_DeepCSVB[9]>0.8958)>=1'

cuts['cut_nbjet_cmvav2_loose'] = \
                '1*(std_vector_jet_pt[0]>25)*(std_vector_jet_cmvav2[0]>-0.5884) + \
                1*(std_vector_jet_pt[1]>25)*(std_vector_jet_cmvav2[1]>-0.5884) + \
                1*(std_vector_jet_pt[2]>25)*(std_vector_jet_cmvav2[2]>-0.5884) + \
                1*(std_vector_jet_pt[3]>25)*(std_vector_jet_cmvav2[3]>-0.5884) + \
                1*(std_vector_jet_pt[4]>25)*(std_vector_jet_cmvav2[4]>-0.5884) + \
                1*(std_vector_jet_pt[5]>25)*(std_vector_jet_cmvav2[5]>-0.5884) + \
                1*(std_vector_jet_pt[6]>25)*(std_vector_jet_cmvav2[6]>-0.5884) + \
                1*(std_vector_jet_pt[7]>25)*(std_vector_jet_cmvav2[7]>-0.5884) + \
                1*(std_vector_jet_pt[8]>25)*(std_vector_jet_cmvav2[8]>-0.5884) + \
                1*(std_vector_jet_pt[9]>25)*(std_vector_jet_cmvav2[9]>-0.5884)>=1'

cuts['cut_nbjet_cmvav2_medium'] = \
                '1*(std_vector_jet_pt[0]>25)*(std_vector_jet_cmvav2[0]>0.4432) + \
                1*(std_vector_jet_pt[1]>25)*(std_vector_jet_cmvav2[1]>0.4432) + \
                1*(std_vector_jet_pt[2]>25)*(std_vector_jet_cmvav2[2]>0.4432) + \
                1*(std_vector_jet_pt[3]>25)*(std_vector_jet_cmvav2[3]>0.4432) + \
                1*(std_vector_jet_pt[4]>25)*(std_vector_jet_cmvav2[4]>0.4432) + \
                1*(std_vector_jet_pt[5]>25)*(std_vector_jet_cmvav2[5]>0.4432) + \
                1*(std_vector_jet_pt[6]>25)*(std_vector_jet_cmvav2[6]>0.4432) + \
                1*(std_vector_jet_pt[7]>25)*(std_vector_jet_cmvav2[7]>0.4432) + \
                1*(std_vector_jet_pt[8]>25)*(std_vector_jet_cmvav2[8]>0.4432) + \
                1*(std_vector_jet_pt[9]>25)*(std_vector_jet_cmvav2[9]>0.4432)>=1'

cuts['cut_nbjet_cmvav2_tight'] = \
                '1*(std_vector_jet_pt[0]>25)*(std_vector_jet_cmvav2[0]>0.9432) + \
                1*(std_vector_jet_pt[1]>25)*(std_vector_jet_cmvav2[1]>0.9432) + \
                1*(std_vector_jet_pt[2]>25)*(std_vector_jet_cmvav2[2]>0.9432) + \
                1*(std_vector_jet_pt[3]>25)*(std_vector_jet_cmvav2[3]>0.9432) + \
                1*(std_vector_jet_pt[4]>25)*(std_vector_jet_cmvav2[4]>0.9432) + \
                1*(std_vector_jet_pt[5]>25)*(std_vector_jet_cmvav2[5]>0.9432) + \
                1*(std_vector_jet_pt[6]>25)*(std_vector_jet_cmvav2[6]>0.9432) + \
                1*(std_vector_jet_pt[7]>25)*(std_vector_jet_cmvav2[7]>0.9432) + \
                1*(std_vector_jet_pt[8]>25)*(std_vector_jet_cmvav2[8]>0.9432) + \
                1*(std_vector_jet_pt[9]>25)*(std_vector_jet_cmvav2[9]>0.9432)>=1'
'''
