# variables

#variables = {}

import os.path

wpsFile = "wps.py"


if os.path.exists(wpsFile) :
  handle = open(wpsFile,'r')
  exec(handle)
  handle.close()
else:
  print "!!! ERROR file ", wpsFile, " does not exist."
'''
variables['events']  = {   'name': '1',      
                        'range' : (1,0,2),  
                        'xaxis' : 'events', 
                         'fold' : 3
                        }
    
variables['mll']  = {   'name': 'mll',            #   variable name    
                        'range' : (50,0,200),    #   variable range
                        'xaxis' : 'm_{ll} [GeV]',  #   x axis name
                         'fold' : 0
                        }

variables['mth']  = {   'name': 'mth',            #   variable name    
                        'range' : (7,50,200),    #   variable range
                        'xaxis' : 'm_{T}^{H} [GeV]',  #   x axis name
                         'fold' : 0
                        }
'''                        
variables['flavor_1'] = {'name': '(std_vector_jet_HadronFlavour[0]==4 || std_vector_jet_HadronFlavour[0]==5)',
                        'range' : (2,0,2),
                        'xaxis' : 'flavor_j1',
                        'fold'  : 0}

variables['flavor_2'] = {'name': '(std_vector_jet_HadronFlavour[1]==4 || std_vector_jet_HadronFlavour[1]==5)',
                        'range' : (2,0,2),
                        'xaxis' : 'flavor_j2',
                        'fold'  : 0} 

variables['flavor_3'] = {'name': '(std_vector_jet_HadronFlavour[2]==4 || std_vector_jet_HadronFlavour[2]==5)',
                        'range' : (2,0,2),
                        'xaxis' : 'flavor_j3',
                        'fold'  : 0}
                        
for ialgo, algo in enumerate(algos):
  variables[nicknames[ialgo]+'_1'] = {
                                      'name': 'std_vector_jet_'+algo+'[0]',
                                      'range' : (20,-1,1),
                                      'xaxis' : nicknames[ialgo]+" jet 1st",
                                      'fold'  : 0
                                      }
  variables[nicknames[ialgo]+'_2'] = {
                                      'name': 'std_vector_jet_'+algo+'[1]',
                                      'range' : (20,-1,1),
                                      'xaxis' : nicknames[ialgo]+" jet 2nd",
                                      'fold'  : 0
                                      } 
  variables[nicknames[ialgo]+'_3'] = {
                                      'name': 'std_vector_jet_'+algo+'[2]',
                                      'range' : (20,-1,1),
                                      'xaxis' : nicknames[ialgo]+" jet 3nd",
                                      'fold'  : 0
                                      }
  wp = wps[nicknames[ialgo]]
  for wpname in wp.keys():
    variables[nicknames[ialgo]+wpname+'_1']  = {
                                              'name': 'std_vector_jet_'+algo+'[0]',
                                              'range' : ([-1, wp[wpname], 1],),
                                              'xaxis' : nicknames[ialgo]+' jet 1st',
                                              'fold'  : 0
                                              }
    variables[nicknames[ialgo]+wpname+'_2']  = {
                                              'name': 'std_vector_jet_'+algo+'[1]',
                                              'range' : ([-1, wp[wpname], 1],),
                                              'xaxis' : nicknames[ialgo]+' jet 2nd',
                                              'fold'  : 0
                                              }  
    variables[nicknames[ialgo]+wpname+'_3']  = {
                                              'name': 'std_vector_jet_'+algo+'[2]',
                                              'range' : ([-1, wp[wpname], 1],),
                                              'xaxis' : nicknames[ialgo]+' jet 3nd',
                                              'fold'  : 0
                                              }  
    

'''

variables['njet']  = {
                        'name': 'njet',     
                        'range' : (5,0,5),   
                        'xaxis' : 'Number of jets',
                        'fold' : 2   # 0 = not fold (default), 1 = fold underflowbin, 2 = fold overflow bin, 3 = fold underflow and overflow
                        }




variables['jetpt1']  = {
                        'name': 'std_vector_jet_pt[0]',     
                        'range' : (20,0,200),   
			#'range' : (5,0,30),
                        'xaxis' : 'p_{T} 1st jet',
                        'fold' : 2   # 0 = not fold (default), 1 = fold underflowbin, 2 = fold overflow bin, 3 = fold underflow and overflow
                        }

variables['jetpt2']  = {
                        'name': 'std_vector_jet_pt[1]',     
                        'range' : (20,0,200),   
#			'range' : (5,0,30),
                        'xaxis' : 'p_{T} 2nd jet',
                        'fold' : 2   # 0 = not fold (default), 1 = fold underflowbin, 2 = fold overflow bin, 3 = fold underflow and overflow
                        }
'''                        
