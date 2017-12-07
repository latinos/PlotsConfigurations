
supercut = ' mll > 12 \
             && std_vector_lepton_pt[0]>20 && std_vector_lepton_pt[1]>10 && std_vector_lepton_pt[2]<10 \
             && (abs(std_vector_lepton_flavour[1]) == 13 || (std_vector_lepton_pt[0]>25 && std_vector_lepton_pt[1]>13) )  \
             && metTtrk > 20 \
             && std_vector_jet_pt[0] >= 30 && std_vector_jet_pt[1] >= 30 \
             && (abs(std_vector_jet_eta[0])<4.7) && (abs(std_vector_jet_eta[1])<4.7) \
             && (abs((std_vector_lepton_eta[0] - (jeteta1+jeteta2)/2)/detajj) < 0.5) \
             && (abs((std_vector_lepton_eta[1] - (jeteta1+jeteta2)/2)/detajj) < 0.5) \
             && (mjj >= 400 && abs(detajj) >= 3.5) \
           '

# Some cuts

dymvaVBF = 'dymvavbf > 0.890'
HiggsVBF = 'mll < 60'

# Higgs Signal Regions: ee/uu

cuts['hww2l2v_13TeV_2jee_vbf'] = '    (std_vector_lepton_flavour[0] * std_vector_lepton_flavour[1] == -11*11)   \
                                   && fabs(91.1876 - mll) > 15 \
                                   && '+bVeto+' \
                                   && '+dymvaVBF+' \
                                   && '+HiggsVBF+' \
                                 '

cuts['hww2l2v_13TeV_2jmm_vbf'] = '    (std_vector_lepton_flavour[0] * std_vector_lepton_flavour[1] == -13*13)   \
                                   && fabs(91.1876 - mll) > 15  \
                                   && '+bVeto+' \
                                   && '+dymvaVBF+' \
                                   && '+HiggsVBF+' \
                                 '

cuts['hww2l2v_13TeV_2jee_vbf_lowmjj'] = '    (std_vector_lepton_flavour[0] * std_vector_lepton_flavour[1] == -11*11)   \
                                   && fabs(91.1876 - mll) > 15  \
                                   && '+bVeto+' \
                                   && '+dymvaVBF+' \
                                   && '+HiggsVBF+' \
                                   && mjj < 700 \
                                 '

cuts['hww2l2v_13TeV_2jmm_vbf_lowmjj'] = '    (std_vector_lepton_flavour[0] * std_vector_lepton_flavour[1] == -13*13)   \
                                   && fabs(91.1876 - mll) > 15  \
                                   && '+bVeto+' \
                                   && '+dymvaVBF+' \
                                   && '+HiggsVBF+' \
                                   && mjj < 700 \
                                 '
cuts['hww2l2v_13TeV_2jee_vbf_highmjj'] = '    (std_vector_lepton_flavour[0] * std_vector_lepton_flavour[1] == -11*11)   \
                                   && fabs(91.1876 - mll) > 15  \
                                   && '+bVeto+' \
                                   && '+dymvaVBF+' \
                                   && '+HiggsVBF+' \
                                   && mjj >= 700 \
                                 '

cuts['hww2l2v_13TeV_2jmm_vbf_highmjj'] = '    (std_vector_lepton_flavour[0] * std_vector_lepton_flavour[1] == -13*13)   \
                                   && fabs(91.1876 - mll) > 15  \
                                   && '+bVeto+' \
                                   && '+dymvaVBF+' \
                                   && '+HiggsVBF+' \
                                   && mjj >= 700 \
                                 '

## Loose dymva + H sel for DY Acc

   
cuts['hww2l2v_13TeV_2jee_vbf_HAccNum'] = '    (std_vector_lepton_flavour[0] * std_vector_lepton_flavour[1] == -11*11)   \
                                   && fabs(91.1876 - mll) > 15  \
                                   && '+bVeto+' \
                                   && dymvavbf > 0.6 \
                                   && '+HiggsVBF+' \
                                 '

