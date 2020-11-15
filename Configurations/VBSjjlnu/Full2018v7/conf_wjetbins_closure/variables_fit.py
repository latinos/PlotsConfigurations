
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


variables['whad_pt_boost'] = {
            'name': "w_had_pt",
            'range': (40, 200, 900),
            'xaxis': 'W hadronic Pt',
            'fold': 3 ,
            'cuts': boost_cuts
}


variables['vbs_jets_pt'] = {  'name': 'tag_jets_systems_pt[0]',
                        'range': (50,0.,700),
                        'xaxis': 'Pt of VBS jets system',
                        'fold': 3
                }

