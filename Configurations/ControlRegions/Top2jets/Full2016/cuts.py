# cuts
supercut = 'mll>12  \
            && std_vector_lepton_pt[0]>20 && std_vector_lepton_pt[1]>10 \
            && std_vector_lepton_pt[2]<10 \
            && ( std_vector_jet_pt[0] >= 30 ) \
            && ( std_vector_jet_pt[1] >= 30 ) \
            && ( std_vector_jet_cmvav2[0]>-0.5884 || std_vector_jet_cmvav2[1]>-0.5884 ) \
           '

cuts['hww2l2v_13TeV_top_of2jggH']  = '(std_vector_lepton_flavour[0] * std_vector_lepton_flavour[1] == -11*13)    \
                && std_vector_lepton_pt[0] > 25 && std_vector_lepton_pt[1]>13 \
                && projtkmet > 35 \
                && mth > 60 \
                && (abs(detajj)) < 3.5 \
                '

cuts['hww2l2v_13TeV_top_eu2jggH']  = '(abs(std_vector_lepton_flavour[0]) == 11 && abs(std_vector_lepton_flavour[1]) == 13)    \
                && std_vector_lepton_pt[0] > 25 && std_vector_lepton_pt[1]>13 \
                && projtkmet > 35 \
                && mth > 60 \
                && (abs(detajj)) < 3.5 \
                '

cuts['hww2l2v_13TeV_top_ue2jggH']  = '(abs(std_vector_lepton_flavour[0]) == 13 && abs(std_vector_lepton_flavour[1]) == 11)    \
                && std_vector_lepton_pt[0] > 25 && std_vector_lepton_pt[1]>13 \
                && projtkmet > 35 \
                && mth > 60 \
                && (abs(detajj)) < 3.5 \
                '

cuts['hww2l2v_13TeV_top_of2jVBF']  = '(std_vector_lepton_flavour[0] * std_vector_lepton_flavour[1] == -11*13)    \
                && std_vector_lepton_pt[0] > 25 && std_vector_lepton_pt[1]>13 \
                && projtkmet > 30 \
                && mth > 60 \
                && mjj >= 400 && abs(detajj) >= 3.5  \
                '

cuts['hww2l2v_13TeV_top_eu2jVBF']  = '(abs(std_vector_lepton_flavour[0]) == 11 && abs(std_vector_lepton_flavour[1]) == 13)    \
                && std_vector_lepton_pt[0] > 25 && std_vector_lepton_pt[1]>13 \
                && projtkmet > 30 \
                && mth > 60 \
                && mjj >= 400 && abs(detajj) >= 3.5  \
                '

cuts['hww2l2v_13TeV_top_ue2jVBF']  = '(abs(std_vector_lepton_flavour[0]) == 13 && abs(std_vector_lepton_flavour[1]) == 11)    \
                && std_vector_lepton_pt[0] > 25 && std_vector_lepton_pt[1]>13 \
                && projtkmet > 30 \
                && mth > 60 \
                && mjj >= 400 && abs(detajj) >= 3.5  \
                '

cuts['hww2l2v_13TeV_top_sf2jggH']  = '((std_vector_lepton_flavour[0] * std_vector_lepton_flavour[1] == -11*11) || (std_vector_lepton_flavour[0] * std_vector_lepton_flavour[1] == -13*13))  \
                && (abs(std_vector_lepton_flavour[0]) == 13 || std_vector_lepton_pt[1]>25) \
                && (abs(std_vector_lepton_flavour[1]) == 13 || std_vector_lepton_pt[1]>13) \
                && fabs(91.1876 - mll) > 15  \
                && metTtrk > 20  \
                && (dymvaggh > 0.93) \
                && (abs(detajj)) < 3.5 \
                '

cuts['hww2l2v_13TeV_top_uu2jggH']  = '(std_vector_lepton_flavour[0] * std_vector_lepton_flavour[1] == -13*13)    \
                && fabs(91.1876 - mll) > 15  \
                && metTtrk > 20  \
                && (dymvaggh > 0.93) \
                && (abs(detajj)) < 3.5 \
                '

cuts['hww2l2v_13TeV_top_ee2jggH']  = '(std_vector_lepton_flavour[0] * std_vector_lepton_flavour[1] == -11*11)    \
                && std_vector_lepton_pt[0] > 25 && std_vector_lepton_pt[1]>13 \
                && fabs(91.1876 - mll) > 15  \
                && metTtrk > 20  \
                && (dymvaggh > 0.93) \
                && (abs(detajj)) < 3.5 \
                '

