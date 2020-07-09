# variables

#variables = {}


variables['events']  = {   'name': '1',
                        'range' : (1,0,2),
                        'xaxis' : 'events',
                        'fold' : 3
                        }

variables['mTi_binning']  = {   'name': 'mTi',
                        'range' : ([0,75,100,120,140,160,180,200,220,240,260,280,300,350,400,450,500,600,700,800,900,1000,1500,2000],), # Note: Leaving this comma after the list is important!
                        'xaxis' : 'm_{reco} [GeV]',
                        'fold' : 3
                        }

variables['mTi_highbinning']  = {   'name': 'mTi',
                        'range' : ([0,300,350,400,500,600,700,800,900,1000,1500,2000],),
                        'xaxis' : 'm_{reco} [GeV]',
                        'fold' : 3
                        }

variables['DNN_mth_binning']  = {   'name': 'DNN_mth_OTF',
                        'range' : ([0,150,175,200,225,250,280,320,360,400,450,500,550,625,700,800,900,1000,1100,1200,1300,1450,1600,1800,2000,2250,2500,3000,4000],),
                        'xaxis' : 'DNN m_{T} [GeV]',
                        'fold' : 3
                        }

variables['DNN_mth_highbinning']  = {   'name': 'DNN_mth_OTF',
                        'range' : ([0,400,450,500,550,625,700,800,900,1000,1100,1200,1300,1450,1600,1800,2000,2250,2500,3000,4000],),
                        'xaxis' : 'DNN m_{T} [GeV]',
                        'fold' : 3
                        }

