# variables

#variables = {}
    
#'fold' : # 0 = not fold (default), 1 = fold underflowbin, 2 = fold overflow bin, 3 = fold underflow and 

variables['ptjj'] = { 'name' : 'ptjj[0]',
                     'range': (50,0,1000),
                     'xaxis': 'p_{T}^{jj}',
                     'fold' : 3,
                     'cuts' : ['hww2l2v_13TeV_top_of2j','hww2l2v_13TeV_dytt_of2j','hww2l2v_13TeV_WW_of2j', 'hww2l2v_13TeV_top_of2j_nofjveto']
                   }
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
variables['mjj'] = { 'name' : 'mjj',
                     'range': (80,0,400),
                     'xaxis': 'm_{jj}',
                     'fold' : 3,
                     'cuts' : ['hww2l2v_13TeV_top_of2j','hww2l2v_13TeV_dytt_of2j','hww2l2v_13TeV_WW_of2j']
                   }
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
variables['ptll'] = {   'name': 'ptll',
                        'range': (20,0,400),
                        'xaxis': 'p_{T}^{ll}',
                        'fold': 3,
                        'cuts' : ['hww2l2v_13TeV_top_of2j','hww2l2v_13TeV_dytt_of2j','hww2l2v_13TeV_WW_of2j']
                       }
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
variables['mll'] = { 'name' : 'mll',
                     'range': ([10,45,210],),
                     'xaxis': 'm_{ll}',
                     'fold' : 3,
                     'cuts' : ['hww2l2v_13TeV_top_of2j','hww2l2v_13TeV_dytt_of2j','hww2l2v_13TeV_WW_of2j']
                   }
variables['events']  = {   'name': '1',
                        'range' : (1,0,2),
                        'xaxis' : 'events',
                         'fold' : 3,
                     'cuts' : ['hww2l2v_13TeV_top_of2j','hww2l2v_13TeV_dytt_of2j','hww2l2v_13TeV_WW_of2j', 'hww2l2v_13TeV_of2j_vh']
                        }
variables['mth'] = { 'name' : 'mth',
                     'range': (20,0,200),
                     'xaxis': 'm_{T}^{H}',
                     'fold' : 3,
                     'cuts' : ['hww2l2v_13TeV_top_of2j','hww2l2v_13TeV_dytt_of2j','hww2l2v_13TeV_WW_of2j']
                   }

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

#DeclareKD3D('vbf_hm','D_{VBF 0^{-}}', 'kd_vbf',[0.0,0.5,0.75,1],'mll',[10,40,76.2,210],'kd_vbf_hm',[0,0.1,0.2,0.3,0.4,0.5,0.6,0.7,0.8,0.9,1],
#['hww2l2v_13TeV_top_of2j','hww2l2v_13TeV_dytt_of2j','hww2l2v_13TeV_of2j_vbf_hmip','hww2l2v_13TeV_of2j_vbf_hmin'])

DeclareKD3D('vbf_hm','D_{VBF 0^{-}}', 'kd_vbf',[0.0,0.75,1],'mll',[10,45,106.2],'kd_vbf_hm',[0,0.1,0.2,0.3,0.4,0.5,0.6,0.7,0.8,0.9,1],
['hww2l2v_13TeV_top_of2j','hww2l2v_13TeV_dytt_of2j','hww2l2v_13TeV_of2j_vbf_hmip','hww2l2v_13TeV_of2j_vbf_hmin','hww2l2v_13TeV_WW_of2j','hww2l2v_13TeV_of2j_vbf'])

##################################################### [0,0.1,0.2,0.3,0.5,0.7,0.8,0.9,1]

#DeclareKD3D('vbf_hp','D_{VBF 0^{+}}', 'kd_vbf',[0.0,0.5,0.75,1],'mll',[10,40,76.2,210],'kd_vbf_hp',[0,0.1,0.2,0.3,0.4,0.5,0.6,0.7,0.8,0.9,1],
#['hww2l2v_13TeV_top_of2j','hww2l2v_13TeV_dytt_of2j','hww2l2v_13TeV_of2j_vbf_hpip','hww2l2v_13TeV_of2j_vbf_hpin'])

