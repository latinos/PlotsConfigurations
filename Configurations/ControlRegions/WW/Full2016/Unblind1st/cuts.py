# cuts

#cuts = {}
  
supercut = 'mll>80  \
            && std_vector_lepton_pt[0]>20 && std_vector_lepton_pt[1]>10 \
            && std_vector_lepton_pt[2]<10 \
            && ( std_vector_jet_pt[0] < 20 || std_vector_jet_cmvav2[0] < -0.5884 ) \
            && ( std_vector_jet_pt[1] < 20 || std_vector_jet_cmvav2[1] < -0.5884 ) \
            && ( std_vector_jet_pt[2] < 20 || std_vector_jet_cmvav2[2] < -0.5884 ) \
            && ( std_vector_jet_pt[3] < 20 || std_vector_jet_cmvav2[3] < -0.5884 ) \
            && ( std_vector_jet_pt[4] < 20 || std_vector_jet_cmvav2[4] < -0.5884 ) \
            && ( std_vector_jet_pt[5] < 20 || std_vector_jet_cmvav2[5] < -0.5884 ) \
            && ( std_vector_jet_pt[6] < 20 || std_vector_jet_cmvav2[6] < -0.5884 ) \
            && ( std_vector_jet_pt[7] < 20 || std_vector_jet_cmvav2[7] < -0.5884 ) \
            && ( std_vector_jet_pt[8] < 20 || std_vector_jet_cmvav2[8] < -0.5884 ) \
            && ( std_vector_jet_pt[9] < 20 || std_vector_jet_cmvav2[9] < -0.5884 ) \
      '

#### OPPOSITE FLAVOUR

cutsOF= ' && metPfType1 > 20 \
          && ptll > 30 \
          && mth >= 60 \
          && mtw2 > 30 \
        '
               
#cuts['ww2l2v_13TeV_ww_of']  = '(std_vector_lepton_flavour[0] * std_vector_lepton_flavour[1] == -11*13)    \
#                               && std_vector_lepton_pt[0] > 25 && std_vector_lepton_pt[1]>13 \
#                              ' + cutsOF
               
cuts['ww2l2v_13TeV_ww_of0j']  = '(std_vector_lepton_flavour[0] * std_vector_lepton_flavour[1] == -11*13)    \
                                 && std_vector_lepton_pt[0] > 25 && std_vector_lepton_pt[1]>13 \
                                 && std_vector_jet_pt[0] < 30 \
                                ' + cutsOF

cuts['ww2l2v_13TeV_ww_of1j']  = '(std_vector_lepton_flavour[0] * std_vector_lepton_flavour[1] == -11*13)    \
                                 && std_vector_lepton_pt[0] > 25 && std_vector_lepton_pt[1]>13 \
                                 && std_vector_jet_pt[0] > 30 && std_vector_jet_pt[1] < 30 \
                                ' + cutsOF

cuts['ww2l2v_13TeV_ww_of2j']  = '(std_vector_lepton_flavour[0] * std_vector_lepton_flavour[1] == -11*13)    \
                                 && std_vector_lepton_pt[0] > 25 && std_vector_lepton_pt[1]>13 \
                                 && std_vector_jet_pt[0] > 30 && std_vector_jet_pt[1] > 30 \
                                ' + cutsOF

cuts['ww2l2v_13TeV_ww_of2j_ggh']  = '(std_vector_lepton_flavour[0] * std_vector_lepton_flavour[1] == -11*13)    \
                                 && std_vector_lepton_pt[0] > 25 && std_vector_lepton_pt[1]>13 \
                                 && std_vector_jet_pt[0] > 30 && std_vector_jet_pt[1] > 30 \
                                 && (mjj<65 || (mjj > 105 && mjj<400)) \
                                ' + cutsOF

cuts['ww2l2v_13TeV_ww_of2j_vbf']  = '(std_vector_lepton_flavour[0] * std_vector_lepton_flavour[1] == -11*13)    \
                                 && std_vector_lepton_pt[0] > 25 && std_vector_lepton_pt[1]>13 \
                                 && std_vector_jet_pt[0] > 30 && std_vector_jet_pt[1] > 30 \
                                 && (njet==2) \
                                 && (abs((std_vector_lepton_eta[0] - (jeteta1+jeteta2)/2)/detajj) < 0.5) \
                                 && (abs((std_vector_lepton_eta[1] - (jeteta1+jeteta2)/2)/detajj) < 0.5) \
                                 && (detajj>3.5 && mjj>400) \
                                ' + cutsOF

