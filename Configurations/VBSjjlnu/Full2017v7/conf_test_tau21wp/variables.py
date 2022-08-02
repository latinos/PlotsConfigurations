##############################################
# now variables to plot
# Include also variables to be plotted

res_cuts = [ c for c in cuts if 'res' in c]
boost_cuts = [ c for c in cuts if 'boost' in c]


variables['events']  = {   'name': '1',      
                        'range' : (1,0,2),  
                        'xaxis' : 'events', 
                        'fold' : 3
                        }

########################

variables['tau21']  = {   'name': 'tau21',      
                        'range' : (20,0,1),  
                        'xaxis' : 'Tau21', 
                        'fold' : 3
                        }


variables['fatjet_pt']  = {   'name': 'Alt$(FatJet_pt_nom[0], -1)',      
                        'range' : (25,180,500),  
                        'xaxis' : 'FatJet pt', 
                        'fold' : 3
                        }


variables['fatjet_eta']  = {   'name': 'Alt$(FatJet_eta[0], -999)',      
                        'range' : (25,-2.4,2.4),  
                        'xaxis' : 'FatJet eta', 
                        'fold' : 0
                        } 

variables['fatjet_mass']  = {   'name': 'Alt$(FatJet_msoftdrop_nom[0], -1)',      
                        'range' : (25,0,500),  
                        'xaxis' : 'FatJet mass', 
                        'fold' : 3,
                        'cuts' : [ 'incl']
                        }


variables['fatjet_mas_zoom']  = {   'name': 'Alt$(FatJet_msoftdrop_nom[0], -1)',      
                        'range' : (25,40,250),  
                        'xaxis' : 'FatJet mass', 
                        'fold' : 3,
                        'cuts' : [ 'masscut']
                        }