DeclareKD3D('vbf_hp','D_{VBF 0^{+}}', 'kd_vbf',[0.0,0.75,1],'mll',[10,45,106.2],'kd_vbf_hp',[0,0.1,0.2,0.3,0.4,0.5,0.6,0.7,0.8,0.9,1],
['hww2l2v_13TeV_top_of2j','hww2l2v_13TeV_dytt_of2j','hww2l2v_13TeV_of2j_vbf_hpip','hww2l2v_13TeV_of2j_vbf_hpin','hww2l2v_13TeV_WW_of2j','hww2l2v_13TeV_of2j_vbf'])

######################################################
#DeclareKD3D('vbf_hl','D_{VBF 0^{#Lambda_{1}}}', 'kd_vbf',[0.0,0.5,0.75,1],'mll',[10,40,76.2,210],'kd_vbf_hl',[0,0.1,0.2,0.3,0.4,0.5,0.6,0.7,0.8,0.9,1],
#['hww2l2v_13TeV_top_of2j','hww2l2v_13TeV_dytt_of2j','hww2l2v_13TeV_of2j_vbf'])

DeclareKD3D('vbf_hl','D_{VBF 0^{#Lambda_{1}}}', 'kd_vbf',[0.0,0.75,1],'mll',[10,45,106.2],'kd_vbf_hl',[0,0.1,0.2,0.3,0.4,0.5,0.6,0.7,0.8,0.9,1],
['hww2l2v_13TeV_top_of2j','hww2l2v_13TeV_dytt_of2j','hww2l2v_13TeV_of2j_vbf','hww2l2v_13TeV_WW_of2j'])
#########################################

#DeclareKD3D('vbf_hlzg','D_{VBF 0^{#Lambda_{1}^{Z#gamma}}}', 'kd_vbf',[0.0,0.5,0.75,1],'mll',[10,40,76.2,210],'kd_vbf_hlzg',[0,0.1,0.2,0.3,0.4,0.5,0.6,0.7,0.8,0.9,1],
#['hww2l2v_13TeV_top_of2j','hww2l2v_13TeV_dytt_of2j','hww2l2v_13TeV_of2j_vbf'])

DeclareKD3D('vbf_hlzg','D_{VBF 0^{#Lambda_{1}^{Z#gamma}}}', 'kd_vbf',[0.0,0.75,1],'mll',[10,45,106.2],'kd_vbf_hlzg',[0,0.1,0.2,0.3,0.4,0.5,0.6,0.7,0.8,0.9,1],
['hww2l2v_13TeV_top_of2j','hww2l2v_13TeV_dytt_of2j','hww2l2v_13TeV_of2j_vbf','hww2l2v_13TeV_WW_of2j'])

############ VBF KD ############## 

variables['kd_vbf'] = { 'name' : 'kd_vbf',
                       'range': (10,0,1),
                       'xaxis': 'D_{VBF}',
                       'fold' : 3,
                       'cuts' : ['hww2l2v_13TeV_top_of2j','hww2l2v_13TeV_dytt_of2j','hww2l2v_13TeV_WW_of2j']
                     }
variables['kd_vbf_2'] = { 'name' : 'kd_vbf',
                       'range': (10,0,1),
                       'xaxis': 'D_{VBF}',
                       'fold' : 3,
                       'cuts' : ['hww2l2v_13TeV_top_of2j','hww2l2v_13TeV_dytt_of2j','hww2l2v_13TeV_WW_of2j']
                     }

