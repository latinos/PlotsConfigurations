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


variables['DNNoutput_res_v1'] = {
    'name': 'DNNoutput_resolved_v1',
    'range': (25,0.,1),
    'xaxis': 'DNN resolved',
    'fold': 3 ,
    'cuts':  res_cuts,
    'divideByBinWidth': True, 
    'blind': { c:[0.6,1] for c in cuts if "_sig_" in c},
}


# variables['DNNoutput_res_v2'] = {
#     'name': 'DNNoutput_resolved_v2',
#     'range': (25,0.,1),
#     'xaxis': 'DNN output, resolved',
#     'fold': 3 ,
#     'cuts':  res_cuts,
#     'blind': { c:[0.6,1] for c in cuts if "_sig_" in c},
# }


variables['DNNoutput_boost'] = {
    'name': 'DNNoutput_boosted',
    'range': ([0., 0.05, 0.1, 0.15, 0.20, 0.25, 0.3, 0.35, 0.4, 0.55, 0.7, 0.85, 1.],),
    'xaxis': 'DNN boosted',
    'fold': 3 ,
    'cuts': boost_cuts,
    'divideByBinWidth': True,
    'blind': { c:[0.6,1] for c in cuts if "_sig_" in c} ,
}

#####################
#Fit variables

variables['fit_bins_res'] ={  'name' : 'w_lep_pt',
                            'range' : ([0,100,200,300,400,500,700],),
                            'xaxis' : 'W leptonic Pt', 
                            'fold' : 3,
                            'cuts': res_cuts
}   

variables['fit_bins_boost'] ={  'name' : 'w_lep_pt',
                            'range' : ([0,75,150,250,400,700],),
                            'xaxis' : 'W leptonic Pt', 
                            'fold' : 3,
                            'cuts': boost_cuts
}   

######################

variables['w_lep_pt'] = {   'name': 'w_lep_pt',      
                        'range' : (50,0,700),  
                        'xaxis' : 'Pt W leptonic', 
                        'fold' : 3
                        }

# variables['whad_pt_boost'] = {  'name': "w_had_pt",
#                                 'range': (30, 200, 900),
#                                 'xaxis': 'W hadronic Pt',
#                                 'fold': 3 ,
#                                 'cuts': boost_cuts
#                             }


variables['deltaeta_vbs'] = {   'name': 'deltaeta_vbs',      
                        'range' : (20,2.5,8.5),  
                        'xaxis' : '#Delta#eta VBS jets', 
                        'fold' : 3,
                        }    


variables['mjj_vjet_res'] = {   'name': 'mjj_vjet',      
                        'range' : (40,65,105),  
                        'xaxis' : 'Whad reco mass', 
                        'fold' : 3,
                        'cuts' : [c for c in res_cuts if 'wjetcr' not in c] 
                        }

variables['mjj_vjet_boost'] = {   'name': 'mjj_vjet',      
                        'range' : (40,70,115),  
                        'xaxis' : 'Whad reco mass', 
                        'fold' : 3,
                        'cuts' : [c for c in boost_cuts  if 'wjetcr' not  in c] 
                        }


variables['mjj_vbs'] = {   'name': 'mjj_vbs',      
                        'range' : (30,250,3000) , 
                        'xaxis' : 'M_{jj} VBS', 
                        'fold' : 3,
                        #'blind':  { c: [1500,3000] for c in cuts if 'sig' in c} ,
                    }

variables['nJets'] = {   'name': 'nJets30',      
                        'range' : (8,2,10),  
                        'xaxis' : 'nJets cleaned from Ak8 >= 30 GeV', 
                        'fold' : 3
                        }

# variables['nJetsBtag'] = {   'name': 'nJetsBtag',      
#                         'range' : (8,2,10),  
#                         'xaxis' : 'nJets btaggable', 
#                         'fold' : 3
#                         }

variables['Zlep'] = {   'name': 'Zlep',      
                        'range' : (50,-1.1,1.1),  
                        'xaxis' : 'Zepp. lepton', 
                        'fold' : 3
                        }


# variables['vbs_0_qgl_res'] = {  'name': 'vbs_0_qgl_res',
#                         'range': (41,-0.025,1.),
#                         'xaxis': 'Qgl VBS 0 jet',
#                         'fold': 3,
#                         'cuts': boost_cuts
#                 }

