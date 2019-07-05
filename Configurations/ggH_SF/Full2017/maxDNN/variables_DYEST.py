# variables

#variables = {}
    
#'fold' : # 0 = not fold (default), 1 = fold underflowbin, 2 = fold overflow bin, 3 = fold underflow and overflow
   
variables['events']  = {'name': '1',      
                        'range' : (1,0,2),  
                        'xaxis' : 'events', 
                         'fold' : 3
                        }
    
#variables['nvtx']  = {   'name': 'nvtx',      
#                        'range' : (40,0,40),  
#                        'xaxis' : 'nvtx', 
#                         'fold' : 3
#                        }
                        
#variables['mll']  = {   'name': 'mll',              
#                         'range' : (80,0,200),     
#                         'xaxis' : 'm_{ll} [GeV]', 
#                         'fold' : 3
#                         }       
                        
#variables['mth']  = {   'name': 'mth',                
#                        'range' : (40,0,200),        
#                        'xaxis' : 'm_{T}^{H} [GeV]',  
#                         'fold' : 3
#                        }

#variables['mtw1']  = {  'name': 'mtw1',
#                        'range' : (40,0,200),
#                        'xaxis' : 'm_{T}^{W_{1}} [GeV]',
#                         'fold' : 3
#                        }

#variables['mtw2']  = {  'name': 'mtw2',
#                        'range' : (40,0,200),
#                        'xaxis' : 'm_{T}^{W_{2}} [GeV]',
#                         'fold' : 3
#                        }
                        
#variables['mllVSmth'] = {   'name': 'mll:mth',          
#                        'range' : (300,0,200, 100,0,200),            
#                        'xaxis' : 'm_{ll} : m_{T}^{H}',   
#                         'fold' : 3
#                        }

#variables['pt1']  = {   'name': 'std_vector_lepton_pt[0]',     
#                        'range' : (40,0,100),   
#                        'xaxis' : 'p_{T} 1st lep',
#                        'fold'  : 3                         
#                        }
#
#variables['pt2']  = {   'name': 'std_vector_lepton_pt[1]',     
#                        'range' : (40,0,100),   
#                        'xaxis' : 'p_{T} 2nd lep',
#                        'fold'  : 3                         
#                        }
#                        
#variables['ptll']  = {   'name': 'ptll',     
#                        'range' : (40,0,100),   
#                        'xaxis' : 'p_{T}^{ll} [GeV]',
#                        'fold' : 3
#                        }                                            
#
#variables['pfmet']  = {   'name': 'metPfType1',
#                        'range' : (40,0,200),
#                        'xaxis' : 'pfmet [GeV]',
#                         'fold' : 3
#                        }
#
#variables['pfmetphi']  = {
#                        'name': 'metPfType1Phi',
#                        'range' : (40,-3.15,3.15),
#                        'xaxis' : '#Phi pfmet',
#                        'fold' : 3
#                        }
#
#variables['pfmet_corr']  = {   'name': 'corrMetPfType1',
#                        'range' : (40,0,200),
#                        'xaxis' : 'pfmet [GeV]',
#                         'fold' : 3
#                        }
#
#variables['pfmetphi_corr']  = {
#                        'name': 'corrMetPfType1Phi',
#                        'range' : (40,-3.15,3.15),
#                        'xaxis' : '#Phi pfmet',
#                        'fold' : 3
#                        }
#
#variables['trkMet']  = {   'name': 'metTtrk',
#                        'range' : (40,0,200),
#                        'xaxis' : 'trk met [GeV]',
#                         'fold' : 3
#                        }
#
#variables['prtrkmet']  = { 'name': 'projtkmet',
#                        'range' : (40,0,200),
#                        'xaxis' : 'proj trk met [GeV]',
#                        'fold' : 3
#                        }
#
#variables['prpfmet']  = { 'name': 'projpfmet',
#                        'range' : (40,0,200),
#                        'xaxis' : 'proj pf met [GeV]',
#                        'fold' : 3
#                        }
#
#variables['mpmet']  = { 'name': 'mpmet',
#                        'range' : (40,0,200),
#                        'xaxis' : 'min proj met [GeV]',
#                        'fold' : 3
#                        }
#
#variables['metPuppi']  = { 'name': 'metPuppi',
#                        'range' : (40,0,200),
#                        'xaxis' : 'Puppy met [GeV]',
#                        'fold' : 3
#                        }
#
#variables['PfMetDivSumMet']  = { 'name': 'PfMetDivSumMet',
#                        'range' : (40,0,10),
#                        'xaxis' : 'pfmet/metsum',
#                        'fold' : 3
#                        }
#
#variables['jetphi1']  = {
#                        'name': 'std_vector_jet_phi[0]',
#                        'range' : (40,-3.15,3.15),
#                        'xaxis' : '#Phi 1nd jet',
#                        'fold' : 3
#                        }
#
#variables['upara']  = { 'name': 'upara',
#                        'range' : (40,-600,400),
#                        'xaxis' : 'u_{para}',
#                        'fold' : 3
#                        }
#
#variables['uperp']  = { 'name': 'uperp',
#                        'range' : (40,-400,400),
#                        'xaxis' : 'u_{perp}',
#                        'fold' : 3
#                        }
#
#variables['recoil']  = { 'name': 'recoil',
#                        'range' : (40,0,200),
#                        'xaxis' : 'p_{T}^{WW} [GeV]',
#                        'fold' : 3
#                        }
#
#variables['jetpt1_cut']  = {
#                        'name': 'jetpt1_cut',
#                        'range' : (40,0,200),
#                        'xaxis' : 'p_{T} 1st jet',
#                        'fold' : 3
#                        }
#
#variables['dymvaggh']  = { 'name': 'dymvaggh',
#                        'range' : (40,-1,1),
#                        'xaxis' : 'DY MVA (ggH)',
#                        'fold' : 3
#                        }

