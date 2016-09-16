# cuts

#cuts = {}
  
supercut = 'mll>12  \
            && std_vector_lepton_pt[0]>25 && std_vector_lepton_pt[1]>25 \
            && std_vector_lepton_pt[2]<10 \
            && (std_vector_lepton_flavour[0] * std_vector_lepton_flavour[1] < 0 ) \
            '


#cuts['hww2l2v_13TeV_sf2j_mm_sasha']  = '(std_vector_lepton_flavour[0] * std_vector_lepton_flavour[1] == 13*13)    \
                               #&& (abs(std_vector_lepton_flavour[1]) == 13 || std_vector_lepton_pt[1]>13) \
                               #&& (njet>=2) \
                               #&& metPfType1 < 40 \
                               #&& ( std_vector_jet_cmvav2[0] > -0.715   ||    std_vector_jet_cmvav2[1] > -0.715  ) \
                               #&& (abs(std_vector_jet_eta[0])<2.4) && (abs(std_vector_jet_eta[1])<2.4) \
                               #'


cuts['hww2l2v_13TeV_sf2j_mm_sasha']  = '(std_vector_lepton_flavour[0] * std_vector_lepton_flavour[1] == -13*13)    \
                               && (abs(std_vector_lepton_flavour[1]) == 13 || std_vector_lepton_pt[1]>13) \
                               && (njet==2) \
                               && ( ( std_vector_jet_cmvav2[0] > -0.715 && abs(std_vector_jet_eta[0])<2.4    &&   abs(std_vector_jet_eta[1])<4.5    && abs(std_vector_jet_eta[1])>2.4     )  \
                               ||   ( std_vector_jet_cmvav2[1] > -0.715 && abs(std_vector_jet_eta[1])<2.4    &&   abs(std_vector_jet_eta[0])<4.5    && abs(std_vector_jet_eta[0])>2.4     )   )  \
                               '



cuts['hww2l2v_13TeV_sf2j_mm_lowmll_sasha']  = '(std_vector_lepton_flavour[0] * std_vector_lepton_flavour[1] == -13*13)    \
                               && (abs(std_vector_lepton_flavour[1]) == 13 || std_vector_lepton_pt[1]>13) \
                               && (njet==2) \
                               && mll<40   \
                               && ( ( std_vector_jet_cmvav2[0] > -0.715 && abs(std_vector_jet_eta[0])<2.4    &&   abs(std_vector_jet_eta[1])<4.5    && abs(std_vector_jet_eta[1])>2.4     )  \
                               ||   ( std_vector_jet_cmvav2[1] > -0.715 && abs(std_vector_jet_eta[1])<2.4    &&   abs(std_vector_jet_eta[0])<4.5    && abs(std_vector_jet_eta[0])>2.4     )   )  \
                               '



cuts['hww2l2v_13TeV_sf2j_mm_test_sasha']  = '(std_vector_lepton_flavour[0] * std_vector_lepton_flavour[1] == -13*13)    \
                               && std_vector_lepton_pt[0]>40 && std_vector_lepton_pt[1]>30 \
                               && (abs(std_vector_lepton_flavour[1]) == 13 || std_vector_lepton_pt[1]>13) \
                               && (njet==2) \
                               && ( ( std_vector_jet_cmvav2[0] > -0.715 && abs(std_vector_jet_eta[0])<2.4    &&   abs(std_vector_jet_eta[1])<4.5    && abs(std_vector_jet_eta[1])>2.4     )  \
                               ||   ( std_vector_jet_cmvav2[1] > -0.715 && abs(std_vector_jet_eta[1])<2.4    &&   abs(std_vector_jet_eta[0])<4.5    && abs(std_vector_jet_eta[0])>2.4     )   )  \
                               '





# 11 = e
# 13 = mu
# 15 = tau
