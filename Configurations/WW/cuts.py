# cuts

#cuts = {}

supercut = 'std_vector_lepton_pt[0]>25 && std_vector_lepton_pt[1]>20 \
            && (std_vector_lepton_flavour[0] * std_vector_lepton_flavour[1] == -11*13) \
            && std_vector_lepton_pt[2]<10 \
            && mll>12  \
            && metPfType1 > 20 \
            && mpmet > 20 \
            && ptll > 30 \
'

# cuts['ww_twolep0j_em'] = 'njet == 0 && (std_vector_lepton_flavour[0] * std_vector_lepton_flavour[1] == -11*13)'
# cuts['ww_twolep1j_em'] = 'njet == 1 && (std_vector_lepton_flavour[0] * std_vector_lepton_flavour[1] == -11*13)'

# cuts['ww_twolep0j_ee'] = 'njet == 0 && (std_vector_lepton_flavour[0] * std_vector_lepton_flavour[1] == -11*11)'
# cuts['ww_twolep1j_ee'] = 'njet == 1 && (std_vector_lepton_flavour[0] * std_vector_lepton_flavour[1] == -11*11)'

# cuts['ww_twolep0j_mm'] = 'njet == 0 && (std_vector_lepton_flavour[0] * std_vector_lepton_flavour[1] == -13*13)'
# cuts['ww_twolep1j_mm'] = 'njet == 1 && (std_vector_lepton_flavour[0] * std_vector_lepton_flavour[1] == -13*13)'

######################################################################################
# Inclusive Analysis - Selecting on HT-no-jets = pt1 + pt2 + MET
######################################################################################
cuts['ww_Incl_em'] = 'njet>=0 \
            && std_vector_lepton_pt[0]>25 && std_vector_lepton_pt[1]>20 \
            && (std_vector_lepton_flavour[0] * std_vector_lepton_flavour[1] == -11*13) \
            && std_vector_lepton_pt[2]<10 \
            && mll>12  \
            && metPfType1 > 20 \
            && mpmet > 20 \
            && ptll > 30 \
            && ( std_vector_jet_pt[0] < 20 || std_vector_jet_cmvav2[0] < -0.715 ) \
            && ( std_vector_jet_pt[1] < 20 || std_vector_jet_cmvav2[1] < -0.715 ) \
            && ( std_vector_jet_pt[2] < 20 || std_vector_jet_cmvav2[2] < -0.715 ) \
            && ( std_vector_jet_pt[3] < 20 || std_vector_jet_cmvav2[3] < -0.715 ) \
            && ( std_vector_jet_pt[4] < 20 || std_vector_jet_cmvav2[4] < -0.715 ) \
            && ( std_vector_jet_pt[5] < 20 || std_vector_jet_cmvav2[5] < -0.715 ) \
            && ( std_vector_jet_pt[6] < 20 || std_vector_jet_cmvav2[6] < -0.715 ) \
            && ( std_vector_jet_pt[7] < 20 || std_vector_jet_cmvav2[7] < -0.715 ) \
            && ( std_vector_jet_pt[8] < 20 || std_vector_jet_cmvav2[8] < -0.715 ) \
            && ( std_vector_jet_pt[9] < 20 || std_vector_jet_cmvav2[9] < -0.715 ) \
'

######################################################################################
# Inclusive Analysis - Using Different HT Definitions
######################################################################################
# cuts['ww_HT0j_em'] = 'njet == 0'


# cuts['ww_HT20_em'] = '(std_vector_lepton_pt[0] + std_vector_lepton_pt[1] + metPfType1    \
#                     + ((std_vector_jet_pt[0] > 20) * std_vector_jet_pt[0])  \
#                     + ((std_vector_jet_pt[1] > 20) * std_vector_jet_pt[1])  \
#                     + ((std_vector_jet_pt[2] > 20) * std_vector_jet_pt[2])  \
#                     + ((std_vector_jet_pt[3] > 20) * std_vector_jet_pt[3])  \
#                     + ((std_vector_jet_pt[4] > 20) * std_vector_jet_pt[4])  \
#                     + ((std_vector_jet_pt[5] > 20) * std_vector_jet_pt[5])  \
#                     + ((std_vector_jet_pt[6] > 20) * std_vector_jet_pt[6])  \
#                     + ((std_vector_jet_pt[7] > 20) * std_vector_jet_pt[7])  \
#                     + ((std_vector_jet_pt[8] > 20) * std_vector_jet_pt[8])  \
#                     + ((std_vector_jet_pt[9] > 20) * std_vector_jet_pt[9])) < 200 \
# '
 
# cuts['ww_HT25_em'] = '(std_vector_lepton_pt[0] + std_vector_lepton_pt[1] + metPfType1    \
#                     + ((std_vector_jet_pt[0] > 25) * std_vector_jet_pt[0])  \
#                     + ((std_vector_jet_pt[1] > 25) * std_vector_jet_pt[1])  \
#                     + ((std_vector_jet_pt[2] > 25) * std_vector_jet_pt[2])  \
#                     + ((std_vector_jet_pt[3] > 25) * std_vector_jet_pt[3])  \
#                     + ((std_vector_jet_pt[4] > 25) * std_vector_jet_pt[4])  \
#                     + ((std_vector_jet_pt[5] > 25) * std_vector_jet_pt[5])  \
#                     + ((std_vector_jet_pt[6] > 25) * std_vector_jet_pt[6])  \
#                     + ((std_vector_jet_pt[7] > 25) * std_vector_jet_pt[7])  \
#                     + ((std_vector_jet_pt[8] > 25) * std_vector_jet_pt[8])  \
#                     + ((std_vector_jet_pt[9] > 25) * std_vector_jet_pt[9])) < 200 \
# '

# cuts['ww_HT30_em'] = '(std_vector_lepton_pt[0] + std_vector_lepton_pt[1] + metPfType1    \
#                     + ((std_vector_jet_pt[0] > 30) * std_vector_jet_pt[0])  \
#                     + ((std_vector_jet_pt[1] > 30) * std_vector_jet_pt[1])  \
#                     + ((std_vector_jet_pt[2] > 30) * std_vector_jet_pt[2])  \
#                     + ((std_vector_jet_pt[3] > 30) * std_vector_jet_pt[3])  \
#                     + ((std_vector_jet_pt[4] > 30) * std_vector_jet_pt[4])  \
#                     + ((std_vector_jet_pt[5] > 30) * std_vector_jet_pt[5])  \
#                     + ((std_vector_jet_pt[6] > 30) * std_vector_jet_pt[6])  \
#                     + ((std_vector_jet_pt[7] > 30) * std_vector_jet_pt[7])  \
#                     + ((std_vector_jet_pt[8] > 30) * std_vector_jet_pt[8])  \
#                     + ((std_vector_jet_pt[9] > 30) * std_vector_jet_pt[9])) < 200 \
# '

# cuts['ww_HT35_em'] = '(std_vector_lepton_pt[0] + std_vector_lepton_pt[1] + metPfType1    \
#                     + ((std_vector_jet_pt[0] > 35) * std_vector_jet_pt[0])  \
#                     + ((std_vector_jet_pt[1] > 35) * std_vector_jet_pt[1])  \
#                     + ((std_vector_jet_pt[2] > 35) * std_vector_jet_pt[2])  \
#                     + ((std_vector_jet_pt[3] > 35) * std_vector_jet_pt[3])  \
#                     + ((std_vector_jet_pt[4] > 35) * std_vector_jet_pt[4])  \
#                     + ((std_vector_jet_pt[5] > 35) * std_vector_jet_pt[5])  \
#                     + ((std_vector_jet_pt[6] > 35) * std_vector_jet_pt[6])  \
#                     + ((std_vector_jet_pt[7] > 35) * std_vector_jet_pt[7])  \
#                     + ((std_vector_jet_pt[8] > 35) * std_vector_jet_pt[8])  \
#                     + ((std_vector_jet_pt[9] > 35) * std_vector_jet_pt[9])) < 200 \
# '

# cuts['ww_HT40_em'] = '(std_vector_lepton_pt[0] + std_vector_lepton_pt[1] + metPfType1    \
#                     + ((std_vector_jet_pt[0] > 40) * std_vector_jet_pt[0])  \
#                     + ((std_vector_jet_pt[1] > 40) * std_vector_jet_pt[1])  \
#                     + ((std_vector_jet_pt[2] > 40) * std_vector_jet_pt[2])  \
#                     + ((std_vector_jet_pt[3] > 40) * std_vector_jet_pt[3])  \
#                     + ((std_vector_jet_pt[4] > 40) * std_vector_jet_pt[4])  \
#                     + ((std_vector_jet_pt[5] > 40) * std_vector_jet_pt[5])  \
#                     + ((std_vector_jet_pt[6] > 40) * std_vector_jet_pt[6])  \
#                     + ((std_vector_jet_pt[7] > 40) * std_vector_jet_pt[7])  \
#                     + ((std_vector_jet_pt[8] > 40) * std_vector_jet_pt[8])  \
#                     + ((std_vector_jet_pt[9] > 40) * std_vector_jet_pt[9])) < 200 \
# '


######################################################################################
# Analysis per jet bins
######################################################################################

# cuts['ww_BVeto0j_em'] = 'njet == 0 \
#             && ( std_vector_jet_pt[0] < 20 || std_vector_jet_cmvav2[0] < -0.715 ) \
#             && ( std_vector_jet_pt[1] < 20 || std_vector_jet_cmvav2[1] < -0.715 ) \
#             && ( std_vector_jet_pt[2] < 20 || std_vector_jet_cmvav2[2] < -0.715 ) \
#             && ( std_vector_jet_pt[3] < 20 || std_vector_jet_cmvav2[3] < -0.715 ) \
#             && ( std_vector_jet_pt[4] < 20 || std_vector_jet_cmvav2[4] < -0.715 ) \
#             && ( std_vector_jet_pt[5] < 20 || std_vector_jet_cmvav2[5] < -0.715 ) \
#             && ( std_vector_jet_pt[6] < 20 || std_vector_jet_cmvav2[6] < -0.715 ) \
#             && ( std_vector_jet_pt[7] < 20 || std_vector_jet_cmvav2[7] < -0.715 ) \
#             && ( std_vector_jet_pt[8] < 20 || std_vector_jet_cmvav2[8] < -0.715 ) \
#             && ( std_vector_jet_pt[9] < 20 || std_vector_jet_cmvav2[9] < -0.715 ) \
# '

# cuts['ww_BVeto1j_em'] = 'njet == 1 \
#             && ( std_vector_jet_pt[0] < 20 || std_vector_jet_cmvav2[0] < -0.715 ) \
#             && ( std_vector_jet_pt[1] < 20 || std_vector_jet_cmvav2[1] < -0.715 ) \
#             && ( std_vector_jet_pt[2] < 20 || std_vector_jet_cmvav2[2] < -0.715 ) \
#             && ( std_vector_jet_pt[3] < 20 || std_vector_jet_cmvav2[3] < -0.715 ) \
#             && ( std_vector_jet_pt[4] < 20 || std_vector_jet_cmvav2[4] < -0.715 ) \
#             && ( std_vector_jet_pt[5] < 20 || std_vector_jet_cmvav2[5] < -0.715 ) \
#             && ( std_vector_jet_pt[6] < 20 || std_vector_jet_cmvav2[6] < -0.715 ) \
#             && ( std_vector_jet_pt[7] < 20 || std_vector_jet_cmvav2[7] < -0.715 ) \
#             && ( std_vector_jet_pt[8] < 20 || std_vector_jet_cmvav2[8] < -0.715 ) \
#             && ( std_vector_jet_pt[9] < 20 || std_vector_jet_cmvav2[9] < -0.715 ) \
# '

# cuts['ww_TopCR0j_em'] = 'njet == 0 \
#             && mth > 40 \
#             && (( std_vector_jet_pt[0] > 20 && std_vector_jet_cmvav2[0] > -0.715 )  \
#             ||  ( std_vector_jet_pt[1] > 20 && std_vector_jet_cmvav2[1] > -0.715 )  \
#             ||  ( std_vector_jet_pt[2] > 20 && std_vector_jet_cmvav2[2] > -0.715 )  \
#             ||  ( std_vector_jet_pt[3] > 20 && std_vector_jet_cmvav2[3] > -0.715 )  \
#             ||  ( std_vector_jet_pt[4] > 20 && std_vector_jet_cmvav2[4] > -0.715 )  \
#             ||  ( std_vector_jet_pt[5] > 20 && std_vector_jet_cmvav2[5] > -0.715 )  \
#             ||  ( std_vector_jet_pt[6] > 20 && std_vector_jet_cmvav2[6] > -0.715 )  \
#             ||  ( std_vector_jet_pt[7] > 20 && std_vector_jet_cmvav2[7] > -0.715 )  \
#             ||  ( std_vector_jet_pt[8] > 20 && std_vector_jet_cmvav2[8] > -0.715 )  \
#             ||  ( std_vector_jet_pt[9] > 20 && std_vector_jet_cmvav2[9] > -0.715 )) \
# '

# cuts['ww_TopCR1j_em'] = 'njet == 1 \
#             && mth > 40 \
#             && (( std_vector_jet_pt[0] > 20 && std_vector_jet_cmvav2[0] > -0.715 )  \
#             ||  ( std_vector_jet_pt[1] > 20 && std_vector_jet_cmvav2[1] > -0.715 )  \
#             ||  ( std_vector_jet_pt[2] > 20 && std_vector_jet_cmvav2[2] > -0.715 )  \
#             ||  ( std_vector_jet_pt[3] > 20 && std_vector_jet_cmvav2[3] > -0.715 )  \
#             ||  ( std_vector_jet_pt[4] > 20 && std_vector_jet_cmvav2[4] > -0.715 )  \
#             ||  ( std_vector_jet_pt[5] > 20 && std_vector_jet_cmvav2[5] > -0.715 )  \
#             ||  ( std_vector_jet_pt[6] > 20 && std_vector_jet_cmvav2[6] > -0.715 )  \
#             ||  ( std_vector_jet_pt[7] > 20 && std_vector_jet_cmvav2[7] > -0.715 )  \
#             ||  ( std_vector_jet_pt[8] > 20 && std_vector_jet_cmvav2[8] > -0.715 )  \
#             ||  ( std_vector_jet_pt[9] > 20 && std_vector_jet_cmvav2[9] > -0.715 )) \
# '

######################################################################################
# Analysis per jet bins with csvv2 b-tagger
######################################################################################

# cuts['ww_BVeto0j_csv_em'] = 'njet == 0 \
#              && ( std_vector_jet_pt[0] < 20 || std_vector_jet_csvv2ivf[0] < 0.460 ) \
#              && ( std_vector_jet_pt[1] < 20 || std_vector_jet_csvv2ivf[1] < 0.460 ) \
#              && ( std_vector_jet_pt[2] < 20 || std_vector_jet_csvv2ivf[2] < 0.460 ) \
#              && ( std_vector_jet_pt[3] < 20 || std_vector_jet_csvv2ivf[3] < 0.460 ) \
#              && ( std_vector_jet_pt[4] < 20 || std_vector_jet_csvv2ivf[4] < 0.460 ) \
#              && ( std_vector_jet_pt[5] < 20 || std_vector_jet_csvv2ivf[5] < 0.460 ) \
#              && ( std_vector_jet_pt[6] < 20 || std_vector_jet_csvv2ivf[6] < 0.460 ) \
#              && ( std_vector_jet_pt[7] < 20 || std_vector_jet_csvv2ivf[7] < 0.460 ) \
#              && ( std_vector_jet_pt[8] < 20 || std_vector_jet_csvv2ivf[8] < 0.460 ) \
#              && ( std_vector_jet_pt[9] < 20 || std_vector_jet_csvv2ivf[9] < 0.460 ) \
# '

