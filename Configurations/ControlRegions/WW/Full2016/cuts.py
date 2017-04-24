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

               
cuts['ww2l2v_13TeV_ww_of']  = '(std_vector_lepton_flavour[0] * std_vector_lepton_flavour[1] == -11*13)    \
                                 && std_vector_lepton_pt[0] > 25 && std_vector_lepton_pt[1]>13 \
                                 && mth > 60 \
                                 && ((std_vector_jet_pt[0] < 30 && projtkmet > 35) || (std_vector_jet_pt[0] > 30 && std_vector_jet_pt[1] < 30 && projtkmet > 35) || (std_vector_jet_pt[0] > 30 && std_vector_jet_pt[1] > 30 && ((abs(detajj) < 3.5 && projtkmet > 35) || (mjj >= 400 && abs(detajj) >= 3.5 && projtkmet > 30)) ) ) \
                              '
               
cuts['ww2l2v_13TeV_ww_of0j']  = '(std_vector_lepton_flavour[0] * std_vector_lepton_flavour[1] == -11*13)    \
                                 && std_vector_lepton_pt[0] > 25 && std_vector_lepton_pt[1]>13 \
                                 && std_vector_jet_pt[0] < 30 \
                                 && projtkmet > 35 \
                                 && mth > 60 \
                                '

cuts['ww2l2v_13TeV_ww_of1j']  = '(std_vector_lepton_flavour[0] * std_vector_lepton_flavour[1] == -11*13)    \
                                 && std_vector_lepton_pt[0] > 25 && std_vector_lepton_pt[1]>13 \
                                 && std_vector_jet_pt[0] > 30 && std_vector_jet_pt[1] < 30 \
                                 && projtkmet > 35 \
                                 && mth > 60 \
                                '

cuts['ww2l2v_13TeV_ww_of2jggH']  = '(std_vector_lepton_flavour[0] * std_vector_lepton_flavour[1] == -11*13)    \
                                 && std_vector_lepton_pt[0] > 25 && std_vector_lepton_pt[1]>13 \
                                 && std_vector_jet_pt[0] > 30 && std_vector_jet_pt[1] > 30 \
                                 && projtkmet > 35 \
                                 && mth > 60 \
                                 && (abs(detajj)) < 3.5 \
                                '

cuts['ww2l2v_13TeV_ww_of2jVBF']  = '(std_vector_lepton_flavour[0] * std_vector_lepton_flavour[1] == -11*13)    \
                                 && std_vector_lepton_pt[0] > 25 && std_vector_lepton_pt[1]>13 \
                                 && std_vector_jet_pt[0] > 30 && std_vector_jet_pt[1] > 30 \
                                 && projtkmet > 30 \
                                 && mth > 60 \
                                 && mjj >= 400 && abs(detajj) >= 3.5  \
                                '

cuts['ww2l2v_13TeV_ww_eu0j']  = '(abs(std_vector_lepton_flavour[0]) == 11 && abs(std_vector_lepton_flavour[1]) == 13) \
                                 && std_vector_lepton_pt[0] > 25 && std_vector_lepton_pt[1]>13 \
                                 && std_vector_jet_pt[0] < 30 \
                                 && projtkmet > 35 \
                                 && mth > 60 \
                                '

cuts['ww2l2v_13TeV_ww_eu1j']  = '(abs(std_vector_lepton_flavour[0]) == 11 && abs(std_vector_lepton_flavour[1]) == 13) \
                                 && std_vector_lepton_pt[0] > 25 && std_vector_lepton_pt[1]>13 \
                                 && std_vector_jet_pt[0] > 30 && std_vector_jet_pt[1] < 30 \
                                 && projtkmet > 35 \
                                 && mth > 60 \
                                '

cuts['ww2l2v_13TeV_ww_eu2jggH']  = '(abs(std_vector_lepton_flavour[0]) == 11 && abs(std_vector_lepton_flavour[1]) == 13) \
                                 && std_vector_lepton_pt[0] > 25 && std_vector_lepton_pt[1]>13 \
                                 && std_vector_jet_pt[0] > 30 && std_vector_jet_pt[1] > 30 \
                                 && projtkmet > 35 \
                                 && mth > 60 \
                                 && (abs(detajj)) < 3.5 \
                                '

