
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

variables['DNNoutput_res_bins1'] = {
    'name': 'DNNoutput',
    'range': (40,0.,1),
    'xaxis': 'DNN output, resolved',
    'fold': 0 ,
    'cuts':  res_cuts,
    'blind': { c:[0.7,1] for c in cuts if "_sig_" in c},
}

variables['DNNoutput_res_bins2'] = {
    'name': 'DNNoutput',
    'range': (50,0.,1),
    'xaxis': 'DNN output, resolved',
    'fold': 0 ,
    'cuts':  res_cuts,
    'blind': { c:[0.7,1] for c in cuts if "_sig_" in c},
}

variables['DNNoutput_res_bins3'] = {
    'name': 'DNNoutput',
    'range': (60,0.,1),
    'xaxis': 'DNN output, resolved',
    'fold': 0 ,
    'cuts':  res_cuts,
    'blind': { c:[0.7,1] for c in cuts if "_sig_" in c},
}


##################### 

variables['DNNoutput_boost_bins1'] = {
    'name': 'DNNoutput_boosted',
    'range': (20,0.,1),
    'xaxis': 'DNN output, boosted',
    'fold': 0 ,
    'cuts': boost_cuts,
    'blind': { c:[0.7,1] for c in cuts if "_sig_" in c} ,
}

variables['DNNoutput_boost_bins2'] = {
    'name': 'DNNoutput_boosted',
    'range': (30,0.,1),
    'xaxis': 'DNN output, boosted',
    'fold': 0 ,
    'cuts': boost_cuts,
    'blind': { c:[0.7,1] for c in cuts if "_sig_" in c} ,
}


variables['DNNoutput_boost_bins3'] = {
    'name': 'DNNoutput_boosted',
    'range': (40,0.,1),
    'xaxis': 'DNN output, boosted',
    'fold': 0 ,
    'cuts': boost_cuts,
    'blind': { c:[0.7,1] for c in cuts if "_sig_" in c} ,
}

#####################
#Fit variables



variables['whad_pt_boost'] = {
            'name': "w_had_pt",
            'range': (40, 200, 900),
            'xaxis': 'W hadronic Pt',
            'fold': 3 ,
            'cuts': boost_cuts
}

#######
# QGL vars 

variables['w_lep_pt'] = {   'name': 'w_lep_pt',      
                        'range' : (40,0,600),  
                        'xaxis' : 'Pt W leptonic', 
                        'fold' : 3
                        }
#######
# QGL vars 

variables['vbs_0_qgl_boost'] = {  'name': 'vbs_0_qgl_boost',
                        'range': (55, -0.1,1.),
                        'xaxis': 'Qgl VBS 0 jet',
                        'fold': 3,
                        'cuts': boost_cuts
                }

variables['vbs_1_qgl_boost'] = {  'name': 'vbs_1_qgl_boost',
                        'range': (55, -0.1,1.),
                        'xaxis': 'Qgl VBS 1 jet',
                        'fold': 3,
                        'cuts': boost_cuts
                }

variables['vbs_0_qgl_res'] = {  'name': 'vbs_0_qgl_res',
                        'range': (55, -0.1,1.),
                        'xaxis': 'Qgl VBS 0 jet',
                        'fold': 3,
                        'cuts': res_cuts
                }

variables['vbs_1_qgl_res'] = {  'name': 'vbs_1_qgl_res',
                        'range': (55, -0.1,1.),
                        'xaxis': 'Qgl VBS 1 jet',
                        'fold': 3,
                        'cuts': res_cuts
                }

variables['vjet_0_qgl_res'] = {  'name': 'vjet_0_qgl_res',
                        'range': (55, -0.1,1.),
                        'xaxis': 'Qgl Vjet 0 jet',
                        'fold': 3,
                        'cuts': res_cuts
                }

variables['vjet_1_qgl_res'] = {  'name': 'vjet_1_qgl_res',
                        'range': (55, -0.1,1.),
                        'xaxis': 'Qgl Vjet 1 jet',
                        'fold': 3,
                        'cuts': res_cuts
                }

#####################

variables['vbs_0_qglmorphed_boost'] = {  'name': 'vbs_0_qglmorphed_boost',
                        'range': (55, -0.1,1.),
                        'xaxis': 'Qgl VBS 0 jet - morphed',
                        'fold': 3,
                        'cuts': boost_cuts
                }

variables['vbs_1_qglmorphed_boost'] = {  'name': 'vbs_1_qglmorphed_boost',
                        'range': (55, -0.1,1.),
                        'xaxis': 'Qgl VBS 1 jet - morphed',
                        'fold': 3,
                        'cuts': boost_cuts
                }

variables['vbs_0_qglmorphed_res'] = {  'name': 'vbs_0_qglmorphed_res',
                        'range': (55, -0.1,1.),
                        'xaxis': 'Qgl VBS 0 jet - morphed',
                        'fold': 3,
                        'cuts': res_cuts
                }

variables['vbs_1_qglmorphed_res'] = {  'name': 'vbs_1_qglmorphed_res',
                        'range': (55, -0.1,1.),
                        'xaxis': 'Qgl VBS 1 jet - morphed',
                        'fold': 3,
                        'cuts': res_cuts
                }

variables['vjet_0_qglmorphed_res'] = {  'name': 'vjet_0_qglmorphed_res',
                        'range': (55, -0.1,1.),
                        'xaxis': 'Qgl Vjet 0 jet - morphed',
                        'fold': 3,
                        'cuts': res_cuts
                }

variables['vjet_1_qglmorphed_res'] = {  'name': 'vjet_1_qglmorphed_res',
                        'range': (55, -0.1,1.),
                        'xaxis': 'Qgl Vjet 1 jet - morphed',
                        'fold': 3,
                        'cuts': res_cuts
                }
#####################


# variables['vbs_jets_pt'] = {  'name': 'tag_jets_systems_pt[0]',
#                         'range': (50,0.,700),
#                         'xaxis': 'Pt of VBS jets system',
#                         'fold': 3
#                 }


# variables['four_tag_jets_pt_boost'] = {  'name': 'tag_jets_systems_pt[1]',
#                         'range': (40,0.,600),
#                         'xaxis': 'Pt of VBS+FatJet system',
#                         'fold': 3,
#                         'cuts': boost_cuts
#                 }


# variables['four_tag_jets_lepton_HT'] = {  'name': 'tag_jets_systems_pt[5]',
#                         'range': (60,100.,1200),
#                         'xaxis': 'HT of VBS+V jets + Lepton system',
#                         'fold': 3
#                 }