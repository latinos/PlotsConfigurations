# variables

#variables = {}
    


variables['events']  = {   'name': '1',      
                        'range' : (1,0,2),  
                        'xaxis' : 'events', 
                        'fold' : 3
                        }

#variables['mlljj20_whss']  = {   'name': 'mlljj20_whss',
#                        'range' : (30,0,200),
#                        'xaxis' : 'mlljj20_whss [GeV]',
#                        'fold' : 0
#                        }

variables['mlljj20_whss']  = {   'name': 'mlljj20_whss',
                        'range' : ([60.,80.,90.,100.,110.,120.,130.,140.,150.,160.,170.,180.,190.,200.,250.,300.],),
                        'xaxis' : 'mlljj20_whss [GeV]',
                        'fold' : 0
                        }
'''
#variables['mlljj20_whss_bins1']  = {   'name': 'mlljj20_whss',
#                        'range' : ([80.,90.,100.,110.,120.,130.,140.,150.,160.,170.,180.,190.,200.,250.,300.],),
#                        'xaxis' : 'mlljj20_whss [GeV]',
#                        'fold' : 0
#                        }
#
#variables['mlljj20_whss_bins2']  = {   'name': 'mlljj20_whss',
#                        'range' : ([100.,110.,120.,130.,140.,150.,160.,170.,180.,190.,200.,250.,300.],),
#                        'xaxis' : 'mlljj20_whss [GeV]',
#                        'fold' : 0
#                        }

#variables['mlljj20_whss_varbins2']  = {   'name': 'mlljj20_whss',
#                        'range' : ([0,50.,60.,70.,80.,90.,100.,110.,120.,130.,140.,150.,160.,170.,180.,190.,200.,250.,300.],),
#                        'xaxis' : 'mlljj20_whss [GeV]',
#                        'fold' : 0
#                        }

#variables['mlljj30_whss']  = {   'name': 'mlljj30_whss',
#                        'range' : (40,0,200),
#                        'xaxis' : 'mlljj30_whss [GeV]',
#                        'fold' : 0
#                        }
#
#variables['nvtx']  = {   'name': 'PV_npvsGood',      
#                        'range' : (50,0,100),  
#                        'xaxis' : 'nvtx', 
#                         'fold' : 3
#                      }
variables['mll']  = {   'name': 'mll',            #   variable name    
                        'range' : (40, 0,200),    #   variable range
                        'xaxis' : 'm_{ll} [GeV]',  #   x axis name
                         'fold' : 0
                        }

#variables['mll_bin1']  = {   'name': 'mll',            #   variable name    
#                        'range' : (20, 40,120),    #   variable range
#                        'xaxis' : 'm_{ll} [GeV]',  #   x axis name
#                         'fold' : 0
#                        }
#
#variables['mth']  = {   'name': 'mth',            #   variable name    
#                        'range' : (40,0,200),    #   variable range
#                        'xaxis' : 'm_{T}^{H} [GeV]',  #   x axis name
#                         'fold' : 0
#                        }

#variables['dphill']  = {   'name': 'abs(dphill)',     
#                        'range' : (20,0,3.14),   
#                        'xaxis' : '#Delta#phi_{ll}',
#                        'fold' : 3
#                        }
#

variables['detall']  = {   'name': 'abs(Lepton_eta[0] - Lepton_eta[1])',            #   variable name    
                        'range' : (20,0.,10.),    #   variable range
                        'xaxis' : 'detall',  #   x axis name
                        'fold' : 3
                        }

variables['ptll']  = {   'name': 'ptll',     
                        'range' : (40, 0,200),   
                        'xaxis' : 'p_{T}^{ll} [GeV]',
                        'fold' : 0
                        }
variables['pt1']  = {   'name': 'Lepton_pt[0]',     
                        'range' : (40,0,100),   
                        'xaxis' : 'p_{T} 1st lep',
                        'fold'  : 3                         
                        }

variables['pt2']  = {   'name': 'Lepton_pt[1]',     
                        'range' : (40,0,100),   
                        'xaxis' : 'p_{T} 2nd lep',
                        'fold'  : 3                         
                        }
variables['eta1']  = {  'name': 'Lepton_eta[0]',     
                        'range' : (40,-3,3),   
                        'xaxis' : '#eta 1st lep',
                        'fold'  : 3                         
                        }

variables['eta2']  = {  'name': 'Lepton_eta[1]',     
                        'range' : (40,-3,3),   
                        'xaxis' : '#eta 2nd lep',
                        'fold'  : 3                         
                        }

                        
#variables['pfmet']  = { 
#                        'name': 'MET_pt',     
#                        'range' : (40,0,200),   
#                        'xaxis' : 'pfmet [GeV]',
#                        'fold'  : 3                         
#                        }
variables['puppimet']  = {
                        'name': 'PuppiMET_pt',    
                        'range' : (40,0,200),
                        'xaxis' : 'pfmet [GeV]',
                        'fold'  : 3
                        }                        

#variables['njet']  = {
#                        'name': 'Sum$(CleanJet_pt>30)',     
#                        'range' : (5,0,5),   
#                        'xaxis' : 'Number of jets',
#                        'fold' : 2   # 0 = not fold (default), 1 = fold underflowbin, 2 = fold overflow bin, 3 = fold underflow and overflow
#                        }
#



variables['jetpt1']  = {
                        'name': 'CleanJet_pt[0]*(CleanJet_pt[0]>30)',     
                        'range' : (40,0,200),   
                        'xaxis' : 'p_{T} 1st jet',
                        'fold' : 2   # 0 = not fold (default), 1 = fold underflowbin, 2 = fold overflow bin, 3 = fold underflow and overflow
                        }

variables['jetpt2']  = {
                        'name': 'CleanJet_pt[1]*(CleanJet_pt[1]>30)',     
                        'range' : (40,0,200),   
                        'xaxis' : 'p_{T} 2nd jet',
                        'fold' : 0   # 0 = not fold (default), 1 = fold underflowbin, 2 = fold overflow bin, 3 = fold underflow and overflow
                        }


#variables['dphilljet']  = {  'name': 'dphilljet',
#                        'range' : (20,0,3.2),
#                        'xaxis' : 'dphilljet',
#                         'fold' : 3
#                        }
#
#variables['dphilljetjet']  = {  'name': 'dphilljetjet*(CleanJet_pt[1]>30)',
#                        'range' : (20,0,3.2),
#                        'xaxis' : 'dphilljetjet',
#                         'fold' : 3
#                        }

#variables['dphilmet']  = {  'name': 'dphilmet',
#                        'range' : (20,0,3.2),
#                        'xaxis' : 'dphilmet',
#                         'fold' : 3
#                        }
#
#variables['dphillmet']  = {  'name': 'dphillmet',
#                        'range' : (20,0,3.2),
#                        'xaxis' : 'dphillmet',
#                         'fold' : 3
#                        }

variables['mjj']  = {  'name': 'mjj*(CleanJet_pt[1]>30)',
                        'range' : (40,0,200),
                        'xaxis' : 'm_{jj} [GeV]',
                         'fold' : 3
                        }

#variables['dphilep1jet1']  = {  'name': 'dphilep1jet1',
#                        'range' : (20,0,3.2),
#                        'xaxis' : 'dphilep1jet1',
#                         'fold' : 3
#                        }

#variables['dphilep1jet2']  = {  'name': 'dphilep1jet2*(CleanJet_pt[1]>30)',
#                        'range' : (20,0,3.2),
#                        'xaxis' : 'dphilep1jet2',
#                         'fold' : 3
#                        }

#variables['dphilep2jet1']  = {  'name': 'dphilep2jet1',
#                        'range' : (20,0,3.2),
#                        'xaxis' : 'dphilep2jet1',
#                         'fold' : 3
#                        }

#variables['dphilep2jet2']  = {  'name': 'dphilep2jet2*(CleanJet_pt[1]>30)',
#                        'range' : (20,0,3.2),
#                        'xaxis' : 'dphilep1jet2',
#                         'fold' : 3
#                        }
#
#variables['dphijjmet']  = {  'name': 'dphijjmet',
#                        'range' : (20,0,3.2),
#                        'xaxis' : 'dphijjmet',
#                         'fold' : 3
#                        }
#
#variables['ht']  = {  'name': 'ht',
#                        'range' : (40,0,200),
#                        'xaxis' : 'ht [GeV]',
#                         'fold' : 3
#                        }

#variables['mllThird']  = {  'name': 'mllThird',
#                        'range' : (20,0,100),
#                        'xaxis' : 'mllThird [GeV]',
#                         'fold' : 3
#                        }
#
#
#
#variables['mllWgSt']  = {  'name': 'mllWgSt',
#                        'range' : (20,0,100),
#                        'xaxis' : 'mllWgSt [GeV]',
#                         'fold' : 3
#                        }
#
#
#variables['drllWgSt']  = {  'name': 'drllWgSt',
#                        'range' : (5,0,5),
#                        'xaxis' : 'drllWgSt',
#                         'fold' : 3
#                        }
#
#variables['mllOneThree']  = {  'name': 'mllOneThree',
#                        'range' : (20,0,100),
#                        'xaxis' : 'mllOneThree',
#                         'fold' : 3
#                        }
#
#variables['mllTwoThree']  = {  'name': 'mllTwoThree',
#                        'range' : (20,0,100),
#                        'xaxis' : 'mllTwoThree',
#                         'fold' : 3
#                        }
#
#variables['mllTwoThree_bins1']  = {  'name': 'mllTwoThree',
#                        'range' : (10,0,10),
#                        'xaxis' : 'mllTwoThree',
#                         'fold' : 3
#                        }
#
#variables['mllTwoThree_bins2']  = {  'name': 'mllTwoThree',
#                        'range' : (20,0,10),
#                        'xaxis' : 'mllTwoThree',
#                         'fold' : 3
#                        }
#
#variables['drllOneThree']  = {  'name': 'drllOneThree',
#                        'range' : (5,0,10),
#                        'xaxis' : 'drllOneThree',
#                         'fold' : 3
#                        }
#
#variables['drllOneThree_bins1']  = {  'name': 'drllOneThree',
#                        'range' : (10,0,2),
#                        'xaxis' : 'drllOneThree',
#                         'fold' : 3
#                        }
#
#variables['drllOneThree_bins2']  = {  'name': 'drllOneThree',
#                        'range' : (40,0,2),
#                        'xaxis' : 'drllOneThree',
#                         'fold' : 3
#                        }
#
#variables['drllTwoThree']  = {  'name': 'drllTwoThree',
#                        'range' : (5,0,10),
#                        'xaxis' : 'drllTwoThree',
#                         'fold' : 3
#                        }
#

#variables['jeteta1']  = {  'name': 'CleanJet_eta[0]' #'CleanJet_pt[0]>30? CleanJet_eta[0]:-999',
#                        'range' : (80,-5.0,5.0),
#                        'xaxis' : '#eta 1st jet',
#                        'fold'  : 0
#                        }

#variables['jeteta1']  = {  'name': 'CleanJet_pt[0]>30? CleanJet_eta[0]:-999',
#                        'range' : (80,-5.0,5.0),
#                        'xaxis' : '#eta 1st jet',
#                        'fold'  : 0
#                        }

#variables['jeteta2']  = {  'name': 'CleanJet_eta[1]' #'CleanJet_pt[1]>30? CleanJet_eta[1]:-999',
#                        'range' : (80,-5.0,5.0),
#                        'xaxis' : '#eta 2nd jet',
#                        'fold'  : 0
#                        }

#variables['jeteta2']  = {  'name': 'CleanJet_pt[1]>30? CleanJet_eta[1]:-999',
#                        'range' : (80,-5.0,5.0),
#                        'xaxis' : '#eta 2nd jet',
#                        'fold'  : 0
#                        }


#variables['mtw1']  = {  'name': 'mtw1',
#                        'range' : (20,0,200),
#                        'xaxis' : 'm_{T}^{W_{1}} [GeV]',
#                         'fold' : 3
#                        }
#
#variables['mtw2']  = {  'name': 'mtw2',
#                        'range' : (20,0,200),
#                        'xaxis' : 'm_{T}^{W_{2}} [GeV]',
#                         'fold' : 3
#                        }
#


variables['trkMet']  = {   'name': 'metTtrk',
                        'range' : (40,0,200),
                        'xaxis' : 'trk met [GeV]',
                         'fold' : 3
                        }

variables['mpmet']  = { 'name': 'mpmet',
                        'range' : (40,0,200),
                        'xaxis' : 'min proj met [GeV]',
                        'fold' : 3
                        }

variables['dymvaggh']  = { 'name': 'dymvaggh',
                        'range' : (40,-1,1),
                        'xaxis' : 'DY MVA',
                        'fold' : 3
                        }

'''
                        