cuts['ww2l2v_13TeV_ww_eu2jVBF']  = '(abs(std_vector_lepton_flavour[0]) == 11 && abs(std_vector_lepton_flavour[1]) == 13) \
                                 && std_vector_lepton_pt[0] > 25 && std_vector_lepton_pt[1]>13 \
                                 && std_vector_jet_pt[0] > 30 && std_vector_jet_pt[1] > 30 \
                                 && projtkmet > 30 \
                                 && mth > 60 \
                                 && mjj >= 400 && abs(detajj) >= 3.5  \
                                '

cuts['ww2l2v_13TeV_ww_ue0j']  = '(abs(std_vector_lepton_flavour[0]) == 13 && abs(std_vector_lepton_flavour[1]) == 11)    \
                                 && std_vector_lepton_pt[0] > 25 && std_vector_lepton_pt[1]>13 \
                                 && std_vector_jet_pt[0] < 30 \
                                 && projtkmet > 35 \
                                 && mth > 60 \
                                '

cuts['ww2l2v_13TeV_ww_ue1j']  = '(abs(std_vector_lepton_flavour[0]) == 13 && abs(std_vector_lepton_flavour[1]) == 11)    \
                                 && std_vector_lepton_pt[0] > 25 && std_vector_lepton_pt[1]>13 \
                                 && std_vector_jet_pt[0] > 30 && std_vector_jet_pt[1] < 30 \
                                 && projtkmet > 35 \
                                 && mth > 60 \
                                '

cuts['ww2l2v_13TeV_ww_ue2jggH']  = '(abs(std_vector_lepton_flavour[0]) == 13 && abs(std_vector_lepton_flavour[1]) == 11)    \
                                 && std_vector_lepton_pt[0] > 25 && std_vector_lepton_pt[1]>13 \
                                 && std_vector_jet_pt[0] > 30 && std_vector_jet_pt[1] > 30 \
                                 && projtkmet > 35 \
                                 && mth > 60 \
                                 && (abs(detajj)) < 3.5 \
                                '

cuts['ww2l2v_13TeV_ww_ue2jVBF']  = '(abs(std_vector_lepton_flavour[0]) == 13 && abs(std_vector_lepton_flavour[1]) == 11)    \
                                 && std_vector_lepton_pt[0] > 25 && std_vector_lepton_pt[1]>13 \
                                 && std_vector_jet_pt[0] > 30 && std_vector_jet_pt[1] > 30 \
                                 && projtkmet > 30 \
                                 && mth > 60 \
                                 && mjj >= 400 && abs(detajj) >= 3.5  \
                                '
#### SAME FLAVOUR

cuts['ww2l2v_13TeV_ww_sf']  = '((std_vector_lepton_flavour[0] * std_vector_lepton_flavour[1] == -11*11) || (std_vector_lepton_flavour[0] * std_vector_lepton_flavour[1] == -13*13))  \
                                 && (abs(std_vector_lepton_flavour[0]) == 13 || std_vector_lepton_pt[1]>25) \
                                 && (abs(std_vector_lepton_flavour[1]) == 13 || std_vector_lepton_pt[1]>13) \
                                 && fabs(91.1876 - mll) > 15  \
                                 && metTtrk > 20  \
                                 && ((std_vector_jet_pt[0] < 30 && dymvaggh > 0.96) || (std_vector_jet_pt[0] > 30 && std_vector_jet_pt[1] < 30 && dymvaggh > 0.95) || (std_vector_jet_pt[0] > 30 && std_vector_jet_pt[1] > 30 && ((dymvaggh > 0.93 && abs(detajj) < 3.5) || (dymvavbf > 0.93 && mjj >= 400 && abs(detajj) >= 3.5)) ) ) \
                              '

