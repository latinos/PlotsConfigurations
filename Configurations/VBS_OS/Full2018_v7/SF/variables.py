# variables

#variables = {}
    
#'fold' : # 0 = not fold (default), 1 = fold underflowbin, 2 = fold overflow bin, 3 = fold underflow and overflow

#gROOT.ProcessLineSync('.L m4l.C+')
#gROOT.ProcessLineSync('.L mucca.C+')
#gROOT.ProcessLineSync('initMyReader()')

variables['events']   = {   'name': '1',
                            'range' : (1,0,2),
                            'xaxis' : 'events',
                            'fold' : 3
                        }

variables['mjj']      = {   'name': 'mjj',            #   variable name    
                            'range' : ([500., 750., 1000., 1500., 2000., 4000.],),    #   variable range
                            'xaxis' : 'm_{jj} [GeV]',  #   x axis name
                            'fold' :3
                        }

# ee lowZ
variables['mjj_s1_sb4_berr03_ee_lowZ']      = {   
                            'name': 'mjj',            #   variable name    
                            'range' : ([500., 725., 925., 1110., 1265., 1470., 2270., 4000.],),    #   variable range
                            'xaxis' : 'm_{jj} [GeV]',  #   x axis name
                            #'divideByBinWidth': 1,
                            'fold' :3
                        }
# ee highZ
variables['mjj_s1_sb4_berr03_ee_highZ']      = {   
                            'name': 'mjj',            #   variable name    
                            'range' : ([500., 660., 995., 1300., 1950., 4000.],),    #   variable range
                            'xaxis' : 'm_{jj} [GeV]',  #   x axis name
                            #'divideByBinWidth': 1,
                            'fold' :3
                        }
# mm lowZ
variables['mjj_s1_sb4_berr03_mm_lowZ']      = {   
                            'name': 'mjj',            #   variable name    
                            'range' : ([500., 685., 800., 910., 1000., 1085., 1200., 1320., 1460., 1595., 1740., 1930., 2180., 2690., 4000.],),    #   variable range
                            'xaxis' : 'm_{jj} [GeV]',  #   x axis name
                            #'divideByBinWidth': 1,
                            'fold' :3
                        }
# mm highZ
variables['mjj_s1_sb4_berr03_mm_highZ']      = {   
                            'name': 'mjj',            #   variable name    
                            'range' : ([500., 630., 920., 1140., 1345., 1750., 2395., 4000.],),    #   variable range
                            'xaxis' : 'm_{jj} [GeV]',  #   x axis name
                            #'divideByBinWidth': 1,
                            'fold' :3
                        }