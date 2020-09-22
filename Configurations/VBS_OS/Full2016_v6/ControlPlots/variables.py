# variables

#variables = {}
    
#'fold' : # 0 = not fold (default), 1 = fold underflowbin, 2 = fold overflow bin, 3 = fold underflow and overflow

#gROOT.ProcessLineSync('.L m4l.C+')
#gROOT.ProcessLineSync('.L mucca.C+')
#gROOT.ProcessLineSync('initMyReader()')

variables['events']  = {   'name': '1',
                        'range' : (1,0,2),
                        'xaxis' : 'events',
                         'fold' : 3
                        }

variables['mjj_vs_mTi']  = {   'name': 'mjj:mTi',            #   variable name    
                        'range' : ([100,250,400,600,1000],[500,700,1000,1300,1600,2000],),    #   variable range
                        'xaxis' : 'mjj:mTi',  #   x axis name
                        'fold' :3
                        }

variables['mTi']  = {   'name': 'mTi',            #   variable name    
                        'range' : ([100,150,200,250,300,350,400,450,500,600,800,1000],),    #   variable range
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
                        'range' : (20,50,400),    #   variable range
                        'xaxis' : 'm_{ll} [GeV]',  #   x axis name
                        'fold' :3
                        }

variables['mjj']  = {   'name': 'mjj',            #   variable name    
                        'range' : (10,500,3000),    #   variable range
                        'xaxis' : 'm_{jj} [GeV]',  #   x axis name
                        'fold' :3
                        }

variables['mjj_merged']  = {   'name': 'mjj',            #   variable name    
                        'range' : ([500, 750., 1000., 1500., 2000., 3000],),    #   variable range
                        'xaxis' : 'm_{jj} [GeV]',  #   x axis name
                        'fold' :3
                        }

variables['detajj']  = {   'name': 'detajj',            #   variable name    
                           'range' : (10,3.5,8.5),    #   variable range
                           'xaxis' : '#Delta #eta jj',  #   x axis name
                           'fold' :0
                           }

variables['Zepp_1l']  = {  'name': 'Lepton_eta[0]-0.5*(CleanJet_eta[0]+CleanJet_eta[1])',            #   variable name    
                           'range' : (10,-5,5),    #   variable range
                           'xaxis' : 'Z 1st lepton',  #   x axis name
                           'fold' :0
                           }

variables['Zepp_2l']  = {  'name': 'Lepton_eta[1]-0.5*(CleanJet_eta[0]+CleanJet_eta[1])',            #   variable name    
                           'range' : (10,-5,5),    #   variable range
                           'xaxis' : 'Z 2nd lepton',  #   x axis name
                           'fold' :0
                           }

variables['Zepp_ll']  = {   'name': '0.5*abs((Lepton_eta[0]+Lepton_eta[1])-(CleanJet_eta[0]+CleanJet_eta[1]))',            #   variable name    
                           'range' : (10,0,5),    #   variable range
                           'xaxis' : 'Z_{ll}',  #   x axis name
                           'fold' :0
                           }

variables['dphill']  = {   'name': 'dphill',            #   variable name    
                           'range' : (30,0,3.2),    #   variable range
                           'xaxis' : '#Delta #phi _{ll}',  #   x axis name
                           'fold' :0
                           }

variables['pt_1l']  = {   'name': 'Lepton_pt[0]',            #   variable name    
                        'range' : (20,0,200),    #   variable range
                        'xaxis' : 'pT 1st lepton [GeV]',  #   x axis name
                        'fold' :3
                        }

variables['pt_2l']  = {   'name': 'Lepton_pt[1]',            #   variable name    
                        'range' : (20,0,200),    #   variable range
                        'xaxis' : 'pT 2nd lepton [GeV]',  #   x axis name
                        'fold' :3
                        }


variables['eta_1l']  = {   'name': 'Lepton_eta[0]',            #   variable name    
                        'range' : (10,-5,5),    #   variable range
                        'xaxis' : '#eta 1st lepton',  #   x axis name
                        'fold' :3
                        }

variables['eta_2l']  = {   'name': 'Lepton_eta[1]',            #   variable name    
                        'range' : (10,-5,5),    #   variable range
                        'xaxis' : '#eta 2nd lepton',  #   x axis name
                        'fold' :3
                        }


variables['PuppiMET_pt']  = {   'name': 'PuppiMET_pt',            #   variable name    
                        'range' : (25,0,250),    #   variable range
                        'xaxis' : 'MET [GeV]',  #   x axis name
                        'fold' :3
                        }


variables['njet']  = {   'name': 'Sum$(CleanJet_pt > 30)',            #   variable name    
                        'range' : (10,0,10),    #   variable range
                        'xaxis' : 'njet',  #   x axis name
                        'fold' :3
                        }

variables['pt_1j']  = {   'name': 'CleanJet_pt[0]',            #   variable name    
                        'range' : (20,0,300),    #   variable range
                        'xaxis' : 'pT 1st jet [GeV]',  #   x axis name
                        'fold' :3
                        }

variables['pt_2j']  = {   'name': 'CleanJet_pt[1]',            #   variable name    
                        'range' : (20,0,300),    #   variable range
                        'xaxis' : 'pT 2nd jet [GeV]',  #   x axis name
                        'fold' :3
                        }

variables['pt_3j']  = {   'name': 'Alt$(CleanJet_pt[2], 0)',            #   variable name    
                        'range' : (20,0,300),    #   variable range
                        'xaxis' : 'pT 3rd jet [GeV]',  #   x axis name
                        'fold' :3
                        }

variables['eta_1j']  = {   'name': 'CleanJet_eta[0]',            #   variable name    
                        'range' : (10,-5,5),    #   variable range
                        'xaxis' : '#eta 1st jet',  #   x axis name
                        'fold' :3
                        }

variables['eta_2j']  = {   'name': 'CleanJet_eta[1]',            #   variable name    
                        'range' : (10,-5,5),    #   variable range
                        'xaxis' : '#eta 2nd jet',  #   x axis name
                        'fold' :3
                        }

variables['eta_3j']  = {   'name': 'Alt$(CleanJet_eta[2], 0)',            #   variable name    
                        'range' : (10,-5,5),    #   variable range
                        'xaxis' : '#eta 3rd jet',  #   x axis name
                        'fold' :3
                        }
