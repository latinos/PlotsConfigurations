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

#########################
# Inclusive Jets Analysis
#########################

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
<<<<<<< HEAD
=======
cuts['monoH_MVA_em_pm']  = 'njet >= 0 \
               && std_vector_lepton_flavour[0] == 11 \
               && mth > 40 \
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
cuts['monoH_MVA_em_mp']  = 'njet >= 0 \
               && std_vector_lepton_flavour[0] == -11 \
               && mth > 40 \
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
cuts['monoH_MVA_me_pm']  = 'njet >= 0 \
               && std_vector_lepton_flavour[0] == 13 \
               && mth > 40 \
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
cuts['monoH_MVA_me_mp']  = 'njet >= 0 \
               && std_vector_lepton_flavour[0] == -13 \
               && mth > 40 \
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
>>>>>>> 3849cb41e4046ce4fd0345b02bde5ec3145593f2
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

#####################
# 0-Jets Bin Analysis
#####################

<<<<<<< HEAD
# Signal Region
=======
# Signal Regions
>>>>>>> 3849cb41e4046ce4fd0345b02bde5ec3145593f2
cuts['monoH_0Jet_em'] = 'std_vector_jet_pt[0] < 30 \
            && mth > 40 \
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
<<<<<<< HEAD
=======
cuts['monoH_0Jet_em_pm']  = 'std_vector_jet_pt[0] < 30 \
               && std_vector_lepton_flavour[0] == 11 \
               && mth > 40 \
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
cuts['monoH_0Jet_em_mp']  = 'std_vector_jet_pt[0] < 30 \
               && std_vector_lepton_flavour[0] == -11 \
               && mth > 40 \
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
cuts['monoH_0Jet_me_pm']  = 'std_vector_jet_pt[0] < 30 \
               && std_vector_lepton_flavour[0] == 13 \
               && mth > 40 \
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
cuts['monoH_0Jet_me_mp']  = 'std_vector_jet_pt[0] < 30 \
               && std_vector_lepton_flavour[0] == -13 \
               && mth > 40 \
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
>>>>>>> 3849cb41e4046ce4fd0345b02bde5ec3145593f2
# DY->tt Control Region
cuts['monoH_0Jet_DYtt_em'] = 'std_vector_jet_pt[0] < 30 \
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
cuts['monoH_0Jet_WW_em'] = 'std_vector_jet_pt[0] < 30 \
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
cuts['monoH_0Jet_Top_em'] = 'std_vector_jet_pt[0] < 30 \
            && mth > 40 \
            && mll < 76 \
            && drll < 2.5 \
            && ( std_vector_jet_pt[0] > 20 && std_vector_jet_cmvav2[0] > -0.5884 ) \
'

#####################
# 1-Jets Bin Analysis
#####################

# Signal Region
cuts['monoH_1Jet_em'] = 'std_vector_jet_pt[1] < 30 \
            && std_vector_jet_pt[0] >= 30 \
            && mth > 40 \
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
<<<<<<< HEAD
=======
cuts['monoH_1Jet_em_pm']  = 'std_vector_jet_pt[1] < 30 \
               && std_vector_lepton_flavour[0] == 11 \
               && mth > 40 \
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
cuts['monoH_1Jet_em_mp']  = 'std_vector_jet_pt[1] < 30 \
               && std_vector_lepton_flavour[0] == -11 \
               && mth > 40 \
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
cuts['monoH_1Jet_me_pm']  = 'std_vector_jet_pt[1] < 30 \
               && std_vector_lepton_flavour[0] == 13 \
               && mth > 40 \
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
cuts['monoH_1Jet_me_mp']  = 'std_vector_jet_pt[1] < 30 \
               && std_vector_lepton_flavour[0] == -13 \
               && mth > 40 \
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
>>>>>>> 3849cb41e4046ce4fd0345b02bde5ec3145593f2
# DY->tt Control Region
cuts['monoH_1Jet_DYtt_em'] = 'std_vector_jet_pt[1] < 30 \
            && std_vector_jet_pt[0] >= 30 \
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
cuts['monoH_1Jet_WW_em'] = 'std_vector_jet_pt[1] < 30 \
            && std_vector_jet_pt[0] >= 30 \
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
cuts['monoH_1Jet_Top_em'] = 'std_vector_jet_pt[1] < 30 \
            && std_vector_jet_pt[0] >= 30 \
            && mth > 40 \
            && mll < 76 \
            && drll < 2.5 \
            && ( std_vector_jet_pt[0] > 20 && std_vector_jet_cmvav2[0] > -0.5884 ) \
'

#############################
# 2-or-more-Jets Bin Analysis
#############################

# Signal Region
cuts['monoH_2Jet_em'] = 'std_vector_jet_pt[1] >= 30 \
            && mth > 40 \
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
<<<<<<< HEAD
=======
cuts['monoH_2Jet_em_pm']  = 'std_vector_jet_pt[1] >= 30 \
               && std_vector_lepton_flavour[0] == 11 \
               && mth > 40 \
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
cuts['monoH_2Jet_em_mp']  = 'std_vector_jet_pt[1] >= 30 \
               && std_vector_lepton_flavour[0] == -11 \
               && mth > 40 \
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
cuts['monoH_2Jet_me_pm']  = 'std_vector_jet_pt[1] >= 30 \
               && std_vector_lepton_flavour[0] == 13 \
               && mth > 40 \
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
cuts['monoH_2Jet_me_mp']  = 'std_vector_jet_pt[1] >= 30 \
               && std_vector_lepton_flavour[0] == -13 \
               && mth > 40 \
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
>>>>>>> 3849cb41e4046ce4fd0345b02bde5ec3145593f2
# DY->tt Control Region
cuts['monoH_2Jet_DYtt_em'] = 'std_vector_jet_pt[1] >= 30 \
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
cuts['monoH_2Jet_WW_em'] = 'std_vector_jet_pt[1] >= 30 \
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
cuts['monoH_2Jet_Top_em'] = 'std_vector_jet_pt[1] >= 30 \
            && mth > 40 \
            && mll < 76 \
            && drll < 2.5 \
            && ( std_vector_jet_pt[0] > 20 && std_vector_jet_cmvav2[0] > -0.5884 ) \
'


# 11 = e
# 13 = mu
# 15 = tau
<<<<<<< HEAD

=======
>>>>>>> 3849cb41e4046ce4fd0345b02bde5ec3145593f2
