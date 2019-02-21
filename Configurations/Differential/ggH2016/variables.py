#variables = {}

# imported from cuts.py
# cuts

try:
    variables
except NameError:
    import collections
    variables = collections.OrderedDict()
    cuts = []

sr = [ckey for ckey in cuts if '_CR' not in ckey]

#'fold' : # 0 = not fold (default), 1 = fold underflowbin, 2 = fold overflow bin, 3 = fold underflow and overflow

variables['events'] = {
    'name': '0.5',
    'range': (1,0,1),
    'xaxis': 'events'
}

mthbinning = [60,80,90,100,110,120,130,150,200]
mllbinning = [10,25,35,40,45,50,55,70,90,210]
name = ''
mllbin = ['1'] # folding underflow -> always 1
for imll in range(1, len(mllbinning) - 1):
    mllbin.append('(mll >= %d)' % mllbinning[imll])
name += '+'.join(mllbin)
name += ' + %d*(' % (len(mllbinning) - 1)
mthbin = [] # 1-1 for first bin
for imth in range(1, len(mthbinning) - 1):
    mthbin.append('(mth >= %d)' % mthbinning[imth])
name += '+'.join(mthbin)
name += ') - 0.5'

variables['mllVSmth_8x9'] = {
    'name': name,
    'range': (72, 0., 72.),
    'xaxis': 'm^{ll}:m_{T}^{H}', #   x axis name
    'doWeight': 1, # do weighted plot too
    'cuts': sr
}

mthbinning = [60,80,90,110,130,150,200]
mllbinning = [10,25,40,50,70,90,210]
name = ''
mllbin = ['1'] # folding underflow -> always 1
for imll in range(1, len(mllbinning) - 1):
    mllbin.append('(mll >= %d)' % mllbinning[imll])
name += '+'.join(mllbin)
name += ' + %d*(' % (len(mllbinning) - 1)
mthbin = [] # 1-1 for first bin
for imth in range(1, len(mthbinning) - 1):
    mthbin.append('(mth >= %d)' % mthbinning[imth])
name += '+'.join(mthbin)
name += ') - 0.5'

variables['mllVSmth_6x6'] = {
    'name': name,
    'range': (36, 0., 36.),
    'xaxis': 'm^{ll}:m_{T}^{H}', #   x axis name
    'doWeight': 1, # do weighted plot too
    'cuts': sr
}

#variables['njet']  = {
#    'name': 'njet',     
#    'range': (5,0,5),   
#    'xaxis': 'Number of jets',
#    'fold': 2,
#}
#
#variables['ptllmet'] = {
#    'name': 'ptH',
#    'range': (100,0,300),
#    'xaxis': 'p_{T}^{llmet} [GeV]',
#    'fold': 3
#}
#
#variables['ptllmet_reco'] = {
#    'name': 'ptH',
#    'range': (ptHBinning,),
#    'xaxis': 'p_{T}^{llmet} [GeV]'
#}
#
#variables['ptllmet_gen'] = {
#    'name': 'higgsGenpt',
#    'range': (ptHBinning,),
#    'xaxis': 'p_{T}^{llmet} [GeV]',
#    'samples': mc
#}
#
#variables['rmat_pth'] = {
#    'name': 'higgsGenpt:pTWW',
#    'range': ([0.,15.,30.,45.,60.,80.,120.,200.,350.,400.],[0.,15.,30.,45.,60.,80.,120.,200.,350.,400.]),
#    'xaxis': 'Reco p_{T}^{H} [GeV]',
#    'yaxis': 'Gen p_{T}^{H} [GeV]',
#    'fold': 2,
#    'samples': ['ggH_hww']
#}
#
#variables['rmat_njet'] = {
#    'name': 'nGenJetCapped:njet',
#    'range': ([0.,1.,2.,3.],[0.,1.,2.,3.]),
#    'xaxis': 'Reco number of jets',
#    'yaxis': 'Gen number of jets',
#    'fold': 2,
#    'samples': ['ggH_hww']
#}

# # just for fun plots:
                 
#variables['drll']  = {  'name': 'drll', #   variable name    
#                        'range': (100,0,2), #   variable range
#                        'xaxis': 'DR_{ll}', #   x axis name
#                        'fold': 3
#                        }
#
#
#variables['nvtx']  = {   'name': 'nvtx',      
#                        'range': (40,0,40),  
#                        'xaxis': 'nvtx', 
#                        'fold': 3
#                        }
#
#variables['mll']  = {   'name': 'mll', #   variable name    
#                        'range': (20,10,200), #   variable range
#                        'xaxis': 'm_{ll} [GeV]', #   x axis name
#                         'fold': 0
#                        }
#                        
#variables['mth']  = {   'name': 'mth', #   variable name    
#                        'range': (10,60,200), #   variable range
#                        'xaxis': 'm_{T}^{H} [GeV]', #   x axis name
#                        'fold': 0
#                        }
#
#variables['ptll']  = {   'name': 'ptll', #   variable name    
#                        'range': (20,0,200), #   variable range
#                        'xaxis': 'pt_{ll} [GeV]', #   x axis name
#                        'fold': 0
#                        }
#
#variables['met']  = {   'name': 'metPfType1', #   variable name    
#                        'range': (20,0,200), #   variable range
#                        'xaxis': 'pfmet [GeV]', #   x axis name
#                        'fold': 0
#                        }
#
#variables['dphill']  = {   'name': 'abs(dphill)',     
#                        'range': (20,0,3.14),   
#                        'xaxis': ' #Delta #phi_{ll}',
#                        'fold': 3
#                        }
#
#variables['pt1']  = {   'name': 'std_vector_lepton_pt[0]',     
#                        'range': (40,0,200),   
#                        'xaxis': 'p_{T} 1st lep',
#                        'fold': 0                         
#                        }
#
#variables['pt2']  = {   'name': 'std_vector_lepton_pt[1]',     
#                        'range': (40,0,100),   
#                        'xaxis': 'p_{T} 2nd lep',
#                        'fold': 0                         
#                        }
#
#
#
#variables['eta1']  = {  'name': 'std_vector_lepton_eta[0]',     
#                        'range': (20,-3,3),   
#                        'xaxis': ' #eta 1st lep',
#                        'fold': 3                         
#                        }
#
#variables['eta2']  = {  'name': 'std_vector_lepton_eta[1]',     
#                        'range': (20,-3,3),   
#                        'xaxis': ' #eta 2nd lep',
#                        'fold': 3                         
#                        }
#
#variables['jetpt1']  = {
#                        'name': 'std_vector_jet_pt[0]',     
#                        'range': (40,0,200),   
#                        'xaxis': 'p_{T} 1st jet',
#                        'fold': 2 # 0 = not fold (default), 1 = fold underflowbin, 2 = fold overflow bin, 3 = fold underflow and overflow
#                        }
#
#variables['jetpt2']  = {
#                        'name': 'std_vector_jet_pt[1]',     
#                        'range': (40,0,200),   
#                        'xaxis': 'p_{T} 2nd jet',
#                        'fold': 2 # 0 = not fold (default), 1 = fold underflowbin, 2 = fold overflow bin, 3 = fold underflow and overflow
#                        }
#
#variables['jeteta1']  = {  'name': 'std_vector_jet_eta[0]',
#                        'range': (80,-5.0,5.0),
#                        'xaxis': ' #eta 1st jet',
#                        'fold': 0
#                        }
#
#variables['jeteta2']  = {  'name': 'std_vector_jet_eta[1]',
#                        'range': (80,-5.0,5.0),
#                        'xaxis': ' #eta 2nd jet',
#                        'fold': 0
#                        }
