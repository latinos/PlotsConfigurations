# variables

#variables = {}

cutdictCR = [c for c in cuts if "dy" in c or "top" in c]
cutdictSRhigh = [c for c in cuts if "high" in c and c not in cutdictCR]
cutdictSR = [c for c in cuts if c not in cutdictSRhigh and c not in cutdictCR]

variables['events']  = {   'name': '1',
                        'range' : (1,0,2),
                        'xaxis' : 'events',
                        'fold' : 3,
                        'cuts'  : cutdictCR
                        }

#variables['mTi_binning']  = {   'name': 'mTi',
#                        'range' : ([0,75,100,120,140,160,180,200,220,240,260,280,300,350,400,450,500,600,700,800,900,1000,1250,1500,1750,2000,2250,2500,3000],), # Note: Leaving this comma after the list is important!
#                        'xaxis' : 'm_{reco} [GeV]',
#                        'fold' : 3,
#                        'divideByBinWidth' : 1,
#                        'cuts'  : cutdictSR+cutdictCR
#                        }

#variables['mTi_highbinning']  = {   'name': 'mTi',
#                        'range' : ([0,300,350,400,500,600,700,800,900,1000,1250,1500,1750,2000,2250,2500,3000],),
#                        'xaxis' : 'm_{reco} [GeV]',
#                        'fold' : 3,
#                        'divideByBinWidth' : 1,
#                        'cuts'  : cutdictSRhigh+cutdictCR
#                        }

variables['DNN_mth_binning']  = {   'name': 'DNN_mth_OTF',
                        'range' : ([0,150,175,200,225,250,280,320,360,400,450,500,550,625,700,800,900,1000,1100,1200,1300,1450,1600,1800,2000,2250,2500,2750,3000,3500],),
                        'xaxis' : 'm_{DNN} [GeV]',
                        'fold' : 3,
                        'divideByBinWidth' : 1,
                        'cuts'  : cutdictSR+cutdictCR
                        }

variables['DNN_mth_highbinning']  = {   'name': 'DNN_mth_OTF',
                        'range' : ([0,400,450,500,550,625,700,800,900,1000,1100,1200,1300,1450,1600,1800,2000,2250,2500,2750,3000,3500],),
                        'xaxis' : 'm_{DNN} [GeV]',
                        'fold' : 3,
                        'divideByBinWidth' : 1,
                        'cuts'  : cutdictSRhigh+cutdictCR
                        }