cuts['hww2l2v_13TeV_top_sf2jVBF']  = '((std_vector_lepton_flavour[0] * std_vector_lepton_flavour[1] == -11*11) || (std_vector_lepton_flavour[0] * std_vector_lepton_flavour[1] == -13*13))  \
                && (abs(std_vector_lepton_flavour[0]) == 13 || std_vector_lepton_pt[1]>25) \
                && (abs(std_vector_lepton_flavour[1]) == 13 || std_vector_lepton_pt[1]>13) \
                && fabs(91.1876 - mll) > 15  \
                && metTtrk > 20  \
                && (dymvavbf > 0.93) \
                && mjj >= 400 && abs(detajj) >= 3.5  \
                '

cuts['hww2l2v_13TeV_top_uu2jVBF']  = '(std_vector_lepton_flavour[0] * std_vector_lepton_flavour[1] == -13*13)    \
                && fabs(91.1876 - mll) > 15  \
                && metTtrk > 20  \
                && (dymvavbf > 0.93) \
                && mjj >= 400 && abs(detajj) >= 3.5  \
                '

cuts['hww2l2v_13TeV_top_ee2jVBF']  = '(std_vector_lepton_flavour[0] * std_vector_lepton_flavour[1] == -11*11)    \
                && std_vector_lepton_pt[0] > 25 && std_vector_lepton_pt[1]>13 \
                && fabs(91.1876 - mll) > 15  \
                && metTtrk > 20  \
                && (dymvavbf > 0.93) \
                && mjj >= 400 && abs(detajj) >= 3.5  \
                '

# SF NODYMVA
cuts['hww2l2v_13TeV_top_sf2jggH_NODYMVA']  = '((std_vector_lepton_flavour[0] * std_vector_lepton_flavour[1] == -11*11) || (std_vector_lepton_flavour[0] * std_vector_lepton_flavour[1] == -13*13))  \
                && (abs(std_vector_lepton_flavour[0]) == 13 || std_vector_lepton_pt[1]>25) \
                && (abs(std_vector_lepton_flavour[1]) == 13 || std_vector_lepton_pt[1]>13) \
                && fabs(91.1876 - mll) > 15  \
                && metTtrk > 20  \
                && PfMetDivSumMet > 2 \
                && metPuppi > 35 \
                && mth > 45 \
                && (abs(detajj)) < 3.5 \
                '

cuts['hww2l2v_13TeV_top_uu2jggH_NODYMVA']  = '(std_vector_lepton_flavour[0] * std_vector_lepton_flavour[1] == -13*13)    \
                && fabs(91.1876 - mll) > 15  \
                && metTtrk > 20  \
                && PfMetDivSumMet > 2 \
                && metPuppi > 35 \
                && mth > 45 \
                && (abs(detajj)) < 3.5 \
                '

cuts['hww2l2v_13TeV_top_ee2jggH_NODYMVA']  = '(std_vector_lepton_flavour[0] * std_vector_lepton_flavour[1] == -11*11)    \
                && std_vector_lepton_pt[0] > 25 && std_vector_lepton_pt[1]>13 \
                && fabs(91.1876 - mll) > 15  \
                && metTtrk > 20  \
                && PfMetDivSumMet > 2 \
                && metPuppi > 35 \
                && mth > 45 \
                && (abs(detajj)) < 3.5 \
                '

cuts['hww2l2v_13TeV_top_sf2jVBF_NODYMVA']  = '((std_vector_lepton_flavour[0] * std_vector_lepton_flavour[1] == -11*11) || (std_vector_lepton_flavour[0] * std_vector_lepton_flavour[1] == -13*13))  \
                && (abs(std_vector_lepton_flavour[0]) == 13 || std_vector_lepton_pt[1]>25) \
                && (abs(std_vector_lepton_flavour[1]) == 13 || std_vector_lepton_pt[1]>13) \
                && fabs(91.1876 - mll) > 15  \
                && metTtrk > 20  \
                && PfMetDivSumMet > 2 \
                && metPuppi > 35 \
                && mtw2 > 20  \
                && mjj >= 400 && abs(detajj) >= 3.5  \
                '

cuts['hww2l2v_13TeV_top_uu2jVBF_NODYMVA']  = '(std_vector_lepton_flavour[0] * std_vector_lepton_flavour[1] == -13*13)    \
                && fabs(91.1876 - mll) > 15  \
                && metTtrk > 20  \
                && PfMetDivSumMet > 2 \
                && metPuppi > 35 \
                && mtw2 > 20  \
                && mjj >= 400 && abs(detajj) >= 3.5  \
                '

cuts['hww2l2v_13TeV_top_ee2jVBF_NODYMVA']  = '(std_vector_lepton_flavour[0] * std_vector_lepton_flavour[1] == -11*11)    \
                && std_vector_lepton_pt[0] > 25 && std_vector_lepton_pt[1]>13 \
                && fabs(91.1876 - mll) > 15  \
                && metTtrk > 20  \
                && PfMetDivSumMet > 2 \
                && metPuppi > 35 \
                && mtw2 > 20  \
                && mjj >= 400 && abs(detajj) >= 3.5  \
                '
