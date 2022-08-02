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

# variables['DNNoutput_res_bins1'] = {
#     'name': 'DNNoutput',
#     'range': (15,0.,1),
#     'xaxis': 'DNN output, resolved',
#     'fold': 3 ,
#     'cuts':  res_cuts,
#     'blind': { c:[0.7,1] for c in cuts if "_sig_" in c},
# }

variables['DNNoutput_res_bins2'] = {
    'name': 'DNNoutput_resolved',
    'range': (25,0.,1),
    'xaxis': 'DNN output, resolved',
    'fold': 3 ,
    'cuts':  res_cuts,
    'blind': { c:[0.6,1] for c in cuts if "_sig_" in c},
}

# variables['DNNoutput_res_bins3'] = {
#     'name': 'DNNoutput',
#     'range': (30,0.,1),
#     'xaxis': 'DNN output, resolved',
#     'fold': 3 ,
#     'cuts':  res_cuts,
#     'blind': { c:[0.7,1] for c in cuts if "_sig_" in c},
# }


##################### 

# variables['DNNoutput_boost_bins1'] = {
#     'name': 'DNNoutput_boosted',
#     'range': (20,0.,1),
#     'xaxis': 'DNN output, boosted',
#     'fold': 3 ,
#     'cuts': boost_cuts,
#     'blind': { c:[0.7,1] for c in cuts if "_sig_" in c} ,
# }

variables['DNNoutput_boost_bins2'] = {
    'name': 'DNNoutput_boosted',
    'range': ([0.05, 0.1, 0.15, 0.20, 0.25, 0.3, 0.35, 0.4, 0.55, 0.7, 0.85, 1.],),
    'xaxis': 'DNN output, boosted',
    'fold': 3 ,
    'cuts': boost_cuts,
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

variables['whad_pt_boost'] = {  'name': "w_had_pt",
                                'range': (30, 200, 900),
                                'xaxis': 'W hadronic Pt',
                                'fold': 3 ,
                                'cuts': boost_cuts
                            }


variables['deltaeta_vbs'] = {   'name': 'deltaeta_vbs',      
                        'range' : (20,2.5,8.5),  
                        'xaxis' : '#Delta#eta VBS jets', 
                        'fold' : 3,
                        }    

variables['mjj_vjet'] = {   'name': 'mjj_vjet',      
                        'range' : (60,40,250),  
                        'xaxis' : 'Whad reco mass', 
                        'fold' : 3
                        }

variables['mjj_vbs_boost'] = {   'name': 'mjj_vbs',      
                        'range' : (30,250,3000) , 
                        'xaxis' : 'M_{jj} VBS', 
                        'fold' : 3,
                        'cuts': boost_cuts,
                        'blind':  { c: [1500,3000] for c in cuts if 'sig' in c} ,
                    }

variables['mjj_vbs_res'] = {   'name': 'mjj_vbs',      
                        'range' : (40,250,4000) , 
                        'xaxis' : 'M_{jj} VBS', 
                        'fold' : 3,
                        'cuts': res_cuts,
                        'blind':  { c: [2000,400] for c in cuts if 'sig' in c} ,
                        }

variables['nJets'] = {   'name': 'nJets30',      
                        'range' : (8,2,10),  
                        'xaxis' : 'nJets cleaned from Ak8 >= 30 GeV', 
                        'fold' : 3
                        }

variables['vjet_0_qgl_res'] = {  'name': 'vjet_0_qgl_res',
                        'range': (40,0.,1.),
                        'xaxis': 'Qgl Vjet 0 jet',
                        'fold': 3,
                        'cuts': res_cuts
                }

variables['vbs_0_qgl_boost'] = {  'name': 'vbs_0_qgl_boost',
                        'range': (40,0.,1.),
                        'xaxis': 'Qgl VBS 0 jet',
                        'fold': 3,
                        'cuts': boost_cuts
                }