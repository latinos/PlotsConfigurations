
##############################################
# now variables to plot
# Include also variables to be plotted



variables['events']  = {   'name': '1',      
                        'range' : (1,0,2),  
                        'xaxis' : 'events', 
                        'fold' : 3
                        }

########################3

#jets 
variables['nJets'] = {   'name': 'nJets30',      
                        'range' : (8,2,10),  
                        'xaxis' : 'nJets cleaned from Ak8 >= 30 GeV', 
                        'fold' : 3
                        }

variables['nJets_notAK8cleaned'] = {   'name': 'Sum$(CleanJet_pt >= 30)',      
                        'range' : (8,2,10),  
                        'xaxis' : 'nJets  >= 30 GeV', 
                        'fold' : 3
                        }