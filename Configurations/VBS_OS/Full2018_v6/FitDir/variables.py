# variables

#variables = {}
    
#'fold' : # 0 = not fold (default), 1 = fold underflowbin, 2 = fold overflow bin, 3 = fold underflow and overflow

#gROOT.ProcessLineSync('.L m4l.C+')
#gROOT.ProcessLineSync('.L mucca.C+')
#gROOT.ProcessLineSync('initMyReader()')

variables['events']  = {   'name': '1',
                        'range' : (1,0,2),
                        'xaxis' : 'events',
                         'fold' : 3
                        }

variables['mjj']  = {   'name': 'mjj',            #   variable name    
                        'range' : (10,500,3000),    #   variable range
                        'xaxis' : 'm_{jj} [GeV]',  #   x axis name
                        'fold' :3
                        }

variables['mjj_merged']  = {   'name': 'mjj',            #   variable name    
                        'range' : ([500, 750., 1000., 1500., 2000., 3000],),    #   variable range
                        'xaxis' : 'm_{jj} [GeV]',  #   x axis name
                        'fold' :3
                        }

#Add other variables you might want to include in the fit procedure
