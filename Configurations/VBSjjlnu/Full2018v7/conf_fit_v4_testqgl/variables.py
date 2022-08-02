
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

variables['DNNoutput_res_bins1'] = {
    'name': 'DNNoutput',
    'range': (15,0.,1),
    'xaxis': 'DNN output, resolved',
    'fold': 3 ,
    'cuts':  res_cuts,
    'blind': { c:[0.7,1] for c in cuts if "_sig_" in c},
}

variables['DNNoutput_res_bins2'] = {
    'name': 'DNNoutput',
    'range': (30,0.,1),
    'xaxis': 'DNN output, resolved',
    'fold': 3 ,
    'cuts':  res_cuts,
    'blind': { c:[0.7,1] for c in cuts if "_sig_" in c},
}

variables['DNNoutput_res_bins3'] = {
    'name': 'DNNoutput',
    'range': (40,0.,1),
    'xaxis': 'DNN output, resolved',
    'fold': 3 ,
    'cuts':  res_cuts,
    'blind': { c:[0.7,1] for c in cuts if "_sig_" in c},
}


##################### 

variables['DNNoutput_boost_bins1'] = {
    'name': 'DNNoutput_boosted',
    'range': (20,0.,1),
    'xaxis': 'DNN output, boosted',
    'fold': 3 ,
    'cuts': boost_cuts,
    'blind': { c:[0.7,1] for c in cuts if "_sig_" in c} ,
}

variables['DNNoutput_boost_bins2'] = {
    'name': 'DNNoutput_boosted',
    'range': ([0.05, 0.1, 0.15, 0.20, 0.25, 0.3, 0.35, 0.4, 0.55, 0.7, 0.85, 1.],),
    'xaxis': 'DNN output, boosted',
    'fold': 3 ,
    'cuts': boost_cuts,
    'blind': { c:[0.7,1] for c in cuts if "_sig_" in c} ,
}
#####################
#Fit variables


#######
# QGL vars 

variables['vbs_0_qgl_boost'] = {  'name': 'vbs_0_qgl_boost',
                        'range': (40,0.,1.),
                        'xaxis': 'Qgl VBS 0 jet',
                        'fold': 3,
                        'cuts': boost_cuts
                }

variables['vbs_1_qgl_boost'] = {  'name': 'vbs_1_qgl_boost',
                        'range': (40,0.,1.),
                        'xaxis': 'Qgl VBS 1 jet',
                        'fold': 3,
                        'cuts': boost_cuts
                }

variables['vbs_0_qgl_res'] = {  'name': 'vbs_0_qgl_res',
                        'range': (40,0.,1.),
                        'xaxis': 'Qgl VBS 0 jet',
                        'fold': 3,
                        'cuts': res_cuts
                }

variables['vbs_1_qgl_res'] = {  'name': 'vbs_1_qgl_res',
                        'range': (40,0.,1.),
                        'xaxis': 'Qgl VBS 1 jet',
                        'fold': 3,
                        'cuts': res_cuts
                }

variables['vjet_0_qgl_res'] = {  'name': 'vjet_0_qgl_res',
                        'range': (40,0.,1.),
                        'xaxis': 'Qgl Vjet 0 jet',
                        'fold': 3,
                        'cuts': res_cuts
                }

variables['vjet_1_qgl_res'] = {  'name': 'vjet_1_qgl_res',
                        'range': (40,0.,1.),
                        'xaxis': 'Qgl Vjet 1 jet',
                        'fold': 3,
                        'cuts': res_cuts
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

variables['vbs_1_qglmorphed_res'] = {  'name': 'vbs_1_qglmorphed_res',
                        'range': (40,0.,1.),
                        'xaxis': 'Qgl VBS 1 jet - morphed',
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
