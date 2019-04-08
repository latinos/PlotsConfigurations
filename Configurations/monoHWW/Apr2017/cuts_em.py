#cuts

#cuts = {}


# Different flavour only: Use exclusive DY sample!!!

supercut = 'std_vector_lepton_pt[0]>25 && std_vector_lepton_pt[1]>20 \
            && (std_vector_lepton_flavour[0] * std_vector_lepton_flavour[1] == -11*13) \
            && std_vector_lepton_pt[2]<10 \
            && mll>12  \
            && metPfType1 > 20 \
            && mpmet > 20 \
            && ptll > 30 \
'

             # && drll < 2.5 \
             # && drll < 0.8 \
             # && mtw1 > 160 \
             # && mpmet > 100 \
             # && metTtrk > 100 \
             # && mtw2 > 100 \
             # && dphilmet1 > 2.6 \
             # && dphilmet2 > 2.6 \


# # NVTX plot
# cuts['monoH_nvtx_mm'] = 'njet >= 0 \
#             && mth > 40 \
#             && ( mll>76 && mll < 106 ) \
#             && ( std_vector_jet_pt[0] < 20 || std_vector_jet_cmvav2[0] < -0.5884 ) \
#             && ( std_vector_jet_pt[1] < 20 || std_vector_jet_cmvav2[1] < -0.5884 ) \
#             && ( std_vector_jet_pt[2] < 20 || std_vector_jet_cmvav2[2] < -0.5884 ) \
#             && ( std_vector_jet_pt[3] < 20 || std_vector_jet_cmvav2[3] < -0.5884 ) \
#             && ( std_vector_jet_pt[4] < 20 || std_vector_jet_cmvav2[4] < -0.5884 ) \
#             && ( std_vector_jet_pt[5] < 20 || std_vector_jet_cmvav2[5] < -0.5884 ) \
#             && ( std_vector_jet_pt[6] < 20 || std_vector_jet_cmvav2[6] < -0.5884 ) \
#             && ( std_vector_jet_pt[7] < 20 || std_vector_jet_cmvav2[7] < -0.5884 ) \
#             && ( std_vector_jet_pt[8] < 20 || std_vector_jet_cmvav2[8] < -0.5884 ) \
#             && ( std_vector_jet_pt[9] < 20 || std_vector_jet_cmvav2[9] < -0.5884 ) \
# '

# Preselection (no mll or drll cuts)
cuts['monoH_presel_em'] = 'njet >= 0 \
            && mth > 40 \
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

#########################
# Inclusive Jets Analysis
#########################

# # Cut and Count Signal Region
# cuts['monoH_CC_em'] = 'njet >= 0 \
#             && mth > 200 \
#             && drll < 0.8 \
#             && mtw1 > 160 \
#             && mpmet > 100 \
#             && metTtrk > 100 \
#             && mtw2 > 100 \
#             && dphilmet1 > 2.6 \
#             && dphilmet2 > 2.6 \
#             && ( std_vector_jet_pt[0] < 20 || std_vector_jet_cmvav2[0] < -0.5884 ) \
#             && ( std_vector_jet_pt[1] < 20 || std_vector_jet_cmvav2[1] < -0.5884 ) \
#             && ( std_vector_jet_pt[2] < 20 || std_vector_jet_cmvav2[2] < -0.5884 ) \
#             && ( std_vector_jet_pt[3] < 20 || std_vector_jet_cmvav2[3] < -0.5884 ) \
#             && ( std_vector_jet_pt[4] < 20 || std_vector_jet_cmvav2[4] < -0.5884 ) \
#             && ( std_vector_jet_pt[5] < 20 || std_vector_jet_cmvav2[5] < -0.5884 ) \
#             && ( std_vector_jet_pt[6] < 20 || std_vector_jet_cmvav2[6] < -0.5884 ) \
#             && ( std_vector_jet_pt[7] < 20 || std_vector_jet_cmvav2[7] < -0.5884 ) \
#             && ( std_vector_jet_pt[8] < 20 || std_vector_jet_cmvav2[8] < -0.5884 ) \
#             && ( std_vector_jet_pt[9] < 20 || std_vector_jet_cmvav2[9] < -0.5884 ) \
# '
# Signal Region
cuts['monoH_MVA_em'] = 'njet >= 0 \
            && mll < 76 \
            && drll < 2.5 \
            && mth > 40 \
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
# DY->tt Control Region
cuts['monoH_MVA_DYtt_em'] = 'njet >= 0 \
            && mth < 40 \
            && mll < 76 \
            && drll < 2.5 \
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
# WW Control Region
cuts['monoH_MVA_WW_em'] = 'njet >= 0 \
            && mth > 40 \
            && mll > 76 \
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
# Top Control Region
cuts['monoH_MVA_Top_em'] = 'njet >= 0 \
            && mth > 40 \
            && mll < 76 \
            && drll < 2.5 \
            && ( std_vector_jet_pt[0] > 20 && std_vector_jet_cmvav2[0] > -0.5884 ) \
'