variables['kd_vbf_hm'] = { 'name' : 'kd_vbf_hm',
                       'range': (20,0,1),
                       'xaxis': 'D_{VBF 0^{-}}',
                       'fold' : 3,
                       'cuts' : ['hww2l2v_13TeV_top_of2j','hww2l2v_13TeV_dytt_of2j','hww2l2v_13TeV_WW_of2j']
                     }

variables['kd_vbf_hp'] = { 'name' : 'kd_vbf_hp',
                       'range': (20,0,1),
                       'xaxis': 'D_{VBF 0^{+}}',
                       'fold' : 3,
                       'cuts' : ['hww2l2v_13TeV_top_of2j','hww2l2v_13TeV_dytt_of2j','hww2l2v_13TeV_WW_of2j']
                     }

variables['kd_vbf_hl'] = { 'name' : 'kd_vbf_hl',
                       'range': (20,0,1),
                        'xaxis': 'D_{VBF 0^{#Lambda_{1}}}',
                       'fold' : 3,
                       'cuts' : ['hww2l2v_13TeV_top_of2j','hww2l2v_13TeV_dytt_of2j','hww2l2v_13TeV_WW_of2j']
                     }

variables['kd_vbf_hlzg'] = { 'name' : 'kd_vbf_hlzg',
                       'range': (20,0,1),
                             'xaxis': 'D_{VBF 0^{#Lambda_{1}^{Z#gamma}}}',
                       'fold' : 3,
                       'cuts' : ['hww2l2v_13TeV_top_of2j','hww2l2v_13TeV_dytt_of2j','hww2l2v_13TeV_WW_of2j']
                     }


variables['kd_vbf_mixhm'] = { 'name' : 'kd_vbf_mixhm',
                              'range': (20,-1,1),
                          'xaxis': 'D_{VBF CP}',
                          'fold' : 3,
                          'cuts' : ['hww2l2v_13TeV_top_of2j','hww2l2v_13TeV_dytt_of2j','hww2l2v_13TeV_WW_of2j']
                        }

variables['kd_vbf_mixhp'] = { 'name' : 'kd_vbf_mixhp',
                          'range': (20,-1,1),
                          'xaxis': 'D_{VBF Int}',
                          'fold' : 3,
                          'cuts' : ['hww2l2v_13TeV_top_of2j','hww2l2v_13TeV_dytt_of2j','hww2l2v_13TeV_WW_of2j']
                        }


#DeclareKD3D('vbf','hm','D_{VBF 0^{-}}')
#DeclareKD3D('vbf','hp','D_{VBF 0^{+}}')
#DeclareKD3D('vbf','hl','D_{VBF 0^{#Lambda_1}}')
#DeclareKD3D('vbf','hlzg','D_{VBF 0^{#Lambda_{1}^{Z#gamma}}}')

############ VH KD ######################


variables['kd_vh'] = { 'name' : 'kd_vh',
                       'range': (10,0,1),
                       'xaxis': 'D_{VH}',
                       'fold' : 3,
                       'cuts' : ['hww2l2v_13TeV_top_of2j','hww2l2v_13TeV_dytt_of2j','hww2l2v_13TeV_WW_of2j']
                     }

variables['kd_vh_hm'] = { 'name' : 'kd_vh_hm',
                       'range': (20,0,1),
                       'xaxis': 'D_{VH 0^{-}}',
                       'fold' : 3,
                       'cuts' : ['hww2l2v_13TeV_top_of2j','hww2l2v_13TeV_dytt_of2j','hww2l2v_13TeV_WW_of2j']
                     }

variables['kd_vh_hp'] = { 'name' : 'kd_vh_hp',
                       'range': (20,0,1),
                       'xaxis': 'D_{VH 0^{+}}',
                       'fold' : 3,
                       'cuts' : ['hww2l2v_13TeV_top_of2j','hww2l2v_13TeV_dytt_of2j','hww2l2v_13TeV_WW_of2j']
                     }

