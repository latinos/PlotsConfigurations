# variables

#variables = {}
    
#'fold' : # 0 = not fold (default), 1 = fold underflowbin, 2 = fold overflow bin, 3 = fold underflow and overflow

variables['events'] = {
    'name'  : '1',
    'range' : (1,0,2),
    'xaxis' : 'events',
    'fold'  : 3
}

# New training considering Top and Z+jets as Fakes
variables['BDT_WH3l_OSSF_new_v9'] = { 
    'name'     : 'BDT_WH3l_OSSF_new_v9',
    'range'    : (40,-1.,1.),
    'doWeight' : 1,
    'binX'     : 1,
    'binY'     : 40,
    'xaxis'    : 'MVA discriminant',
    'yaxis'    : 'Events',
    'fold'     : 3,
}

variables['BDT_WH3l_SSSF_new_v9'] = { 
    'name'     : 'BDT_WH3l_SSSF_new_v9',
    'range'    : (40,-1.,1.),
    'doWeight' : 1,
    'binX'     : 1,
    'binY'     : 40,
    'xaxis'    : 'MVA discriminant',
    'yaxis'    : 'Events',
    'fold'     : 3,
}

variables['BDT_WH3l_OSSF_new_v9_100_bins'] = {
    'name': 'BDT_WH3l_OSSF_new_v9',
    'range' : (100,-1.,1.),
    'xaxis' : 'MVA discriminant',
    'fold' : 3,
}

variables['BDT_WH3l_SSSF_new_v9_100_bins'] = {
    'name': 'BDT_WH3l_SSSF_new_v9',
    'range' : (100,-1.,1.),
    'xaxis' : 'MVA discriminant',
    'fold' : 3,
}
