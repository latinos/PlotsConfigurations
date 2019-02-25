# variables

#variables = {}
    
#'fold' : # 0 = not fold (default), 1 = fold underflowbin, 2 = fold overflow bin, 3 = fold underflow and overflow
#variables['mlljj'] = { 'name': 'mlljj(std_vector_lepton_pt[0],std_vector_lepton_eta[0],std_vector_lepton_phi[0],std_vector_lepton_pt[1],std_vector_lepton_eta[1],std_vector_lepton_phi[1],std_vector_jet_pt[0],std_vector_jet_eta[0],std_vector_jet_phi[0],std_vector_jet_mass[0],std_vector_jet_pt[1],std_vector_jet_eta[1],std_vector_jet_phi[1],std_vector_jet_mass[1])',
#                       'range' : (10,0,400),
#                       'xaxis' : "m_{2l,jj}",
#                       'fold' : 3,
#                       'linesToAdd' : ['.L /afs/cern.ch/work/a/arun/Latinos/HWW_Full2016/CMSSW_9_4_6_patch1/src/PlotsConfigurations/Configurations/WH_SS/Full2016/macros/mlljj.C++']
#                    }
#variables['mlljj_v1'] = { 'name': 'mlljj_v1(*std_vector_lepton_pt,*std_vector_lepton_eta,*std_vector_lepton_phi,*std_vector_jet_pt,*std_vector_jet_eta,*std_vector_jet_phi,*std_vector_jet_mass,njet)',
#                       'range' : (10,0,400),
#                       'xaxis' : "m_{2l,jj}",
#                       'fold' : 3,
#                       'linesToAdd' : ['.L /afs/cern.ch/work/a/arun/Latinos/HWW_Full2016/CMSSW_9_4_6_patch1/src/PlotsConfigurations/Configurations/WH_SS/Full2016/macros/mlljj_v1.C+']
#                    }
#
#variables['detall'] = { 'name': 'detall(std_vector_lepton_eta[0],std_vector_lepton_eta[1])',
#                       'range' : (10,0,5),
#                       'xaxis' : "#Delta#eta_{ll}",
#                       'fold' : 3,
#                       'linesToAdd' : ['.L /afs/cern.ch/work/a/arun/Latinos/HWW_Full2016/CMSSW_9_4_6_patch1/src/PlotsConfigurations/Configurations/WH_SS/Full2016/macros/detall.C+']
#                    }
#variables['maxmtw'] = { 'name': 'maxmtw(mtw1,mtw2)',
#                       'range' : (20,0.,200.),
#                       'xaxis' : "Max m_{T}^{w}",
#                       'fold' : 3,
#                       'linesToAdd' : ['.L /afs/cern.ch/work/a/arun/Latinos/HWW_Full2016/CMSSW_9_4_6_patch1/src/PlotsConfigurations/Configurations/WH_SS/Full2016/macros/maxmtw.C+']
#                    }
#
#variables['minmtw'] = { 'name': 'minmtw(mtw1,mtw2)',
#                       'range' : (20,0.,200.),
#                       'xaxis' : "Min m_{T}^{w}",
#                       'fold' : 3,
#                       'linesToAdd' : ['.L /afs/cern.ch/work/a/arun/Latinos/HWW_Full2016/CMSSW_9_4_6_patch1/src/PlotsConfigurations/Configurations/WH_SS/Full2016/macros/minmtw.C+']
#                    }

variables['events']  = {   'name': '1',      
                        'range' : (1,0,2),  
                        'xaxis' : 'events', 
                         'fold' : 3
                        }

# variables['njet']  = {   'name': 'njet',
                       # 'range' : (6,0,6),
                       # 'xaxis' : 'njets',
                        # 'fold' : 3
                       # }