#########################
# 0-Jets Bin Analysis
#########################

# # Signal Region
# cuts['monoH_0Jet_em'] = 'std_vector_jet_pt[0] < 30 \
#             && mth > 40 \
#             && mll < 76 \
#             && drll < 2.5 \
#             && ( std_vector_jet_pt[0] < 20 || std_vector_jet_cmvav2[0] < -0.5884 ) \
#             && ( std_vector_jet_pt[1] < 20 || std_vector_jet_cmvav2[1] < -0.5884 ) \
#             && ( std_vector_jet_pt[2] < 20 || std_vector_jet_cmvav2[2] < -0.5884 ) \
#             && ( std_vector_jet_pt[3] < 20 || std_vector_jet_cmvav2[3] < -0.5884 ) \
#             && ( std_vector_jet_pt[4] < 20 || std_vector_jet_cmvav2[4] < -0.5884 ) \
#             && ( std_vector_jet_pt[5] < 20 || std_vector_jet_cmvav2[5] < -0.5884 ) \
#             && ( std_vector_jet_pt[6] < 20 || std_vector_jet_cmvav2[6] < -0.5884 ) \
#             && ( std_vector_jet_pt[7] < 20 || std_vector_jet_cmvav2[7] < -0.5884 ) \
#             && ( std_vector_jet_pt[8] < 20 || std_vector_jet_cmvav2[8] < -0.5884 ) \
#             && ( std_vector_jet_pt[9] < 20 || std_vector_jet_cmvav2[9] < -0.5884 ) \
# '
# # DY->tt Control Region
# cuts['monoH_0Jet_DYtt_em'] = 'std_vector_jet_pt[0] < 30 \
#             && mth < 40 \
#             && mll < 76 \
#             && drll < 2.5 \
#             && ( std_vector_jet_pt[0] < 20 || std_vector_jet_cmvav2[0] < -0.5884 ) \
#             && ( std_vector_jet_pt[1] < 20 || std_vector_jet_cmvav2[1] < -0.5884 ) \
#             && ( std_vector_jet_pt[2] < 20 || std_vector_jet_cmvav2[2] < -0.5884 ) \
#             && ( std_vector_jet_pt[3] < 20 || std_vector_jet_cmvav2[3] < -0.5884 ) \
#             && ( std_vector_jet_pt[4] < 20 || std_vector_jet_cmvav2[4] < -0.5884 ) \
#             && ( std_vector_jet_pt[5] < 20 || std_vector_jet_cmvav2[5] < -0.5884 ) \
#             && ( std_vector_jet_pt[6] < 20 || std_vector_jet_cmvav2[6] < -0.5884 ) \
#             && ( std_vector_jet_pt[7] < 20 || std_vector_jet_cmvav2[7] < -0.5884 ) \
#             && ( std_vector_jet_pt[8] < 20 || std_vector_jet_cmvav2[8] < -0.5884 ) \
#             && ( std_vector_jet_pt[9] < 20 || std_vector_jet_cmvav2[9] < -0.5884 ) \
# '
# # WW Control Region
# cuts['monoH_0Jet_WW_em'] = 'std_vector_jet_pt[0] < 30 \
#             && mth > 40 \
#             && mll > 76 \
#             && ( std_vector_jet_pt[0] < 20 || std_vector_jet_cmvav2[0] < -0.5884 ) \
#             && ( std_vector_jet_pt[1] < 20 || std_vector_jet_cmvav2[1] < -0.5884 ) \
#             && ( std_vector_jet_pt[2] < 20 || std_vector_jet_cmvav2[2] < -0.5884 ) \
#             && ( std_vector_jet_pt[3] < 20 || std_vector_jet_cmvav2[3] < -0.5884 ) \
#             && ( std_vector_jet_pt[4] < 20 || std_vector_jet_cmvav2[4] < -0.5884 ) \
#             && ( std_vector_jet_pt[5] < 20 || std_vector_jet_cmvav2[5] < -0.5884 ) \
#             && ( std_vector_jet_pt[6] < 20 || std_vector_jet_cmvav2[6] < -0.5884 ) \
#             && ( std_vector_jet_pt[7] < 20 || std_vector_jet_cmvav2[7] < -0.5884 ) \
#             && ( std_vector_jet_pt[8] < 20 || std_vector_jet_cmvav2[8] < -0.5884 ) \
#             && ( std_vector_jet_pt[9] < 20 || std_vector_jet_cmvav2[9] < -0.5884 ) \
# '
# # Top Control Region
# cuts['monoH_0Jet_Top_em'] = 'std_vector_jet_pt[0] < 30 \
#             && mth > 40 \
#             && mll < 76 \
#             && drll < 2.5 \
#             && ( std_vector_jet_pt[0] > 20 && std_vector_jet_cmvav2[0] > -0.5884 ) \
# '