cuts['hww2l2v_13TeV_2jmm_vbf_HAccNum'] = '    (std_vector_lepton_flavour[0] * std_vector_lepton_flavour[1] == -13*13)   \
                                   && fabs(91.1876 - mll) > 15  \
                                   && '+bVeto+' \
                                   && dymvavbf > 0.6 \
                                   && '+HiggsVBF+' \
                                 '

cuts['hww2l2v_13TeV_2jee_vbf_lowmjj_HAccNum'] = '    (std_vector_lepton_flavour[0] * std_vector_lepton_flavour[1] == -11*11)   \
                                   && fabs(91.1876 - mll) > 15  \
                                   && '+bVeto+' \
                                   && dymvavbf > 0.6 \
                                   && '+HiggsVBF+' \
                                   && mjj < 700 \
                                 '

cuts['hww2l2v_13TeV_2jmm_vbf_lowmjj_HAccNum'] = '    (std_vector_lepton_flavour[0] * std_vector_lepton_flavour[1] == -13*13)   \
                                   && fabs(91.1876 - mll) > 15  \
                                   && '+bVeto+' \
                                   && dymvavbf > 0.6 \
                                   && '+HiggsVBF+' \
                                   && mjj < 700 \
                                 '

cuts['hww2l2v_13TeV_2jee_vbf_highmjj_HAccNum'] = '    (std_vector_lepton_flavour[0] * std_vector_lepton_flavour[1] == -11*11)   \
                                   && fabs(91.1876 - mll) > 15  \
                                   && '+bVeto+' \
                                   && dymvavbf > 0.6 \
                                   && '+HiggsVBF+' \
                                   && mjj >= 700 \
                                 '

cuts['hww2l2v_13TeV_2jmm_vbf_highmjj_HAccNum'] = '    (std_vector_lepton_flavour[0] * std_vector_lepton_flavour[1] == -13*13)   \
                                   && fabs(91.1876 - mll) > 15  \
                                   && '+bVeto+' \
                                   && dymvavbf > 0.6 \
                                   && '+HiggsVBF+' \
                                   && mjj >= 700 \
                                 '

## Top CR: No H sel , bTag , tight DYmva

cuts['hww2l2v_13TeV_top_2jee_vbf'] = '    (std_vector_lepton_flavour[0] * std_vector_lepton_flavour[1] == -11*11)  \
                                       && fabs(91.1876 - mll) > 15  \
                                       && ( std_vector_jet_cmvav2[0]>-0.5884 || std_vector_jet_cmvav2[1]>-0.5884 ) \
                                       && '+dymvaVBF+' \
                                     '

cuts['hww2l2v_13TeV_top_2jmm_vbf'] = '    (std_vector_lepton_flavour[0] * std_vector_lepton_flavour[1] == -13*13)  \
                                       && fabs(91.1876 - mll) > 15  \
                                       && ( std_vector_jet_cmvav2[0]>-0.5884 || std_vector_jet_cmvav2[1]>-0.5884 ) \
                                       && '+dymvaVBF+' \
                                     '

cuts['hww2l2v_13TeV_top_2jsf_vbf'] = '    (    (std_vector_lepton_flavour[0] * std_vector_lepton_flavour[1] == -11*11)   \
                                            || (std_vector_lepton_flavour[0] * std_vector_lepton_flavour[1] == -13*13) ) \
                                       && fabs(91.1876 - mll) > 15  \
                                       && ( std_vector_jet_cmvav2[0]>-0.5884 || std_vector_jet_cmvav2[1]>-0.5884 ) \
                                       && '+dymvaVBF+' \
                                     '

## WW CR: No H Sel , mll>80, tight DYMva


cuts['hww2l2v_13TeV_WW_2jee_vbf'] = '    (std_vector_lepton_flavour[0] * std_vector_lepton_flavour[1] == -11*11)   \
                                   && fabs(91.1876 - mll) > 15  \
                                   && '+bVeto+' \
                                   && '+dymvaVBF+' \
                                   && mll > 80 \
                                 '

cuts['hww2l2v_13TeV_WW_2jmm_vbf'] = '    (std_vector_lepton_flavour[0] * std_vector_lepton_flavour[1] == -13*13)   \
                                   && fabs(91.1876 - mll) > 15  \
                                   && '+bVeto+' \
                                   && '+dymvaVBF+' \
                                   && mll > 80 \
                                 '

