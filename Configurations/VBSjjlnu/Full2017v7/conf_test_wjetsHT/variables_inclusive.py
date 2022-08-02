
res_cuts = [ c for c in cuts if 'res' in c]
boost_cuts = [ c for c in cuts if 'boost' in c]


variables['events']  = {   'name': '1',      
                        'range' : (1,0,2),  
                        'xaxis' : 'events', 
                        'fold' : 3
                        }



# # #leptons


variables['Lepton_pt'] = {   'name': 'Lepton_pt[0]',      
                        'range' : (40,0,500),  
                        'xaxis' : 'Lepton pt', 
                        'fold' : 3
                        }    

variables['jet1_pt'] = {   'name': 'Alt$(CleanJet_pt[0],-999)',      
                        'range' : (50,0,500),  
                        'xaxis' : 'Jet 1 pt', 
                        'fold' : 3
                        } 


#MET
# variables['PuppiMET'] = {   'name': 'PuppiMET_pt',      
#                         'range' : (30,0,300),  
#                         'xaxis' : 'PuppiMET_pt', 
#                         'fold' : 3
#                         }

# variables['PuppiMET_phi'] = {   'name': 'PuppiMET_phi',      
#                         'range' : (30,-3.14,3.14),  
#                         'xaxis' : 'PuppiMET_phi', 
#                         'fold' : 3
#      
#                    }

variables['LHE_HT_normbin'] = {'name': 'LHE_HT',      
                        'range' : ([0,70,100,200,400,600,800,1200,2500,3500], ) ,
                        'xaxis' : 'LHE HT', 
                        'fold' : 3
}

variables['LHE_HT_bins'] = {'name': 'LHE_HT',      
                        'range' : (list(range(0,1000,50))+ [1000, 1250, 1500, 1750, 2000, 2250, 2500, 3000, 3500], ) ,
                        'xaxis' : 'LHE HT', 
                        'fold' : 3
}

variables['LHE_HT_bins2'] = {'name': 'LHE_HT',      
                        'range' : (list(range(0,1000,100))+ [1000, 1250, 1500, 1750, 2000, 2250, 2500, 3000, 3500], ) ,
                        'xaxis' : 'LHE HT', 
                        'fold' : 3
}

variables['LHE_HT_lessbins'] = {'name': 'LHE_HT',      
                        'range' : (40, 0, 3500),  
                        'xaxis' : 'LHE HT', 
                        'fold' : 3
}

# variables['LHE_HT'] = {'name': 'LHE_HT',      
#                         'range' : (50, 0, 3500),  
#                         'xaxis' : 'LHE HT', 
#                         'fold' : 3
# }

variables['LHE_HT_morebins'] = {'name': 'LHE_HT',      
                        'range' : (80, 0, 3500),  
                        'xaxis' : 'LHE HT', 
                        'fold' : 3
}

variables['LHE_HT_morebins2'] = {'name': 'LHE_HT',      
                        'range' : (350, 0, 3500),  
                        'xaxis' : 'LHE HT', 
                        'fold' : 3
}

variables['LHE_HT_zoom'] = {'name': 'LHE_HT',      
                        'range' : (100, 0, 1000),  
                        'xaxis' : 'LHE HT', 
                        'fold' : 3
}

variables['LHE_HT_zoom_lessbins'] = {'name': 'LHE_HT',      
                        'range' : (50, 0, 1000),  
                        'xaxis' : 'LHE HT', 
                        'fold' : 3
}

variables['LHE_HT_zoom_morebins'] = {'name': 'LHE_HT',      
                        'range' : ([0,10,30,40,50,60] +  list(range(60, 1500,5)),   ),  
                        'xaxis' : 'LHE HT', 
                        'fold' : 3
}


variables['LHE_Vpt'] = {'name': 'LHE_Vpt',      
                        'range' : (50, 0, 800),  
                        'xaxis' : 'LHE V pt', 
                        'fold' : 3
}

variables['LHE_Vpt_zoom'] = {'name': 'LHE_Vpt',      
                        'range' : (50, 0, 400),  
                        'xaxis' : 'LHE V pt', 
                        'fold' : 3
}

variables['LHE_Vpt_zoom2'] = {'name': 'LHE_Vpt',      
                        'range' : (50, 0, 200),  
                        'xaxis' : 'LHE V pt', 
                        'fold' : 3
}

#jets 
variables['nJets'] = {   'name': 'Sum$(CleanJet_pt[CleanJetNotFat_jetIdx] >= 30)',      
                        'range' : (8,2,10),  
                        'xaxis' : 'nJets cleaned from Ak8 >= 30 GeV', 
                        'fold' : 3
                        }
