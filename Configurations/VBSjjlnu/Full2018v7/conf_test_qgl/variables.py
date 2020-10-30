
res_cuts = [ c for c in cuts if 'res' in c]
boost_cuts = [ c for c in cuts if 'boost' in c]


variables['events']  = {   'name': '1',      
                        'range' : (1,0,2),  
                        'xaxis' : 'events', 
                        'fold' : 3
                        }


# variables['vbs_0_pt'] = {   'name': 'vbs_0_pt',      
#                         'range' : (40,50,400),  
#                         'xaxis' : 'leading VBS jet pt', 
#                         'fold' : 3
#                         }


# variables['vbs_1_pt'] = {   'name': 'vbs_1_pt',      
#                         'range' : (40,30,400),  
#                         'xaxis' : 'trailing VBS jet pt', 
#                         'fold' : 3
#                         } 


# variables['vjet_0_pt'] = {   'name': 'vjet_0_pt',      
#                         'range' : (40,30,400),  
#                         'xaxis' : 'leading V-jet pt', 
#                         'fold' : 3
#                         }

# variables['vjet_1_pt'] = {   'name': 'vjet_1_pt',      
#                         'range' : (40,30,400),  
#                         'xaxis' : 'trailing V-jet pt', 
#                         'fold' : 3
#                         }

#######
# QGL vars 

# variables['vbs_0_qgl_boost'] = {  'name': 'vbs_0_qgl_boost',
#                         'range': (40,0.,1.),
#                         'xaxis': 'Qgl VBS 0 jet',
#                         'fold': 3,
#                         'cuts': boost_cuts
#                 }

# variables['vbs_1_qgl_boost'] = {  'name': 'vbs_1_qgl_boost',
#                         'range': (40,0.,1.),
#                         'xaxis': 'Qgl VBS 1 jet',
#                         'fold': 3,
#                         'cuts': boost_cuts
#                 }

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


variables['vbs_0_qgl_res_morebins'] = {  'name': 'vbs_0_qgl_res',
                        'range': (80,0.,1.),
                        'xaxis': 'Qgl VBS 0 jet',
                        'fold': 3,
                        'cuts': res_cuts
                }

variables['vbs_1_qgl_res_morebins'] = {  'name': 'vbs_1_qgl_res',
                        'range': (80,0.,1.),
                        'xaxis': 'Qgl VBS 1 jet',
                        'fold': 3,
                        'cuts': res_cuts
                }

variables['vjet_0_qgl_res_morebins'] = {  'name': 'vjet_0_qgl_res',
                        'range': (80,0.,1.),
                        'xaxis': 'Qgl Vjet 0 jet',
                        'fold': 3,
                        'cuts': res_cuts
                }

variables['vjet_1_qgl_res_morebins'] = {  'name': 'vjet_1_qgl_res',
                        'range': (80,0.,1.),
                        'xaxis': 'Qgl Vjet 1 jet',
                        'fold': 3,
                        'cuts': res_cuts
                }