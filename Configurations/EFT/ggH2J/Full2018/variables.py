# variables

#variables = {}
    
#'fold' : # 0 = not fold (default), 1 = fold underflowbin, 2 = fold overflow bin, 3 = fold underflow and 
"""
variables['ptjj'] = { 'name' : 'ptjj[0]',
                     'range': (50,0,1000),
                     'xaxis': 'p_{T}^{jj}',
                     'fold' : 3,
                     'cuts' : ['hww2l2v_13TeV_top_of2j','hww2l2v_13TeV_dytt_of2j','hww2l2v_13TeV_WW_of2j', 'hww2l2v_13TeV_top_of2j_nofjveto']
                   }
"""
'''
variables['ptl1'] = { 'name' : 'Lepton_pt[0]',
                     'range': (20,0,400),
                     'xaxis': 'p_{T}^{lep1}',
                     'fold' : 3,
                     'cuts' : ['hww2l2v_13TeV_top_of2j','hww2l2v_13TeV_dytt_of2j','hww2l2v_13TeV_WW_of2j']

                   }

variables['ptl2'] = { 'name' : 'Lepton_pt[1]',
                     'range': (20,0,400),
                      'xaxis': 'p_{T}^{lep2}',
                     'fold' : 3,
                     'cuts' : ['hww2l2v_13TeV_top_of2j','hww2l2v_13TeV_dytt_of2j','hww2l2v_13TeV_WW_of2j']
                   }

variables['met'] = { 'name' : 'PuppiMET_pt',
                     'range': (20,0,400),
                     'xaxis': 'MET',
                     'fold' : 3,
                     'cuts' : ['hww2l2v_13TeV_top_of2j','hww2l2v_13TeV_dytt_of2j','hww2l2v_13TeV_WW_of2j']
                   }
'''
"""
variables['mjj'] = { 'name' : 'mjj',
                     'range': (80,0,400),
                     'xaxis': 'm_{jj}',
                     'fold' : 3,
                     'cuts' : ['hww2l2v_13TeV_top_of2j','hww2l2v_13TeV_dytt_of2j','hww2l2v_13TeV_WW_of2j']
                   }
"""
'''
variables['detajj'] = { 'name' : 'detajj',
                        'range': (30,0,10),
                        'xaxis': '#Delta#eta_{jj}',
                        'fold' : 3,
                        'cuts' : ['hww2l2v_13TeV_top_of2j','hww2l2v_13TeV_dytt_of2j','hww2l2v_13TeV_WW_of2j']
                   }

variables['njet'] = { 'name' : 'njet',
                      'range': (6,0,6),
                      'xaxis': 'number of jets',
                      'fold' : 3,
                     'cuts' : ['hww2l2v_13TeV_top_of2j','hww2l2v_13TeV_dytt_of2j','hww2l2v_13TeV_WW_of2j']
                   }

variables['nfjet'] = { 'name' : 'nCleanFatJet', # pt and tau21 cuts applied
                      'range': (5,0,5),
                      'xaxis': 'number of fat jets',
                      'fold' : 3,
                      'cuts' : ['hww2l2v_13TeV_top_of2j','hww2l2v_13TeV_dytt_of2j','hww2l2v_13TeV_WW_of2j']
                   }
'''
"""
variables['ptll'] = {   'name': 'ptll',
                        'range': (20,0,400),
                        'xaxis': 'p_{T}^{ll}',
                        'fold': 3,
                        'cuts' : ['hww2l2v_13TeV_top_of2j','hww2l2v_13TeV_dytt_of2j','hww2l2v_13TeV_WW_of2j']
                       }
"""
'''
variables['mtw2'] = { 'name' : 'mtw2',
                     'range': (20,0,150),
                     'xaxis': 'm_{T}^{W2}',
                     'fold' : 3,
                     'cuts' : ['hww2l2v_13TeV_top_of2j','hww2l2v_13TeV_dytt_of2j','hww2l2v_13TeV_WW_of2j']
                    }

variables['mtw1'] = { 'name' : 'mtw1',
                     'range': (20,0,150),
                      'xaxis': 'm_{T}^{W1}',
                     'fold' : 3,
                     'cuts' : ['hww2l2v_13TeV_top_of2j','hww2l2v_13TeV_dytt_of2j','hww2l2v_13TeV_WW_of2j']
                    }

variables['pTWW'] = { 'name' : 'pTWW',
                     'range': (50,0,1000),
                     'xaxis': 'p_{T}^{H}',
                     'fold' : 3,
                     'cuts' : ['hww2l2v_13TeV_top_of2j','hww2l2v_13TeV_dytt_of2j','hww2l2v_13TeV_WW_of2j']
                   }


variables['hm'] = { 'name' : 'hm',
                     'range': (20,0,200),
                     'xaxis': 'm_{H}',
                     'fold' : 3,
                     'cuts' : ['hww2l2v_13TeV_top_of2j','hww2l2v_13TeV_dytt_of2j','hww2l2v_13TeV_WW_of2j']
		  }

variables['dphi'] = { 'name' : 'dphis',
                      'range': (10,-3.2,3.2),
                     'xaxis': 'DPhi_{jj}',
                     'fold' : 3,
                     'cuts' : ['hww2l2v_13TeV_top_of2j','hww2l2v_13TeV_dytt_of2j','hww2l2v_13TeV_WW_of2j']
                   }
'''
"""
variables['mll'] = { 'name' : 'mll',
                     'range': ([10,45,210],),
                     'xaxis': 'm_{ll}',
                     'fold' : 3,
                     'cuts' : ['hww2l2v_13TeV_top_of2j','hww2l2v_13TeV_dytt_of2j','hww2l2v_13TeV_WW_of2j']
                   }
"""
variables['events']  = {   'name': '1',
                        'range' : (1,0,2),
                        'xaxis' : 'events',
                         'fold' : 3,
#                     'cuts' : ['hww2l2v_13TeV_top_of2j','hww2l2v_13TeV_dytt_of2j','hww2l2v_13TeV_WW_of2j']
                        }