#variables['dymvavbf']  = { 'name': 'dymvaggh',
#                        'range' : (40,-1,1),
#                        'xaxis' : 'DY MVA (VBF)',
#                        'fold' : 3
#                        }

##variables['jetpt2']  = {
##                        'name': 'std_vector_jet_pt[1]',     
##                        'range' : (20,0,200),   
##                        'xaxis' : 'p_{T} 2nd jet',
##                        'fold' : 3
##                        }
#
##variables['cmvav2_1']  = { 
##                        'name': 'std_vector_jet_cmvav2[0]',     
##                        'range' : (200,-1,1),   
##                        'xaxis' : 'cMVAv2 jet 1st',
##                        'fold'  : 3                         
##                        }
#
##variables['cmvav2_2']  = { 
##                        'name': 'std_vector_jet_cmvav2[1]',     
##                        'range' : (200,-1,1),   
##                        'xaxis' : 'cMVAv2 jet 2nd',
##                        'fold'  : 3                         
##                        }   
#                        
##variables['csvv2ivf_1']  = { 
##                        'name': 'std_vector_jet_csvv2ivf[0]',     
##                        'range' : (10,0,1),   
##                        'xaxis' : 'csvv2ivf jet 1st',
##                        'fold'  : 3                         
##                        }
#
##variables['csvv2ivf_2']  = { 
##                        'name': 'std_vector_jet_csvv2ivf[1]',     
##                        'range' : (10,0,1),   
##                        'xaxis' : 'csvv2ivf jet 2nd',
##                        'fold'  : 3                         
##                        }                        
#
#variables['dphill']  = {   'name': 'abs(dphill)',
#                        'range' : (40,0,3.1416),
#                        'xaxis' : '#Delta#phi_{ll}',
#                        'fold' : 3
#                        }
#
#variables['dphillmet'] = {   'name': 'dphillmet',
#                          'range' : (40,0,3.1416),
#                          'xaxis' : '#Delta #Phi_{ll,E_{T}^{miss}} [rad]',
#                          'fold' : 3
#                          }
#
#variables['dphilmet1'] = {   'name': 'dphilmet1',
#                          'range' : (40,0,3.1416),
#                          'xaxis' : '#Delta #Phi_{l_{1},E_{T}^{miss}} [rad]',
#                          'fold' : 3
#                          }
#
#variables['dphilmet2'] = {   'name': 'dphilmet2',
#                          'range' : (40,0,3.1416),
#                          'xaxis' : '#Delta #Phi_{l_{2},E_{T}^{miss}} [rad]',
#                          'fold' : 3
#                          }
#
#variables['dphilljet_cut'] = {   'name': 'dphilljet_cut',
#                          'range' : (40,0,3.1416),
#                          'xaxis' : '#Delta #Phi_{ll,jet} [rad]',
#                          'fold' : 3
#                          }
#
#variables['dphijet1met_cut'] = {   'name': 'dphijet1met_cut',
#                          'range' : (40,0,3.1416),
#                          'xaxis' : '#Delta #Phi_{jet,E_{T}^{miss}} [rad]',
#                          'fold' : 3
#                          }
#
