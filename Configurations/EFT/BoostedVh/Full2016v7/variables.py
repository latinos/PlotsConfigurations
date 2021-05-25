
# variables

#variables = {}
variables['events']  = {   'name': '1',
                        'range' : (1,0,2),
                        'xaxis' : 'events',
                         'fold' : 3
                        }
 
'''
variables['mll'] = { 'name' : 'mll',
                     'range': (10,70,110),
                     'xaxis': 'm_{ll}',
                     'fold' : 3 
                   }

variables['njet'] = { 'name' : 'njet',
                      'range': (6,0,6),
                      'xaxis': 'number of jets',
                      'fold' : 3 
                   }

variables['nfjet'] = { 'name' : 'nCleanFatJet', # pt and tau21 cuts applied
                      'range': (5,0,5),
                      'xaxis': 'number of clean fat jets',
                      'fold' : 3 
                   }

variables['ptll'] = {   'name': 'ptll',
                        'range': (20,0,400),
                        'xaxis': 'p_{T}^{ll}',
                        'fold': 3
                       }
'''
#variables['mjj'] = { 'name' : 'mjj',
#                     'range': (25,0,1000),
#                     'xaxis': 'm_{jj}',
#                     'fold' : 3 
#                   }

#variables['dphi'] = { 'name' : 'dphis',
#                      'range': (10,-3.2,3.2),
#                     'xaxis': 'DPhi_{jj}',
#                     'fold' : 3 
#                   }
'''
variables['mll'] = { 'name' : 'mll',
                     'range': ([10,25,35,40,45,50,55,70,90,210],),
                     'xaxis': 'm_{ll}',
                     'fold' : 3 
                   }

variables['mth'] = { 'name' : 'mth',
                     'range': (20,0,200),
                     'xaxis': 'm_{T}^{H}',
                     'fold' : 3
                   }
variables['mtw2'] = { 'name' : 'mtw2',
                     'range': (20,0,200),
                     'xaxis': 'm_{T}^{W2}',
                     'fold' : 3
                    }

variables['mtw1'] = { 'name' : 'mtw1',
                     'range': (20,0,200),
                      'xaxis': 'm_{T}^{W1}',
                     'fold' : 3
                    }

variables['pTWW'] = { 'name' : 'pTWW',
                     'range': (50,0,1000),
                     'xaxis': 'p_{T}^{H}',
                     'fold' : 3
                   }

'''
variables['hm'] = { 'name' : 'hm',
                     'range': (40,0,400),
                     'xaxis': 'm_{H}',
                     'fold' : 3
                   }

####################################

def DeclareKD3D(Prod,AC,Xaxis):

 kdmbinning = [0,0.5,0.75,1] # Main category 
 mllbinning = [10,35,55,90,210] # Subcategory
 kdbinning = [0,0.1,0.2,0.3,0.4,0.5,0.6,0.7,0.8,0.9,1] # In each kdm*mll bin plot KD_BSM (12 bins of KD_BSM) 
 nbins = 120  # 3 x 4 x 10
 Cuts = ['hww2l2v_13TeV_top_of2j','hww2l2v_13TeV_dytt_of2j','hww2l2v_13TeV_of2j_'+Prod+'','hww2l2v_13TeV_of2j_'+Prod+'_'+AC+'ip','hww2l2v_13TeV_of2j_'+Prod+'_'+AC+'in']
 # Cuts = ['hww2l2v_13TeV_top_of2j','hww2l2v_13TeV_dytt_of2j','hww2l2v_13TeV_of2j_'+Prod+'', 'hww2l2v_13TeV_of2j_'+Prod+'_'+AC+'ip','hww2l2v_13TeV_of2j_'+Prod+'_'+AC+'in']

