
supercut = ' mll > 12 \
             && std_vector_lepton_pt[0]>20 && std_vector_lepton_pt[1]>10 && std_vector_lepton_pt[2]<10 \
             && (abs(std_vector_lepton_flavour[1]) == 13 || (std_vector_lepton_pt[0]>25 && std_vector_lepton_pt[1]>13) )  \
             && metTtrk > 20 \
             && std_vector_jet_pt[0] >= 30 && std_vector_jet_pt[1] >= 30 \
             && ((abs(detajj) < 3.5) || (mjj < 400 && (abs(detajj) >= 3.5))) \
           '

# Some cuts

dymvaggH = 'dymvaggh > 0.81'
TagggH   = '( mjj <  65 || mjj >  105 )'
HiggsggH = '( mjj <  65 || mjj >  105 ) &&  mll < 50 '

dymvaVH  = 'dymvaggh > 0.81'
TagVH    = '( mjj >= 65 && mjj <= 105 )'
HiggsVH  = '( mjj >= 65 && mjj <= 105 ) &&  mll < 50 '

# Higgs Signal Regions: ee/uu

cuts['hww2l2v_13TeV_2jee'] = '    (std_vector_lepton_flavour[0] * std_vector_lepton_flavour[1] == -11*11)   \
                                   && fabs(91.1876 - mll) > 15 \
                                   && '+bVeto+' \
                                   && '+dymvaggH+' \
                                   && '+HiggsggH+' \
                                 '

cuts['hww2l2v_13TeV_2jmm'] = '    (std_vector_lepton_flavour[0] * std_vector_lepton_flavour[1] == -13*13)   \
                                   && fabs(91.1876 - mll) > 15  \
                                   && '+bVeto+' \
                                   && '+dymvaggH+' \
                                   && '+HiggsggH+' \
                                 '

cuts['hww2l2v_13TeV_2jee_vh2j'] = '    (std_vector_lepton_flavour[0] * std_vector_lepton_flavour[1] == -11*11)   \
                                   && fabs(91.1876 - mll) > 15 \
                                   && '+bVeto+' \
                                   && '+dymvaVH+' \
                                   && '+HiggsVH+' \
                                 '

cuts['hww2l2v_13TeV_2jmm_vh2j'] = '    (std_vector_lepton_flavour[0] * std_vector_lepton_flavour[1] == -13*13)   \
                                   && fabs(91.1876 - mll) > 15  \
                                   && '+bVeto+' \
                                   && '+dymvaVH+' \
                                   && '+HiggsVH+' \
                                 '


## Loose dymva + H sel for DY Acc

   
cuts['hww2l2v_13TeV_2jee_HAccNum'] = '    (std_vector_lepton_flavour[0] * std_vector_lepton_flavour[1] == -11*11)   \
                                   && fabs(91.1876 - mll) > 15  \
                                   && '+bVeto+' \
                                   && dymvaggh > 0.6 \
                                   && '+HiggsggH+' \
                                 '

cuts['hww2l2v_13TeV_2jmm_HAccNum'] = '    (std_vector_lepton_flavour[0] * std_vector_lepton_flavour[1] == -13*13)   \
                                   && fabs(91.1876 - mll) > 15  \
                                   && '+bVeto+' \
                                   && dymvaggh > 0.6 \
                                   && '+HiggsggH+' \
                                 '

cuts['hww2l2v_13TeV_2jee_vh2j_HAccNum'] = '    (std_vector_lepton_flavour[0] * std_vector_lepton_flavour[1] == -11*11)   \
                                   && fabs(91.1876 - mll) > 15  \
                                   && '+bVeto+' \
                                   && dymvaggh > 0.6 \
                                   && '+HiggsVH+' \
                                 '

cuts['hww2l2v_13TeV_2jmm_vh2j_HAccNum'] = '    (std_vector_lepton_flavour[0] * std_vector_lepton_flavour[1] == -13*13)   \
                                   && fabs(91.1876 - mll) > 15  \
                                   && '+bVeto+' \
                                   && dymvaggh > 0.6 \
                                   && '+HiggsVH+' \
                                 '


## Top CR: No H sel , bTag , tight DYmva

cuts['hww2l2v_13TeV_top_2jee'] = '    (std_vector_lepton_flavour[0] * std_vector_lepton_flavour[1] == -11*11)  \
                                       && fabs(91.1876 - mll) > 15  \
                                       && ( std_vector_jet_cmvav2[0]>-0.5884 || std_vector_jet_cmvav2[1]>-0.5884 ) \
                                       && '+TagggH+' \
                                       && '+dymvaggH+' \
                                     '

