# variables

#variables = {}

# 0 = not fold (default), 1 = fold underflowbin, 2 = fold overflow bin, 3 = fold underflow and overflow
    
variables['events'] = {
    'name'  : '1',      
    'range' : (1,0,2),  
    'xaxis' : 'events', 
    'fold'  : 3
}

########################################################
# Default BDT training but with TopSemileptonic as fakes
########################################################

variables['BDTG6_TT_100_bins'] = {
    'name'  : 'BDT_WHSS_TopSemileptonic_v9',     
    'range' : (100,-1,1),   
    'xaxis' : 'BDT discriminant',
    'fold'  : 3
}

##########################################################
# BDT training with TopSemileptonic as fakes and weights
##########################################################

variables['BDTG5_TT_weight_100_bins'] = {
    'name'  : 'BDT_WHSS_TopSemileptonic_weight_v9',
    'range' : (100,-1,1),   
    'xaxis' : 'BDT discriminant',
    'fold'  : 3
}

########################################################
# BDT training with TopSemileptonic as fakes and weights
# Training using the 4 eras of Run 2 merged
########################################################

variables['BDTG5_TT_weight_FullRun2_100_bins'] = {
    'name'  : 'BDT_WHSS_TopSemileptonic_weight_FullRun2_v9',
    'range' : (100,-1,1),   
    'xaxis' : 'BDT discriminant',
    'fold'  : 3
}
