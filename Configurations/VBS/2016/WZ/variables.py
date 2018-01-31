# variables

#variables = {}
    
#'fold' : # 0 = not fold (default), 1 = fold underflowbin, 2 = fold overflow bin, 3 = fold underflow and overflow
   
variables['events']  = {   'name': '1',      
                       'range' : (1,0,2),  
                       'xaxis' : 'events', 
                        'fold' : 3
                       }

#variables['mjj']  = {  'name': 'mjj',
                       #'range': ([500,800,1100,1500,2000],),  
                       ##'range' : (4,500,2000), 
                       #'xaxis': 'mjj [GeV]',
                       #'fold': 3
                       #}

#variables['mll']  = {   'name': 'mll',            #   variable name
                       #'range' : ([20,600],),    #   variable range
                       ##'range' : (5,0,500),    #   variable range
                       #'xaxis' : 'mll [GeV]',  #   x axis name
                       #'fold' : 3
                       #}
#
#
#variables['detajj']  = {  'name': 'detajj',
#                       'range': (12,0,6),
#                       'xaxis': 'detajj',
#                       'fold': 3
#                       }
#
#  
#variables['njet']  = {  'name': 'njet',      
#                        'range' : (8,0,8),  
#                        'xaxis' : 'njet', 
#                        'fold' : 3
#                        }
#
#
#
#variables['met']  = {   'name': 'metPfType1',            #   variable name
#                       'range' : (20,20,200),    #   variable range
#                              'xaxis' : 'pfmet [GeV]',  #   x axis name
#                       'fold' : 0
#                       }
#
#
#variables['pt1']  = {  'name': 'std_vector_lepton_pt[0]',            #   variable name
#                       'range' : (20,0,200),    #   variable range
#                              'xaxis' : 'p_{T} 1st lep [GeV]',  #   x axis name
#                       'fold' : 3
#                       }
#
#variables['pt2']  = {  'name': 'std_vector_lepton_pt[1]',            #   variable name
#                       'range' : (20,0,200),    #   variable range
#                              'xaxis' : 'p_{T} 2nd lep [GeV]',  #   x axis name
#                       'fold' : 3
#                       }
#
#variables['etaj1'] = {  'name': 'abs(std_vector_jet_eta[0])',
#                       'range': (12,-6,6),
#                       'xaxis': 'etaj1',
#                       'fold': 3
#                       }
#
#variables['etaj2'] = {         'name': 'abs(std_vector_jet_eta[1])',
#                              'range': (12,-6,6),
#                              'xaxis': 'etaj2',
#                              'fold': 3
#                              }
#variables['ptj1']  = {  'name': 'std_vector_jet_pt[0]',            #   variable name
#                       'range' : (20,0,200),    #   variable range
#                              'xaxis' : 'p_{T} 1st jet [GeV]',  #   x axis name
#                       'fold' : 3
#                       }
#
#variables['ptj2']  = {  'name': 'std_vector_jet_pt[1]',            #   variable name
#                       'range' : (20,0,200),    #   variable range
#                              'xaxis' : 'p_{T} 2nd jet [GeV]',  #   x axis name
#                       'fold' : 3
#                       }