cuts['hww2l2v_13TeV_top_2jmm'] = '    (std_vector_lepton_flavour[0] * std_vector_lepton_flavour[1] == -13*13)  \
                                       && fabs(91.1876 - mll) > 15  \
                                       && ( std_vector_jet_cmvav2[0]>-0.5884 || std_vector_jet_cmvav2[1]>-0.5884 ) \
                                       && '+TagggH+' \
                                       && '+dymvaggH+' \
                                     '

cuts['hww2l2v_13TeV_top_2jsf'] = '    (    (std_vector_lepton_flavour[0] * std_vector_lepton_flavour[1] == -11*11)   \
                                            || (std_vector_lepton_flavour[0] * std_vector_lepton_flavour[1] == -13*13) ) \
                                       && fabs(91.1876 - mll) > 15  \
                                       && ( std_vector_jet_cmvav2[0]>-0.5884 || std_vector_jet_cmvav2[1]>-0.5884 ) \
                                       && '+TagggH+' \
                                       && '+dymvaggH+' \
                                     '

cuts['hww2l2v_13TeV_top_2jee_vh2j'] = '    (std_vector_lepton_flavour[0] * std_vector_lepton_flavour[1] == -11*11)  \
                                       && fabs(91.1876 - mll) > 15  \
                                       && ( std_vector_jet_cmvav2[0]>-0.5884 || std_vector_jet_cmvav2[1]>-0.5884 ) \
                                       && '+TagVH+' \
                                       && '+dymvaVH+' \
                                     '

cuts['hww2l2v_13TeV_top_2jmm_vh2j'] = '    (std_vector_lepton_flavour[0] * std_vector_lepton_flavour[1] == -13*13)  \
                                       && fabs(91.1876 - mll) > 15  \
                                       && ( std_vector_jet_cmvav2[0]>-0.5884 || std_vector_jet_cmvav2[1]>-0.5884 ) \
                                       && '+TagVH+' \
                                       && '+dymvaVH+' \
                                     '

cuts['hww2l2v_13TeV_top_2jsf_vh2j'] = '    (    (std_vector_lepton_flavour[0] * std_vector_lepton_flavour[1] == -11*11)   \
                                            || (std_vector_lepton_flavour[0] * std_vector_lepton_flavour[1] == -13*13) ) \
                                       && fabs(91.1876 - mll) > 15  \
                                       && ( std_vector_jet_cmvav2[0]>-0.5884 || std_vector_jet_cmvav2[1]>-0.5884 ) \
                                       && '+TagVH+' \
                                       && '+dymvaVH+' \
                                     '


## WW CR: No H Sel , mll>80, tight DYMva


cuts['hww2l2v_13TeV_WW_2jee'] = '    (std_vector_lepton_flavour[0] * std_vector_lepton_flavour[1] == -11*11)   \
                                   && fabs(91.1876 - mll) > 15  \
                                   && '+bVeto+' \
                                   && '+TagggH+' \
                                   && '+dymvaggH+' \
                                   && mll > 80 \
                                 '

cuts['hww2l2v_13TeV_WW_2jmm'] = '    (std_vector_lepton_flavour[0] * std_vector_lepton_flavour[1] == -13*13)   \
                                   && fabs(91.1876 - mll) > 15  \
                                   && '+bVeto+' \
                                   && '+TagggH+' \
                                   && '+dymvaggH+' \
                                   && mll > 80 \
                                 '

cuts['hww2l2v_13TeV_WW_2jee_vh2j'] = '    (std_vector_lepton_flavour[0] * std_vector_lepton_flavour[1] == -11*11)   \
                                   && fabs(91.1876 - mll) > 15  \
                                   && '+bVeto+' \
                                   && '+TagVH+' \
                                   && '+dymvaVH+' \
                                   && mll > 80 \
                                 '

cuts['hww2l2v_13TeV_WW_2jmm_vh2j'] = '    (std_vector_lepton_flavour[0] * std_vector_lepton_flavour[1] == -13*13)   \
                                   && fabs(91.1876 - mll) > 15  \
                                   && '+bVeto+' \
                                   && '+TagVH+' \
                                   && '+dymvaVH+' \
                                   && mll > 80 \
                                 '


## DY Background IN with DYMVA>0.9X : Split ee/mm , No H cut !

cuts['hww2l2v_13TeV_DYin_2jee'] = '    (std_vector_lepton_flavour[0] * std_vector_lepton_flavour[1] == -11*11)   \
                                   && fabs(91.1876 - mll) < 7.5  \
                                   && '+bVeto+' \
                                   && '+dymvaggH+' \
                                 '

