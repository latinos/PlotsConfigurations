# variables

#variables = {}

cutdictSR = ['hww2l2v_13TeV_'+EMorEEorMM+'_0j', 'hww2l2v_13TeV_'+EMorEEorMM+'_1j', 'hww2l2v_13TeV_'+EMorEEorMM+'_2j', 'hww2l2v_13TeV_'+EMorEEorMM+'_ggh', 'hww2l2v_13TeV_'+EMorEEorMM+'_vbf']
cutdictSRhigh = ['hww2l2v_13TeV_'+EMorEEorMM+'_high0j', 'hww2l2v_13TeV_'+EMorEEorMM+'_high1j', 'hww2l2v_13TeV_'+EMorEEorMM+'_high2j', 'hww2l2v_13TeV_'+EMorEEorMM+'_highggh', 'hww2l2v_13TeV_'+EMorEEorMM+'_highvbf']
cutdictCR = ['hww2l2v_13TeV_'+EMorEEorMM+'_dy_0j', 'hww2l2v_13TeV_'+EMorEEorMM+'_dy_1j', 'hww2l2v_13TeV_'+EMorEEorMM+'_dy_2j', 'hww2l2v_13TeV_'+EMorEEorMM+'_dy_ggh', 'hww2l2v_13TeV_'+EMorEEorMM+'_dy_vbf', 'hww2l2v_13TeV_'+EMorEEorMM+'_top_0j', 'hww2l2v_13TeV_'+EMorEEorMM+'_top_1j', 'hww2l2v_13TeV_'+EMorEEorMM+'_top_2j', 'hww2l2v_13TeV_'+EMorEEorMM+'_top_ggh', 'hww2l2v_13TeV_'+EMorEEorMM+'_top_vbf', 'hww2l2v_13TeV_'+EMorEEorMM+'_dy_high0j', 'hww2l2v_13TeV_'+EMorEEorMM+'_dy_high1j', 'hww2l2v_13TeV_'+EMorEEorMM+'_dy_high2j', 'hww2l2v_13TeV_'+EMorEEorMM+'_dy_highggh', 'hww2l2v_13TeV_'+EMorEEorMM+'_dy_highvbf', 'hww2l2v_13TeV_'+EMorEEorMM+'_top_high0j', 'hww2l2v_13TeV_'+EMorEEorMM+'_top_high1j', 'hww2l2v_13TeV_'+EMorEEorMM+'_top_high2j', 'hww2l2v_13TeV_'+EMorEEorMM+'_top_highggh', 'hww2l2v_13TeV_'+EMorEEorMM+'_top_highvbf']


variables['events']  = {   'name': '1',
                        'range' : (1,0,2),
                        'xaxis' : 'events',
                        'fold' : 3,
                        'cuts'  : cutdictCR
                        }

variables['mTi_binning']  = {   'name': 'mTi',
                        'range' : ([0,75,100,120,140,160,180,200,220,240,260,280,300,350,400,450,500,600,700,800,900,1000,1250,1500,1750,2000,2250,2500,3000],), # Note: Leaving this comma after the list is important!
                        'xaxis' : 'm_{reco} [GeV]',
                        'fold' : 3,
                        'divideByBinWidth' : 1,
                        'cuts'  : cutdictSR
                        }

variables['mTi_highbinning']  = {   'name': 'mTi',
                        'range' : ([0,300,350,400,500,600,700,800,900,1000,1250,1500,1750,2000,2250,2500,3000],),
                        'xaxis' : 'm_{reco} [GeV]',
                        'fold' : 3,
                        'divideByBinWidth' : 1,
                        'cuts'  : cutdictSRhigh
                        }

variables['DNN_mth_binning']  = {   'name': 'DNN_mth_OTF',
                        'range' : ([0,150,175,200,225,250,280,320,360,400,450,500,550,625,700,800,900,1000,1100,1200,1300,1450,1600,1800,2000,2250,2500,2750,3000,3500],),
                        'xaxis' : 'DNN m_{T} [GeV]',
                        'fold' : 3,
                        'divideByBinWidth' : 1,
                        'cuts'  : cutdictSR
                        }

variables['DNN_mth_highbinning']  = {   'name': 'DNN_mth_OTF',
                        'range' : ([0,400,450,500,550,625,700,800,900,1000,1100,1200,1300,1450,1600,1800,2000,2250,2500,2750,3000,3500],),
                        'xaxis' : 'DNN m_{T} [GeV]',
                        'fold' : 3,
                        'divideByBinWidth' : 1,
                        'cuts'  : cutdictSRhigh
                        }

