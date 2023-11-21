# variables



#########################################################################


dnnScore_VBF_OFF_mixed = [0.5,0.55, 0.6,0.65, 0.7,0.75, 0.8, 0.85, 0.892, 0.926, 1.0]

dnnScore_VBF_OFF_binning = [0.5  , 0.503, 0.509, 0.513, 0.517, 0.525, 0.535, 0.541, 0.545,
       0.552, 0.56 , 0.578, 0.585, 0.593, 0.6  , 0.606, 0.616, 0.622,
       0.627, 0.637, 0.653, 0.667, 0.693, 0.704, 0.72 , 0.731, 0.759,
       0.777, 0.799, 0.811, 0.838, 0.852, 0.892, 0.926, 1.]


dnnScore_ggH_OFF_mixed = [0.5,0.55, 0.6,0.65, 0.7,0.75, 0.8, 0.85, 0.864, 0.877, 1.]

dnnScore_ggH_OFF_binning = [0.5  , 0.501, 0.502, 0.503, 0.504, 0.505, 0.506, 0.507, 0.508,
       0.509, 0.51 , 0.511, 0.512, 0.513, 0.514, 0.515, 0.516, 0.517,
       0.518, 0.519, 0.52 , 0.521, 0.522, 0.523, 0.524, 0.525, 0.526,
       0.527, 0.528, 0.529, 0.53 , 0.531, 0.532, 0.533, 0.534, 0.535,
       0.536, 0.537, 0.538, 0.539, 0.54 , 0.541, 0.542, 0.543, 0.544,
       0.545, 0.546, 0.547, 0.548, 0.549, 0.55 , 0.551, 0.552, 0.553,
       0.554, 0.555, 0.556, 0.557, 0.558, 0.559, 0.56 , 0.561, 0.562,
       0.563, 0.564, 0.565, 0.566, 0.567, 0.568, 0.569, 0.57 , 0.571,
       0.572, 0.573, 0.574, 0.575, 0.576, 0.577, 0.578, 0.579, 0.58 ,
       0.581, 0.582, 0.583, 0.584, 0.585, 0.586, 0.587, 0.588, 0.589,
       0.59 , 0.591, 0.592, 0.593, 0.594, 0.595, 0.596, 0.597, 0.598,
       0.599, 0.6  , 0.601, 0.602, 0.603, 0.604, 0.605, 0.606, 0.607,
       0.608, 0.609, 0.61 , 0.611, 0.612, 0.613, 0.614, 0.615, 0.616,
       0.617, 0.618, 0.619, 0.62 , 0.621, 0.622, 0.623, 0.624, 0.625,
       0.626, 0.627, 0.628, 0.629, 0.63 , 0.631, 0.632, 0.633, 0.634,
       0.635, 0.636, 0.637, 0.638, 0.639, 0.64 , 0.641, 0.643, 0.644,
       0.645, 0.646, 0.647, 0.648, 0.649, 0.65 , 0.651, 0.652, 0.653,
       0.654, 0.655, 0.656, 0.657, 0.658, 0.659, 0.66 , 0.661, 0.662,
       0.663, 0.664, 0.665, 0.666, 0.667, 0.668, 0.669, 0.67 , 0.671,
       0.672, 0.673, 0.674, 0.675, 0.676, 0.677, 0.679, 0.68 , 0.681,
       0.682, 0.683, 0.684, 0.685, 0.686, 0.687, 0.688, 0.689, 0.69 ,
       0.691, 0.692, 0.693, 0.694, 0.695, 0.697, 0.698, 0.701, 0.703,
       0.704, 0.706, 0.707, 0.708, 0.709, 0.71 , 0.712, 0.713, 0.716,
       0.717, 0.718, 0.719, 0.721, 0.722, 0.723, 0.724, 0.725, 0.727,
       0.728, 0.731, 0.733, 0.734, 0.737, 0.739, 0.743, 0.745, 0.747,
       0.748, 0.749, 0.752, 0.753, 0.755, 0.758, 0.759, 0.76 , 0.762,
       0.763, 0.766, 0.77 , 0.771, 0.772, 0.774, 0.776, 0.778, 0.78 ,
       0.783, 0.785, 0.789, 0.791, 0.793, 0.796, 0.798, 0.801, 0.804,
       0.808, 0.811, 0.813, 0.818, 0.825, 0.831, 0.841, 0.845, 0.851,
       0.864, 0.877, 1.]

