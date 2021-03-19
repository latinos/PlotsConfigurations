#el_pt_bins = [25,30, 35, 40, 45, 50, 55, 60, 65, 70, 75, 85, 100, 200]
#mu_pt_bins = [23, 30, 35, 40, 45, 50, 55, 60, 65, 70, 75, 85, 100, 200]
el_pt_bins = [30, 35, 40, 45, 50, 55, 65, 75, 200]
mu_pt_bins = [22, 30, 35, 40, 45, 50, 60, 200]
bins_eta  = [0.,0.5,1.,1.479,1.8,2.15,2.5] 

#variables['l1_inv']  = { 
#    'name': 'Lepton_pt[0]',     
#    'range' : (35, 25, 200),   
#    'xaxis' : 'p_{T}^{l_{1}}',
#    'fold'  : 3
#}

variables['l1_ptel']  = { 
    'name': 'Lepton_pt[0]',     
    'range' : (el_pt_bins,),   
    'xaxis' : 'p_{T}^{l_{1}}',
    'fold'  : 3
}

variables['l1_ptmu']  = { 
    'name': 'Lepton_pt[0]',     
    'range' : (mu_pt_bins,),   
    'xaxis' : 'p_{T}^{l_{1}}',
    'fold'  : 3
}

variables['l1_eta']  = {
    'name': 'abs(Lepton_eta[0])',     
    'range' : (bins_eta,),   
    'xaxis' : '#eta^{l_{1}}',
    'fold'  : 3                         
}

variables['l1_etaVpt_ptel']  = {
    # for name:  y:x
    'name': 'Lepton_pt[0]:abs(Lepton_eta[0])',     
    #'range' : (6,20,60,5,0,2.5),
    # for range: (xbin, xmin, xmax, ybin, ymin, ymax)   
    'range' : (bins_eta,el_pt_bins,),   
    'xaxis' : 'p_{T}^{l_{1}} : #eta^{l_{1}}',
    'fold'  : 0                         
}

variables['l1_etaVpt_ptmu']  = {
    # for name:  y:x
    'name': 'Lepton_pt[0]:abs(Lepton_eta[0])',     
    #'range' : (6,20,60,5,0,2.5),
    # for range: (xbin, xmin, xmax, ybin, ymin, ymax)   
    'range' : (bins_eta,mu_pt_bins,),   
    'xaxis' : 'p_{T}^{l_{1}} : #eta^{l_{1}}',
    'fold'  : 0                         
}