# cuts['ww_BVeto1j_csv_em'] = 'njet == 1 \
#              && ( std_vector_jet_pt[0] < 20 || std_vector_jet_csvv2ivf[0] < 0.460 ) \
#              && ( std_vector_jet_pt[1] < 20 || std_vector_jet_csvv2ivf[1] < 0.460 ) \
#              && ( std_vector_jet_pt[2] < 20 || std_vector_jet_csvv2ivf[2] < 0.460 ) \
#              && ( std_vector_jet_pt[3] < 20 || std_vector_jet_csvv2ivf[3] < 0.460 ) \
#              && ( std_vector_jet_pt[4] < 20 || std_vector_jet_csvv2ivf[4] < 0.460 ) \
#              && ( std_vector_jet_pt[5] < 20 || std_vector_jet_csvv2ivf[5] < 0.460 ) \
#              && ( std_vector_jet_pt[6] < 20 || std_vector_jet_csvv2ivf[6] < 0.460 ) \
#              && ( std_vector_jet_pt[7] < 20 || std_vector_jet_csvv2ivf[7] < 0.460 ) \
#              && ( std_vector_jet_pt[8] < 20 || std_vector_jet_csvv2ivf[8] < 0.460 ) \
#              && ( std_vector_jet_pt[9] < 20 || std_vector_jet_csvv2ivf[9] < 0.460 ) \
# '

# cuts['ww_TopCR0j_csv_em'] = 'njet == 0 \
#             && mth > 40 \
#              && (( std_vector_jet_pt[0] > 20 && std_vector_jet_csvv2ivf[0] > 0.460 )  \
#              ||  ( std_vector_jet_pt[1] > 20 && std_vector_jet_csvv2ivf[1] > 0.460 )  \
#              ||  ( std_vector_jet_pt[2] > 20 && std_vector_jet_csvv2ivf[2] > 0.460 )  \
#              ||  ( std_vector_jet_pt[3] > 20 && std_vector_jet_csvv2ivf[3] > 0.460 )  \
#              ||  ( std_vector_jet_pt[4] > 20 && std_vector_jet_csvv2ivf[4] > 0.460 )  \
#              ||  ( std_vector_jet_pt[5] > 20 && std_vector_jet_csvv2ivf[5] > 0.460 )  \
#              ||  ( std_vector_jet_pt[6] > 20 && std_vector_jet_csvv2ivf[6] > 0.460 )  \
#              ||  ( std_vector_jet_pt[7] > 20 && std_vector_jet_csvv2ivf[7] > 0.460 )  \
#              ||  ( std_vector_jet_pt[8] > 20 && std_vector_jet_csvv2ivf[8] > 0.460 )  \
#              ||  ( std_vector_jet_pt[9] > 20 && std_vector_jet_csvv2ivf[9] > 0.460 )) \
# '

# cuts['ww_TopCR1j_csv_em'] = 'njet == 1 \
#             && mth > 40 \
#              && (( std_vector_jet_pt[0] > 20 && std_vector_jet_csvv2ivf[0] > 0.460 )  \
#              ||  ( std_vector_jet_pt[1] > 20 && std_vector_jet_csvv2ivf[1] > 0.460 )  \
#              ||  ( std_vector_jet_pt[2] > 20 && std_vector_jet_csvv2ivf[2] > 0.460 )  \
#              ||  ( std_vector_jet_pt[3] > 20 && std_vector_jet_csvv2ivf[3] > 0.460 )  \
#              ||  ( std_vector_jet_pt[4] > 20 && std_vector_jet_csvv2ivf[4] > 0.460 )  \
#              ||  ( std_vector_jet_pt[5] > 20 && std_vector_jet_csvv2ivf[5] > 0.460 )  \
#              ||  ( std_vector_jet_pt[6] > 20 && std_vector_jet_csvv2ivf[6] > 0.460 )  \
#              ||  ( std_vector_jet_pt[7] > 20 && std_vector_jet_csvv2ivf[7] > 0.460 )  \
#              ||  ( std_vector_jet_pt[8] > 20 && std_vector_jet_csvv2ivf[8] > 0.460 )  \
#              ||  ( std_vector_jet_pt[9] > 20 && std_vector_jet_csvv2ivf[9] > 0.460 )) \
# '

######################################################################################
# Inclusive Analyses
######################################################################################

# cuts['ww_BVetoIncl_em'] = 'njet >= 0 \
#             && ht < 189 \
#             && mth > 40 \
#             && ( std_vector_jet_pt[0] < 20 || std_vector_jet_cmvav2[0] < -0.715 ) \
#             && ( std_vector_jet_pt[1] < 20 || std_vector_jet_cmvav2[1] < -0.715 ) \
#             && ( std_vector_jet_pt[2] < 20 || std_vector_jet_cmvav2[2] < -0.715 ) \
#             && ( std_vector_jet_pt[3] < 20 || std_vector_jet_cmvav2[3] < -0.715 ) \
#             && ( std_vector_jet_pt[4] < 20 || std_vector_jet_cmvav2[4] < -0.715 ) \
#             && ( std_vector_jet_pt[5] < 20 || std_vector_jet_cmvav2[5] < -0.715 ) \
#             && ( std_vector_jet_pt[6] < 20 || std_vector_jet_cmvav2[6] < -0.715 ) \
#             && ( std_vector_jet_pt[7] < 20 || std_vector_jet_cmvav2[7] < -0.715 ) \
#             && ( std_vector_jet_pt[8] < 20 || std_vector_jet_cmvav2[8] < -0.715 ) \
#             && ( std_vector_jet_pt[9] < 20 || std_vector_jet_cmvav2[9] < -0.715 ) \
# '

# cuts['ww_BVetoIncl_csv2_em'] = 'njet >= 0 \
#             && ht < 189 \
#             && mth > 40 \
#             && ( std_vector_jet_pt[0] < 20 || std_vector_jet_csvv2ivf[0] < 0.460 ) \
#             && ( std_vector_jet_pt[1] < 20 || std_vector_jet_csvv2ivf[1] < 0.460 ) \
#             && ( std_vector_jet_pt[2] < 20 || std_vector_jet_csvv2ivf[2] < 0.460 ) \
#             && ( std_vector_jet_pt[3] < 20 || std_vector_jet_csvv2ivf[3] < 0.460 ) \
#             && ( std_vector_jet_pt[4] < 20 || std_vector_jet_csvv2ivf[4] < 0.460 ) \
#             && ( std_vector_jet_pt[5] < 20 || std_vector_jet_csvv2ivf[5] < 0.460 ) \
#             && ( std_vector_jet_pt[6] < 20 || std_vector_jet_csvv2ivf[6] < 0.460 ) \
#             && ( std_vector_jet_pt[7] < 20 || std_vector_jet_csvv2ivf[7] < 0.460 ) \
#             && ( std_vector_jet_pt[8] < 20 || std_vector_jet_csvv2ivf[8] < 0.460 ) \
#             && ( std_vector_jet_pt[9] < 20 || std_vector_jet_csvv2ivf[9] < 0.460 ) \
# '

# cuts['ww_TopCRIncl_em'] = 'njet >= 0 \
#             && ht < 189 \
#             && mth > 40 \
#             && (( std_vector_jet_pt[0] > 20 && std_vector_jet_cmvav2[0] > -0.715 )  \
#             ||  ( std_vector_jet_pt[1] > 20 && std_vector_jet_cmvav2[1] > -0.715 )  \
#             ||  ( std_vector_jet_pt[2] > 20 && std_vector_jet_cmvav2[2] > -0.715 )  \
#             ||  ( std_vector_jet_pt[3] > 20 && std_vector_jet_cmvav2[3] > -0.715 )  \
#             ||  ( std_vector_jet_pt[4] > 20 && std_vector_jet_cmvav2[4] > -0.715 )  \
#             ||  ( std_vector_jet_pt[5] > 20 && std_vector_jet_cmvav2[5] > -0.715 )  \
#             ||  ( std_vector_jet_pt[6] > 20 && std_vector_jet_cmvav2[6] > -0.715 )  \
#             ||  ( std_vector_jet_pt[7] > 20 && std_vector_jet_cmvav2[7] > -0.715 )  \
#             ||  ( std_vector_jet_pt[8] > 20 && std_vector_jet_cmvav2[8] > -0.715 )  \
#             ||  ( std_vector_jet_pt[9] > 20 && std_vector_jet_cmvav2[9] > -0.715 )) \
# '


# cuts['ww_TopCRIncl_csv2_em'] = 'njet >= 0 \
#             && ht < 189 \
#             && mth > 40 \
#             && (( std_vector_jet_pt[0] > 20 && std_vector_jet_csvv2ivf[0] > 0.460 )  \
#             ||  ( std_vector_jet_pt[1] > 20 && std_vector_jet_csvv2ivf[1] > 0.460 )  \
#             ||  ( std_vector_jet_pt[2] > 20 && std_vector_jet_csvv2ivf[2] > 0.460 )  \
#             ||  ( std_vector_jet_pt[3] > 20 && std_vector_jet_csvv2ivf[3] > 0.460 )  \
#             ||  ( std_vector_jet_pt[4] > 20 && std_vector_jet_csvv2ivf[4] > 0.460 )  \
#             ||  ( std_vector_jet_pt[5] > 20 && std_vector_jet_csvv2ivf[5] > 0.460 )  \
#             ||  ( std_vector_jet_pt[6] > 20 && std_vector_jet_csvv2ivf[6] > 0.460 )  \
#             ||  ( std_vector_jet_pt[7] > 20 && std_vector_jet_csvv2ivf[7] > 0.460 )  \
#             ||  ( std_vector_jet_pt[8] > 20 && std_vector_jet_csvv2ivf[8] > 0.460 )  \
#             ||  ( std_vector_jet_pt[9] > 20 && std_vector_jet_csvv2ivf[9] > 0.460 )) \
# '




######################################################################################
# Cut by cut selections
######################################################################################

# cuts['ww_TopCR0je+mu-_em'] = 'njet == 0 \
#             && mpmet > 20 \
#             && ptll > 30 \
#             && mth > 40 \
#             && (( std_vector_jet_pt[0] > 20 && std_vector_jet_cmvav2[0] > -0.715 )  \
#             ||  ( std_vector_jet_pt[1] > 20 && std_vector_jet_cmvav2[1] > -0.715 )  \
#             ||  ( std_vector_jet_pt[2] > 20 && std_vector_jet_cmvav2[2] > -0.715 )  \
#             ||  ( std_vector_jet_pt[3] > 20 && std_vector_jet_cmvav2[3] > -0.715 )  \
#             ||  ( std_vector_jet_pt[4] > 20 && std_vector_jet_cmvav2[4] > -0.715 )  \
#             ||  ( std_vector_jet_pt[5] > 20 && std_vector_jet_cmvav2[5] > -0.715 )  \
#             ||  ( std_vector_jet_pt[6] > 20 && std_vector_jet_cmvav2[6] > -0.715 )  \
#             ||  ( std_vector_jet_pt[7] > 20 && std_vector_jet_cmvav2[7] > -0.715 )  \
#             ||  ( std_vector_jet_pt[8] > 20 && std_vector_jet_cmvav2[8] > -0.715 )  \
#             ||  ( std_vector_jet_pt[9] > 20 && std_vector_jet_cmvav2[9] > -0.715 )) \
#             && ( std_vector_lepton_flavour[0] == 13 || std_vector_lepton_flavour[1] == 13) \
# '

# cuts['ww_mu+e-0j_em'] = 'njet == 0 \
#             && mpmet > 20 \
#             && ptll > 30 \
#             && ( std_vector_jet_pt[0] < 20 || std_vector_jet_cmvav2[0] < -0.715 ) \
#             && ( std_vector_jet_pt[1] < 20 || std_vector_jet_cmvav2[1] < -0.715 ) \
#             && ( std_vector_jet_pt[2] < 20 || std_vector_jet_cmvav2[2] < -0.715 ) \
#             && ( std_vector_jet_pt[3] < 20 || std_vector_jet_cmvav2[3] < -0.715 ) \
#             && ( std_vector_jet_pt[4] < 20 || std_vector_jet_cmvav2[4] < -0.715 ) \
#             && ( std_vector_jet_pt[5] < 20 || std_vector_jet_cmvav2[5] < -0.715 ) \
#             && ( std_vector_jet_pt[6] < 20 || std_vector_jet_cmvav2[6] < -0.715 ) \
#             && ( std_vector_jet_pt[7] < 20 || std_vector_jet_cmvav2[7] < -0.715 ) \
#             && ( std_vector_jet_pt[8] < 20 || std_vector_jet_cmvav2[8] < -0.715 ) \
#             && ( std_vector_jet_pt[9] < 20 || std_vector_jet_cmvav2[9] < -0.715 ) \
#             && ( std_vector_lepton_flavour[0] == -13 || std_vector_lepton_flavour[1] == -13) \
# '

# cuts['ww_e+mu-0j_em'] = 'njet == 0 \
#             && mpmet > 20 \
#             && ptll > 30 \
#             && ( std_vector_jet_pt[0] < 20 || std_vector_jet_cmvav2[0] < -0.715 ) \
#             && ( std_vector_jet_pt[1] < 20 || std_vector_jet_cmvav2[1] < -0.715 ) \
#             && ( std_vector_jet_pt[2] < 20 || std_vector_jet_cmvav2[2] < -0.715 ) \
#             && ( std_vector_jet_pt[3] < 20 || std_vector_jet_cmvav2[3] < -0.715 ) \
#             && ( std_vector_jet_pt[4] < 20 || std_vector_jet_cmvav2[4] < -0.715 ) \
#             && ( std_vector_jet_pt[5] < 20 || std_vector_jet_cmvav2[5] < -0.715 ) \
#             && ( std_vector_jet_pt[6] < 20 || std_vector_jet_cmvav2[6] < -0.715 ) \
#             && ( std_vector_jet_pt[7] < 20 || std_vector_jet_cmvav2[7] < -0.715 ) \
#             && ( std_vector_jet_pt[8] < 20 || std_vector_jet_cmvav2[8] < -0.715 ) \
#             && ( std_vector_jet_pt[9] < 20 || std_vector_jet_cmvav2[9] < -0.715 ) \
#             && ( std_vector_lepton_flavour[0] == 13 || std_vector_lepton_flavour[1] == 13) \
# '

# cuts['ww_mu+e-1j_em'] = 'njet == 1 \
#             && mpmet > 20 \
#             && ptll > 30 \
#             && ( std_vector_jet_pt[0] < 20 || std_vector_jet_cmvav2[0] < -0.715 ) \
#             && ( std_vector_jet_pt[1] < 20 || std_vector_jet_cmvav2[1] < -0.715 ) \
#             && ( std_vector_jet_pt[2] < 20 || std_vector_jet_cmvav2[2] < -0.715 ) \
#             && ( std_vector_jet_pt[3] < 20 || std_vector_jet_cmvav2[3] < -0.715 ) \
#             && ( std_vector_jet_pt[4] < 20 || std_vector_jet_cmvav2[4] < -0.715 ) \
#             && ( std_vector_jet_pt[5] < 20 || std_vector_jet_cmvav2[5] < -0.715 ) \
#             && ( std_vector_jet_pt[6] < 20 || std_vector_jet_cmvav2[6] < -0.715 ) \
#             && ( std_vector_jet_pt[7] < 20 || std_vector_jet_cmvav2[7] < -0.715 ) \
#             && ( std_vector_jet_pt[8] < 20 || std_vector_jet_cmvav2[8] < -0.715 ) \
#             && ( std_vector_jet_pt[9] < 20 || std_vector_jet_cmvav2[9] < -0.715 ) \
#             && ( std_vector_lepton_flavour[0] == -13 || std_vector_lepton_flavour[1] == -13) \
# '

