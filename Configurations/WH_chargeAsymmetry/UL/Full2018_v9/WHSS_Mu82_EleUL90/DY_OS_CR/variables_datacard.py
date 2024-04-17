# variables

#variables = {}

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

########################################################
# Default BDT training but with TopSemileptonic as fakes
########################################################

variables['BDTG6_TT_100_bins'] = {
    'name'  : 'BDT_WHSS_TopSemileptonic_v9',     
    'range' : (100,-1,1),   
    'xaxis' : 'BDT discriminant',
    'fold'  : 3
}

# em 1j ge, mm 1j ge
variables['BDTG6_TT_0_75'] = {
    'name'  : 'BDT_WHSS_TopSemileptonic_v9',     
    'range' : ([-1.0, -0.5, -0.25, 0.0, 0.25, 0.5, 0.75, 1.0],),
    'xaxis' : 'BDT discriminant',
    'fold'  : 3
}

# ee 1j ge
variables['BDTG6_TT_0_6'] = {
    'name'  : 'BDT_WHSS_TopSemileptonic_v9',     
    'range' : ([-1.0, -0.2, 0.2, 0.6, 1.0],),
    'xaxis' : 'BDT discriminant',
    'fold'  : 3
}

# em 2j ge, mm 2j ge, ee 2j ge, em 1j lt, mm 1j lt
variables['BDTG6_TT_0_5'] = {
    'name'  : 'BDT_WHSS_TopSemileptonic_v9',     
    'range' : ([-1.0, 0.0, 0.5, 1.0],),
    'xaxis' : 'BDT discriminant',
    'fold'  : 3
}

# em 2j lt, mm 2j lt, ee 1j lt, ee 2j lt
variables['BDTG6_TT_0_0'] = {
    'name'  : 'BDT_WHSS_TopSemileptonic_v9',     
    'range' : ([-1.0, 0.0, 1.0],),
    'xaxis' : 'BDT discriminant',
    'fold'  : 3
}

#################################################
# New training including Wg process as background
#################################################

variables['BDTG5_Wg_100_bins'] = {
    'name'  : 'BDT_WHSS_Wg_v9',     
    'range' : (100,-1,1),   
    'xaxis' : 'BDT discriminant',
    'fold'  : 3
}

variables['BDTG5_Wg_0_75'] = {
    'name'  : 'BDT_WHSS_Wg_v9',     
    'range' : ([-1.0, -0.75, -0.5, -0.25, 0.0, 0.25, 0.5, 0.75, 1.0],),
    'xaxis' : 'BDT discriminant',
    'fold'  : 3
}

# em 1j ge, mm 1j ge
variables['BDTG5_Wg_0_6'] = {
    'name'  : 'BDT_WHSS_Wg_v9',     
    'range' : ([-1.0, -0.6, -0.2, 0.2, 0.6, 1.0],),
    'xaxis' : 'BDT discriminant',
    'fold'  : 3
}

# em 2j ge, em 1j lt, mm 1j lt, ee 1j ge, mm 2j ge
variables['BDTG5_Wg_0_5'] = {
    'name'  : 'BDT_WHSS_Wg_v9',     
    'range' : ([-1.0, -0.5, 0.0, 0.5, 1.0],),
    'xaxis' : 'BDT discriminant',
    'fold'  : 3
}

# ee 2j ge, em 2j lt, mm 2j lt, ee 1j lt, ee 2j lt
variables['BDTG5_Wg_0_0'] = {
    'name'  : 'BDT_WHSS_Wg_v9',     
    'range' : ([-1.0, 0.0, 1.0],),
    'xaxis' : 'BDT discriminant',
    'fold'  : 3
}
