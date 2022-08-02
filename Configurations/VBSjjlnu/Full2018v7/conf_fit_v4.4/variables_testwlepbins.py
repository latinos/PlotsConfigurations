##############################################
# now variables to plot
# Include also variables to be plotted

res_cuts = [ c for c in cuts if 'res' in c]
boost_cuts = [ c for c in cuts if 'boost' in c]
sig_cuts =  [ c for c in cuts if 'sig' in c]

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


# variables['DNNoutput_boost'] = {
#     'name': 'DNNoutput_boosted',
#     'range': ([0., 0.05, 0.1, 0.15, 0.20, 0.25, 0.3, 0.35, 0.4, 0.55, 0.7, 0.85, 1.],),
#     'xaxis': 'DNN boosted',
#     'fold': 3 ,
#     'cuts': boost_cuts,
#     'divideByBinWidth': True,
#     'blind': { c:[0.6,1] for c in cuts if "_sig_" in c} ,
# }
#####################
#Fit variables

variables['fit_bins_res'] ={  'name' : 'fit_bin_res',
                            'range' : (10,1,11),
                            'xaxis' : 'W leptonic Pt', 
                            'fold' : 0,
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

variables['vbs_1_pt_res_lessbins'] = {   'name': 'vbs_1_pt',      
                        'range' : (14,30,200),  
                        'xaxis' : 'trailing VBS jet pt', 
                        'fold' : 3,
} 

variables['vbs_1_pt_res'] = {   'name': 'vbs_1_pt',      
                        'range' : (20,30,230),  
                        'xaxis' : 'trailing VBS jet pt', 
                        'fold' : 3,
} 

variables['vbs_1_pt_res_morebins'] = {   'name': 'vbs_1_pt',      
                        'range' : (30,30,230),  
                        'xaxis' : 'trailing VBS jet pt', 
                        'fold' : 3,
} 

variables['deltaeta_vbs'] = {   'name': 'deltaeta_vbs',      
                        'range' : (20,2.5,8.5),  
                        'xaxis' : '#Delta#eta VBS jets', 
                        'fold' : 3,
                        }    