cuts['ww2l2v_13TeV_ww_of2j_vh2j']  = '(std_vector_lepton_flavour[0] * std_vector_lepton_flavour[1] == -11*13)    \
                                 && std_vector_lepton_pt[0] > 25 && std_vector_lepton_pt[1]>13 \
                                 && std_vector_jet_pt[0] > 30 && std_vector_jet_pt[1] > 30 \
                                 && (detajj<3.5 && mjj<105 && mjj>65) \
                                 && (abs(std_vector_jet_eta[0])<2.5) && (abs(std_vector_jet_eta[1])<2.5) \
                                ' + cutsOF



#cuts['ww2l2v_13TeV_ww_eu0j']  = '(abs(std_vector_lepton_flavour[0]) == 11 && abs(std_vector_lepton_flavour[1]) == 13) \
#                                 && std_vector_lepton_pt[0] > 25 && std_vector_lepton_pt[1]>13 \
#                                 && std_vector_jet_pt[0] < 30 \
#                                ' + cutsOF
#
#cuts['ww2l2v_13TeV_ww_eu1j']  = '(abs(std_vector_lepton_flavour[0]) == 11 && abs(std_vector_lepton_flavour[1]) == 13) \
#                                 && std_vector_lepton_pt[0] > 25 && std_vector_lepton_pt[1]>13 \
#                                 && std_vector_jet_pt[0] > 30 && std_vector_jet_pt[1] < 30 \
#                                ' + cutsOF
#
#cuts['ww2l2v_13TeV_ww_eu2j']  = '(abs(std_vector_lepton_flavour[0]) == 11 && abs(std_vector_lepton_flavour[1]) == 13) \
#                                 && std_vector_lepton_pt[0] > 25 && std_vector_lepton_pt[1]>13 \
#                                 && std_vector_jet_pt[0] > 30 && std_vector_jet_pt[1] > 30 \
#                                ' + cutsOF
#
#cuts['ww2l2v_13TeV_ww_ue0j']  = '(abs(std_vector_lepton_flavour[0]) == 13 && abs(std_vector_lepton_flavour[1]) == 11)    \
#                                 && std_vector_lepton_pt[0] > 25 && std_vector_lepton_pt[1]>13 \
#                                 && std_vector_jet_pt[0] < 30 \
#                                ' + cutsOF
#
#cuts['ww2l2v_13TeV_ww_ue1j']  = '(abs(std_vector_lepton_flavour[0]) == 13 && abs(std_vector_lepton_flavour[1]) == 11)    \
#                                 && std_vector_lepton_pt[0] > 25 && std_vector_lepton_pt[1]>13 \
#                                 && std_vector_jet_pt[0] > 30 && std_vector_jet_pt[1] < 30 \
#                                ' + cutsOF
#
#cuts['ww2l2v_13TeV_ww_ue2j']  = '(abs(std_vector_lepton_flavour[0]) == 13 && abs(std_vector_lepton_flavour[1]) == 11)    \
#                                 && std_vector_lepton_pt[0] > 25 && std_vector_lepton_pt[1]>13 \
#                                 && std_vector_jet_pt[0] > 30 && std_vector_jet_pt[1] > 30 \
#                                ' + cutsOF
##### SAME FLAVOUR
#
#cutsSF = '  && metTtrk > 20 \
#            && fabs(91.1876 - mll ) > 15 \
#            && (     ( ( std_vector_jet_pt[0] <  30                              ) && dymvaggh > 0.96 )  \
#                 ||  ( ( std_vector_jet_pt[0] >= 30 && std_vector_jet_pt[1] < 30 ) && dymvaggh > 0.95 )  \
#                 ||  ( ( std_vector_jet_pt[0] >= 30 && std_vector_jet_pt[1] >= 30 && ( abs(detajj) <  3.5 || mjj <  400 ) ) && dymvaggh > 0.93 ) \
#                 ||  ( ( std_vector_jet_pt[0] >= 30 && std_vector_jet_pt[1] >= 30 && ( abs(detajj) >= 3.5 || mjj >= 400 ) ) && dymvavbf > 0.93 ) \
#               ) \
#         ' 
#
#cuts['ww2l2v_13TeV_ww_sf']  = '((std_vector_lepton_flavour[0] * std_vector_lepton_flavour[1] == -11*11) || (std_vector_lepton_flavour[0] * std_vector_lepton_flavour[1] == -13*13))  \
#                               && (abs(std_vector_lepton_flavour[0]) == 13 || std_vector_lepton_pt[1]>25) \
#                               && (abs(std_vector_lepton_flavour[1]) == 13 || std_vector_lepton_pt[1]>13) \
#                              ' + cutsSF
#
#cuts['ww2l2v_13TeV_ww_sf0j']  = '((std_vector_lepton_flavour[0] * std_vector_lepton_flavour[1] == -11*11) || (std_vector_lepton_flavour[0] * std_vector_lepton_flavour[1] == -13*13))  \
#                                 && (abs(std_vector_lepton_flavour[0]) == 13 || std_vector_lepton_pt[1]>25) \
#                                 && (abs(std_vector_lepton_flavour[1]) == 13 || std_vector_lepton_pt[1]>13) \
#                                 && std_vector_jet_pt[0] < 30 \
#                                ' + cutsSF
#
#cuts['ww2l2v_13TeV_ww_sf1j']  = '((std_vector_lepton_flavour[0] * std_vector_lepton_flavour[1] == -11*11) || (std_vector_lepton_flavour[0] * std_vector_lepton_flavour[1] == -13*13))  \
#                                 && (abs(std_vector_lepton_flavour[0]) == 13 || std_vector_lepton_pt[1]>25) \
#                                 && (abs(std_vector_lepton_flavour[1]) == 13 || std_vector_lepton_pt[1]>13) \
#                                 && std_vector_jet_pt[0] > 30 && std_vector_jet_pt[1] < 30 \
#                                ' + cutsSF
#
#cuts['ww2l2v_13TeV_ww_sf2j']  = '((std_vector_lepton_flavour[0] * std_vector_lepton_flavour[1] == -11*11) || (std_vector_lepton_flavour[0] * std_vector_lepton_flavour[1] == -13*13))  \
#                                 && (abs(std_vector_lepton_flavour[0]) == 13 || std_vector_lepton_pt[1]>25) \
#                                 && (abs(std_vector_lepton_flavour[1]) == 13 || std_vector_lepton_pt[1]>13) \
#                                 && std_vector_jet_pt[0] > 30 && std_vector_jet_pt[1] > 30 \
#                                ' + cutsSF
#
#cuts['ww2l2v_13TeV_ww_ee']  = '(std_vector_lepton_flavour[0] * std_vector_lepton_flavour[1] == -11*11)    \
#                               && std_vector_lepton_pt[0] > 25 && std_vector_lepton_pt[1]>13 \
#                              ' + cutsSF
#
#cuts['ww2l2v_13TeV_ww_ee0j']  = '(std_vector_lepton_flavour[0] * std_vector_lepton_flavour[1] == -11*11)    \
#                                 && std_vector_lepton_pt[0] > 25 && std_vector_lepton_pt[1]>13 \
#                                 && std_vector_jet_pt[0] < 30 \
#                                ' + cutsSF
#
#cuts['ww2l2v_13TeV_ww_ee1j']  = '(std_vector_lepton_flavour[0] * std_vector_lepton_flavour[1] == -11*11)    \
#                                 && std_vector_lepton_pt[0] > 25 && std_vector_lepton_pt[1]>13 \
#                                 && std_vector_jet_pt[0] > 30 && std_vector_jet_pt[1] < 30 \
#                                ' + cutsSF
#
#cuts['ww2l2v_13TeV_ww_ee2j']  = '(std_vector_lepton_flavour[0] * std_vector_lepton_flavour[1] == -11*11)    \
#                                 && std_vector_lepton_pt[0] > 25 && std_vector_lepton_pt[1]>13 \
#                                 && std_vector_jet_pt[0] > 30 && std_vector_jet_pt[1] > 30 \
#                                ' + cutsSF
#
#cuts['ww2l2v_13TeV_ww_uu']  = '(std_vector_lepton_flavour[0] * std_vector_lepton_flavour[1] == -13*13)    \
#                              ' + cutsSF
#
#cuts['ww2l2v_13TeV_ww_uu0j']  = '(std_vector_lepton_flavour[0] * std_vector_lepton_flavour[1] == -13*13)    \
#                                 && std_vector_jet_pt[0] < 30 \
#                                ' + cutsSF
#
#cuts['ww2l2v_13TeV_ww_uu1j']  = '(std_vector_lepton_flavour[0] * std_vector_lepton_flavour[1] == -13*13)    \
#                                 && std_vector_jet_pt[0] > 30 && std_vector_jet_pt[1] < 30 \
#                                ' + cutsSF
#
#cuts['ww2l2v_13TeV_ww_uu2j']  = '(std_vector_lepton_flavour[0] * std_vector_lepton_flavour[1] == -13*13)    \
#                                 && std_vector_jet_pt[0] > 30 && std_vector_jet_pt[1] > 30 \
#                                ' + cutsSF


