# cuts
supercut = 'mll>12  \
            && std_vector_lepton_pt[0]>20 && std_vector_lepton_pt[1]>10 \
            && std_vector_lepton_pt[2]<10 \
            && ( std_vector_jet_pt[0] >= 30 ) \
            && ( std_vector_jet_pt[1] < 30 ) \
            && std_vector_jet_cmvav2[0]>-0.5884 \
           '

cuts['hww2l2v_13TeV_top_of1j']  = '(std_vector_lepton_flavour[0] * std_vector_lepton_flavour[1] == -11*13)    \
                && std_vector_lepton_pt[0] > 25 && std_vector_lepton_pt[1]>13 \
                && projtkmet > 35 \
                && mth > 60 \
                '

cuts['hww2l2v_13TeV_top_eu1j']  = '(abs(std_vector_lepton_flavour[0]) == 11 && abs(std_vector_lepton_flavour[1]) == 13)    \
                && std_vector_lepton_pt[0] > 25 && std_vector_lepton_pt[1]>13 \
                && projtkmet > 35 \
                && mth > 60 \
                '

cuts['hww2l2v_13TeV_top_ue1j']  = '(abs(std_vector_lepton_flavour[0]) == 13 && abs(std_vector_lepton_flavour[1]) == 11)    \
                && std_vector_lepton_pt[0] > 25 && std_vector_lepton_pt[1]>13 \
                && projtkmet > 35 \
                && mth > 60 \
                '

cuts['hww2l2v_13TeV_top_sf1j']  = '((std_vector_lepton_flavour[0] * std_vector_lepton_flavour[1] == -11*11) || (std_vector_lepton_flavour[0] * std_vector_lepton_flavour[1] == -13*13))  \
                && (abs(std_vector_lepton_flavour[0]) == 13 || std_vector_lepton_pt[1]>25) \
                && (abs(std_vector_lepton_flavour[1]) == 13 || std_vector_lepton_pt[1]>13) \
                && fabs(91.1876 - mll) > 15  \
                && metTtrk > 20  \
                && (dymvaggh > 0.95) \
                '

cuts['hww2l2v_13TeV_top_uu1j']  = '(std_vector_lepton_flavour[0] * std_vector_lepton_flavour[1] == -13*13)    \
                && fabs(91.1876 - mll) > 15  \
                && metTtrk > 20  \
                && (dymvaggh > 0.95) \
                '

cuts['hww2l2v_13TeV_top_ee1j']  = '(std_vector_lepton_flavour[0] * std_vector_lepton_flavour[1] == -11*11)    \
                && std_vector_lepton_pt[0] > 25 && std_vector_lepton_pt[1]>13 \
                && fabs(91.1876 - mll) > 15  \
                && metTtrk > 20  \
                && (dymvaggh > 0.95) \
                '

# SF NODYMVA
cuts['hww2l2v_13TeV_top_sf1j_NODYMVA']  = '((std_vector_lepton_flavour[0] * std_vector_lepton_flavour[1] == -11*11) || (std_vector_lepton_flavour[0] * std_vector_lepton_flavour[1] == -13*13))  \
                && (abs(std_vector_lepton_flavour[0]) == 13 || std_vector_lepton_pt[1]>25) \
                && (abs(std_vector_lepton_flavour[1]) == 13 || std_vector_lepton_pt[1]>13) \
                && fabs(91.1876 - mll) > 15  \
                && metTtrk > 20  \
                && PfMetDivSumMet > 2 \
                && metPuppi > 35 \
                && dphilljet_cut < 2.7 \
                && dphijet1met_cut > 0.9 \
                '

cuts['hww2l2v_13TeV_top_uu1j_NODYMVA']  = '(std_vector_lepton_flavour[0] * std_vector_lepton_flavour[1] == -13*13)    \
                && fabs(91.1876 - mll) > 15  \
                && metTtrk > 20  \
                && PfMetDivSumMet > 2 \
                && metPuppi > 35 \
                && dphilljet_cut < 2.7 \
                && dphijet1met_cut > 0.9 \
                '

cuts['hww2l2v_13TeV_top_ee1j_NODYMVA']  = '(std_vector_lepton_flavour[0] * std_vector_lepton_flavour[1] == -11*11)    \
                && std_vector_lepton_pt[0] > 25 && std_vector_lepton_pt[1]>13 \
                && fabs(91.1876 - mll) > 15  \
                && metTtrk > 20  \
                && PfMetDivSumMet > 2 \
                && metPuppi > 35 \
                && dphilljet_cut < 2.7 \
                && dphijet1met_cut > 0.9 \
                '
