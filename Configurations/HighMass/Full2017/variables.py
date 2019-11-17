# variables

#variables = {}


variables['events']  = {   'name': '1',      
                        'range' : (1,0,2),  
                        'xaxis' : 'events', 
                        'fold' : 3
                        }

variables['mth']  = {   'name': 'mth',            #   variable name    
                        'range' : (24,60,300),    #   variable range
                        'xaxis' : 'm_{T}^{H} [GeV]',  #   x axis name
                        'fold' : 1
                        }

variables['mth-DY']  = {   'name': 'mth',
                        'range' : (12, 0, 60),
                        'xaxis' : 'm_{T}^{H} [GeV]',
                        'fold' : 0
                        }

variables['mTi']  = {   'name': 'mTi',            #   variable name    
                        'range' : (40,0,600),    #   variable range
                        'xaxis' : 'm_{T}^{i} [GeV]',  #   x axis name
                        'fold' : 1
                        }

variables['mTi_binning']  = {   'name': 'mTi',            #   variable name    
                        #'range' : ([0,50,100,150,200,250,300,350,400,450,500,550,600,650,700,750,800,900,1000,2000],),    #   variable range
                        #'range' : ([0,20,40,60,80,100,120,140,160,180,200,250,300,350,400,500,700,4000],),    #   variable range
                        #'range' : ([0,20,40,60,80,100,120,140,160,180,200,220,240,260,280,300,350,400,450,500,550,600,650,700,800,900, 1000,1200,1400,1600,1800,2000,2300,2600,2900,3200],),    #   variable range
                        #'range' : ([0,20,40,60,80,100,120,140,160,180,200,220,240,260,280,300,350,400,450,500,550,600,650,700,800,900, 1000,1250,1500,2000,2500,3500],),
                        'range' : ([0,50,75,100,120,140,160,180,200,220,240,260,280,300,350,400,450,500,600,700,800,1000,1500,2000,4000],),
                        'xaxis' : 'm_{T}^{i} [GeV]',  #   x axis name
                        'fold' : 1
                        }

variables['mTi_highbinning']  = {   'name': 'mTi',            #   variable name    
                        'range' : ([0,200,300,400,500,600,700,800,900,1000,1500,2000,4000],), # Note: Leaving this comma after the list is important!
                        'xaxis' : 'm_{T}^{i} [GeV]',  #   x axis name
                        'fold' : 1
                        }

variables['mcoll']  = {   'name': 'mcoll',     
                        'range' : (40, 0,600),   
                        'xaxis' : 'm^{coll} [GeV]',
                        'fold' : 1
                        }

variables['mcoll_binning']  = {   'name': 'mcoll',     
                        'range' : ([0,25,50,75,100,120,140,160,180,200,220,240,260,280,300,350,400,450,500,600,700,800,1000,1500,2000,4000],),
                        'xaxis' : 'm^{coll} [GeV]',
                        'fold' : 1
                        }

variables['mcollWW']  = {   'name': 'mcollWW',     
                        'range' : (40, 0,600),   
                        'xaxis' : 'm_{WW}^{coll} [GeV]',
                        'fold' : 1
                        }

variables['mcollWW_binning']  = {   'name': 'mcollWW',     
                        'range' : ([0,200,220,240,260,280,300,350,400,450,500,600,700,800,1000,1500,2000,4000],),
                        'xaxis' : 'm_{WW}^{coll} [GeV]',
                        'fold' : 1
                        }

variables['mll']  = {   'name': 'mll',
                        'range' : (40, 20,220),
                        'xaxis' : 'm_{ll} [GeV]',
                        'fold' : 0
                        }

variables['ptll']  = {   'name': 'ptll',     
                        'range' : (36, 30,210),   
                        'xaxis' : 'p_{T}^{ll} [GeV]',
                        'fold' : 0
                        }

variables['pfmet']  = { 
                        'name': 'MET_pt',     
                        'range' : (40,0,200),   
                        'xaxis' : 'pfmet [GeV]',
                        'fold'  : 1                       
                        }

variables['puppimet']  = {
                        'name': 'PuppiMET_pt',    
                        'range' : (40,0,200),
                        'xaxis' : 'PUPPImet [GeV]',
                        'fold'  : 1
                        }    

