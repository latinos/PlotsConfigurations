# variables

#variables = {}
    
#'fold' : # 0 = not fold (default), 1 = fold underflowbin, 2 = fold overflow bin, 3 = fold underflow and overflow

import os
import copy
import inspect

configurations = os.path.realpath(inspect.getfile(inspect.currentframe())) # this file
configurations = os.path.dirname(configurations) # Full2017nano_STXS_1p1
configurations = os.path.dirname(configurations) # v7
configurations = os.path.dirname(configurations) # STXS_nanoAOD
configurations = os.path.dirname(configurations) # ZH4l

variables['class0_XSF'] = {
     'name': 'hww_ZH_BDT(Entry$,0)',
     'range' : ([-0.50,-0.25,-0.15,0.,0.15,0.25,0.35,0.50,0.80],),
     'xaxis' : 'MVA discriminant ZH',
     'fold' : 3,
     'linesToAdd' : ['.L %s/nano_config/v7/Full2017/hww_ZH_BDT.C+' % configurations]
}

variables['class1_XDF'] = {
     'name': 'hww_ZH_BDT(Entry$,0)',
     'range' : ([-0.50,-0.25,0.,0.25,0.50,0.80],),
     'xaxis' : 'MVA discriminant ZH',
     'fold' : 3,
}


variables['events']  = {   'name': '1',      
                        'range' : (1,0,2),  
                        'xaxis' : 'events', 
                         'fold' : 3
                        }
