# variables

#variables = {}
    


variables['events']  = {   'name': '1',      
                        'range' : (1,0,2),  
                        'xaxis' : 'events', 
                        'fold' : 3
                        }

variables['pt1']  = {   'name': 'Lepton_pt[0]',            #   variable name    
                        'range' : (50,0.,500),    #   variable range
                        'xaxis' : 'lept1_p_{T} [GeV]',  #   x axis name
                         'fold' : 0
                        }

variables['pt2']  = {   'name': 'Lepton_pt[1]',            #   variable name    
                        'range' : (50,0.,500),    #   variable range
                        'xaxis' : 'lept2_p_{T} [GeV]',  #   x axis name
                         'fold' : 0
                        }
variables['pt3']  = {   'name': 'Lepton_pt[2]',            #   variable name    
                       'range' : (30,0.,300),    #   variable range
                       'xaxis' : 'lept3_p_{T} [GeV]',  #   x axis name
                        'fold' : 0
                       }
#
variables['pt4']  = {   'name': 'Lepton_pt[3]',            #   variable name    
                       'range' : (20,0.,200),    #   variable range
                       'xaxis' : 'lept4_p_{T} [GeV]',  #   x axis name
                        'fold' : 0
                       }
   
        
variables['pfmet']  = { 
                        'name': 'MET_pt',     
                        'range' : (50,0,250),   
                        'xaxis' : 'pfmet [GeV]',
                        'fold'  : 0                         
                        }

variables['mllll_zh4l']  = {   'name': 'mllll_zh4l',            #   variable name    
                        'range' : (60,0,600),    #   variable range
                         'xaxis' : 'mllll [GeV]',  #   x axis name
                        'fold' : 0
                      }

variables['z0Mass_zh4l']  = {   'name': 'z0Mass_zh4l',            #   variable name    
                        'range' : (30,50,140),    #   variable range
                        'xaxis' : 'z0Mass [GeV]',  #   x axis name
                       'fold' : 0
                             }
     
variables['z1Mass_zh4l']  = {   'name': 'z1Mass_zh4l',            #   variable name    
                       'range' : (9,10,100),    #   variable range
                      'xaxis' : 'XMass [GeV]',  #   x axis name
                    'fold' : 0
                    }

variables['z1DeltaPhi_zh4l']  = {   'name': 'z1DeltaPhi_zh4l',            #   variable name    
                        'range' : (14,-3.5,3.5),    #   variable range
                       'xaxis' : 'XDeltaPhi [GeV]',  #   x axis name
                     'fold' : 0
                  }

variables['z1DeltaR_zh4l']  = {   'name': 'z1DeltaR_zh4l',            #   variable name    
                        'range' : (12,0,6),    #   variable range
                         'xaxis' : 'XDeltaR [GeV]',  #   x axis name
                        'fold' : 0
                      }

   
