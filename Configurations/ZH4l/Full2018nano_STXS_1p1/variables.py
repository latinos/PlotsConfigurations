# variables

#variables = {}
    
#'fold' : # 0 = not fold (default), 1 = fold underflowbin, 2 = fold overflow bin, 3 = fold underflow and overflow

variables['class0'] = {
     'name': 'hww_ZH_newBDT(Entry$,0)',
     'range' : ([-0.85,-0.5,-0.35,-0.25,0.,0.15,0.25,0.35,0.50,1.],),
     'xaxis' : 'MVA discriminant ZH',
     'fold' : 3,
     'linesToAdd' : ['.L ../nano_config/Full2018/hww_ZH_newBDT.C+']
}

variables['class1'] = {
     'name': 'hww_ZH_newBDT(Entry$,0)',
     'range' : ([-1.,-0.5,-0.35,-0.25,0.,0.15,0.25,0.35,0.50,1.],),
     'xaxis' : 'MVA discriminant ZH',
     'fold' : 3,
     'linesToAdd' : ['.L ../nano_config/Full2018/hww_ZH_newBDT.C+']
}

variables['class2'] = {
     'name': 'hww_ZH_newBDT(Entry$,0)',
     'range' : (10,-0.85,0.5),
     'xaxis' : 'MVA discriminant ZH',
     'fold' : 3,
     'linesToAdd' : ['.L ../nano_config/Full2018/hww_ZH_newBDT.C+']
}

variables['class3'] = {
     'name': 'hww_ZH_newBDT(Entry$,0)',
     'range' : ([-0.85,-0.5,-0.35,-0.25,-0.15,0.,0.15,0.25,0.35,0.50,0.95],),
     'xaxis' : 'MVA discriminant ZH',
     'fold' : 3,
     'linesToAdd' : ['.L ../nano_config/Full2018/hww_ZH_newBDT.C+']
}

variables['class4'] = {
     'name': 'hww_ZH_newBDT(Entry$,0)',
     'range' : ([-0.80,-0.5,-0.35,-0.25,-0.15,0.,0.15,0.25,0.35,0.50,1.],),
     'xaxis' : 'MVA discriminant ZH',
     'fold' : 3,
     'linesToAdd' : ['.L ../nano_config/Full2018/hww_ZH_newBDT.C+']
}

variables['events']  = {   'name': '1',      
                        'range' : (1,0,2),  
                        'xaxis' : 'events', 
                         'fold' : 3
                        }

