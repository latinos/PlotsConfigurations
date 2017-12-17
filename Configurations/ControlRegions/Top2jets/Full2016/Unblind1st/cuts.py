# cuts
supercut = 'mll>12  \
            && std_vector_lepton_pt[0]>20 && std_vector_lepton_pt[1]>10 \
            && std_vector_lepton_pt[2]<10 \
            && ( std_vector_jet_pt[0] >= 30 ) \
            && ( std_vector_jet_pt[1] >= 30 ) \
            && ( std_vector_jet_cmvav2[0]>-0.5884 || std_vector_jet_cmvav2[1]>-0.5884 ) \
           '

#### OPPOSITE FLAVOUR

cutsOF = ' && metPfType1 > 20 \
           && ptll > 30 \
           && mth > 60 \
           && mll > 50 \
         '

cuts['hww2l2v_13TeV_top_of2j_nocuts']  = '(std_vector_lepton_flavour[0] * std_vector_lepton_flavour[1] == -11*13)    \
                && (abs(std_vector_lepton_flavour[1]) == 13 || std_vector_lepton_pt[1]>13) \
                ' + cutsOF

cuts['hww2l2v_13TeV_top_of2j']  = '(std_vector_lepton_flavour[0] * std_vector_lepton_flavour[1] == -11*13)    \
                && (abs(std_vector_lepton_flavour[1]) == 13 || std_vector_lepton_pt[1]>13) \
                && mtw2 > 30 \
                && (mjj<65 || (mjj > 105 && mjj<400)) \
                ' + cutsOF

cuts['hww2l2v_13TeV_top_of2j_vbf']  = '(std_vector_lepton_flavour[0] * std_vector_lepton_flavour[1] == -11*13)    \
                && (abs(std_vector_lepton_flavour[1]) == 13 || std_vector_lepton_pt[1]>13) \
                && (njet==2) \
                && (detajj>3.5 && mjj>400) \
                ' + cutsOF

cuts['hww2l2v_13TeV_top_of2j_vh2j']  = '(std_vector_lepton_flavour[0] * std_vector_lepton_flavour[1] == -11*13)    \
                && (abs(std_vector_lepton_flavour[1]) == 13 || std_vector_lepton_pt[1]>13) \
                && (detajj<3.5 && mjj<105 && mjj>65) \
                && (abs(std_vector_jet_eta[0])<2.5) && (abs(std_vector_jet_eta[1])<2.5) \
                ' + cutsOF


#cuts['hww2l2v_13TeV_top_eu2j']  = '(abs(std_vector_lepton_flavour[0]) == 11 && abs(std_vector_lepton_flavour[1]) == 13)    \
#                && std_vector_lepton_pt[0] > 25 && std_vector_lepton_pt[1]>13 \
#                ' + cutsOF
#
#cuts['hww2l2v_13TeV_top_ue2j']  = '(abs(std_vector_lepton_flavour[0]) == 13 && abs(std_vector_lepton_flavour[1]) == 11)    \
#                && std_vector_lepton_pt[0] > 25 && std_vector_lepton_pt[1]>13 \
#                ' + cutsOF
#
#
##### SAME FLAVOUR
#
#cutsSF = '   && fabs(91.1876 - mll) > 15  \
#             && metTtrk > 20  \
#             &&  ( ( ( abs(detajj) <  3.5 || mjj <  400 )  && dymvaggh > 0.93 )  || ( ( abs(detajj) >= 3.5 || mjj >= 400 ) && dymvavbf > 0.93 )  )  \
#         '
#
##cuts['hww2l2v_13TeV_top_sf2j']  = '((std_vector_lepton_flavour[0] * std_vector_lepton_flavour[1] == -11*11) || (std_vector_lepton_flavour[0] * std_vector_lepton_flavour[1] == -13*13))  \
##                && (abs(std_vector_lepton_flavour[0]) == 13 || std_vector_lepton_pt[1]>25) \
##                && (abs(std_vector_lepton_flavour[1]) == 13 || std_vector_lepton_pt[1]>13) \
##                ' + cutsSF
#
#cuts['hww2l2v_13TeV_top_uu2j']  = '(std_vector_lepton_flavour[0] * std_vector_lepton_flavour[1] == -13*13)    \
#                ' + cutsSF
#
#cuts['hww2l2v_13TeV_top_ee2j']  = '(std_vector_lepton_flavour[0] * std_vector_lepton_flavour[1] == -11*11)    \
#                && std_vector_lepton_pt[0] > 25 && std_vector_lepton_pt[1]>13 \
#                ' + cutsSF
#
