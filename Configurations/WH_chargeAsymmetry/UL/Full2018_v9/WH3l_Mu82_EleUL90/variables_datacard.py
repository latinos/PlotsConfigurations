# variables

# variables = {}
    
# 'fold' : 
# 0 = not fold (default), 
# 1 = fold underflowbin, 
# 2 = fold overflow bin, 
# 3 = fold underflow and overflow

variables['events'] = {
    'name'  : '1',
    'range' : (1,0,2),
    'xaxis' : 'events',
    'fold'  : 3
}

##################################################
# New training considering Top and Z+jets as Fakes
##################################################
variables['BDT_WH3l_OSSF_new_v9_100_bins'] = { 
    'name'  : 'BDT_WH3l_OSSF_new_v9',
    'range' : (100,-1.,1.),
    'xaxis' : 'MVA discriminant',
    'fold'  : 3,
}

# ossf ge
variables['BDT_WH3l_OSSF_new_v9_0_75'] = { 
    'name'  : 'BDT_WH3l_OSSF_new_v9',
    'range' : ([-1.0, -0.75, -0.5, -0.25, 0.0, 0.25, 0.5, 0.75, 1.0],),
    'xaxis' : 'MVA discriminant',
    'fold'  : 3,
}

variables['BDT_WH3l_SSSF_new_v9_100_bins'] = { 
    'name'  : 'BDT_WH3l_SSSF_new_v9',
    'range' : (100,-1.,1.),
    'xaxis' : 'MVA discriminant',
    'fold'  : 3,
}

# sssf ge
variables['BDT_WH3l_SSSF_new_v9_0_75'] = { 
    'name'  : 'BDT_WH3l_SSSF_new_v9',
    'range' : ([-1.0, 0.5, 0.75, 1.0],),
    'xaxis' : 'MVA discriminant',
    'fold'  : 3,
}

######################################
# Training including VVV as background
######################################
variables['BDT_WH3l_OSSF_VVV_v9'] = { 
    'name'     : 'BDT_WH3l_OSSF_VVV_v9',
    'range'    : (40,-1.,1.),
    'xaxis'    : 'MVA discriminant',
    'yaxis'    : 'Events',
    'fold'     : 3,
}

variables['BDT_WH3l_SSSF_VVV_v9'] = { 
    'name'     : 'BDT_WH3l_SSSF_VVV_v9',
    'range'    : (40,-1.,1.),
    'xaxis'    : 'MVA discriminant',
    'yaxis'    : 'Events',
    'fold'     : 3,
}

###########################
# For WHSS WZ normalization
###########################
variables['BDTG6_TT_100_bins'] = {
    'name'     : 'BDT_WHSS_TopSemileptonic_v9',
    'range'    : (100,-1,1),
    'xaxis'    : 'BDT discriminant',
    'fold'     : 3
}

variables['BDTG5_TT_weight_100_bins'] = {
    'name'     : 'BDT_WHSS_TopSemileptonic_weight_v9',
    'range'    : (100,-1,1),
    'xaxis'    : 'BDT discriminant',
    'fold'     : 3
}

variables['BDTG5_TT_weight_FullRun2_100_bins'] = {
    'name'     : 'BDT_WHSS_TopSemileptonic_weight_FullRun2_v9',
    'range'    : (100,-1,1),
    'xaxis'    : 'BDT discriminant',
    'fold'     : 3
}

# ##############################################################
# # BDT training considering Top and Z+jets as Fakes and weights
# ##############################################################
# variables['BDT_WH3l_OSSF_weight_v9_100_bins'] = { 
#     'name': 'BDT_WH3l_OSSF_weight_v9',
#     'range' : (100,-1.,1.),
#     'xaxis' : 'MVA discriminant',
#     'fold' : 3,
# }

# variables['BDT_WH3l_SSSF_weight_v9_100_bins'] = { 
#     'name': 'BDT_WH3l_SSSF_weight_v9',
#     'range' : (100,-1.,1.),
#     'xaxis' : 'MVA discriminant',
#     'fold' : 3,
# }

# ##############################################################
# # BDT training considering Top and Z+jets as Fakes and weights
# # Training using the 4 eras of Run 2 merged
# ##############################################################
# variables['BDT_WH3l_OSSF_weight_FullRun2_v9_100_bins'] = { 
#     'name': 'BDT_WH3l_OSSF_weight_FullRun2_v9',
#     'range' : (100,-1.,1.),
#     'xaxis' : 'MVA discriminant',
#     'fold' : 3,
# }

# # variables['BDT_WH3l_SSSF_weight_FullRun2_v9_100_bins'] = { 
# #     'name': 'BDT_WH3l_SSSF_weight_FullRun2_v9',
# #     'range' : (100,-1.,1.),
# #     'xaxis' : 'MVA discriminant',
# #     'fold' : 3,
# # }

