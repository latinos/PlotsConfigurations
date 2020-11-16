
res_cuts = [ c for c in cuts if 'res' in c]
boost_cuts = [ c for c in cuts if 'boost' in c]


variables['events']  = {   'name': '1',      
                        'range' : (1,0,2),  
                        'xaxis' : 'events', 
                        'fold' : 3
                        }

variables['vbs_0_qgl_res'] = {  'name': 'vbs_0_qgl_res',
                        'range': (44,-0.1,1.),
                        'xaxis': 'Qgl VBS 0 jet',
                        'fold': 3,
                        'cuts': res_cuts
                }

variables['vbs_1_qgl_res'] = {  'name': 'vbs_1_qgl_res',
                        'range': (44,-0.1,1.),
                        'xaxis': 'Qgl VBS 1 jet',
                        'fold': 3,
                        'cuts': res_cuts
                }

variables['vjet_0_qgl_res'] = {  'name': 'vjet_0_qgl_res',
                        'range': (44,-0.1,1.),
                        'xaxis': 'Qgl Vjet 0 jet',
                        'fold': 3,
                        'cuts': res_cuts
                }

variables['vjet_1_qgl_res'] = {  'name': 'vjet_1_qgl_res',
                        'range': (44,-0.1,1.),
                        'xaxis': 'Qgl Vjet 1 jet',
                        'fold': 3,
                        'cuts': res_cuts
                }


variables['vbs_0_qgl_res_morebins'] = {  'name': 'vbs_0_qgl_res',
                        'range': (77,0.1,1.),
                        'xaxis': 'Qgl VBS 0 jet',
                        'fold': 3,
                        'cuts': res_cuts
                }

variables['vbs_1_qgl_res_morebins'] = {  'name': 'vbs_1_qgl_res',
                        'range': (77,-0.1,1.),
                        'xaxis': 'Qgl VBS 1 jet',
                        'fold': 3,
                        'cuts': res_cuts
                }

variables['vjet_0_qgl_res_morebins'] = {  'name': 'vjet_0_qgl_res',
                        'range': (77,-0.1,1.),
                        'xaxis': 'Qgl Vjet 0 jet',
                        'fold': 3,
                        'cuts': res_cuts
                }

variables['vjet_1_qgl_res_morebins'] = {  'name': 'vjet_1_qgl_res',
                        'range': (77,-0.1,1.),
                        'xaxis': 'Qgl Vjet 1 jet',
                        'fold': 3,
                        'cuts': res_cuts
                }

##########################

variables['vbs_0_qglmorphed_res'] = {  'name': 'vbs_0_qglmorphed_res',
                        'range': (44,-0.1,1.),
                        'xaxis': 'Qgl VBS 0 jet - remorphed',
                        'fold': 3,
                        'cuts': res_cuts
                }

variables['vbs_1_qglmorphed_res'] = {  'name': 'vbs_1_qglmorphed_res',
                        'range': (44,-0.1,1.),
                        'xaxis': 'Qgl VBS 1 jet - remorphed',
                        'fold': 3,
                        'cuts': res_cuts
                }

variables['vjet_0_qglmorphed_res'] = {  'name': 'vjet_0_qglmorphed_res',
                        'range': (44,-0.1,1.),
                        'xaxis': 'Qgl Vjet 0 jet - remorphed',
                        'fold': 3,
                        'cuts': res_cuts
                }

variables['vjet_1_qglmorphed_res'] = {  'name': 'vjet_1_qglmorphed_res',
                        'range': (44,-0.1,1.),
                        'xaxis': 'Qgl Vjet 1 jet - remorphed',
                        'fold': 3,
                        'cuts': res_cuts
                }


variables['vbs_0_qglmorphed_res_morebins'] = {  'name': 'vbs_0_qglmorphed_res',
                        'range': (88,0.1,1.),
                        'xaxis': 'Qgl VBS 0 jet - remorphed',
                        'fold': 3,
                        'cuts': res_cuts
                }

variables['vbs_1_qglmorphed_res_morebins'] = {  'name': 'vbs_1_qglmorphed_res',
                        'range': (88,-0.1,1.),
                        'xaxis': 'Qgl VBS 1 jet - remorphed',
                        'fold': 3,
                        'cuts': res_cuts
                }

variables['vjet_0_qglmorphed_res_morebins'] = {  'name': 'vjet_0_qglmorphed_res',
                        'range': (88,-0.1,1.),
                        'xaxis': 'Qgl Vjet 0 jet - remorphed',
                        'fold': 3,
                        'cuts': res_cuts
                }

variables['vjet_1_qglmorphed_res_morebins'] = {  'name': 'vjet_1_qglmorphed_res',
                        'range': (88,-0.1,1.),
                        'xaxis': 'Qgl Vjet 1 jet - remorphed',
                        'fold': 3,
                        'cuts': res_cuts
                }