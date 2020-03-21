# variables

#variables = {}


variables['events']  = {   'name': '1',
                        'range' : (1,0,2),
                        'xaxis' : 'events',
                        'fold' : 3
                        }

#variables['mth']  = {   'name': 'mth',
#                        'range' : (24,60,300),
#                        'xaxis' : 'm_{T}^{H} [GeV]',
#                        'fold' : 2
#                        }

variables['mth']  = {   'name': 'mth',
                        'range' : (20,0,200),
                        'xaxis' : 'm_{T}^{H} [GeV]',
                        'fold' : 2
                        }

#variables['mth-DY']  = {   'name': 'mth',
#                        'range' : (12, 0, 60),
#                        'xaxis' : 'm_{T}^{H} [GeV]',
#                        'fold' : 0
#                        }

variables['mTi']  = {   'name': 'mTi',
                        'range' : (30,0,600),
                        'xaxis' : 'm_{T}^{i} [GeV]',
                        'fold' : 2
                        }

variables['mTi_binning']  = {   'name': 'mTi',
                        #'range' : ([0,50,100,150,200,250,300,350,400,450,500,550,600,650,700,750,800,900,1000,2000],),
                        #'range' : ([0,20,40,60,80,100,120,140,160,180,200,250,300,350,400,500,700,4000],),
                        #'range' : ([0,20,40,60,80,100,120,140,160,180,200,220,240,260,280,300,350,400,450,500,550,600,650,700,800,900, 1000,1200,1400,1600,1800,2000,2300,2600,2900,3200],),
                        #'range' : ([0,20,40,60,80,100,120,140,160,180,200,220,240,260,280,300,350,400,450,500,550,600,650,700,800,900, 1000,1250,1500,2000,2500,3500],),
                        'range' : ([0,50,75,100,120,140,160,180,200,220,240,260,280,300,350,400,450,500,600,700,800,1000,1500,2000],),
                        'xaxis' : 'm_{T}^{i} [GeV]',
                        'fold' : 2
                        }

variables['mTi_highbinning']  = {   'name': 'mTi',
                        'range' : ([0,200,300,400,500,600,700,800,900,1000,1500,2000],), # Note: Leaving this comma after the list is important!
                        'xaxis' : 'm_{T}^{i} [GeV]',
                        'fold' : 2
                        }

#variables['mcoll']  = {   'name': 'mcoll',
#                        'range' : (40, 0,600),
#                        'xaxis' : 'm^{coll} [GeV]',
#                        'fold' : 2
#                        }

#variables['mcoll_binning']  = {   'name': 'mcoll',
#                        'range' : ([0,25,50,75,100,120,140,160,180,200,220,240,260,280,300,350,400,450,500,600,700,800,1000,1500,2000,4000],),
#                        'xaxis' : 'm^{coll} [GeV]',
#                        'fold' : 2
#                        }

#variables['mcollWW']  = {   'name': 'mcollWW',
#                        'range' : (40, 0,600),
#                        'xaxis' : 'm_{WW}^{coll} [GeV]',
#                        'fold' : 2
#                        }

#variables['mcollWW_binning']  = {   'name': 'mcollWW',
#                        'range' : ([0,200,220,240,260,280,300,350,400,450,500,600,700,800,1000,1500,2000,4000],),
#                        'xaxis' : 'm_{WW}^{coll} [GeV]',
#                        'fold' : 2
#                        }

variables['mll']  = {   'name': 'mll',
                        'range' : (20, 40,140),
                        'xaxis' : 'm_{ll} [GeV]',
                        'fold' : 2
                        }

variables['ptll']  = {   'name': 'ptll',
                        'range' : (20, 0,200),
                        'xaxis' : 'p_{T}^{ll} [GeV]',
                        'fold' : 2
                        }

#variables['pfmet']  = { 
#                        'name': 'MET_pt',
#                        'range' : (40,0,200),
#                        'xaxis' : 'pfmet [GeV]',
#                        'fold'  : 2
#                        }