# cuts['ww_e+mu-1j_em'] = 'njet == 1 \
#             && mpmet > 20 \
#             && ptll > 30 \
#             && ( std_vector_jet_pt[0] < 20 || std_vector_jet_cmvav2[0] < -0.715 ) \
#             && ( std_vector_jet_pt[1] < 20 || std_vector_jet_cmvav2[1] < -0.715 ) \
#             && ( std_vector_jet_pt[2] < 20 || std_vector_jet_cmvav2[2] < -0.715 ) \
#             && ( std_vector_jet_pt[3] < 20 || std_vector_jet_cmvav2[3] < -0.715 ) \
#             && ( std_vector_jet_pt[4] < 20 || std_vector_jet_cmvav2[4] < -0.715 ) \
#             && ( std_vector_jet_pt[5] < 20 || std_vector_jet_cmvav2[5] < -0.715 ) \
#             && ( std_vector_jet_pt[6] < 20 || std_vector_jet_cmvav2[6] < -0.715 ) \
#             && ( std_vector_jet_pt[7] < 20 || std_vector_jet_cmvav2[7] < -0.715 ) \
#             && ( std_vector_jet_pt[8] < 20 || std_vector_jet_cmvav2[8] < -0.715 ) \
#             && ( std_vector_jet_pt[9] < 20 || std_vector_jet_cmvav2[9] < -0.715 ) \
#             && ( std_vector_lepton_flavour[0] == 13 || std_vector_lepton_flavour[1] == 13) \
# '


# cuts['ww_TopCR0je-mu+_em'] = 'njet == 0 \
#             && mpmet > 20 \
#             && ptll > 30 \
#             && mth > 40 \
#             && (( std_vector_jet_pt[0] > 20 && std_vector_jet_cmvav2[0] > -0.715 )  \
#             ||  ( std_vector_jet_pt[1] > 20 && std_vector_jet_cmvav2[1] > -0.715 )  \
#             ||  ( std_vector_jet_pt[2] > 20 && std_vector_jet_cmvav2[2] > -0.715 )  \
#             ||  ( std_vector_jet_pt[3] > 20 && std_vector_jet_cmvav2[3] > -0.715 )  \
#             ||  ( std_vector_jet_pt[4] > 20 && std_vector_jet_cmvav2[4] > -0.715 )  \
#             ||  ( std_vector_jet_pt[5] > 20 && std_vector_jet_cmvav2[5] > -0.715 )  \
#             ||  ( std_vector_jet_pt[6] > 20 && std_vector_jet_cmvav2[6] > -0.715 )  \
#             ||  ( std_vector_jet_pt[7] > 20 && std_vector_jet_cmvav2[7] > -0.715 )  \
#             ||  ( std_vector_jet_pt[8] > 20 && std_vector_jet_cmvav2[8] > -0.715 )  \
#             ||  ( std_vector_jet_pt[9] > 20 && std_vector_jet_cmvav2[9] > -0.715 )) \
#             && ( std_vector_lepton_flavour[0] == -13 || std_vector_lepton_flavour[1] == -13) \
# '


# cuts['ww_TopCR1je+mu-_em'] = 'njet == 1 \
#             && mpmet > 20 \
#             && ptll > 30 \
#             && mth > 40 \
#             && (( std_vector_jet_pt[0] > 20 && std_vector_jet_cmvav2[0] > -0.715 )  \
#             ||  ( std_vector_jet_pt[1] > 20 && std_vector_jet_cmvav2[1] > -0.715 )  \
#             ||  ( std_vector_jet_pt[2] > 20 && std_vector_jet_cmvav2[2] > -0.715 )  \
#             ||  ( std_vector_jet_pt[3] > 20 && std_vector_jet_cmvav2[3] > -0.715 )  \
#             ||  ( std_vector_jet_pt[4] > 20 && std_vector_jet_cmvav2[4] > -0.715 )  \
#             ||  ( std_vector_jet_pt[5] > 20 && std_vector_jet_cmvav2[5] > -0.715 )  \
#             ||  ( std_vector_jet_pt[6] > 20 && std_vector_jet_cmvav2[6] > -0.715 )  \
#             ||  ( std_vector_jet_pt[7] > 20 && std_vector_jet_cmvav2[7] > -0.715 )  \
#             ||  ( std_vector_jet_pt[8] > 20 && std_vector_jet_cmvav2[8] > -0.715 )  \
#             ||  ( std_vector_jet_pt[9] > 20 && std_vector_jet_cmvav2[9] > -0.715 )) \
#             && ( std_vector_lepton_flavour[0] == 13 || std_vector_lepton_flavour[1] == 13) \
# '

# cuts['ww_TopCR1je-mu+_em'] = 'njet == 1 \
#             && mpmet > 20 \
#             && ptll > 30 \
#             && mth > 40 \
#             && (( std_vector_jet_pt[0] > 20 && std_vector_jet_cmvav2[0] > -0.715 )  \
#             ||  ( std_vector_jet_pt[1] > 20 && std_vector_jet_cmvav2[1] > -0.715 )  \
#             ||  ( std_vector_jet_pt[2] > 20 && std_vector_jet_cmvav2[2] > -0.715 )  \
#             ||  ( std_vector_jet_pt[3] > 20 && std_vector_jet_cmvav2[3] > -0.715 )  \
#             ||  ( std_vector_jet_pt[4] > 20 && std_vector_jet_cmvav2[4] > -0.715 )  \
#             ||  ( std_vector_jet_pt[5] > 20 && std_vector_jet_cmvav2[5] > -0.715 )  \
#             ||  ( std_vector_jet_pt[6] > 20 && std_vector_jet_cmvav2[6] > -0.715 )  \
#             ||  ( std_vector_jet_pt[7] > 20 && std_vector_jet_cmvav2[7] > -0.715 )  \
#             ||  ( std_vector_jet_pt[8] > 20 && std_vector_jet_cmvav2[8] > -0.715 )  \
#             ||  ( std_vector_jet_pt[9] > 20 && std_vector_jet_cmvav2[9] > -0.715 )) \
#             && ( std_vector_lepton_flavour[0] == -13 || std_vector_lepton_flavour[1] == -13) \
# '
# cuts['ww_BVeto1j_em_eta_minor_3'] = 'njet == 1 \
#             && mpmet > 20 \
#             && ptll > 30 \
#             && ( std_vector_jet_pt[0] < 20 || std_vector_jet_cmvav2[0] < -0.715 ) \
#             && ( std_vector_jet_pt[1] < 20 || std_vector_jet_cmvav2[1] < -0.715 ) \
#             && ( std_vector_jet_pt[2] < 20 || std_vector_jet_cmvav2[2] < -0.715 ) \
#             && ( std_vector_jet_pt[3] < 20 || std_vector_jet_cmvav2[3] < -0.715 ) \
#             && ( std_vector_jet_pt[4] < 20 || std_vector_jet_cmvav2[4] < -0.715 ) \
#             && ( std_vector_jet_pt[5] < 20 || std_vector_jet_cmvav2[5] < -0.715 ) \
#             && ( std_vector_jet_pt[6] < 20 || std_vector_jet_cmvav2[6] < -0.715 ) \
#             && ( std_vector_jet_pt[7] < 20 || std_vector_jet_cmvav2[7] < -0.715 ) \
#             && ( std_vector_jet_pt[8] < 20 || std_vector_jet_cmvav2[8] < -0.715 ) \
#             && ( std_vector_jet_pt[9] < 20 || std_vector_jet_cmvav2[9] < -0.715 ) \
#             && abs(std_vector_jet_eta[0]) < 3 \
# '


# cuts['ww_BVeto1j_em_eta_major_3'] = 'njet == 1 \
#             && mpmet > 20 \
#             && ptll > 30 \
#             && ( std_vector_jet_pt[0] < 20 || std_vector_jet_cmvav2[0] < -0.715 ) \
#             && ( std_vector_jet_pt[1] < 20 || std_vector_jet_cmvav2[1] < -0.715 ) \
#             && ( std_vector_jet_pt[2] < 20 || std_vector_jet_cmvav2[2] < -0.715 ) \
#             && ( std_vector_jet_pt[3] < 20 || std_vector_jet_cmvav2[3] < -0.715 ) \
#             && ( std_vector_jet_pt[4] < 20 || std_vector_jet_cmvav2[4] < -0.715 ) \
#             && ( std_vector_jet_pt[5] < 20 || std_vector_jet_cmvav2[5] < -0.715 ) \
#             && ( std_vector_jet_pt[6] < 20 || std_vector_jet_cmvav2[6] < -0.715 ) \
#             && ( std_vector_jet_pt[7] < 20 || std_vector_jet_cmvav2[7] < -0.715 ) \
#             && ( std_vector_jet_pt[8] < 20 || std_vector_jet_cmvav2[8] < -0.715 ) \
#             && ( std_vector_jet_pt[9] < 20 || std_vector_jet_cmvav2[9] < -0.715 ) \
#             && abs(std_vector_jet_eta[0]) > 3 \
# '

# cuts['ww_BVetoIncl_em_eta_major_3'] = '(njet == 1 || njet == 0) \
#             && mpmet > 20 \
#             && ptll > 30 \
#             && ( std_vector_jet_pt[0] < 20 || std_vector_jet_cmvav2[0] < -0.715 ) \
#             && ( std_vector_jet_pt[1] < 20 || std_vector_jet_cmvav2[1] < -0.715 ) \
#             && ( std_vector_jet_pt[2] < 20 || std_vector_jet_cmvav2[2] < -0.715 ) \
#             && ( std_vector_jet_pt[3] < 20 || std_vector_jet_cmvav2[3] < -0.715 ) \
#             && ( std_vector_jet_pt[4] < 20 || std_vector_jet_cmvav2[4] < -0.715 ) \
#             && ( std_vector_jet_pt[5] < 20 || std_vector_jet_cmvav2[5] < -0.715 ) \
#             && ( std_vector_jet_pt[6] < 20 || std_vector_jet_cmvav2[6] < -0.715 ) \
#             && ( std_vector_jet_pt[7] < 20 || std_vector_jet_cmvav2[7] < -0.715 ) \
#             && ( std_vector_jet_pt[8] < 20 || std_vector_jet_cmvav2[8] < -0.715 ) \
#             && ( std_vector_jet_pt[9] < 20 || std_vector_jet_cmvav2[9] < -0.715 ) \
#             && abs(std_vector_jet_eta[0]) > 3 \
# '

# cuts['ww_BVetoIncl_em_eta_minor_3'] = '(njet == 1 || njet == 0) \
#             && mpmet > 20 \
#             && ptll > 30 \
#             && ( std_vector_jet_pt[0] < 20 || std_vector_jet_cmvav2[0] < -0.715 ) \
#             && ( std_vector_jet_pt[1] < 20 || std_vector_jet_cmvav2[1] < -0.715 ) \
#             && ( std_vector_jet_pt[2] < 20 || std_vector_jet_cmvav2[2] < -0.715 ) \
#             && ( std_vector_jet_pt[3] < 20 || std_vector_jet_cmvav2[3] < -0.715 ) \
#             && ( std_vector_jet_pt[4] < 20 || std_vector_jet_cmvav2[4] < -0.715 ) \
#             && ( std_vector_jet_pt[5] < 20 || std_vector_jet_cmvav2[5] < -0.715 ) \
#             && ( std_vector_jet_pt[6] < 20 || std_vector_jet_cmvav2[6] < -0.715 ) \
#             && ( std_vector_jet_pt[7] < 20 || std_vector_jet_cmvav2[7] < -0.715 ) \
#             && ( std_vector_jet_pt[8] < 20 || std_vector_jet_cmvav2[8] < -0.715 ) \
#             && ( std_vector_jet_pt[9] < 20 || std_vector_jet_cmvav2[9] < -0.715 ) \
#             && abs(std_vector_jet_eta[0]) < 3 \
# '

# cuts['ww_N1bveto0j_em'] = 'njet == 0 \
#             && mpmet > 20 \
#             && ptll > 30 \
# '


# cuts['ww_N1bveto1j_em'] = 'njet == 1 \
#             && mpmet > 20 \
#             && ptll > 30 \
# '


# cuts['ww_N1mpmet0j_em'] = 'njet == 0 \
#             && ptll > 30 \
#             && ( std_vector_jet_pt[0] < 20 || std_vector_jet_cmvav2[0] < -0.715 ) \
#             && ( std_vector_jet_pt[1] < 20 || std_vector_jet_cmvav2[1] < -0.715 ) \
#             && ( std_vector_jet_pt[2] < 20 || std_vector_jet_cmvav2[2] < -0.715 ) \
#             && ( std_vector_jet_pt[3] < 20 || std_vector_jet_cmvav2[3] < -0.715 ) \
#             && ( std_vector_jet_pt[4] < 20 || std_vector_jet_cmvav2[4] < -0.715 ) \
#             && ( std_vector_jet_pt[5] < 20 || std_vector_jet_cmvav2[5] < -0.715 ) \
#             && ( std_vector_jet_pt[6] < 20 || std_vector_jet_cmvav2[6] < -0.715 ) \
#             && ( std_vector_jet_pt[7] < 20 || std_vector_jet_cmvav2[7] < -0.715 ) \
#             && ( std_vector_jet_pt[8] < 20 || std_vector_jet_cmvav2[8] < -0.715 ) \
#             && ( std_vector_jet_pt[9] < 20 || std_vector_jet_cmvav2[9] < -0.715 ) \
# '

# cuts['ww_N1mpmet1j_em'] = 'njet == 1 \
#             && ptll > 30 \
#             && ( std_vector_jet_pt[0] < 20 || std_vector_jet_cmvav2[0] < -0.715 ) \
#             && ( std_vector_jet_pt[1] < 20 || std_vector_jet_cmvav2[1] < -0.715 ) \
#             && ( std_vector_jet_pt[2] < 20 || std_vector_jet_cmvav2[2] < -0.715 ) \
#             && ( std_vector_jet_pt[3] < 20 || std_vector_jet_cmvav2[3] < -0.715 ) \
#             && ( std_vector_jet_pt[4] < 20 || std_vector_jet_cmvav2[4] < -0.715 ) \
#             && ( std_vector_jet_pt[5] < 20 || std_vector_jet_cmvav2[5] < -0.715 ) \
#             && ( std_vector_jet_pt[6] < 20 || std_vector_jet_cmvav2[6] < -0.715 ) \
#             && ( std_vector_jet_pt[7] < 20 || std_vector_jet_cmvav2[7] < -0.715 ) \
#             && ( std_vector_jet_pt[8] < 20 || std_vector_jet_cmvav2[8] < -0.715 ) \
#             && ( std_vector_jet_pt[9] < 20 || std_vector_jet_cmvav2[9] < -0.715 ) \
# '


# cuts['ww_TopCR1j_em_alt'] = 'njet == 1 \
#             && mth > 40 \
#             && std_vector_jet_cmvav2[0] > -0.715 \
# '

#mll > 12GeV
# cuts['ww_mll_em'] = 'mll>12  \
#                      && (std_vector_lepton_flavour[0] * std_vector_lepton_flavour[1] == -11*13) \
# '

# cuts['ww_mll_mm'] = 'mll>12  \
#                      && (std_vector_lepton_flavour[0] * std_vector_lepton_flavour[1] == -13*13) \
# '

# cuts['ww_mll_ee'] = 'mll>12  \
#                      && (std_vector_lepton_flavour[0] * std_vector_lepton_flavour[1] == -11*11) \
# '

#MET > 20GeV
# cuts['ww_met_em'] = 'mll>12  \
#                      && (std_vector_lepton_flavour[0] * std_vector_lepton_flavour[1] == -11*13) \
#                      && metPfType1 > 20 \
# '

