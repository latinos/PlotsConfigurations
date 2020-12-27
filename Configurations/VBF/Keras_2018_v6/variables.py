# variables

#variables = {}
    
#'fold' : # 0 = not fold (default), 1 = fold underflowbin, 2 = fold overflow bin, 3 = fold underflow and overflow

'''
variables['vbftree'] = {
    'tree': {
        'vbfdnn': 'vbfdnn'
    }
}



#DEFAULT
variables['classvbf'] = { 
     'name': 'vbfdnn',
     'range' : ([0.25,0.4,0.5,0.55,0.6,0.65,0.7,0.75,0.8,0.85,0.9,1.0],),
     'xaxis' : 'DNN discriminant vbf',
     'fold'  : 3,
}

#S=2,B=8,E=0.3
variables['classvbf'] = { 
     'name': 'vbfdnn',
     'range' : ([0, 0.475, 0.535, 0.575, 0.605, 0.635, 0.655, 0.675, 0.695, 0.715, 0.735, 0.755, 0.775, 0.805, 0.855, 1],),
     'xaxis' : 'DNN discriminant vbf',
     'fold'  : 3,
}
'''
#S=5,B=10,E=0.2
variables['classvbf'] = { 
     'name': 'vbfdnn',
     'range' : ([0,0.545,0.635,0.695,0.745,0.785,1.],),
     'xaxis' : 'DNN discriminant vbf',
     'fold'  : 3,
}


variables['classtop'] = { 
     'name': 'topdnn',
     'range' : (15,0.25,1.),
     'xaxis' : 'DNN discriminant top',
     'fold'  : 3,
}

variables['classww'] = { 
     'name': 'wwdnn',
     'range' : (15,0.25,1.),
     'xaxis' : 'DNN discriminant ww',
     'fold'  : 3,
}
'''
#S=2,B=8,E=0.3
variables['classggh'] = { 
     'name': 'gghdnn',
     'range' : ([0.,0.425, 0.455, 0.485, 0.505, 0.535, 0.565, 0.585, 0.605, 0.625, 0.645, 0.665, 0.685, 0.705, 0.725, 0.745, 0.765, 0.785, 0.805, 0.845,1.],),
     'xaxis' : 'DNN discriminant ggh',
     'fold'  : 3,
}
'''

#S=5,B=10,E=0.2
variables['classggh'] = { 
     'name': 'gghdnn',
     'range' : ([0.,0.485, 0.555, 0.615, 0.665, 0.715, 0.775, 0.865, 1.],),
     'xaxis' : 'DNN discriminant ggh',
     'fold'  : 3,
}
'''
#DEFAULT
variables['classggh'] = { 
     'name': 'gghdnn',
     'range' : ([0.25,0.4,0.5,0.55,0.6,0.65,0.7,0.75,0.8,0.85,0.9,1.0],),
     'xaxis' : 'DNN discriminant ggh',
     'fold'  : 3,
}





variables['Ctot'] = {
     'name': 'log((abs(2*Lepton_eta[0]-CleanJet_eta[0]-CleanJet_eta[1])+abs(2*Lepton_eta[1]-CleanJet_eta[0]-CleanJet_eta[1]))/detajj)',
     'range' : (20,-4.,6.),
     #'range' : (15,0.25,1.),
     'xaxis' : 'Ctot',
     'fold'  : 3,
}

variables['mlj12'] = {
     'name': 'mlj(Lepton_pt[0], Lepton_eta[0], Lepton_phi[0], CleanJet_pt[0], CleanJet_eta[0], CleanJet_phi[0])',
     'range' : (28,0.,1400.),
     #'range' : (15,0.25,1.),
     'xaxis' : 'mlj12',
     'fold'  : 3,
}
'''
'''
variables['class0'] = {
     'name': 'evaluate_multiclass(Entry$,0)',
     'range' : ([0.25,0.4,0.5,0.55,0.6,0.65,0.7,0.75,0.8,0.85,0.9,1.0],),
     'xaxis' : 'MVA discriminant vbf',
     'fold' : 3,
     'linesToAdd' : ['.L /afs/cern.ch/work/r/rceccare/CMSSW_10_6_4/src/PlotsConfigurations/Configurations/VBF/Keras_2017_v6/evaluate_multiclass.C+']
}

variables['class1'] = {
     'name': 'evaluate_multiclass(Entry$,1)',
     'range' : (15,0.25,1.),
     'xaxis' : 'MVA discriminant top',
     'fold' : 3,
     'linesToAdd' : ['.L /afs/cern.ch/work/r/rceccare/CMSSW_10_6_4/src/PlotsConfigurations/Configurations/VBF/Keras_2017_v6/evaluate_multiclass.C+']
}
variables['class2'] = {
     'name': 'evaluate_multiclass(Entry$,2)',
     'range' : (15,0.25,1.),
     'xaxis' : 'MVA discriminant ww',
     'fold' : 3,
     'linesToAdd' : ['.L /afs/cern.ch/work/r/rceccare/CMSSW_10_6_4/src/PlotsConfigurations/Configurations/VBF/Keras_2017_v6/evaluate_multiclass.C+']
}
variables['class3'] = {
     'name': 'evaluate_multiclass(Entry$,3)',
     'range' : (15,0.25,1.),
     'xaxis' : 'MVA discriminant ggh',
     'fold' : 3,
     'linesToAdd' : ['.L /afs/cern.ch/work/r/rceccare/CMSSW_10_6_4/src/PlotsConfigurations/Configurations/VBF/Keras_2017_v6/evaluate_multiclass.C+']
}
'''



