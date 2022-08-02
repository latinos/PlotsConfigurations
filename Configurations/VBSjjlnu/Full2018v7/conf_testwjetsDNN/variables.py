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


tree_vars_res =  []
tree_vars_boost =[]

for i in range(10):
    mjj_boost = 60 + i * (125-60)/10 
    mjj_res = 55 + i * (115-55)/10 

    # tree_vars_res['DNNoutput_res_{}'.format(i)] = 'DNNoutput_resolved[{}]'.format(i)
    # tree_vars_boost['DNNoutput_boost_{}'.format(i)] = 'DNNoutput_boosted[{}]'.format(i),

    variables['DNNoutput_res_'+str(i)] = {
        'name':  'DNNoutput_resolved[{}]'.format(i),
        'range': (25,0.,1),
        'xaxis': 'DNN, resolved (mjj_vjet = {} GeV)'.format(mjj_res),
        'fold': 3 ,
        'cuts':  res_cuts,
        'blind': { c:[0.7,1] for c in cuts if "_sig_" in c},
    }
    
    variables['DNNoutput_res_lessbins_'+str(i)] = {
        'name': 'DNNoutput_resolved[{}]'.format(i),
        'range': (15,0.,1),
        'xaxis': 'DNN, resolved (mjj_vjet = {} GeV)'.format(mjj_res),
        'fold': 3 ,
        'cuts':  res_cuts,
        'blind': { c:[0.7,1] for c in cuts if "_sig_" in c},
    }

    variables['DNNoutput_boost_'+str(i)] = {
        'name': 'DNNoutput_boosted[{}]'.format(i),
        'range': ([0., 0.05, 0.1, 0.15, 0.20, 0.25, 0.3, 0.35, 0.4, 0.55, 0.7, 0.85, 1.],),
        'xaxis': 'DNN, boosted (mV = {} GeV)'.format(mjj_boost),
        'fold': 3 ,
        'cuts': boost_cuts,
        'blind': { c:[0.7,1] for c in cuts if "_sig_" in c} ,
    }

    variables['DNNoutput_boost_lessbins_'+str(i)] = {
        'name': 'DNNoutput_boosted[{}]'.format(i),
        'range': ([0., 0.1, 0.2, 0.3, 0.4, 0.5, 0.6, 0.8, 1.],),
        'xaxis': 'DNN, boosted (mV = {} GeV)'.format(mjj_boost),
        'fold': 3 ,
        'cuts': boost_cuts,
        'blind': { c:[0.7,1] for c in cuts if "_sig_" in c} ,
    }




# variables['tree'] = {
#     'tree': {
        
#     },
# }

######################
    

variables['mjj_vjet'] = {   'name': 'mjj_vjet',      
                        'range' : (60,40,250),  
                        'xaxis' : 'Whad reco mass', 
                        'fold' : 3
                        }

