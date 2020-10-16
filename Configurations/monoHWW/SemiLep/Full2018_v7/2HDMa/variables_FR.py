variables['l1_pt']  = { 
                        'name': 'Lepton_pt[0]',     
                        'range' : (7,25,60),   
                        'xaxis' : 'p_{T}^{l_{1}}',
                        'fold'  : 3
                        }

variables['l1_eta']  = {
                        'name': 'abs(Lepton_eta[0])',     
                        'range' : (5,0,2.5),   
                        'xaxis' : '#eta^{l_{1}}',
                        'fold'  : 3                         
                        }

variables['l1_absetaVpt']  = {
                        # for name:  y:x
                        'name': 'Lepton_pt[0]:abs(Lepton_eta[0])',     
                        #'range' : (6,20,60,5,0,2.5),
                        # for range: (xbin, xmin, xmax, ybin, ymin, ymax)   
                        'range' : (5,0,2.5,7,25,60),   
                        'xaxis' : 'p_{T}^{l_{1}} : #eta^{l_{1}}',
                        'fold'  : 0                         
                        }

variables['l1_etaVpt']  = {
                        # for name:  y:x
                        'name': 'Lepton_pt[0]:Lepton_eta[0]',     
                        #'range' : (6,20,60,10,-2.5,2.5),
                        # for range: (xbin, xmin, xmax, ybin, ymin, ymax)   
                        'range' : (10,-2.5,2.5,7,25,60),   
                        'xaxis' : 'p_{T}^{l_{1}} : #eta^{l_{1}}',
                        'fold'  : 0                         
                        }

# variables['l1_etaVpt_morebins']  = {
#                         # for name:  y:x
#                         'name': 'Lepton_pt[0]:abs(Lepton_eta[0])',     
#                         #'range' : (10,20,60,10,0,2.5),
#                         # for range: (xbin, xmin, xmax, ybin, ymin, ymax)   
#                         'range' : (10,0,2.5,10,25,60),   
#                         'xaxis' : 'p_{T}^{l_{1}} : #eta^{l_{1}}',
#                         'fold'  : 0                         
#                         }

# variables['l1_etaVpt_morept']  = {
#                         # for name:  y:x
#                         'name': 'Lepton_pt[0]:abs(Lepton_eta[0])',     
#                         'range' : ([0.,0.5,1.,1.479,1.8,2.15,2.5],[25,30,35,40,45,50,55,60,70,100]),   
#                         'xaxis' : 'p_{T}^{l_{1}} : #eta^{l_{1}}',
#                         'fold'  : 0                         
#                         }

# variables['l1_etaVpt_morept_moreeta']  = {
#                         # for name:  y:x
#                         'name': 'Lepton_pt[0]:abs(Lepton_eta[0])',     
#                         'range' : ([0,0.4,0.8,1.1, 1.479, 1.75, 2, 2.25, 2.5],[25,30,35,40,45,50,55,60,70,100]),   
#                         'xaxis' : 'p_{T}^{l_{1}} : #eta^{l_{1}}',
#                         'fold'  : 0                         
#                         }
