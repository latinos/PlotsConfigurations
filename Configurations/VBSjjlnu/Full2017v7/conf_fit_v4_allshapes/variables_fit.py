
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

variables['DNNoutput_res_morebins'] = {
    'name': 'DNNoutput',
    'range': (60,0.,1),
    'xaxis': 'DNN output, resolved',
    'fold': 0 ,
    'cuts':  res_cuts,
    'blind': { c:[0.7,1] for c in cuts if "_sig_" in c},
}


variables['DNNoutput_res_custom'] = {
    'name': 'DNNoutput',
    'range': ([0,0.25,0.5]+[ 0.5 + 0.01*i  for i in range(1,51)], ),
    'xaxis': 'DNN output, resolved',
    'fold': 0 ,
    'cuts':  res_cuts,
    'blind': { c:[0.7,1] for c in cuts if "_sig_" in c},
}


variables['DNNoutput_res_custom2'] = {
    'name': 'DNNoutput',
    'range': ([0,0.2,0.4,0.6]+[ 0.6 + 0.01*i  for i in range(1,41)], ),
    'xaxis': 'DNN output, resolved',
    'fold': 0 ,
    'cuts':  res_cuts,
    'blind': { c:[0.7,1] for c in cuts if "_sig_" in c},
}

##################### 

variables['DNNoutput_boost_morebins'] = {
    'name': 'DNNoutput_boosted',
    'range': (40,0.,1),
    'xaxis': 'DNN output, boosted',
    'fold': 0 ,
    'cuts': boost_cuts,
    'blind': { c:[0.7,1] for c in cuts if "_sig_" in c} ,
}

variables['DNNoutput_boost_custom'] = {
    'name': 'DNNoutput_boosted',
    'range':([0,0.25,0.5]+[ 0.5 + 0.02*i  for i in range(1,26)], ),
    'xaxis': 'DNN output, boosted',
    'fold': 0 ,
    'cuts': boost_cuts,
    'blind': { c:[0.7,1] for c in cuts if "_sig_" in c} ,
}

variables['DNNoutput_boost_custom2'] = {
    'name': 'DNNoutput_boosted',
    'range':([0,0.2,0.4,0.6]+[ 0.6 + 0.02*i  for i in range(1,21)], ),
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

variables['fit_bins_boost'] ={  'name' : 'w_had_pt',
                            'range' : ([0,300,400,600,1000],),
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


variables['vbs_0_pt_res'] = {   'name': 'vbs_0_pt',      
                        'range' : (40,50,400),  
                        'xaxis' : 'leading VBS jet pt', 
                        'fold' : 3, 
                        'cuts': res_cuts
                        }


variables['vbs_0_pt_boost'] = {   'name': 'vbs_0_pt',      
                        'range' : (60,50,800),  
                        'xaxis' : 'leading VBS jet pt', 
                        'fold' : 3, 
                        'cuts': boost_cuts
                        }


# variables['vbs_1_pt'] = {   'name': 'vbs_1_pt',      
#                         'range' : (40,30,400),  
#                         'xaxis' : 'trailing VBS jet pt', 
#                         'fold' : 3
#                         } 



variables['whad_pt_boost'] = {
            'name': "w_had_pt",
            'range': (40, 200, 900),
            'xaxis': 'W hadronic Pt',
            'fold': 3 ,
            'cuts': boost_cuts
}


#######
# QGL vars 

variables['vbs_0_qgl_boost'] = {  'name': 'vbs_0_qgl_boost',
                        'range': (40,0.,1.),
                        'xaxis': 'Qgl VBS 0 jet',
                        'fold': 3,
                        'cuts': boost_cuts
                }



# variables['vbs_0_qgl_res'] = {  'name': 'vbs_0_qgl_res',
#                         'range': (40,0.,1.),
#                         'xaxis': 'Qgl VBS 0 jet',
#                         'fold': 3,
#                         'cuts': res_cuts
#                 }


variables['vjet_0_qgl_res'] = {  'name': 'vjet_0_qgl_res',
                        'range': (40,0.,1.),
                        'xaxis': 'Qgl Vjet 0 jet',
                        'fold': 3,
                        'cuts': res_cuts
                }


#####################

variables['vbs_jets_pt'] = {  'name': 'tag_jets_systems_pt[0]',
                        'range': (50,0.,700),
                        'xaxis': 'Pt of VBS jets system',
                        'fold': 3
                }


variables['four_tag_jets_pt_boost'] = {  'name': 'tag_jets_systems_pt[1]',
                        'range': (40,0.,600),
                        'xaxis': 'Pt of VBS+FatJet system',
                        'fold': 3,
                        'cuts': boost_cuts
                }


# variables['four_tag_jets_lepton_HT'] = {  'name': 'tag_jets_systems_pt[5]',
#                         'range': (60,100.,1200),
#                         'xaxis': 'HT of VBS+V jets + Lepton system',
#                         'fold': 3
#                 }