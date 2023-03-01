# # variables
#
# variables = {}

controlRegions = set(x for x in cuts if 'SB' in x or 'CR'in x)
hmSR  = set(x for x in cuts if 'HMSR' in x)
#boostedSR   = set(x for x in cuts if 'BoostedSR' in x)
#resolvedSR  = set(x for x in cuts if 'ResolvedSR' in x)
ak8SR = set(x for x in cuts if 'AK8SR' in x)
no_cut_all = set( x for x in cuts if 'No_cut' in x)
resolved = set(x for x in cuts if 'Resolved' in x)
boosted  = set(x for x in cuts if 'Boosted' in x)
#boosted_general = set(x for x in cuts if 'boosted_gen' in x)
fat_jet = set(x for x in cuts if 'fatjet' in x)

variables['events']  = {
    'name' : '1',
    'range': (1,0,2),
    'xaxis': 'events',
    'fold' : 3,
}

variables['l1_pt']  = { 
                        'name': 'Lepton_pt[0]',     
                        'range' : (7,25,60),   
                        'xaxis' : 'p_{T}^{l_{1}}',
                        'fold'  : 3
                        }

variables['l1_eta']  = {
                        'name': 'abs(Lepton_eta[0])',     
                        'range' : (5,0,2.5),   
                        'xaxis' : '#eta^{l_{1}}',
                        'fold'  : 3                         
                        }

#variables['l1_etaVpt']  = {
#                        # for name:  y:x
#                        'name': 'Lepton_pt[0]:abs(Lepton_eta[0])',     
#                        #'range' : (6,20,60,5,0,2.5),
#                        # for range: (xbin, xmin, xmax, ybin, ymin, ymax)   
#                        'range' : (5,0,2.5,7,25,60),   
#                        'xaxis' : 'p_{T}^{l_{1}} : #eta^{l_{1}}',
#                        'fold'  : 0                         
#                        }
bins_pt_el = [25,30,35,40,45,50,60,100]
bins_pt_mu = [25,30,35,40,45,100]
bins_eta  = [0.,0.5,1.,1.479,1.8,2.15,2.5] 
bins_aseta  = [-2.5,-2.15,-1.8,-1.479,-1.,-0.5,0.,0.5,1.,1.479,1.8,2.15,2.5] 

#variables['l1_etaVpt_ptmu']  = {
#                        # for name:  y:x
#                        'name': 'Lepton_pt[0]:abs(Lepton_eta[0])',     
#                        'range' : (bins_eta,bins_pt_mu,),   
#                        'xaxis' : 'p_{T}^{l_{1}} : #eta^{l_{1}}',
#                        'fold'  : 0                         
#                        }
#variables['l1_etaVpt_ptel']  = {
#                        # for name:  y:x
#                        'name': 'Lepton_pt[0]:abs(Lepton_eta[0])',     
#                        'range' : (bins_eta,bins_pt_el,),   
#                        'xaxis' : 'p_{T}^{l_{1}} : #eta^{l_{1}}',
#                        'fold'  : 0                         
#                        }
#
variables['l1_pt_ptmu']  = { 
                        'name': 'Lepton_pt[0]',     
                        'range' : ( bins_pt_mu,),   
                        'xaxis' : 'p_{T}^{l_{1}}',
                        'fold'  : 3
                        }
variables['l1_pt_ptel']  = { 
                        'name': 'Lepton_pt[0]',     
                        'range' : ( bins_pt_el,),   
                        'xaxis' : 'p_{T}^{l_{1}}',
                        'fold'  : 3
                        }
