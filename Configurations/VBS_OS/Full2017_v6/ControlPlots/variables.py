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

'''
variables['R']  = {   'name': 'R(ptll,phill(std_vector_lepton_pt[0],std_vector_lepton_phi[0],std_vector_lepton_pt[1],std_vector_lepton_phi[1]),metPfType1,metPfType1Phi,std_vector_jet_pt[0],std_vector_jet_phi[0],std_vector_jet_pt[1],std_vector_jet_phi[1])',            #   variable name    
                        'range' : (20,0.,1.),    #   variable range
                        'xaxis' : 'R',  #   x axis name
                        'fold' : 3,
                        'linesToAdd' : ['.L /afs/cern.ch/user/l/lenzip/work/ww2017/CMSSW_8_0_26_patch1/work/PlotsConfigurations/Configurations/EXO/VBS_OS/2016/R.C+','.L /afs/cern.ch/user/l/lenzip/work/ww2017/CMSSW_8_0_26_patch1/work/PlotsConfigurations/Configurations/EXO/VBS_OS/2016/phill.C+']
                        }

variables['Zeppll']  = {   'name': 'Zeppll(std_vector_lepton_pt[0],std_vector_lepton_phi[0],std_vector_lepton_eta[0],std_vector_lepton_pt[1],std_vector_lepton_phi[1],std_vector_lepton_eta[1],std_vector_jet_eta[0],std_vector_jet_eta[1],detajj)',            #   variable name    
                           'range' : (10,0,5),    #   variable range
                           'xaxis' : 'Zeppenfeld_{ll}',  #   x axis name
                           'fold' :3,
                        'linesToAdd' : ['.L /afs/cern.ch/user/l/lenzip/work/ww2017/CMSSW_8_0_26_patch1/work/PlotsConfigurations/Configurations/EXO/VBS_OS/2016/Zeppll.C+']
                           }
'''                        
                   
variables['mjj_vs_mTi']  = {   'name': 'mjj:mTi',            #   variable name    
                        'range' : ([100,250,400,600,1000],[500,700,1000,1300,1600,2000],),    #   variable range
                        'xaxis' : 'mjj:mTi',  #   x axis name
                        'fold' :3
                        }

variables['mTi']  = {   'name': 'mTi',            #   variable name    
                        'range' : ([100,150,200,250,300,350,400,450,500,600,700,1000],),    #   variable range
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

variables['detajj']  = {   'name': 'detajj',            #   variable name    
                           'range' : (10,3.5,8.5),    #   variable range
                           'xaxis' : '#Delta #eta jj',  #   x axis name
                           'fold' :0
                           }


variables['Zepp1']  = {   'name': 'Lepton_eta[0]-0.5*(CleanJet_eta[0]+CleanJet_eta[1])',            #   variable name    
                           'range' : (10,-5,5),    #   variable range
                           'xaxis' : 'Zeppenfeld_1',  #   x axis name
                           'fold' :0
                           }

variables['Zepp2']  = {   'name': 'Lepton_eta[1]-0.5*(CleanJet_eta[0]+CleanJet_eta[1])',            #   variable name    
                           'range' : (10,-5,5),    #   variable range
                           'xaxis' : 'Zeppenfeld_2',  #   x axis name
                           'fold' :0
                           }

variables['Zeppll']  = {   'name': '0.5*abs((Lepton_eta[0]+Lepton_eta[1])-(CleanJet_eta[0]+CleanJet_eta[1]))',            #   variable name    
                           'range' : (10,0,5),    #   variable range
                           'xaxis' : 'Zeppenfeld_ll',  #   x axis name
                           'fold' :0
                           }


variables['dphill']  = {   'name': 'dphill',            #   variable name    
                           'range' : (30,0,3.2),    #   variable range
                           'xaxis' : '#Delta #phi ll',  #   x axis name
                           'fold' :0
                           }

'''
variables['drll']  = {   'name': 'drll',            #   variable name    
                         'range' : (30,0,6),    #   variable range
                         'xaxis' : 'drll',  #   x axis name
                         'fold' :0
                         }
'''

variables['pt_1l']  = {   'name': 'Lepton_pt[0]',            #   variable name    
                        'range' : (20,0,200),    #   variable range
                        'xaxis' : 'pT_{1l} [GeV]',  #   x axis name
                        'fold' :3
                        }

variables['pt_2l']  = {   'name': 'Lepton_pt[1]',            #   variable name    
                        'range' : (20,0,200),    #   variable range
                        'xaxis' : 'pT_{2l} [GeV]',  #   x axis name
                        'fold' :3
                        }


variables['eta_1l']  = {   'name': 'Lepton_eta[0]',            #   variable name    
                        'range' : (10,-5,5),    #   variable range
                        'xaxis' : '#eta _{1l} [GeV]',  #   x axis name
                        'fold' :3
                        }

variables['eta_2l']  = {   'name': 'Lepton_eta[1]',            #   variable name    
                        'range' : (10,-5,5),    #   variable range
                        'xaxis' : '#eta _{2l} [GeV]',  #   x axis name
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
                        'xaxis' : 'pT_{1j} [GeV]',  #   x axis name
                        'fold' :3
                        }

variables['pt_2j']  = {   'name': 'CleanJet_pt[1]',            #   variable name    
                        'range' : (20,0,300),    #   variable range
                        'xaxis' : 'pT_{2j} [GeV]',  #   x axis name
                        'fold' :3
                        }

variables['pt_3j']  = {   'name': 'Alt$(CleanJet_pt[2], 0)',            #   variable name    
                        'range' : (20,0,300),    #   variable range
                        'xaxis' : 'pT_{3j} [GeV]',  #   x axis name
                        'fold' :3
                        }
variables['eta_1j']  = {   'name': 'CleanJet_eta[0]',            #   variable name    
                        'range' : (10,-5,5),    #   variable range
                        'xaxis' : '#eta _{1j} [GeV]',  #   x axis name
                        'fold' :3
                        }

variables['eta_2j']  = {   'name': 'CleanJet_eta[1]',            #   variable name    
                        'range' : (10,-5,5),    #   variable range
                        'xaxis' : '#eta _{2j} [GeV]',  #   x axis name
                        'fold' :3
                        }
