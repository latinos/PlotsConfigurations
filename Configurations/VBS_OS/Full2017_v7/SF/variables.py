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

variables['mjj_s1_sb4_berr03_ee_lowZ']      = {   
                            'name': 'mjj',            #   variable name    
                            'range' : ([500., 645., 1465., 2035., 4000.],),    #   variable range
                            'xaxis' : 'm_{jj} [GeV]',  #   x axis name
                            'fold' :3
                        }

variables['mjj_s1_sb4_berr03_ee_highZ']      = {   
                            'name': 'mjj',            #   variable name    
                            'range' : ([500., 945., 1685., 4000.],),    #   variable range
                            'xaxis' : 'm_{jj} [GeV]',  #   x axis name
                            'fold' :3
                        }

variables['mjj_s1_sb4_berr03_mm_lowZ']      = {   
                            'name': 'mjj',            #   variable name    
                            'range' : ([500., 690., 885., 1060., 1260., 1865., 2330., 4000.],),    #   variable range
                            'xaxis' : 'm_{jj} [GeV]',  #   x axis name
                            'fold' :3
                        }

variables['mjj_s1_sb4_berr03_mm_highZ']      = {   
                            'name': 'mjj',            #   variable name    
                            'range' : ([500., 610., 960., 1500., 4000.],),    #   variable range
                            'xaxis' : 'm_{jj} [GeV]',  #   x axis name
                            'fold' :3
                        }