# ##############################
# # 0- and 1-Jets Bin Analysis #
# ##############################

# # Signal Region
# cuts['monoH_1Jet_em'] = 'std_vector_jet_pt[1] < 30 \
#             && mth > 40 \
#             && mll < 76 \
#             && drll < 2.5 \
#             && ( std_vector_jet_pt[0] < 20 || std_vector_jet_cmvav2[0] < -0.5884 ) \
#             && ( std_vector_jet_pt[1] < 20 || std_vector_jet_cmvav2[1] < -0.5884 ) \
#             && ( std_vector_jet_pt[2] < 20 || std_vector_jet_cmvav2[2] < -0.5884 ) \
#             && ( std_vector_jet_pt[3] < 20 || std_vector_jet_cmvav2[3] < -0.5884 ) \
#             && ( std_vector_jet_pt[4] < 20 || std_vector_jet_cmvav2[4] < -0.5884 ) \
#             && ( std_vector_jet_pt[5] < 20 || std_vector_jet_cmvav2[5] < -0.5884 ) \
#             && ( std_vector_jet_pt[6] < 20 || std_vector_jet_cmvav2[6] < -0.5884 ) \
#             && ( std_vector_jet_pt[7] < 20 || std_vector_jet_cmvav2[7] < -0.5884 ) \
#             && ( std_vector_jet_pt[8] < 20 || std_vector_jet_cmvav2[8] < -0.5884 ) \
#             && ( std_vector_jet_pt[9] < 20 || std_vector_jet_cmvav2[9] < -0.5884 ) \
# '
# # DY->tt Control Region
# cuts['monoH_1Jet_DYtt_em'] = 'std_vector_jet_pt[1] < 30 \
#             && mth < 40 \
#             && mll < 76 \
#             && drll < 2.5 \
#             && ( std_vector_jet_pt[0] < 20 || std_vector_jet_cmvav2[0] < -0.5884 ) \
#             && ( std_vector_jet_pt[1] < 20 || std_vector_jet_cmvav2[1] < -0.5884 ) \
#             && ( std_vector_jet_pt[2] < 20 || std_vector_jet_cmvav2[2] < -0.5884 ) \
#             && ( std_vector_jet_pt[3] < 20 || std_vector_jet_cmvav2[3] < -0.5884 ) \
#             && ( std_vector_jet_pt[4] < 20 || std_vector_jet_cmvav2[4] < -0.5884 ) \
#             && ( std_vector_jet_pt[5] < 20 || std_vector_jet_cmvav2[5] < -0.5884 ) \
#             && ( std_vector_jet_pt[6] < 20 || std_vector_jet_cmvav2[6] < -0.5884 ) \
#             && ( std_vector_jet_pt[7] < 20 || std_vector_jet_cmvav2[7] < -0.5884 ) \
#             && ( std_vector_jet_pt[8] < 20 || std_vector_jet_cmvav2[8] < -0.5884 ) \
#             && ( std_vector_jet_pt[9] < 20 || std_vector_jet_cmvav2[9] < -0.5884 ) \
# '
# # WW Control Region
# cuts['monoH_1Jet_WW_em'] = 'std_vector_jet_pt[1] < 30 \
#             && mth > 40 \
#             && mll > 76 \
#             && ( std_vector_jet_pt[0] < 20 || std_vector_jet_cmvav2[0] < -0.5884 ) \
#             && ( std_vector_jet_pt[1] < 20 || std_vector_jet_cmvav2[1] < -0.5884 ) \
#             && ( std_vector_jet_pt[2] < 20 || std_vector_jet_cmvav2[2] < -0.5884 ) \
#             && ( std_vector_jet_pt[3] < 20 || std_vector_jet_cmvav2[3] < -0.5884 ) \
#             && ( std_vector_jet_pt[4] < 20 || std_vector_jet_cmvav2[4] < -0.5884 ) \
#             && ( std_vector_jet_pt[5] < 20 || std_vector_jet_cmvav2[5] < -0.5884 ) \
#             && ( std_vector_jet_pt[6] < 20 || std_vector_jet_cmvav2[6] < -0.5884 ) \
#             && ( std_vector_jet_pt[7] < 20 || std_vector_jet_cmvav2[7] < -0.5884 ) \
#             && ( std_vector_jet_pt[8] < 20 || std_vector_jet_cmvav2[8] < -0.5884 ) \
#             && ( std_vector_jet_pt[9] < 20 || std_vector_jet_cmvav2[9] < -0.5884 ) \
# '
# # Top Control Region
# cuts['monoH_1Jet_Top_em'] = 'std_vector_jet_pt[1] < 30 \
#             && mth > 40 \
#             && mll < 76 \
#             && drll < 2.5 \
#             && ( std_vector_jet_pt[0] > 20 && std_vector_jet_cmvav2[0] > -0.5884 ) \
# '

