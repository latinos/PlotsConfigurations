# variables

#variables = {}
    
#'fold' : # 0 = not fold (default), 1 = fold underflowbin, 2 = fold overflow bin, 3 = fold underflow and overflow

variables['events']  = {   'name': '1',
                        'range' : (1,0,2),
                        'xaxis' : 'events',
                         'fold' : 3
                        }
'''
variables['mjj_vs_mTi_20']  = {   'name': 'mjj:mTi',            #   variable name    
                        'range' : ([100,200,300,500,800],[500,700,1000,1300,1600,2000],),    #   variable range
                        'xaxis' : 'mTi [GeV]',  #   x axis name
                        'yaxis' : 'mjj [GeV]',  #   y axis name
                        'fold' :3
                        }
'''
variables['mjj_vs_mTi']  = {   'name': 'mjj:mTi',            #   variable name    
                        'range' : ([100,250,400,600,1000],[500,700,1000,1300,1600,2000],),    #   variable range
                        'xaxis' : 'mjj:mTi',  #   x axis name
                        'yaxis' : 'mjj [GeV]',  #   y axis name
                        'fold' :3
                        }
'''
variables['mjj_vs_mTi_25']  = {   'name': 'mjj:mTi',            #   variable name    
                        'range' : ([100,200,300,400,600,1000],[500,700,1000,1300,1600,2000],),    #   variable range
                        'xaxis' : 'mTi [GeV]',  #   x axis name
                        'yaxis' : 'mjj [GeV]',  #   y axis name
                        'fold' :3
                        }
variables['mjj_vs_mTi_30']  = {   'name': 'mjj:mTi',            #   variable name    
                        'range' : ([100,200,300,400,600,1000],[500,700,1000,1300,1600,2000,3000],),    #   variable range
                        'xaxis' : 'mTi [GeV]',  #   x axis name
                        'yaxis' : 'mjj [GeV]',  #   y axis name
                        'fold' :3
                        }


variables['mjj_vs_mll']  = {   'name': 'mjj:mll',            #   variable name    
                        'range' : ([50,150,250,350,450],[500,700,1000,1300,1600,2000],),    #   variable range
                        'xaxis' : 'mTi [GeV]',  #   x axis name
                        'yaxis' : 'mjj [GeV]',  #   y axis name
                        'fold' :3
                        }

variables['mjj_vs_mTi_35']  = {   'name': 'mjj:mTi',            #   variable name    
                        'range' : ([100,200,300,500,700,1000],[500,700,1000,1300,1600,2000,2500,3000],),    #   variable range
                        'xaxis' : 'mTi [GeV]',  #   x axis name
                        'yaxis' : 'mjj [GeV]',  #   y axis name
                        'fold' :3
                        }
variables['mjj_vs_mTi_90']  = {   'name': 'mjj:mTi',            #   variable name    
                        'range' : (9,100.,1000.,10,500.,3000.),    #   variable range
                        'xaxis' : 'mTi [GeV]',  #   x axis name
                        'yaxis' : 'mjj [GeV]',  #   y axis name
                        'fold' :3
                        }
variables['mTi']  = {   'name': 'mTi',            #   variable name    
                        'range' : ([100,150,200,250,300,350,400,450,500,600,700,1000],),    #   variable range
                        'xaxis' : 'm_{T,i} [GeV]',  #   x axis name
                        'fold' : 3
                        }


variables['mTi_VBF']  = {   'name': 'mTi',            #   variable name    
                        'range' : ([100,150,200,250,300,350,400,500,700,1000],),    #   variable range
                        'xaxis' : 'm_{T,i} [GeV]',  #   x axis name
                        'fold' : 3
                        }
variables['mTi_VBF6']  = {   'name': 'mTi',            #   variable name    
                        'range' : ([100,200,300,400,500,700,1000],),    #   variable range
                        'xaxis' : 'm_{T,i} [GeV]',  #   x axis name
                        'fold' : 3
                        }
variables['mTi_VBF5']  = {   'name': 'mTi',            #   variable name    
                        'range' : ([100,200,300,500,700,1000],),    #   variable range
                        'xaxis' : 'm_{T,i} [GeV]',  #   x axis name
                        'fold' : 3
                        }
variables['mTi_VBF4']  = {   'name': 'mTi',            #   variable name    
                        'range' : ([100,300,500,700,1000],),    #   variable range
                        'xaxis' : 'm_{T,i} [GeV]',  #   x axis name
                        'fold' : 3
                        }


variables['mTi_VBF5']  = {   'name': 'mTi',            #   variable name    
                        'range' : ([100,200,400,600,800,1000],),    #   variable range
                        'xaxis' : 'm_{T,i} [GeV]',  #   x axis name
                        'fold' : 3
                        }



variables['mth_VBF']  = {   'name': 'mth',            #   variable name    
                        'range' : ([100,150,200,250,300,350,400,500,700,1000],),    #   variable range
                        'xaxis' : 'm_{T,i} [GeV]',  #   x axis name
                        'fold' : 3
                        }
variables['mth']  = {   'name': 'mth',            #   variable name    
                        'range' : (20,0,400),    #   variable range
                        'xaxis' : 'm_{TH} [GeV]',  #   x axis name
                        'fold' : 3
                        }

variables['ptll']  = {   'name': 'ptll',            #   variable name    
                        'range' : (20,30,400),    #   variable range
                        'xaxis' : 'pT_{ll} [GeV]',  #   x axis name
                        'fold' :3
                        }
variables['mll']  = {   'name': 'mll',            #   variable name    
                        'range' : (40,0,400),    #   variable range
                        'xaxis' : 'm_{ll} [GeV]',  #   x axis name
                        'fold' :3
                        }


variables['mjj']  = {   'name': 'mjj',            #   variable name    
                        'range' : (10,500,3000),    #   variable range
                        'xaxis' : 'm_{jj} [GeV]',  #   x axis name
                        'fold' :3
                        }
variables['mjj_2']  = {   'name': 'mjj',            #   variable name    
                        'range' : (10,500,2000),    #   variable range
                        'xaxis' : 'm_{jj} [GeV]',  #   x axis name
                        'fold' :3
                        }
variables['detajj']  = {   'name': 'detajj',            #   variable name    
                           'range' : (10,3.5,8.5),    #   variable range
                           'xaxis' : '#Delta #eta jj',  #   x axis name
                           'fold' :0
                           }
variables['Zepp1']  = {   'name': 'abs(std_vector_lepton_eta[0]-0.5*(std_vector_jet_eta[0]+std_vector_jet_eta[1]))',            #   variable name    
                           'range' : (6,0,3),    #   variable range
                           'xaxis' : 'Zeppenfeld_1',  #   x axis name
                           'fold' :0
                           }

variables['Zepp2']  = {   'name': 'abs(std_vector_lepton_eta[1]-0.5*(std_vector_jet_eta[0]+std_vector_jet_eta[1]))',            #   variable name    
                           'range' : (6,0,3),    #   variable range
                           'xaxis' : 'Zeppenfeld_1',  #   x axis name
                           'fold' :0
                           }

variables['Zeppll']  = {   'name': '0.5*abs((std_vector_lepton_eta[0]+std_vector_lepton_eta[1])-(std_vector_jet_eta[0]+std_vector_jet_eta[1]))',            #   variable name    
                           'range' : (10,0,5),    #   variable range
                           'xaxis' : 'Zeppenfeld_1',  #   x axis name
                           'fold' :0
                           }

variables['dphill']  = {   'name': 'dphill',            #   variable name    
                           'range' : (30,0,3.2),    #   variable range
                           'xaxis' : '#Delta #phi ll',  #   x axis name
                           'fold' :0
                           }
variables['drll']  = {   'name': 'drll',            #   variable name    
                         'range' : (30,0,6),    #   variable range
                         'xaxis' : 'drll',  #   x axis name
                         'fold' :0
                         }


variables['std_vector_lepton_pt[0]']  = {   'name': 'std_vector_lepton_pt[0]',            #   variable name    
                        'range' : (20,0,200),    #   variable range
                        'xaxis' : 'pT_{1l} [GeV]',  #   x axis name
                        'fold' :3
                        }

variables['std_vector_lepton_pt[1]']  = {   'name': 'std_vector_lepton_pt[1]',            #   variable name    
                        'range' : (20,0,200),    #   variable range
                        'xaxis' : 'pT_{2l} [GeV]',  #   x axis name
                        'fold' :3
                        }

variables['std_vector_lepton_eta[0]']  = {   'name': 'std_vector_lepton_eta[0]',            #   variable name    
                        'range' : (20,-5,5),    #   variable range
                        'xaxis' : 'eta_{1l} [GeV]',  #   x axis name
                        'fold' :3
                        }

variables['std_vector_lepton_eta[1]']  = {   'name': 'std_vector_lepton_eta[1]',            #   variable name    
                        'range' : (20,-5,5),    #   variable range
                        'xaxis' : 'eta_{2l} [GeV]',  #   x axis name
                        'fold' :3
                        }


variables['metPfType1']  = {   'name': 'metPfType1',            #   variable name    
                        'range' : (25,0,250),    #   variable range
                        'xaxis' : 'MET [GeV]',  #   x axis name
                        'fold' :3
                        }



variables['njet']  = {   'name': 'njet',            #   variable name    
                        'range' : (10,0,10),    #   variable range
                        'xaxis' : 'njet',  #   x axis name
                        'fold' :3
                        }

variables['std_vector_jet_pt[0]']  = {   'name': 'std_vector_jet_pt[0]',            #   variable name    
                        'range' : (20,0,300),    #   variable range
                        'xaxis' : 'pT_{1j} [GeV]',  #   x axis name
                        'fold' :3
                        }

variables['std_vector_jet_pt[1]']  = {   'name': 'std_vector_jet_pt[1]',            #   variable name    
                        'range' : (20,0,300),    #   variable range
                        'xaxis' : 'pT_{2j} [GeV]',  #   x axis name
                        'fold' :3
                        }
variables['std_vector_jet_pt[2]']  = {   'name': 'std_vector_jet_pt[2]',            #   variable name    
                        'range' : (20,0,300),    #   variable range
                        'xaxis' : 'pT_{3j} [GeV]',  #   x axis name
                        'fold' :3
                        }




'''
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