cuts['ww2l2v_13TeV_ww_sf0j']  = '((std_vector_lepton_flavour[0] * std_vector_lepton_flavour[1] == -11*11) || (std_vector_lepton_flavour[0] * std_vector_lepton_flavour[1] == -13*13))  \
                                 && (abs(std_vector_lepton_flavour[0]) == 13 || std_vector_lepton_pt[1]>25) \
                                 && (abs(std_vector_lepton_flavour[1]) == 13 || std_vector_lepton_pt[1]>13) \
                                 && std_vector_jet_pt[0] < 30 \
                                 && fabs(91.1876 - mll) > 15  \
                                 && metTtrk > 20  \
                                 && dymvaggh > 0.96 \
                                '

cuts['ww2l2v_13TeV_ww_sf1j']  = '((std_vector_lepton_flavour[0] * std_vector_lepton_flavour[1] == -11*11) || (std_vector_lepton_flavour[0] * std_vector_lepton_flavour[1] == -13*13))  \
                                 && (abs(std_vector_lepton_flavour[0]) == 13 || std_vector_lepton_pt[1]>25) \
                                 && (abs(std_vector_lepton_flavour[1]) == 13 || std_vector_lepton_pt[1]>13) \
                                 && std_vector_jet_pt[0] > 30 && std_vector_jet_pt[1] < 30 \
                                 && fabs(91.1876 - mll) > 15  \
                                 && metTtrk > 20  \
                                 && dymvaggh > 0.95 \
                                '

cuts['ww2l2v_13TeV_ww_sf2jggH']  = '((std_vector_lepton_flavour[0] * std_vector_lepton_flavour[1] == -11*11) || (std_vector_lepton_flavour[0] * std_vector_lepton_flavour[1] == -13*13))  \
                                 && (abs(std_vector_lepton_flavour[0]) == 13 || std_vector_lepton_pt[1]>25) \
                                 && (abs(std_vector_lepton_flavour[1]) == 13 || std_vector_lepton_pt[1]>13) \
                                 && std_vector_jet_pt[0] > 30 && std_vector_jet_pt[1] > 30 \
                                 && fabs(91.1876 - mll) > 15  \
                                 && metTtrk > 20  \
                                 && dymvaggh > 0.93 \
                                 && (abs(detajj) < 3.5 \
                                '

cuts['ww2l2v_13TeV_ww_sf2jVBF']  = '((std_vector_lepton_flavour[0] * std_vector_lepton_flavour[1] == -11*11) || (std_vector_lepton_flavour[0] * std_vector_lepton_flavour[1] == -13*13))  \
                                 && (abs(std_vector_lepton_flavour[0]) == 13 || std_vector_lepton_pt[1]>25) \
                                 && (abs(std_vector_lepton_flavour[1]) == 13 || std_vector_lepton_pt[1]>13) \
                                 && std_vector_jet_pt[0] > 30 && std_vector_jet_pt[1] > 30 \
                                 && fabs(91.1876 - mll) > 15  \
                                 && metTtrk > 20  \
                                 && dymvavbf > 0.93 \
                                 && mjj >= 400 && abs(detajj) >= 3.5  \
                                '

cuts['ww2l2v_13TeV_ww_ee']  = '(std_vector_lepton_flavour[0] * std_vector_lepton_flavour[1] == -11*11)    \
                                 && std_vector_lepton_pt[0] > 25 && std_vector_lepton_pt[1]>13 \
                                 && fabs(91.1876 - mll) > 15  \
                                 && metTtrk > 20  \
                                 && ((std_vector_jet_pt[0] < 30 && dymvaggh > 0.96) || (std_vector_jet_pt[0] > 30 && std_vector_jet_pt[1] < 30 && dymvaggh > 0.95) || (std_vector_jet_pt[0] > 30 && std_vector_jet_pt[1] > 30 && ((dymvaggh > 0.93 && abs(detajj) < 3.5) || (dymvavbf > 0.93 && mjj >= 400 && abs(detajj) >= 3.5)) ) ) \
                              '

