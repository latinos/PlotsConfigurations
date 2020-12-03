
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

########################3


# # #leptons

variables['Lepton_eta_abs'] = {   'name': 'abs(Lepton_eta[0])',      
                        'range' : (40,0,2.5),  
                        'xaxis' : 'Lepton #eta', 
                        'fold' : 3
                        }

variables['Lepton_eta'] = {   'name': 'Lepton_eta[0]',      
                        'range' : (50,-2.5,2.5),  
                        'xaxis' : 'Lepton #eta', 
                        'fold' : 3
                        }


variables['Lepton_pt'] = {   'name': 'Lepton_pt[0]',      
                        'range' : (40,0,500),  
                        'xaxis' : 'Lepton pt', 
                        'fold' : 3
                        }    


variables['Lepton_pt'] = {   'name': 'Lepton_pt[0]',      
                        'range' : (40,0,200),  
                        'xaxis' : 'Lepton pt', 
                        'fold' : 0
                        }    

#MET
variables['PuppiMET'] = {   'name': 'PuppiMET_pt',      
                        'range' : (20,0,30),  
                        'xaxis' : 'PuppiMET_pt', 
                        'fold' : 3
                        }


variables['Mtw_lep_zoom'] = {   'name': 'mtw1',      
                        'range' : (20,0,20),  
                        'xaxis' : 'Mass T W leptonic', 
                        'fold' : 3
                        }


variables['Mtw_lep'] = {   'name': 'mtw1',      
                        'range' : (40,0,200),  
                        'xaxis' : 'Mass T W leptonic', 
                        'fold' : 3
                        }