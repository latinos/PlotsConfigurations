# variables

#variables = {}
    
#'fold' : # 0 = not fold (default), 1 = fold underflowbin, 2 = fold overflow bin, 3 = fold underflow and overflow
   
variables['events']  = {   'name': '1',      
                        'range' : (1,0,2),  
                        'xaxis' : 'events', 
                         'fold' : 3
                        }
    
variables['mll']  = {   'name': 'mll',            #   variable name    
                        'range' : (20,10,200),    #   variable range
                        'xaxis' : 'm_{ll} [GeV]',  #   x axis name
                         'fold' : 0
                        }
                        
variables['mth']  = {   'name': 'mth',            #   variable name    
                        'range' : (10,60,200),    #   variable range
                        'xaxis' : 'm_{T}^{H} [GeV]',  #   x axis name
                        'fold' : 0
                        }

variables['mtw1']  = {   'name': 'mtw1',            #   variable name    
                        'range' : (20,0,200),    #   variable range
                        'xaxis' : 'm_{T}^{W1} [GeV]',  #   x axis name
                        'fold' : 3
                        }

variables['mtw2']  = {   'name': 'mtw2',            #   variable name    
                        'range' : (20,0,200),    #   variable range
                        'xaxis' : 'm_{T}^{W2} [GeV]',  #   x axis name
                        'fold' : 3
                        }


variables['ptll']  = {   'name': 'ptll',            #   variable name    
                        'range' : (40,0,80),    #   variable range
                        'xaxis' : 'pt_{ll} [GeV]',  #   x axis name
                         'fold' : 3
                        }


variables['mpmet']  = {   'name': 'mpmet',            #   variable name    
                        'range' : (20,0,200),    #   variable range
                        'xaxis' : 'mpmet [GeV]',  #   x axis name
                         'fold' : 0
                        }




#variables['mllVSmth'] = {   'name': 'mll:mth',            #   variable name    
                        #'range' : (10,0,200, 5,10,110),            #   variable range
                        #'xaxis' : 'm_{ll} : m_{T}^{H}',      #   x axis name
                        #'fold' : 3
                        #}


#variables['mllVSmth'] = {   'name': 'mll:mth',            #   variable name    
                        #'range' : (7,60,200, 5,10,110),            #   variable range
                        #'xaxis' : 'm_{ll} : m_{T}^{H}',      #   x axis name
                        #'fold' : 3 , 
                        ## do weighted plot too
                        #'doWeight' : 1,
                        #'binX'     : 7,
                        #'binY'     : 5
                        ##
                        #}


variables['lepFlavour_1']  = {   'name': 'abs(std_vector_lepton_flavour[0])',            #   variable name    
                        'range' : (4,11,14),    #   variable range
                        'xaxis' : 'flavour lep 1',  #   x axis name
                        'fold' : 0
                        }


variables['eleExpMisHits_1']  = {   'name': 'std_vector_electron_expectedMissingInnerHits[0]',            #   variable name    
                        'range' : (3,0,3),    #   variable range
                        'xaxis' : 'minHits lep 1',  #   x axis name
                        'fold' : 0
                        }

variables['eleDeta_1']  = {   'name': 'std_vector_electron_dEtaIn[0]',            #   variable name    
                        'range' : (20,-0.01,0.01),    #   variable range
                        'xaxis' : '#Delta#eta lep 1',  #   x axis name
                        'fold' : 0
                        }

variables['d0_1']  = {   'name': 'abs(std_vector_lepton_d0[0])',            #   variable name    
                        'range' : (100,0,0.2),    #   variable range
                        'xaxis' : 'd0 lep 1',  #   x axis name
                        'fold' : 0
                        }

variables['dz_1']  = {   'name': 'abs(std_vector_lepton_dz[0])',            #   variable name    
                        'range' : (20,0,0.2),    #   variable range
                        'xaxis' : 'dz lep 1',  #   x axis name
                        'fold' : 0
                        }

variables['ooEmooP_1']  = {   'name': 'abs(std_vector_electron_ooEmooP[0])',            #   variable name    
                        'range' : (20,0,0.02),    #   variable range
                        'xaxis' : 'ooEmooP lep 1',  #   x axis name
                        'fold' : 0
                        }






variables['lepFlavour_2']  = {   'name': 'abs(std_vector_lepton_flavour[1])',            #   variable name    
                        'range' : (4,11,14),    #   variable range
                        'xaxis' : 'flavour lep 2',  #   x axis name
                        'fold' : 0
                        }

variables['eleExpMisHits_2']  = {   'name': 'std_vector_electron_expectedMissingInnerHits[1]',            #   variable name    
                        'range' : (3,0,3),    #   variable range
                        'xaxis' : 'minHits lep 2',  #   x axis name
                        'fold' : 0
                        }

variables['eleDeta_2']  = {   'name': 'std_vector_electron_dEtaIn[1]',            #   variable name    
                        'range' : (20,-0.01,0.01),    #   variable range
                        'xaxis' : '#Delta#eta lep 2',  #   x axis name
                        'fold' : 0
                        }

variables['d0_2']  = {   'name': 'abs(std_vector_lepton_d0[1])',            #   variable name    
                        'range' : (100,0,0.2),    #   variable range
                        'xaxis' : 'd0 lep 2',  #   x axis name
                        'fold' : 0
                        }

variables['dz_2']  = {   'name': 'abs(std_vector_lepton_dz[1])',            #   variable name    
                        'range' : (20,0,0.2),    #   variable range
                        'xaxis' : 'dz lep 2',  #   x axis name
                        'fold' : 0
                        }

variables['ooEmooP_2']  = {   'name': 'abs(std_vector_electron_ooEmooP[1])',            #   variable name    
                        'range' : (20,0,0.02),    #   variable range
                        'xaxis' : 'ooEmooP lep 2',  #   x axis name
                        'fold' : 0
                        }














## just for fun plots:

#variables['nvtx']  = {   'name': 'nvtx',      
                        #'range' : (40,0,40),  
                        #'xaxis' : 'nvtx', 
                         #'fold' : 3
                        #}
                        
#variables['ptll']  = {   'name': 'ptll',            #   variable name    
                        #'range' : (20,0,200),    #   variable range
                        #'xaxis' : 'pt_{ll} [GeV]',  #   x axis name
                         #'fold' : 3
                        #}

#variables['met']  = {   'name': 'pfType1Met',            #   variable name    
                        #'range' : (20,0,200),    #   variable range
                        #'xaxis' : 'pfmet [GeV]',  #   x axis name
                         #'fold' : 0
                        #}