############################
# cut on MVA output variable
############################

# 2HDM Model - Adaptive Boost Training
# cuts['monoH_2HDM_adapt_low_em'] = 'njet >= 0 \
#             && mth > 40 \
#             && mll < 100 \
#             && drll < 2.5 \
#             && muccamva2HDMadaptFull_low_em > 0.6729 \
#             && ( std_vector_jet_pt[0] < 20 || std_vector_jet_cmvav2[0] < -0.5884 ) \
#             && ( std_vector_jet_pt[1] < 20 || std_vector_jet_cmvav2[1] < -0.5884 ) \
#             && ( std_vector_jet_pt[2] < 20 || std_vector_jet_cmvav2[2] < -0.5884 ) \
#             && ( std_vector_jet_pt[3] < 20 || std_vector_jet_cmvav2[3] < -0.5884 ) \
#             && ( std_vector_jet_pt[4] < 20 || std_vector_jet_cmvav2[4] < -0.5884 ) \
#             && ( std_vector_jet_pt[5] < 20 || std_vector_jet_cmvav2[5] < -0.5884 ) \
#             && ( std_vector_jet_pt[6] < 20 || std_vector_jet_cmvav2[6] < -0.5884 ) \
#             && ( std_vector_jet_pt[7] < 20 || std_vector_jet_cmvav2[7] < -0.5884 ) \
#             && ( std_vector_jet_pt[8] < 20 || std_vector_jet_cmvav2[8] < -0.5884 ) \
#             && ( std_vector_jet_pt[9] < 20 || std_vector_jet_cmvav2[9] < -0.5884 ) \
# '

