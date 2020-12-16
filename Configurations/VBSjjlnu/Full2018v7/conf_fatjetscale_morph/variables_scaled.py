
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
            'range': (40, 200, 1000),
            'xaxis': 'W hadronic Pt',
            'fold': 3 ,
            'cuts':    [c for c in cuts if "scaled" not in c]
}

variables['whad_pt_2'] = {
            'name': "w_had_pt",
            'range': (60, 200, 1000),
            'xaxis': 'W hadronic Pt',
            'fold': 3 ,
            'cuts':    [c for c in cuts if "scaled" not in c]
}

variables['whad_pt_3'] = {
            'name': "w_had_pt",
            'range': (40, 200, 900),
            'xaxis': 'W hadronic Pt',
            'fold': 3 ,
            'cuts':    [c for c in cuts if "scaled" not in c]
}

variables['whad_pt_4'] = {
            'name': "w_had_pt",
            'range': (60, 200, 900),
            'xaxis': 'W hadronic Pt',
            'fold': 3 ,
            'cuts':    [c for c in cuts if "scaled" not in c]
}


variables['mjj_vjet_1'] = {   'name': 'mjj_vjet',      
                        'range' : (60,40,200),  
                        'xaxis' : 'Whad reco mass', 
                        'fold' : 3,
                        'cuts':    [c for c in cuts if "scaled" not in c]
                        }


variables['mjj_vjet_2'] = {   'name': 'mjj_vjet',      
                        'range' : (60,40,250),  
                        'xaxis' : 'Whad reco mass', 
                        'fold' : 3,
                        'cuts':    [c for c in cuts if "scaled" not in c]
                        }

variables['mjj_vjet_3'] = {   'name': 'mjj_vjet',      
                        'range' : (50,40,250),  
                        'xaxis' : 'Whad reco mass', 
                        'fold' : 3,
                        'cuts':    [c for c in cuts if "scaled" not in c]
                        }

variables['mjj_vjet_4'] = {   'name': 'mjj_vjet',      
                        'range' : (40,40,200),  
                        'xaxis' : 'Whad reco mass', 
                        'fold' : 3,
                        'cuts':    [c for c in cuts if "scaled" not in c]
                        }

variables['mjj_whadpt'] = {   'name': 'mjj_vjet:w_had_pt',      
                        'range' : ( 10, 200, 900, 10, 40, 250),  
                        'xaxis' : 'Whad reco mass', 
                        'fold' : 3,
                        'cuts':    [c for c in cuts if "scaled" not in c]
                        }





################################

variables['whad_pt_1_scaled'] = {
            'name': "w_had_pt_scaled",
            'range': (40, 200, 1000),
            'xaxis': 'W hadronic Pt',
            'fold': 3 ,
            'cuts':    [c for c in cuts if "scaled" in c]
}

variables['whad_pt_2_scaled'] = {
            'name': "w_had_pt_scaled",
            'range': (60, 200, 1000),
            'xaxis': 'W hadronic Pt',
            'fold': 3 ,
            'cuts':    [c for c in cuts if "scaled" in c]
}

variables['whad_pt_3_scaled'] = {
            'name': "w_had_pt_scaled",
            'range': (40, 200, 900),
            'xaxis': 'W hadronic Pt',
            'fold': 3 ,
            'cuts':    [c for c in cuts if "scaled" in c]
}

variables['whad_pt_4_scaled'] = {
            'name': "w_had_pt_scaled",
            'range': (60, 200, 900),
            'xaxis': 'W hadronic Pt',
            'fold': 3 ,
            'cuts':    [c for c in cuts if "scaled" in c]
}


variables['mjj_vjet_1_scaled'] = {   'name': 'mjj_vjet_scaled',      
                        'range' : (60,40,200),  
                        'xaxis' : 'Whad reco mass', 
                        'fold' : 3,
                        'cuts':    [c for c in cuts if "scaled" in c]
                        }


variables['mjj_vjet_2_scaled'] = {   'name': 'mjj_vjet_scaled',      
                        'range' : (60,40,250),  
                        'xaxis' : 'Whad reco mass', 
                        'fold' : 3,
                        'cuts':    [c for c in cuts if "scaled" in c]
                        }

variables['mjj_vjet_3_scaled'] = {   'name': 'mjj_vjet_scaled',      
                        'range' : (50,40,250),  
                        'xaxis' : 'Whad reco mass', 
                        'fold' : 3,
                        'cuts':    [c for c in cuts if "scaled" in c]
                        }

variables['mjj_vjet_4_scaled'] = {   'name': 'mjj_vjet_scaled',      
                        'range' : (40,40,200),  
                        'xaxis' : 'Whad reco mass', 
                        'fold' : 3,
                        'cuts':    [c for c in cuts if "scaled" in c]
                        }

variables['mjj_whadpt_scaled'] = {   'name': 'mjj_vjet_scaled:w_had_pt_scaled',      
                        'range' : ( 10, 200, 900, 10, 40, 250),  
                        'xaxis' : 'Whad reco mass', 
                        'fold' : 3,
                        'cuts':    [c for c in cuts if "scaled" in c]
                        }