"""
variables['mth'] = { 'name' : 'mth',
                     'range': (20,0,200),
                     'xaxis': 'm_{T}^{H}',
                     'fold' : 3,
                     'cuts' : ['hww2l2v_13TeV_top_of2j','hww2l2v_13TeV_dytt_of2j','hww2l2v_13TeV_WW_of2j']
                   }
"""
####################################
def DeclareKD3D(KDName,Xaxis, mainvar,mainbinning,sub1var,sub1binning,sub2var,sub2binning, Cuts):

 nbins =  (len(sub2binning) - 1)*(len(sub1binning) - 1)*(len(mainbinning) - 1)

 name = ''
 sub2bin = ['1'] # folding underflow -> always 1
 for isub2 in range(1, len(sub2binning) - 1):
    sub2bin.append('('+sub2var+' >= %1.2f)' % sub2binning[isub2])
 name += '+'.join(sub2bin)
 name += ' + %d*(' % (len(sub2binning) - 1)
 sub1bin = [] # 1-1 for first bin
 for isub1 in range(1, len(sub1binning) - 1):
    sub1bin.append('('+sub1var+' >= %1.2f)' % sub1binning[isub1])
 name += '+'.join(sub1bin)
 name += ')'
 name += ' + %d*(' % ((len(sub2binning) - 1)*(len(sub1binning) - 1))
 mainbin = [] # 1-1 for first bin
 for imain in range(1, len(mainbinning) - 1):
    mainbin.append('('+mainvar+' >= %1.2f)' % mainbinning[imain])
 name += '+'.join(mainbin)
 name += ') - 0.5'

 variables['kd3d_'+KDName+''] = {
    'name': name,
    'range': (nbins, 0., nbins),
    'xaxis': Xaxis,
    'cuts' : Cuts
 }

############ ggH KD ############## 
"""
variables['kd_smvbf'] = { 'name' : 'kd_smvbf',
                       'range': (10,0,1),
                          'xaxis': 'D_{VBF}',
                       'fold' : 3,
                        'cuts' : ['hww2l2v_13TeV_top_of2j','hww2l2v_13TeV_dytt_of2j','hww2l2v_13TeV_WW_of2j']
                     }

variables['kd_ggh_hm'] = { 'name' : 'kd_ggh_hm',
                       'range': (10,0,1),
                       'xaxis': 'D_{ggH 0^{-}}',
                       'fold' : 3,
                       'cuts' : ['hww2l2v_13TeV_top_of2j','hww2l2v_13TeV_dytt_of2j','hww2l2v_13TeV_WW_of2j']
                     }

variables['kd_ggh_mixhm'] = { 'name' : 'kd_ggh_mixhm',
                       'range': (20,-1,1),
                       'xaxis': 'D_{ggH CP}',
                       'fold' : 3,
                       'cuts' : ['hww2l2v_13TeV_top_of2j','hww2l2v_13TeV_dytt_of2j','hww2l2v_13TeV_WW_of2j']
                     }
"""

variables['kd2d_ggh_hm'] = { 'name': 'kd_ggh_hm:kd_smvbf',
                         'range' : ([0.0,0.5,1],[0,0.2,0.3,0.4,0.5,0.6,0.7,0.8,1],),
                             'xaxis' : 'D_{ggH 0^{-}:kd_vbf}',
                         'fold' : 3,
                         'cuts' : ['hww2l2v_13TeV_top_of2j','hww2l2v_13TeV_dytt_of2j', 'hww2l2v_13TeV_of2j_ggh_thmip','hww2l2v_13TeV_of2j_ggh_thmin', 'hww2l2v_13TeV_WW_of2j']
                          }

"""
variables['kd2d_ggh_hm2'] = { 'name': 'kd_ggh_hm:kd_smvbf',
                         'range' : ([0.0,0.5,1],[0,0.3,0.4,0.5,0.6,0.7,1],),
                             'xaxis' : 'D_{ggH 0^{-}:kd_vbf}',
                         'fold' : 3,
                         'cuts' : ['hww2l2v_13TeV_top_of2j','hww2l2v_13TeV_dytt_of2j', 'hww2l2v_13TeV_of2j_ggh_thmip','hww2l2v_13TeV_of2j_ggh_thmin', 'hww2l2v_13TeV_WW_of2j']
                          }

"""
