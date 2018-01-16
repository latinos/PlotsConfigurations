# cuts

supercut = ' mll > 12 \
             && std_vector_lepton_pt[0]>20 && std_vector_lepton_pt[1]>10 && std_vector_lepton_pt[2]<10 \
             && (abs(std_vector_lepton_flavour[1]) == 13 || (std_vector_lepton_pt[0]>25 && std_vector_lepton_pt[1]>13) )  \
             && metTtrk > 20 \
             && std_vector_jet_pt[0] >= 30 && std_vector_jet_pt[1] >= 30 \
             && (abs(std_vector_jet_eta[0])<4.7) && (abs(std_vector_jet_eta[1])<4.7) \
             && (abs((std_vector_lepton_eta[0] - (jeteta1+jeteta2)/2)/detajj) < 0.5) \
             && (abs((std_vector_lepton_eta[1] - (jeteta1+jeteta2)/2)/detajj) < 0.5) \
             && (mjj >= 400 && abs(detajj) >= 3.5) \
             && '+bVeto+' \
             && dymvavbf > 0.8 \
           '               

cuts['2j_VBF_ee_in'] = '   (std_vector_lepton_flavour[0] * std_vector_lepton_flavour[1] == -11*11)   \
                        && fabs(91.1876 - mll) < 7.5  \
                       '

cuts['2j_VBF_uu_in'] = '   (std_vector_lepton_flavour[0] * std_vector_lepton_flavour[1] == -13*13)   \
                        && fabs(91.1876 - mll) < 7.5  \
                       '

cuts['2j_VBF_df_in'] = '   (std_vector_lepton_flavour[0] * std_vector_lepton_flavour[1] == -11*13)   \
                        && fabs(91.1876 - mll) < 7.5  \
                       '

cuts['2j_VBF_ee_out'] = '   (std_vector_lepton_flavour[0] * std_vector_lepton_flavour[1] == -11*11)   \
                         && fabs(91.1876 - mll) > 15  \
                        '

cuts['2j_VBF_uu_out'] = '   (std_vector_lepton_flavour[0] * std_vector_lepton_flavour[1] == -13*13)   \
                         && fabs(91.1876 - mll) > 15  \
                        '

cuts['2j_VBF_df_out'] = '   (std_vector_lepton_flavour[0] * std_vector_lepton_flavour[1] == -11*13)   \
                         && fabs(91.1876 - mll) > 15  \
                        '