# cuts['monoH_2HDM_adapt_high_em'] = 'njet >= 0 \
#             && mth > 40 \
#             && mll < 100 \
#             && drll < 2.5 \
#             && muccamva2HDMadaptFull_high_em > 0.6403 \
#             && ( std_vector_jet_pt[0] < 20 || std_vector_jet_cmvav2[0] < -0.5884 ) \
#             && ( std_vector_jet_pt[1] < 20 || std_vector_jet_cmvav2[1] < -0.5884 ) \
#             && ( std_vector_jet_pt[2] < 20 || std_vector_jet_cmvav2[2] < -0.5884 ) \
#             && ( std_vector_jet_pt[3] < 20 || std_vector_jet_cmvav2[3] < -0.5884 ) \
#             && ( std_vector_jet_pt[4] < 20 || std_vector_jet_cmvav2[4] < -0.5884 ) \
#             && ( std_vector_jet_pt[5] < 20 || std_vector_jet_cmvav2[5] < -0.5884 ) \
#             && ( std_vector_jet_pt[6] < 20 || std_vector_jet_cmvav2[6] < -0.5884 ) \
#             && ( std_vector_jet_pt[7] < 20 || std_vector_jet_cmvav2[7] < -0.5884 ) \
#             && ( std_vector_jet_pt[8] < 20 || std_vector_jet_cmvav2[8] < -0.5884 ) \
#             && ( std_vector_jet_pt[9] < 20 || std_vector_jet_cmvav2[9] < -0.5884 ) \
# '

# 2HDM Model - Gradient Boost Training
# cuts['monoH_2HDM_grad_low_em'] = 'njet >= 0 \
#             && mth > 40 \
#             && mll < 100 \
#             && drll < 2.5 \
#             && muccamva2HDMgradFull_low_em > 0.1549 \
#             && ( std_vector_jet_pt[0] < 20 || std_vector_jet_cmvav2[0] < -0.5884 ) \
#             && ( std_vector_jet_pt[1] < 20 || std_vector_jet_cmvav2[1] < -0.5884 ) \
#             && ( std_vector_jet_pt[2] < 20 || std_vector_jet_cmvav2[2] < -0.5884 ) \
#             && ( std_vector_jet_pt[3] < 20 || std_vector_jet_cmvav2[3] < -0.5884 ) \
#             && ( std_vector_jet_pt[4] < 20 || std_vector_jet_cmvav2[4] < -0.5884 ) \
#             && ( std_vector_jet_pt[5] < 20 || std_vector_jet_cmvav2[5] < -0.5884 ) \
#             && ( std_vector_jet_pt[6] < 20 || std_vector_jet_cmvav2[6] < -0.5884 ) \
#             && ( std_vector_jet_pt[7] < 20 || std_vector_jet_cmvav2[7] < -0.5884 ) \
#             && ( std_vector_jet_pt[8] < 20 || std_vector_jet_cmvav2[8] < -0.5884 ) \
#             && ( std_vector_jet_pt[9] < 20 || std_vector_jet_cmvav2[9] < -0.5884 ) \
# '

# cuts['monoH_2HDM_grad_high_em'] = 'njet >= 0 \
#             && mth > 40 \
#             && mll < 100 \
#             && drll < 2.5 \
#             && muccamva2HDMgradFull_high_em > 0.1329 \
#             && ( std_vector_jet_pt[0] < 20 || std_vector_jet_cmvav2[0] < -0.5884 ) \
#             && ( std_vector_jet_pt[1] < 20 || std_vector_jet_cmvav2[1] < -0.5884 ) \
#             && ( std_vector_jet_pt[2] < 20 || std_vector_jet_cmvav2[2] < -0.5884 ) \
#             && ( std_vector_jet_pt[3] < 20 || std_vector_jet_cmvav2[3] < -0.5884 ) \
#             && ( std_vector_jet_pt[4] < 20 || std_vector_jet_cmvav2[4] < -0.5884 ) \
#             && ( std_vector_jet_pt[5] < 20 || std_vector_jet_cmvav2[5] < -0.5884 ) \
#             && ( std_vector_jet_pt[6] < 20 || std_vector_jet_cmvav2[6] < -0.5884 ) \
#             && ( std_vector_jet_pt[7] < 20 || std_vector_jet_cmvav2[7] < -0.5884 ) \
#             && ( std_vector_jet_pt[8] < 20 || std_vector_jet_cmvav2[8] < -0.5884 ) \
#             && ( std_vector_jet_pt[9] < 20 || std_vector_jet_cmvav2[9] < -0.5884 ) \
# '


