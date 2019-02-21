# variables

#variables = {}
    
#'fold' : # 0 = not fold (default), 1 = fold underflowbin, 2 = fold overflow bin, 3 = fold underflow and overflow
   
# # Tuning for shape analysis

##############################
# MVA Variables with 40 bins #
##############################

# mucca for 2HDM Model
variables['muccamva2HDMadaptFull_All'] = {
    'name': 'muccamva2HDMadaptFull_All_em',
    'range' : (40,-1,1),
    'xaxis' : 'MVA discriminant',
    'yaxis' : 'Events / Bin',
    'fold' : 3
    }

######################
# Analysis Variables #
######################

# mucca for 2HDM Model
variables['muccamva2HDMadaptFull_All_Bin800'] = {
    'name': 'muccamva2HDMadaptFull_All_em',
    'range' : ([-0.9999,-0.7633,-0.5461,-0.3133,-0.0363,0.1099,0.3129,0.4833,0.7299,1],),
    'xaxis' : 'MVA discriminant',
    'yaxis' : 'Events / Bin',
    'fold' : 3
    }