variables['events']  = {   
    'name': '1',
    'range' : (1,0,2),
    'xaxis' : 'events',
    'fold' : 3
}

variables['dnnScore_MAX']  = {   'name': 'dnnScore_MAX',
                        'range' : (8, -1.0,7.0),
                        'xaxis' : 'CAT INDEX',
                        'fold' : 3
                        }

variables['dnnScore_VBF_OFF_norm']  = {   'name': 'dnnScore_VBF_OFF',
                        'range' : (10,.5,1),
                        'xaxis' : 'dnn_{VBF_off}',
                        'fold' : 3
                        }

variables['dnnScore_VBF_OFF_mixed']  = {   'name': 'dnnScore_VBF_OFF',
                        'range' : (dnnScore_VBF_OFF_mixed,),
                        'xaxis' : 'dnn_{VBF_off}',
                        'fold' : 3
                        }

variables['dnnScore_VBF_OFF_rebinned']  = {   'name': 'dnnScore_VBF_OFF',
                        'range' : (dnnScore_VBF_OFF_binning,),
                        'xaxis' : 'dnn_{VBF_off}',
                        'fold' : 3
                        }

variables['dnnScore_VBF_OFF']  = {   'name': 'dnnScore_VBF_OFF',
                        'range' : (100, 0,1.0),
                        'xaxis' : 'dnn_{VBF_off}',
                        'fold' : 3
                        }
variables['dnnScore_VBF_ON']  = {   'name': 'dnnScore_VBF_ON',
                        'range' : (20, 0,1.0),
                        'xaxis' : 'dnn_{VBF_on}',
                        'fold' : 3
                        }
variables['dnnScore_ggH_OFF']  = {   'name': 'dnnScore_ggH_OFF',
                        'range' : (20, 0,1.0),
                        'xaxis' : 'dnn_{ggH_off}',
                        'fold' : 3
                        }
variables['dnnScore_ggH_OFF_norm']  = {   'name': 'dnnScore_ggH_OFF',
                        'range' : (10,.5,1),
                        'xaxis' : 'dnn_{ggH_off}',
                        'fold' : 3
                        }
variables['dnnScore_ggH_OFF_mixed']  = {   'name': 'dnnScore_ggH_OFF',
                        'range' : (dnnScore_ggH_OFF_mixed,),
                        'xaxis' : 'dnn_{ggH_off}',
                        'fold' : 3
                        }
variables['dnnScore_ggH_OFF_rebinned']  = {   'name': 'dnnScore_ggH_OFF',
                        'range' : (dnnScore_ggH_OFF_binning,),
                        'xaxis' : 'dnn_{ggH_off}',
                        'fold' : 3
                        }
variables['dnnScore_ggH_ON']  = {   'name': 'dnnScore_ggH_ON',
                        'range' : (20, 0,1.0),
                        'xaxis' : 'dnn_{ggH_on}',
                        'fold' : 3
                        }
variables['dnnScore_top']  = {   'name': 'dnnScore_top',
                        'range' : (20, 0,1.0),
                        'xaxis' : 'dnn_{top}',
                        'fold' : 3
                        }
variables['dnnScore_WW']  = {   'name': 'dnnScore_WW',
                        'range' : (20, 0,1.0),
                        'xaxis' : 'dnn_{WW}',
                        'fold' : 3
                        }

