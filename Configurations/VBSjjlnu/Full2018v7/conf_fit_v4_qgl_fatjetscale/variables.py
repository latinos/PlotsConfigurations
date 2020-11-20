
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

# variables['DNNoutput_res'] = {
#     'name': 'DNNoutput',
#     'range': (40,0.,1),
#     'xaxis': 'DNN output, resolved',
#     'fold': 0 ,
#     'cuts':  res_cuts,
#     'blind': { c:[0.7,1] for c in cuts if "_sig_" in c},
# }

variables['DNNoutput_res_morebins1'] = {
    'name': 'DNNoutput',
    'range': (50,0.,1),
    'xaxis': 'DNN output, resolved',
    'fold': 0 ,
    'cuts':  res_cuts,
    'blind': { c:[0.7,1] for c in cuts if "_sig_" in c},
}



variables['DNNoutput_res_morebins2'] = {
    'name': 'DNNoutput',
    'range': (60,0.,1),
    'xaxis': 'DNN output, resolved',
    'fold': 0 ,
    'cuts':  res_cuts,
    'blind': { c:[0.7,1] for c in cuts if "_sig_" in c},
}



##################### 

variables['DNNoutput_boost'] = {
    'name': 'DNNoutput_boosted',
    'range': (20,0.,1),
    'xaxis': 'DNN output, boosted',
    'fold': 0 ,
    'cuts': boost_cuts,
    'blind': { c:[0.7,1] for c in cuts if "_sig_" in c} ,
}

# variables['DNNoutput_boost_morebins1'] = {
#     'name': 'DNNoutput_boosted',
#     'range': (25,0.,1),
#     'xaxis': 'DNN output, boosted',
#     'fold': 0 ,
#     'cuts': boost_cuts,
#     'blind': { c:[0.7,1] for c in cuts if "_sig_" in c} ,
# }


variables['DNNoutput_boost_morebins2'] = {
    'name': 'DNNoutput_boosted',
    'range': (30,0.,1),
    'xaxis': 'DNN output, boosted',
    'fold': 0 ,
    'cuts': boost_cuts,
    'blind': { c:[0.7,1] for c in cuts if "_sig_" in c} ,
}

#####################
#Fit variables


variables['fit_bins_res'] ={  'name' : 'vbs_jets_pt',
                            'range' : ([0,100,200,300,400,800 ],),
                            'xaxis' : 'VBS jets Pt bin', 
                            'fold' : 3,
                            'cuts': res_cuts
}   

variables['fit_bins_boost'] ={  'name' : 'fatjetpt_scaled',
                            'range' : ([200,300,400,600,1000],),
                            'xaxis' : 'V Fatjet Pt bin', 
                            'fold' : 3,
                            'cuts': boost_cuts
}   



#delta angles between the VBS jets
variables['deltaeta_vbs'] = {   'name': 'deltaeta_vbs',      
                        'range' : (18,2.5,9),  
                        'xaxis' : '#Delta#eta VBS jets', 
                        'fold' : 3,
                        }    


# VBS vars
variables['mjj_vbs'] = {   'name': 'mjj_vbs',      
                        'range' : (50,200,4000) , 
                        'xaxis' : 'M_{jj} VBS', 
                        'fold' : 3,
                        'blind':  [1500,4000]
}

variables['mjj_vjet_boost'] = {   'name': 'mjj_vjet',      
                        'range' : (60,40,250) , 
                        'xaxis' : 'M_{jj} V had', 
                        'fold' : 3,
                        'cuts':boost_cuts
}

variables['mjj_vjet_res'] = {   'name': 'mjj_vjet_scaled',      
                        'range' : (60,40,250) , 
                        'xaxis' : 'M_{jj} Vjets', 
                        'fold' : 3,
                        'cuts': res_cuts
}


variables['vbs_jets_pt'] = {  'name': 'tag_jets_systems_pt[0]',
                        'range': (50,0.,700),
                        'xaxis': 'Pt of VBS jets system',
                        'fold': 3
                }

variables['whad_pt_boost'] = {
            'name': "fatjetpt_scaled",
            'range': (40, 200, 900),
            'xaxis': 'V hadronic Pt',
            'fold': 3 ,
            'cuts': boost_cuts
}


################
#Remorphed varas

variables['vbs_0_qglmorphed_boost'] = {  'name': 'vbs_0_qglmorphed_boost',
                        'range': (40,0.,1.),
                        'xaxis': 'Qgl VBS 0 jet - morphed',
                        'fold': 3,
                        'cuts': boost_cuts
                }

variables['vbs_1_qglmorphed_boost'] = {  'name': 'vbs_1_qglmorphed_boost',
                        'range': (40,0.,1.),
                        'xaxis': 'Qgl VBS 1 jet - morphed',
                        'fold': 3,
                        'cuts': boost_cuts
                }

variables['vbs_0_qglmorphed_res'] = {  'name': 'vbs_0_qglmorphed_res',
                        'range': (40,0.,1.),
                        'xaxis': 'Qgl VBS 0 jet - morphed',
                        'fold': 3,
                        'cuts': res_cuts
                }


variables['vjet_0_qglmorphed_res'] = {  'name': 'vjet_0_qglmorphed_res',
                        'range': (40,0.,1.),
                        'xaxis': 'Qgl Vjet 0 jet - morphed',
                        'fold': 3,
                        'cuts': res_cuts
                }

variables['vjet_1_qglmorphed_res'] = {  'name': 'vjet_1_qglmorphed_res',
                        'range': (40,0.,1.),
                        'xaxis': 'Qgl Vjet 1 jet - morphed',
                        'fold': 3,
                        'cuts': res_cuts
                }
