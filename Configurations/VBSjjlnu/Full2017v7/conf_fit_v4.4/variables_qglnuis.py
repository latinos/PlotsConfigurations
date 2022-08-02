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
    'name': 'DNNoutput_resolved_v1[0]',
    'range': (25,0.,1),
    'xaxis': 'DNN output, resolved',
    'fold': 3 ,
    'cuts':  res_cuts,
    'blind': { c:[0.6,1] for c in cuts if "_sig_" in c},
}

# variables['DNNoutput_boost'] = {
#     'name': 'DNNoutput_boosted[0]',
#     'range': ([0., 0.05, 0.1, 0.15, 0.20, 0.25, 0.3, 0.35, 0.4, 0.55, 0.7, 0.85, 1.],),
#     'xaxis': 'DNN output, boosted',
#     'fold': 3 ,
#     'cuts':  boost_cuts,
#     'blind': { c:[0.6,1] for c in cuts if "_sig_" in c},
# }


ivar = 0
for m in ["morphUp", "morphDown"]:
    for jtype in ["quark", "gluon"]:
      for  jeta in ["higheta", "loweta"]:
        ivar+=1
        mtype = "_".join([m,jtype,jeta])
        variables['DNNoutput_res_v1_'+mtype] = {
                'name': 'DNNoutput_resolved_v1['+str(ivar)+']',
                'range': (25,0.,1),
                'xaxis': 'DNN output, resolved v1, '+mtype,
                'fold': 3 ,
                'cuts':  res_cuts,
                'blind': { c:[0.6,1] for c in cuts if "_sig_" in c},
            }
        # variables['DNNoutput_boost_'+mtype] = {
        #         'name': 'DNNoutput_boosted['+str(ivar)+']',
        #         'range': ([0., 0.05, 0.1, 0.15, 0.20, 0.25, 0.3, 0.35, 0.4, 0.55, 0.7, 0.85, 1.],),
        #         'xaxis': 'DNN output, boosted, '+mtype,
        #         'fold': 3 ,
        #         'cuts':  boost_cuts,
        #         'blind': { c:[0.6,1] for c in cuts if "_sig_" in c},
        #     }
        #qgl
        variables['vbs_0_qgl_res_'+mtype] = {  'name': 'vbs_0_qgl_res_'+mtype,
                                'range': (26,-0.04,1.),
                                'xaxis': 'Qgl VBS 0 jet'+mtype,
                                'fold': 3,
                                'cuts': res_cuts
                        }

        variables['vjet_0_qgl_res_'+mtype] = {  'name': 'vjet_0_qgl_res_'+mtype,
                                'range': (26,-0.04,1.),
                                'xaxis': 'Qgl Vjet 0 jet'+mtype,
                                'fold': 3,
                                'cuts': res_cuts
                        }

        variables['vjet_1_qgl_res_'+mtype] = {  'name': 'vjet_1_qgl_res_' +mtype,
                                'range': (26,-0.04,1.),
                                'xaxis': 'Qgl Vjet 1 jet'+mtype,
                                'fold': 3,
                                'cuts': res_cuts
                        }

        variables['vbs_0_qgl_boost_'+mtype] = {  'name': 'vbs_0_qgl_boost_' +mtype,
                                'range': (26,-0.04,1.),
                                'xaxis': 'Qgl VBS 0 jet'+mtype,
                                'fold': 3,
                                'cuts': boost_cuts
                        }
        

##################### 




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

# #############