import inspect

configurations = os.path.realpath(inspect.getfile(inspect.currentframe())) # this file
configurations = os.path.dirname(configurations) # Full2018nano_STXS_1p1
configurations = os.path.dirname(configurations) # ZH4l
configurations = os.path.dirname(configurations) # Configurations

#'fold' : # 0 = not fold (default), 1 = fold underflowbin, 2 = fold overflow bin, 3 = fold underflow and overflow

variables['BDT'] = {
     'name': 'hww_ZH_newBDT(Entry$,0)',
     'range' : ([-0.50,-0.25,-0.15,0.,0.15,0.25,0.35,0.50,0.75],),
     'xaxis' : 'MVA discriminant ZH',
     'fold' : 3,
     'linesToAdd' : ['.L %s/ZH4l/nano_config/Full2018/hww_ZH_newBDT.C+' % configurations]
}

variables['events']  = {   'name': '1',      
                        'range' : (1,0,2),  
                        'xaxis' : 'events', 
                         'fold' : 3
                        }
