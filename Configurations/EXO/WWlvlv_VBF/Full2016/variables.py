# variables

#variables = {}
    
#'fold' : # 0 = not fold (default), 1 = fold underflowbin, 2 = fold overflow bin, 3 = fold underflow and overflow

#variables['events']  = {   'name': '1',
#                        'range' : (1,0,2),
#                        'xaxis' : 'events',
#                        'fold' : 3,
#                        'divideByBinWidth': 1, 
#                        }


variables['mTi']  = {   'name': 'mTi',            #   variable name    
                        'range' : ([100,150,200,250,300,350,400,450,500,550,600,650,700,750,800,900,1000,2000],),    #   variable range
                        #'range' : (40,0,2000),    #   variable range
                        'xaxis' : 'm_{T,i} [GeV]',  #   x axis name
                        'fold' : 3,
                        #'divideByBinWidth': 1, 
                        }


variables['mTi_VBF']  = {   'name': 'mTi',            #   variable name    
                        'range' : ([100,150,200,250,300,350,400,500,700,1000,2000],),    #   variable range
                        'xaxis' : 'm_{T,i} [GeV]',  #   x axis name
                        'fold' : 3,
                        #'divideByBinWidth': 1,
                        }


variables['mTi_test_BIN']  = {   'name': 'mTi',            #   variable name    
                        'range' : (60,0,3000), 
                        'xaxis' : 'm_{T,i} [GeV]',  #   x axis name
                        'fold' : 3,
                        #'divideByBinWidth': 1,
                        }



#variables['mth_VBF']  = {   'name': 'mth',            #   variable name    
#                        'range' : ([100,150,200,250,300,350,400,500,700,1000,2000,3000],),    #   variable range
#                        'xaxis' : 'm_{T,i} [GeV]',  #   x axis name
#                        'fold' : 3,
#                        'divideByBinWidth': 1, 
# }
 
#variables['mth']  = {   'name': 'mth',            #   variable name    
#                        'range' : (60,0,600),    #   variable range
#                        'xaxis' : 'm_{TH} [GeV]',  #   x axis name
#                        'fold' : 3,
#                        'divideByBinWidth': 1,
#                        }
# 
#variables['ptll']  = {   'name': 'ptll',            #   variable name    
#                        'range' : (20,0,200),    #   variable range
#                        'xaxis' : 'pT_{ll} [GeV]',  #   x axis name
#                        'fold' :3,
#                        'divideByBinWidth': 1, 
#                        }
#variables['mll']  = {   'name': 'mll',            #   variable name    
#                        'range' : (40,0,400),    #   variable range
#                        'xaxis' : 'm_{ll} [GeV]',  #   x axis name
#                        'fold' :3,
#                        'divideByBinWidth': 1, 
#                        }
# 
# 
#variables['mjj']  = {   'name': 'mjj',            #   variable name    
#                        'range' : (80,0,800),    #   variable range
#                        'xaxis' : 'm_{jj} [GeV]',  #   x axis name
#                        'fold' :3,
#                        'divideByBinWidth': 1, 
#                        }
# 
#variables['std_vector_lepton_pt[0]']  = {   'name': 'std_vector_lepton_pt[0]',            #   variable name    
#                        'range' : (20,0,200),    #   variable range
#                        'xaxis' : 'pT_{1l} [GeV]',  #   x axis name
#                        'fold' :3,
#                        'divideByBinWidth': 1, 
#                        }
# 
#variables['std_vector_lepton_pt[1]']  = {   'name': 'std_vector_lepton_pt[1]',            #   variable name    
#                        'range' : (20,0,200),    #   variable range
#                        'xaxis' : 'pT_{2l} [GeV]',  #   x axis name
#                        'fold' :3,
#                        'divideByBinWidth': 1, 
#                        }
# 
###variables['std_vector_lepton_eta[0]']  = {   'name': 'std_vector_lepton_eta[0]',            #   variable name    
##                        'range' : (20,-5,5),    #   variable range
##                        'xaxis' : 'eta_{1l} [GeV]',  #   x axis name
##                        'fold' :3
##                        }
## 
##variables['std_vector_lepton_eta[1]']  = {   'name': 'std_vector_lepton_eta[1]',            #   variable name    
##                        'range' : (20,-5,5),    #   variable range
##                        'xaxis' : 'eta_{2l} [GeV]',  #   x axis name
##                        'fold' :3
##                        }
## 
## 
#variables['metPfType1']  = {   'name': 'metPfType1',            #   variable name    
#                        'range' : (25,0,250),    #   variable range
#                        'xaxis' : 'MET [GeV]',  #   x axis name
#                        'fold' :3,
#                        'divideByBinWidth': 1, 
#                        }
# 
# 
# 
#variables['njet']  = {   'name': 'njet',            #   variable name    
#                        'range' : (10,0,10),    #   variable range
#                        'xaxis' : 'njet',  #   x axis name
#                        'fold' :3,
#                        'divideByBinWidth': 1, 
#                        }
# 
# 
# 
# 


'''
variables['mR']  = {   'name': 'mR',            #   variable name    
                        'range' : ([100,150,200,250,300,350,400,450,500,600,700,1000],),    #   variable range
                        'xaxis' : 'mR [GeV]',  #   x axis name
                        'fold' : 3
                        }
variables['mTe']  = {   'name': 'mTe',            #   variable name    
                        'range' : ([100,150,200,250,300,350,400,450,500,600,700,1000],),    #   variable range
                        'xaxis' : 'mTe [GeV]',  #   x axis name
                        'fold' : 3
                        }

variables['mcoll']  = {   'name': 'mcoll',            #   variable name    
                        'range' : ([100,150,200,250,300,350,400,450,500,600,700,1000],),    #   variable range
                        'xaxis' : 'mcoll [GeV]',  #   x axis name
                        'fold' : 3
                        }

variables['mcollWW']  = {   'name': 'mcollWW',            #   variable name    
                        'range' : ([100,150,200,250,300,350,400,450,500,600,700,1000],),    #   variable range
                        'xaxis' : 'mcollWW [GeV]',  #   x axis name
                        'fold' : 3
                        }


variables['std_vector_lepton_phi[0]']  = {   'name': 'std_vector_lepton_phi[0]',            #   variable name    
                        'range' : (20,-5,5),    #   variable range
                        'xaxis' : 'phi_{1l} [GeV]',  #   x axis name
                        'fold' :3
                        }

variables['std_vector_lepton_phi[1]']  = {   'name': 'std_vector_lepton_phi[1]',            #   variable name    
                        'range' : (20,-5,5),    #   variable range
                        'xaxis' : 'phi_{2l} [GeV]',  #   x axis name
                        'fold' :3
                        }





'''
