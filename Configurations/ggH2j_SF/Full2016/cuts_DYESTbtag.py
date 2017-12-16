# cuts

supercut = ' mll > 12 \
             && std_vector_lepton_pt[0]>20 && std_vector_lepton_pt[1]>10 && std_vector_lepton_pt[2]<10 \
             && (abs(std_vector_lepton_flavour[1]) == 13 || (std_vector_lepton_pt[0]>25 && std_vector_lepton_pt[1]>13) )  \
             && metTtrk > 20 \
             && std_vector_jet_pt[0] >= 30 && std_vector_jet_pt[1] >= 30 \
             && (mjj >= 400 && abs(detajj) >= 3.5) \
             && ((abs(detajj) < 3.5) || (mjj < 400 && (abs(detajj) >= 3.5))) \
             && dymvaggh > 0.8 \
           '               

cuts['2j_ggH_ee_in'] = '   (std_vector_lepton_flavour[0] * std_vector_lepton_flavour[1] == -11*11)   \
                        && fabs(91.1876 - mll) < 7.5  \
                       '

cuts['2j_ggH_uu_in'] = '   (std_vector_lepton_flavour[0] * std_vector_lepton_flavour[1] == -13*13)   \
                        && fabs(91.1876 - mll) < 7.5  \
                       '

cuts['2j_ggH_df_in'] = '   (std_vector_lepton_flavour[0] * std_vector_lepton_flavour[1] == -11*13)   \
                        && fabs(91.1876 - mll) < 7.5  \
                       '

cuts['2j_ggH_ee_out'] = '   (std_vector_lepton_flavour[0] * std_vector_lepton_flavour[1] == -11*11)   \
                         && fabs(91.1876 - mll) > 15  \
                        '

cuts['2j_ggH_uu_out'] = '   (std_vector_lepton_flavour[0] * std_vector_lepton_flavour[1] == -13*13)   \
                         && fabs(91.1876 - mll) > 15  \
                        '

cuts['2j_ggH_df_out'] = '   (std_vector_lepton_flavour[0] * std_vector_lepton_flavour[1] == -11*13)   \
                         && fabs(91.1876 - mll) > 15  \
                        '
