#variables['l1_pt']  = { 
#                        'name': 'Lepton_pt[0]',     
#                        'range' : (7,25,60),   
#                        'xaxis' : 'p_{T}^{l_{1}}',
#                        'fold'  : 3
#                        }
#
#variables['l1_eta']  = {
#                        'name': 'abs(Lepton_eta[0])',     
#                        'range' : (5,0,2.5),   
#                        'xaxis' : '#eta^{l_{1}}',
#                        'fold'  : 3                         
#                        }

#variables['l1_etaVpt']  = {
#                        # for name:  y:x
#                        'name': 'Lepton_pt[0]:abs(Lepton_eta[0])',     
#                        #'range' : (6,20,60,5,0,2.5),
#                        # for range: (xbin, xmin, xmax, ybin, ymin, ymax)   
#                        'range' : (5,0,2.5,7,25,60),   
#                        'xaxis' : 'p_{T}^{l_{1}} : #eta^{l_{1}}',
#                        'fold'  : 0                         
#                        }
bins_pt_el = [25,30,35,40,45,50,60,100]
bins_pt_mu = [25,30,35,40,45,100]
bins_eta  = [0.,0.5,1.,1.479,1.8,2.15,2.5] 
bins_aseta  = [-2.5,-2.15,-1.8,-1.479,-1.,0.5,0.,0.5,1.,1.479,1.8,2.15,2.5] 

variables['l1_etaVpt_ptmu']  = {
                        # for name:  y:x
                        'name': 'Lepton_pt[0]:abs(Lepton_eta[0])',     
                        'range' : (bins_eta,bins_pt_mu,),   
                        'xaxis' : 'p_{T}^{l_{1}} : #eta^{l_{1}}',
                        'fold'  : 0                         
                        }
variables['l1_etaVpt_ptel']  = {
                        # for name:  y:x
                        'name': 'Lepton_pt[0]:abs(Lepton_eta[0])',     
                        'range' : (bins_eta,bins_pt_el,),   
                        'xaxis' : 'p_{T}^{l_{1}} : #eta^{l_{1}}',
                        'fold'  : 0                         
                        }

variables['l1_pt_ptmu']  = { 
                        'name': 'Lepton_pt[0]',     
                        'range' : ( bins_pt_mu,),   
                        'xaxis' : 'p_{T}^{l_{1}}',
                        'fold'  : 3
                        }
variables['l1_pt_ptel']  = { 
                        'name': 'Lepton_pt[0]',     
                        'range' : ( bins_pt_el,),   
                        'xaxis' : 'p_{T}^{l_{1}}',
                        'fold'  : 3
                        }
variables['l1_pt_ptinv']  = { 
                        'name': 'Lepton_pt[0]',     
                        'range' : ([25,30,35,40,45,50,55,60,70,80,90,100,110,120,130,150],),   
                        'xaxis' : 'p_{T}^{l_{1}}',
                        'fold'  : 3
                        }

variables['l1_eta']  = {
                        'name': 'abs(Lepton_eta[0])',     
                        'range' : (bins_eta,),   
                        'xaxis' : '#eta^{l_{1}}',
                        'fold'  : 3                         
                        }
variables['l1_eta_aseta']  = {
                        'name': 'Lepton_eta[0]',     
                        'range' : (bins_aseta,),   
                        'xaxis' : '#eta^{l_{1}}',
                        'fold'  : 3                         
                        }
variables['l1_etaVpt_ptel_aseta']  = {
                        # for name:  y:x
                        'name': 'Lepton_pt[0]:Lepton_eta[0]',     
                        'range' : (bins_aseta,bins_pt_el,),   
                        'xaxis' : 'p_{T}^{l_{1}} : #eta^{l_{1}}',
                        'fold'  : 0                         
                        }
