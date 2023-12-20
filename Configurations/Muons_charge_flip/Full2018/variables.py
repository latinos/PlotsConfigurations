# variables

#variables = {}

# 0 = not fold (default), 1 = fold underflowbin, 2 = fold overflow bin, 3 = fold underflow and overflow
    
variables['events'] = {
    'name'  : '1',      
    'range' : (1,0,2),  
    'xaxis' : 'events', 
    'fold'  : 3
}

############
# R_reco_gen
############

variables['R_reco_gen1_zoom'] = {
    'name'  : 'R_reco_gen_0',
    'range' : (100,-1,1),
    'xaxis' : 'R_{reco-gen} 1st muon',
    'fold'  : 3
}

variables['R_reco_gen2_zoom'] = {
    'name'  : 'R_reco_gen_1',
    'range' : (100,-1,1),
    'xaxis' : 'R_{reco-gen} 2nd muon',
    'fold'  : 3
}

###################
# Control variables
###################

# variables['mll'] = {
#     'name'  : 'mll',
#     'range' : (50,0,2500),
#     'xaxis' : 'm_{ll} [GeV]',
#     'fold'  : 0
# }

# variables['mll_more_bins'] = {
#     'name'  : 'mll',
#     'range' : (100,0,2500),
#     'xaxis' : 'm_{ll} [GeV]',
#     'fold'  : 0
# }

# variables['pt1'] = {
#     'name'  : 'Muon_pt[0]',     
#     'range' : (50,0,500),   
#     'xaxis' : 'p_{T} 1st muon [GeV]',
#     'fold'  : 3                         
# }

# variables['pt2'] = {
#     'name'  : 'Muon_pt[1]',     
#     'range' : (50,0,500),   
#     'xaxis' : 'p_{T} 2nd muon [GeV]',
#     'fold'  : 3                         
# }

# variables['eta1']  = {
#     'name'  : 'Muon_eta[0]',     
#     'range' : (60,-3,3),   
#     'xaxis' : '#eta 1st muon',
#     'fold'  : 3                         
# }

# variables['eta2']  = {
#     'name'  : 'Muon_eta[1]',     
#     'range' : (60,-3,3),   
#     'xaxis' : '#eta 2nd muon',
#     'fold'  : 3                         
# }


# R(reco-gen)
# variables['q_over_p_reco1'] = {
#     'name'  : 'q_over_p_reco_0',
#     'range' : (50,0,1),
#     'xaxis' : 'Reco-level q/p 1st muon [GeV^{-1}]',
#     'fold'  : 3
# }

# variables['q_over_p_gen1'] = {
#     'name'  : 'q_over_p_gen_0',
#     'range' : (50,0,1),
#     'xaxis' : 'Gen-level q/p 1st muon [GeV^{-1}]',
#     'fold'  : 3
# }

# variables['R_reco_gen1'] = {
#     'name'  : 'R_reco_gen_0',
#     'range' : (50,-5,5),
#     'xaxis' : 'R_{reco-gen} 1st muon',
#     'fold'  : 3
# }

# variables['q_over_p_reco2'] = {
#     'name'  : 'q_over_p_reco_1',
#     'range' : (50,0,1),
#     'xaxis' : 'Reco-level q/p 2nd muon [GeV^{-1}]',
#     'fold'  : 3
# }

# variables['q_over_p_gen2'] = {
#     'name'  : 'q_over_p_gen_1',
#     'range' : (50,0,1),
#     'xaxis' : 'Gen-level q/p 2nd muon [GeV^{-1}]',
#     'fold'  : 3
# }

# variables['R_reco_gen2'] = {
#     'name'  : 'R_reco_gen_1',
#     'range' : (50,-5,5),
#     'xaxis' : 'R_{reco-gen} 2nd muon',
#     'fold'  : 3
# }