# variables['nlep'] =  {
                # 'name': '1*(std_vector_lepton_pt[0]>20) + 1*(std_vector_lepton_pt[1]>20) + 1*(std_vector_lepton_pt[2]>20)+ 1*(std_vector_lepton_pt[3]>20) + 1*(std_vector_lepton_pt[4]>20)',
                # 'range': (5,0,5),
                # 'xaxis': '# leptons',
                # 'fold': 3
        # }

# variables['nele'] =  {
                # 'name': '1*(std_vector_lepton_pt[0]>20 && abs(std_vector_lepton_flavour[0])==11) + 1*(std_vector_lepton_pt[1]>20 && abs(std_vector_lepton_flavour[1])==11) + 1*(std_vector_lepton_pt[2]>20 && abs(std_vector_lepton_flavour[2])==11)+ 1*(std_vector_lepton_pt[3]>20 && abs(std_vector_lepton_flavour[3])==11) + 1*(std_vector_lepton_pt[4]>20 && abs(std_vector_lepton_flavour[4])==11)',
                # 'range': (5,0,5),
                # 'xaxis': '# electrons',
                # 'fold': 3
        # }


# variables['nmu'] =  {
                # 'name': '1*(std_vector_lepton_pt[0]>20 && abs(std_vector_lepton_flavour[0])==13) + 1*(std_vector_lepton_pt[1]>20 && abs(std_vector_lepton_flavour[1])==13) + 1*(std_vector_lepton_pt[2]>20 && abs(std_vector_lepton_flavour[2])==13)+ 1*(std_vector_lepton_pt[3]>20 && abs(std_vector_lepton_flavour[3])==13) + 1*(std_vector_lepton_pt[4]>20 && abs(std_vector_lepton_flavour[4])==13)',
                # 'range': (5,0,5),
                # 'xaxis': '# muons',
                # 'fold': 3
        # }

# variables['mll']  = {   'name': 'mll',            #   variable name
                       # 'range' : (10, 0. ,200),    #   variable range
                       # 'xaxis' : 'mll [GeV]',  #   x axis name
                       # 'fold' : 3
                       # }


# variables['mjj']  = {  'name': 'mjj',
                      # 'range': (10,0.,600),  #for 500 < mjj < 1000
                      # 'xaxis': 'mjj [GeV]',
                      # 'fold': 3
                      # }

# variables['pt1']  = {   'name': 'std_vector_lepton_pt[0]',     
                       # 'range' : (10,0.,150),      
                       # 'xaxis' : 'p_{T} 1st lep',
                       # 'fold'  : 3                         
                       # }

# variables['pt2']  = {   'name': 'std_vector_lepton_pt[1]',        
                       # 'range' : (20,0.,100),   
                       # 'xaxis' : 'p_{T} 2nd lep',
                       # 'fold'  : 3                         
                       # }

# variables['jetpt1']  = {   'name': 'std_vector_jet_pt[0]',        
                       # 'range' : (15,0.,200),   
                       # 'xaxis' : 'p_{T} 1st jet',
                       # 'fold'  : 3                        
                       # }

# variables['jetpt2']  = {   'name': 'std_vector_jet_pt[1]',     
                       # 'range' : (40,0.,100),   
                       # 'xaxis' : 'p_{T} 2nd jet',
                       # 'fold'  : 3                       
                       # }


# variables['met']  = {   'name': 'metPfType1',            #   variable name    
                       # 'range' : (10,0,200),    #   variable range
                       # 'xaxis' : 'pfmet [GeV]',  #   x axis name
                       # 'fold' : 3
                       # }

# variables['etaj1'] = {  'name': 'std_vector_jet_eta[0]',
                       # 'range': (10,-5,5),
                       # 'xaxis': 'etaj1',
                       # 'fold': 3
                       # }

# variables['etaj2'] = {         'name': 'std_vector_jet_eta[1]',
                       # 'range': (10,-5,5),
                              # 'xaxis': 'etaj2',
                              # 'fold': 3
                              # }

# variables['detajj']  = {  'name': 'detajj',
                      # 'range': (7,0.0,7.0),
                      # 'xaxis': 'detajj',
                      # 'fold': 3
                      # }

