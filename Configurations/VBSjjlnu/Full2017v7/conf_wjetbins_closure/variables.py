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

#####################
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

######################

variables['w_lep_pt'] = {   'name': 'w_lep_pt',      
                        'range' : (50,0,700),  
                        'xaxis' : 'Pt W leptonic', 
                        'fold' : 3
                        }

variables['whad_pt_boost'] = {  'name': "w_had_pt",
                                'range': (30, 200, 900),
                                'xaxis': 'W hadronic Pt',
                                'fold': 3 ,
                                'cuts': boost_cuts
                            }    

variables['mjj_vjet'] = {   'name': 'mjj_vjet',      
                        'range' : (60,40,250),  
                        'xaxis' : 'Whad reco mass', 
                        'fold' : 3
                        }

variables['mjj_vbs_boost'] = {   'name': 'mjj_vbs',      
                        'range' : (30,250,3000) , 
                        'xaxis' : 'M_{jj} VBS', 
                        'fold' : 3,
                        'cuts': boost_cuts
                    }

variables['mjj_vbs_res'] = {   'name': 'mjj_vbs',      
                        'range' : (40,250,4000) , 
                        'xaxis' : 'M_{jj} VBS', 
                        'fold' : 3,
                        'cuts': res_cuts
                        }

variables['nJets'] = {   'name': 'nJets30',      
                        'range' : (8,2,10),  
                        'xaxis' : 'nJets cleaned from Ak8 >= 30 GeV', 
                        'fold' : 3
                        }
