# variables

#variables = {}


#variables['events']  = {   'name': '1',
#                        'range' : (1,0,2),
#                        'xaxis' : 'events',
#                        'fold' : 3
#                        }

variables['mTi_binning']  = {   'name': 'mTi',
                        'range' : ([0,75,100,120,140,160,180,200,220,240,260,280,300,350,400,450,500,600,700,800,900,1000,1500,2000],), # Note: Leaving this comma after the list is important!
                        'xaxis' : 'm_{reco} [GeV]',
                        'fold' : 3,
                        'divideByBinWidth' : 1
                        }

variables['mTi_highbinning']  = {   'name': 'mTi',
                        'range' : ([0,300,350,400,500,600,700,800,900,1000,1500,2000],),
                        'xaxis' : 'm_{reco} [GeV]',
                        'fold' : 3,
                        'divideByBinWidth' : 1
                        }

variables['DNN_mth_binning']  = {   'name': 'DNN_mth_OTF',
                        'range' : ([0,150,175,200,225,250,280,320,360,400,450,500,550,625,700,800,900,1000,1100,1200,1300,1450,1600,1800,2000,2250,2500,3000,4000],),
                        'xaxis' : 'DNN m_{T} [GeV]',
                        'fold' : 3,
                        'divideByBinWidth' : 1
                        }

variables['DNN_mth_highbinning']  = {   'name': 'DNN_mth_OTF',
                        'range' : ([0,400,450,500,550,625,700,800,900,1000,1100,1200,1300,1450,1600,1800,2000,2250,2500,3000,4000],),
                        'xaxis' : 'DNN m_{T} [GeV]',
                        'fold' : 3,
                        'divideByBinWidth' : 1
                        }

variables['mth']  = {   'name': 'mth',
                        'range' : (30,0,300),
                        'xaxis' : 'm_{T,ll+MET} [GeV]',
                        'fold' : 3
                        }

variables['mth-DY']  = {   'name': 'mth',
                        'range' : (12, 0, 60),
                        'xaxis' : 'm_{T,ll+MET} [GeV]',
                        'fold' : 3
                        }

variables['mTi']  = {   'name': 'mTi',
                        'range' : (30,0,600),
                        'xaxis' : 'm_{reco} [GeV]',
                        'fold' : 3
                        }

variables['DNN_mth_OTF']  = {
                        'name': 'DNN_mth_OTF',
                        'range' : (40,0,800),
                        'xaxis' : 'DNN m_{T} [GeV]',
                        'fold'  : 3
                        }

variables['DNN_mth_OTF_wide']  = {
                        'name': 'DNN_mth_OTF',
                        'range' : (40,0,2000),
                        'xaxis' : 'DNN m_{T} [GeV]',
                        'fold'  : 3
                        }

variables['mll']  = {   'name': 'mll',
                        'range' : (30, 0,450),
                        'xaxis' : 'm_{ll} [GeV]',
                        'fold' : 3
                        }

variables['ptll']  = {   'name': 'ptll',
                        'range' : (30, 0,300),
                        'xaxis' : 'p_{T,ll} [GeV]',
                        'fold' : 3
                        }

variables['mtw1']  = {   'name': 'mtw1',
                        'range' : (30, 0,300),
                        'xaxis' : 'm_{T,l1+MET} [GeV]',
                        'fold' : 3
                        }

variables['pfmet']  = { 
                        'name': 'MET_pt',
                        'range' : (40,0,200),
                        'xaxis' : 'PF MET [GeV]',
                        'fold'  : 3
                        }

variables['puppimet']  = {
                        'name': 'PuppiMET_pt',
                        'range' : (40,0,200),
                        'xaxis' : 'PUPPI MET [GeV]',
                        'fold'  : 3
                        }

variables['mjj']  = {
                        'name': 'mjj',
                        'range' : (30,0,600),
                        'xaxis' : 'm_{jj} [GeV]',
                        'fold'  : 3
                        }

variables['detajj']  = {
                        'name': 'detajj',
                        'range' : (25,0,5),
                        'xaxis' : '#Delta#eta_{jj}',
                        'fold'  : 3
                        }

