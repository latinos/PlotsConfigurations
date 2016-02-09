# cuts

#cuts = {}
  
supercut = 'mll>12  \
            && std_vector_lepton_pt[0]>20 && std_vector_lepton_pt[1]>10 \
            && std_vector_lepton_pt[2]<10 \
            && pfType1Met > 20 \
            && ptll > 30 \
'




               
cuts['hww2l2v_13TeV_of0j']  = '(std_vector_lepton_flavour[0] * std_vector_lepton_flavour[1] == -11*13)    \
                && (abs(std_vector_lepton_flavour[1]) == 13 || std_vector_lepton_pt[1]>13) \
                && ( mth>=60) \
                && ( std_vector_jet_pt[0] < 30 ) \
                && ( std_vector_jet_pt[0] < 15 || std_vector_jet_csvv2ivf[0] < 0.605 ) \
                && ( std_vector_jet_pt[1] < 15 || std_vector_jet_csvv2ivf[1] < 0.605 ) \
                && ( std_vector_jet_pt[2] < 15 || std_vector_jet_csvv2ivf[2] < 0.605 ) \
                && ( std_vector_jet_pt[3] < 15 || std_vector_jet_csvv2ivf[3] < 0.605 ) \
                && ( std_vector_jet_pt[4] < 15 || std_vector_jet_csvv2ivf[4] < 0.605 ) \
                && ( std_vector_jet_pt[5] < 15 || std_vector_jet_csvv2ivf[5] < 0.605 ) \
                && ( std_vector_jet_pt[6] < 15 || std_vector_jet_csvv2ivf[6] < 0.605 ) \
                && ( std_vector_jet_pt[7] < 15 || std_vector_jet_csvv2ivf[7] < 0.605 ) \
                && ( std_vector_jet_pt[8] < 15 || std_vector_jet_csvv2ivf[8] < 0.605 ) \
                && ( std_vector_jet_pt[9] < 15 || std_vector_jet_csvv2ivf[9] < 0.605 ) \
                '

cuts['hww2l2v_13TeV_of1j']  = '(std_vector_lepton_flavour[0] * std_vector_lepton_flavour[1] == -11*13)    \
                && (abs(std_vector_lepton_flavour[1]) == 13 || std_vector_lepton_pt[1]>13) \
                && ( mth>=60) \
                && ( std_vector_jet_pt[0] >= 30 ) \
                && ( std_vector_jet_pt[1] < 30 ) \
                && ( std_vector_jet_pt[0] < 15 || std_vector_jet_csvv2ivf[0] < 0.605 ) \
                && ( std_vector_jet_pt[1] < 15 || std_vector_jet_csvv2ivf[1] < 0.605 ) \
                && ( std_vector_jet_pt[2] < 15 || std_vector_jet_csvv2ivf[2] < 0.605 ) \
                && ( std_vector_jet_pt[3] < 15 || std_vector_jet_csvv2ivf[3] < 0.605 ) \
                && ( std_vector_jet_pt[4] < 15 || std_vector_jet_csvv2ivf[4] < 0.605 ) \
                && ( std_vector_jet_pt[5] < 15 || std_vector_jet_csvv2ivf[5] < 0.605 ) \
                && ( std_vector_jet_pt[6] < 15 || std_vector_jet_csvv2ivf[6] < 0.605 ) \
                && ( std_vector_jet_pt[7] < 15 || std_vector_jet_csvv2ivf[7] < 0.605 ) \
                && ( std_vector_jet_pt[8] < 15 || std_vector_jet_csvv2ivf[8] < 0.605 ) \
                && ( std_vector_jet_pt[9] < 15 || std_vector_jet_csvv2ivf[9] < 0.605 ) \
                '


               
cuts['hww2l2v_13TeV_dytt_of0j']  = '(std_vector_lepton_flavour[0] * std_vector_lepton_flavour[1] == -11*13)    \
                && (abs(std_vector_lepton_flavour[1]) == 13 || std_vector_lepton_pt[1]>13) \
                && ( mth<60) \
                && ( std_vector_jet_pt[0] < 30 ) \
                && ( std_vector_jet_pt[0] < 15 || std_vector_jet_csvv2ivf[0] < 0.605 ) \
                && ( std_vector_jet_pt[1] < 15 || std_vector_jet_csvv2ivf[1] < 0.605 ) \
                && ( std_vector_jet_pt[2] < 15 || std_vector_jet_csvv2ivf[2] < 0.605 ) \
                && ( std_vector_jet_pt[3] < 15 || std_vector_jet_csvv2ivf[3] < 0.605 ) \
                && ( std_vector_jet_pt[4] < 15 || std_vector_jet_csvv2ivf[4] < 0.605 ) \
                && ( std_vector_jet_pt[5] < 15 || std_vector_jet_csvv2ivf[5] < 0.605 ) \
                && ( std_vector_jet_pt[6] < 15 || std_vector_jet_csvv2ivf[6] < 0.605 ) \
                && ( std_vector_jet_pt[7] < 15 || std_vector_jet_csvv2ivf[7] < 0.605 ) \
                && ( std_vector_jet_pt[8] < 15 || std_vector_jet_csvv2ivf[8] < 0.605 ) \
                && ( std_vector_jet_pt[9] < 15 || std_vector_jet_csvv2ivf[9] < 0.605 ) \
                '

