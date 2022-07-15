# variables

#variables = {}
    
#'fold' : # 0 = not fold (default), 1 = fold underflowbin, 2 = fold overflow bin, 3 = fold underflow and overflow

import os
import copy
import inspect

configurations = os.path.realpath(inspect.getfile(inspect.currentframe())) # this file
configurations = os.path.dirname(configurations) # Full2016
configurations = os.path.dirname(configurations) # patch_config
configurations = os.path.dirname(configurations) # v7

variables['class0_XSF'] = {
     'name': 'hww_ZH_BDT(Entry$,0)',
     'range' : ([-0.50,-0.25,-0.15,0.,0.15,0.25,0.35,0.50,0.80],),
     'xaxis' : 'MVA discriminant ZH',
     'fold' : 3,
     'linesToAdd' : ['.L %s/Full2016/hww_ZH_BDT.C+' % configurations]
}

variables['class1_XDF'] = {
     'name': 'hww_ZH_BDT(Entry$,0)',
     'range' : ([-0.50,-0.25,0.,0.25,0.50,0.80],),
     'xaxis' : 'MVA discriminant ZH',
     'fold' : 3,
}

variables['class0_XSF_test'] = {
    'name': 'BDT_test[0]',
     'range' : ([-0.50,-0.25,-0.15,0.,0.15,0.25,0.35,0.50,0.80],),
     'xaxis' : 'MVA discriminant ZH',
     'fold' : 3,
}  #change the path of macro

variables['class1_XDF_test'] = {
    'name': 'BDT_test[0]',
     'range' : ([-0.50,-0.25,0.,0.25,0.50,0.80],),
     'xaxis' : 'MVA discriminant ZH',
     'fold' : 3,
} #change the path of macro

variables['z0Mass_zh4l']  = {   'name': 'z0Mass_zh4l',            #   variable name    
                        'range' : (30,50,140),    #   variable range
                        'xaxis' : 'z0Mass [GeV]',  #   x axis name
                       'fold' : 0
                     }

variables['z1Mass_zh4l']  = {   'name': 'z1Mass_zh4l',            #   variable name    
                        'range' : (25,0,250),    #   variable range
                        'xaxis' : 'XMass [GeV]',  #   x axis name
                       'fold' : 0
                     }

variables['mllll_zh4l']  = {   'name': 'mllll_zh4l',            #   variable name    
                        'range' : (60,0,600),    #   variable range
                        'xaxis' : 'mllll [GeV]',  #   x axis name
                       'fold' : 0
                     }

variables['z1Mt_zh4l']  = {   'name': 'z1Mt_zh4l',            #   variable name    
                        'range' : (5,0,150),    #   variable range
                        'xaxis' : 'H_Mt [GeV]',  #   x axis name
                       'fold' : 0
                     }

variables['lep1Mt_zh4l']  = {   'name': 'lep1Mt_zh4l',            #   variable name    
                        'range' : (30,0,550),    #   variable range
                        'xaxis' : 'lep1Mt [GeV]',  #   x axis name
                       'fold' : 0
                     }

variables['lep2Mt_zh4l']  = {   'name': 'lep2Mt_zh4l',            #   variable name    
                        'range' : (30,0,350),    #   variable range
                        'xaxis' : 'lep2Mt [GeV]',  #   x axis name
                       'fold' : 0
                     }

variables['z0Mass_zh4l_test']  = {   'name': 'z0Mass_zh4l_test[0]',            #   variable name    
                        'range' : (30,50,140),    #   variable range
                        'xaxis' : 'z0Mass [GeV]',  #   x axis name
                       'fold' : 0
                     }

variables['z1Mass_zh4l_test']  = {   'name': 'z1Mass_zh4l_test[0]',            #   variable name    
                        'range' : (25,0,250),    #   variable range
                        'xaxis' : 'XMass [GeV]',  #   x axis name
                       'fold' : 0
                     }

variables['mllll_zh4l_test']  = {   'name': 'mllll_zh4l_test[0]',            #   variable name    
                        'range' : (60,0,600),    #   variable range
                        'xaxis' : 'mllll [GeV]',  #   x axis name
                       'fold' : 0
                     }

variables['z1Mt_zh4l_test']  = {   'name': 'z1Mt_zh4l_test[0]',            #   variable name    
                        'range' : (5,0,150),    #   variable range
                        'xaxis' : 'H_Mt [GeV]',  #   x axis name
                       'fold' : 0
                     }

variables['lep1Mt_zh4l_test']  = {   'name': 'lep1Mt_zh4l_test[0]',            #   variable name    
                        'range' : (30,0,550),    #   variable range
                        'xaxis' : 'lep1Mt [GeV]',  #   x axis name
                       'fold' : 0
                     }

variables['lep2Mt_zh4l_test']  = {   'name': 'lep2Mt_zh4l_test[0]',            #   variable name    
                        'range' : (30,0,350),    #   variable range
                        'xaxis' : 'lep2Mt [GeV]',  #   x axis name
                       'fold' : 0
                     }