cuts['hww2l2v_13TeV_DYin_2jmm'] = '    (std_vector_lepton_flavour[0] * std_vector_lepton_flavour[1] == -13*13)   \
                                   && fabs(91.1876 - mll) < 7.5  \
                                   && '+bVeto+' \
                                   && '+dymvaggH+' \
                                 '

cuts['hww2l2v_13TeV_DYin_2jdf'] = '    (std_vector_lepton_flavour[0] * std_vector_lepton_flavour[1] == -11*13)   \
                                   && fabs(91.1876 - mll) < 7.5  \
                                   && '+bVeto+' \
                                   && '+dymvaggH+' \
                                 '

## DY Background IN with btag : Split ee/mm , No H cut !

cuts['hww2l2v_13TeV_DYin_btag_2jee'] = '    (std_vector_lepton_flavour[0] * std_vector_lepton_flavour[1] == -11*11)  \
                                       && fabs(91.1876 - mll) < 7.5  \
                                       && ( std_vector_jet_cmvav2[0]>-0.5884 || std_vector_jet_cmvav2[1]>-0.5884 ) \
                                       && '+dymvaggH+' \
                                     '

cuts['hww2l2v_13TeV_DYin_btag_2jmm'] = '    (std_vector_lepton_flavour[0] * std_vector_lepton_flavour[1] == -13*13)  \
                                       && fabs(91.1876 - mll) < 7.5  \
                                       && ( std_vector_jet_cmvav2[0]>-0.5884 || std_vector_jet_cmvav2[1]>-0.5884 ) \
                                       && '+dymvaggH+' \
                                     '

cuts['hww2l2v_13TeV_DYin_btag_2jdf'] = '    (std_vector_lepton_flavour[0] * std_vector_lepton_flavour[1] == -11*13)  \
                                       && fabs(91.1876 - mll) < 7.5  \
                                       && ( std_vector_jet_cmvav2[0]>-0.5884 || std_vector_jet_cmvav2[1]>-0.5884 ) \
                                       && '+dymvaggH+' \
                                     '


## DY CR for Acc Denominator

cuts['hww2l2v_13TeV_2jee_AccDen'] = '    (std_vector_lepton_flavour[0] * std_vector_lepton_flavour[1] == -11*11)   \
                                   && fabs(91.1876 - mll) > 15   \
                                   && '+bVeto+' \
                                   && dymvaggh > 0.6 \
                                 '

cuts['hww2l2v_13TeV_2jmm_AccDen'] = '    (std_vector_lepton_flavour[0] * std_vector_lepton_flavour[1] == -13*13)   \
                                   && fabs(91.1876 - mll) > 15   \
                                   && '+bVeto+' \
                                   && dymvaggh > 0.6 \
                                 '

## Loose dymva + WW sel for DY Acc

cuts['hww2l2v_13TeV_WW_2jee_WWAccNum'] = '    (std_vector_lepton_flavour[0] * std_vector_lepton_flavour[1] == -11*11)   \
                                   && fabs(91.1876 - mll) > 15   \
                                   && '+bVeto+' \
                                   && '+TagggH+' \
                                   && dymvaggh > 0.6 \
                                   && mll > 80 \
                                 '

cuts['hww2l2v_13TeV_WW_2jmm_WWAccNum'] = '    (std_vector_lepton_flavour[0] * std_vector_lepton_flavour[1] == -13*13)   \
                                   && fabs(91.1876 - mll) > 15   \
                                   && '+bVeto+' \
                                   && dymvaggh > 0.6 \
                                   && '+TagggH+' \
                                   && mll > 80 \
                                 '


cuts['hww2l2v_13TeV_WW_2jee_vh2j_WWAccNum'] = '    (std_vector_lepton_flavour[0] * std_vector_lepton_flavour[1] == -11*11)   \
                                   && fabs(91.1876 - mll) > 15   \
                                   && '+bVeto+' \
                                   && '+TagVH+' \
                                   && dymvaggh > 0.6 \
                                   && mll > 80 \
                                 '

cuts['hww2l2v_13TeV_WW_2jmm_vh2j_WWAccNum'] = '    (std_vector_lepton_flavour[0] * std_vector_lepton_flavour[1] == -13*13)   \
                                   && fabs(91.1876 - mll) > 15   \
                                   && '+bVeto+' \
                                   && dymvaggh > 0.6 \
                                   && '+TagVH+' \
                                   && mll > 80 \
                                 '

