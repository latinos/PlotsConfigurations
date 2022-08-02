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
                        'range' : (40,0,600),  
                        'xaxis' : 'Pt W leptonic', 
                        'fold' : 3
                        }

variables['whad_pt_boost'] = {  'name': "w_had_pt",
                                'range': (20, 200, 600),
                                'xaxis': 'W hadronic Pt',
                                'fold': 3 ,
                                'cuts': boost_cuts
                            }


variables['deltaeta_vbs'] = {   'name': 'deltaeta_vbs',      
                        'range' : (20,2.5,8.5),  
                        'xaxis' : '#Delta#eta VBS jets', 
                        'fold' : 3,
                        }    


variables['mjj_vjet_res'] = {   'name': 'mjj_vjet',      
                        'range' : (30,65,105),  
                        'xaxis' : 'Whad reco mass', 
                        'fold' : 3,
                        'cuts' : [c for c in res_cuts if 'wjetcr' not in c] 
                        }

variables['mjj_vjet_boost'] = {   'name': 'mjj_vjet',      
                        'range' : (15,70,115),  
                        'xaxis' : 'Whad reco mass', 
                        'fold' : 3,
                        'cuts' : [c for c in boost_cuts  if 'wjetcr' not  in c] 
                        }


variables['mjj_vbs'] = {   'name': 'mjj_vbs',      
                        'range' : (25,500,3500) , 
                        'xaxis' : 'M_{jj} VBS', 
                        'fold' : 3,
                        #'blind':  { c: [1500,3000] for c in cuts if 'sig' in c} ,
                    }

variables['nJets_res'] = {   'name': 'nJets30',      
                        'range' : (6,4,10),  
                        'xaxis' : 'nJets cleaned from Ak8 >= 30 GeV', 
                        'fold' : 3,
                        'cuts': res_cuts
                        }

variables['nJets_boost'] = {   'name': 'nJets30',      
                        'range' : (6,2,8),  
                        'xaxis' : 'nJets cleaned from Ak8 >= 30 GeV', 
                        'fold' : 3,
                        'cuts': boost_cuts
                        }

variables['Zlep'] = {   'name': 'Zlep',      
                        'range' : (30,-1,1),  
                        'xaxis' : 'Zepp. lepton', 
                        'fold' : 3
                        }

variables['Zvjets_0'] = {   'name': 'Zvjets_0',      
                        'range' : (20,-1,1),  
                        'xaxis' : 'Zepp. first vjet', 
                        'fold' : 3
                        }


variables['vbs_0_qgl_res'] = {  'name': 'vbs_0_qgl_res',
                        'range': (26,-0.04,1.),
                        'xaxis': 'Qgl VBS 0 jet',
                        'fold': 3,
                        'cuts': res_cuts
                }

variables['vjet_0_qgl_res'] = {  'name': 'vjet_0_qgl_res',
                        'range': (26,-0.04,1.),
                        'xaxis': 'Qgl Vjet 0 jet',
                        'fold': 3,
                        'cuts': res_cuts
                }

variables['vjet_1_qgl_res'] = {  'name': 'vjet_1_qgl_res',
                        'range': (26,-0.04,1.),
                        'xaxis': 'Qgl Vjet 1 jet',
                        'fold': 3,
                        'cuts': res_cuts
                }


variables['vbs_0_qgl_boost'] = {  'name': 'vbs_0_qgl_boost',
                        'range': (26,-0.04,1.),
                        'xaxis': 'Qgl VBS 0 jet',
                        'fold': 3,
                        'cuts': boost_cuts
                }


variables['vbs_0_pt'] = {   'name': 'vbs_0_pt',      
                        'range' : (35,50,400),  
                        'xaxis' : 'trailing VBS jet pt', 
                        'fold' : 3
                        } 

variables['vbs_1_pt_res'] = {   'name': 'vbs_1_pt',      
                        'range' : (30,30,400),  
                        'xaxis' : 'trailing VBS jet pt', 
                        'fold' : 3,
                        'cuts': res_cuts
                        } 

variables['vbs_1_pt_boost'] = {   'name': 'vbs_1_pt',      
                        'range' : (15,30,200),  
                        'xaxis' : 'trailing VBS jet pt', 
                        'fold' : 3,
                        'cuts': boost_cuts
                        } 

variables['vjet_0_pt'] = {   'name': 'vjet_0_pt',      
                        'range' : (20,30,200),  
                        'xaxis' : 'leading V-jet pt', 
                        'fold' : 3,
                        'cuts': res_cuts
                        }


variables['vjet_1_pt'] = {   'name': 'vjet_1_pt',      
                        'range' : (20,30,100),  
                        'xaxis' : 'trailing V-jet pt', 
                        'fold' : 3,
                        'cuts': res_cuts
                        }


variables['deltaphi_vbs'] = {   'name': 'deltaphi_vbs',      
                        'range' : (20,0,3.14),  
                        'xaxis' : '#Delta#phi VBS jets', 
                        'fold' : 3
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



variables['Centr_ww'] = {   'name': 'Centr_ww',      
                        'range' : (30,-3,3),  
                        'xaxis' : 'W boson centrality', 
                        'fold' : 3
                        }


variables['deltaeta_vjet'] = {   'name': 'deltaeta_vjet',      
                        'range' : (20,0,2.5),  
                        'xaxis' : '#Delta#eta V jets', 
                        'fold' : 3,
                        'cuts': res_cuts
                        }   