# if AC is "hl" or AC is "hlzg" : 
#  Cuts = ['hww2l2v_13TeV_top_of2j','hww2l2v_13TeV_dytt_of2j','hww2l2v_13TeV_of2j_'+Prod+'']

 if AC is "hl" : Cuts = ['hww2l2v_13TeV_top_of2j','hww2l2v_13TeV_dytt_of2j','hww2l2v_13TeV_of2j_'+Prod+'']


 name = ''
 kdbin = ['1'] # folding underflow -> always 1
 for ikd in range(1, len(kdbinning) - 1):
    kdbin.append('(kd_'+Prod+'_'+AC+' >= %1.1f)' % kdbinning[ikd])
 name += '+'.join(kdbin)
 name += ' + %d*(' % (len(kdbinning) - 1)
 mllbin = [] # 1-1 for first bin
 for imll in range(1, len(mllbinning) - 1):
    mllbin.append('(mll >= %d)' % mllbinning[imll])
 name += '+'.join(mllbin)
 name += ')'
 name += ' + %d*(' % ((len(kdbinning) - 1)*(len(mllbinning) - 1))
 kdmbin = [] # 1-1 for first bin
 for ikdm in range(1, len(kdmbinning) - 1):
    kdmbin.append('(kd_'+Prod+' >= %1.1f)' % kdmbinning[ikdm])
 name += '+'.join(kdmbin)
 name += ') - 0.5'

 variables['kd3d_'+Prod+'_'+AC+''] = {
    'name': name,
    'range': (nbins, 0., nbins), # 3 x 4 x 10
    'xaxis': Xaxis, 
    'cuts' : Cuts
 }

##################################
## Reco VH KD #####

variables['kd_Vh_hm'] = { 'name' : 'kd_Vh_hm',
                       'range': (10,0,1),
                       'xaxis': 'D_{V*H 0^{-}}',
                       'fold' : 3
                     }

variables['kd_Vh_hp'] = { 'name' : 'kd_Vh_hp',
                       'range': (10,0,1),
                       'xaxis': 'D_{V*H 0^{+}}',
                       'fold' : 3
                     }

variables['kd_Vh_hl'] = { 'name' : 'kd_Vh_hl',
                       'range': (10,0,1),
                       'xaxis': 'D_{V*H 0^{#Lambda 1}}',
                       'fold' : 3
                     }

#variables['kd_Vh_hlzg'] = { 'name' : 'kd_Vh_hlzg',
#                       'range': (20,0,1),
#                       'xaxis': 'D_{VH 0^{#Lambda_{1}^{Z#gamma}}}',
#                       'fold' : 3,
#                       'cuts' : ['hww2l2v_13TeV_top_of2j','hww2l2v_13TeV_dytt_of2j','hww2l2v_13TeV_of2j_Vh']
#                     }

variables['kd_Vh_mixhm'] = { 'name' : 'kd_Vh_mixhm',
                          'range': (10,-1,1),
                          'xaxis': 'D_{V*H CP}',
                          'fold' : 3
                        }

variables['kd_Vh_mixhp'] = { 'name' : 'kd_Vh_mixhp',
                          'range': (10,-1,1),
                          'xaxis': 'D_{V*H Int}',
                          'fold' : 3
                        }

DeclareKD3D('Vh','hm','D_{Vh 0^{-}}')
DeclareKD3D('Vh','hp','D_{Vh 0^{+}}')
DeclareKD3D('Vh','hl','D_{Vh 0^{#Lambda 1}}')

variables['kd2d_Vh_hm'] = { 'name': 'kd_Vh_hm:mll',   
                         'range' : ([10,35,45,55,90,210],[0,0.1,0.2,0.3,0.4,0.5,0.6,0.7,0.8,0.9,1],),     
                         'xaxis' : 'D_{VH 0^{-}:m_{ll}}',     
                         'fold' : 3,
                         'cuts' : ['hww2l2v_13TeV_top_of2j','hww2l2v_13TeV_dytt_of2j','hww2l2v_13TeV_of2j_Vh','hww2l2v_13TeV_of2j_Vh_hmip','hww2l2v_13TeV_of2j_Vh_hmin']
                          }

