# variables

#variables = {}

# 0 = not fold (default), 1 = fold underflowbin, 2 = fold overflow bin, 3 = fold underflow and overflow
    
variables['events'] = {
    'name'  : '1',      
    'range' : (1,0,2),  
    'xaxis' : 'events', 
    'fold'  : 3
}

# 1 jet binning
variables['mlljj20_whss_1j_bin'] = {
    'name'  : 'mlljj20_whss',
    'range' : ([60.,70.,80.,90.,100.,110.,120.,130.,140.,150.,160.,170.,180.,190.,200.,250.,300.],),
    'xaxis' : 'mlljj20_whss [GeV]',
    'fold'  : 3
}

# 2 jets binning
variables['mlljj20_whss_2j_bin'] = {
    'name'  : 'mlljj20_whss',
    'range' : ([60.,120.,130.,140.,150.,160.,170.,180.,190.,200.,250.,300.],),
    'xaxis' : 'mlljj20_whss [GeV]',
    'fold'  : 3
}

########################################################
# Default BDT training but with TopSemileptonic as fakes
########################################################

variables['BDTG6_TT'] = {
    'name'     : 'BDT_WHSS_TopSemileptonic_v9',     
    'range'    : (40,-1,1),   
    'doWeight' : 1,
    'binX'     : 1,
    'binY'     : 40,
    'xaxis'    : 'BDT discriminant',
    'yaxis'    : 'Events',
    'fold'     : 3
}

variables['BDTG6_TT_more'] = {
    'name'  : 'BDT_WHSS_TopSemileptonic_v9',     
    'range' : (1000,-1,1),   
    'xaxis' : 'BDT discriminant',
    'fold'  : 3
}

variables['BDTG6_TT_100_bins'] = {
    'name'  : 'BDT_WHSS_TopSemileptonic_v9',     
    'range' : (100,-1,1),   
    'xaxis' : 'BDT discriminant',
    'fold'  : 3
}