# cuts['ww_met_mm'] = 'mll>12  \
#                      && (std_vector_lepton_flavour[0] * std_vector_lepton_flavour[1] == -13*13) \
#                      && metPfType1 > 20 \
# '

# cuts['ww_met_ee'] = 'mll>12  \
#                      && (std_vector_lepton_flavour[0] * std_vector_lepton_flavour[1] == -11*11) \
#                      && metPfType1 > 20 \
# '


#ZVeto (only ee and mm)
# cuts['ww_ZVeto_em'] = 'mll>12  \
#                        && (std_vector_lepton_flavour[0] * std_vector_lepton_flavour[1] == -11*13) \
#                        && metPfType1 > 20 \
#                        && abs(mll - 91.1876) > 15 \
# '

# cuts['ww_ZVeto_mm'] = 'mll>12  \
#                        && (std_vector_lepton_flavour[0] * std_vector_lepton_flavour[1] == -13*13) \
#                        && metPfType1 > 20 \
#                        && abs(mll - 91.1876) > 15 \
# '

# cuts['ww_ZVeto_ee'] = 'mll>12  \
#                        && (std_vector_lepton_flavour[0] * std_vector_lepton_flavour[1] == -11*11) \
#                        && metPfType1 > 20 \
#                        && abs(mll - 91.1876) > 15 \
# '


#Delta Phi Veto
# cuts['ww_DPhiVeto_em'] = 'mll>12  \
#                          && (std_vector_lepton_flavour[0] * std_vector_lepton_flavour[1] == -11*13) \
#                          && metPfType1 > 20 \
#                          && abs(mll - 91.1876) > 15 \
#                          && (njet < 2 || dphilljetjet < 165.*TMath::DegToRad()) \
# '

# cuts['ww_DPhiVeto_mm'] = 'mll>12  \
#                          && (std_vector_lepton_flavour[0] * std_vector_lepton_flavour[1] == -13*13) \
#                          && metPfType1 > 20 \
#                          && abs(mll - 91.1876) > 15 \
#                          && (njet < 2 || dphilljetjet < 165.*TMath::DegToRad()) \
# '

# cuts['ww_DPhiVeto_ee'] = 'mll>12  \
#                          && (std_vector_lepton_flavour[0] * std_vector_lepton_flavour[1] == -11*11) \
#                          && metPfType1 > 20 \
#                          && abs(mll - 91.1876) > 15 \
#                          && (njet < 2 || dphilljetjet < 165.*TMath::DegToRad()) \
# '


#MetVar > 20/45 GeV
# cuts['ww_metvar_em'] = 'mll>12  \
#                          && (std_vector_lepton_flavour[0] * std_vector_lepton_flavour[1] == -11*13) \
#                          && metPfType1 > 20 \
#                          && abs(mll - 91.1876) > 15 \
#                          && (njet < 2 || dphilljetjet < 165.*TMath::DegToRad()) \
#                          && mpmet > 20 \
# '

# cuts['ww_metvar_mm'] = 'mll>12  \
#                          && (std_vector_lepton_flavour[0] * std_vector_lepton_flavour[1] == -13*13) \
#                          && metPfType1 > 20 \
#                          && abs(mll - 91.1876) > 15 \
#                          && (njet < 2 || dphilljetjet < 165.*TMath::DegToRad()) \
#                          && mpmet > 45 \
# '

# cuts['ww_metvar_ee'] = 'mll>12  \
#                          && (std_vector_lepton_flavour[0] * std_vector_lepton_flavour[1] == -11*11) \
#                          && metPfType1 > 20 \
#                          && abs(mll - 91.1876) > 15 \
#                          && (njet < 2 || dphilljetjet < 165.*TMath::DegToRad()) \
#                          && mpmet > 45 \
# '


#MetVar > 20/45 GeV
# cuts['ww_metvar_em'] = 'mll>12  \
#                          && (std_vector_lepton_flavour[0] * std_vector_lepton_flavour[1] == -11*13) \
#                          && metPfType1 > 20 \
#                          && abs(mll - 91.1876) > 15 \
#                          && (njet < 2 || dphilljetjet < 165.*TMath::DegToRad()) \
#                          && mpmet > 20 \
#                          && ptll > 30 \
# '

# cuts['ww_metvar_mm'] = 'mll>12  \
#                          && (std_vector_lepton_flavour[0] * std_vector_lepton_flavour[1] == -13*13) \
#                          && metPfType1 > 20 \
#                          && abs(mll - 91.1876) > 15 \
#                          && (njet < 2 || dphilljetjet < 165.*TMath::DegToRad()) \
#                          && mpmet > 45 \
#                          && ptll > 45 \
# '

# cuts['ww_metvar_ee'] = 'mll>12  \
#                          && (std_vector_lepton_flavour[0] * std_vector_lepton_flavour[1] == -11*11) \
#                          && metPfType1 > 20 \
#                          && abs(mll - 91.1876) > 15 \
#                          && (njet < 2 || dphilljetjet < 165.*TMath::DegToRad()) \
#                          && mpmet > 45 \
#                          && ptll > 45 \
# '


#BVeto
# cuts['ww_BVeto_em'] = 'mll>12  \
#                          && (std_vector_lepton_flavour[0] * std_vector_lepton_flavour[1] == -11*13) \
#                          && metPfType1 > 20 \
#                          && abs(mll - 91.1876) > 15 \
#                          && (njet < 2 || dphilljetjet < 165.*TMath::DegToRad()) \
#                          && mpmet > 20 \
#                          && ptll > 30 \
#                          && ( std_vector_jet_pt[0] < 20 || std_vector_jet_cmvav2[0] < -0.715 ) \
#                          && ( std_vector_jet_pt[1] < 20 || std_vector_jet_cmvav2[1] < -0.715 ) \
#                          && ( std_vector_jet_pt[2] < 20 || std_vector_jet_cmvav2[2] < -0.715 ) \
#                          && ( std_vector_jet_pt[3] < 20 || std_vector_jet_cmvav2[3] < -0.715 ) \
#                          && ( std_vector_jet_pt[4] < 20 || std_vector_jet_cmvav2[4] < -0.715 ) \
#                          && ( std_vector_jet_pt[5] < 20 || std_vector_jet_cmvav2[5] < -0.715 ) \
#                          && ( std_vector_jet_pt[6] < 20 || std_vector_jet_cmvav2[6] < -0.715 ) \
#                          && ( std_vector_jet_pt[7] < 20 || std_vector_jet_cmvav2[7] < -0.715 ) \
#                          && ( std_vector_jet_pt[8] < 20 || std_vector_jet_cmvav2[8] < -0.715 ) \
#                          && ( std_vector_jet_pt[9] < 20 || std_vector_jet_cmvav2[9] < -0.715 ) \
# '

# cuts['ww_BVeto_mm'] = 'mll>12  \
#                          && (std_vector_lepton_flavour[0] * std_vector_lepton_flavour[1] == -13*13) \
#                          && metPfType1 > 20 \
#                          && abs(mll - 91.1876) > 15 \
#                          && (njet < 2 || dphilljetjet < 165.*TMath::DegToRad()) \
#                          && mpmet > 45 \
#                          && ptll > 45 \
#                          && ( std_vector_jet_pt[0] < 20 || std_vector_jet_cmvav2[0] < -0.715 ) \
#                          && ( std_vector_jet_pt[1] < 20 || std_vector_jet_cmvav2[1] < -0.715 ) \
#                          && ( std_vector_jet_pt[2] < 20 || std_vector_jet_cmvav2[2] < -0.715 ) \
#                          && ( std_vector_jet_pt[3] < 20 || std_vector_jet_cmvav2[3] < -0.715 ) \
#                          && ( std_vector_jet_pt[4] < 20 || std_vector_jet_cmvav2[4] < -0.715 ) \
#                          && ( std_vector_jet_pt[5] < 20 || std_vector_jet_cmvav2[5] < -0.715 ) \
#                          && ( std_vector_jet_pt[6] < 20 || std_vector_jet_cmvav2[6] < -0.715 ) \
#                          && ( std_vector_jet_pt[7] < 20 || std_vector_jet_cmvav2[7] < -0.715 ) \
#                          && ( std_vector_jet_pt[8] < 20 || std_vector_jet_cmvav2[8] < -0.715 ) \
#                          && ( std_vector_jet_pt[9] < 20 || std_vector_jet_cmvav2[9] < -0.715 ) \
# '

# cuts['ww_BVeto_ee'] = 'mll>12  \
#                          && (std_vector_lepton_flavour[0] * std_vector_lepton_flavour[1] == -11*11) \
#                          && metPfType1 > 20 \
#                          && abs(mll - 91.1876) > 15 \
#                          && (njet < 2 || dphilljetjet < 165.*TMath::DegToRad()) \
#                          && mpmet > 45 \
#                          && ptll > 45 \
#                          && ( std_vector_jet_pt[0] < 20 || std_vector_jet_cmvav2[0] < -0.715 ) \
#                          && ( std_vector_jet_pt[1] < 20 || std_vector_jet_cmvav2[1] < -0.715 ) \
#                          && ( std_vector_jet_pt[2] < 20 || std_vector_jet_cmvav2[2] < -0.715 ) \
#                          && ( std_vector_jet_pt[3] < 20 || std_vector_jet_cmvav2[3] < -0.715 ) \
#                          && ( std_vector_jet_pt[4] < 20 || std_vector_jet_cmvav2[4] < -0.715 ) \
#                          && ( std_vector_jet_pt[5] < 20 || std_vector_jet_cmvav2[5] < -0.715 ) \
#                          && ( std_vector_jet_pt[6] < 20 || std_vector_jet_cmvav2[6] < -0.715 ) \
#                          && ( std_vector_jet_pt[7] < 20 || std_vector_jet_cmvav2[7] < -0.715 ) \
#                          && ( std_vector_jet_pt[8] < 20 || std_vector_jet_cmvav2[8] < -0.715 ) \
#                          && ( std_vector_jet_pt[9] < 20 || std_vector_jet_cmvav2[9] < -0.715 ) \
# '

# BVeto in 0 Jet Bin
# cuts['ww_BVeto0j_em'] = 'mll>12  \
#                          && (std_vector_lepton_flavour[0] * std_vector_lepton_flavour[1] == -11*13) \
#                          && metPfType1 > 20 \
#                          && (njet < 2 || dphilljetjet < 165.*TMath::DegToRad()) \
#                          && mpmet > 20 \
#                          && ptll > 30 \
#                          && ( std_vector_jet_pt[0] < 20 || std_vector_jet_cmvav2[0] < -0.715 ) \
#                          && ( std_vector_jet_pt[1] < 20 || std_vector_jet_cmvav2[1] < -0.715 ) \
#                          && ( std_vector_jet_pt[2] < 20 || std_vector_jet_cmvav2[2] < -0.715 ) \
#                          && ( std_vector_jet_pt[3] < 20 || std_vector_jet_cmvav2[3] < -0.715 ) \
#                          && ( std_vector_jet_pt[4] < 20 || std_vector_jet_cmvav2[4] < -0.715 ) \
#                          && ( std_vector_jet_pt[5] < 20 || std_vector_jet_cmvav2[5] < -0.715 ) \
#                          && ( std_vector_jet_pt[6] < 20 || std_vector_jet_cmvav2[6] < -0.715 ) \
#                          && ( std_vector_jet_pt[7] < 20 || std_vector_jet_cmvav2[7] < -0.715 ) \
#                          && ( std_vector_jet_pt[8] < 20 || std_vector_jet_cmvav2[8] < -0.715 ) \
#                          && ( std_vector_jet_pt[9] < 20 || std_vector_jet_cmvav2[9] < -0.715 ) \
#                          && njet == 0 \
# '

# cuts['ww_BVeto0j_mm'] = 'mll>12  \
#                          && (std_vector_lepton_flavour[0] * std_vector_lepton_flavour[1] == -13*13) \
#                          && metPfType1 > 20 \
#                          && abs(mll - 91.1876) > 15 \
#                          && (njet < 2 || dphilljetjet < 165.*TMath::DegToRad()) \
#                          && mpmet > 45 \
#                          && ptll > 45 \
#                          && ( std_vector_jet_pt[0] < 20 || std_vector_jet_cmvav2[0] < -0.715 ) \
#                          && ( std_vector_jet_pt[1] < 20 || std_vector_jet_cmvav2[1] < -0.715 ) \
#                          && ( std_vector_jet_pt[2] < 20 || std_vector_jet_cmvav2[2] < -0.715 ) \
#                          && ( std_vector_jet_pt[3] < 20 || std_vector_jet_cmvav2[3] < -0.715 ) \
#                          && ( std_vector_jet_pt[4] < 20 || std_vector_jet_cmvav2[4] < -0.715 ) \
#                          && ( std_vector_jet_pt[5] < 20 || std_vector_jet_cmvav2[5] < -0.715 ) \
#                          && ( std_vector_jet_pt[6] < 20 || std_vector_jet_cmvav2[6] < -0.715 ) \
#                          && ( std_vector_jet_pt[7] < 20 || std_vector_jet_cmvav2[7] < -0.715 ) \
#                          && ( std_vector_jet_pt[8] < 20 || std_vector_jet_cmvav2[8] < -0.715 ) \
#                          && ( std_vector_jet_pt[9] < 20 || std_vector_jet_cmvav2[9] < -0.715 ) \
#                          && njet == 0 \
# '

# cuts['ww_BVeto0j_ee'] = 'mll>12  \
#                          && (std_vector_lepton_flavour[0] * std_vector_lepton_flavour[1] == -11*11) \
#                          && metPfType1 > 20 \
#                          && abs(mll - 91.1876) > 15 \
#                          && (njet < 2 || dphilljetjet < 165.*TMath::DegToRad()) \
#                          && mpmet > 45 \
#                          && ptll > 45 \
#                          && ( std_vector_jet_pt[0] < 20 || std_vector_jet_cmvav2[0] < -0.715 ) \
#                          && ( std_vector_jet_pt[1] < 20 || std_vector_jet_cmvav2[1] < -0.715 ) \
#                          && ( std_vector_jet_pt[2] < 20 || std_vector_jet_cmvav2[2] < -0.715 ) \
#                          && ( std_vector_jet_pt[3] < 20 || std_vector_jet_cmvav2[3] < -0.715 ) \
#                          && ( std_vector_jet_pt[4] < 20 || std_vector_jet_cmvav2[4] < -0.715 ) \
#                          && ( std_vector_jet_pt[5] < 20 || std_vector_jet_cmvav2[5] < -0.715 ) \
#                          && ( std_vector_jet_pt[6] < 20 || std_vector_jet_cmvav2[6] < -0.715 ) \
#                          && ( std_vector_jet_pt[7] < 20 || std_vector_jet_cmvav2[7] < -0.715 ) \
#                          && ( std_vector_jet_pt[8] < 20 || std_vector_jet_cmvav2[8] < -0.715 ) \
#                          && ( std_vector_jet_pt[9] < 20 || std_vector_jet_cmvav2[9] < -0.715 ) \
#                          && njet == 0 \
# '

