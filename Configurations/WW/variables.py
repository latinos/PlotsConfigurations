# variables

#variables = {}
    
#                    
variables['mll']  = {   'name': 'mll',            #   variable name    
                        'range' : (100,0,200),    #   variable range
                        'xaxis' : 'm_{ll} [GeV]'  #   x axis name
                        }

variables['pt1']  = {   'name': 'std_vector_lepton_pt[0]',     
                        'range' : (100,0,200),   
                        'xaxis' : 'p_{T} 1st lep'
                        }

variables['pt2']  = {   'name': 'std_vector_lepton_pt[1]',     
                        'range' : (100,0,200),   
                        'xaxis' : 'p_{T} 2nd lep'
                        }

variables['csvv2ivf_1']  = { 
                               'name': 'std_vector_jet_csvv2ivf[0]',     
                               'range' : (100,0,1),   
                               'xaxis' : 'csvv2ivf jet 1st'
                        }