#variables['l1_pt_ptinv']  = { 
#                        'name': 'Lepton_pt[0]',     
#                        'range' : ([25,30,35,40,45,50,55,60,70,80,90,100,110,120,130,150],),   
#                        'xaxis' : 'p_{T}^{l_{1}}',
#                        'fold'  : 3
#                        }
#
#variables['l1_eta']  = {
#                        'name': 'abs(Lepton_eta[0])',     
#                        'range' : (bins_eta,),   
#                        'xaxis' : '#eta^{l_{1}}',
#                        'fold'  : 3                         
#                        }
#variables['l1_eta_aseta']  = {
#                        'name': 'Lepton_eta[0]',     
#                        'range' : (bins_aseta,),   
#                        'xaxis' : '#eta^{l_{1}}',
#                        'fold'  : 3                         
#                        }
#variables['l1_etaVpt_ptel_aseta']  = {
#                        # for name:  y:x
#                        'name': 'Lepton_pt[0]:Lepton_eta[0]',     
#                        'range' : (bins_aseta,bins_pt_el,),   
#                        'xaxis' : 'p_{T}^{l_{1}} : #eta^{l_{1}}',
#                        'fold'  : 0                         
#                        }
#
#variables['Puppimet']  = {
#    'name': 'PuppiMET_pt',
#    'range' : (25,0,300),
#    'xaxis' : 'p_{T} puppiMET [GeV]',
#    'fold'  : 3
#}
#
variables['l1_pt']  = { 
    'name': 'Lepton_pt[0]',     
    'range' : (26,20,150),   
    'xaxis' : 'p_{T}^{l_{1}}',
    'fold'  : 3
}

variables['j1_pt']  = { 
    'name': 'CleanJet_pt[0]',     
    'range' : (25,30,180),   
    'xaxis' : 'p_{T}^{j_{1}}',
    'fold'  : 3
}

variables['j1_eta']  = { 
    'name': 'CleanJet_eta[0]',     
    'range' : (15,-3,3),   
    'xaxis' : '#eta^{j_{1}}',
    'fold'  : 3
}
variables['j1_eta_ext']  = { 
    'name': 'CleanJet_eta[0]',     
    'range' : (30,-3,3),   
    'xaxis' : '#eta^{j_{1}}',
    'fold'  : 3
}

variables['j2_eta']  = { 
    'name': 'CleanJet_eta[1]',     
    'range' : (15,-3,3),   
    'xaxis' : '#eta^{j_{2}}',
    'fold'  : 3
}

variables['j2_pt']  = { 
    'name': 'CleanJet_pt[1]',     
    'range' : (25,30,180),   
    'xaxis' : 'p_{T}^{j_{2}}',
    'fold'  : 3
}
variables['l1_eta_pm_ext']  = {
    'name': 'Lepton_eta[0]',     
    'range' : (30,-3,3),   
    'xaxis' : '#eta^{l_{1}}',
    'fold'  : 3                         
}
variables['l1_eta_pm']  = {
    'name': 'Lepton_eta[0]',     
    'range' : (12,-3,3),   
    'xaxis' : '#eta^{l_{1}}',
    'fold'  : 3                         
}
variables['deltaR_jl']  = {
    'name': 'deltaR_jl[0]',     
    'range' : (20,0,5),   
    'xaxis' : '#Delta R_{lj_{1}}',
    'fold'  : 3                         
}
variables['deltaR_jl_match']  = {
    'name': 'deltaR_jl_match[0]',     
    'range' : (20,0,5),   
    'xaxis' : '#Delta R_{lj_{1}}',
    'fold'  : 3                         
}

#variables['tree'] = { 
#   'tree' :{
#    	'Jet_Eta': 'CleanJet_eta[0]',
#    	'Jet_Pt': 'CleanJet_pt[0]',
#    	'Jet_Phi': 'CleanJet_phi[0]',
#    	'Jet_2_Eta': 'CleanJet_eta[1]',
#    	'Jet_2_Pt': 'CleanJet_pt[1]',
#    	'Jet_2_Phi': 'CleanJet_phi[1]',
#    	'Lep_Eta': 'Lepton_eta[0]',
#    	'Lep_Phi': 'Lepton_phi[0]',
#    	'PUPPI_MET_PT': 'PuppiMET_pt[0]',
#    	'PUPPI_MET_Phi': 'PuppiMET_phi[0]',
##    	'PUPPI_MET_Eta': 'PuppiMET_eta[0]',
##    	'iso_lep': 'Electron_pfRelIso03_all[0]',
##    	'bVeto': 'bVeto[0]',
#    	'deltaR_jl': 'deltaR_jl[0]',
#    	'Lep_Pt': 'Lepton_pt[0]',
#    	'Lep_AsEta': 'abs(Lepton_eta[0])',
#   }
#}
