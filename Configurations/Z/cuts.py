# cuts

supercut='abs(std_vector_lepton_flavour[0]) == abs(std_vector_lepton_flavour[1]) &&  std_vector_lepton_pt[0]>20 && std_vector_lepton_pt[1]>15 && std_vector_lepton_pt[2]<10 && mll>80 && mll < 110 '

cuts['Zjets'] = 'njet>0'
cuts['ZjetsCutJPB'] = ('njet>0 &&' \
                       '(std_vector_jet_pt[0] < 15 || std_vector_jet_tche[0] < 2.1) && ' \
                       '(std_vector_jet_pt[1] < 15 || std_vector_jet_tche[1] < 2.1) && ' \
                       '(std_vector_jet_pt[2] < 15 || std_vector_jet_tche[2] < 2.1) && ' \
                       '(std_vector_jet_pt[3] < 15 || std_vector_jet_tche[3] < 2.1) && ' \
                       '(std_vector_jet_pt[4] < 15 || std_vector_jet_tche[4] < 2.1) && ' \
                       '(std_vector_jet_pt[5] < 15 || std_vector_jet_tche[5] < 2.1)' )
cuts['Z0jets'] = 'njet==0'
cuts['Z0jetsCutJPB'] = ('njet==0 && std_vector_jet_pt[0] > 15 && std_vector_jet_pt[0] < 30 &&' \
                       '(std_vector_jet_pt[0] < 15 || std_vector_jet_tche[0] < 2.1) && ' \
                       '(std_vector_jet_pt[1] < 15 || std_vector_jet_tche[1] < 2.1) && ' \
                       '(std_vector_jet_pt[2] < 15 || std_vector_jet_tche[2] < 2.1) && ' \
                       '(std_vector_jet_pt[3] < 15 || std_vector_jet_tche[3] < 2.1) && ' \
                       '(std_vector_jet_pt[4] < 15 || std_vector_jet_tche[4] < 2.1) && ' \
                       '(std_vector_jet_pt[5] < 15 || std_vector_jet_tche[5] < 2.1)' )
