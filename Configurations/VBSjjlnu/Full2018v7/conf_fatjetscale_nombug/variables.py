
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



variables['whad_pt'] = {
            'name': "w_had_pt",
            'range': (40, 200, 900),
            'xaxis': 'W hadronic Pt',
            'fold': 3 ,
            'cuts':    [c for c in cuts if "nom" not in c]
}

variables['whad_pt_correct'] = {
            'name': "w_had_pt_nom",
            'range': (40, 200, 900),
            'xaxis': 'W hadronic Pt',
            'fold': 3 ,
            'cuts':    [c for c in cuts if "nom" in c]
}



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
