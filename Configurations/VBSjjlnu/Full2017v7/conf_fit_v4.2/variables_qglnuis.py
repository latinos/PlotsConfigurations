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


variables['DNNoutput_res_bins2'] = {
    'name': 'DNNoutput_resolved[0]',
    'range': (25,0.,1),
    'xaxis': 'DNN output, resolved',
    'fold': 3 ,
    'cuts':  res_cuts,
    'blind': { c:[0.6,1] for c in cuts if "_sig_" in c},
}

# variables['DNNoutput_res_bins2_qglmorphup'] = {
#     'name': 'DNNoutput_resolved[1]',
#     'range': (25,0.,1),
#     'xaxis': 'DNN output, resolved',
#     'fold': 3 ,
#     'cuts':  res_cuts,
#     'blind': { c:[0.6,1] for c in cuts if "_sig_" in c},
# }

# variables['DNNoutput_res_bins2_qglmorphdo'] = {
#     'name': 'DNNoutput_resolved[2]',
#     'range': (25,0.,1),
#     'xaxis': 'DNN output, resolved',
#     'fold': 3 ,
#     'cuts':  res_cuts,
#     'blind': { c:[0.6,1] for c in cuts if "_sig_" in c},
# }

##################### 

variables['DNNoutput_boost_bins2'] = {
    'name': 'DNNoutput_boosted[0]',
    'range': ([0.05, 0.1, 0.15, 0.20, 0.25, 0.3, 0.35, 0.4, 0.55, 0.7, 0.85, 1.],),
    'xaxis': 'DNN output, boosted',
    'fold': 3 ,
    'cuts': boost_cuts,
    'blind': { c:[0.6,1] for c in cuts if "_sig_" in c} ,
}


# variables['DNNoutput_boost_bins2_qglmorphup'] = {
#     'name': 'DNNoutput_boosted[1]',
#     'range': ([0.05, 0.1, 0.15, 0.20, 0.25, 0.3, 0.35, 0.4, 0.55, 0.7, 0.85, 1.],),
#     'xaxis': 'DNN output, boosted',
#     'fold': 3 ,
#     'cuts': boost_cuts,
#     'blind': { c:[0.6,1] for c in cuts if "_sig_" in c} ,
# }



# variables['DNNoutput_boost_bins2_qglmorphdo'] = {
#     'name': 'DNNoutput_boosted[2]',
#     'range': ([0.05, 0.1, 0.15, 0.20, 0.25, 0.3, 0.35, 0.4, 0.55, 0.7, 0.85, 1.],),
#     'xaxis': 'DNN output, boosted',
#     'fold': 3 ,
#     'cuts': boost_cuts,
#     'blind': { c:[0.6,1] for c in cuts if "_sig_" in c} ,
# }




variables['vbs_0_qgl_res'] = {  'name': 'vbs_0_qgl_res',
                        'range': (40,0.,1.),
                        'xaxis': 'Qgl VBS 0 jet',
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

variables['vbs_0_qgl_boost'] = {  'name': 'vbs_0_qgl_boost',
                        'range': (40,0.,1.),
                        'xaxis': 'Qgl VBS 0 jet',
                        'fold': 3,
                        'cuts': boost_cuts
                }

# #############



# variables['vbs_0_qgl_res_up'] = {  'name': 'vbs_0_qgl_res_up',
#                         'range': (40,0.,1.),
#                         'xaxis': 'Qgl VBS 0 jet - morphUp',
#                         'fold': 3,
#                         'cuts': res_cuts
#                 }

# variables['vjet_0_qgl_res_up'] = {  'name': 'vjet_0_qgl_res_up',
#                         'range': (40,0.,1.),
#                         'xaxis': 'Qgl Vjet 0 jet - morphUp',
#                         'fold': 3,
#                         'cuts': res_cuts
#                 }

# variables['vjet_1_qgl_res_up'] = {  'name': 'vjet_1_qgl_res_up',
#                         'range': (40,0.,1.),
#                         'xaxis': 'Qgl Vjet 1 jet - morphUp',
#                         'fold': 3,
#                         'cuts': res_cuts
#                 }

# variables['vbs_0_qgl_boost_up'] = {  'name': 'vbs_0_qgl_boost_up',
#                         'range': (40,0.,1.),
#                         'xaxis': 'Qgl VBS 0 jet - morphUp',
#                         'fold': 3,
#                         'cuts': boost_cuts
#                 }

# ############


# variables['vbs_0_qgl_res_do'] = {  'name': 'vbs_0_qgl_res_do',
#                         'range': (40,0.,1.),
#                         'xaxis': 'Qgl VBS 0 jet - morphDo',
#                         'fold': 3,
#                         'cuts': res_cuts
#                 }

# variables['vjet_0_qgl_res_do'] = {  'name': 'vjet_0_qgl_res_do',
#                         'range': (40,0.,1.),
#                         'xaxis': 'Qgl Vjet 0 jet - morphDo',
#                         'fold': 3,
#                         'cuts': res_cuts
#                 }

# variables['vjet_1_qgl_res_do'] = {  'name': 'vjet_1_qgl_res_do',
#                         'range': (40,0.,1.),
#                         'xaxis': 'Qgl Vjet 1 jet - morphDo',
#                         'fold': 3,
#                         'cuts': res_cuts
#                 }

# variables['vbs_0_qgl_boost_do'] = {  'name': 'vbs_0_qgl_boost_do',
#                         'range': (40,0.,1.),
#                         'xaxis': 'Qgl VBS 0 jet - morphDo',
#                         'fold': 3,
#                         'cuts': boost_cuts
#                 }