# Zbar Model - Adaptive Boost Training
# cuts['monoH_Zbar_adapt_low_em'] = 'njet >= 0 \
#             && mth > 40 \
#             && mll < 100 \
#             && drll < 2.5 \
#             && muccamvaZbaradaptFull_low_em > 0.5427 \
#             && ( std_vector_jet_pt[0] < 20 || std_vector_jet_cmvav2[0] < -0.5884 ) \
#             && ( std_vector_jet_pt[1] < 20 || std_vector_jet_cmvav2[1] < -0.5884 ) \
#             && ( std_vector_jet_pt[2] < 20 || std_vector_jet_cmvav2[2] < -0.5884 ) \
#             && ( std_vector_jet_pt[3] < 20 || std_vector_jet_cmvav2[3] < -0.5884 ) \
#             && ( std_vector_jet_pt[4] < 20 || std_vector_jet_cmvav2[4] < -0.5884 ) \
#             && ( std_vector_jet_pt[5] < 20 || std_vector_jet_cmvav2[5] < -0.5884 ) \
#             && ( std_vector_jet_pt[6] < 20 || std_vector_jet_cmvav2[6] < -0.5884 ) \
#             && ( std_vector_jet_pt[7] < 20 || std_vector_jet_cmvav2[7] < -0.5884 ) \
#             && ( std_vector_jet_pt[8] < 20 || std_vector_jet_cmvav2[8] < -0.5884 ) \
#             && ( std_vector_jet_pt[9] < 20 || std_vector_jet_cmvav2[9] < -0.5884 ) \
# '

# cuts['monoH_Zbar_adapt_high_em'] = 'njet >= 0 \
#             && mth > 40 \
#             && mll < 100 \
#             && drll < 2.5 \
#             && muccamvaZbaradaptFull_high_em > 0.6677 \
#             && ( std_vector_jet_pt[0] < 20 || std_vector_jet_cmvav2[0] < -0.5884 ) \
#             && ( std_vector_jet_pt[1] < 20 || std_vector_jet_cmvav2[1] < -0.5884 ) \
#             && ( std_vector_jet_pt[2] < 20 || std_vector_jet_cmvav2[2] < -0.5884 ) \
#             && ( std_vector_jet_pt[3] < 20 || std_vector_jet_cmvav2[3] < -0.5884 ) \
#             && ( std_vector_jet_pt[4] < 20 || std_vector_jet_cmvav2[4] < -0.5884 ) \
#             && ( std_vector_jet_pt[5] < 20 || std_vector_jet_cmvav2[5] < -0.5884 ) \
#             && ( std_vector_jet_pt[6] < 20 || std_vector_jet_cmvav2[6] < -0.5884 ) \
#             && ( std_vector_jet_pt[7] < 20 || std_vector_jet_cmvav2[7] < -0.5884 ) \
#             && ( std_vector_jet_pt[8] < 20 || std_vector_jet_cmvav2[8] < -0.5884 ) \
#             && ( std_vector_jet_pt[9] < 20 || std_vector_jet_cmvav2[9] < -0.5884 ) \
# '