variables['events']  = {   'name': '1',      
                        'range' : (1,0,2),  
                        'xaxis' : 'events', 
                         'fold' : 3
                        }


#variables['mll_optim']  = { 'name': 'mll',            #   variable name
#                            'range' : ([12,30,50,70,90,110,150,200],),    #   variable range
#                            'xaxis' : 'mll [GeV]',  #   x axis name
#                            'fold' : 3,
#                            'doWeight' : 1,
#                            'binX'     : 1,
#                            'binY'     : 7
#                          }
#
#variables['mjj']  = {  'name': 'mjj',
#                       'range': (20,200,1000),  #for 500 < mjj < 1000
#                       #'range': (20,0,200),  #for 500 < mjj < 1000
#                     # 'range': (15,1000,2000),  #for  mjj > 1000
#                       'xaxis': 'mjj [GeV]',
#                       'fold': 0
#                       }
#
#
#
#variables['detajj']  = {  'name': 'detajj',
#                       'range': (7,0.0,3.5),
#                     # 'range': (10,3.5,8.5),
#                       'xaxis': 'detajj',
#                       'fold': 3
#                       }
#
#variables['ptll']  = {  'name': 'ptll',            #   variable name
#                        'range' : (20,30,200),    #   variable range
#                        'xaxis' : 'ptll [GeV]',  #   x axis name
#                        'fold' : 3
#                        }
#
#
#variables['pt1']  = {   'name': 'std_vector_lepton_pt[0]',     
#                        'range' : (40,0,100),   
#                        'xaxis' : 'p_{T} 1st lep',
#                        'fold'  : 3                         
#                        }
#
#variables['pt2']  = {   'name': 'std_vector_lepton_pt[1]',     
#                        'range' : (40,0,100),   
#                        'xaxis' : 'p_{T} 2nd lep',
#                        'fold'  : 3                         
#                        }
#
#
#variables['drll']  = {   'name': 'drll',     
#                        'range' : (40,0,3.15),   
#                        'xaxis' : '#Delta R_{ll}',
#                        'fold'  : 3                         
#                        }
#
#
#variables['jetpt1']  = {   'name': 'std_vector_jet_pt[0]',     
#                        #'range' : (40,0,100),   
#                        'range' : (10,30,200),   
#                        'xaxis' : 'p_{T} 1st jet',
#                        'fold'  : 0                        
#                        }
#
#variables['jetpt2']  = {   'name': 'std_vector_jet_pt[1]',     
#                        #'range' : (40,0,100),   
#                        'range' : (10,30,200),   
#                        'xaxis' : 'p_{T} 2nd jet',
#                        'fold'  : 0                        
#                        }