# BVeto in 1 Jet Bin
# cuts['ww_BVeto1j_em'] = 'mll>12  \
#                          && (std_vector_lepton_flavour[0] * std_vector_lepton_flavour[1] == -11*13) \
#                          && metPfType1 > 20 \
#                          && (njet < 2 || dphilljetjet < 165.*TMath::DegToRad()) \
#                          && mpmet > 20 \
#                          && ptll > 30 \
#                          && ( std_vector_jet_pt[0] < 20 || std_vector_jet_cmvav2[0] < -0.715 ) \
#                          && ( std_vector_jet_pt[1] < 20 || std_vector_jet_cmvav2[1] < -0.715 ) \
#                          && ( std_vector_jet_pt[2] < 20 || std_vector_jet_cmvav2[2] < -0.715 ) \
#                          && ( std_vector_jet_pt[3] < 20 || std_vector_jet_cmvav2[3] < -0.715 ) \
#                          && ( std_vector_jet_pt[4] < 20 || std_vector_jet_cmvav2[4] < -0.715 ) \
#                          && ( std_vector_jet_pt[5] < 20 || std_vector_jet_cmvav2[5] < -0.715 ) \
#                          && ( std_vector_jet_pt[6] < 20 || std_vector_jet_cmvav2[6] < -0.715 ) \
#                          && ( std_vector_jet_pt[7] < 20 || std_vector_jet_cmvav2[7] < -0.715 ) \
#                          && ( std_vector_jet_pt[8] < 20 || std_vector_jet_cmvav2[8] < -0.715 ) \
#                          && ( std_vector_jet_pt[9] < 20 || std_vector_jet_cmvav2[9] < -0.715 ) \
#                          && njet == 1 \
# '

# # cuts['ww_BVeto1j_mm'] = 'mll>12  \
#                          && (std_vector_lepton_flavour[0] * std_vector_lepton_flavour[1] == -13*13) \
#                          && metPfType1 > 20 \
#                          && abs(mll - 91.1876) > 15 \
#                          && (njet < 2 || dphilljetjet < 165.*TMath::DegToRad()) \
#                          && mpmet > 45 \
#                          && ptll > 45 \
#                          && ( std_vector_jet_pt[0] < 20 || std_vector_jet_cmvav2[0] < -0.715 ) \
#                          && ( std_vector_jet_pt[1] < 20 || std_vector_jet_cmvav2[1] < -0.715 ) \
#                          && ( std_vector_jet_pt[2] < 20 || std_vector_jet_cmvav2[2] < -0.715 ) \
#                          && ( std_vector_jet_pt[3] < 20 || std_vector_jet_cmvav2[3] < -0.715 ) \
#                          && ( std_vector_jet_pt[4] < 20 || std_vector_jet_cmvav2[4] < -0.715 ) \
#                          && ( std_vector_jet_pt[5] < 20 || std_vector_jet_cmvav2[5] < -0.715 ) \
#                          && ( std_vector_jet_pt[6] < 20 || std_vector_jet_cmvav2[6] < -0.715 ) \
#                          && ( std_vector_jet_pt[7] < 20 || std_vector_jet_cmvav2[7] < -0.715 ) \
#                          && ( std_vector_jet_pt[8] < 20 || std_vector_jet_cmvav2[8] < -0.715 ) \
#                          && ( std_vector_jet_pt[9] < 20 || std_vector_jet_cmvav2[9] < -0.715 ) \
#                          && njet == 1 \
# '

# cuts['ww_BVeto1j_ee'] = 'mll>12  \
#                          && (std_vector_lepton_flavour[0] * std_vector_lepton_flavour[1] == -11*11) \
#                          && metPfType1 > 20 \
#                          && abs(mll - 91.1876) > 15 \
#                          && (njet < 2 || dphilljetjet < 165.*TMath::DegToRad()) \
#                          && mpmet > 45 \
#                          && ptll > 45 \
#                          && ( std_vector_jet_pt[0] < 20 || std_vector_jet_cmvav2[0] < -0.715 ) \
#                          && ( std_vector_jet_pt[1] < 20 || std_vector_jet_cmvav2[1] < -0.715 ) \
#                          && ( std_vector_jet_pt[2] < 20 || std_vector_jet_cmvav2[2] < -0.715 ) \
#                          && ( std_vector_jet_pt[3] < 20 || std_vector_jet_cmvav2[3] < -0.715 ) \
#                          && ( std_vector_jet_pt[4] < 20 || std_vector_jet_cmvav2[4] < -0.715 ) \
#                          && ( std_vector_jet_pt[5] < 20 || std_vector_jet_cmvav2[5] < -0.715 ) \
#                          && ( std_vector_jet_pt[6] < 20 || std_vector_jet_cmvav2[6] < -0.715 ) \
#                          && ( std_vector_jet_pt[7] < 20 || std_vector_jet_cmvav2[7] < -0.715 ) \
#                          && ( std_vector_jet_pt[8] < 20 || std_vector_jet_cmvav2[8] < -0.715 ) \
#                          && ( std_vector_jet_pt[9] < 20 || std_vector_jet_cmvav2[9] < -0.715 ) \
#                          && njet == 1 \
# '


#Soft Muon Veto
# cuts['ww_SoftMu_em']= 'mll>12  \
#                          && (std_vector_lepton_flavour[0] * std_vector_lepton_flavour[1] == -11*13) \
#                          && metPfType1 > 20 \
#                          && abs(mll - 91.1876) > 15 \
#                          && (njet < 2 || dphilljetjet < 165.*TMath::DegToRad()) \
#                          && mpmet > 20 \
#                          && ptll > 30 \
#                          && ( std_vector_jet_pt[0] < 20 || std_vector_jet_cmvav2[0] < -0.715 ) \
#                          && ( std_vector_jet_pt[1] < 20 || std_vector_jet_cmvav2[1] < -0.715 ) \
#                          && ( std_vector_jet_pt[2] < 20 || std_vector_jet_cmvav2[2] < -0.715 ) \
#                          && ( std_vector_jet_pt[3] < 20 || std_vector_jet_cmvav2[3] < -0.715 ) \
#                          && ( std_vector_jet_pt[4] < 20 || std_vector_jet_cmvav2[4] < -0.715 ) \
#                          && ( std_vector_jet_pt[5] < 20 || std_vector_jet_cmvav2[5] < -0.715 ) \
#                          && ( std_vector_jet_pt[6] < 20 || std_vector_jet_cmvav2[6] < -0.715 ) \
#                          && ( std_vector_jet_pt[7] < 20 || std_vector_jet_cmvav2[7] < -0.715 ) \
#                          && ( std_vector_jet_pt[8] < 20 || std_vector_jet_cmvav2[8] < -0.715 ) \
#                          && ( std_vector_jet_pt[9] < 20 || std_vector_jet_cmvav2[9] < -0.715 ) \
#                          && ( std_vector_softMuPt[0] < 3 || std_vector_softMuIsTrackerMuon[0] <= 0 || std_vector_softMuTMLastStationAngTight[0] <= 0 || std_vector_softMuD0[0] < 0.2 || std_vector_softMuDz[0] < 0.5 || std_vector_softMuIso[0] < 0.15 ) \
#                          && ( std_vector_softMuPt[1] < 3 || std_vector_softMuIsTrackerMuon[1] <= 0 || std_vector_softMuTMLastStationAngTight[1] <= 0 || std_vector_softMuD0[1] < 0.2 || std_vector_softMuDz[1] < 0.5 || std_vector_softMuIso[1] < 0.15 ) \
#                          && ( std_vector_softMuPt[2] < 3 || std_vector_softMuIsTrackerMuon[2] <= 0 || std_vector_softMuTMLastStationAngTight[2] <= 0 || std_vector_softMuD0[2] < 0.2 || std_vector_softMuDz[2] < 0.5 || std_vector_softMuIso[2] < 0.15 ) \
#                          && ( std_vector_softMuPt[3] < 3 || std_vector_softMuIsTrackerMuon[3] <= 0 || std_vector_softMuTMLastStationAngTight[3] <= 0 || std_vector_softMuD0[3] < 0.2 || std_vector_softMuDz[3] < 0.5 || std_vector_softMuIso[3] < 0.15 ) \
#                          && ( std_vector_softMuPt[4] < 3 || std_vector_softMuIsTrackerMuon[4] <= 0 || std_vector_softMuTMLastStationAngTight[4] <= 0 || std_vector_softMuD0[4] < 0.2 || std_vector_softMuDz[4] < 0.5 || std_vector_softMuIso[4] < 0.15 ) \
#                          && ( std_vector_softMuPt[5] < 3 || std_vector_softMuIsTrackerMuon[5] <= 0 || std_vector_softMuTMLastStationAngTight[5] <= 0 || std_vector_softMuD0[5] < 0.2 || std_vector_softMuDz[5] < 0.5 || std_vector_softMuIso[5] < 0.15 ) \
#                          && ( std_vector_softMuPt[6] < 3 || std_vector_softMuIsTrackerMuon[6] <= 0 || std_vector_softMuTMLastStationAngTight[6] <= 0 || std_vector_softMuD0[6] < 0.2 || std_vector_softMuDz[6] < 0.5 || std_vector_softMuIso[6] < 0.15 ) \
#                          && ( std_vector_softMuPt[7] < 3 || std_vector_softMuIsTrackerMuon[7] <= 0 || std_vector_softMuTMLastStationAngTight[7] <= 0 || std_vector_softMuD0[7] < 0.2 || std_vector_softMuDz[7] < 0.5 || std_vector_softMuIso[7] < 0.15 ) \
#                          && ( std_vector_softMuPt[8] < 3 || std_vector_softMuIsTrackerMuon[8] <= 0 || std_vector_softMuTMLastStationAngTight[8] <= 0 || std_vector_softMuD0[8] < 0.2 || std_vector_softMuDz[8] < 0.5 || std_vector_softMuIso[8] < 0.15 ) \
#                          && ( std_vector_softMuPt[9] < 3 || std_vector_softMuIsTrackerMuon[9] <= 0 || std_vector_softMuTMLastStationAngTight[9] <= 0 || std_vector_softMuD0[9] < 0.2 || std_vector_softMuDz[9] < 0.5 || std_vector_softMuIso[9] < 0.15 ) \
# '


# cuts['ww_SoftMu_mm'] = 'mll>12  \
#                          && (std_vector_lepton_flavour[0] * std_vector_lepton_flavour[1] == -13*13) \
#                          && metPfType1 > 20 \
#                          && abs(mll - 91.1876) > 15 \
#                          && (njet < 2 || dphilljetjet < 165.*TMath::DegToRad()) \
#                          && mpmet > 45 \
#                          && ptll > 45 \
#                          && ( std_vector_jet_pt[0] < 20 || std_vector_jet_cmvav2[0] < -0.715 ) \
#                          && ( std_vector_jet_pt[1] < 20 || std_vector_jet_cmvav2[1] < -0.715 ) \
#                          && ( std_vector_jet_pt[2] < 20 || std_vector_jet_cmvav2[2] < -0.715 ) \
#                          && ( std_vector_jet_pt[3] < 20 || std_vector_jet_cmvav2[3] < -0.715 ) \
#                          && ( std_vector_jet_pt[4] < 20 || std_vector_jet_cmvav2[4] < -0.715 ) \
#                          && ( std_vector_jet_pt[5] < 20 || std_vector_jet_cmvav2[5] < -0.715 ) \
#                          && ( std_vector_jet_pt[6] < 20 || std_vector_jet_cmvav2[6] < -0.715 ) \
#                          && ( std_vector_jet_pt[7] < 20 || std_vector_jet_cmvav2[7] < -0.715 ) \
#                          && ( std_vector_jet_pt[8] < 20 || std_vector_jet_cmvav2[8] < -0.715 ) \
#                          && ( std_vector_jet_pt[9] < 20 || std_vector_jet_cmvav2[9] < -0.715 ) \
#                          && ( std_vector_softMuPt[0] < 3 || std_vector_softMuIsTrackerMuon[0] <= 0 || std_vector_softMuTMLastStationAngTight[0] <= 0 || std_vector_softMuD0[0] < 0.2 || std_vector_softMuDz[0] < 0.5 || std_vector_softMuIso[0] < 0.15 ) \
#                          && ( std_vector_softMuPt[1] < 3 || std_vector_softMuIsTrackerMuon[1] <= 0 || std_vector_softMuTMLastStationAngTight[1] <= 0 || std_vector_softMuD0[1] < 0.2 || std_vector_softMuDz[1] < 0.5 || std_vector_softMuIso[1] < 0.15 ) \
#                          && ( std_vector_softMuPt[2] < 3 || std_vector_softMuIsTrackerMuon[2] <= 0 || std_vector_softMuTMLastStationAngTight[2] <= 0 || std_vector_softMuD0[2] < 0.2 || std_vector_softMuDz[2] < 0.5 || std_vector_softMuIso[2] < 0.15 ) \
#                          && ( std_vector_softMuPt[3] < 3 || std_vector_softMuIsTrackerMuon[3] <= 0 || std_vector_softMuTMLastStationAngTight[3] <= 0 || std_vector_softMuD0[3] < 0.2 || std_vector_softMuDz[3] < 0.5 || std_vector_softMuIso[3] < 0.15 ) \
#                          && ( std_vector_softMuPt[4] < 3 || std_vector_softMuIsTrackerMuon[4] <= 0 || std_vector_softMuTMLastStationAngTight[4] <= 0 || std_vector_softMuD0[4] < 0.2 || std_vector_softMuDz[4] < 0.5 || std_vector_softMuIso[4] < 0.15 ) \
#                          && ( std_vector_softMuPt[5] < 3 || std_vector_softMuIsTrackerMuon[5] <= 0 || std_vector_softMuTMLastStationAngTight[5] <= 0 || std_vector_softMuD0[5] < 0.2 || std_vector_softMuDz[5] < 0.5 || std_vector_softMuIso[5] < 0.15 ) \
#                          && ( std_vector_softMuPt[6] < 3 || std_vector_softMuIsTrackerMuon[6] <= 0 || std_vector_softMuTMLastStationAngTight[6] <= 0 || std_vector_softMuD0[6] < 0.2 || std_vector_softMuDz[6] < 0.5 || std_vector_softMuIso[6] < 0.15 ) \
#                          && ( std_vector_softMuPt[7] < 3 || std_vector_softMuIsTrackerMuon[7] <= 0 || std_vector_softMuTMLastStationAngTight[7] <= 0 || std_vector_softMuD0[7] < 0.2 || std_vector_softMuDz[7] < 0.5 || std_vector_softMuIso[7] < 0.15 ) \
#                          && ( std_vector_softMuPt[8] < 3 || std_vector_softMuIsTrackerMuon[8] <= 0 || std_vector_softMuTMLastStationAngTight[8] <= 0 || std_vector_softMuD0[8] < 0.2 || std_vector_softMuDz[8] < 0.5 || std_vector_softMuIso[8] < 0.15 ) \
#                          && ( std_vector_softMuPt[9] < 3 || std_vector_softMuIsTrackerMuon[9] <= 0 || std_vector_softMuTMLastStationAngTight[9] <= 0 || std_vector_softMuD0[9] < 0.2 || std_vector_softMuDz[9] < 0.5 || std_vector_softMuIso[9] < 0.15 ) \
# '