if EMorEEorMM != 'em':
  #variables['mva_bdt']  = {
  #                      'name': '(Alt$(CleanJet_pt[0], 0) < 30) * (dymva_bdt_0j) + (Alt$(CleanJet_pt[0], 0) >= 30 && Alt$(CleanJet_pt[1], 0) < 30) * (dymva_bdt_1j) + (Alt$(CleanJet_pt[1], 0) >= 30 && (detajj < 3.5 || mjj < 400)) * (dymva_bdt_2j) + (Alt$(CleanJet_pt[1], 0) >= 30 && (detajj >= 3.5 && mjj >= 400)) * (dymva_bdt_VBF)',
  #                      'range' : (40,-1,1),
  #                      'xaxis' : 'DYMVA BDT',
  #                      'fold'  : 3
  #                      }

  #variables['mva_dnn']  = {
  #                      'name': '(Alt$(CleanJet_pt[0], 0) < 30) * (dymva_dnn_0j) + (Alt$(CleanJet_pt[0], 0) >= 30 && Alt$(CleanJet_pt[1], 0) < 30) * (dymva_dnn_1j) + (Alt$(CleanJet_pt[1], 0) >= 30 && (detajj < 3.5 || mjj < 400)) * (dymva_dnn_2j) + (Alt$(CleanJet_pt[1], 0) >= 30 && (detajj >= 3.5 && mjj >= 400)) * (dymva_dnn_VBF)',
  #                      'range' : (40,0,1),
  #                      'xaxis' : 'DYMVA DNN',
  #                      'fold'  : 3
  #                      }

  variables['mva_bdtalt']  = {
                        'name': '(Alt$(CleanJet_pt[0], 0) < 30) * (dymva_alt_bdt_0j) + (Alt$(CleanJet_pt[0], 0) >= 30 && Alt$(CleanJet_pt[1], 0) < 30) * (dymva_alt_bdt_1j) + (Alt$(CleanJet_pt[1], 0) >= 30 && (detajj < 3.5 || mjj < 400)) * (dymva_alt_bdt_2j) + (Alt$(CleanJet_pt[1], 0) >= 30 && (detajj >= 3.5 && mjj >= 400)) * (dymva_alt_bdt_VBF)',
                        'range' : (40,-1,1),
                        'xaxis' : 'DYMVA BDT',
                        'fold'  : 3
                        }

  variables['mva_dnnalt']  = {
                        'name': '(Alt$(CleanJet_pt[0], 0) < 30) * (dymva_alt_dnn_0j) + (Alt$(CleanJet_pt[0], 0) >= 30 && Alt$(CleanJet_pt[1], 0) < 30) * (dymva_alt_dnn_1j) + (Alt$(CleanJet_pt[1], 0) >= 30 && (detajj < 3.5 || mjj < 400)) * (dymva_alt_dnn_2j) + (Alt$(CleanJet_pt[1], 0) >= 30 && (detajj >= 3.5 && mjj >= 400)) * (dymva_alt_dnn_VBF)',
                        'range' : (40,0,1),
                        'xaxis' : 'DYMVA DNN',
                        'fold'  : 3
                        }

variables['back2back_OTF']  = {
                        'name': 'back2back_OTF',
                        'range' : (50,0,5),
                        'xaxis' : '#DeltaR^{-1}',
                        'fold'  : 2
                        }

variables['dphill']  = {
                        'name': 'dphill',
                        'range' : (32,0,3.2),
                        'xaxis' : '#Delta#phi_{ll}',
                        'fold'  : 2
                        }

variables['dphilmet']  = {
                        'name': 'dphilmet',
                        'range' : (32,0,3.2),
                        'xaxis' : '#Delta#phi_{l,MET}',
                        'fold'  : 2
                        }

variables['dphilmet2']  = {
                        'name': 'dphilmet2',
                        'range' : (32,0,3.2),
                        'xaxis' : '#Delta#phi_{l2,MET}',
                        'fold'  : 2
                        }

variables['ht']  = {   'name': 'Lepton_pt[0]+Lepton_pt[0]+PuppiMET_pt[0]',
                        'range' : (30,0,600),
                        'xaxis' : 'p_{T} 1st, 2nd lep. + PUPPI MET [GeV]',
                        'fold'  : 3
                        }

