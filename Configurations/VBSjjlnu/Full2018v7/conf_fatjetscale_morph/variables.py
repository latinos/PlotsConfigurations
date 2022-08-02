
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



variables['whad_pt_1'] = {
            'name': "w_had_pt",
            'range': (60, 200, 900),
            'xaxis': 'W hadronic Pt',
            'fold': 3 
}


variables['whad_pt_2'] = {
            'name': "w_had_pt",
            'range': (40, 200, 900),
            'xaxis': 'W hadronic Pt',
            'fold': 3 
}

# variables['whad_pt_correct'] = {
#             'name': "w_had_pt_nom",
#             'range': (40, 200, 900),
#             'xaxis': 'W hadronic Pt',
#             'fold': 3 ,
#             'cuts':    [c for c in cuts if "nom" in c]
# }



variables['mjj_vjet_1'] = {   'name': 'mjj_vjet',      
                        'range' : (60,40,200),  
                        'xaxis' : 'Whad reco mass', 
                        'fold' : 3
                        }


variables['mjj_vjet_2'] = {   'name': 'mjj_vjet',      
                        'range' : (60,40,250),  
                        'xaxis' : 'Whad reco mass', 
                        'fold' : 3
                        }



variables['DNNoutput_boost_1'] = {
        'name': 'DNNoutput_boosted[0]',
        'range': ([0., 0.05, 0.1, 0.15, 0.20, 0.25, 0.3, 0.35, 0.4, 0.55, 0.7, 0.85, 1.],),
        'xaxis': 'DNN, boosted (mV = 95 GeV)',
        'fold': 3 ,
        'blind': { c:[0.6,1] for c in cuts if 'offshell' not in c} ,
    }


# variables['DNNoutput_boost_2'] = {
#         'name': 'DNNoutput_boosted[1]',
#         'range': ([0., 0.05, 0.1, 0.15, 0.20, 0.25, 0.3, 0.35, 0.4, 0.55, 0.7, 0.85, 1.],),
#         'xaxis': 'DNN, boosted (mV = 85 GeV)',
#         'fold': 3 ,
#         'blind': { c:[0.6,1] for c in cuts if 'offshell' not in c} ,
#     }


# variables['DNNoutput_boost_3'] = {
#         'name': 'DNNoutput_boosted[2]',
#         'range': ([0., 0.05, 0.1, 0.15, 0.20, 0.25, 0.3, 0.35, 0.4, 0.55, 0.7, 0.85, 1.],),
#         'xaxis': 'DNN, boosted (mV = 85 GeV)',
#         'fold': 3 ,
#         'blind': { c:[0.6,1] for c in cuts if 'offshell' not in c} ,
#     }


# variables['DNNoutput_boost_4'] = {
#         'name': 'DNNoutput_boosted[3]',
#         'range': ([0., 0.05, 0.1, 0.15, 0.20, 0.25, 0.3, 0.35, 0.4, 0.55, 0.7, 0.85, 1.],),
#         'xaxis': 'DNN, boosted (mV = 85 GeV)',
#         'fold': 3 ,
#         'blind': { c:[0.6,1] for c in cuts if 'offshell' not in c} ,
#     }



variables['mjj_vbs_boost'] = {   'name': 'mjj_vbs',      
                        'range' : (30,250,2500) , 
                        'xaxis' : 'M_{jj} VBS', 
                        'fold' : 3,
                        'blind': { c:[1200,2500] for c in cuts if 'sig' in c} ,
                    }



variables['Zlep'] = {   'name': 'Zlep',      
                        'range' : (50,-1.1,1.1),  
                        'xaxis' : 'Zepp. lepton', 
                        'fold' : 3
                        }

variables['deltaeta_vbs'] = {   'name': 'deltaeta_vbs',      
                        'range' : (18,2.5,9),  
                        'xaxis' : '#Delta#eta VBS jets', 
                        'fold' : 3,
                        }    


#jets 
variables['nJets'] = {   'name': 'nJets30',      
                        'range' : (8,2,10),  
                        'xaxis' : 'nJets cleaned from Ak8 >= 30 GeV', 
                        'fold' : 3
                        }


variables['vbs_1_pt'] = {   'name': 'vbs_1_pt',      
                        'range' : (40,30,400),  
                        'xaxis' : 'trailing VBS jet pt', 
                        'fold' : 3
                        } 



variables['fit_bins_boost'] ={  'name' : 'w_lep_pt',
                            'range' : ([0,75,150,250,400,700],),
                            'xaxis' : 'W leptonic Pt', 
                            'fold' : 3,
}   

######################

variables['w_lep_pt'] = {   'name': 'w_lep_pt',      
                        'range' : (50,0,700),  
                        'xaxis' : 'Pt W leptonic', 
                        'fold' : 3
                        }
