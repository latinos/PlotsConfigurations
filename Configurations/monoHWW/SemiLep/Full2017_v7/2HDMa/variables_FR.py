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

variables['l1_etaVpt']  = {
                        # for name:  y:x
                        'name': 'Lepton_pt[0]:abs(Lepton_eta[0])',     
                        #'range' : (6,20,60,5,0,2.5),
                        # for range: (xbin, xmin, xmax, ybin, ymin, ymax)   
                        'range' : (5,0,2.5,7,25,60),   
                        'xaxis' : 'p_{T}^{l_{1}} : #eta^{l_{1}}',
                        'fold'  : 0                         
                        }
