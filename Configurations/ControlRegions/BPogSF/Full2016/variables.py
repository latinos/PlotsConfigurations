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

variables['events']  = {   'name': '1',      
                        'range' : (1,0,2),  
                        'xaxis' : 'events', 
                         'fold' : 3
                        }
    
for ialgo, algo in enumerate(algos):
  variables[nicknames[ialgo]+'_1'] = {
                                      'name': 'std_vector_jet_'+algo+'[0]',
                                      'range' : (20,-1,1),
                                      'xaxis' : nicknames[ialgo]+" jet 1st",
                                      'fold'  : 3
                                      }
  variables[nicknames[ialgo]+'_2'] = {
                                      'name': 'std_vector_jet_'+algo+'[1]',
                                      'range' : (20,-1,1),
                                      'xaxis' : nicknames[ialgo]+" jet 2nd",
                                      'fold'  : 3
                                      } 
  wp = wps[nicknames[ialgo]]
  for wpname in wp.keys():
    variables[nicknames[ialgo]+wpname+'_1']  = {
                                              'name': 'std_vector_jet_'+algo+'[0]',
                                              'range' : ([-1, wp[wpname], 1],),
                                              'xaxis' : nicknames[ialgo]+' jet 1st',
                                              'fold'  : 3
                                              }
    variables[nicknames[ialgo]+wpname+'_2']  = {
                                              'name': 'std_vector_jet_'+algo+'[1]',
                                              'range' : ([-1, wp[wpname], 1],),
                                              'xaxis' : nicknames[ialgo]+' jet 2nd',
                                              'fold'  : 3
                                              }  