cuts['ww2l2v_13TeV_ww_ee0j']  = '(std_vector_lepton_flavour[0] * std_vector_lepton_flavour[1] == -11*11)    \
                                 && std_vector_lepton_pt[0] > 25 && std_vector_lepton_pt[1]>13 \
                                 && std_vector_jet_pt[0] < 30 \
                                 && fabs(91.1876 - mll) > 15  \
                                 && metTtrk > 20  \
                                 && dymvaggh > 0.96 \
                                '

cuts['ww2l2v_13TeV_ww_ee1j']  = '(std_vector_lepton_flavour[0] * std_vector_lepton_flavour[1] == -11*11)    \
                                 && std_vector_lepton_pt[0] > 25 && std_vector_lepton_pt[1]>13 \
                                 && std_vector_jet_pt[0] > 30 && std_vector_jet_pt[1] < 30 \
                                 && fabs(91.1876 - mll) > 15  \
                                 && metTtrk > 20  \
                                 && dymvaggh > 0.95 \
                                '

cuts['ww2l2v_13TeV_ww_ee2jggH']  = '(std_vector_lepton_flavour[0] * std_vector_lepton_flavour[1] == -11*11)    \
                                 && std_vector_lepton_pt[0] > 25 && std_vector_lepton_pt[1]>13 \
                                 && std_vector_jet_pt[0] > 30 && std_vector_jet_pt[1] > 30 \
                                 && fabs(91.1876 - mll) > 15  \
                                 && metTtrk > 20  \
                                 && dymvaggh > 0.93 \
                                 && (abs(detajj) < 3.5 \
                                '

cuts['ww2l2v_13TeV_ww_ee2jVBF']  = '(std_vector_lepton_flavour[0] * std_vector_lepton_flavour[1] == -11*11)    \
                                 && std_vector_lepton_pt[0] > 25 && std_vector_lepton_pt[1]>13 \
                                 && std_vector_jet_pt[0] > 30 && std_vector_jet_pt[1] > 30 \
                                 && fabs(91.1876 - mll) > 15  \
                                 && metTtrk > 20  \
                                 && dymvavbf > 0.93 \
                                 && mjj >= 400 && abs(detajj) >= 3.5  \
                                '

cuts['ww2l2v_13TeV_ww_uu']  = '(std_vector_lepton_flavour[0] * std_vector_lepton_flavour[1] == -13*13)    \
                                 && fabs(91.1876 - mll) > 15  \
                                 && metTtrk > 20  \
                                 && ((std_vector_jet_pt[0] < 30 && dymvaggh > 0.96) || (std_vector_jet_pt[0] > 30 && std_vector_jet_pt[1] < 30 && dymvaggh > 0.95) || (std_vector_jet_pt[0] > 30 && std_vector_jet_pt[1] > 30 && ((dymvaggh > 0.93 && abs(detajj) < 3.5) || (dymvavbf > 0.93 && mjj >= 400 && abs(detajj) >= 3.5)) ) ) \
                              '

cuts['ww2l2v_13TeV_ww_uu0j']  = '(std_vector_lepton_flavour[0] * std_vector_lepton_flavour[1] == -13*13)    \
                                 && std_vector_jet_pt[0] < 30 \
                                 && fabs(91.1876 - mll) > 15  \
                                 && metTtrk > 20  \
                                 && dymvaggh > 0.96 \
                                '

cuts['ww2l2v_13TeV_ww_uu1j']  = '(std_vector_lepton_flavour[0] * std_vector_lepton_flavour[1] == -13*13)    \
                                 && std_vector_jet_pt[0] > 30 && std_vector_jet_pt[1] < 30 \
                                 && fabs(91.1876 - mll) > 15  \
                                 && metTtrk > 20  \
                                 && dymvaggh > 0.95 \
                                '

cuts['ww2l2v_13TeV_ww_uu2jggH']  = '(std_vector_lepton_flavour[0] * std_vector_lepton_flavour[1] == -13*13)    \
                                 && std_vector_jet_pt[0] > 30 && std_vector_jet_pt[1] > 30 \
                                 && fabs(91.1876 - mll) > 15  \
                                 && metTtrk > 20  \
                                 && dymvaggh > 0.93 \
                                 && (abs(detajj) < 3.5 \
                                '

