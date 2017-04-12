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


# Signal Region
cuts['monoH_MVA_em'] = 'njet >= 0 \
            && mth > 40 \
            && mll < 100 \
            && drll < 2.5 \
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
# DY->tt Control Region
cuts['monoH_MVA_DYtt_em'] = 'njet >= 0 \
            && mth < 40 \
            && mll < 100 \
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
# WW Control Region
cuts['monoH_MVA_WW_em'] = 'njet >= 0 \
            && mth > 40 \
            && mll > 100 \
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
            && (std_vector_lepton_pt[0] + std_vector_lepton_pt[1] + metPfType1 + std_vector_jet_pt[0]*(std_vector_jet_pt[0]>30) + std_vector_jet_pt[1]*(std_vector_jet_pt[1]>30) + std_vector_jet_pt[2]*(std_vector_jet_pt[2]>30) + std_vector_jet_pt[3]*(std_vector_jet_pt[3]>30) + std_vector_jet_pt[4]*(std_vector_jet_pt[4]>30) + std_vector_jet_pt[5]*(std_vector_jet_pt[5]>30) + std_vector_jet_pt[6]*(std_vector_jet_pt[6]>30) + std_vector_jet_pt[7]*(std_vector_jet_pt[7]>30) + std_vector_jet_pt[8]*(std_vector_jet_pt[8]>30) + std_vector_jet_pt[9]*(std_vector_jet_pt[9]>30)) < 200 \
'
# Top Control Region
cuts['monoH_MVA_Top_em'] = 'njet >= 0 \
            && mth > 40 \
            && mll < 100 \
            && drll < 2.5 \
            && ( std_vector_jet_pt[0] > 20 && std_vector_jet_cmvav2[0] > -0.715 ) \
'
# # cut on MVA output variable
# cuts['monoH_MVAcut_em'] = 'njet >= 0 \
#             && mth > 40 \
#             && mll < 100 \
#             && drll < 2.5 \
#             && muccamva2HDM > 0.885 \
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
# # Cut and Count Signal Region
# cuts['monoH_Alberto_em'] = 'njet >= 0 \
#             && mth > 200 \
#             && drll < 0.8 \
#             && mtw1 > 160 \
#             && mpmet > 100 \
#             && metTtrk > 100 \
#             && mtw2 > 100 \
#             && dphilmet1 > 2.6 \
#             && dphilmet2 > 2.6 \
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
#'

# 11 = e
# 13 = mu
# 15 = tau