variables['kd_vh_hl'] = { 'name' : 'kd_vh_hl',
                       'range': (20,0,1),
                       'xaxis': 'D_{VH 0^{#Lambda_{1}}}',
                       'fold' : 3,
                       'cuts' : ['hww2l2v_13TeV_top_of2j','hww2l2v_13TeV_dytt_of2j','hww2l2v_13TeV_WW_of2j']
                     }

variables['kd_vh_hlzg'] = { 'name' : 'kd_vh_hlzg',
                       'range': (20,0,1),
                       'xaxis': 'D_{VH 0^{#Lambda_{1}^{Z#gamma}}}',
                       'fold' : 3,
                       'cuts' : ['hww2l2v_13TeV_top_of2j','hww2l2v_13TeV_dytt_of2j','hww2l2v_13TeV_WW_of2j']
                     }


variables['kd_vh_mixhm'] = { 'name' : 'kd_vh_mixhm',
                             'range': (20,-1,1),
                          'xaxis': 'D_{VH CP}',
                          'fold' : 3,
                          'cuts' : ['hww2l2v_13TeV_top_of2j','hww2l2v_13TeV_dytt_of2j','hww2l2v_13TeV_WW_of2j']
                        }

variables['kd_vh_mixhp'] = { 'name' : 'kd_vh_mixhp',
                             'range': (20,-1,1),
                          'xaxis': 'D_{VH Int}',
                          'fold' : 3,
                          'cuts' : ['hww2l2v_13TeV_top_of2j','hww2l2v_13TeV_dytt_of2j','hww2l2v_13TeV_WW_of2j']
                        }

################################################

#OPTION 2
#variables['kd2d_vh_hm'] = { 'name': 'kd_vh_hm:mll',
#                         'range' : ([10,40,76.2,210],[0,0.1,0.2,0.3,0.4,0.5,0.6,0.7,0.8,0.9,1],),
#                         'xaxis' : 'D_{VH 0^{-}:m_{ll}}',
#                         'fold' : 3,
#                         'cuts' : ['hww2l2v_13TeV_top_of2j','hww2l2v_13TeV_dytt_of2j','hww2l2v_13TeV_of2j_vh','hww2l2v_13TeV_of2j_vh_hmip','hww2l2v_13TeV_of2j_vh_hmin']
#                          }

variables['kd2d_vh_hm'] = { 'name': 'kd_vh_hm:mll',
                         'range' : ([10,45,106.2],[0,0.25,0.5,0.75,1],),
                         'xaxis' : 'D_{VH 0^{-}:m_{ll}}',
                         'fold' : 3,
                         'cuts' : ['hww2l2v_13TeV_top_of2j','hww2l2v_13TeV_dytt_of2j','hww2l2v_13TeV_of2j_vh','hww2l2v_13TeV_of2j_vh_hmip','hww2l2v_13TeV_of2j_vh_hmin','hww2l2v_13TeV_WW_of2j']
                          }

################################################
#OPTION 2
#variables['kd2d_vh_hp'] = { 'name': 'kd_vh_hp:mll',
#                         'range' : ([10,40,76.2,210],[0,0.1,0.2,0.3,0.4,0.5,0.6,0.7,0.8,0.9,1],),
#                            'xaxis' : 'D_{VH 0^{+}:m_{ll}}',
#                         'fold' : 3,
#                         'cuts' : ['hww2l2v_13TeV_top_of2j','hww2l2v_13TeV_dytt_of2j','hww2l2v_13TeV_of2j_vh','hww2l2v_13TeV_of2j_vh_hpip','hww2l2v_13TeV_of2j_vh_hpin']
#                          }

variables['kd2d_vh_hp'] = { 'name': 'kd_vh_hp:mll',
                         'range' : ([10,45,106.2],[0,0.25,0.50,0.75,1],),
                            'xaxis' : 'D_{VH 0^{+}:m_{ll}}',
                         'fold' : 3,
                         'cuts' : ['hww2l2v_13TeV_top_of2j','hww2l2v_13TeV_dytt_of2j','hww2l2v_13TeV_of2j_vh','hww2l2v_13TeV_WW_of2j']
                          }