cuts['ww2l2v_13TeV_ww_uu2jVBF']  = '(std_vector_lepton_flavour[0] * std_vector_lepton_flavour[1] == -13*13)    \
                                 && std_vector_jet_pt[0] > 30 && std_vector_jet_pt[1] > 30 \
                                 && fabs(91.1876 - mll) > 15  \
                                 && metTtrk > 20  \
                                 && dymvavbf > 0.93 \
                                 && mjj >= 400 && abs(detajj) >= 3.5  \
                                '

#### SAME FLAVOUR NODYMVA

cuts['ww2l2v_13TeV_ww_sf_NODYMVA']  = '((std_vector_lepton_flavour[0] * std_vector_lepton_flavour[1] == -11*11) || (std_vector_lepton_flavour[0] * std_vector_lepton_flavour[1] == -13*13))  \
                                 && (abs(std_vector_lepton_flavour[0]) == 13 || std_vector_lepton_pt[1]>25) \
                                 && (abs(std_vector_lepton_flavour[1]) == 13 || std_vector_lepton_pt[1]>13) \
                                 && fabs(91.1876 - mll) > 15  \
                                 && metTtrk > 20  \
                                 && ((std_vector_jet_pt[0] < 30 && dphilljet_cut < 3.0 && mth > 75) || (std_vector_jet_pt[0] > 30 && std_vector_jet_pt[1] < 30 && dphilljet_cut < 2.7 && dphijet1met_cut > 0.9) || (std_vector_jet_pt[0] > 30 && std_vector_jet_pt[1] > 30 && ((abs(detajj) < 3.5 && mth > 45) || (mjj >= 400 && abs(detajj) >= 3.5 && mtw2 > 20)) ) ) \
                              '

cuts['ww2l2v_13TeV_ww_sf0j_NODYMVA']  = '((std_vector_lepton_flavour[0] * std_vector_lepton_flavour[1] == -11*11) || (std_vector_lepton_flavour[0] * std_vector_lepton_flavour[1] == -13*13))  \
                                 && (abs(std_vector_lepton_flavour[0]) == 13 || std_vector_lepton_pt[1]>25) \
                                 && (abs(std_vector_lepton_flavour[1]) == 13 || std_vector_lepton_pt[1]>13) \
                                 && std_vector_jet_pt[0] < 30 \
                                 && fabs(91.1876 - mll) > 15  \
                                 && metTtrk > 20  \
                                 && PfMetDivSumMet > 2 \
                                 && metPuppi > 35 \
                                 && dphilljet_cut < 3.0 \
                                 && mth > 75 \
                                '

cuts['ww2l2v_13TeV_ww_sf1j_NODYMVA']  = '((std_vector_lepton_flavour[0] * std_vector_lepton_flavour[1] == -11*11) || (std_vector_lepton_flavour[0] * std_vector_lepton_flavour[1] == -13*13))  \
                                 && (abs(std_vector_lepton_flavour[0]) == 13 || std_vector_lepton_pt[1]>25) \
                                 && (abs(std_vector_lepton_flavour[1]) == 13 || std_vector_lepton_pt[1]>13) \
                                 && std_vector_jet_pt[0] > 30 && std_vector_jet_pt[1] < 30 \
                                 && fabs(91.1876 - mll) > 15  \
                                 && metTtrk > 20  \
                                 && PfMetDivSumMet > 2 \
                                 && metPuppi > 35 \
                                 && dphilljet_cut < 2.7 \
                                 && dphijet1met_cut > 0.9 \
                                '

cuts['ww2l2v_13TeV_ww_sf2jggH_NODYMVA']  = '((std_vector_lepton_flavour[0] * std_vector_lepton_flavour[1] == -11*11) || (std_vector_lepton_flavour[0] * std_vector_lepton_flavour[1] == -13*13))  \
                                 && (abs(std_vector_lepton_flavour[0]) == 13 || std_vector_lepton_pt[1]>25) \
                                 && (abs(std_vector_lepton_flavour[1]) == 13 || std_vector_lepton_pt[1]>13) \
                                 && std_vector_jet_pt[0] > 30 && std_vector_jet_pt[1] > 30 \
                                 && fabs(91.1876 - mll) > 15  \
                                 && metTtrk > 20  \
                                 && PfMetDivSumMet > 2 \
                                 && metPuppi > 35 \
                                 && mth > 45 \
                                 && (abs(detajj) < 3.5 \
                                '