variables['mjj']  = {   'name': 'mjj',
                        'range' : (50, 400,1000),
                        'xaxis' : 'm_{jj} [GeV]',
                        'fold' : 3
                        }

variables['detajj']  = {   'name': 'detajj',
                        'range' : (10, 3,10),
                        'xaxis' : '#Delta#eta_{jj} [GeV]',
                        'fold' : 3
                        }

variables['dphijj']  = {   'name': 'dphijj',
                        'range' : (40, -4,4),
                        'xaxis' : '#Delta#phi_{jj} [GeV]',
                        'fold' : 3
                        }



variables['mll']  = {   'name': 'mll',
                        'range' : (30, 30,250),
                        'xaxis' : 'm_{ll} [GeV]',
                        'fold' : 3
                        }


variables['drll']  = {   'name': 'drll',
                         'range' : (30, 0.25, 2.5),
                        'xaxis' : '#Delta R_{ll}',
                        'fold' : 3
                        }


variables['detall']  = {   'name': 'abs(Lepton_eta[0]-Lepton_eta[1])',
                            'range' : (30, 0, 5),
                            'xaxis' : 'deta_{ll} [GeV]',
                         'fold' : 3
                         }


# variables['drll_zoom']  = {   'name': 'drll',
#                         'range' : (40, 0, 1),
#                         'xaxis' : 'zoom dr_{ll} [GeV]',
#                         'fold' : 3
#                         }


variables['mth']  = {   'name': 'mth',
                        'range' : (30, 50,400),
                        'xaxis' : 'm_{T}^{ll, p_{T}^{miss}} [GeV]',
                        'fold' : 3
                        }

variables['mtw2']  = {   'name': 'mtw2',
                        'range' : (30, 20,300),
                         'xaxis' : 'm_{T}^{p_{T}^{min}, p_{T}^{miss}} [GeV]',
                        'fold' : 3
                        }



# variables['mT2']  = {   'name': 'mT2',
#                         'range' : (30, 20,300),
#                         'xaxis' : 'm_{T}^{2} [GeV]',
#                         'fold' : 0
#                         }


# variables['mTi']  = {   'name': 'mTi',
#                         'range' : (40, 20,300),
#                         'xaxis' : 'm_{ll+MET} [GeV]',
#                         'fold' : 0
#                         }

variables['ptll']  = {   'name': 'ptll',     
                        'range' : (30, 30,300),   
                       'xaxis' : 'p_{T}^{ll} [GeV]',
                        'fold' : 3
                        }

variables['pt1']  = {   'name': 'Lepton_pt[0]',     
                        'range' : (30,25,250),   
                        'xaxis' : 'p_{T}^{max} [GeV]',
                        'fold'  : 3
                        }

variables['pt2']  = {   'name': 'Lepton_pt[1]',     
                        'range' : (30,20,150),   
                        'xaxis' : 'p_{T}^{min} [GeV]',
                        'fold'  : 3 
                        }
#variables['qgl_j1'] = {'name': 'Jet_qgl[CleanJet_jetIdx[0]]',
#                        'range' : (20,0,1),
#                        'xaxis' : 'gql_{j1}',
#                        'fold'  : 3
#                        }

#variables['qgl_j2'] = {'name': 'Jet_qgl[CleanJet_jetIdx[1]]',
#                        'range' : (20,0,1),
#                        'xaxis' : 'gql_{j2}',
#                        'fold'  : 3
#                        }
# variables['eta1']  = {  'name': 'Lepton_eta[0]',     
#                         'range' : (30,-3,3),   
#                         'xaxis' : '#eta^{max}',
#                         'fold'  : 3                         
#                         }

# variables['eta2']  = {  'name': 'Lepton_eta[1]',     
#                         'range' : (30,-3,3),   
#                         'xaxis' : '#eta^{min}',
#                         'fold'  : 3                         
#                         }

                        
# variables['phi1']  = {  'name': 'Lepton_phi[0]',
#                         'range' : (40,-3.2,3.2),
#                         'xaxis' : '#phi 1st lep',
#                         'fold'  : 3
#                         }