##################################################
#OPTION 2
#variables['kd2d_vh_hl'] = { 'name': 'kd_vh_hl:mll',
#                         'range' : ([10,40,76.2,210],[0,0.1,0.2,0.3,0.4,0.5,0.6,0.7,0.8,0.9,1],),
#                         'xaxis' : 'D_{VH 0^{#Lambda_{1}}:m_{ll}}',     
#                         'fold' : 3,
#                         'cuts' : ['hww2l2v_13TeV_top_of2j','hww2l2v_13TeV_dytt_of2j','hww2l2v_13TeV_of2j_vh']
#                          }

variables['kd2d_vh_hl'] = { 'name': 'kd_vh_hl:mll',
                         'range' : ([10,45,106.2],[0,0.25,0.50,0.75,1],),
                         'xaxis' : 'D_{VH 0^{#Lambda_{1}}:m_{ll}}',     
                         'fold' : 3,
                         'cuts' : ['hww2l2v_13TeV_top_of2j','hww2l2v_13TeV_dytt_of2j','hww2l2v_13TeV_of2j_vh','hww2l2v_13TeV_WW_of2j']
                          }

####################################################
#OPTION 2
#variables['kd2d_vh_hlzg'] = { 'name': 'kd_vh_hlzg:mll',
#                         'range' : ([10,40,76.2,210],[0,0.1,0.2,0.3,0.4,0.5,0.6,0.7,0.8,0.9,1],),
#                         'xaxis' : 'D_{VH 0^{#Lambda_{1}^{Z#gamma}}}',     
#                         'fold' : 3,
#                         'cuts' : ['hww2l2v_13TeV_top_of2j','hww2l2v_13TeV_dytt_of2j','hww2l2v_13TeV_of2j_vh']
#                          }
variables['kd2d_vh_hlzg'] = { 'name': 'kd_vh_hlzg:mll',
                         'range' : ([10,45,106.2],[0,0.25,0.50,0.75,1],),
                         'xaxis' : 'D_{VH 0^{#Lambda_{1}^{Z#gamma}}}',     
                         'fold' : 3,
                         'cuts' : ['hww2l2v_13TeV_top_of2j','hww2l2v_13TeV_dytt_of2j','hww2l2v_13TeV_of2j_vh','hww2l2v_13TeV_WW_of2j']
                          }

############ ggH KD ############## 