variables['kd2d_Vh_hp'] = { 'name': 'kd_Vh_hp:mll',   
                         'range' : ([10,35,45,55,90,210],[0,0.1,0.2,0.3,0.4,0.5,0.6,0.7,0.8,0.9,1],),     
                         'xaxis' : 'D_{VH 0^{+}:m_{ll}}',     
                         'fold' : 3,
                         'cuts' : ['hww2l2v_13TeV_top_of2j','hww2l2v_13TeV_dytt_of2j','hww2l2v_13TeV_of2j_Vh','hww2l2v_13TeV_of2j_Vh_hpip','hww2l2v_13TeV_of2j_Vh_hpin']
                          }

variables['kd2d_Vh_hl'] = { 'name': 'kd_Vh_hl:mll',   
                         'range' : ([10,35,45,55,90,210],[0,0.1,0.2,0.3,0.4,0.5,0.6,0.7,0.8,0.9,1],),     
                         'xaxis' : 'D_{VH 0^{#Lambda 1}:m_{ll}}',     
                         'fold' : 3,
                         'cuts' : ['hww2l2v_13TeV_top_of2j','hww2l2v_13TeV_dytt_of2j','hww2l2v_13TeV_of2j_Vh']
                          }

#variables['kd2d_Vh_hlzg'] = { 'name': 'kd_Vh_hlzg:mll',   
#                         'range' : ([10,35,45,55,90,210],[0,0.1,0.2,0.3,0.4,0.5,0.6,0.7,0.8,0.9,1],),     
#                         'xaxis' : 'D_{VH 0^{#Lambda_{1}^{Z#gamma}}}',     
#                         'fold' : 3,
#                         'cuts' : ['hww2l2v_13TeV_top_of2j','hww2l2v_13TeV_dytt_of2j','hww2l2v_13TeV_of2j_Vh']
#                          }


#variables['ht'] = {'name' : 'ht',
#                            'range' : (200, 0, 1700),
#                            'xaxis' : 'ht',
#                            'fold' : 3
#                        }

#FAT JETS
variables['FatJet_msoftdrop_nom'] = {'name' : 'FatJet_msoftdrop_nom',
                            'range' : (6, 60, 120),
                            'xaxis' : 'FatJet_msoftdrop_nom',
                            'fold' : 3
                        }
variables['FatJet_pt_nom'] = {'name' : 'FatJet_pt_nom',
                            'range' : (60, 100, 700),
                            'xaxis' : 'FatJet_pt_nom',
                            'fold' : 3
                        }

variables['mV'] = { 'name' : 'mV[0]',
                     'range': (10,40,140),
                     'xaxis': 'm_{V}',
                     'fold' : 3
                   }

variables['InvMSubjets'] = { 'name' : 'InvMSubjets',
                     'range': (10,40,140),
                     'xaxis': 'InvMSubjets',
                     'fold' : 3
                   }

#no used
'''
variables['nSubJet'] = {'name' : 'nSubJet',
                            'range' : (10, 0, 10),
                            'xaxis' : 'nSubJet',
                            'fold' : 3
                        }
variables['SubJet_mass'] = {'name' : 'SubJet_mass',
                            'range' : (100, 0, 60),
                            'xaxis' : 'SubJet_mass',
                            'fold' : 3
                        }

variables['SubJet_pt_0'] = {'name' : 'SubJet_pt_0',
                            'range' : (100, 0, 1000),
                            'xaxis' : 'SubJet_pt_0',
                            'fold' : 3
                        }
variables['SubJet_pt_1'] = {'name' : 'SubJet_pt_1',
                            'range' : (100, 0, 1000),
                            'xaxis' : 'SubJet_pt_1',
                            'fold' : 3
                        }
variables['J1pt'] = {'name' : 'J1pt',
                            'range' : (100, 0, 1000),
                            'xaxis' : 'J1pt',
                            'fold' : 3
                        }
variables['J2pt'] = {'name' : 'J2pt',
                            'range' : (100, 0, 1000),
                            'xaxis' : 'J2pt',
                            'fold' : 3
                        }
'''