# cuts['ww_SoftMu_ee'] = 'mll>12  \
#                          && (std_vector_lepton_flavour[0] * std_vector_lepton_flavour[1] == -11*11) \
#                          && metPfType1 > 20 \
#                          && abs(mll - 91.1876) > 15 \
#                          && (njet < 2 || dphilljetjet < 165.*TMath::DegToRad()) \
#                          && mpmet > 45 \
#                          && ptll > 45 \
#                          && ( std_vector_jet_pt[0] < 20 || std_vector_jet_cmvav2[0] < -0.715 ) \
#                          && ( std_vector_jet_pt[1] < 20 || std_vector_jet_cmvav2[1] < -0.715 ) \
#                          && ( std_vector_jet_pt[2] < 20 || std_vector_jet_cmvav2[2] < -0.715 ) \
#                          && ( std_vector_jet_pt[3] < 20 || std_vector_jet_cmvav2[3] < -0.715 ) \
#                          && ( std_vector_jet_pt[4] < 20 || std_vector_jet_cmvav2[4] < -0.715 ) \
#                          && ( std_vector_jet_pt[5] < 20 || std_vector_jet_cmvav2[5] < -0.715 ) \
#                          && ( std_vector_jet_pt[6] < 20 || std_vector_jet_cmvav2[6] < -0.715 ) \
#                          && ( std_vector_jet_pt[7] < 20 || std_vector_jet_cmvav2[7] < -0.715 ) \
#                          && ( std_vector_jet_pt[8] < 20 || std_vector_jet_cmvav2[8] < -0.715 ) \
#                          && ( std_vector_jet_pt[9] < 20 || std_vector_jet_cmvav2[9] < -0.715 ) \
#                          && ( std_vector_softMuPt[0] < 3 || std_vector_softMuIsTrackerMuon[0] <= 0 || std_vector_softMuTMLastStationAngTight[0] <= 0 || std_vector_softMuD0[0] < 0.2 || std_vector_softMuDz[0] < 0.5 || std_vector_softMuIso[0] < 0.15 ) \
#                          && ( std_vector_softMuPt[1] < 3 || std_vector_softMuIsTrackerMuon[1] <= 0 || std_vector_softMuTMLastStationAngTight[1] <= 0 || std_vector_softMuD0[1] < 0.2 || std_vector_softMuDz[1] < 0.5 || std_vector_softMuIso[1] < 0.15 ) \
#                          && ( std_vector_softMuPt[2] < 3 || std_vector_softMuIsTrackerMuon[2] <= 0 || std_vector_softMuTMLastStationAngTight[2] <= 0 || std_vector_softMuD0[2] < 0.2 || std_vector_softMuDz[2] < 0.5 || std_vector_softMuIso[2] < 0.15 ) \
#                          && ( std_vector_softMuPt[3] < 3 || std_vector_softMuIsTrackerMuon[3] <= 0 || std_vector_softMuTMLastStationAngTight[3] <= 0 || std_vector_softMuD0[3] < 0.2 || std_vector_softMuDz[3] < 0.5 || std_vector_softMuIso[3] < 0.15 ) \
#                          && ( std_vector_softMuPt[4] < 3 || std_vector_softMuIsTrackerMuon[4] <= 0 || std_vector_softMuTMLastStationAngTight[4] <= 0 || std_vector_softMuD0[4] < 0.2 || std_vector_softMuDz[4] < 0.5 || std_vector_softMuIso[4] < 0.15 ) \
#                          && ( std_vector_softMuPt[5] < 3 || std_vector_softMuIsTrackerMuon[5] <= 0 || std_vector_softMuTMLastStationAngTight[5] <= 0 || std_vector_softMuD0[5] < 0.2 || std_vector_softMuDz[5] < 0.5 || std_vector_softMuIso[5] < 0.15 ) \
#                          && ( std_vector_softMuPt[6] < 3 || std_vector_softMuIsTrackerMuon[6] <= 0 || std_vector_softMuTMLastStationAngTight[6] <= 0 || std_vector_softMuD0[6] < 0.2 || std_vector_softMuDz[6] < 0.5 || std_vector_softMuIso[6] < 0.15 ) \
#                          && ( std_vector_softMuPt[7] < 3 || std_vector_softMuIsTrackerMuon[7] <= 0 || std_vector_softMuTMLastStationAngTight[7] <= 0 || std_vector_softMuD0[7] < 0.2 || std_vector_softMuDz[7] < 0.5 || std_vector_softMuIso[7] < 0.15 ) \
#                          && ( std_vector_softMuPt[8] < 3 || std_vector_softMuIsTrackerMuon[8] <= 0 || std_vector_softMuTMLastStationAngTight[8] <= 0 || std_vector_softMuD0[8] < 0.2 || std_vector_softMuDz[8] < 0.5 || std_vector_softMuIso[8] < 0.15 ) \
#                          && ( std_vector_softMuPt[9] < 3 || std_vector_softMuIsTrackerMuon[9] <= 0 || std_vector_softMuTMLastStationAngTight[9] <= 0 || std_vector_softMuD0[9] < 0.2 || std_vector_softMuDz[9] < 0.5 || std_vector_softMuIso[9] < 0.15 ) \
# '


#Soft Muon Veto 0 jet
# cuts['ww_SoftMu0j_em']= 'mll>12  \
#                          && (std_vector_lepton_flavour[0] * std_vector_lepton_flavour[1] == -11*13) \
#                          && metPfType1 > 20 \
#                          && abs(mll - 91.1876) > 15 \
#                          && (njet < 2 || dphilljetjet < 165.*TMath::DegToRad()) \
#                          && mpmet > 20 \
#                          && ptll > 30 \
#                          && ( std_vector_jet_pt[0] < 20 || std_vector_jet_cmvav2[0] < -0.715 ) \
#                          && ( std_vector_jet_pt[1] < 20 || std_vector_jet_cmvav2[1] < -0.715 ) \
#                          && ( std_vector_jet_pt[2] < 20 || std_vector_jet_cmvav2[2] < -0.715 ) \
#                          && ( std_vector_jet_pt[3] < 20 || std_vector_jet_cmvav2[3] < -0.715 ) \
#                          && ( std_vector_jet_pt[4] < 20 || std_vector_jet_cmvav2[4] < -0.715 ) \
#                          && ( std_vector_jet_pt[5] < 20 || std_vector_jet_cmvav2[5] < -0.715 ) \
#                          && ( std_vector_jet_pt[6] < 20 || std_vector_jet_cmvav2[6] < -0.715 ) \
#                          && ( std_vector_jet_pt[7] < 20 || std_vector_jet_cmvav2[7] < -0.715 ) \
#                          && ( std_vector_jet_pt[8] < 20 || std_vector_jet_cmvav2[8] < -0.715 ) \
#                          && ( std_vector_jet_pt[9] < 20 || std_vector_jet_cmvav2[9] < -0.715 ) \
#                          && ( std_vector_softMuPt[0] < 3 || std_vector_softMuIsTrackerMuon[0] <= 0 || std_vector_softMuTMLastStationAngTight[0] <= 0 || std_vector_softMuD0[0] < 0.2 || std_vector_softMuDz[0] < 0.5 || std_vector_softMuIso[0] < 0.15 ) \
#                          && ( std_vector_softMuPt[1] < 3 || std_vector_softMuIsTrackerMuon[1] <= 0 || std_vector_softMuTMLastStationAngTight[1] <= 0 || std_vector_softMuD0[1] < 0.2 || std_vector_softMuDz[1] < 0.5 || std_vector_softMuIso[1] < 0.15 ) \
#                          && ( std_vector_softMuPt[2] < 3 || std_vector_softMuIsTrackerMuon[2] <= 0 || std_vector_softMuTMLastStationAngTight[2] <= 0 || std_vector_softMuD0[2] < 0.2 || std_vector_softMuDz[2] < 0.5 || std_vector_softMuIso[2] < 0.15 ) \
#                          && ( std_vector_softMuPt[3] < 3 || std_vector_softMuIsTrackerMuon[3] <= 0 || std_vector_softMuTMLastStationAngTight[3] <= 0 || std_vector_softMuD0[3] < 0.2 || std_vector_softMuDz[3] < 0.5 || std_vector_softMuIso[3] < 0.15 ) \
#                          && ( std_vector_softMuPt[4] < 3 || std_vector_softMuIsTrackerMuon[4] <= 0 || std_vector_softMuTMLastStationAngTight[4] <= 0 || std_vector_softMuD0[4] < 0.2 || std_vector_softMuDz[4] < 0.5 || std_vector_softMuIso[4] < 0.15 ) \
#                          && ( std_vector_softMuPt[5] < 3 || std_vector_softMuIsTrackerMuon[5] <= 0 || std_vector_softMuTMLastStationAngTight[5] <= 0 || std_vector_softMuD0[5] < 0.2 || std_vector_softMuDz[5] < 0.5 || std_vector_softMuIso[5] < 0.15 ) \
#                          && ( std_vector_softMuPt[6] < 3 || std_vector_softMuIsTrackerMuon[6] <= 0 || std_vector_softMuTMLastStationAngTight[6] <= 0 || std_vector_softMuD0[6] < 0.2 || std_vector_softMuDz[6] < 0.5 || std_vector_softMuIso[6] < 0.15 ) \
#                          && ( std_vector_softMuPt[7] < 3 || std_vector_softMuIsTrackerMuon[7] <= 0 || std_vector_softMuTMLastStationAngTight[7] <= 0 || std_vector_softMuD0[7] < 0.2 || std_vector_softMuDz[7] < 0.5 || std_vector_softMuIso[7] < 0.15 ) \
#                          && ( std_vector_softMuPt[8] < 3 || std_vector_softMuIsTrackerMuon[8] <= 0 || std_vector_softMuTMLastStationAngTight[8] <= 0 || std_vector_softMuD0[8] < 0.2 || std_vector_softMuDz[8] < 0.5 || std_vector_softMuIso[8] < 0.15 ) \
#                          && ( std_vector_softMuPt[9] < 3 || std_vector_softMuIsTrackerMuon[9] <= 0 || std_vector_softMuTMLastStationAngTight[9] <= 0 || std_vector_softMuD0[9] < 0.2 || std_vector_softMuDz[9] < 0.5 || std_vector_softMuIso[9] < 0.15 ) \
#                          && njet == 0                                                          \
# '

# cuts['ww_SoftMu0j_mm'] = 'mll>12  \
#                          && (std_vector_lepton_flavour[0] * std_vector_lepton_flavour[1] == -13*13) \
#                          && metPfType1 > 20 \
#                          && abs(mll - 91.1876) > 15 \
#                          && (njet < 2 || dphilljetjet < 165.*TMath::DegToRad()) \
#                          && mpmet > 45 \
#                          && ptll > 45 \
#                          && ( std_vector_jet_pt[0] < 20 || std_vector_jet_cmvav2[0] < -0.715 ) \
#                          && ( std_vector_jet_pt[1] < 20 || std_vector_jet_cmvav2[1] < -0.715 ) \
#                          && ( std_vector_jet_pt[2] < 20 || std_vector_jet_cmvav2[2] < -0.715 ) \
#                          && ( std_vector_jet_pt[3] < 20 || std_vector_jet_cmvav2[3] < -0.715 ) \
#                          && ( std_vector_jet_pt[4] < 20 || std_vector_jet_cmvav2[4] < -0.715 ) \
#                          && ( std_vector_jet_pt[5] < 20 || std_vector_jet_cmvav2[5] < -0.715 ) \
#                          && ( std_vector_jet_pt[6] < 20 || std_vector_jet_cmvav2[6] < -0.715 ) \
#                          && ( std_vector_jet_pt[7] < 20 || std_vector_jet_cmvav2[7] < -0.715 ) \
#                          && ( std_vector_jet_pt[8] < 20 || std_vector_jet_cmvav2[8] < -0.715 ) \
#                          && ( std_vector_jet_pt[9] < 20 || std_vector_jet_cmvav2[9] < -0.715 ) \
#                          && ( std_vector_softMuPt[0] < 3 || std_vector_softMuIsTrackerMuon[0] <= 0 || std_vector_softMuTMLastStationAngTight[0] <= 0 || std_vector_softMuD0[0] < 0.2 || std_vector_softMuDz[0] < 0.5 || std_vector_softMuIso[0] < 0.15 ) \
#                          && ( std_vector_softMuPt[1] < 3 || std_vector_softMuIsTrackerMuon[1] <= 0 || std_vector_softMuTMLastStationAngTight[1] <= 0 || std_vector_softMuD0[1] < 0.2 || std_vector_softMuDz[1] < 0.5 || std_vector_softMuIso[1] < 0.15 ) \
#                          && ( std_vector_softMuPt[2] < 3 || std_vector_softMuIsTrackerMuon[2] <= 0 || std_vector_softMuTMLastStationAngTight[2] <= 0 || std_vector_softMuD0[2] < 0.2 || std_vector_softMuDz[2] < 0.5 || std_vector_softMuIso[2] < 0.15 ) \
#                          && ( std_vector_softMuPt[3] < 3 || std_vector_softMuIsTrackerMuon[3] <= 0 || std_vector_softMuTMLastStationAngTight[3] <= 0 || std_vector_softMuD0[3] < 0.2 || std_vector_softMuDz[3] < 0.5 || std_vector_softMuIso[3] < 0.15 ) \
#                          && ( std_vector_softMuPt[4] < 3 || std_vector_softMuIsTrackerMuon[4] <= 0 || std_vector_softMuTMLastStationAngTight[4] <= 0 || std_vector_softMuD0[4] < 0.2 || std_vector_softMuDz[4] < 0.5 || std_vector_softMuIso[4] < 0.15 ) \
#                          && ( std_vector_softMuPt[5] < 3 || std_vector_softMuIsTrackerMuon[5] <= 0 || std_vector_softMuTMLastStationAngTight[5] <= 0 || std_vector_softMuD0[5] < 0.2 || std_vector_softMuDz[5] < 0.5 || std_vector_softMuIso[5] < 0.15 ) \
#                          && ( std_vector_softMuPt[6] < 3 || std_vector_softMuIsTrackerMuon[6] <= 0 || std_vector_softMuTMLastStationAngTight[6] <= 0 || std_vector_softMuD0[6] < 0.2 || std_vector_softMuDz[6] < 0.5 || std_vector_softMuIso[6] < 0.15 ) \
#                          && ( std_vector_softMuPt[7] < 3 || std_vector_softMuIsTrackerMuon[7] <= 0 || std_vector_softMuTMLastStationAngTight[7] <= 0 || std_vector_softMuD0[7] < 0.2 || std_vector_softMuDz[7] < 0.5 || std_vector_softMuIso[7] < 0.15 ) \
#                          && ( std_vector_softMuPt[8] < 3 || std_vector_softMuIsTrackerMuon[8] <= 0 || std_vector_softMuTMLastStationAngTight[8] <= 0 || std_vector_softMuD0[8] < 0.2 || std_vector_softMuDz[8] < 0.5 || std_vector_softMuIso[8] < 0.15 ) \
#                          && ( std_vector_softMuPt[9] < 3 || std_vector_softMuIsTrackerMuon[9] <= 0 || std_vector_softMuTMLastStationAngTight[9] <= 0 || std_vector_softMuD0[9] < 0.2 || std_vector_softMuDz[9] < 0.5 || std_vector_softMuIso[9] < 0.15 ) \
#                          && njet == 0                                                          \
# '


