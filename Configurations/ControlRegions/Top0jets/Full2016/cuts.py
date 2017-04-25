# cuts
supercut = 'mll>12  \
            && std_vector_lepton_pt[0]>20 && std_vector_lepton_pt[1]>10 \
            && std_vector_lepton_pt[2]<10 \
            && ( std_vector_jet_pt[0] < 30 ) \
            && (   ( std_vector_jet_pt[0] > 20 && std_vector_jet_cmvav2[0] > -0.5884 ) \
                || ( std_vector_jet_pt[1] > 20 && std_vector_jet_cmvav2[1] > -0.5884 ) \
                || ( std_vector_jet_pt[2] > 20 && std_vector_jet_cmvav2[2] > -0.5884 ) \
                || ( std_vector_jet_pt[3] > 20 && std_vector_jet_cmvav2[3] > -0.5884 ) \
                || ( std_vector_jet_pt[4] > 20 && std_vector_jet_cmvav2[4] > -0.5884 ) \
                || ( std_vector_jet_pt[5] > 20 && std_vector_jet_cmvav2[5] > -0.5884 ) \
                || ( std_vector_jet_pt[6] > 20 && std_vector_jet_cmvav2[6] > -0.5884 ) \
                || ( std_vector_jet_pt[7] > 20 && std_vector_jet_cmvav2[7] > -0.5884 ) \
                || ( std_vector_jet_pt[8] > 20 && std_vector_jet_cmvav2[8] > -0.5884 ) \
                || ( std_vector_jet_pt[9] > 20 && std_vector_jet_cmvav2[9] > -0.5884 ) \
               ) \
           '

            #&& ptll > 30 \
            #&& mll>50 \
            #&& ( mtw2>30) \

#### OPPOSITE FLAVOUR

cutsOF = ' && metPfType1 > 20 \
           && ptll > 30 \
           && mth > 60 \
         '

cuts['hww2l2v_13TeV_top_of0j']  = '(std_vector_lepton_flavour[0] * std_vector_lepton_flavour[1] == -11*13)    \
                && std_vector_lepton_pt[0] > 25 && std_vector_lepton_pt[1]>13 \
                ' + cutsOF

cuts['hww2l2v_13TeV_top_eu0j']  = '(abs(std_vector_lepton_flavour[0]) == 11 && abs(std_vector_lepton_flavour[1]) == 13)    \
                && std_vector_lepton_pt[0] > 25 && std_vector_lepton_pt[1]>13 \
                ' + cutsOF

cuts['hww2l2v_13TeV_top_ue0j']  = '(abs(std_vector_lepton_flavour[0]) == 13 && abs(std_vector_lepton_flavour[1]) == 11)    \
                && std_vector_lepton_pt[0] > 25 && std_vector_lepton_pt[1]>13 \
                ' + cutsOF

#### SAME FLAVOUR

cutsSF = ' && metTtrk > 20 \
           && fabs(91.1876 - mll ) > 15 \
           && dymvaggh > 0.96 \
         '

cuts['hww2l2v_13TeV_top_sf0j']  = '((std_vector_lepton_flavour[0] * std_vector_lepton_flavour[1] == -11*11) || (std_vector_lepton_flavour[0] * std_vector_lepton_flavour[1] == -13*13))  \
                && (abs(std_vector_lepton_flavour[0]) == 13 || std_vector_lepton_pt[1]>25) \
                && (abs(std_vector_lepton_flavour[1]) == 13 || std_vector_lepton_pt[1]>13) \
                ' + cutsSF

cuts['hww2l2v_13TeV_top_uu0j']  = '(std_vector_lepton_flavour[0] * std_vector_lepton_flavour[1] == -13*13)    \
                ' + cutsSF

cuts['hww2l2v_13TeV_top_ee0j']  = '(std_vector_lepton_flavour[0] * std_vector_lepton_flavour[1] == -11*11)    \
                && std_vector_lepton_pt[0] > 25 && std_vector_lepton_pt[1]>13 \
                ' + cutsSF