# variables['Zlep1']  = {  'name': '(std_vector_lepton_eta[0] - (std_vector_jet_eta[0]+std_vector_jet_eta[1])/2)/detajj',
                      # 'range': (10,-1.5,1.5),
                      # 'xaxis': 'Z^{lep}_{1}',
                      # 'fold': 3
                      # }

# variables['Zlep2']  = {  'name': '(std_vector_lepton_eta[1] - (std_vector_jet_eta[0]+std_vector_jet_eta[1])/2)/detajj',
                      # 'range': (10,-1.5,1.5),
                      # 'xaxis': 'Z^{lep}_{2}',
                      # 'fold': 3
                      # }

# variables['csvv2ivf_1']  = { 
                        # 'name': 'std_vector_jet_csvv2ivf[0]',     
                        # 'range' : (10,0,1),   
                        # 'xaxis' : 'csvv2ivf 1st jet ',
                        # 'fold'  : 3                         
                        # }



# variables['csvv2ivf_2']  = { 
                        # 'name': 'std_vector_jet_csvv2ivf[1]',     
                        # 'range' : (10,0,1),   
                        # 'xaxis' : 'csvv2ivf 2nd jet ',
                        # 'fold'  : 3                         
                        # }









# variables['m2ljj20']  = {  'name': 'm2ljj20',
#                        'range': (25,100.,600),  #for 500 < mjj < 1000
#                        'xaxis': 'm2ljj [GeV]',
#                        'fold': 0
#                        }


#variables['m2ljj20_lessBins']  = {  'name': 'm2ljj20',
#                       'range': (10,0.,400),  #for 500 < mjj < 1000
#                       'xaxis': 'm2ljj [GeV]',
#                       'fold': 0
#                       }
#
#variables['m2ljj20_lowR']  = {  'name': 'm2ljj20',
#                       'range': (10,0.,200),  #for 500 < mjj < 1000
#                       'xaxis': 'm2ljj [GeV]',
#                       'fold': 0
#                       }
#
#variables['mTllMET']  = {  'name': 'mTi',
#                       'range': (10,0.,200),  #for 500 < mjj < 1000
#                       'xaxis': 'm2ljj [GeV]',
#                       'fold': 0
#                       }
#
#variables['dphilmet1']  = {   'name': 'abs(dphilmet1)',
#                        'range' : (20,0,3.14),
#                        'xaxis' : '#Delta#phi_{l1,met}',
#                        'fold' : 3
#                        }
#
#variables['dphilmet2']  = {   'name': 'abs(dphilmet2)',
#                        'range' : (20,0,3.14),
#                        'xaxis' : '#Delta#phi_{l2,met}',
#                        'fold' : 3
#                        }
#
#variables['dphijj']  = {   'name': 'abs(dphijj)',
#                        'range' : (20,0,3.14),
#                        'xaxis' : '#Delta#phi_{j1,j2}',
#                        'fold' : 3
#                        }
#
#variables['pTWW']  = {   'name': 'pTWW',
#                        'range' : (25,0.,200.),
#                        'xaxis' : 'pT_{WW}',
#                        'fold' : 3
#                        }
#
#variables['dphillmet']  = {   'name': 'abs(dphillmet)',
#                        'range' : (20,0,3.14),
#                        'xaxis' : '#Delta#phi_{ll,met}',
#                        'fold' : 3
#                        }
#
#variables['yll']  = {   'name': 'yll',
#                        'range' : (20,-2.5,2.5),
#                        'xaxis' : 'y_{ll}',
#                        'fold' : 3
#                        }
#
#variables['mR']  = {   'name': 'mR',
#                        'range' : (25,0.,150.),
#                        'xaxis' : 'm_{R}',
#                        'fold' : 3
#                        }
#
#variables['dphijet1met']  = {   'name': 'abs(dphijet1met)',
#                        'range' : (20,0,3.14),
#                        'xaxis' : '#Delta#phi_{jet1,met}',
#                        'fold' : 3
#                        }
#
#
#variables['dphijet2met']  = {   'name': 'abs(dphijet2met)',
#                        'range' : (20,0,3.14),
#                        'xaxis' : '#Delta#phi_{jet2,met}',
#                        'fold' : 3
#                        }
#
#variables['dphijjmet']  = {   'name': 'abs(dphijjmet)',
#                        'range' : (20,0,3.14),
#                        'xaxis' : '#Delta#phi_{jj,met}',
#                        'fold' : 3
#                        }
#
#variables['mcoll']  = {   'name': 'mcoll',
#                        'range' : (40,0.,400.),
#                        'xaxis' : 'mcoll',
#                        'fold' : 3
#                        }
#
#variables['mcollWW']  = {   'name': 'mcollWW',
#                        'range' : (40,0.,400.),
#                        'xaxis' : 'mcoll_{WW}',
#                        'fold' : 3
#                        }
#
#variables['pTllMET']  = {   'name': 'recoil',
#                        'range' : (40,0.,200.),
#                        'xaxis' : 'pT(ll,MET)',
#                        'fold' : 3
#                        }
#
#variables['dphilep1jet1']  = {   'name': 'abs(dphilep1jet1)',
#                        'range' : (20,0,3.14),
#                        'xaxis' : '#Delta#phi_{l1,jet1}',
#                        'fold' : 3
#                        }
#variables['dphilep1jet2']  = {   'name': 'abs(dphilep1jet2)',
#                        'range' : (20,0,3.14),
#                        'xaxis' : '#Delta#phi_{l1,jet2}',
#                        'fold' : 3
#                        }
#
#variables['dphilep2jet1']  = {   'name': 'abs(dphilep2jet1)',
#                        'range' : (20,0,3.14),
#                        'xaxis' : '#Delta#phi_{l2,jet1}',
#                        'fold' : 3
#                        }
#
#variables['dphilep2jet2']  = {   'name': 'abs(dphilep2jet2)',
#                        'range' : (20,0,3.14),
#                        'xaxis' : '#Delta#phi_{l2,jet2}',
#                        'fold' : 3
#                        }
#



