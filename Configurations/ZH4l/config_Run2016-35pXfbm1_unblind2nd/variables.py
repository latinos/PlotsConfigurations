# variables

#variables = {}
    
#'fold' : # 0 = not fold (default), 1 = fold underflowbin, 2 = fold overflow bin, 3 = fold underflow and overflow
   
variables['events']  = {   'name': '1',      
                        'range' : (1,0,2),  
                        'xaxis' : 'events', 
                         'fold' : 3
                        }

variables['pt1']  = {   'name': 'std_vector_lepton_pt[0]',            #   variable name    
                        'range' : (10,0.,200),    #   variable range
                        'xaxis' : 'lept1_p_{T} [GeV]',  #   x axis name
                         'fold' : 0
                        }
    
variables['pt2']  = {   'name': 'std_vector_lepton_pt[1]',            #   variable name    
                        'range' : (10,0.,200),    #   variable range
                        'xaxis' : 'lept2_p_{T} [GeV]',  #   x axis name
                         'fold' : 0
                        }

variables['pt3']  = {   'name': 'std_vector_lepton_pt[2]',            #   variable name    
                       'range' : (5,0.,100),    #   variable range
                       'xaxis' : 'lept3_p_{T} [GeV]',  #   x axis name
                        'fold' : 0
                       }

variables['pt4']  = {   'name': 'std_vector_lepton_pt[3]',            #   variable name    
                       'range' : (5,0.,100),    #   variable range
                       'xaxis' : 'lept4_p_{T} [GeV]',  #   x axis name
                        'fold' : 0
                       }

variables['met']  = {   'name': 'metPfType1',            #   variable name    
                        'range' : (10,0,100),    #   variable range
                        # 'range' : (50,0,250),    #   variable range
                        'xaxis' : 'pfMET [GeV]',  #   x axis name
                       'fold' : 0
                     }

variables['z0Mass_zh4l']  = {   'name': 'z0Mass_zh4l',            #   variable name    
                        'range' : (5,80,100),    #   variable range
                        'xaxis' : 'z0Mass [GeV]',  #   x axis name
                       'fold' : 0
                     }

variables['z1Mass_zh4l']  = {   'name': 'z1Mass_zh4l',            #   variable name    
                        'range' : (9,10,100),    #   variable range
                        'xaxis' : 'XMass [GeV]',  #   x axis name
                       'fold' : 0
                     }

# variables['mllll_zh4l']  = {   'name': 'mllll_zh4l',            #   variable name    
                        # 'range' : (60,0,600),    #   variable range
                        # 'xaxis' : 'mllll [GeV]',  #   x axis name
                       # 'fold' : 0
                     # }

# variables['leadjetPT'] = { 'name': 'std_vector_jet_pt[0]',
                        # 'range' : (30,0,300),    #   variable range
                        # 'xaxis' : 'leadingjet_Pt [GeV]',  #   x axis name
                       # 'fold' : 0
                     # }


# variables['zaMass_zh4l']  = {   'name': 'zaMass_zh4l',            #   variable name    
                        # 'range' : (40,0,200),    #   variable range
                        # 'xaxis' : 'zaMass [GeV]',  #   x axis name
                       # 'fold' : 0
                     # }

# variables['zbMass_zh4l']  = {   'name': 'zbMass_zh4l',            #   variable name    
                        # 'range' : (40,0,200),    #   variable range
                        # 'xaxis' : 'zbMass [GeV]',  #   x axis name
                       # 'fold' : 0
                     # }

# variables['z0DeltaR_zh4l']  = {   'name': 'z0DeltaR_zh4l',            #   variable name    
                        # 'range' : (12,0,6),    #   variable range
                        # 'xaxis' : 'z0DeltaR [GeV]',  #   x axis name
                       # 'fold' : 0
                     # }

# variables['z1DeltaR_zh4l']  = {   'name': 'z1DeltaR_zh4l',            #   variable name    
                        # 'range' : (12,0,6),    #   variable range
                        # 'xaxis' : 'XDeltaR [GeV]',  #   x axis name
                       # 'fold' : 0
                     # }

# variables['zaDeltaR_zh4l']  = {   'name': 'zaDeltaR_zh4l',            #   variable name    
                        # 'range' : (12,0,6),    #   variable range
                        # 'xaxis' : 'zaDeltaR [GeV]',  #   x axis name
                       # 'fold' : 0
                     # }

# variables['zbDeltaR_zh4l']  = {   'name': 'zbDeltaR_zh4l',            #   variable name    
                        # 'range' : (12,0,6),    #   variable range
                        # 'xaxis' : 'zbDeltaR [GeV]',  #   x axis name
                       # 'fold' : 0
                     # }

# variables['z0DeltaPhi_zh4l']  = {   'name': 'z0DeltaPhi_zh4l',            #   variable name    
                        # 'range' : (14,-3.5,3.5),    #   variable range
                        # 'xaxis' : 'z0DeltaPhi [GeV]',  #   x axis name
                       # 'fold' : 0
                     # }

# variables['z1DeltaPhi_zh4l']  = {   'name': 'z1DeltaPhi_zh4l',            #   variable name    
                        # 'range' : (14,-3.5,3.5),    #   variable range
                        # 'xaxis' : 'XDeltaPhi [GeV]',  #   x axis name
                       # 'fold' : 0
                     # }

# variables['zaDeltaPhi_zh4l']  = {   'name': 'zaDeltaPhi_zh4l',            #   variable name    
                        # 'range' : (14,-3.5,3.5),    #   variable range
                        # 'xaxis' : 'zaDeltaPhi [GeV]',  #   x axis name
                       # 'fold' : 0
                     # }

# variables['zbDeltaPhi_zh4l']  = {   'name': 'zbDeltaPhi_zh4l',            #   variable name    
                        # 'range' : (14,-3.5,3.5),    #   variable range
                        # 'xaxis' : 'zbDeltaPhi [GeV]',  #   x axis name
                       # 'fold' : 0
                     # }

# variables['z1Mt_zh4l']  = {   'name': 'z1Mt_zh4l',            #   variable name    
                        # 'range' : (5,0,150),    #   variable range
                        # 'xaxis' : 'H_Mt [GeV]',  #   x axis name
                       # 'fold' : 0
                     # }