# Zbar Model - Gradient Boost Training
# cuts['monoH_Zbar_grad_low_em'] = 'njet >= 0 \
#             && mth > 40 \
#             && mll < 100 \
#             && drll < 2.5 \
#             && muccamvaZbargradFull_low_em > 0.0963 \
#             && ( std_vector_jet_pt[0] < 20 || std_vector_jet_cmvav2[0] < -0.5884 ) \
#             && ( std_vector_jet_pt[1] < 20 || std_vector_jet_cmvav2[1] < -0.5884 ) \
#             && ( std_vector_jet_pt[2] < 20 || std_vector_jet_cmvav2[2] < -0.5884 ) \
#             && ( std_vector_jet_pt[3] < 20 || std_vector_jet_cmvav2[3] < -0.5884 ) \
#             && ( std_vector_jet_pt[4] < 20 || std_vector_jet_cmvav2[4] < -0.5884 ) \
#             && ( std_vector_jet_pt[5] < 20 || std_vector_jet_cmvav2[5] < -0.5884 ) \
#             && ( std_vector_jet_pt[6] < 20 || std_vector_jet_cmvav2[6] < -0.5884 ) \
#             && ( std_vector_jet_pt[7] < 20 || std_vector_jet_cmvav2[7] < -0.5884 ) \
#             && ( std_vector_jet_pt[8] < 20 || std_vector_jet_cmvav2[8] < -0.5884 ) \
#             && ( std_vector_jet_pt[9] < 20 || std_vector_jet_cmvav2[9] < -0.5884 ) \
# '

# cuts['monoH_Zbar_grad_high_em'] = 'njet >= 0 \
#             && mth > 40 \
#             && mll < 100 \
#             && drll < 2.5 \
#             && muccamvaZbargradFull_high_em > 0.1705 \
#             && ( std_vector_jet_pt[0] < 20 || std_vector_jet_cmvav2[0] < -0.5884 ) \
#             && ( std_vector_jet_pt[1] < 20 || std_vector_jet_cmvav2[1] < -0.5884 ) \
#             && ( std_vector_jet_pt[2] < 20 || std_vector_jet_cmvav2[2] < -0.5884 ) \
#             && ( std_vector_jet_pt[3] < 20 || std_vector_jet_cmvav2[3] < -0.5884 ) \
#             && ( std_vector_jet_pt[4] < 20 || std_vector_jet_cmvav2[4] < -0.5884 ) \
#             && ( std_vector_jet_pt[5] < 20 || std_vector_jet_cmvav2[5] < -0.5884 ) \
#             && ( std_vector_jet_pt[6] < 20 || std_vector_jet_cmvav2[6] < -0.5884 ) \
#             && ( std_vector_jet_pt[7] < 20 || std_vector_jet_cmvav2[7] < -0.5884 ) \
#             && ( std_vector_jet_pt[8] < 20 || std_vector_jet_cmvav2[8] < -0.5884 ) \
#             && ( std_vector_jet_pt[9] < 20 || std_vector_jet_cmvav2[9] < -0.5884 ) \
# '


# Cut and Count Signal Region
# cuts['monoH_Alberto_em'] = 'njet >= 0 \
#             && mth > 200 \
#             && drll < 0.8 \
#             && mtw1 > 160 \
#             && mpmet > 100 \
#             && metTtrk > 100 \
#             && mtw2 > 100 \
#             && dphilmet1 > 2.6 \
#             && dphilmet2 > 2.6 \
#             && ( std_vector_jet_pt[0] < 20 || std_vector_jet_cmvav2[0] < -0.5884 ) \
#             && ( std_vector_jet_pt[1] < 20 || std_vector_jet_cmvav2[1] < -0.5884 ) \
#             && ( std_vector_jet_pt[2] < 20 || std_vector_jet_cmvav2[2] < -0.5884 ) \
#             && ( std_vector_jet_pt[3] < 20 || std_vector_jet_cmvav2[3] < -0.5884 ) \
#             && ( std_vector_jet_pt[4] < 20 || std_vector_jet_cmvav2[4] < -0.5884 ) \
#             && ( std_vector_jet_pt[5] < 20 || std_vector_jet_cmvav2[5] < -0.5884 ) \
#             && ( std_vector_jet_pt[6] < 20 || std_vector_jet_cmvav2[6] < -0.5884 ) \
#             && ( std_vector_jet_pt[7] < 20 || std_vector_jet_cmvav2[7] < -0.5884 ) \
#             && ( std_vector_jet_pt[8] < 20 || std_vector_jet_cmvav2[8] < -0.5884 ) \
#             && ( std_vector_jet_pt[9] < 20 || std_vector_jet_cmvav2[9] < -0.5884 ) \
# '


# 11 = e
# 13 = mu
# 15 = tau

