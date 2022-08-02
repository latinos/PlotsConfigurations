##############################################
# now variables to plot
# Include also variables to be plotted
res_cuts = [ c for c in cuts if 'res' in c]
boost_cuts = [ c for c in cuts if 'boost' in c]
sig_cuts =  [ c for c in cuts if 'sig' in c]

########################




variables['vbs_0_eta'] = {   'name': 'vbs_0_eta',      
                        'range' : (40,-4.7,4.7),  
                        'xaxis' : 'leading VBS jet eta', 
                        'fold' : 3
} 


variables['vbs_1_eta'] = {   'name': 'vbs_1_eta',      
                        'range' : (40,-4.7,4.7),  
                        'xaxis' : 'trailing VBS jet eta', 
                        'fold' : 3
} 

variables['vjet_0_eta'] = {   'name': 'vjet_0_eta',      
                        'range' : (40,-4.7,4.7),  
                        'xaxis' : 'leading V-jet eta', 
                        'fold' : 3
} 

variables['vjet_1_eta'] = {   'name': 'vjet_1_eta',      
                        'range' : (40,-4.7,4.7),  
                        'xaxis' : 'trailing  V-jet eta', 
                        'fold' : 3,
                        'cuts': res_cuts
} 

variables['deltaeta_vbs'] = {   'name': 'deltaeta_vbs',      
                        'range' : (20,2.5,8.5),  
                        'xaxis' : '#Delta#eta VBS jets', 
                        'fold' : 3,
                        }    


variables['deltaeta_vbs_morebins'] = {   'name': 'deltaeta_vbs',      
                        'range' : (20,2.5,8.5),  
                        'xaxis' : '#Delta#eta VBS jets', 
                        'fold' : 3,
                        } 


variables['vbs_0_pt'] = {   'name': 'vbs_0_pt',      
                        'range' : (35,50,400),  
                        'xaxis' : 'trailing VBS jet pt', 
                        'fold' : 3
                        } 

variables['vbs_1_pt'] = {   'name': 'vbs_1_pt',      
                        'range' : (30,30,250),  
                        'xaxis' : 'trailing VBS jet pt', 
                        'fold' : 3,
} 



variables['vjet_0_pt'] = {   'name': 'vjet_0_pt',      
                        'range' : (30,30,180),  
                        'xaxis' : 'leading V-jet pt', 
                        'fold' : 3
                        }

variables['vjet_1_pt'] = {   'name': 'vjet_1_pt',      
                        'range' : (30,30,100),  
                        'xaxis' : 'trailing V-jet pt', 
                        'fold' : 3,
                        'cuts': res_cuts
                        }


variables = {k:v for k,v in variables.items() if 'eta' in k}