# variables['phi2']  = {  'name': 'Lepton_phi[1]',
#                         'range' : (40,-3.2,3.2),
#                         'xaxis' : '#phi 2nd lep',
#                         'fold'  : 3
#                         }

variables['puppimet']  = {
                        'name': 'PuppiMET_pt',
                        'range' : (30,20,300),
                        'xaxis' : 'p_{T}^{miss} [GeV]',
                        'fold'  : 3
                        }


# variables['PfMetDivSumMet']  = {
#                         'name': 'PfMetDivSumMet',
#                         'range' : (30,0,10),
#                         'xaxis' : 'METsig',
#                         'fold'  : 3
#                         }


# variables['pfmet']  = {
#                         'name': 'MET_pt',
#                         'range' : (40,0,200),
#                         'xaxis' : 'pfmet [GeV]',
#                         'fold'  : 3
#                         }


# variables['Fixedpfmet']  = {
#                         'name': 'METFixEE2017_pt',
#                         'range' : (40,0,300),
#                         'xaxis' : 'Fixedpfmet [GeV]',
#                         'fold'  : 3
#                         }


# variables['njet']  = {
#                         'name': 'Sum$(CleanJet_pt>30)',     
#                         'range' : (5,0,5),   
#                         'xaxis' : 'Number of jets',
#                         'fold' : 2   # 0 = not fold (default), 1 = fold underflowbin, 2 = fold overflow bin, 3 = fold underflow and overflow
#                         }

# variables['jetpt1']  = {
#                         'name': '(Sum$(CleanJet_pt>30)>0)*(Alt$(CleanJet_pt[0], 0)) - (Sum$(CleanJet_pt>30)==0)*99',
#                         'range' : (40,0,200),
#                         'xaxis' : 'p_{T} 1st jet',
#                         'fold' : 2   # 0 = not fold (default), 1 = fold underflowbin, 2 = fold overflow bin, 3 = fold underflow and overflow
#                         }

# variables['jetpt2']  = {
#                         'name': '(Sum$(CleanJet_pt>30)>0)*(Alt$(CleanJet_pt[1], 0)) - (Sum$(CleanJet_pt>30)==0)*99',
#                         'range' : (40,0,200),
#                         'xaxis' : 'p_{T} 2nd jet',
#                         'fold' : 2   # 0 = not fold (default), 1 = fold underflowbin, 2 = fold overflow bin, 3 = fold underflow and overflow
#                         }

# variables['jeteta1']  = {  'name': '(Sum$(CleanJet_pt>30)>0)*(Alt$(CleanJet_eta[0], 0)) - (Sum$(CleanJet_pt>30)==0)*99',
#                         'range' : (40,-5.0,5.0),
#                         'xaxis' : '#eta 1st jet',
#                         'fold'  : 0
#                         }

# variables['jeteta2']  = {  'name': '(Sum$(CleanJet_pt>30)>1)*(Alt$(CleanJet_eta[1], 0)) - (Sum$(CleanJet_pt>30)<=1)*99',
#                         'range' : (40,-5.0,5.0),
#                         'xaxis' : '#eta 2nd jet',
#                         'fold'  : 0
#                         }

# variables['trkMet']  = {   'name': 'TkMET_pt',
#                         'range' : (40,0,200),
#                         'xaxis' : 'trk met [GeV]',
#                          'fold' : 3
#                         }

variables['dphill']  = {   'name': 'abs(dphill)',     
                        'range' : (30,0,3.14),   
                        'xaxis' : '#Delta#phi_{ll}',
                        'fold' : 3
                        }


variables['dphillmet']  = {   'name': 'dphillmet',     
                        'range' : (30,0.5,3.14),   
                        'xaxis' : '#Delta#phi_{ll, p_{T}^{miss}}',
                        'fold' : 3
                        }
