# variables

#variables = {}
    
#'fold' : # 0 = not fold (default), 1 = fold underflowbin, 2 = fold overflow bin, 3 = fold underflow and overflow

import os
import copy
import inspect

configurations = os.path.realpath(inspect.getfile(inspect.currentframe())) # this file
configurations = os.path.dirname(configurations) # Full2018nano_STXS_1p1
configurations = os.path.dirname(configurations) # v7
configurations = os.path.dirname(configurations) # STXS_nanoAOD
configurations = os.path.dirname(configurations) # ZH4l



variables['mllll_fine_0'] = {
     'name': 'mllll_zh4l',
     'range' : (50, 0, 1000),
     'xaxis' : 'm4l',
     'fold' : 3,
}

variables['mllll_fine_1'] = {
     'name': 'mllll_zh4l',
     'range' : (100, 0, 1000),
     'xaxis' : 'm4l',
     'fold' : 3,
}


variables['mllll_fine_2'] = {
     'name': 'mllll_zh4l',
     'range' : (200, 0, 1000),
     'xaxis' : 'm4l',
     'fold' : 3,
}


variables['mllll_fine_3'] = {
     'name': 'mllll_zh4l',
     'range' : (300, 0, 1000),
     'xaxis' : 'm4l',
     'fold' : 3,
}

variables['mllll_fine_4'] = {
     'name': 'mllll_zh4l',
     'range' : (1000, 0, 1000),
     'xaxis' : 'm4l',
     'fold' : 3,
}



variables['z0'] = {
     'name': 'z0Mass_zh4l',
     'range' : (50, 50, 150),
     'xaxis' : 'm2l',
     'fold' : 3,
}


variables['z1'] = {
     'name': 'z1Mass_zh4l',
     'range' : (50, 50, 150),
     'xaxis' : 'm2l',
     'fold' : 3,
}





variables['puppimet'] = {
     'name': 'PuppiMET_pt',
     'range' : (100, 0, 200),
     'xaxis' : 'met',
     'fold' : 3,
}








variables['events']  = {   'name': '1',      
                        'range' : (1,0,2),  
                        'xaxis' : 'events', 
                         'fold' : 3
                        }