cuts['hww2l2v_13TeV_dytt_of1j']  = '(std_vector_lepton_flavour[0] * std_vector_lepton_flavour[1] == -11*13)    \
                && (abs(std_vector_lepton_flavour[1]) == 13 || std_vector_lepton_pt[1]>13) \
                && ( mth<60) \
                && ( std_vector_jet_pt[0] >= 30 ) \
                && ( std_vector_jet_pt[1] < 30 ) \
                && ( std_vector_jet_pt[0] < 15 || std_vector_jet_csvv2ivf[0] < 0.605 ) \
                && ( std_vector_jet_pt[1] < 15 || std_vector_jet_csvv2ivf[1] < 0.605 ) \
                && ( std_vector_jet_pt[2] < 15 || std_vector_jet_csvv2ivf[2] < 0.605 ) \
                && ( std_vector_jet_pt[3] < 15 || std_vector_jet_csvv2ivf[3] < 0.605 ) \
                && ( std_vector_jet_pt[4] < 15 || std_vector_jet_csvv2ivf[4] < 0.605 ) \
                && ( std_vector_jet_pt[5] < 15 || std_vector_jet_csvv2ivf[5] < 0.605 ) \
                && ( std_vector_jet_pt[6] < 15 || std_vector_jet_csvv2ivf[6] < 0.605 ) \
                && ( std_vector_jet_pt[7] < 15 || std_vector_jet_csvv2ivf[7] < 0.605 ) \
                && ( std_vector_jet_pt[8] < 15 || std_vector_jet_csvv2ivf[8] < 0.605 ) \
                && ( std_vector_jet_pt[9] < 15 || std_vector_jet_csvv2ivf[9] < 0.605 ) \
                '



cuts['hww2l2v_13TeV_top_of0j']  = '(std_vector_lepton_flavour[0] * std_vector_lepton_flavour[1] == -11*13)    \
                && (abs(std_vector_lepton_flavour[1]) == 13 || std_vector_lepton_pt[1]>13) \
                && mll>50 \
                && ( std_vector_jet_pt[0] < 30 ) \
                && (   ( std_vector_jet_pt[0] > 15 && std_vector_jet_csvv2ivf[0] > 0.605 ) \
                    || ( std_vector_jet_pt[1] > 15 && std_vector_jet_csvv2ivf[1] > 0.605 ) \
                    || ( std_vector_jet_pt[2] > 15 && std_vector_jet_csvv2ivf[2] > 0.605 ) \
                    || ( std_vector_jet_pt[3] > 15 && std_vector_jet_csvv2ivf[3] > 0.605 ) \
                    || ( std_vector_jet_pt[4] > 15 && std_vector_jet_csvv2ivf[4] > 0.605 ) \
                    || ( std_vector_jet_pt[5] > 15 && std_vector_jet_csvv2ivf[5] > 0.605 ) \
                    || ( std_vector_jet_pt[6] > 15 && std_vector_jet_csvv2ivf[6] > 0.605 ) \
                    || ( std_vector_jet_pt[7] > 15 && std_vector_jet_csvv2ivf[7] > 0.605 ) \
                    || ( std_vector_jet_pt[8] > 15 && std_vector_jet_csvv2ivf[8] > 0.605 ) \
                    || ( std_vector_jet_pt[9] > 15 && std_vector_jet_csvv2ivf[9] > 0.605 ) \
                    ) \
                '

cuts['hww2l2v_13TeV_top_of1j']  = '(std_vector_lepton_flavour[0] * std_vector_lepton_flavour[1] == -11*13)    \
                && (abs(std_vector_lepton_flavour[1]) == 13 || std_vector_lepton_pt[1]>13) \
                && mll>50 \
                && ( std_vector_jet_pt[0] >= 30 ) \
                && ( std_vector_jet_pt[1] < 30 ) \
                && std_vector_jet_csvv2ivf[0]>0.605 \
                '





# 11 = e
# 13 = mu
# 15 = tau

