
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


variables['Lepton_eta_abs'] = {   'name': 'abs(Lepton_eta[0])',      
                        'range' : (40,0,2.5),  
                        'xaxis' : 'Lepton #eta', 
                        'fold' : 3
                        }

variables['Lepton_eta'] = {   'name': 'Lepton_eta[0]',      
                        'range' : (60,-2.5,2.5),  
                        'xaxis' : 'Lepton #eta', 
                        'fold' : 3
                        }


variables['Lepton_pt'] = {   'name': 'Lepton_pt[0]',      
                        'range' : (40,0,500),  
                        'xaxis' : 'Lepton pt', 
                        'fold' : 3
                        }    


variables['Lepton_pt_zoom'] = {   'name': 'Lepton_pt[0]',      
                        'range' : (40,0,200),  
                        'xaxis' : 'Lepton pt', 
                        'fold' : 3
                        }    


#MET
variables['PuppiMET'] = {   'name': 'PuppiMET_pt',      
                        'range' : (40,0,300),  
                        'xaxis' : 'PuppiMET_pt', 
                        'fold' : 3
                        }

#jets 
variables['nJets'] = {   'name': 'nJets30',      
                        'range' : (8,2,10),  
                        'xaxis' : 'nJets cleaned from Ak8 >= 30 GeV', 
                        'fold' : 3
                        }


variables['nvtx_good'] = {  'name': 'PV_npvsGood',
                        'range': (100, 0,100),
                        'xaxis': 'N. primary vertices (good)',
                        'fold': 3
                }
