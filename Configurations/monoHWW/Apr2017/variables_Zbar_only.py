# variables

#variables = {}
    
#'fold' : # 0 = not fold (default), 1 = fold underflowbin, 2 = fold overflow bin, 3 = fold underflow and overflow
   
##############################
# MVA Variables with 40 bins #
##############################

# mucca for Zbar Model
variables['muccamvaZbaradaptFull_All'] = {
    'name': 'muccamvaZbaradaptFull_All_em',
    'range' : (40,-1,1),
    'xaxis' : 'MVA discriminant',
    'yaxis' : 'Events / Bin',
    'fold' : 3
    }

######################
# Analysis Variables #
######################

# mucca for Z'B Model
variables['muccamvaZbaradaptFull_All_Bin100'] = {
    'name': 'muccamvaZbaradaptFull_All_em',
    'range' : ([-0.9999,-0.6041,-0.4669,-0.3249,-0.1113,0.2497,0.6039,1],),
    'xaxis' : 'MVA discriminant',
    'yaxis' : 'Events / Bin',
    'fold' : 3
    }