## DY Background IN with DYMVA>0.9X : Split ee/mm , No H cut !

cuts['hww2l2v_13TeV_DYin_2jee_vbf'] = '    (std_vector_lepton_flavour[0] * std_vector_lepton_flavour[1] == -11*11)   \
                                   && fabs(91.1876 - mll) < 7.5  \
                                   && '+bVeto+' \
                                   && '+dymvaVBF+' \
                                 '

cuts['hww2l2v_13TeV_DYin_2jmm_vbf'] = '    (std_vector_lepton_flavour[0] * std_vector_lepton_flavour[1] == -13*13)   \
                                   && fabs(91.1876 - mll) < 7.5  \
                                   && '+bVeto+' \
                                   && '+dymvaVBF+' \
                                 '

cuts['hww2l2v_13TeV_DYin_2jdf_vbf'] = '    (std_vector_lepton_flavour[0] * std_vector_lepton_flavour[1] == -11*13)   \
                                   && fabs(91.1876 - mll) < 7.5  \
                                   && '+bVeto+' \
                                   && '+dymvaVBF+' \
                                 '

## DY Background IN with btag : Split ee/mm , No H cut !

cuts['hww2l2v_13TeV_DYin_btag_2jee_vbf'] = '    (std_vector_lepton_flavour[0] * std_vector_lepton_flavour[1] == -11*11)  \
                                       && fabs(91.1876 - mll) < 7.5  \
                                       && ( std_vector_jet_cmvav2[0]>-0.5884 || std_vector_jet_cmvav2[1]>-0.5884 ) \
                                       && '+dymvaVBF+' \
                                     '

cuts['hww2l2v_13TeV_DYin_btag_2jmm_vbf'] = '    (std_vector_lepton_flavour[0] * std_vector_lepton_flavour[1] == -13*13)  \
                                       && fabs(91.1876 - mll) < 7.5  \
                                       && ( std_vector_jet_cmvav2[0]>-0.5884 || std_vector_jet_cmvav2[1]>-0.5884 ) \
                                       && '+dymvaVBF+' \
                                     '

cuts['hww2l2v_13TeV_DYin_btag_2jdf_vbf'] = '    (std_vector_lepton_flavour[0] * std_vector_lepton_flavour[1] == -11*13)  \
                                       && fabs(91.1876 - mll) < 7.5  \
                                       && ( std_vector_jet_cmvav2[0]>-0.5884 || std_vector_jet_cmvav2[1]>-0.5884 ) \
                                       && '+dymvaVBF+' \
                                     '


## DY CR for Acc Denominator

cuts['hww2l2v_13TeV_2jee_vbf_AccDen'] = '    (std_vector_lepton_flavour[0] * std_vector_lepton_flavour[1] == -11*11)   \
                                   && fabs(91.1876 - mll) > 15   \
                                   && '+bVeto+' \
                                   && dymvavbf > 0.6 \
                                 '

cuts['hww2l2v_13TeV_2jmm_vbf_AccDen'] = '    (std_vector_lepton_flavour[0] * std_vector_lepton_flavour[1] == -13*13)   \
                                   && fabs(91.1876 - mll) > 15   \
                                   && '+bVeto+' \
                                   && dymvavbf > 0.6 \
                                 '

## Loose dymva + WW sel for DY Acc

cuts['hww2l2v_13TeV_WW_2jee_vbf_WWAccNum'] = '    (std_vector_lepton_flavour[0] * std_vector_lepton_flavour[1] == -11*11)   \
                                   && fabs(91.1876 - mll) > 15   \
                                   && '+bVeto+' \
                                   && dymvavbf > 0.6 \
                                   && mll > 80 \
                                 '

cuts['hww2l2v_13TeV_WW_2jmm_vbf_WWAccNum'] = '    (std_vector_lepton_flavour[0] * std_vector_lepton_flavour[1] == -13*13)   \
                                   && fabs(91.1876 - mll) > 15   \
                                   && '+bVeto+' \
                                   && dymvavbf > 0.6 \
                                   && mll > 80 \
                                 '