# variables['vjet_0_qgl_res'] = {  'name': 'vjet_0_qgl_res',
#                         'range': (41,-0.025,1.),
#                         'xaxis': 'Qgl Vjet 0 jet',
#                         'fold': 3,
#                         'cuts': res_cuts
#                 }

# variables['vjet_1_qgl_res'] = {  'name': 'vjet_1_qgl_res',
#                         'range': (41,-0.025,1.),
#                         'xaxis': 'Qgl Vjet 1 jet',
#                         'fold': 3,
#                         'cuts': res_cuts
#                 }


# variables['vbs_0_qgl_boost'] = {  'name': 'vbs_0_qgl_boost',
#                         'range': (41,-0.025,1.),
#                         'xaxis': 'Qgl VBS 0 jet',
#                         'fold': 3,
#                         'cuts': boost_cuts
#                 }


variables['vbs_1_pt'] = {   'name': 'vbs_1_pt',      
                        'range' : (40,30,400),  
                        'xaxis' : 'trailing VBS jet pt', 
                        'fold' : 3
                        } 


variables['vjet_0_pt'] = {   'name': 'vjet_0_pt',      
                        'range' : (40,30,400),  
                        'xaxis' : 'leading V-jet pt', 
                        'fold' : 3,
                        'cuts': res_cuts
                        }


# variables['vjet_1_pt'] = {   'name': 'vjet_1_pt',      
#                         'range' : (40,30,400),  
#                         'xaxis' : 'trailing V-jet pt', 
#                         'fold' : 3,
#                         'cuts': res_cuts
#                         }


# variables['deltaphi_vbs'] = {   'name': 'deltaphi_vbs',      
#                         'range' : (30,0,3.14),  
#                         'xaxis' : '#Delta#phi VBS jets', 
#                         'fold' : 3
#                         }

variables['deltaphi_vjet'] = {   'name': 'deltaphi_vjet',      
                        'range' : (30,0,3.14),  
                        'xaxis' : '#Delta#phi Vjet jets', 
                        'fold' : 3,
                        'cuts': res_cuts
                        }

########################
# Look at allvars


# variables['vjet_0_eta_abs'] = {   'name': 'abs(vjet_0_eta)',      
#                         'range' : (30,0,5),  
#                         'xaxis' : 'leading Vjet #eta', 
#                         'fold' : 3
#                         }

# variables['vbs_0_eta_abs'] = {   'name': 'abs(vbs_0_eta)',      
#                         'range' : (30,0,5),  
#                         'xaxis' : 'leading VBS jet #eta', 
#                         'fold' : 3
#                         }

# variables['Lepton_eta_abs'] = {   'name': 'abs(Lepton_eta[0])',      
#                         'range' : (40,0,2.5),  
#                         'xaxis' : 'Lepton #eta', 
#                         'fold' : 3,
#                         'cuts': [c for c in cuts if 'ele' in c]
#                         }

# variables['Lepton_pt'] = {   'name': 'Lepton_pt[0]',      
#                         'range' : (40,0,500),  
#                         'xaxis' : 'Lepton pt', 
#                         'fold' : 3,
#                         'cuts': [c for c in cuts if 'ele' in c]
#                         }   


########################
                    
# variables['Centr_vbs'] = {   'name': 'Centr_vbs',      
#                         'range' : (30,0,2),  
#                         'xaxis' : 'VBS centrality', 
#                         'fold' : 3,
#                         'cuts': res_cuts
#                         }

# variables['Centr_ww'] = {   'name': 'Centr_ww',      
#                         'range' : (40,-4,4),  
#                         'xaxis' : 'W boson centrality', 
#                         'fold' : 3
#                         }




# variables['deltaeta_vjet'] = {   'name': 'deltaeta_vjet',      
#                         'range' : (25,0,5),  
#                         'xaxis' : '#Delta#eta V jets', 
#                         'fold' : 3,
#                         'cuts': res_cuts
#                         }   

# variables['mjj_vjet_wjet'] = {   'name': 'mjj_vjet',      
#                         'range' : (60,40,250),  
#                         'xaxis' : 'Whad reco mass', 
#                         'fold' : 3,
#                         'cuts' : [c for c in cuts if 'wjetcr' in c] 
#                         }