##############################################
# now variables to plot
# Include also variables to be plotted
res_cuts = [ c for c in cuts if 'res' in c]
boost_cuts = [ c for c in cuts if 'boost' in c]
sig_cuts =  [ c for c in cuts if 'sig' in c]

variables['events']  = {   'name': '1',      
                        'range' : (1,0,2),  
                        'xaxis' : 'events', 
                        'fold' : 3
                        }

########################


variables['DNNoutput_res_v1'] = {
    'name': 'DNNoutput_resolved_v1',
    'range': (25,0.,1),
    'xaxis': 'DNN resolved',
    'fold': 3 ,
    'cuts':  res_cuts,
    'divideByBinWidth': True, 
    'blind': { c:[0.6,1] for c in cuts if "_sig_" in c},
}


variables['DNNoutput_boost'] = {
    'name': 'DNNoutput_boosted',
    'range': ([0., 0.05, 0.1, 0.15, 0.20, 0.25, 0.3, 0.35, 0.4, 0.55, 0.7, 0.85, 1.],),
    'xaxis': 'DNN boosted',
    'fold': 3 ,
    'cuts': boost_cuts,
    'divideByBinWidth': True,
    'blind': { c:[0.6,1] for c in cuts if "_sig_" in c} ,
}

variables['puWeight']  = {   'name': 'puWeight',      
                        'range' : (50,0,2),  
                        'xaxis' : 'Pu weight', 
                        'fold' : 3
                        }

variables['btagSF']  = {   'name': 'btagSF',      
                        'range' : (50,0,2),  
                        'xaxis' : 'Btag SF', 
                        'fold' : 3
                        }

variables['PUJetIdSF']  = {   'name': 'PUJetIdSF',      
                        'range' : (50,0,2),  
                        'xaxis' : 'PUJetIdSF', 
                        'fold' : 3
                        }

variables['btagSF_corr_Vg_VgS_VBFV']  = {   'name': 'btagSF_corr_Vg_VgS_VBFV',      
                        'range' : (50,0,2),  
                        'xaxis' : 'PUJetIdSF', 
                        'fold' : 3
                        }

variables['XSWeight']  = {   'name': 'XSWeight',      
                        'range' : (100,-0.1,0.1),  
                        'xaxis' : 'XSweight', 
                        'fold' : 3
                        }

variables['LepTrigEff']  = {   'name': 'SingleLepton_trigEff_corrected[0]',      
                        'range' : (50,0,2),  
                        'xaxis' : 'TrigEff', 
                        'fold' : 3
                        }

variables['LepRecoSF']  = {   'name': 'Lepton_RecoSF[0]',      
                        'range' : (50,0,2),  
                        'xaxis' : 'RecoSF', 
                        'fold' : 3
                        }

variables['tau21SF']  = {   'name': 'BoostedWtagSF_nominal',      
                        'range' : (50,0,2),  
                        'xaxis' : 'tau21eff', 
                        'fold' : 3
                        }

                        

variables['weights'] = {
    'tree': {k: v["name"] for k,v in variables.items()},
}