cuts['ww2l2v_13TeV_ww_sf2jVBF_NODYMVA']  = '((std_vector_lepton_flavour[0] * std_vector_lepton_flavour[1] == -11*11) || (std_vector_lepton_flavour[0] * std_vector_lepton_flavour[1] == -13*13))  \
                                 && (abs(std_vector_lepton_flavour[0]) == 13 || std_vector_lepton_pt[1]>25) \
                                 && (abs(std_vector_lepton_flavour[1]) == 13 || std_vector_lepton_pt[1]>13) \
                                 && std_vector_jet_pt[0] > 30 && std_vector_jet_pt[1] > 30 \
                                 && fabs(91.1876 - mll) > 15  \
                                 && metTtrk > 20  \
                                 && PfMetDivSumMet > 2 \
                                 && metPuppi > 35 \
                                 && mtw2 > 20  \
                                 && mjj >= 400 && abs(detajj) >= 3.5  \
                                '

cuts['ww2l2v_13TeV_ww_ee_NODYMVA']  = '(std_vector_lepton_flavour[0] * std_vector_lepton_flavour[1] == -11*11)    \
                                 && std_vector_lepton_pt[0] > 25 && std_vector_lepton_pt[1]>13 \
                                 && fabs(91.1876 - mll) > 15  \
                                 && metTtrk > 20  \
                                 && ((std_vector_jet_pt[0] < 30 && dphilljet_cut < 3.0 && mth > 75) || (std_vector_jet_pt[0] > 30 && std_vector_jet_pt[1] < 30 && dphilljet_cut < 2.7 && dphijet1met_cut > 0.9) || (std_vector_jet_pt[0] > 30 && std_vector_jet_pt[1] > 30 && ((abs(detajj) < 3.5 && mth > 45) || (mjj >= 400 && abs(detajj) >= 3.5 && mtw2 > 20)) ) ) \
                              '

cuts['ww2l2v_13TeV_ww_ee0j_NODYMVA']  = '(std_vector_lepton_flavour[0] * std_vector_lepton_flavour[1] == -11*11)    \
                                 && std_vector_lepton_pt[0] > 25 && std_vector_lepton_pt[1]>13 \
                                 && std_vector_jet_pt[0] < 30 \
                                 && fabs(91.1876 - mll) > 15  \
                                 && metTtrk > 20  \
                                 && PfMetDivSumMet > 2 \
                                 && metPuppi > 35 \
                                 && dphilljet_cut < 3.0 \
                                 && mth > 75 \
                                '

cuts['ww2l2v_13TeV_ww_ee1j_NODYMVA']  = '(std_vector_lepton_flavour[0] * std_vector_lepton_flavour[1] == -11*11)    \
                                 && std_vector_lepton_pt[0] > 25 && std_vector_lepton_pt[1]>13 \
                                 && std_vector_jet_pt[0] > 30 && std_vector_jet_pt[1] < 30 \
                                 && fabs(91.1876 - mll) > 15  \
                                 && metTtrk > 20  \
                                 && PfMetDivSumMet > 2 \
                                 && metPuppi > 35 \
                                 && dphilljet_cut < 2.7 \
                                 && dphijet1met_cut > 0.9 \
                                '
 
cuts['ww2l2v_13TeV_ww_ee2jggH_NODYMVA']  = '(std_vector_lepton_flavour[0] * std_vector_lepton_flavour[1] == -11*11)    \
                                 && std_vector_lepton_pt[0] > 25 && std_vector_lepton_pt[1]>13 \
                                 && std_vector_jet_pt[0] > 30 && std_vector_jet_pt[1] > 30 \
                                 && fabs(91.1876 - mll) > 15  \
                                 && metTtrk > 20  \
                                 && PfMetDivSumMet > 2 \
                                 && metPuppi > 35 \
                                 && mth > 45 \
                                 && (abs(detajj) < 3.5 \
                                '
 
