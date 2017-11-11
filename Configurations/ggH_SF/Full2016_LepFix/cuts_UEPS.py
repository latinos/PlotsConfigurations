
supercut = ' mll > 12 \
             && std_vector_lepton_pt[0]>20 && std_vector_lepton_pt[1]>10 && std_vector_lepton_pt[2]<10 \
             && (abs(std_vector_lepton_flavour[1]) == 13 || (std_vector_lepton_pt[0]>25 && std_vector_lepton_pt[1]>13) )  \
             && metTtrk > 20 \
           '

cuts['all'] = '(    (std_vector_lepton_flavour[0] * std_vector_lepton_flavour[1] == -11*11) \
                               || (std_vector_lepton_flavour[0] * std_vector_lepton_flavour[1] == -13*13) )'

cuts['hww2l2v_13TeV_sf'] = ' (    (std_vector_lepton_flavour[0] * std_vector_lepton_flavour[1] == -11*11) \
                               || (std_vector_lepton_flavour[0] * std_vector_lepton_flavour[1] == -13*13) ) \
                             && fabs(91.1876 - mll) > 15  \
                             && (    ( std_vector_jet_pt[1]<=30 && dymvaggh > 0.95 )   \
                                  || ( std_vector_jet_pt[1]> 30 && dymvaggh > 0.95 )   \
                                  || ( std_vector_jet_pt[1]> 30 && mjj >= 400 && abs(detajj) >= 3.5 && dymvavbf > 0.95 ) ) \
                             '

               
