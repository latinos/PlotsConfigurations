
##############################################
# now variables to plot
# Include also variables to be plotted

variables['events']  = {   'name': '1',      
                        'range' : (1,0,2),  
                        'xaxis' : 'events', 
                        'fold' : 3
                        }

variables['events']  = {   'name': '1',      
                        'range' : (1,0,2),  
                        'xaxis' : 'events', 
                        'fold' : 3,
                        'weight': 'btagSF'
                        }

########################3



variables['nJetsBtag'] = {   'name': 'nJetsBtag',      
                        'range' : (8, 2, 10),  
                        'xaxis' : 'N jets btaggable', 
                        'fold' : 3,
                        }


variables['nJetsBtag_btagSF'] = {   'name': 'nJetsBtag',      
                        'range' : (8, 2, 10),  
                        'xaxis' : 'N jets btaggable', 
                        'fold' : 3,
                        'weight': 'btagSF'
                        }


#jets 
variables['nJets'] = {   'name': 'nJets30',      
                        'range' : (8,2,10),  
                        'xaxis' : 'nJets cleaned from Ak8 >= 30 GeV', 
                        'fold' : 3
                        }

variables['nJets_btagSF'] = {   'name': 'nJets30',      
                        'range' : (8,2,10),  
                        'xaxis' : 'nJets cleaned from Ak8 >= 30 GeV', 
                        'fold' : 3,
                         'weight': 'btagSF'
                        }