variables['puppimet']  = {
                        'name': 'PuppiMET_pt',
                        'range' : (20,0,200),
                        'xaxis' : 'PUPPImet [GeV]',
                        'fold'  : 2
                        }

#variables['back2back']  = {
#                        'name': 'back2back',
#                        'range' : (50,0,5),
#                        'xaxis' : 'back2back',
#                        'fold'  : 2
#                        }

#variables['dphill']  = {
#                        'name': 'dphill',
#                        'range' : (32,0,3.2),
#                        'xaxis' : 'dphill',
#                        'fold'  : 2
#                        }

#variables['dphilmet']  = {
#                        'name': 'dphilmet',
#                        'range' : (32,0,3.2),
#                        'xaxis' : 'dphilmet',
#                        'fold'  : 2
#                        }

#variables['dphilmet2']  = {
#                        'name': 'dphilmet2',
#                        'range' : (32,0,3.2),
#                        'xaxis' : 'dphilmet2',
#                        'fold'  : 2
#                        }

variables['isVBF']  = {
                        'name': 'DNN_isVBF',
                        'range' : (10,0,1),
                        'xaxis' : 'isVBF',
                        'fold'  : 2
                        }

#variables['DNN_mtw1']  = {
#                        'name': 'DNN_mtw1',
#                        'range' : (40,0,400),
#                        'xaxis' : 'DNN_mtw1',
#                        'fold'  : 2
#                        }

#variables['DNN_mtw2']  = {
#                        'name': 'DNN_mtw2',
#                        'range' : (40,0,400),
#                        'xaxis' : 'DNN_mtw2',
#                        'fold'  : 2
#                        }

variables['DNN_mth']  = {
                        'name': 'DNN_mth',
                        'range' : (40,0,800),
                        'xaxis' : 'DNN_mth',
                        'fold'  : 2
                        }

variables['DNN_mth_binning']  = {   'name': 'DNN_mth',
                        'range' : ([0,50,75,100,120,140,160,180,200,220,240,260,280,300,350,400,450,500,600,700,800,1000,1500,2000],),
                        'xaxis' : 'DNN m_{T}^{h} [GeV]',
                        'fold' : 2
                        }

variables['DNN_mth_highbinning']  = {   'name': 'DNN_mth',
                        'range' : ([0,200,300,400,500,600,700,800,900,1000,1500,2000],), # Note: Leaving this comma after the list is important!
                        'xaxis' : 'DNN m_{T}^{h} [GeV]',
                        'fold' : 2
                        }

#variables['DNN_categ']  = {
#                        'name': 'DNN_categ',
#                        'range' : (67,-1,66),
#                        'xaxis' : 'DNN_categ',
#                        'fold'  : 2
#                        }

#variables['DNN_WW']  = {
#                        'name': 'DNN_WW',
#                        'range' : (100,0,1),
#                        'xaxis' : 'DNN_WW',
#                        'fold'  : 2
#                        }

variables['mvabdt']  = {
                        'name': '(dymva_bdt_0j * (Alt$(CleanJet_pt[0],0)<30)) + (dymva_bdt_1j * (Alt$(CleanJet_pt[0],0)>30) * (Alt$(CleanJet_pt[1],0)<30) * (!VBFcut)) + (dymva_bdt_2j * (Alt$(CleanJet_pt[1],0)>30) * (!VBFcut)) + (dymva_bdt_VBF * VBFcut)',
                        'range' : (40,-1,1),
                        'xaxis' : 'DYMVA BDT',
                        'fold'  : 3
                        }

#variables['mvadnn']  = {
#                        'name': '(dymva_dnn_0j * (Alt$(CleanJet_pt[0],0)<30)) + (dymva_dnn_1j * (Alt$(CleanJet_pt[0],0)>30) * (Alt$(CleanJet_pt[1],0)<30) * (!VBFcut)) + (dymva_dnn_2j * (Alt$(CleanJet_pt[1],0)>30) * (!VBFcut)) + (dymva_dnn_VBF * VBFcut)',
#                        'range' : (40,0,1),
#                        'xaxis' : 'DYMVA DNN',
#                        'fold'  : 3
#                        }