variables['kd_ggh'] = { 'name' : 'kd_ggh',
                       'range': (10,0,1),
                        'xaxis': 'D_{ggH}',
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

#OPTION 2
#DeclareKD3D('ggh_hm','D_{ggH 0^{-}}', 'kd_ggh',[0.0,0.5,0.75,1],'mll',[10,40,76.2,210],'kd_ggh_hm',[0,0.1,0.2,0.3,0.4,0.5,0.6,0.7,0.8,0.9,1],
#['hww2l2v_13TeV_top_of2j','hww2l2v_13TeV_dytt_of2j', 'hww2l2v_13TeV_of2j_ggh_t','hww2l2v_13TeV_of2j_ggh_thmip','hww2l2v_13TeV_of2j_ggh_thmin'])

#DeclareKD3D('ggh_hm','D_{ggH 0^{-}}', 'kd_vbf',[0.0,0.75,1],'mll',[10,45,106.2],'kd_ggh_hm',[0,0.3,0.4,0.5,0.6,0.7,1],
#['hww2l2v_13TeV_top_of2j','hww2l2v_13TeV_dytt_of2j', 'hww2l2v_13TeV_of2j_ggh_untagged','hww2l2v_13TeV_of2j_ggh_thmip','hww2l2v_13TeV_of2j_ggh_thmin', 'hww2l2v_13TeV_WW_of2j'])

#DeclareKD3D('ggh_hm_1','D_{ggH 0^{-}}', 'kd_vbf_2',[0.0,0.75,1],'mll',[10,45,106.2],'kd_ggh_hm',[0,0.3,0.4,0.5,0.6,0.7,1],
#['hww2l2v_13TeV_top_of2j','hww2l2v_13TeV_dytt_of2j', 'hww2l2v_13TeV_of2j_ggh_untagged','hww2l2v_13TeV_of2j_ggh_thmip','hww2l2v_13TeV_of2j_ggh_thmin', 'hww2l2v_13TeV_WW_of2j'])

#DeclareKD3D('ggh_hm_alt','D_{ggH 0^{-}}', 'kd_vbf_2',[0.0,0.5,1],'mll',[10,45,106.2],'kd_ggh_hm',[0,0.2,0.3,0.4,0.5,0.6,0.7,0.8,1],
#['hww2l2v_13TeV_of2j_ggh_untagged','hww2l2v_13TeV_of2j_ggh_thmip','hww2l2v_13TeV_of2j_ggh_thmin'])

#DeclareKD3D('ggh_hm_2','D_{ggH 0^{-}}', 'kd_vbf_2',[0.0,0.5,1],'mll',[10,45,106.2],'kd_ggh_hm',[0,0.1,0.2,0.3,0.4,0.5,0.6,0.7,0.8,0.9,1],
#['hww2l2v_13TeV_top_of2j','hww2l2v_13TeV_dytt_of2j', 'hww2l2v_13TeV_of2j_ggh_untagged','hww2l2v_13TeV_of2j_ggh_thmip','hww2l2v_13TeV_of2j_ggh_thmin', 'hww2l2v_13TeV_WW_of2j'])

#DeclareKD3D('ggh_hm','D_{ggH 0^{-}}', 'kd_vbf_2',[0.0,0.6,1],'mll',[10,45,106.2],'kd_ggh_hm',[0,0.2,0.3,0.4,0.5,0.6,0.7,0.8,1],
#['hww2l2v_13TeV_of2j_ggh_untagged','hww2l2v_13TeV_of2j_ggh_thmip','hww2l2v_13TeV_of2j_ggh_thmin'])

#DeclareKD3D('ggh_hm_4','D_{ggH 0^{-}}', 'kd_vbf_2',[0.0,0.6,1],'mll',[10,45,106.2],'kd_ggh_hm',[0,0.1,0.2,0.3,0.4,0.5,0.6,0.7,0.8,0.9,1],
#['hww2l2v_13TeV_top_of2j','hww2l2v_13TeV_dytt_of2j', 'hww2l2v_13TeV_of2j_ggh_untagged','hww2l2v_13TeV_of2j_ggh_thmip','hww2l2v_13TeV_of2j_ggh_thmin', 'hww2l2v_13TeV_WW_of2j'])


#DeclareKD3D('ggh_hm_3','D_{ggH 0^{-}}', 'kd_ggh',[0.5,0.75,1],'mll',[10,35,55,76.2],'kd_ggh_hm',[0,0.1,0.2,0.3,0.4,0.5,0.6,0.7,0.8,0.9,1],
#['hww2l2v_13TeV_top_of2j','hww2l2v_13TeV_dytt_of2j','hww2l2v_13TeV_of2j_ggh_l','hww2l2v_13TeV_of2j_ggh_lhmip','hww2l2v_13TeV_of2j_ggh_lhmin'])

#DeclareKD3D('ggh_hm_4','D_{ggH 0^{-}}', 'kd_ggh',[0.0,0.5,0.75,1],'mll',[10,40,76.2],'kd_ggh_hm',[0,0.1,0.2,0.3,0.4,0.5,0.6,0.7,0.8,0.9,1],
#['hww2l2v_13TeV_top_of2j','hww2l2v_13TeV_dytt_of2j','hww2l2v_13TeV_of2j_ggh_l','hww2l2v_13TeV_of2j_ggh_lhmip','hww2l2v_13TeV_of2j_ggh_lhmin'])

#variables['kd2d_ggh_hm_1'] = { 'name': 'kd_ggh_hm:kd_vbf_2',
#                         'range' : ([0.0,0.75,1],[0,0.3,0.4,0.5,0.6,0.7,1],),
#                         'xaxis' : 'D_{VH 0^{-}:kd_ggh}',
#                         'fold' : 3,
#                         'cuts' : ['hww2l2v_13TeV_top_of2j','hww2l2v_13TeV_dytt_of2j', 'hww2l2v_13TeV_of2j_ggh_untagged','hww2l2v_13TeV_of2j_ggh_thmip','hww2l2v_13TeV_of2j_ggh_thmin', 'hww2l2v_13TeV_WW_of2j']
#                          }

#variables['kd2d_ggh_hm_alt'] = { 'name': 'kd_ggh_hm:kd_vbf_2',
#                         'range' : ([0.0,0.5,1],[0,0.2,0.3,0.4,0.5,0.6,0.7,0.8,1],),
#                         'xaxis' : 'D_{VH 0^{-}:kd_ggh}',
#                         'fold' : 3,
#                         'cuts' : ['hww2l2v_13TeV_of2j_ggh_thmip','hww2l2v_13TeV_of2j_ggh_thmin']
#                          }
#variables['kd2d_ggh_hm_2'] = { 'name': 'kd_ggh_hm:kd_vbf_2',
#                         'range' : ([0.0,0.5,1],[0,0.1,0.2,0.3,0.4,0.5,0.6,0.7,0.8,0.9,1],),
#                         'xaxis' : 'D_{VH 0^{-}:kd_ggh}',
#                         'fold' : 3,
#                         'cuts' : ['hww2l2v_13TeV_top_of2j','hww2l2v_13TeV_dytt_of2j', 'hww2l2v_13TeV_of2j_ggh_untagged','hww2l2v_13TeV_of2j_ggh_thmip','hww2l2v_13TeV_of2j_ggh_thmin', 'hww2l2v_13TeV_WW_of2j']
#                          }
variables['kd2d_ggh_hm'] = { 'name': 'kd_ggh_hm:kd_vbf_2',
                         'range' : ([0.0,0.6,1],[0,0.2,0.3,0.4,0.5,0.6,0.7,0.8,1],),
                         'xaxis' : 'D_{VH 0^{-}:kd_ggh}',
                         'fold' : 3,
                         'cuts' : ['hww2l2v_13TeV_top_of2j','hww2l2v_13TeV_dytt_of2j', 'hww2l2v_13TeV_of2j_ggh_thmip','hww2l2v_13TeV_of2j_ggh_thmin', 'hww2l2v_13TeV_WW_of2j']
                          }
#variables['kd2d_ggh_hm_4'] = { 'name': 'kd_ggh_hm:kd_vbf_2',
#                         'range' : ([0.0,0.6,1],[0,0.1,0.2,0.3,0.4,0.5,0.6,0.7,0.8,0.9,1],),
#                         'xaxis' : 'D_{VH 0^{-}:kd_ggh}',
#                         'fold' : 3,
#                         'cuts' : ['hww2l2v_13TeV_top_of2j','hww2l2v_13TeV_dytt_of2j', 'hww2l2v_13TeV_of2j_ggh_untagged','hww2l2v_13TeV_of2j_ggh_thmip','hww2l2v_13TeV_of2j_ggh_thmin', 'hww2l2v_13TeV_WW_of2j']
#                          }
variables['mllVSmth'] = {   'name': 'mll:mth',
                           'range': ([60,70,80,90,100,110,125],[12,25,40,55,70,100,120,140,160,180,200],),
                           'xaxis': 'm_{ll} : m_{T}^{H}',
                           'fold': 3,
                           'cuts' : ['hww2l2v_13TeV_of2j_ggh_untagged']
                       }