# cuts['ww_SoftMu0j_ee'] = 'mll>12  \
#                          && (std_vector_lepton_flavour[0] * std_vector_lepton_flavour[1] == -11*11) \
#                          && metPfType1 > 20 \
#                          && abs(mll - 91.1876) > 15 \
#                          && (njet < 2 || dphilljetjet < 165.*TMath::DegToRad()) \
#                          && mpmet > 45 \
#                          && ptll > 45 \
#                          && ( std_vector_jet_pt[0] < 20 || std_vector_jet_cmvav2[0] < -0.715 ) \
#                          && ( std_vector_jet_pt[1] < 20 || std_vector_jet_cmvav2[1] < -0.715 ) \
#                          && ( std_vector_jet_pt[2] < 20 || std_vector_jet_cmvav2[2] < -0.715 ) \
#                          && ( std_vector_jet_pt[3] < 20 || std_vector_jet_cmvav2[3] < -0.715 ) \
#                          && ( std_vector_jet_pt[4] < 20 || std_vector_jet_cmvav2[4] < -0.715 ) \
#                          && ( std_vector_jet_pt[5] < 20 || std_vector_jet_cmvav2[5] < -0.715 ) \
#                          && ( std_vector_jet_pt[6] < 20 || std_vector_jet_cmvav2[6] < -0.715 ) \
#                          && ( std_vector_jet_pt[7] < 20 || std_vector_jet_cmvav2[7] < -0.715 ) \
#                          && ( std_vector_jet_pt[8] < 20 || std_vector_jet_cmvav2[8] < -0.715 ) \
#                          && ( std_vector_jet_pt[9] < 20 || std_vector_jet_cmvav2[9] < -0.715 ) \
#                          && ( std_vector_softMuPt[0] < 3 || std_vector_softMuIsTrackerMuon[0] <= 0 || std_vector_softMuTMLastStationAngTight[0] <= 0 || std_vector_softMuD0[0] < 0.2 || std_vector_softMuDz[0] < 0.5 || std_vector_softMuIso[0] < 0.15 ) \
#                          && ( std_vector_softMuPt[1] < 3 || std_vector_softMuIsTrackerMuon[1] <= 0 || std_vector_softMuTMLastStationAngTight[1] <= 0 || std_vector_softMuD0[1] < 0.2 || std_vector_softMuDz[1] < 0.5 || std_vector_softMuIso[1] < 0.15 ) \
#                          && ( std_vector_softMuPt[2] < 3 || std_vector_softMuIsTrackerMuon[2] <= 0 || std_vector_softMuTMLastStationAngTight[2] <= 0 || std_vector_softMuD0[2] < 0.2 || std_vector_softMuDz[2] < 0.5 || std_vector_softMuIso[2] < 0.15 ) \
#                          && ( std_vector_softMuPt[3] < 3 || std_vector_softMuIsTrackerMuon[3] <= 0 || std_vector_softMuTMLastStationAngTight[3] <= 0 || std_vector_softMuD0[3] < 0.2 || std_vector_softMuDz[3] < 0.5 || std_vector_softMuIso[3] < 0.15 ) \
#                          && ( std_vector_softMuPt[4] < 3 || std_vector_softMuIsTrackerMuon[4] <= 0 || std_vector_softMuTMLastStationAngTight[4] <= 0 || std_vector_softMuD0[4] < 0.2 || std_vector_softMuDz[4] < 0.5 || std_vector_softMuIso[4] < 0.15 ) \
#                          && ( std_vector_softMuPt[5] < 3 || std_vector_softMuIsTrackerMuon[5] <= 0 || std_vector_softMuTMLastStationAngTight[5] <= 0 || std_vector_softMuD0[5] < 0.2 || std_vector_softMuDz[5] < 0.5 || std_vector_softMuIso[5] < 0.15 ) \
#                          && ( std_vector_softMuPt[6] < 3 || std_vector_softMuIsTrackerMuon[6] <= 0 || std_vector_softMuTMLastStationAngTight[6] <= 0 || std_vector_softMuD0[6] < 0.2 || std_vector_softMuDz[6] < 0.5 || std_vector_softMuIso[6] < 0.15 ) \
#                          && ( std_vector_softMuPt[7] < 3 || std_vector_softMuIsTrackerMuon[7] <= 0 || std_vector_softMuTMLastStationAngTight[7] <= 0 || std_vector_softMuD0[7] < 0.2 || std_vector_softMuDz[7] < 0.5 || std_vector_softMuIso[7] < 0.15 ) \
#                          && ( std_vector_softMuPt[8] < 3 || std_vector_softMuIsTrackerMuon[8] <= 0 || std_vector_softMuTMLastStationAngTight[8] <= 0 || std_vector_softMuD0[8] < 0.2 || std_vector_softMuDz[8] < 0.5 || std_vector_softMuIso[8] < 0.15 ) \
#                          && ( std_vector_softMuPt[9] < 3 || std_vector_softMuIsTrackerMuon[9] <= 0 || std_vector_softMuTMLastStationAngTight[9] <= 0 || std_vector_softMuD0[9] < 0.2 || std_vector_softMuDz[9] < 0.5 || std_vector_softMuIso[9] < 0.15 ) \
#                          && njet == 0                                                          \
# '


#Soft Muon Veto 1 jet
# cuts['ww_SoftMu1j_em']= 'mll>12  \
#                          && (std_vector_lepton_flavour[0] * std_vector_lepton_flavour[1] == -11*13) \
#                          && metPfType1 > 20 \
#                          && abs(mll - 91.1876) > 15 \
#                          && (njet < 2 || dphilljetjet < 165.*TMath::DegToRad()) \
#                          && mpmet > 20 \
#                          && ptll > 30 \
#                          && ( std_vector_jet_pt[0] < 20 || std_vector_jet_cmvav2[0] < -0.715 ) \
#                          && ( std_vector_jet_pt[1] < 20 || std_vector_jet_cmvav2[1] < -0.715 ) \
#                          && ( std_vector_jet_pt[2] < 20 || std_vector_jet_cmvav2[2] < -0.715 ) \
#                          && ( std_vector_jet_pt[3] < 20 || std_vector_jet_cmvav2[3] < -0.715 ) \
#                          && ( std_vector_jet_pt[4] < 20 || std_vector_jet_cmvav2[4] < -0.715 ) \
#                          && ( std_vector_jet_pt[5] < 20 || std_vector_jet_cmvav2[5] < -0.715 ) \
#                          && ( std_vector_jet_pt[6] < 20 || std_vector_jet_cmvav2[6] < -0.715 ) \
#                          && ( std_vector_jet_pt[7] < 20 || std_vector_jet_cmvav2[7] < -0.715 ) \
#                          && ( std_vector_jet_pt[8] < 20 || std_vector_jet_cmvav2[8] < -0.715 ) \
#                          && ( std_vector_jet_pt[9] < 20 || std_vector_jet_cmvav2[9] < -0.715 ) \
#                          && ( std_vector_softMuPt[0] < 3 || std_vector_softMuIsTrackerMuon[0] <= 0 || std_vector_softMuTMLastStationAngTight[0] <= 0 || std_vector_softMuD0[0] < 0.2 || std_vector_softMuDz[0] < 0.5 || std_vector_softMuIso[0] < 0.15 ) \
#                          && ( std_vector_softMuPt[1] < 3 || std_vector_softMuIsTrackerMuon[1] <= 0 || std_vector_softMuTMLastStationAngTight[1] <= 0 || std_vector_softMuD0[1] > 0.2 || std_vector_softMuDz[1] < 0.5 || std_vector_softMuIso[1] < 0.15 ) \
#                          && ( std_vector_softMuPt[2] < 3 || std_vector_softMuIsTrackerMuon[2] <= 0 || std_vector_softMuTMLastStationAngTight[2] <= 0 || std_vector_softMuD0[2] > 0.2 || std_vector_softMuDz[2] < 0.5 || std_vector_softMuIso[2] < 0.15 ) \
#                          && ( std_vector_softMuPt[3] < 3 || std_vector_softMuIsTrackerMuon[3] <= 0 || std_vector_softMuTMLastStationAngTight[3] <= 0 || std_vector_softMuD0[3] > 0.2 || std_vector_softMuDz[3] < 0.5 || std_vector_softMuIso[3] < 0.15 ) \
#                          && ( std_vector_softMuPt[4] < 3 || std_vector_softMuIsTrackerMuon[4] <= 0 || std_vector_softMuTMLastStationAngTight[4] <= 0 || std_vector_softMuD0[4] > 0.2 || std_vector_softMuDz[4] < 0.5 || std_vector_softMuIso[4] < 0.15 ) \
#                          && ( std_vector_softMuPt[5] < 3 || std_vector_softMuIsTrackerMuon[5] <= 0 || std_vector_softMuTMLastStationAngTight[5] <= 0 || std_vector_softMuD0[5] > 0.2 || std_vector_softMuDz[5] < 0.5 || std_vector_softMuIso[5] < 0.15 ) \
#                          && ( std_vector_softMuPt[6] < 3 || std_vector_softMuIsTrackerMuon[6] <= 0 || std_vector_softMuTMLastStationAngTight[6] <= 0 || std_vector_softMuD0[6] > 0.2 || std_vector_softMuDz[6] < 0.5 || std_vector_softMuIso[6] < 0.15 ) \
#                          && ( std_vector_softMuPt[7] < 3 || std_vector_softMuIsTrackerMuon[7] <= 0 || std_vector_softMuTMLastStationAngTight[7] <= 0 || std_vector_softMuD0[7] > 0.2 || std_vector_softMuDz[7] < 0.5 || std_vector_softMuIso[7] < 0.15 ) \
#                          && ( std_vector_softMuPt[8] < 3 || std_vector_softMuIsTrackerMuon[8] <= 0 || std_vector_softMuTMLastStationAngTight[8] <= 0 || std_vector_softMuD0[8] > 0.2 || std_vector_softMuDz[8] < 0.5 || std_vector_softMuIso[8] < 0.15 ) \
#                          && ( std_vector_softMuPt[9] < 3 || std_vector_softMuIsTrackerMuon[9] <= 0 || std_vector_softMuTMLastStationAngTight[9] <= 0 || std_vector_softMuD0[9] > 0.2 || std_vector_softMuDz[9] < 0.5 || std_vector_softMuIso[9] < 0.15 ) \
#                          && njet == 1                                                          \
#  '

# cuts['ww_SoftMu1j_mm'] = 'mll>12  \
#                          && (std_vector_lepton_flavour[0] * std_vector_lepton_flavour[1] == -13*13) \
#                          && metPfType1 > 20 \
#                          && abs(mll - 91.1876) > 15 \
#                          && (njet < 2 || dphilljetjet < 165.*TMath::DegToRad()) \
#                          && mpmet > 45 \
#                          && ptll > 45 \
#                          && ( std_vector_jet_pt[0] < 20 || std_vector_jet_cmvav2[0] < -0.715 ) \
#                          && ( std_vector_jet_pt[1] < 20 || std_vector_jet_cmvav2[1] < -0.715 ) \
#                          && ( std_vector_jet_pt[2] < 20 || std_vector_jet_cmvav2[2] < -0.715 ) \
#                          && ( std_vector_jet_pt[3] < 20 || std_vector_jet_cmvav2[3] < -0.715 ) \
#                          && ( std_vector_jet_pt[4] < 20 || std_vector_jet_cmvav2[4] < -0.715 ) \
#                          && ( std_vector_jet_pt[5] < 20 || std_vector_jet_cmvav2[5] < -0.715 ) \
#                          && ( std_vector_jet_pt[6] < 20 || std_vector_jet_cmvav2[6] < -0.715 ) \
#                          && ( std_vector_jet_pt[7] < 20 || std_vector_jet_cmvav2[7] < -0.715 ) \
#                          && ( std_vector_jet_pt[8] < 20 || std_vector_jet_cmvav2[8] < -0.715 ) \
#                          && ( std_vector_jet_pt[9] < 20 || std_vector_jet_cmvav2[9] < -0.715 ) \
#                          && ( std_vector_softMuPt[0] < 3 || std_vector_softMuIsTrackerMuon[0] <= 0 || std_vector_softMuTMLastStationAngTight[0] <= 0 || std_vector_softMuD0[0] < 0.2 || std_vector_softMuDz[0] < 0.5 || std_vector_softMuIso[0] < 0.15 ) \
#                          && ( std_vector_softMuPt[1] < 3 || std_vector_softMuIsTrackerMuon[1] <= 0 || std_vector_softMuTMLastStationAngTight[1] <= 0 || std_vector_softMuD0[1] < 0.2 || std_vector_softMuDz[1] < 0.5 || std_vector_softMuIso[1] < 0.15 ) \
#                          && ( std_vector_softMuPt[2] < 3 || std_vector_softMuIsTrackerMuon[2] <= 0 || std_vector_softMuTMLastStationAngTight[2] <= 0 || std_vector_softMuD0[2] < 0.2 || std_vector_softMuDz[2] < 0.5 || std_vector_softMuIso[2] < 0.15 ) \
#                          && ( std_vector_softMuPt[3] < 3 || std_vector_softMuIsTrackerMuon[3] <= 0 || std_vector_softMuTMLastStationAngTight[3] <= 0 || std_vector_softMuD0[3] < 0.2 || std_vector_softMuDz[3] < 0.5 || std_vector_softMuIso[3] < 0.15 ) \
#                          && ( std_vector_softMuPt[4] < 3 || std_vector_softMuIsTrackerMuon[4] <= 0 || std_vector_softMuTMLastStationAngTight[4] <= 0 || std_vector_softMuD0[4] < 0.2 || std_vector_softMuDz[4] < 0.5 || std_vector_softMuIso[4] < 0.15 ) \
#                          && ( std_vector_softMuPt[5] < 3 || std_vector_softMuIsTrackerMuon[5] <= 0 || std_vector_softMuTMLastStationAngTight[5] <= 0 || std_vector_softMuD0[5] < 0.2 || std_vector_softMuDz[5] < 0.5 || std_vector_softMuIso[5] < 0.15 ) \
#                          && ( std_vector_softMuPt[6] < 3 || std_vector_softMuIsTrackerMuon[6] <= 0 || std_vector_softMuTMLastStationAngTight[6] <= 0 || std_vector_softMuD0[6] < 0.2 || std_vector_softMuDz[6] < 0.5 || std_vector_softMuIso[6] < 0.15 ) \
#                          && ( std_vector_softMuPt[7] < 3 || std_vector_softMuIsTrackerMuon[7] <= 0 || std_vector_softMuTMLastStationAngTight[7] <= 0 || std_vector_softMuD0[7] < 0.2 || std_vector_softMuDz[7] < 0.5 || std_vector_softMuIso[7] < 0.15 ) \
#                          && ( std_vector_softMuPt[8] < 3 || std_vector_softMuIsTrackerMuon[8] <= 0 || std_vector_softMuTMLastStationAngTight[8] <= 0 || std_vector_softMuD0[8] < 0.2 || std_vector_softMuDz[8] < 0.5 || std_vector_softMuIso[8] < 0.15 ) \
#                          && ( std_vector_softMuPt[9] < 3 || std_vector_softMuIsTrackerMuon[9] <= 0 || std_vector_softMuTMLastStationAngTight[9] <= 0 || std_vector_softMuD0[9] < 0.2 || std_vector_softMuDz[9] < 0.5 || std_vector_softMuIso[9] < 0.15 ) \
#                          && njet == 1                                                          \
# '