#
#variables['ptll']  = {  'name': 'ptll',            #   variable name
#                        'range' : (20,0,200),    #   variable range
#                        'xaxis' : 'ptll [GeV]',  #   x axis name
#                        'fold' : 3
#                        }
#variables['drll']  = {   'name': 'drll',     
#                        'range' : (10,0,5.0),   
#                        'xaxis' : '#Delta R_{ll}',
#                        'fold'  : 3                         
#                        }

#
#

#variables['projmet']  = {   'name': 'projpfmet',            #   variable name    
#                        'range' : (25,0,100),    #   variable range
#                        'xaxis' : 'projpfmet [GeV]',  #   x axis name
#                        'fold' : 0
#                        }
#
# variables['ht']  = {   'name': 'ht',            #   variable name    
#                        'range' : (25,0,400),    #   variable range
#                        'xaxis' : 'HT [GeV]',  #   x axis name
#                        'fold' : 0
#                        }
#
#variables['mllThird']  = {   'name': 'mllThird',            #   variable name    
#                        'range' : (25,0,100),    #   variable range
#                        'xaxis' : 'mllThird [GeV]',  #   x axis name
#                        'fold' : 0
#                        }
#
#variables['mllOneThree']  = {   'name': 'mllOneThree',            #   variable name    
#                        'range' : (25,0,100),    #   variable range
#                        'xaxis' : 'mllOneThree [GeV]',  #   x axis name
#                        'fold' : 0
#                        }
#
#variables['mllTwoThree']  = {   'name': 'mllTwoThree',            #   variable name    
#                        'range' : (25,0,100),    #   variable range
#                        'xaxis' : 'mllTwoThree [GeV]',  #   x axis name
#                        'fold' : 0
#                        }
