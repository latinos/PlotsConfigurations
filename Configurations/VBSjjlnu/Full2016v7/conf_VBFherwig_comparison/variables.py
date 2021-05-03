##############################################
# now variables to plot
# Include also variables to be plotted

variables['events']  = {   'name': '1',      
                        'range' : (1,0,2),  
                        'xaxis' : 'events', 
                        'fold' : 3
                        }

########################

variables['nJets'] = {   'name': 'nJets30',      
                        'range' : (10,0,10),  
                        'xaxis' : 'nJets cleaned from Ak8 >= 30 GeV', 
                        'fold' : 3,
                        }

variables['jet1_pt'] = {   'name': 'CleanJet_pt[0]',      
                        'range' : (30,15,500),  
                        'xaxis' : 'Pt first jet', 
                        'fold' : 3,
} 

variables['jet2_pt'] = {   'name': 'CleanJet_pt[1]',      
                        'range' : (30,15,300),  
                        'xaxis' : 'Pt second jet', 
                        'fold' : 3,
} 

variables['jet3_pt'] = {   'name': 'CleanJet_pt[3]',      
                        'range' : (30,15,200),  
                        'xaxis' : 'Pt first jet', 
                        'fold' : 3,
} 

variables['jet1_eta'] = {   'name': 'CleanJet_eta[0]',      
                        'range' : (30,-4.5,4.5),  
                        'xaxis' : 'eta first jet', 
                        'fold' : 3,
} 

variables['jet2_eta'] = {   'name': 'CleanJet_eta[1]',      
                        'range' : (30,-4.5,4.5),  
                        'xaxis' : 'eta second jet', 
                        'fold' : 3,
} 

variables['jet3_eta'] = {   'name': 'CleanJet_eta[3]',      
                        'range' : (30,-4.5,4.5),  
                        'xaxis' : 'Pt first jet', 
                        'fold' : 3,
} 


######################

variables['w_lep_pt'] = {   'name': 'w_lep_pt',      
                        'range' : (40,0,600),  
                        'xaxis' : 'Pt W leptonic', 
                        'fold' : 3,
                        'cuts': [c for c in cuts if "vbs" in c]
                        }



variables['vbs_1_pt_res'] = {   'name': 'vbs_1_pt',      
                        'range' : (15,30,250),  
                        'xaxis' : 'trailing VBS jet pt', 
                        'fold' : 3,
                        'cuts': [c for c in cuts if "vbs" in c]
} 




variables['deltaeta_vbs'] = {   'name': 'deltaeta_vbs',      
                        'range' : (20,2.5,8.5),  
                        'xaxis' : '#Delta#eta VBS jets', 
                        'fold' : 3,
                        'cuts': [c for c in cuts if "vbs" in c]
                        }    


variables['mjj_vjet'] = {   'name': 'mjj_vjet',      
                        'range' : (30,65,105),  
                        'xaxis' : 'Whad reco mass', 
                        'fold' : 3,
                        'cuts': [c for c in cuts if "vbs" in c]
                        }


variables['mjj_vbs'] = {   'name': 'mjj_vbs',      
                        'range' : (25,500,3500) , 
                        'xaxis' : 'M_{jj} VBS', 
                        'fold' : 3,
                        'cuts': [c for c in cuts if "vbs" in c]
                        #'blind':  { c: [1500,3000] for c in cuts if 'sig' in c} ,
                    }




variables['Zlep'] = {   'name': 'Zlep',      
                        'range' : (25,-1,1),  
                        'xaxis' : 'Zepp. lepton', 
                        'fold' : 3,
                        'cuts': [c for c in cuts if "vbs" in c]
                        }



variables['vbs_0_pt'] = {   'name': 'vbs_0_pt',      
                        'range' : (35,50,400),  
                        'xaxis' : 'trailing VBS jet pt', 
                        'fold' : 3,
                        'cuts': [c for c in cuts if "vbs" in c]
                        } 


variables['vjet_0_pt'] = {   'name': 'vjet_0_pt',      
                        'range' : (20,30,180),  
                        'xaxis' : 'leading V-jet pt', 
                        'fold' : 3,
                        'cuts': [c for c in cuts if "vbs" in c]
                        }


variables['whad_pt_boost'] = {  'name': "w_had_pt",
                                'range': (20, 200, 600),
                                'xaxis': 'W hadronic Pt',
                                'fold': 3 ,
                                'cuts': [c for c in cuts if "vbs" in c]
                            }


variables['vjet_1_pt'] = {   'name': 'vjet_1_pt',      
                        'range' : (20,30,100),  
                        'xaxis' : 'trailing V-jet pt', 
                        'fold' : 3,
                        'cuts': [c for c in cuts if "vbs" in c]
                        }


variables['deltaphi_vbs'] = {   'name': 'deltaphi_vbs',      
                        'range' : (20,0,3.14),  
                        'xaxis' : '#Delta#phi VBS jets', 
                        'fold' : 3,
                        'cuts': [c for c in cuts if "vbs" in c]
                        }


variables['Lepton_eta'] = {   'name': 'Lepton_eta[0]',      
                        'range' : (30,-2.5,2.5),  
                        'xaxis' : 'Lepton #eta', 
                        'fold' : 3
                        }

variables['Lepton_pt'] = {   'name': 'Lepton_pt[0]',      
                        'range' : (20,25,400),  
                        'xaxis' : 'Lepton pt', 
                        'fold' : 3
                        }   