cuts['ww2l2v_13TeV_ww_ee2jVBF_NODYMVA']  = '(std_vector_lepton_flavour[0] * std_vector_lepton_flavour[1] == -11*11)    \
                                 && std_vector_lepton_pt[0] > 25 && std_vector_lepton_pt[1]>13 \
                                 && std_vector_jet_pt[0] > 30 && std_vector_jet_pt[1] > 30 \
                                 && fabs(91.1876 - mll) > 15  \
                                 && metTtrk > 20  \
                                 && PfMetDivSumMet > 2 \
                                 && metPuppi > 35 \
                                 && mtw2 > 20  \
                                 && mjj >= 400 && abs(detajj) >= 3.5  \
                                '

cuts['ww2l2v_13TeV_ww_uu_NODYMVA']  = '(std_vector_lepton_flavour[0] * std_vector_lepton_flavour[1] == -13*13)    \
                                 && fabs(91.1876 - mll) > 15  \
                                 && metTtrk > 20  \
                                 && PfMetDivSumMet > 2 \
                                 && metPuppi > 35 \
                                 && ((std_vector_jet_pt[0] < 30 && dphilljet_cut < 3.0 && mth > 75) || (std_vector_jet_pt[0] > 30 && std_vector_jet_pt[1] < 30 && dphilljet_cut < 2.7 && dphijet1met_cut > 0.9) || (std_vector_jet_pt[0] > 30 && std_vector_jet_pt[1] > 30 && ((abs(detajj) < 3.5 && mth > 45) || (mjj >= 400 && abs(detajj) >= 3.5 && mtw2 > 20)) ) ) \
                              '
 
cuts['ww2l2v_13TeV_ww_uu0j_NODYMVA']  = '(std_vector_lepton_flavour[0] * std_vector_lepton_flavour[1] == -13*13)    \
                                 && std_vector_jet_pt[0] < 30 \
                                 && fabs(91.1876 - mll) > 15  \
                                 && metTtrk > 20  \
                                 && PfMetDivSumMet > 2 \
                                 && metPuppi > 35 \
                                 && dphilljet_cut < 3.0 \
                                 && mth > 75 \
                                '
 
cuts['ww2l2v_13TeV_ww_uu1j_NODYMVA']  = '(std_vector_lepton_flavour[0] * std_vector_lepton_flavour[1] == -13*13)    \
                                 && std_vector_jet_pt[0] > 30 && std_vector_jet_pt[1] < 30 \
                                 && fabs(91.1876 - mll) > 15  \
                                 && metTtrk > 20  \
                                 && PfMetDivSumMet > 2 \
                                 && metPuppi > 35 \
                                 && dphilljet_cut < 2.7 \
                                 && dphijet1met_cut > 0.9 \
                                '
 
cuts['ww2l2v_13TeV_ww_uu2jggH_NODYMVA']  = '(std_vector_lepton_flavour[0] * std_vector_lepton_flavour[1] == -13*13)    \
                                 && std_vector_jet_pt[0] > 30 && std_vector_jet_pt[1] > 30 \
                                 && fabs(91.1876 - mll) > 15  \
                                 && metTtrk > 20  \
                                 && PfMetDivSumMet > 2 \
                                 && metPuppi > 35 \
                                 && mth > 45 \
                                 && (abs(detajj) < 3.5 \
                                '
 
cuts['ww2l2v_13TeV_ww_uu2jVBF_NODYMVA']  = '(std_vector_lepton_flavour[0] * std_vector_lepton_flavour[1] == -13*13)    \
                                 && std_vector_jet_pt[0] > 30 && std_vector_jet_pt[1] > 30 \
                                 && fabs(91.1876 - mll) > 15  \
                                 && metTtrk > 20  \
                                 && PfMetDivSumMet > 2 \
                                 && metPuppi > 35 \
                                 && mtw2 > 20  \
                                 && mjj >= 400 && abs(detajj) >= 3.5  \
                                '
