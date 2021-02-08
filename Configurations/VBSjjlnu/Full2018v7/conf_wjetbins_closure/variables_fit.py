
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

# variables['DNNoutput_res_v1'] = {
#     'name': 'DNNoutput_resolved_v1',
#     'range': (25,0.,1),
#     'xaxis': 'DNN output, resolved',
#     'fold': 3 ,
#     # 'divideByBinWidth': True,
#     'cuts':  res_cuts,
#     'blind': { c:[0.6,1] for c in cuts if "_sig_" in c},
# }


# variables['DNNoutput_boost'] = {
#     'name': 'DNNoutput_boosted',
#     'range': ([0., 0.05, 0.1, 0.15, 0.20, 0.25, 0.3, 0.35, 0.4, 0.55, 0.7, 0.85, 1.],),
#     'xaxis': 'DNN output, boosted',
#     'fold': 3 ,
#     # 'divideByBinWidth': True,
#     'cuts': boost_cuts,
#     'blind': { c:[0.6,1] for c in cuts if "_sig_" in c} ,
# }

###########
#Fit variables

variables['fit_bins_res'] ={  'name' : 'w_lep_pt',
                            'range' : ([0,100,200,300,400,500,700],),
                            'xaxis' : 'W leptonic Pt', 
                            'fold' : 3,
                            'cuts': res_cuts
}   

variables['fit_bins_boost'] ={  'name' : 'w_lep_pt',
                            'range' : ([0,75,150,250,400,700],),
                            'xaxis' : 'W leptonic Pt', 
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

variables['mjj_vjet'] = {   'name': 'mjj_vjet',      
                        'range' : (60,40,250),  
                        'xaxis' : 'Whad reco mass', 
                        'fold' : 3
                        }


variables['whad_pt_boost'] = {
            'name': "w_had_pt",
            'range': (40, 200, 900),
            'xaxis': 'W hadronic Pt',
            'fold': 3 ,
            'cuts': boost_cuts
}


# variables['vbs_jets_pt'] = {  'name': 'tag_jets_systems_pt[0]',
#                         'range': (50,0.,700),
#                         'xaxis': 'Pt of VBS jets system',
#                         'fold': 3
#                 }


variables['Lepton_pt'] = {   'name': 'Lepton_pt[0]',      
                        'range' : (40,0,500),  
                        'xaxis' : 'Lepton pt', 
                        'fold' : 3
                        }    



variables['w_lep_pt'] = {   'name': 'w_lep_pt',      
                        'range' : (50,0,700),  
                        'xaxis' : 'Pt W leptonic', 
                        'fold' : 3
                        }

#MET
variables['PuppiMET'] = {   'name': 'PuppiMET_pt',      
                        'range' : (40,30,400),  
                        'xaxis' : 'PuppiMET_pt', 
                        'fold' : 3
                        }