# cuts['ww_SoftMu1j_ee'] = 'mll>12  \
#                          && (std_vector_lepton_flavour[0] * std_vector_lepton_flavour[1] == -11*11) \
#                          && metPfType1 > 20 \
#                          && abs(mll - 91.1876) > 15 \
#                          && (njet < 2 || dphilljetjet < 165.*TMath::DegToRad()) \
#                          && mpmet > 45 \
#                          && ptll > 45 \
#                          && ( std_vector_jet_pt[0] < 20 || std_vector_jet_cmvav2[0] < -0.715 ) \
#                          && ( std_vector_jet_pt[1] < 20 || std_vector_jet_cmvav2[1] < -0.715 ) \
#                          && ( std_vector_jet_pt[2] < 20 || std_vector_jet_cmvav2[2] < -0.715 ) \
#                          && ( std_vector_jet_pt[3] < 20 || std_vector_jet_cmvav2[3] < -0.715 ) \
#                          && ( std_vector_jet_pt[4] < 20 || std_vector_jet_cmvav2[4] < -0.715 ) \
#                          && ( std_vector_jet_pt[5] < 20 || std_vector_jet_cmvav2[5] < -0.715 ) \
#                          && ( std_vector_jet_pt[6] < 20 || std_vector_jet_cmvav2[6] < -0.715 ) \
#                          && ( std_vector_jet_pt[7] < 20 || std_vector_jet_cmvav2[7] < -0.715 ) \
#                          && ( std_vector_jet_pt[8] < 20 || std_vector_jet_cmvav2[8] < -0.715 ) \
#                          && ( std_vector_jet_pt[9] < 20 || std_vector_jet_cmvav2[9] < -0.715 ) \
#                          && ( std_vector_softMuPt[0] < 3 || std_vector_softMuIsTrackerMuon[0] <= 0 || std_vector_softMuTMLastStationAngTight[0] <= 0 || std_vector_softMuD0[0] > 0.2 || std_vector_softMuDz[0] < 0.5 || std_vector_softMuIso[0] < 0.15 ) \
#                          && ( std_vector_softMuPt[1] < 3 || std_vector_softMuIsTrackerMuon[1] <= 0 || std_vector_softMuTMLastStationAngTight[1] <= 0 || std_vector_softMuD0[1] > 0.2 || std_vector_softMuDz[1] < 0.5 || std_vector_softMuIso[1] < 0.15 ) \
#                          && ( std_vector_softMuPt[2] < 3 || std_vector_softMuIsTrackerMuon[2] <= 0 || std_vector_softMuTMLastStationAngTight[2] <= 0 || std_vector_softMuD0[2] > 0.2 || std_vector_softMuDz[2] < 0.5 || std_vector_softMuIso[2] < 0.15 ) \
#                          && ( std_vector_softMuPt[3] < 3 || std_vector_softMuIsTrackerMuon[3] <= 0 || std_vector_softMuTMLastStationAngTight[3] <= 0 || std_vector_softMuD0[3] > 0.2 || std_vector_softMuDz[3] < 0.5 || std_vector_softMuIso[3] < 0.15 ) \
#                          && ( std_vector_softMuPt[4] < 3 || std_vector_softMuIsTrackerMuon[4] <= 0 || std_vector_softMuTMLastStationAngTight[4] <= 0 || std_vector_softMuD0[4] > 0.2 || std_vector_softMuDz[4] < 0.5 || std_vector_softMuIso[4] < 0.15 ) \
#                          && ( std_vector_softMuPt[5] < 3 || std_vector_softMuIsTrackerMuon[5] <= 0 || std_vector_softMuTMLastStationAngTight[5] <= 0 || std_vector_softMuD0[5] > 0.2 || std_vector_softMuDz[5] < 0.5 || std_vector_softMuIso[5] < 0.15 ) \
#                          && ( std_vector_softMuPt[6] < 3 || std_vector_softMuIsTrackerMuon[6] <= 0 || std_vector_softMuTMLastStationAngTight[6] <= 0 || std_vector_softMuD0[6] > 0.2 || std_vector_softMuDz[6] < 0.5 || std_vector_softMuIso[6] < 0.15 ) \
#                          && ( std_vector_softMuPt[7] < 3 || std_vector_softMuIsTrackerMuon[7] <= 0 || std_vector_softMuTMLastStationAngTight[7] <= 0 || std_vector_softMuD0[7] > 0.2 || std_vector_softMuDz[7] < 0.5 || std_vector_softMuIso[7] < 0.15 ) \
#                          && ( std_vector_softMuPt[8] < 3 || std_vector_softMuIsTrackerMuon[8] <= 0 || std_vector_softMuTMLastStationAngTight[8] <= 0 || std_vector_softMuD0[8] > 0.2 || std_vector_softMuDz[8] < 0.5 || std_vector_softMuIso[8] < 0.15 ) \
#                          && ( std_vector_softMuPt[9] < 3 || std_vector_softMuIsTrackerMuon[9] <= 0 || std_vector_softMuTMLastStationAngTight[9] <= 0 || std_vector_softMuD0[9] > 0.2 || std_vector_softMuDz[9] < 0.5 || std_vector_softMuIso[9] < 0.15 ) \
#                          && njet == 1                                                          \
# '

# Top CR - 0 jet
# cuts['ww_TopCR0j_em'] = 'mll > 50 \
#                           && (std_vector_lepton_flavour[0] * std_vector_lepton_flavour[1] == -11*13) \
#                           && mpmet > 20 \
#                           && mth > 40 \
#                           && (( std_vector_jet_pt[0] > 20 && std_vector_jet_cmvav2[0] > -0.715 )  \
#                           ||  ( std_vector_jet_pt[1] > 20 && std_vector_jet_cmvav2[1] > -0.715 )  \
#                           ||  ( std_vector_jet_pt[2] > 20 && std_vector_jet_cmvav2[2] > -0.715 )  \
#                           ||  ( std_vector_jet_pt[3] > 20 && std_vector_jet_cmvav2[3] > -0.715 )  \
#                           ||  ( std_vector_jet_pt[4] > 20 && std_vector_jet_cmvav2[4] > -0.715 )  \
#                           ||  ( std_vector_jet_pt[5] > 20 && std_vector_jet_cmvav2[5] > -0.715 )  \
#                           ||  ( std_vector_jet_pt[6] > 20 && std_vector_jet_cmvav2[6] > -0.715 )  \
#                           ||  ( std_vector_jet_pt[7] > 20 && std_vector_jet_cmvav2[7] > -0.715 )  \
#                           ||  ( std_vector_jet_pt[8] > 20 && std_vector_jet_cmvav2[8] > -0.715 )  \
#                           ||  ( std_vector_jet_pt[9] > 20 && std_vector_jet_cmvav2[9] > -0.715 )) \
#                           && njet == 0 \
# ' 


# cuts['ww_TopCR0j_mm'] = 'mll > 50 \
#                           && (std_vector_lepton_flavour[0] * std_vector_lepton_flavour[1] == -13*13) \
#                           && abs(mll - 91.1876) > 15 \ 
#                           && mpmet > 45 \
#                           && ( std_vector_jet_pt[0] > 20 && std_vector_jet_cmvav2[0] > -0.715 ) \
#                           && ( std_vector_jet_pt[1] > 20 && std_vector_jet_cmvav2[1] > -0.715 ) \
#                           && ( std_vector_jet_pt[2] > 20 && std_vector_jet_cmvav2[2] > -0.715 ) \
#                           && ( std_vector_jet_pt[3] > 20 && std_vector_jet_cmvav2[3] > -0.715 ) \
#                           && ( std_vector_jet_pt[4] > 20 && std_vector_jet_cmvav2[4] > -0.715 ) \
#                           && ( std_vector_jet_pt[5] > 20 && std_vector_jet_cmvav2[5] > -0.715 ) \
#                           && ( std_vector_jet_pt[6] > 20 && std_vector_jet_cmvav2[6] > -0.715 ) \
#                           && ( std_vector_jet_pt[7] > 20 && std_vector_jet_cmvav2[7] > -0.715 ) \
#                           && ( std_vector_jet_pt[8] > 20 && std_vector_jet_cmvav2[8] > -0.715 ) \
#                           && ( std_vector_jet_pt[9] > 20 && std_vector_jet_cmvav2[9] > -0.715 ) \
#                           && njet == 0 \
# ' 


# cuts['ww_TopCR0j_ee'] = 'mll > 50 \
#                           && (std_vector_lepton_flavour[0] * std_vector_lepton_flavour[1] == -11*11) \
#                           && abs(mll - 91.1876) > 15 \ 
#                           && mpmet > 45 \
#                           && ( std_vector_jet_pt[0] > 20 && std_vector_jet_cmvav2[0] > -0.715 ) \
#                           && ( std_vector_jet_pt[1] > 20 && std_vector_jet_cmvav2[1] > -0.715 ) \
#                           && ( std_vector_jet_pt[2] > 20 && std_vector_jet_cmvav2[2] > -0.715 ) \
#                           && ( std_vector_jet_pt[3] > 20 && std_vector_jet_cmvav2[3] > -0.715 ) \
#                           && ( std_vector_jet_pt[4] > 20 && std_vector_jet_cmvav2[4] > -0.715 ) \
#                           && ( std_vector_jet_pt[5] > 20 && std_vector_jet_cmvav2[5] > -0.715 ) \
#                           && ( std_vector_jet_pt[6] > 20 && std_vector_jet_cmvav2[6] > -0.715 ) \
#                           && ( std_vector_jet_pt[7] > 20 && std_vector_jet_cmvav2[7] > -0.715 ) \
#                           && ( std_vector_jet_pt[8] > 20 && std_vector_jet_cmvav2[8] > -0.715 ) \
#                           && ( std_vector_jet_pt[9] > 20 && std_vector_jet_cmvav2[9] > -0.715 ) \
#                           && njet == 0 \
# ' 


# Top CR - 1 jet
# cuts['ww_TopCR1j_em'] = 'mll > 50 \
#                           && (std_vector_lepton_flavour[0] * std_vector_lepton_flavour[1] == -11*13) \
#                           && mpmet > 20 \
#                           && mth > 40 \
#                           && (( std_vector_jet_pt[0] > 20 && std_vector_jet_cmvav2[0] > -0.715 )  \
#                           ||  ( std_vector_jet_pt[1] > 20 && std_vector_jet_cmvav2[1] > -0.715 )  \
#                           ||  ( std_vector_jet_pt[2] > 20 && std_vector_jet_cmvav2[2] > -0.715 )  \
#                           ||  ( std_vector_jet_pt[3] > 20 && std_vector_jet_cmvav2[3] > -0.715 )  \
#                           ||  ( std_vector_jet_pt[4] > 20 && std_vector_jet_cmvav2[4] > -0.715 )  \
#                           ||  ( std_vector_jet_pt[5] > 20 && std_vector_jet_cmvav2[5] > -0.715 )  \
#                           ||  ( std_vector_jet_pt[6] > 20 && std_vector_jet_cmvav2[6] > -0.715 )  \
#                           ||  ( std_vector_jet_pt[7] > 20 && std_vector_jet_cmvav2[7] > -0.715 )  \
#                           ||  ( std_vector_jet_pt[8] > 20 && std_vector_jet_cmvav2[8] > -0.715 )  \
#                           ||  ( std_vector_jet_pt[9] > 20 && std_vector_jet_cmvav2[9] > -0.715 )) \
#                           && njet == 1 \
# ' 


# cuts['ww_TopCR1j_mm'] = 'mll > 50 \
#                           && (std_vector_lepton_flavour[0] * std_vector_lepton_flavour[1] == -13*13) \
#                           && abs(mll - 91.1876) > 15 \ 
#                           && mpmet > 45 \
#                           && ( std_vector_jet_pt[0] > 20 && std_vector_jet_cmvav2[0] > -0.715 ) \
#                           && ( std_vector_jet_pt[1] > 20 && std_vector_jet_cmvav2[1] > -0.715 ) \
#                           && ( std_vector_jet_pt[2] > 20 && std_vector_jet_cmvav2[2] > -0.715 ) \
#                           && ( std_vector_jet_pt[3] > 20 && std_vector_jet_cmvav2[3] > -0.715 ) \
#                           && ( std_vector_jet_pt[4] > 20 && std_vector_jet_cmvav2[4] > -0.715 ) \
#                           && ( std_vector_jet_pt[5] > 20 && std_vector_jet_cmvav2[5] > -0.715 ) \
#                           && ( std_vector_jet_pt[6] > 20 && std_vector_jet_cmvav2[6] > -0.715 ) \
#                           && ( std_vector_jet_pt[7] > 20 && std_vector_jet_cmvav2[7] > -0.715 ) \
#                           && ( std_vector_jet_pt[8] > 20 && std_vector_jet_cmvav2[8] > -0.715 ) \
#                           && ( std_vector_jet_pt[9] > 20 && std_vector_jet_cmvav2[9] > -0.715 ) \
#                           && njet == 1 \
# ' 


# cuts['ww_TopCR1j_ee'] = 'mll > 50 \
#                           && (std_vector_lepton_flavour[0] * std_vector_lepton_flavour[1] == -11*11) \
#                           && abs(mll - 91.1876) > 15 \ 
#                           && mpmet > 45 \
#                           && ( std_vector_jet_pt[0] > 20 && std_vector_jet_cmvav2[0] > -0.715 ) \
#                           && ( std_vector_jet_pt[1] > 20 && std_vector_jet_cmvav2[1] > -0.715 ) \
#                           && ( std_vector_jet_pt[2] > 20 && std_vector_jet_cmvav2[2] > -0.715 ) \
#                           && ( std_vector_jet_pt[3] > 20 && std_vector_jet_cmvav2[3] > -0.715 ) \
#                           && ( std_vector_jet_pt[4] > 20 && std_vector_jet_cmvav2[4] > -0.715 ) \
#                           && ( std_vector_jet_pt[5] > 20 && std_vector_jet_cmvav2[5] > -0.715 ) \
#                           && ( std_vector_jet_pt[6] > 20 && std_vector_jet_cmvav2[6] > -0.715 ) \
#                           && ( std_vector_jet_pt[7] > 20 && std_vector_jet_cmvav2[7] > -0.715 ) \
#                           && ( std_vector_jet_pt[8] > 20 && std_vector_jet_cmvav2[8] > -0.715 ) \
#                           && ( std_vector_jet_pt[9] > 20 && std_vector_jet_cmvav2[9] > -0.715 ) \
#                           && njet == 1 \
# ' 


# DY tt CR in 0 jet
# cuts['ww_DyCR0j_em']  = '(std_vector_lepton_flavour[0] * std_vector_lepton_flavour[1] == -11*13) \
#                         && metPfType1 > 20 \
#                         && ptll > 30 \
#                         && mll > 30 \
#                         && mll < 80 \
#                         && ( mth<60) \
#                         && ( std_vector_jet_pt[0] < 20 || std_vector_jet_cmvav2[0] < -0.715 ) \
#                         && ( std_vector_jet_pt[1] < 20 || std_vector_jet_cmvav2[1] < -0.715 ) \
#                         && ( std_vector_jet_pt[2] < 20 || std_vector_jet_cmvav2[2] < -0.715 ) \
#                         && ( std_vector_jet_pt[3] < 20 || std_vector_jet_cmvav2[3] < -0.715 ) \
#                         && ( std_vector_jet_pt[4] < 20 || std_vector_jet_cmvav2[4] < -0.715 ) \
#                         && ( std_vector_jet_pt[5] < 20 || std_vector_jet_cmvav2[5] < -0.715 ) \
#                         && ( std_vector_jet_pt[6] < 20 || std_vector_jet_cmvav2[6] < -0.715 ) \
#                         && ( std_vector_jet_pt[7] < 20 || std_vector_jet_cmvav2[7] < -0.715 ) \
#                         && ( std_vector_jet_pt[8] < 20 || std_vector_jet_cmvav2[8] < -0.715 ) \
#                         && ( std_vector_jet_pt[9] < 20 || std_vector_jet_cmvav2[9] < -0.715 ) \
#                         && njet == 0 \
# '


# DY tt CR in 1 jet
# cuts['ww_DyCR1j_em']  = '(std_vector_lepton_flavour[0] * std_vector_lepton_flavour[1] == -11*13) \
#                         && metPfType1 > 20 \
#                         && ptll > 30 \
#                         && mll > 30 \
#                         && mll < 80 \
#                         && ( mth<60) \
#                         && ( std_vector_jet_pt[0] < 20 || std_vector_jet_cmvav2[0] < -0.715 ) \
#                         && ( std_vector_jet_pt[1] < 20 || std_vector_jet_cmvav2[1] < -0.715 ) \
#                         && ( std_vector_jet_pt[2] < 20 || std_vector_jet_cmvav2[2] < -0.715 ) \
#                         && ( std_vector_jet_pt[3] < 20 || std_vector_jet_cmvav2[3] < -0.715 ) \
#                         && ( std_vector_jet_pt[4] < 20 || std_vector_jet_cmvav2[4] < -0.715 ) \
#                         && ( std_vector_jet_pt[5] < 20 || std_vector_jet_cmvav2[5] < -0.715 ) \
#                         && ( std_vector_jet_pt[6] < 20 || std_vector_jet_cmvav2[6] < -0.715 ) \
#                         && ( std_vector_jet_pt[7] < 20 || std_vector_jet_cmvav2[7] < -0.715 ) \
#                         && ( std_vector_jet_pt[8] < 20 || std_vector_jet_cmvav2[8] < -0.715 ) \
#                         && ( std_vector_jet_pt[9] < 20 || std_vector_jet_cmvav2[9] < -0.715 ) \
#                         && njet == 1 \
# '


# 11 = e
# 13 = mu
# 15 = tau

