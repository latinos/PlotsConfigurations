# variables

#variables = {}
    
#'fold' : # 0 = not fold (default), 1 = fold underflowbin, 2 = fold overflow bin, 3 = fold underflow and overflow
# The following is needed if combining plots between years:
#'doWeight' : 1
#'binX' : 1 
#'binY' : <# of bins>
bkg = [skey for skey in samples if not skey.startswith('AZH')]

variables['events']     = { 'name': '1',      
                            'range' : (1,0,2),  
                            'xaxis' : 'events', 
                            'fold' : 3
                        }

variables['njet']       = { 'name'  : 'ZH3l_njet',
                            'range' : (10,0,10),
                            'xaxis' : 'N_{jet}',
                            'fold' : 3 
                        }
variables['ptz']        = { 'name' : 'ZH3l_pTZ',
                            'range' : (20,0,800),
                            'xaxis' : 'ptz',
                            'fold' : 3 
                        }

variables['chisq']       = { 'name'  : 'AZH_ChiSquare_patch',
                            'range' : (10,0,10),
                            'xaxis' : 'ChiSq',
                            'fold' : 3 
                        }
variables['nbjet']       = { 'name'  : 'nbjet',
                            'range' : (10,0,10),
                            'xaxis' : 'N_{bjet}',
                            'fold' : 3 
                        }
variables['DeltaM']  = { 'name' : 'AZH_mA_minus_mH_patch',
                            'range' : (20,0,1000),
			    'xaxis' : 'm_{A}-m_{H}',
			    'cuts' : ['breq_SR'],
			    'fold'  : 3
                         }
variables['DeltaM_onebjet'] = { 'name' : 'AZH_mA_minus_mH_onebjet_patch',
                             'range' : (20,0,1000),
				   'xaxis' : 'm_{A}-m_{H}',
				   'cuts' : ['bveto_1j_SR'],
                                   'fold'  : 3
                            }

variables['mH'] = { 'name' : 'AZH_Hmass_patch',
                    'range' : (20,0,2000),
                    'xaxis' : 'm_{H}',
                    'cuts' : ['breq_SR'],
                    'fold'  : 3
}

variables['mA'] = { 'name' : 'AZH_Amass_patch',
                     'range' : (25,0,2500),
                     'xaxis' : 'm_{A}',
                     'cuts' : ['breq_SR'],
                     'fold'  : 3
}
variables['mH_onebjet'] = { 'name' : 'AZH_Hmass_patch_onebjet',
                    'range' : (20,0,2000),
                    'xaxis' : 'm_{H}',
                    'cuts' : ['bveto_1j_SR'],
                    'fold'  : 3
}

variables['mA_onebjet'] = { 'name' : 'AZH_Amass_patch_onebjet',
                     'range' : (25,0,2500),
                     'xaxis' : 'm_{A}',
                     'cuts' : ['bveto_1j_SR'],
                     'fold'  : 3
}
variables['checkmZ']    = { 'name' : 'ZH3l_checkmZ',
                            'range' : (10,60,120),
                            'xaxis' : 'checkmZ',
                            'fold' : 3
                        }

#variables['pt1']        = { 'name': 'Lepton_pt[0]',
#                            'range' : (15,0.,500),
#                            'xaxis' : 'lept1_p_{T} [GeV]',
#                            'fold' : 3
#                        }
#variables['eta1']        = { 'name': 'Lepton_eta[0]',
#                            'range' : (17,-3,3),
#                            'xaxis' : 'leading lepton #eta',
#                            'fold' : 3
#                        }
#variables['phi1']        = { 'name': 'Lepton_phi[0]',
#                            'range' : (17,-3.2,3.2),
#                            'xaxis' : 'leading lepton #phi',
#                            'fold' : 3
#                        }
#
#variables['pt_subleadinglepton'] = { 'name': 'Lepton_pt[1]',
#                                     'range' : (15,0.,200),
#                                     'xaxis' : 'lept2_p_{T} [GeV]',
#                                     'fold' : 3
#                                    }
#variables['eta_subleadinglepton'] = { 'name': 'Lepton_eta[1]',
#                                     'range' : (17,-3,3),
#                                     'xaxis' : 'subleading lepton #eta',
#                                     'fold' : 3
#                                    }
#
#variables['phi_subleadinglepton'] = { 'name': 'Lepton_phi[1]',
#                                     'range' : (17,-3.2,3.2),
#                                     'xaxis' : 'subleading lepton #phi',
#                                     'fold' : 3
#                                    }
#
#variables['ptjet0']     = { 'name' : 'CleanJet_pt[0]',
#                            'range' : (15,0,500),
#                            'xaxis' : 'Leading jet p_{T}',
#                            'fold' : 3
#                        }
#variables['phijet0']     = { 'name' : 'CleanJet_phi[0]',
#                            'range' : (17,-3.2,3.2),
#                            'xaxis' : 'Leading jet #phi',
#                            'fold' : 3
#                        }
#variables['etajet0']     = { 'name' : 'CleanJet_eta[0]',
#                            'range' : (17,-3,3),
#                            'xaxis' : 'Leading jet #eta',
#                            'fold' : 3
#                        }
#
#variables['ptjet1']     = { 'name' : 'CleanJet_pt[1]',
#                            'range' : (15,0,200),
#                            'xaxis' : 'Subleading jet p_{T}',
#                            'fold' : 3
#                        }
#variables['phijet1']     = { 'name' : 'CleanJet_phi[1]',
#                            'range' : (17,-3.2,3.2),
#                            'xaxis' : 'Subleading jet #phi',
#                            'fold' : 3
#                        }
#
#variables['etajet1']     = { 'name' : 'CleanJet_eta[1]',
#                            'range' : (17,-3,3),
#                            'xaxis' : 'Subleading jet #eta',
#                            'fold' : 3
#                        }
#variables['etaphijet0']     = { 'name' : 'CleanJet_eta[0]:CleanJet_phi[0]',
#                            'range' : ([-3.0,-1.3,-0.5,0.5,1.3,3.0],[-3.2,-1.57,-0.87,0.87,1.57,3.2]),
#                            'xaxis' : ' leading jet #eta : #phi}',
#                            'fold' : 3
#                        }
#variables['etaphijet1']     = { 'name' : 'CleanJet_eta[1]:CleanJet_phi[1]',
#                            'range' : ([-3.0,-1.3,-0.5,0.5,1.3,3.0],[-3.2,-1.57,-0.87,0.87,1.57,3.2]),
#                            'xaxis' : ' subleading jet #eta : #phi}',
#                            'fold' : 3
#                        }
#variables['etaphilep0']     = { 'name' : 'Lepton_eta[0]:Lepton_phi[0]',
#                            'range' : ([-3.0,-1.3,-0.5,0.5,1.3,3.0],[-3.2,-1.57,-0.87,0.87,1.57,3.2]),
#                            'xaxis' : ' leading lepton #eta : #phi}',
#                            'fold' : 3
#                        }
#variables['etaphilep1']     = { 'name' : 'Lepton_eta[1]:Lepton_phi[1]',
#                            'range' : ([-3.0,-1.3,-0.5,0.5,1.3,3.0],[-3.2,-1.57,-0.87,0.87,1.57,3.2]),
#                            'xaxis' : ' subleading lepton #eta : #phi}',
#                            'fold' : 3
#                        }
#
#variables['PuppiMET_pt']        = { 'name' : 'PuppiMET_pt',
#                            'range' : (15,0,500),
#                            'xaxis' : 'PuppiMET p_{t}',
#                            'fold' : 3
#                        }
#variables['PuppiMET_phi']        = { 'name' : 'PuppiMET_phi',
#                            'range' : (17,-3.2,3.2),
#                            'xaxis' : 'PuppiMET phi',
#                            'fold' : 3
#                        }
#variables['MET_pt']        = { 'name' : 'MET_pt',
#                            'range' : (15,0,500),
#                            'xaxis' : 'MET p_{t}',
#                            'fold' : 3
#                        }
#variables['MET_phi']        = { 'name' : 'MET_phi',
#                            'range' : (17,-3.2,3.2),
#                            'xaxis' : 'MET phi',
#                            'fold' : 3
#                        }
#
####################################################################################################
variables['ellipse_mA_1000_mH_330'] = { 'name' : 'ellipse_mA_1000_mH_330',
                                                'range' : (7,-0.5,6.5),
                                                'xaxis' : 'elliptical bin in mA-mH, pTZ',
                                                'cuts'  : ['breq_SR'],
                        'samples' : bkg+['AZH_1000_330'],
                                               'fold'  : 0
                                            }

variables['ellipse_mA_1000_mH_350'] = { 'name' : 'ellipse_mA_1000_mH_350',
                                                'range' : (7,-0.5,6.5),
                                                'xaxis' : 'elliptical bin in mA-mH, pTZ',
                                                'cuts'  : ['breq_SR'],
                        'samples' : bkg+['AZH_1000_350'],
                                               'fold'  : 0
                                            }

variables['ellipse_mA_1000_mH_400'] = { 'name' : 'ellipse_mA_1000_mH_400',
                                                'range' : (7,-0.5,6.5),
                                                'xaxis' : 'elliptical bin in mA-mH, pTZ',
                                                'cuts'  : ['breq_SR'],
                        'samples' : bkg+['AZH_1000_400'],
                                               'fold'  : 0
                                            }

variables['ellipse_mA_1000_mH_450'] = { 'name' : 'ellipse_mA_1000_mH_450',
                                                'range' : (7,-0.5,6.5),
                                                'xaxis' : 'elliptical bin in mA-mH, pTZ',
                                                'cuts'  : ['breq_SR'],
                        'samples' : bkg+['AZH_1000_450'],
                                               'fold'  : 0
                                            }

variables['ellipse_mA_1000_mH_500'] = { 'name' : 'ellipse_mA_1000_mH_500',
                                                'range' : (7,-0.5,6.5),
                                                'xaxis' : 'elliptical bin in mA-mH, pTZ',
                                                'cuts'  : ['breq_SR'],
                        'samples' : bkg+['AZH_1000_500'],
                                               'fold'  : 0
                                            }

variables['ellipse_mA_1000_mH_550'] = { 'name' : 'ellipse_mA_1000_mH_550',
                                                'range' : (7,-0.5,6.5),
                                                'xaxis' : 'elliptical bin in mA-mH, pTZ',
                                                'cuts'  : ['breq_SR'],
                        'samples' : bkg+['AZH_1000_550'],
                                               'fold'  : 0
                                            }

variables['ellipse_mA_1000_mH_600'] = { 'name' : 'ellipse_mA_1000_mH_600',
                                                'range' : (7,-0.5,6.5),
                                                'xaxis' : 'elliptical bin in mA-mH, pTZ',
                                                'cuts'  : ['breq_SR'],
                        'samples' : bkg+['AZH_1000_600'],
                                               'fold'  : 0
                                            }

variables['ellipse_mA_1000_mH_650'] = { 'name' : 'ellipse_mA_1000_mH_650',
                                                'range' : (7,-0.5,6.5),
                                                'xaxis' : 'elliptical bin in mA-mH, pTZ',
                                                'cuts'  : ['breq_SR'],
                        'samples' : bkg+['AZH_1000_650'],
                                               'fold'  : 0
                                            }

variables['ellipse_mA_1000_mH_700'] = { 'name' : 'ellipse_mA_1000_mH_700',
                                                'range' : (7,-0.5,6.5),
                                                'xaxis' : 'elliptical bin in mA-mH, pTZ',
                                                'cuts'  : ['breq_SR'],
                        'samples' : bkg+['AZH_1000_700'],
                                               'fold'  : 0
                                            }

variables['ellipse_mA_1000_mH_750'] = { 'name' : 'ellipse_mA_1000_mH_750',
                                                'range' : (7,-0.5,6.5),
                                                'xaxis' : 'elliptical bin in mA-mH, pTZ',
                                                'cuts'  : ['breq_SR'],
                        'samples' : bkg+['AZH_1000_750'],
                                               'fold'  : 0
                                            }

variables['ellipse_mA_1000_mH_800'] = { 'name' : 'ellipse_mA_1000_mH_800',
                                                'range' : (7,-0.5,6.5),
                                                'xaxis' : 'elliptical bin in mA-mH, pTZ',
                                                'cuts'  : ['breq_SR'],
                        'samples' : bkg+['AZH_1000_800'],
                                               'fold'  : 0
                                            }

variables['ellipse_mA_1000_mH_850'] = { 'name' : 'ellipse_mA_1000_mH_850',
                                                'range' : (7,-0.5,6.5),
                                                'xaxis' : 'elliptical bin in mA-mH, pTZ',
                                                'cuts'  : ['breq_SR'],
                        'samples' : bkg+['AZH_1000_850'],
                                               'fold'  : 0
                                            }

variables['ellipse_mA_1000_mH_900'] = { 'name' : 'ellipse_mA_1000_mH_900',
                                                'range' : (7,-0.5,6.5),
                                                'xaxis' : 'elliptical bin in mA-mH, pTZ',
                                                'cuts'  : ['breq_SR'],
                        'samples' : bkg+['AZH_1000_900'],
                                               'fold'  : 0
                                            }

variables['ellipse_mA_1050_mH_330'] = { 'name' : 'ellipse_mA_1050_mH_330',
                                                'range' : (7,-0.5,6.5),
                                                'xaxis' : 'elliptical bin in mA-mH, pTZ',
                                                'cuts'  : ['breq_SR'],
                        'samples' : bkg+['AZH_1050_330'],
                                               'fold'  : 0
                                            }

variables['ellipse_mA_1050_mH_350'] = { 'name' : 'ellipse_mA_1050_mH_350',
                                                'range' : (7,-0.5,6.5),
                                                'xaxis' : 'elliptical bin in mA-mH, pTZ',
                                                'cuts'  : ['breq_SR'],
                        'samples' : bkg+['AZH_1050_350'],
                                               'fold'  : 0
                                            }

variables['ellipse_mA_1050_mH_400'] = { 'name' : 'ellipse_mA_1050_mH_400',
                                                'range' : (7,-0.5,6.5),
                                                'xaxis' : 'elliptical bin in mA-mH, pTZ',
                                                'cuts'  : ['breq_SR'],
                        'samples' : bkg+['AZH_1050_400'],
                                               'fold'  : 0
                                            }

variables['ellipse_mA_1050_mH_450'] = { 'name' : 'ellipse_mA_1050_mH_450',
                                                'range' : (7,-0.5,6.5),
                                                'xaxis' : 'elliptical bin in mA-mH, pTZ',
                                                'cuts'  : ['breq_SR'],
                        'samples' : bkg+['AZH_1050_450'],
                                               'fold'  : 0
                                            }

variables['ellipse_mA_1050_mH_500'] = { 'name' : 'ellipse_mA_1050_mH_500',
                                                'range' : (7,-0.5,6.5),
                                                'xaxis' : 'elliptical bin in mA-mH, pTZ',
                                                'cuts'  : ['breq_SR'],
                        'samples' : bkg+['AZH_1050_500'],
                                               'fold'  : 0
                                            }

variables['ellipse_mA_1050_mH_550'] = { 'name' : 'ellipse_mA_1050_mH_550',
                                                'range' : (7,-0.5,6.5),
                                                'xaxis' : 'elliptical bin in mA-mH, pTZ',
                                                'cuts'  : ['breq_SR'],
                        'samples' : bkg+['AZH_1050_550'],
                                               'fold'  : 0
                                            }

variables['ellipse_mA_1050_mH_600'] = { 'name' : 'ellipse_mA_1050_mH_600',
                                                'range' : (7,-0.5,6.5),
                                                'xaxis' : 'elliptical bin in mA-mH, pTZ',
                                                'cuts'  : ['breq_SR'],
                        'samples' : bkg+['AZH_1050_600'],
                                               'fold'  : 0
                                            }

variables['ellipse_mA_1050_mH_650'] = { 'name' : 'ellipse_mA_1050_mH_650',
                                                'range' : (7,-0.5,6.5),
                                                'xaxis' : 'elliptical bin in mA-mH, pTZ',
                                                'cuts'  : ['breq_SR'],
                        'samples' : bkg+['AZH_1050_650'],
                                               'fold'  : 0
                                            }

variables['ellipse_mA_1050_mH_700'] = { 'name' : 'ellipse_mA_1050_mH_700',
                                                'range' : (7,-0.5,6.5),
                                                'xaxis' : 'elliptical bin in mA-mH, pTZ',
                                                'cuts'  : ['breq_SR'],
                        'samples' : bkg+['AZH_1050_700'],
                                               'fold'  : 0
                                            }

variables['ellipse_mA_1050_mH_750'] = { 'name' : 'ellipse_mA_1050_mH_750',
                                                'range' : (7,-0.5,6.5),
                                                'xaxis' : 'elliptical bin in mA-mH, pTZ',
                                                'cuts'  : ['breq_SR'],
                        'samples' : bkg+['AZH_1050_750'],
                                               'fold'  : 0
                                            }

variables['ellipse_mA_1050_mH_800'] = { 'name' : 'ellipse_mA_1050_mH_800',
                                                'range' : (7,-0.5,6.5),
                                                'xaxis' : 'elliptical bin in mA-mH, pTZ',
                                                'cuts'  : ['breq_SR'],
                        'samples' : bkg+['AZH_1050_800'],
                                               'fold'  : 0
                                            }

variables['ellipse_mA_1050_mH_850'] = { 'name' : 'ellipse_mA_1050_mH_850',
                                                'range' : (7,-0.5,6.5),
                                                'xaxis' : 'elliptical bin in mA-mH, pTZ',
                                                'cuts'  : ['breq_SR'],
                        'samples' : bkg+['AZH_1050_850'],
                                               'fold'  : 0
                                            }

variables['ellipse_mA_1050_mH_900'] = { 'name' : 'ellipse_mA_1050_mH_900',
                                                'range' : (7,-0.5,6.5),
                                                'xaxis' : 'elliptical bin in mA-mH, pTZ',
                                                'cuts'  : ['breq_SR'],
                        'samples' : bkg+['AZH_1050_900'],
                                               'fold'  : 0
                                            }

variables['ellipse_mA_1050_mH_950'] = { 'name' : 'ellipse_mA_1050_mH_950',
                                                'range' : (7,-0.5,6.5),
                                                'xaxis' : 'elliptical bin in mA-mH, pTZ',
                                                'cuts'  : ['breq_SR'],
                        'samples' : bkg+['AZH_1050_950'],
                                               'fold'  : 0
                                            }

variables['ellipse_mA_1100_mH_1000'] = { 'name' : 'ellipse_mA_1100_mH_1000',
                                                'range' : (7,-0.5,6.5),
                                                'xaxis' : 'elliptical bin in mA-mH, pTZ',
                                                'cuts'  : ['breq_SR'],
                        'samples' : bkg+['AZH_1100_1000'],
                                               'fold'  : 0
                                            }

variables['ellipse_mA_1100_mH_330'] = { 'name' : 'ellipse_mA_1100_mH_330',
                                                'range' : (7,-0.5,6.5),
                                                'xaxis' : 'elliptical bin in mA-mH, pTZ',
                                                'cuts'  : ['breq_SR'],
                        'samples' : bkg+['AZH_1100_330'],
                                               'fold'  : 0
                                            }

variables['ellipse_mA_1100_mH_350'] = { 'name' : 'ellipse_mA_1100_mH_350',
                                                'range' : (7,-0.5,6.5),
                                                'xaxis' : 'elliptical bin in mA-mH, pTZ',
                                                'cuts'  : ['breq_SR'],
                        'samples' : bkg+['AZH_1100_350'],
                                               'fold'  : 0
                                            }

variables['ellipse_mA_1100_mH_400'] = { 'name' : 'ellipse_mA_1100_mH_400',
                                                'range' : (7,-0.5,6.5),
                                                'xaxis' : 'elliptical bin in mA-mH, pTZ',
                                                'cuts'  : ['breq_SR'],
                        'samples' : bkg+['AZH_1100_400'],
                                               'fold'  : 0
                                            }

variables['ellipse_mA_1100_mH_450'] = { 'name' : 'ellipse_mA_1100_mH_450',
                                                'range' : (7,-0.5,6.5),
                                                'xaxis' : 'elliptical bin in mA-mH, pTZ',
                                                'cuts'  : ['breq_SR'],
                        'samples' : bkg+['AZH_1100_450'],
                                               'fold'  : 0
                                            }

variables['ellipse_mA_1100_mH_500'] = { 'name' : 'ellipse_mA_1100_mH_500',
                                                'range' : (7,-0.5,6.5),
                                                'xaxis' : 'elliptical bin in mA-mH, pTZ',
                                                'cuts'  : ['breq_SR'],
                        'samples' : bkg+['AZH_1100_500'],
                                               'fold'  : 0
                                            }

variables['ellipse_mA_1100_mH_550'] = { 'name' : 'ellipse_mA_1100_mH_550',
                                                'range' : (7,-0.5,6.5),
                                                'xaxis' : 'elliptical bin in mA-mH, pTZ',
                                                'cuts'  : ['breq_SR'],
                        'samples' : bkg+['AZH_1100_550'],
                                               'fold'  : 0
                                            }

variables['ellipse_mA_1100_mH_600'] = { 'name' : 'ellipse_mA_1100_mH_600',
                                                'range' : (7,-0.5,6.5),
                                                'xaxis' : 'elliptical bin in mA-mH, pTZ',
                                                'cuts'  : ['breq_SR'],
                        'samples' : bkg+['AZH_1100_600'],
                                               'fold'  : 0
                                            }

variables['ellipse_mA_1100_mH_650'] = { 'name' : 'ellipse_mA_1100_mH_650',
                                                'range' : (7,-0.5,6.5),
                                                'xaxis' : 'elliptical bin in mA-mH, pTZ',
                                                'cuts'  : ['breq_SR'],
                        'samples' : bkg+['AZH_1100_650'],
                                               'fold'  : 0
                                            }

variables['ellipse_mA_1100_mH_700'] = { 'name' : 'ellipse_mA_1100_mH_700',
                                                'range' : (7,-0.5,6.5),
                                                'xaxis' : 'elliptical bin in mA-mH, pTZ',
                                                'cuts'  : ['breq_SR'],
                        'samples' : bkg+['AZH_1100_700'],
                                               'fold'  : 0
                                            }

variables['ellipse_mA_1100_mH_750'] = { 'name' : 'ellipse_mA_1100_mH_750',
                                                'range' : (7,-0.5,6.5),
                                                'xaxis' : 'elliptical bin in mA-mH, pTZ',
                                                'cuts'  : ['breq_SR'],
                        'samples' : bkg+['AZH_1100_750'],
                                               'fold'  : 0
                                            }

variables['ellipse_mA_1100_mH_800'] = { 'name' : 'ellipse_mA_1100_mH_800',
                                                'range' : (7,-0.5,6.5),
                                                'xaxis' : 'elliptical bin in mA-mH, pTZ',
                                                'cuts'  : ['breq_SR'],
                        'samples' : bkg+['AZH_1100_800'],
                                               'fold'  : 0
                                            }

variables['ellipse_mA_1100_mH_850'] = { 'name' : 'ellipse_mA_1100_mH_850',
                                                'range' : (7,-0.5,6.5),
                                                'xaxis' : 'elliptical bin in mA-mH, pTZ',
                                                'cuts'  : ['breq_SR'],
                        'samples' : bkg+['AZH_1100_850'],
                                               'fold'  : 0
                                            }

variables['ellipse_mA_1100_mH_900'] = { 'name' : 'ellipse_mA_1100_mH_900',
                                                'range' : (7,-0.5,6.5),
                                                'xaxis' : 'elliptical bin in mA-mH, pTZ',
                                                'cuts'  : ['breq_SR'],
                        'samples' : bkg+['AZH_1100_900'],
                                               'fold'  : 0
                                            }

variables['ellipse_mA_1100_mH_950'] = { 'name' : 'ellipse_mA_1100_mH_950',
                                                'range' : (7,-0.5,6.5),
                                                'xaxis' : 'elliptical bin in mA-mH, pTZ',
                                                'cuts'  : ['breq_SR'],
                        'samples' : bkg+['AZH_1100_950'],
                                               'fold'  : 0
                                            }

variables['ellipse_mA_1150_mH_1050'] = { 'name' : 'ellipse_mA_1150_mH_1050',
                                                'range' : (7,-0.5,6.5),
                                                'xaxis' : 'elliptical bin in mA-mH, pTZ',
                                                'cuts'  : ['breq_SR'],
                        'samples' : bkg+['AZH_1150_1050'],
                                               'fold'  : 0
                                            }

variables['ellipse_mA_1150_mH_330'] = { 'name' : 'ellipse_mA_1150_mH_330',
                                                'range' : (7,-0.5,6.5),
                                                'xaxis' : 'elliptical bin in mA-mH, pTZ',
                                                'cuts'  : ['breq_SR'],
                        'samples' : bkg+['AZH_1150_330'],
                                               'fold'  : 0
                                            }

variables['ellipse_mA_1150_mH_350'] = { 'name' : 'ellipse_mA_1150_mH_350',
                                                'range' : (7,-0.5,6.5),
                                                'xaxis' : 'elliptical bin in mA-mH, pTZ',
                                                'cuts'  : ['breq_SR'],
                        'samples' : bkg+['AZH_1150_350'],
                                               'fold'  : 0
                                            }

variables['ellipse_mA_1150_mH_450'] = { 'name' : 'ellipse_mA_1150_mH_450',
                                                'range' : (7,-0.5,6.5),
                                                'xaxis' : 'elliptical bin in mA-mH, pTZ',
                                                'cuts'  : ['breq_SR'],
                        'samples' : bkg+['AZH_1150_450'],
                                               'fold'  : 0
                                            }

variables['ellipse_mA_1150_mH_550'] = { 'name' : 'ellipse_mA_1150_mH_550',
                                                'range' : (7,-0.5,6.5),
                                                'xaxis' : 'elliptical bin in mA-mH, pTZ',
                                                'cuts'  : ['breq_SR'],
                        'samples' : bkg+['AZH_1150_550'],
                                               'fold'  : 0
                                            }

variables['ellipse_mA_1150_mH_650'] = { 'name' : 'ellipse_mA_1150_mH_650',
                                                'range' : (7,-0.5,6.5),
                                                'xaxis' : 'elliptical bin in mA-mH, pTZ',
                                                'cuts'  : ['breq_SR'],
                        'samples' : bkg+['AZH_1150_650'],
                                               'fold'  : 0
                                            }

variables['ellipse_mA_1150_mH_750'] = { 'name' : 'ellipse_mA_1150_mH_750',
                                                'range' : (7,-0.5,6.5),
                                                'xaxis' : 'elliptical bin in mA-mH, pTZ',
                                                'cuts'  : ['breq_SR'],
                        'samples' : bkg+['AZH_1150_750'],
                                               'fold'  : 0
                                            }

variables['ellipse_mA_1150_mH_850'] = { 'name' : 'ellipse_mA_1150_mH_850',
                                                'range' : (7,-0.5,6.5),
                                                'xaxis' : 'elliptical bin in mA-mH, pTZ',
                                                'cuts'  : ['breq_SR'],
                        'samples' : bkg+['AZH_1150_850'],
                                               'fold'  : 0
                                            }

variables['ellipse_mA_1150_mH_950'] = { 'name' : 'ellipse_mA_1150_mH_950',
                                                'range' : (7,-0.5,6.5),
                                                'xaxis' : 'elliptical bin in mA-mH, pTZ',
                                                'cuts'  : ['breq_SR'],
                        'samples' : bkg+['AZH_1150_950'],
                                               'fold'  : 0
                                            }

variables['ellipse_mA_1200_mH_1000'] = { 'name' : 'ellipse_mA_1200_mH_1000',
                                                'range' : (7,-0.5,6.5),
                                                'xaxis' : 'elliptical bin in mA-mH, pTZ',
                                                'cuts'  : ['breq_SR'],
                        'samples' : bkg+['AZH_1200_1000'],
                                               'fold'  : 0
                                            }

variables['ellipse_mA_1200_mH_1100'] = { 'name' : 'ellipse_mA_1200_mH_1100',
                                                'range' : (7,-0.5,6.5),
                                                'xaxis' : 'elliptical bin in mA-mH, pTZ',
                                                'cuts'  : ['breq_SR'],
                        'samples' : bkg+['AZH_1200_1100'],
                                               'fold'  : 0
                                            }

variables['ellipse_mA_1200_mH_330'] = { 'name' : 'ellipse_mA_1200_mH_330',
                                                'range' : (7,-0.5,6.5),
                                                'xaxis' : 'elliptical bin in mA-mH, pTZ',
                                                'cuts'  : ['breq_SR'],
                        'samples' : bkg+['AZH_1200_330'],
                                               'fold'  : 0
                                            }

variables['ellipse_mA_1200_mH_350'] = { 'name' : 'ellipse_mA_1200_mH_350',
                                                'range' : (7,-0.5,6.5),
                                                'xaxis' : 'elliptical bin in mA-mH, pTZ',
                                                'cuts'  : ['breq_SR'],
                        'samples' : bkg+['AZH_1200_350'],
                                               'fold'  : 0
                                            }

variables['ellipse_mA_1200_mH_400'] = { 'name' : 'ellipse_mA_1200_mH_400',
                                                'range' : (7,-0.5,6.5),
                                                'xaxis' : 'elliptical bin in mA-mH, pTZ',
                                                'cuts'  : ['breq_SR'],
                        'samples' : bkg+['AZH_1200_400'],
                                               'fold'  : 0
                                            }

variables['ellipse_mA_1200_mH_500'] = { 'name' : 'ellipse_mA_1200_mH_500',
                                                'range' : (7,-0.5,6.5),
                                                'xaxis' : 'elliptical bin in mA-mH, pTZ',
                                                'cuts'  : ['breq_SR'],
                        'samples' : bkg+['AZH_1200_500'],
                                               'fold'  : 0
                                            }

variables['ellipse_mA_1200_mH_600'] = { 'name' : 'ellipse_mA_1200_mH_600',
                                                'range' : (7,-0.5,6.5),
                                                'xaxis' : 'elliptical bin in mA-mH, pTZ',
                                                'cuts'  : ['breq_SR'],
                        'samples' : bkg+['AZH_1200_600'],
                                               'fold'  : 0
                                            }

variables['ellipse_mA_1200_mH_700'] = { 'name' : 'ellipse_mA_1200_mH_700',
                                                'range' : (7,-0.5,6.5),
                                                'xaxis' : 'elliptical bin in mA-mH, pTZ',
                                                'cuts'  : ['breq_SR'],
                        'samples' : bkg+['AZH_1200_700'],
                                               'fold'  : 0
                                            }

variables['ellipse_mA_1200_mH_800'] = { 'name' : 'ellipse_mA_1200_mH_800',
                                                'range' : (7,-0.5,6.5),
                                                'xaxis' : 'elliptical bin in mA-mH, pTZ',
                                                'cuts'  : ['breq_SR'],
                        'samples' : bkg+['AZH_1200_800'],
                                               'fold'  : 0
                                            }

variables['ellipse_mA_1200_mH_850'] = { 'name' : 'ellipse_mA_1200_mH_850',
                                                'range' : (7,-0.5,6.5),
                                                'xaxis' : 'elliptical bin in mA-mH, pTZ',
                                                'cuts'  : ['breq_SR'],
                        'samples' : bkg+['AZH_1200_850'],
                                               'fold'  : 0
                                            }

variables['ellipse_mA_1200_mH_900'] = { 'name' : 'ellipse_mA_1200_mH_900',
                                                'range' : (7,-0.5,6.5),
                                                'xaxis' : 'elliptical bin in mA-mH, pTZ',
                                                'cuts'  : ['breq_SR'],
                        'samples' : bkg+['AZH_1200_900'],
                                               'fold'  : 0
                                            }

variables['ellipse_mA_1300_mH_1000'] = { 'name' : 'ellipse_mA_1300_mH_1000',
                                                'range' : (7,-0.5,6.5),
                                                'xaxis' : 'elliptical bin in mA-mH, pTZ',
                                                'cuts'  : ['breq_SR'],
                        'samples' : bkg+['AZH_1300_1000'],
                                               'fold'  : 0
                                            }

variables['ellipse_mA_1300_mH_1100'] = { 'name' : 'ellipse_mA_1300_mH_1100',
                                                'range' : (7,-0.5,6.5),
                                                'xaxis' : 'elliptical bin in mA-mH, pTZ',
                                                'cuts'  : ['breq_SR'],
                        'samples' : bkg+['AZH_1300_1100'],
                                               'fold'  : 0
                                            }

variables['ellipse_mA_1300_mH_1200'] = { 'name' : 'ellipse_mA_1300_mH_1200',
                                                'range' : (7,-0.5,6.5),
                                                'xaxis' : 'elliptical bin in mA-mH, pTZ',
                                                'cuts'  : ['breq_SR'],
                        'samples' : bkg+['AZH_1300_1200'],
                                               'fold'  : 0
                                            }

variables['ellipse_mA_1300_mH_350'] = { 'name' : 'ellipse_mA_1300_mH_350',
                                                'range' : (7,-0.5,6.5),
                                                'xaxis' : 'elliptical bin in mA-mH, pTZ',
                                                'cuts'  : ['breq_SR'],
                        'samples' : bkg+['AZH_1300_350'],
                                               'fold'  : 0
                                            }

variables['ellipse_mA_1300_mH_400'] = { 'name' : 'ellipse_mA_1300_mH_400',
                                                'range' : (7,-0.5,6.5),
                                                'xaxis' : 'elliptical bin in mA-mH, pTZ',
                                                'cuts'  : ['breq_SR'],
                        'samples' : bkg+['AZH_1300_400'],
                                               'fold'  : 0
                                            }

variables['ellipse_mA_1300_mH_500'] = { 'name' : 'ellipse_mA_1300_mH_500',
                                                'range' : (7,-0.5,6.5),
                                                'xaxis' : 'elliptical bin in mA-mH, pTZ',
                                                'cuts'  : ['breq_SR'],
                        'samples' : bkg+['AZH_1300_500'],
                                               'fold'  : 0
                                            }

variables['ellipse_mA_1300_mH_600'] = { 'name' : 'ellipse_mA_1300_mH_600',
                                                'range' : (7,-0.5,6.5),
                                                'xaxis' : 'elliptical bin in mA-mH, pTZ',
                                                'cuts'  : ['breq_SR'],
                        'samples' : bkg+['AZH_1300_600'],
                                               'fold'  : 0
                                            }

variables['ellipse_mA_1300_mH_700'] = { 'name' : 'ellipse_mA_1300_mH_700',
                                                'range' : (7,-0.5,6.5),
                                                'xaxis' : 'elliptical bin in mA-mH, pTZ',
                                                'cuts'  : ['breq_SR'],
                        'samples' : bkg+['AZH_1300_700'],
                                               'fold'  : 0
                                            }

variables['ellipse_mA_1300_mH_800'] = { 'name' : 'ellipse_mA_1300_mH_800',
                                                'range' : (7,-0.5,6.5),
                                                'xaxis' : 'elliptical bin in mA-mH, pTZ',
                                                'cuts'  : ['breq_SR'],
                        'samples' : bkg+['AZH_1300_800'],
                                               'fold'  : 0
                                            }

variables['ellipse_mA_1300_mH_900'] = { 'name' : 'ellipse_mA_1300_mH_900',
                                                'range' : (7,-0.5,6.5),
                                                'xaxis' : 'elliptical bin in mA-mH, pTZ',
                                                'cuts'  : ['breq_SR'],
                        'samples' : bkg+['AZH_1300_900'],
                                               'fold'  : 0
                                            }

variables['ellipse_mA_1400_mH_1000'] = { 'name' : 'ellipse_mA_1400_mH_1000',
                                                'range' : (7,-0.5,6.5),
                                                'xaxis' : 'elliptical bin in mA-mH, pTZ',
                                                'cuts'  : ['breq_SR'],
                        'samples' : bkg+['AZH_1400_1000'],
                                               'fold'  : 0
                                            }

variables['ellipse_mA_1400_mH_1100'] = { 'name' : 'ellipse_mA_1400_mH_1100',
                                                'range' : (7,-0.5,6.5),
                                                'xaxis' : 'elliptical bin in mA-mH, pTZ',
                                                'cuts'  : ['breq_SR'],
                        'samples' : bkg+['AZH_1400_1100'],
                                               'fold'  : 0
                                            }

variables['ellipse_mA_1400_mH_1200'] = { 'name' : 'ellipse_mA_1400_mH_1200',
                                                'range' : (7,-0.5,6.5),
                                                'xaxis' : 'elliptical bin in mA-mH, pTZ',
                                                'cuts'  : ['breq_SR'],
                        'samples' : bkg+['AZH_1400_1200'],
                                               'fold'  : 0
                                            }

variables['ellipse_mA_1400_mH_1300'] = { 'name' : 'ellipse_mA_1400_mH_1300',
                                                'range' : (7,-0.5,6.5),
                                                'xaxis' : 'elliptical bin in mA-mH, pTZ',
                                                'cuts'  : ['breq_SR'],
                        'samples' : bkg+['AZH_1400_1300'],
                                               'fold'  : 0
                                            }

variables['ellipse_mA_1400_mH_350'] = { 'name' : 'ellipse_mA_1400_mH_350',
                                                'range' : (7,-0.5,6.5),
                                                'xaxis' : 'elliptical bin in mA-mH, pTZ',
                                                'cuts'  : ['breq_SR'],
                        'samples' : bkg+['AZH_1400_350'],
                                               'fold'  : 0
                                            }

variables['ellipse_mA_1400_mH_400'] = { 'name' : 'ellipse_mA_1400_mH_400',
                                                'range' : (7,-0.5,6.5),
                                                'xaxis' : 'elliptical bin in mA-mH, pTZ',
                                                'cuts'  : ['breq_SR'],
                        'samples' : bkg+['AZH_1400_400'],
                                               'fold'  : 0
                                            }

variables['ellipse_mA_1400_mH_500'] = { 'name' : 'ellipse_mA_1400_mH_500',
                                                'range' : (7,-0.5,6.5),
                                                'xaxis' : 'elliptical bin in mA-mH, pTZ',
                                                'cuts'  : ['breq_SR'],
                        'samples' : bkg+['AZH_1400_500'],
                                               'fold'  : 0
                                            }

variables['ellipse_mA_1400_mH_600'] = { 'name' : 'ellipse_mA_1400_mH_600',
                                                'range' : (7,-0.5,6.5),
                                                'xaxis' : 'elliptical bin in mA-mH, pTZ',
                                                'cuts'  : ['breq_SR'],
                        'samples' : bkg+['AZH_1400_600'],
                                               'fold'  : 0
                                            }

variables['ellipse_mA_1400_mH_700'] = { 'name' : 'ellipse_mA_1400_mH_700',
                                                'range' : (7,-0.5,6.5),
                                                'xaxis' : 'elliptical bin in mA-mH, pTZ',
                                                'cuts'  : ['breq_SR'],
                        'samples' : bkg+['AZH_1400_700'],
                                               'fold'  : 0
                                            }

variables['ellipse_mA_1400_mH_800'] = { 'name' : 'ellipse_mA_1400_mH_800',
                                                'range' : (7,-0.5,6.5),
                                                'xaxis' : 'elliptical bin in mA-mH, pTZ',
                                                'cuts'  : ['breq_SR'],
                        'samples' : bkg+['AZH_1400_800'],
                                               'fold'  : 0
                                            }

variables['ellipse_mA_1400_mH_900'] = { 'name' : 'ellipse_mA_1400_mH_900',
                                                'range' : (7,-0.5,6.5),
                                                'xaxis' : 'elliptical bin in mA-mH, pTZ',
                                                'cuts'  : ['breq_SR'],
                        'samples' : bkg+['AZH_1400_900'],
                                               'fold'  : 0
                                            }

variables['ellipse_mA_1500_mH_1000'] = { 'name' : 'ellipse_mA_1500_mH_1000',
                                                'range' : (7,-0.5,6.5),
                                                'xaxis' : 'elliptical bin in mA-mH, pTZ',
                                                'cuts'  : ['breq_SR'],
                        'samples' : bkg+['AZH_1500_1000'],
                                               'fold'  : 0
                                            }

variables['ellipse_mA_1500_mH_1100'] = { 'name' : 'ellipse_mA_1500_mH_1100',
                                                'range' : (7,-0.5,6.5),
                                                'xaxis' : 'elliptical bin in mA-mH, pTZ',
                                                'cuts'  : ['breq_SR'],
                        'samples' : bkg+['AZH_1500_1100'],
                                               'fold'  : 0
                                            }

variables['ellipse_mA_1500_mH_1200'] = { 'name' : 'ellipse_mA_1500_mH_1200',
                                                'range' : (7,-0.5,6.5),
                                                'xaxis' : 'elliptical bin in mA-mH, pTZ',
                                                'cuts'  : ['breq_SR'],
                        'samples' : bkg+['AZH_1500_1200'],
                                               'fold'  : 0
                                            }

variables['ellipse_mA_1500_mH_1300'] = { 'name' : 'ellipse_mA_1500_mH_1300',
                                                'range' : (7,-0.5,6.5),
                                                'xaxis' : 'elliptical bin in mA-mH, pTZ',
                                                'cuts'  : ['breq_SR'],
                        'samples' : bkg+['AZH_1500_1300'],
                                               'fold'  : 0
                                            }

variables['ellipse_mA_1500_mH_1400'] = { 'name' : 'ellipse_mA_1500_mH_1400',
                                                'range' : (7,-0.5,6.5),
                                                'xaxis' : 'elliptical bin in mA-mH, pTZ',
                                                'cuts'  : ['breq_SR'],
                        'samples' : bkg+['AZH_1500_1400'],
                                               'fold'  : 0
                                            }

variables['ellipse_mA_1500_mH_350'] = { 'name' : 'ellipse_mA_1500_mH_350',
                                                'range' : (7,-0.5,6.5),
                                                'xaxis' : 'elliptical bin in mA-mH, pTZ',
                                                'cuts'  : ['breq_SR'],
                        'samples' : bkg+['AZH_1500_350'],
                                               'fold'  : 0
                                            }

variables['ellipse_mA_1500_mH_400'] = { 'name' : 'ellipse_mA_1500_mH_400',
                                                'range' : (7,-0.5,6.5),
                                                'xaxis' : 'elliptical bin in mA-mH, pTZ',
                                                'cuts'  : ['breq_SR'],
                        'samples' : bkg+['AZH_1500_400'],
                                               'fold'  : 0
                                            }

variables['ellipse_mA_1500_mH_500'] = { 'name' : 'ellipse_mA_1500_mH_500',
                                                'range' : (7,-0.5,6.5),
                                                'xaxis' : 'elliptical bin in mA-mH, pTZ',
                                                'cuts'  : ['breq_SR'],
                        'samples' : bkg+['AZH_1500_500'],
                                               'fold'  : 0
                                            }

variables['ellipse_mA_1500_mH_600'] = { 'name' : 'ellipse_mA_1500_mH_600',
                                                'range' : (7,-0.5,6.5),
                                                'xaxis' : 'elliptical bin in mA-mH, pTZ',
                                                'cuts'  : ['breq_SR'],
                        'samples' : bkg+['AZH_1500_600'],
                                               'fold'  : 0
                                            }

variables['ellipse_mA_1500_mH_700'] = { 'name' : 'ellipse_mA_1500_mH_700',
                                                'range' : (7,-0.5,6.5),
                                                'xaxis' : 'elliptical bin in mA-mH, pTZ',
                                                'cuts'  : ['breq_SR'],
                        'samples' : bkg+['AZH_1500_700'],
                                               'fold'  : 0
                                            }

variables['ellipse_mA_1500_mH_800'] = { 'name' : 'ellipse_mA_1500_mH_800',
                                                'range' : (7,-0.5,6.5),
                                                'xaxis' : 'elliptical bin in mA-mH, pTZ',
                                                'cuts'  : ['breq_SR'],
                        'samples' : bkg+['AZH_1500_800'],
                                               'fold'  : 0
                                            }

variables['ellipse_mA_1500_mH_900'] = { 'name' : 'ellipse_mA_1500_mH_900',
                                                'range' : (7,-0.5,6.5),
                                                'xaxis' : 'elliptical bin in mA-mH, pTZ',
                                                'cuts'  : ['breq_SR'],
                        'samples' : bkg+['AZH_1500_900'],
                                               'fold'  : 0
                                            }

variables['ellipse_mA_1600_mH_1000'] = { 'name' : 'ellipse_mA_1600_mH_1000',
                                                'range' : (7,-0.5,6.5),
                                                'xaxis' : 'elliptical bin in mA-mH, pTZ',
                                                'cuts'  : ['breq_SR'],
                        'samples' : bkg+['AZH_1600_1000'],
                                               'fold'  : 0
                                            }

variables['ellipse_mA_1600_mH_1100'] = { 'name' : 'ellipse_mA_1600_mH_1100',
                                                'range' : (7,-0.5,6.5),
                                                'xaxis' : 'elliptical bin in mA-mH, pTZ',
                                                'cuts'  : ['breq_SR'],
                        'samples' : bkg+['AZH_1600_1100'],
                                               'fold'  : 0
                                            }

variables['ellipse_mA_1600_mH_1200'] = { 'name' : 'ellipse_mA_1600_mH_1200',
                                                'range' : (7,-0.5,6.5),
                                                'xaxis' : 'elliptical bin in mA-mH, pTZ',
                                                'cuts'  : ['breq_SR'],
                        'samples' : bkg+['AZH_1600_1200'],
                                               'fold'  : 0
                                            }

variables['ellipse_mA_1600_mH_1300'] = { 'name' : 'ellipse_mA_1600_mH_1300',
                                                'range' : (7,-0.5,6.5),
                                                'xaxis' : 'elliptical bin in mA-mH, pTZ',
                                                'cuts'  : ['breq_SR'],
                        'samples' : bkg+['AZH_1600_1300'],
                                               'fold'  : 0
                                            }

variables['ellipse_mA_1600_mH_1400'] = { 'name' : 'ellipse_mA_1600_mH_1400',
                                                'range' : (7,-0.5,6.5),
                                                'xaxis' : 'elliptical bin in mA-mH, pTZ',
                                                'cuts'  : ['breq_SR'],
                        'samples' : bkg+['AZH_1600_1400'],
                                               'fold'  : 0
                                            }

variables['ellipse_mA_1600_mH_1500'] = { 'name' : 'ellipse_mA_1600_mH_1500',
                                                'range' : (7,-0.5,6.5),
                                                'xaxis' : 'elliptical bin in mA-mH, pTZ',
                                                'cuts'  : ['breq_SR'],
                        'samples' : bkg+['AZH_1600_1500'],
                                               'fold'  : 0
                                            }

variables['ellipse_mA_1600_mH_350'] = { 'name' : 'ellipse_mA_1600_mH_350',
                                                'range' : (7,-0.5,6.5),
                                                'xaxis' : 'elliptical bin in mA-mH, pTZ',
                                                'cuts'  : ['breq_SR'],
                        'samples' : bkg+['AZH_1600_350'],
                                               'fold'  : 0
                                            }

variables['ellipse_mA_1600_mH_400'] = { 'name' : 'ellipse_mA_1600_mH_400',
                                                'range' : (7,-0.5,6.5),
                                                'xaxis' : 'elliptical bin in mA-mH, pTZ',
                                                'cuts'  : ['breq_SR'],
                        'samples' : bkg+['AZH_1600_400'],
                                               'fold'  : 0
                                            }

variables['ellipse_mA_1600_mH_500'] = { 'name' : 'ellipse_mA_1600_mH_500',
                                                'range' : (7,-0.5,6.5),
                                                'xaxis' : 'elliptical bin in mA-mH, pTZ',
                                                'cuts'  : ['breq_SR'],
                        'samples' : bkg+['AZH_1600_500'],
                                               'fold'  : 0
                                            }

variables['ellipse_mA_1600_mH_600'] = { 'name' : 'ellipse_mA_1600_mH_600',
                                                'range' : (7,-0.5,6.5),
                                                'xaxis' : 'elliptical bin in mA-mH, pTZ',
                                                'cuts'  : ['breq_SR'],
                        'samples' : bkg+['AZH_1600_600'],
                                               'fold'  : 0
                                            }

variables['ellipse_mA_1600_mH_700'] = { 'name' : 'ellipse_mA_1600_mH_700',
                                                'range' : (7,-0.5,6.5),
                                                'xaxis' : 'elliptical bin in mA-mH, pTZ',
                                                'cuts'  : ['breq_SR'],
                        'samples' : bkg+['AZH_1600_700'],
                                               'fold'  : 0
                                            }

variables['ellipse_mA_1600_mH_800'] = { 'name' : 'ellipse_mA_1600_mH_800',
                                                'range' : (7,-0.5,6.5),
                                                'xaxis' : 'elliptical bin in mA-mH, pTZ',
                                                'cuts'  : ['breq_SR'],
                        'samples' : bkg+['AZH_1600_800'],
                                               'fold'  : 0
                                            }

variables['ellipse_mA_1600_mH_900'] = { 'name' : 'ellipse_mA_1600_mH_900',
                                                'range' : (7,-0.5,6.5),
                                                'xaxis' : 'elliptical bin in mA-mH, pTZ',
                                                'cuts'  : ['breq_SR'],
                        'samples' : bkg+['AZH_1600_900'],
                                               'fold'  : 0
                                            }

variables['ellipse_mA_1700_mH_1000'] = { 'name' : 'ellipse_mA_1700_mH_1000',
                                                'range' : (7,-0.5,6.5),
                                                'xaxis' : 'elliptical bin in mA-mH, pTZ',
                                                'cuts'  : ['breq_SR'],
                        'samples' : bkg+['AZH_1700_1000'],
                                               'fold'  : 0
                                            }

variables['ellipse_mA_1700_mH_1100'] = { 'name' : 'ellipse_mA_1700_mH_1100',
                                                'range' : (7,-0.5,6.5),
                                                'xaxis' : 'elliptical bin in mA-mH, pTZ',
                                                'cuts'  : ['breq_SR'],
                        'samples' : bkg+['AZH_1700_1100'],
                                               'fold'  : 0
                                            }

variables['ellipse_mA_1700_mH_1200'] = { 'name' : 'ellipse_mA_1700_mH_1200',
                                                'range' : (7,-0.5,6.5),
                                                'xaxis' : 'elliptical bin in mA-mH, pTZ',
                                                'cuts'  : ['breq_SR'],
                        'samples' : bkg+['AZH_1700_1200'],
                                               'fold'  : 0
                                            }

variables['ellipse_mA_1700_mH_1300'] = { 'name' : 'ellipse_mA_1700_mH_1300',
                                                'range' : (7,-0.5,6.5),
                                                'xaxis' : 'elliptical bin in mA-mH, pTZ',
                                                'cuts'  : ['breq_SR'],
                        'samples' : bkg+['AZH_1700_1300'],
                                               'fold'  : 0
                                            }

variables['ellipse_mA_1700_mH_1400'] = { 'name' : 'ellipse_mA_1700_mH_1400',
                                                'range' : (7,-0.5,6.5),
                                                'xaxis' : 'elliptical bin in mA-mH, pTZ',
                                                'cuts'  : ['breq_SR'],
                        'samples' : bkg+['AZH_1700_1400'],
                                               'fold'  : 0
                                            }

variables['ellipse_mA_1700_mH_1500'] = { 'name' : 'ellipse_mA_1700_mH_1500',
                                                'range' : (7,-0.5,6.5),
                                                'xaxis' : 'elliptical bin in mA-mH, pTZ',
                                                'cuts'  : ['breq_SR'],
                        'samples' : bkg+['AZH_1700_1500'],
                                               'fold'  : 0
                                            }

variables['ellipse_mA_1700_mH_1600'] = { 'name' : 'ellipse_mA_1700_mH_1600',
                                                'range' : (7,-0.5,6.5),
                                                'xaxis' : 'elliptical bin in mA-mH, pTZ',
                                                'cuts'  : ['breq_SR'],
                        'samples' : bkg+['AZH_1700_1600'],
                                               'fold'  : 0
                                            }

variables['ellipse_mA_1700_mH_350'] = { 'name' : 'ellipse_mA_1700_mH_350',
                                                'range' : (7,-0.5,6.5),
                                                'xaxis' : 'elliptical bin in mA-mH, pTZ',
                                                'cuts'  : ['breq_SR'],
                        'samples' : bkg+['AZH_1700_350'],
                                               'fold'  : 0
                                            }

variables['ellipse_mA_1700_mH_400'] = { 'name' : 'ellipse_mA_1700_mH_400',
                                                'range' : (7,-0.5,6.5),
                                                'xaxis' : 'elliptical bin in mA-mH, pTZ',
                                                'cuts'  : ['breq_SR'],
                        'samples' : bkg+['AZH_1700_400'],
                                               'fold'  : 0
                                            }

variables['ellipse_mA_1700_mH_500'] = { 'name' : 'ellipse_mA_1700_mH_500',
                                                'range' : (7,-0.5,6.5),
                                                'xaxis' : 'elliptical bin in mA-mH, pTZ',
                                                'cuts'  : ['breq_SR'],
                        'samples' : bkg+['AZH_1700_500'],
                                               'fold'  : 0
                                            }

variables['ellipse_mA_1700_mH_600'] = { 'name' : 'ellipse_mA_1700_mH_600',
                                                'range' : (7,-0.5,6.5),
                                                'xaxis' : 'elliptical bin in mA-mH, pTZ',
                                                'cuts'  : ['breq_SR'],
                        'samples' : bkg+['AZH_1700_600'],
                                               'fold'  : 0
                                            }

variables['ellipse_mA_1700_mH_700'] = { 'name' : 'ellipse_mA_1700_mH_700',
                                                'range' : (7,-0.5,6.5),
                                                'xaxis' : 'elliptical bin in mA-mH, pTZ',
                                                'cuts'  : ['breq_SR'],
                        'samples' : bkg+['AZH_1700_700'],
                                               'fold'  : 0
                                            }

variables['ellipse_mA_1700_mH_800'] = { 'name' : 'ellipse_mA_1700_mH_800',
                                                'range' : (7,-0.5,6.5),
                                                'xaxis' : 'elliptical bin in mA-mH, pTZ',
                                                'cuts'  : ['breq_SR'],
                        'samples' : bkg+['AZH_1700_800'],
                                               'fold'  : 0
                                            }

variables['ellipse_mA_1700_mH_900'] = { 'name' : 'ellipse_mA_1700_mH_900',
                                                'range' : (7,-0.5,6.5),
                                                'xaxis' : 'elliptical bin in mA-mH, pTZ',
                                                'cuts'  : ['breq_SR'],
                        'samples' : bkg+['AZH_1700_900'],
                                               'fold'  : 0
                                            }

variables['ellipse_mA_1800_mH_1000'] = { 'name' : 'ellipse_mA_1800_mH_1000',
                                                'range' : (7,-0.5,6.5),
                                                'xaxis' : 'elliptical bin in mA-mH, pTZ',
                                                'cuts'  : ['breq_SR'],
                        'samples' : bkg+['AZH_1800_1000'],
                                               'fold'  : 0
                                            }

variables['ellipse_mA_1800_mH_1100'] = { 'name' : 'ellipse_mA_1800_mH_1100',
                                                'range' : (7,-0.5,6.5),
                                                'xaxis' : 'elliptical bin in mA-mH, pTZ',
                                                'cuts'  : ['breq_SR'],
                        'samples' : bkg+['AZH_1800_1100'],
                                               'fold'  : 0
                                            }

variables['ellipse_mA_1800_mH_1200'] = { 'name' : 'ellipse_mA_1800_mH_1200',
                                                'range' : (7,-0.5,6.5),
                                                'xaxis' : 'elliptical bin in mA-mH, pTZ',
                                                'cuts'  : ['breq_SR'],
                        'samples' : bkg+['AZH_1800_1200'],
                                               'fold'  : 0
                                            }

variables['ellipse_mA_1800_mH_1300'] = { 'name' : 'ellipse_mA_1800_mH_1300',
                                                'range' : (7,-0.5,6.5),
                                                'xaxis' : 'elliptical bin in mA-mH, pTZ',
                                                'cuts'  : ['breq_SR'],
                        'samples' : bkg+['AZH_1800_1300'],
                                               'fold'  : 0
                                            }

variables['ellipse_mA_1800_mH_1400'] = { 'name' : 'ellipse_mA_1800_mH_1400',
                                                'range' : (7,-0.5,6.5),
                                                'xaxis' : 'elliptical bin in mA-mH, pTZ',
                                                'cuts'  : ['breq_SR'],
                        'samples' : bkg+['AZH_1800_1400'],
                                               'fold'  : 0
                                            }

variables['ellipse_mA_1800_mH_1500'] = { 'name' : 'ellipse_mA_1800_mH_1500',
                                                'range' : (7,-0.5,6.5),
                                                'xaxis' : 'elliptical bin in mA-mH, pTZ',
                                                'cuts'  : ['breq_SR'],
                        'samples' : bkg+['AZH_1800_1500'],
                                               'fold'  : 0
                                            }

variables['ellipse_mA_1800_mH_1600'] = { 'name' : 'ellipse_mA_1800_mH_1600',
                                                'range' : (7,-0.5,6.5),
                                                'xaxis' : 'elliptical bin in mA-mH, pTZ',
                                                'cuts'  : ['breq_SR'],
                        'samples' : bkg+['AZH_1800_1600'],
                                               'fold'  : 0
                                            }

variables['ellipse_mA_1800_mH_1700'] = { 'name' : 'ellipse_mA_1800_mH_1700',
                                                'range' : (7,-0.5,6.5),
                                                'xaxis' : 'elliptical bin in mA-mH, pTZ',
                                                'cuts'  : ['breq_SR'],
                        'samples' : bkg+['AZH_1800_1700'],
                                               'fold'  : 0
                                            }

variables['ellipse_mA_1800_mH_350'] = { 'name' : 'ellipse_mA_1800_mH_350',
                                                'range' : (7,-0.5,6.5),
                                                'xaxis' : 'elliptical bin in mA-mH, pTZ',
                                                'cuts'  : ['breq_SR'],
                        'samples' : bkg+['AZH_1800_350'],
                                               'fold'  : 0
                                            }

variables['ellipse_mA_1800_mH_400'] = { 'name' : 'ellipse_mA_1800_mH_400',
                                                'range' : (7,-0.5,6.5),
                                                'xaxis' : 'elliptical bin in mA-mH, pTZ',
                                                'cuts'  : ['breq_SR'],
                        'samples' : bkg+['AZH_1800_400'],
                                               'fold'  : 0
                                            }

variables['ellipse_mA_1800_mH_500'] = { 'name' : 'ellipse_mA_1800_mH_500',
                                                'range' : (7,-0.5,6.5),
                                                'xaxis' : 'elliptical bin in mA-mH, pTZ',
                                                'cuts'  : ['breq_SR'],
                        'samples' : bkg+['AZH_1800_500'],
                                               'fold'  : 0
                                            }

variables['ellipse_mA_1800_mH_600'] = { 'name' : 'ellipse_mA_1800_mH_600',
                                                'range' : (7,-0.5,6.5),
                                                'xaxis' : 'elliptical bin in mA-mH, pTZ',
                                                'cuts'  : ['breq_SR'],
                        'samples' : bkg+['AZH_1800_600'],
                                               'fold'  : 0
                                            }

variables['ellipse_mA_1800_mH_700'] = { 'name' : 'ellipse_mA_1800_mH_700',
                                                'range' : (7,-0.5,6.5),
                                                'xaxis' : 'elliptical bin in mA-mH, pTZ',
                                                'cuts'  : ['breq_SR'],
                        'samples' : bkg+['AZH_1800_700'],
                                               'fold'  : 0
                                            }

variables['ellipse_mA_1800_mH_800'] = { 'name' : 'ellipse_mA_1800_mH_800',
                                                'range' : (7,-0.5,6.5),
                                                'xaxis' : 'elliptical bin in mA-mH, pTZ',
                                                'cuts'  : ['breq_SR'],
                        'samples' : bkg+['AZH_1800_800'],
                                               'fold'  : 0
                                            }

variables['ellipse_mA_1800_mH_900'] = { 'name' : 'ellipse_mA_1800_mH_900',
                                                'range' : (7,-0.5,6.5),
                                                'xaxis' : 'elliptical bin in mA-mH, pTZ',
                                                'cuts'  : ['breq_SR'],
                        'samples' : bkg+['AZH_1800_900'],
                                               'fold'  : 0
                                            }

variables['ellipse_mA_1900_mH_1000'] = { 'name' : 'ellipse_mA_1900_mH_1000',
                                                'range' : (7,-0.5,6.5),
                                                'xaxis' : 'elliptical bin in mA-mH, pTZ',
                                                'cuts'  : ['breq_SR'],
                        'samples' : bkg+['AZH_1900_1000'],
                                               'fold'  : 0
                                            }

variables['ellipse_mA_1900_mH_1100'] = { 'name' : 'ellipse_mA_1900_mH_1100',
                                                'range' : (7,-0.5,6.5),
                                                'xaxis' : 'elliptical bin in mA-mH, pTZ',
                                                'cuts'  : ['breq_SR'],
                        'samples' : bkg+['AZH_1900_1100'],
                                               'fold'  : 0
                                            }

variables['ellipse_mA_1900_mH_1200'] = { 'name' : 'ellipse_mA_1900_mH_1200',
                                                'range' : (7,-0.5,6.5),
                                                'xaxis' : 'elliptical bin in mA-mH, pTZ',
                                                'cuts'  : ['breq_SR'],
                        'samples' : bkg+['AZH_1900_1200'],
                                               'fold'  : 0
                                            }

variables['ellipse_mA_1900_mH_1300'] = { 'name' : 'ellipse_mA_1900_mH_1300',
                                                'range' : (7,-0.5,6.5),
                                                'xaxis' : 'elliptical bin in mA-mH, pTZ',
                                                'cuts'  : ['breq_SR'],
                        'samples' : bkg+['AZH_1900_1300'],
                                               'fold'  : 0
                                            }

variables['ellipse_mA_1900_mH_1400'] = { 'name' : 'ellipse_mA_1900_mH_1400',
                                                'range' : (7,-0.5,6.5),
                                                'xaxis' : 'elliptical bin in mA-mH, pTZ',
                                                'cuts'  : ['breq_SR'],
                        'samples' : bkg+['AZH_1900_1400'],
                                               'fold'  : 0
                                            }

variables['ellipse_mA_1900_mH_1500'] = { 'name' : 'ellipse_mA_1900_mH_1500',
                                                'range' : (7,-0.5,6.5),
                                                'xaxis' : 'elliptical bin in mA-mH, pTZ',
                                                'cuts'  : ['breq_SR'],
                        'samples' : bkg+['AZH_1900_1500'],
                                               'fold'  : 0
                                            }

variables['ellipse_mA_1900_mH_1600'] = { 'name' : 'ellipse_mA_1900_mH_1600',
                                                'range' : (7,-0.5,6.5),
                                                'xaxis' : 'elliptical bin in mA-mH, pTZ',
                                                'cuts'  : ['breq_SR'],
                        'samples' : bkg+['AZH_1900_1600'],
                                               'fold'  : 0
                                            }

variables['ellipse_mA_1900_mH_1700'] = { 'name' : 'ellipse_mA_1900_mH_1700',
                                                'range' : (7,-0.5,6.5),
                                                'xaxis' : 'elliptical bin in mA-mH, pTZ',
                                                'cuts'  : ['breq_SR'],
                        'samples' : bkg+['AZH_1900_1700'],
                                               'fold'  : 0
                                            }

variables['ellipse_mA_1900_mH_1800'] = { 'name' : 'ellipse_mA_1900_mH_1800',
                                                'range' : (7,-0.5,6.5),
                                                'xaxis' : 'elliptical bin in mA-mH, pTZ',
                                                'cuts'  : ['breq_SR'],
                        'samples' : bkg+['AZH_1900_1800'],
                                               'fold'  : 0
                                            }

variables['ellipse_mA_1900_mH_350'] = { 'name' : 'ellipse_mA_1900_mH_350',
                                                'range' : (7,-0.5,6.5),
                                                'xaxis' : 'elliptical bin in mA-mH, pTZ',
                                                'cuts'  : ['breq_SR'],
                        'samples' : bkg+['AZH_1900_350'],
                                               'fold'  : 0
                                            }

variables['ellipse_mA_1900_mH_400'] = { 'name' : 'ellipse_mA_1900_mH_400',
                                                'range' : (7,-0.5,6.5),
                                                'xaxis' : 'elliptical bin in mA-mH, pTZ',
                                                'cuts'  : ['breq_SR'],
                        'samples' : bkg+['AZH_1900_400'],
                                               'fold'  : 0
                                            }

variables['ellipse_mA_1900_mH_500'] = { 'name' : 'ellipse_mA_1900_mH_500',
                                                'range' : (7,-0.5,6.5),
                                                'xaxis' : 'elliptical bin in mA-mH, pTZ',
                                                'cuts'  : ['breq_SR'],
                        'samples' : bkg+['AZH_1900_500'],
                                               'fold'  : 0
                                            }

variables['ellipse_mA_1900_mH_600'] = { 'name' : 'ellipse_mA_1900_mH_600',
                                                'range' : (7,-0.5,6.5),
                                                'xaxis' : 'elliptical bin in mA-mH, pTZ',
                                                'cuts'  : ['breq_SR'],
                        'samples' : bkg+['AZH_1900_600'],
                                               'fold'  : 0
                                            }

variables['ellipse_mA_1900_mH_700'] = { 'name' : 'ellipse_mA_1900_mH_700',
                                                'range' : (7,-0.5,6.5),
                                                'xaxis' : 'elliptical bin in mA-mH, pTZ',
                                                'cuts'  : ['breq_SR'],
                        'samples' : bkg+['AZH_1900_700'],
                                               'fold'  : 0
                                            }

variables['ellipse_mA_1900_mH_800'] = { 'name' : 'ellipse_mA_1900_mH_800',
                                                'range' : (7,-0.5,6.5),
                                                'xaxis' : 'elliptical bin in mA-mH, pTZ',
                                                'cuts'  : ['breq_SR'],
                        'samples' : bkg+['AZH_1900_800'],
                                               'fold'  : 0
                                            }

variables['ellipse_mA_1900_mH_900'] = { 'name' : 'ellipse_mA_1900_mH_900',
                                                'range' : (7,-0.5,6.5),
                                                'xaxis' : 'elliptical bin in mA-mH, pTZ',
                                                'cuts'  : ['breq_SR'],
                        'samples' : bkg+['AZH_1900_900'],
                                               'fold'  : 0
                                            }

variables['ellipse_mA_2000_mH_1000'] = { 'name' : 'ellipse_mA_2000_mH_1000',
                                                'range' : (7,-0.5,6.5),
                                                'xaxis' : 'elliptical bin in mA-mH, pTZ',
                                                'cuts'  : ['breq_SR'],
                        'samples' : bkg+['AZH_2000_1000'],
                                               'fold'  : 0
                                            }

variables['ellipse_mA_2000_mH_1100'] = { 'name' : 'ellipse_mA_2000_mH_1100',
                                                'range' : (7,-0.5,6.5),
                                                'xaxis' : 'elliptical bin in mA-mH, pTZ',
                                                'cuts'  : ['breq_SR'],
                        'samples' : bkg+['AZH_2000_1100'],
                                               'fold'  : 0
                                            }

variables['ellipse_mA_2000_mH_1200'] = { 'name' : 'ellipse_mA_2000_mH_1200',
                                                'range' : (7,-0.5,6.5),
                                                'xaxis' : 'elliptical bin in mA-mH, pTZ',
                                                'cuts'  : ['breq_SR'],
                        'samples' : bkg+['AZH_2000_1200'],
                                               'fold'  : 0
                                            }

variables['ellipse_mA_2000_mH_1300'] = { 'name' : 'ellipse_mA_2000_mH_1300',
                                                'range' : (7,-0.5,6.5),
                                                'xaxis' : 'elliptical bin in mA-mH, pTZ',
                                                'cuts'  : ['breq_SR'],
                        'samples' : bkg+['AZH_2000_1300'],
                                               'fold'  : 0
                                            }

variables['ellipse_mA_2000_mH_1400'] = { 'name' : 'ellipse_mA_2000_mH_1400',
                                                'range' : (7,-0.5,6.5),
                                                'xaxis' : 'elliptical bin in mA-mH, pTZ',
                                                'cuts'  : ['breq_SR'],
                        'samples' : bkg+['AZH_2000_1400'],
                                               'fold'  : 0
                                            }

variables['ellipse_mA_2000_mH_1500'] = { 'name' : 'ellipse_mA_2000_mH_1500',
                                                'range' : (7,-0.5,6.5),
                                                'xaxis' : 'elliptical bin in mA-mH, pTZ',
                                                'cuts'  : ['breq_SR'],
                        'samples' : bkg+['AZH_2000_1500'],
                                               'fold'  : 0
                                            }

variables['ellipse_mA_2000_mH_1600'] = { 'name' : 'ellipse_mA_2000_mH_1600',
                                                'range' : (7,-0.5,6.5),
                                                'xaxis' : 'elliptical bin in mA-mH, pTZ',
                                                'cuts'  : ['breq_SR'],
                        'samples' : bkg+['AZH_2000_1600'],
                                               'fold'  : 0
                                            }

variables['ellipse_mA_2000_mH_1700'] = { 'name' : 'ellipse_mA_2000_mH_1700',
                                                'range' : (7,-0.5,6.5),
                                                'xaxis' : 'elliptical bin in mA-mH, pTZ',
                                                'cuts'  : ['breq_SR'],
                        'samples' : bkg+['AZH_2000_1700'],
                                               'fold'  : 0
                                            }

variables['ellipse_mA_2000_mH_1800'] = { 'name' : 'ellipse_mA_2000_mH_1800',
                                                'range' : (7,-0.5,6.5),
                                                'xaxis' : 'elliptical bin in mA-mH, pTZ',
                                                'cuts'  : ['breq_SR'],
                        'samples' : bkg+['AZH_2000_1800'],
                                               'fold'  : 0
                                            }

variables['ellipse_mA_2000_mH_1900'] = { 'name' : 'ellipse_mA_2000_mH_1900',
                                                'range' : (7,-0.5,6.5),
                                                'xaxis' : 'elliptical bin in mA-mH, pTZ',
                                                'cuts'  : ['breq_SR'],
                        'samples' : bkg+['AZH_2000_1900'],
                                               'fold'  : 0
                                            }

variables['ellipse_mA_2000_mH_350'] = { 'name' : 'ellipse_mA_2000_mH_350',
                                                'range' : (7,-0.5,6.5),
                                                'xaxis' : 'elliptical bin in mA-mH, pTZ',
                                                'cuts'  : ['breq_SR'],
                        'samples' : bkg+['AZH_2000_350'],
                                               'fold'  : 0
                                            }

variables['ellipse_mA_2000_mH_400'] = { 'name' : 'ellipse_mA_2000_mH_400',
                                                'range' : (7,-0.5,6.5),
                                                'xaxis' : 'elliptical bin in mA-mH, pTZ',
                                                'cuts'  : ['breq_SR'],
                        'samples' : bkg+['AZH_2000_400'],
                                               'fold'  : 0
                                            }

variables['ellipse_mA_2000_mH_500'] = { 'name' : 'ellipse_mA_2000_mH_500',
                                                'range' : (7,-0.5,6.5),
                                                'xaxis' : 'elliptical bin in mA-mH, pTZ',
                                                'cuts'  : ['breq_SR'],
                        'samples' : bkg+['AZH_2000_500'],
                                               'fold'  : 0
                                            }

variables['ellipse_mA_2000_mH_600'] = { 'name' : 'ellipse_mA_2000_mH_600',
                                                'range' : (7,-0.5,6.5),
                                                'xaxis' : 'elliptical bin in mA-mH, pTZ',
                                                'cuts'  : ['breq_SR'],
                        'samples' : bkg+['AZH_2000_600'],
                                               'fold'  : 0
                                            }

variables['ellipse_mA_2000_mH_700'] = { 'name' : 'ellipse_mA_2000_mH_700',
                                                'range' : (7,-0.5,6.5),
                                                'xaxis' : 'elliptical bin in mA-mH, pTZ',
                                                'cuts'  : ['breq_SR'],
                        'samples' : bkg+['AZH_2000_700'],
                                               'fold'  : 0
                                            }

variables['ellipse_mA_2000_mH_800'] = { 'name' : 'ellipse_mA_2000_mH_800',
                                                'range' : (7,-0.5,6.5),
                                                'xaxis' : 'elliptical bin in mA-mH, pTZ',
                                                'cuts'  : ['breq_SR'],
                        'samples' : bkg+['AZH_2000_800'],
                                               'fold'  : 0
                                            }

variables['ellipse_mA_2000_mH_900'] = { 'name' : 'ellipse_mA_2000_mH_900',
                                                'range' : (7,-0.5,6.5),
                                                'xaxis' : 'elliptical bin in mA-mH, pTZ',
                                                'cuts'  : ['breq_SR'],
                        'samples' : bkg+['AZH_2000_900'],
                                               'fold'  : 0
                                            }

variables['ellipse_mA_2100_mH_1000'] = { 'name' : 'ellipse_mA_2100_mH_1000',
                                                'range' : (7,-0.5,6.5),
                                                'xaxis' : 'elliptical bin in mA-mH, pTZ',
                                                'cuts'  : ['breq_SR'],
                        'samples' : bkg+['AZH_2100_1000'],
                                               'fold'  : 0
                                            }

variables['ellipse_mA_2100_mH_1100'] = { 'name' : 'ellipse_mA_2100_mH_1100',
                                                'range' : (7,-0.5,6.5),
                                                'xaxis' : 'elliptical bin in mA-mH, pTZ',
                                                'cuts'  : ['breq_SR'],
                        'samples' : bkg+['AZH_2100_1100'],
                                               'fold'  : 0
                                            }

variables['ellipse_mA_2100_mH_1200'] = { 'name' : 'ellipse_mA_2100_mH_1200',
                                                'range' : (7,-0.5,6.5),
                                                'xaxis' : 'elliptical bin in mA-mH, pTZ',
                                                'cuts'  : ['breq_SR'],
                        'samples' : bkg+['AZH_2100_1200'],
                                               'fold'  : 0
                                            }

variables['ellipse_mA_2100_mH_1300'] = { 'name' : 'ellipse_mA_2100_mH_1300',
                                                'range' : (7,-0.5,6.5),
                                                'xaxis' : 'elliptical bin in mA-mH, pTZ',
                                                'cuts'  : ['breq_SR'],
                        'samples' : bkg+['AZH_2100_1300'],
                                               'fold'  : 0
                                            }

variables['ellipse_mA_2100_mH_1400'] = { 'name' : 'ellipse_mA_2100_mH_1400',
                                                'range' : (7,-0.5,6.5),
                                                'xaxis' : 'elliptical bin in mA-mH, pTZ',
                                                'cuts'  : ['breq_SR'],
                        'samples' : bkg+['AZH_2100_1400'],
                                               'fold'  : 0
                                            }

variables['ellipse_mA_2100_mH_1500'] = { 'name' : 'ellipse_mA_2100_mH_1500',
                                                'range' : (7,-0.5,6.5),
                                                'xaxis' : 'elliptical bin in mA-mH, pTZ',
                                                'cuts'  : ['breq_SR'],
                        'samples' : bkg+['AZH_2100_1500'],
                                               'fold'  : 0
                                            }

variables['ellipse_mA_2100_mH_1600'] = { 'name' : 'ellipse_mA_2100_mH_1600',
                                                'range' : (7,-0.5,6.5),
                                                'xaxis' : 'elliptical bin in mA-mH, pTZ',
                                                'cuts'  : ['breq_SR'],
                        'samples' : bkg+['AZH_2100_1600'],
                                               'fold'  : 0
                                            }

variables['ellipse_mA_2100_mH_1700'] = { 'name' : 'ellipse_mA_2100_mH_1700',
                                                'range' : (7,-0.5,6.5),
                                                'xaxis' : 'elliptical bin in mA-mH, pTZ',
                                                'cuts'  : ['breq_SR'],
                        'samples' : bkg+['AZH_2100_1700'],
                                               'fold'  : 0
                                            }

variables['ellipse_mA_2100_mH_1800'] = { 'name' : 'ellipse_mA_2100_mH_1800',
                                                'range' : (7,-0.5,6.5),
                                                'xaxis' : 'elliptical bin in mA-mH, pTZ',
                                                'cuts'  : ['breq_SR'],
                        'samples' : bkg+['AZH_2100_1800'],
                                               'fold'  : 0
                                            }

variables['ellipse_mA_2100_mH_1900'] = { 'name' : 'ellipse_mA_2100_mH_1900',
                                                'range' : (7,-0.5,6.5),
                                                'xaxis' : 'elliptical bin in mA-mH, pTZ',
                                                'cuts'  : ['breq_SR'],
                        'samples' : bkg+['AZH_2100_1900'],
                                               'fold'  : 0
                                            }

variables['ellipse_mA_2100_mH_2000'] = { 'name' : 'ellipse_mA_2100_mH_2000',
                                                'range' : (7,-0.5,6.5),
                                                'xaxis' : 'elliptical bin in mA-mH, pTZ',
                                                'cuts'  : ['breq_SR'],
                        'samples' : bkg+['AZH_2100_2000'],
                                               'fold'  : 0
                                            }

variables['ellipse_mA_2100_mH_350'] = { 'name' : 'ellipse_mA_2100_mH_350',
                                                'range' : (7,-0.5,6.5),
                                                'xaxis' : 'elliptical bin in mA-mH, pTZ',
                                                'cuts'  : ['breq_SR'],
                        'samples' : bkg+['AZH_2100_350'],
                                               'fold'  : 0
                                            }

variables['ellipse_mA_2100_mH_400'] = { 'name' : 'ellipse_mA_2100_mH_400',
                                                'range' : (7,-0.5,6.5),
                                                'xaxis' : 'elliptical bin in mA-mH, pTZ',
                                                'cuts'  : ['breq_SR'],
                        'samples' : bkg+['AZH_2100_400'],
                                               'fold'  : 0
                                            }

variables['ellipse_mA_2100_mH_500'] = { 'name' : 'ellipse_mA_2100_mH_500',
                                                'range' : (7,-0.5,6.5),
                                                'xaxis' : 'elliptical bin in mA-mH, pTZ',
                                                'cuts'  : ['breq_SR'],
                        'samples' : bkg+['AZH_2100_500'],
                                               'fold'  : 0
                                            }

variables['ellipse_mA_2100_mH_600'] = { 'name' : 'ellipse_mA_2100_mH_600',
                                                'range' : (7,-0.5,6.5),
                                                'xaxis' : 'elliptical bin in mA-mH, pTZ',
                                                'cuts'  : ['breq_SR'],
                        'samples' : bkg+['AZH_2100_600'],
                                               'fold'  : 0
                                            }

variables['ellipse_mA_2100_mH_700'] = { 'name' : 'ellipse_mA_2100_mH_700',
                                                'range' : (7,-0.5,6.5),
                                                'xaxis' : 'elliptical bin in mA-mH, pTZ',
                                                'cuts'  : ['breq_SR'],
                        'samples' : bkg+['AZH_2100_700'],
                                               'fold'  : 0
                                            }

variables['ellipse_mA_2100_mH_800'] = { 'name' : 'ellipse_mA_2100_mH_800',
                                                'range' : (7,-0.5,6.5),
                                                'xaxis' : 'elliptical bin in mA-mH, pTZ',
                                                'cuts'  : ['breq_SR'],
                        'samples' : bkg+['AZH_2100_800'],
                                               'fold'  : 0
                                            }

variables['ellipse_mA_2100_mH_900'] = { 'name' : 'ellipse_mA_2100_mH_900',
                                                'range' : (7,-0.5,6.5),
                                                'xaxis' : 'elliptical bin in mA-mH, pTZ',
                                                'cuts'  : ['breq_SR'],
                        'samples' : bkg+['AZH_2100_900'],
                                               'fold'  : 0
                                            }

variables['ellipse_mA_430_mH_330'] = { 'name' : 'ellipse_mA_430_mH_330',
                                                'range' : (7,-0.5,6.5),
                                                'xaxis' : 'elliptical bin in mA-mH, pTZ',
                                                'cuts'  : ['breq_SR'],
                        'samples' : bkg+['AZH_430_330'],
                                               'fold'  : 0
                                            }

variables['ellipse_mA_450_mH_330'] = { 'name' : 'ellipse_mA_450_mH_330',
                                                'range' : (7,-0.5,6.5),
                                                'xaxis' : 'elliptical bin in mA-mH, pTZ',
                                                'cuts'  : ['breq_SR'],
                        'samples' : bkg+['AZH_450_330'],
                                               'fold'  : 0
                                            }

variables['ellipse_mA_450_mH_350'] = { 'name' : 'ellipse_mA_450_mH_350',
                                                'range' : (7,-0.5,6.5),
                                                'xaxis' : 'elliptical bin in mA-mH, pTZ',
                                                'cuts'  : ['breq_SR'],
                        'samples' : bkg+['AZH_450_350'],
                                               'fold'  : 0
                                            }

variables['ellipse_mA_500_mH_330'] = { 'name' : 'ellipse_mA_500_mH_330',
                                                'range' : (7,-0.5,6.5),
                                                'xaxis' : 'elliptical bin in mA-mH, pTZ',
                                                'cuts'  : ['breq_SR'],
                        'samples' : bkg+['AZH_500_330'],
                                               'fold'  : 0
                                            }

variables['ellipse_mA_500_mH_350'] = { 'name' : 'ellipse_mA_500_mH_350',
                                                'range' : (7,-0.5,6.5),
                                                'xaxis' : 'elliptical bin in mA-mH, pTZ',
                                                'cuts'  : ['breq_SR'],
                        'samples' : bkg+['AZH_500_350'],
                                               'fold'  : 0
                                            }

variables['ellipse_mA_500_mH_370'] = { 'name' : 'ellipse_mA_500_mH_370',
                                                'range' : (7,-0.5,6.5),
                                                'xaxis' : 'elliptical bin in mA-mH, pTZ',
                                                'cuts'  : ['breq_SR'],
                        'samples' : bkg+['AZH_500_370'],
                                               'fold'  : 0
                                            }

variables['ellipse_mA_500_mH_400'] = { 'name' : 'ellipse_mA_500_mH_400',
                                                'range' : (7,-0.5,6.5),
                                                'xaxis' : 'elliptical bin in mA-mH, pTZ',
                                                'cuts'  : ['breq_SR'],
                        'samples' : bkg+['AZH_500_400'],
                                               'fold'  : 0
                                            }

variables['ellipse_mA_550_mH_330'] = { 'name' : 'ellipse_mA_550_mH_330',
                                                'range' : (7,-0.5,6.5),
                                                'xaxis' : 'elliptical bin in mA-mH, pTZ',
                                                'cuts'  : ['breq_SR'],
                        'samples' : bkg+['AZH_550_330'],
                                               'fold'  : 0
                                            }

variables['ellipse_mA_550_mH_350'] = { 'name' : 'ellipse_mA_550_mH_350',
                                                'range' : (7,-0.5,6.5),
                                                'xaxis' : 'elliptical bin in mA-mH, pTZ',
                                                'cuts'  : ['breq_SR'],
                        'samples' : bkg+['AZH_550_350'],
                                               'fold'  : 0
                                            }

variables['ellipse_mA_550_mH_400'] = { 'name' : 'ellipse_mA_550_mH_400',
                                                'range' : (7,-0.5,6.5),
                                                'xaxis' : 'elliptical bin in mA-mH, pTZ',
                                                'cuts'  : ['breq_SR'],
                        'samples' : bkg+['AZH_550_400'],
                                               'fold'  : 0
                                            }

variables['ellipse_mA_550_mH_450'] = { 'name' : 'ellipse_mA_550_mH_450',
                                                'range' : (7,-0.5,6.5),
                                                'xaxis' : 'elliptical bin in mA-mH, pTZ',
                                                'cuts'  : ['breq_SR'],
                        'samples' : bkg+['AZH_550_450'],
                                               'fold'  : 0
                                            }

variables['ellipse_mA_600_mH_330'] = { 'name' : 'ellipse_mA_600_mH_330',
                                                'range' : (7,-0.5,6.5),
                                                'xaxis' : 'elliptical bin in mA-mH, pTZ',
                                                'cuts'  : ['breq_SR'],
                        'samples' : bkg+['AZH_600_330'],
                                               'fold'  : 0
                                            }

variables['ellipse_mA_600_mH_350'] = { 'name' : 'ellipse_mA_600_mH_350',
                                                'range' : (7,-0.5,6.5),
                                                'xaxis' : 'elliptical bin in mA-mH, pTZ',
                                                'cuts'  : ['breq_SR'],
                        'samples' : bkg+['AZH_600_350'],
                                               'fold'  : 0
                                            }

variables['ellipse_mA_600_mH_400'] = { 'name' : 'ellipse_mA_600_mH_400',
                                                'range' : (7,-0.5,6.5),
                                                'xaxis' : 'elliptical bin in mA-mH, pTZ',
                                                'cuts'  : ['breq_SR'],
                        'samples' : bkg+['AZH_600_400'],
                                               'fold'  : 0
                                            }

variables['ellipse_mA_600_mH_450'] = { 'name' : 'ellipse_mA_600_mH_450',
                                                'range' : (7,-0.5,6.5),
                                                'xaxis' : 'elliptical bin in mA-mH, pTZ',
                                                'cuts'  : ['breq_SR'],
                        'samples' : bkg+['AZH_600_450'],
                                               'fold'  : 0
                                            }

variables['ellipse_mA_600_mH_500'] = { 'name' : 'ellipse_mA_600_mH_500',
                                                'range' : (7,-0.5,6.5),
                                                'xaxis' : 'elliptical bin in mA-mH, pTZ',
                                                'cuts'  : ['breq_SR'],
                        'samples' : bkg+['AZH_600_500'],
                                               'fold'  : 0
                                            }

variables['ellipse_mA_650_mH_330'] = { 'name' : 'ellipse_mA_650_mH_330',
                                                'range' : (7,-0.5,6.5),
                                                'xaxis' : 'elliptical bin in mA-mH, pTZ',
                                                'cuts'  : ['breq_SR'],
                        'samples' : bkg+['AZH_650_330'],
                                               'fold'  : 0
                                            }

variables['ellipse_mA_650_mH_350'] = { 'name' : 'ellipse_mA_650_mH_350',
                                                'range' : (7,-0.5,6.5),
                                                'xaxis' : 'elliptical bin in mA-mH, pTZ',
                                                'cuts'  : ['breq_SR'],
                        'samples' : bkg+['AZH_650_350'],
                                               'fold'  : 0
                                            }

variables['ellipse_mA_650_mH_400'] = { 'name' : 'ellipse_mA_650_mH_400',
                                                'range' : (7,-0.5,6.5),
                                                'xaxis' : 'elliptical bin in mA-mH, pTZ',
                                                'cuts'  : ['breq_SR'],
                        'samples' : bkg+['AZH_650_400'],
                                               'fold'  : 0
                                            }

variables['ellipse_mA_650_mH_450'] = { 'name' : 'ellipse_mA_650_mH_450',
                                                'range' : (7,-0.5,6.5),
                                                'xaxis' : 'elliptical bin in mA-mH, pTZ',
                                                'cuts'  : ['breq_SR'],
                        'samples' : bkg+['AZH_650_450'],
                                               'fold'  : 0
                                            }

variables['ellipse_mA_650_mH_500'] = { 'name' : 'ellipse_mA_650_mH_500',
                                                'range' : (7,-0.5,6.5),
                                                'xaxis' : 'elliptical bin in mA-mH, pTZ',
                                                'cuts'  : ['breq_SR'],
                        'samples' : bkg+['AZH_650_500'],
                                               'fold'  : 0
                                            }

variables['ellipse_mA_650_mH_550'] = { 'name' : 'ellipse_mA_650_mH_550',
                                                'range' : (7,-0.5,6.5),
                                                'xaxis' : 'elliptical bin in mA-mH, pTZ',
                                                'cuts'  : ['breq_SR'],
                        'samples' : bkg+['AZH_650_550'],
                                               'fold'  : 0
                                            }

variables['ellipse_mA_700_mH_330'] = { 'name' : 'ellipse_mA_700_mH_330',
                                                'range' : (7,-0.5,6.5),
                                                'xaxis' : 'elliptical bin in mA-mH, pTZ',
                                                'cuts'  : ['breq_SR'],
                        'samples' : bkg+['AZH_700_330'],
                                               'fold'  : 0
                                            }

variables['ellipse_mA_700_mH_350'] = { 'name' : 'ellipse_mA_700_mH_350',
                                                'range' : (7,-0.5,6.5),
                                                'xaxis' : 'elliptical bin in mA-mH, pTZ',
                                                'cuts'  : ['breq_SR'],
                        'samples' : bkg+['AZH_700_350'],
                                               'fold'  : 0
                                            }

variables['ellipse_mA_700_mH_370'] = { 'name' : 'ellipse_mA_700_mH_370',
                                                'range' : (7,-0.5,6.5),
                                                'xaxis' : 'elliptical bin in mA-mH, pTZ',
                                                'cuts'  : ['breq_SR'],
                        'samples' : bkg+['AZH_700_370'],
                                               'fold'  : 0
                                            }

variables['ellipse_mA_700_mH_400'] = { 'name' : 'ellipse_mA_700_mH_400',
                                                'range' : (7,-0.5,6.5),
                                                'xaxis' : 'elliptical bin in mA-mH, pTZ',
                                                'cuts'  : ['breq_SR'],
                        'samples' : bkg+['AZH_700_400'],
                                               'fold'  : 0
                                            }

variables['ellipse_mA_700_mH_450'] = { 'name' : 'ellipse_mA_700_mH_450',
                                                'range' : (7,-0.5,6.5),
                                                'xaxis' : 'elliptical bin in mA-mH, pTZ',
                                                'cuts'  : ['breq_SR'],
                        'samples' : bkg+['AZH_700_450'],
                                               'fold'  : 0
                                            }

variables['ellipse_mA_700_mH_500'] = { 'name' : 'ellipse_mA_700_mH_500',
                                                'range' : (7,-0.5,6.5),
                                                'xaxis' : 'elliptical bin in mA-mH, pTZ',
                                                'cuts'  : ['breq_SR'],
                        'samples' : bkg+['AZH_700_500'],
                                               'fold'  : 0
                                            }

variables['ellipse_mA_700_mH_550'] = { 'name' : 'ellipse_mA_700_mH_550',
                                                'range' : (7,-0.5,6.5),
                                                'xaxis' : 'elliptical bin in mA-mH, pTZ',
                                                'cuts'  : ['breq_SR'],
                        'samples' : bkg+['AZH_700_550'],
                                               'fold'  : 0
                                            }

variables['ellipse_mA_700_mH_600'] = { 'name' : 'ellipse_mA_700_mH_600',
                                                'range' : (7,-0.5,6.5),
                                                'xaxis' : 'elliptical bin in mA-mH, pTZ',
                                                'cuts'  : ['breq_SR'],
                        'samples' : bkg+['AZH_700_600'],
                                               'fold'  : 0
                                            }

variables['ellipse_mA_750_mH_330'] = { 'name' : 'ellipse_mA_750_mH_330',
                                                'range' : (7,-0.5,6.5),
                                                'xaxis' : 'elliptical bin in mA-mH, pTZ',
                                                'cuts'  : ['breq_SR'],
                        'samples' : bkg+['AZH_750_330'],
                                               'fold'  : 0
                                            }

variables['ellipse_mA_750_mH_350'] = { 'name' : 'ellipse_mA_750_mH_350',
                                                'range' : (7,-0.5,6.5),
                                                'xaxis' : 'elliptical bin in mA-mH, pTZ',
                                                'cuts'  : ['breq_SR'],
                        'samples' : bkg+['AZH_750_350'],
                                               'fold'  : 0
                                            }

variables['ellipse_mA_750_mH_400'] = { 'name' : 'ellipse_mA_750_mH_400',
                                                'range' : (7,-0.5,6.5),
                                                'xaxis' : 'elliptical bin in mA-mH, pTZ',
                                                'cuts'  : ['breq_SR'],
                        'samples' : bkg+['AZH_750_400'],
                                               'fold'  : 0
                                            }

variables['ellipse_mA_750_mH_450'] = { 'name' : 'ellipse_mA_750_mH_450',
                                                'range' : (7,-0.5,6.5),
                                                'xaxis' : 'elliptical bin in mA-mH, pTZ',
                                                'cuts'  : ['breq_SR'],
                        'samples' : bkg+['AZH_750_450'],
                                               'fold'  : 0
                                            }

variables['ellipse_mA_750_mH_500'] = { 'name' : 'ellipse_mA_750_mH_500',
                                                'range' : (7,-0.5,6.5),
                                                'xaxis' : 'elliptical bin in mA-mH, pTZ',
                                                'cuts'  : ['breq_SR'],
                        'samples' : bkg+['AZH_750_500'],
                                               'fold'  : 0
                                            }

variables['ellipse_mA_750_mH_550'] = { 'name' : 'ellipse_mA_750_mH_550',
                                                'range' : (7,-0.5,6.5),
                                                'xaxis' : 'elliptical bin in mA-mH, pTZ',
                                                'cuts'  : ['breq_SR'],
                        'samples' : bkg+['AZH_750_550'],
                                               'fold'  : 0
                                            }

variables['ellipse_mA_750_mH_600'] = { 'name' : 'ellipse_mA_750_mH_600',
                                                'range' : (7,-0.5,6.5),
                                                'xaxis' : 'elliptical bin in mA-mH, pTZ',
                                                'cuts'  : ['breq_SR'],
                        'samples' : bkg+['AZH_750_600'],
                                               'fold'  : 0
                                            }

variables['ellipse_mA_750_mH_650'] = { 'name' : 'ellipse_mA_750_mH_650',
                                                'range' : (7,-0.5,6.5),
                                                'xaxis' : 'elliptical bin in mA-mH, pTZ',
                                                'cuts'  : ['breq_SR'],
                        'samples' : bkg+['AZH_750_650'],
                                               'fold'  : 0
                                            }

variables['ellipse_mA_800_mH_330'] = { 'name' : 'ellipse_mA_800_mH_330',
                                                'range' : (7,-0.5,6.5),
                                                'xaxis' : 'elliptical bin in mA-mH, pTZ',
                                                'cuts'  : ['breq_SR'],
                        'samples' : bkg+['AZH_800_330'],
                                               'fold'  : 0
                                            }

variables['ellipse_mA_800_mH_350'] = { 'name' : 'ellipse_mA_800_mH_350',
                                                'range' : (7,-0.5,6.5),
                                                'xaxis' : 'elliptical bin in mA-mH, pTZ',
                                                'cuts'  : ['breq_SR'],
                        'samples' : bkg+['AZH_800_350'],
                                               'fold'  : 0
                                            }

variables['ellipse_mA_800_mH_400'] = { 'name' : 'ellipse_mA_800_mH_400',
                                                'range' : (7,-0.5,6.5),
                                                'xaxis' : 'elliptical bin in mA-mH, pTZ',
                                                'cuts'  : ['breq_SR'],
                        'samples' : bkg+['AZH_800_400'],
                                               'fold'  : 0
                                            }

variables['ellipse_mA_800_mH_450'] = { 'name' : 'ellipse_mA_800_mH_450',
                                                'range' : (7,-0.5,6.5),
                                                'xaxis' : 'elliptical bin in mA-mH, pTZ',
                                                'cuts'  : ['breq_SR'],
                        'samples' : bkg+['AZH_800_450'],
                                               'fold'  : 0
                                            }

variables['ellipse_mA_800_mH_500'] = { 'name' : 'ellipse_mA_800_mH_500',
                                                'range' : (7,-0.5,6.5),
                                                'xaxis' : 'elliptical bin in mA-mH, pTZ',
                                                'cuts'  : ['breq_SR'],
                        'samples' : bkg+['AZH_800_500'],
                                               'fold'  : 0
                                            }

variables['ellipse_mA_800_mH_550'] = { 'name' : 'ellipse_mA_800_mH_550',
                                                'range' : (7,-0.5,6.5),
                                                'xaxis' : 'elliptical bin in mA-mH, pTZ',
                                                'cuts'  : ['breq_SR'],
                        'samples' : bkg+['AZH_800_550'],
                                               'fold'  : 0
                                            }

variables['ellipse_mA_800_mH_600'] = { 'name' : 'ellipse_mA_800_mH_600',
                                                'range' : (7,-0.5,6.5),
                                                'xaxis' : 'elliptical bin in mA-mH, pTZ',
                                                'cuts'  : ['breq_SR'],
                        'samples' : bkg+['AZH_800_600'],
                                               'fold'  : 0
                                            }

variables['ellipse_mA_800_mH_650'] = { 'name' : 'ellipse_mA_800_mH_650',
                                                'range' : (7,-0.5,6.5),
                                                'xaxis' : 'elliptical bin in mA-mH, pTZ',
                                                'cuts'  : ['breq_SR'],
                        'samples' : bkg+['AZH_800_650'],
                                               'fold'  : 0
                                            }

variables['ellipse_mA_800_mH_700'] = { 'name' : 'ellipse_mA_800_mH_700',
                                                'range' : (7,-0.5,6.5),
                                                'xaxis' : 'elliptical bin in mA-mH, pTZ',
                                                'cuts'  : ['breq_SR'],
                        'samples' : bkg+['AZH_800_700'],
                                               'fold'  : 0
                                            }

variables['ellipse_mA_850_mH_330'] = { 'name' : 'ellipse_mA_850_mH_330',
                                                'range' : (7,-0.5,6.5),
                                                'xaxis' : 'elliptical bin in mA-mH, pTZ',
                                                'cuts'  : ['breq_SR'],
                        'samples' : bkg+['AZH_850_330'],
                                               'fold'  : 0
                                            }

variables['ellipse_mA_850_mH_350'] = { 'name' : 'ellipse_mA_850_mH_350',
                                                'range' : (7,-0.5,6.5),
                                                'xaxis' : 'elliptical bin in mA-mH, pTZ',
                                                'cuts'  : ['breq_SR'],
                        'samples' : bkg+['AZH_850_350'],
                                               'fold'  : 0
                                            }

variables['ellipse_mA_850_mH_400'] = { 'name' : 'ellipse_mA_850_mH_400',
                                                'range' : (7,-0.5,6.5),
                                                'xaxis' : 'elliptical bin in mA-mH, pTZ',
                                                'cuts'  : ['breq_SR'],
                        'samples' : bkg+['AZH_850_400'],
                                               'fold'  : 0
                                            }

variables['ellipse_mA_850_mH_450'] = { 'name' : 'ellipse_mA_850_mH_450',
                                                'range' : (7,-0.5,6.5),
                                                'xaxis' : 'elliptical bin in mA-mH, pTZ',
                                                'cuts'  : ['breq_SR'],
                        'samples' : bkg+['AZH_850_450'],
                                               'fold'  : 0
                                            }

variables['ellipse_mA_850_mH_500'] = { 'name' : 'ellipse_mA_850_mH_500',
                                                'range' : (7,-0.5,6.5),
                                                'xaxis' : 'elliptical bin in mA-mH, pTZ',
                                                'cuts'  : ['breq_SR'],
                        'samples' : bkg+['AZH_850_500'],
                                               'fold'  : 0
                                            }

variables['ellipse_mA_850_mH_550'] = { 'name' : 'ellipse_mA_850_mH_550',
                                                'range' : (7,-0.5,6.5),
                                                'xaxis' : 'elliptical bin in mA-mH, pTZ',
                                                'cuts'  : ['breq_SR'],
                        'samples' : bkg+['AZH_850_550'],
                                               'fold'  : 0
                                            }

variables['ellipse_mA_850_mH_600'] = { 'name' : 'ellipse_mA_850_mH_600',
                                                'range' : (7,-0.5,6.5),
                                                'xaxis' : 'elliptical bin in mA-mH, pTZ',
                                                'cuts'  : ['breq_SR'],
                        'samples' : bkg+['AZH_850_600'],
                                               'fold'  : 0
                                            }

variables['ellipse_mA_850_mH_650'] = { 'name' : 'ellipse_mA_850_mH_650',
                                                'range' : (7,-0.5,6.5),
                                                'xaxis' : 'elliptical bin in mA-mH, pTZ',
                                                'cuts'  : ['breq_SR'],
                        'samples' : bkg+['AZH_850_650'],
                                               'fold'  : 0
                                            }

variables['ellipse_mA_850_mH_700'] = { 'name' : 'ellipse_mA_850_mH_700',
                                                'range' : (7,-0.5,6.5),
                                                'xaxis' : 'elliptical bin in mA-mH, pTZ',
                                                'cuts'  : ['breq_SR'],
                        'samples' : bkg+['AZH_850_700'],
                                               'fold'  : 0
                                            }

variables['ellipse_mA_850_mH_750'] = { 'name' : 'ellipse_mA_850_mH_750',
                                                'range' : (7,-0.5,6.5),
                                                'xaxis' : 'elliptical bin in mA-mH, pTZ',
                                                'cuts'  : ['breq_SR'],
                        'samples' : bkg+['AZH_850_750'],
                                               'fold'  : 0
                                            }

variables['ellipse_mA_900_mH_330'] = { 'name' : 'ellipse_mA_900_mH_330',
                                                'range' : (7,-0.5,6.5),
                                                'xaxis' : 'elliptical bin in mA-mH, pTZ',
                                                'cuts'  : ['breq_SR'],
                        'samples' : bkg+['AZH_900_330'],
                                               'fold'  : 0
                                            }

variables['ellipse_mA_900_mH_350'] = { 'name' : 'ellipse_mA_900_mH_350',
                                                'range' : (7,-0.5,6.5),
                                                'xaxis' : 'elliptical bin in mA-mH, pTZ',
                                                'cuts'  : ['breq_SR'],
                        'samples' : bkg+['AZH_900_350'],
                                               'fold'  : 0
                                            }

variables['ellipse_mA_900_mH_370'] = { 'name' : 'ellipse_mA_900_mH_370',
                                                'range' : (7,-0.5,6.5),
                                                'xaxis' : 'elliptical bin in mA-mH, pTZ',
                                                'cuts'  : ['breq_SR'],
                        'samples' : bkg+['AZH_900_370'],
                                               'fold'  : 0
                                            }

variables['ellipse_mA_900_mH_400'] = { 'name' : 'ellipse_mA_900_mH_400',
                                                'range' : (7,-0.5,6.5),
                                                'xaxis' : 'elliptical bin in mA-mH, pTZ',
                                                'cuts'  : ['breq_SR'],
                        'samples' : bkg+['AZH_900_400'],
                                               'fold'  : 0
                                            }

variables['ellipse_mA_900_mH_450'] = { 'name' : 'ellipse_mA_900_mH_450',
                                                'range' : (7,-0.5,6.5),
                                                'xaxis' : 'elliptical bin in mA-mH, pTZ',
                                                'cuts'  : ['breq_SR'],
                        'samples' : bkg+['AZH_900_450'],
                                               'fold'  : 0
                                            }

variables['ellipse_mA_900_mH_500'] = { 'name' : 'ellipse_mA_900_mH_500',
                                                'range' : (7,-0.5,6.5),
                                                'xaxis' : 'elliptical bin in mA-mH, pTZ',
                                                'cuts'  : ['breq_SR'],
                        'samples' : bkg+['AZH_900_500'],
                                               'fold'  : 0
                                            }

variables['ellipse_mA_900_mH_550'] = { 'name' : 'ellipse_mA_900_mH_550',
                                                'range' : (7,-0.5,6.5),
                                                'xaxis' : 'elliptical bin in mA-mH, pTZ',
                                                'cuts'  : ['breq_SR'],
                        'samples' : bkg+['AZH_900_550'],
                                               'fold'  : 0
                                            }

variables['ellipse_mA_900_mH_600'] = { 'name' : 'ellipse_mA_900_mH_600',
                                                'range' : (7,-0.5,6.5),
                                                'xaxis' : 'elliptical bin in mA-mH, pTZ',
                                                'cuts'  : ['breq_SR'],
                        'samples' : bkg+['AZH_900_600'],
                                               'fold'  : 0
                                            }

variables['ellipse_mA_900_mH_650'] = { 'name' : 'ellipse_mA_900_mH_650',
                                                'range' : (7,-0.5,6.5),
                                                'xaxis' : 'elliptical bin in mA-mH, pTZ',
                                                'cuts'  : ['breq_SR'],
                        'samples' : bkg+['AZH_900_650'],
                                               'fold'  : 0
                                            }

variables['ellipse_mA_900_mH_700'] = { 'name' : 'ellipse_mA_900_mH_700',
                                                'range' : (7,-0.5,6.5),
                                                'xaxis' : 'elliptical bin in mA-mH, pTZ',
                                                'cuts'  : ['breq_SR'],
                        'samples' : bkg+['AZH_900_700'],
                                               'fold'  : 0
                                            }

variables['ellipse_mA_900_mH_750'] = { 'name' : 'ellipse_mA_900_mH_750',
                                                'range' : (7,-0.5,6.5),
                                                'xaxis' : 'elliptical bin in mA-mH, pTZ',
                                                'cuts'  : ['breq_SR'],
                        'samples' : bkg+['AZH_900_750'],
                                               'fold'  : 0
                                            }

variables['ellipse_mA_900_mH_800'] = { 'name' : 'ellipse_mA_900_mH_800',
                                                'range' : (7,-0.5,6.5),
                                                'xaxis' : 'elliptical bin in mA-mH, pTZ',
                                                'cuts'  : ['breq_SR'],
                        'samples' : bkg+['AZH_900_800'],
                                               'fold'  : 0
                                            }

variables['ellipse_mA_950_mH_330'] = { 'name' : 'ellipse_mA_950_mH_330',
                                                'range' : (7,-0.5,6.5),
                                                'xaxis' : 'elliptical bin in mA-mH, pTZ',
                                                'cuts'  : ['breq_SR'],
                        'samples' : bkg+['AZH_950_330'],
                                               'fold'  : 0
                                            }

variables['ellipse_mA_950_mH_350'] = { 'name' : 'ellipse_mA_950_mH_350',
                                                'range' : (7,-0.5,6.5),
                                                'xaxis' : 'elliptical bin in mA-mH, pTZ',
                                                'cuts'  : ['breq_SR'],
                        'samples' : bkg+['AZH_950_350'],
                                               'fold'  : 0
                                            }

variables['ellipse_mA_950_mH_400'] = { 'name' : 'ellipse_mA_950_mH_400',
                                                'range' : (7,-0.5,6.5),
                                                'xaxis' : 'elliptical bin in mA-mH, pTZ',
                                                'cuts'  : ['breq_SR'],
                        'samples' : bkg+['AZH_950_400'],
                                               'fold'  : 0
                                            }

variables['ellipse_mA_950_mH_450'] = { 'name' : 'ellipse_mA_950_mH_450',
                                                'range' : (7,-0.5,6.5),
                                                'xaxis' : 'elliptical bin in mA-mH, pTZ',
                                                'cuts'  : ['breq_SR'],
                        'samples' : bkg+['AZH_950_450'],
                                               'fold'  : 0
                                            }

variables['ellipse_mA_950_mH_500'] = { 'name' : 'ellipse_mA_950_mH_500',
                                                'range' : (7,-0.5,6.5),
                                                'xaxis' : 'elliptical bin in mA-mH, pTZ',
                                                'cuts'  : ['breq_SR'],
                        'samples' : bkg+['AZH_950_500'],
                                               'fold'  : 0
                                            }

variables['ellipse_mA_950_mH_550'] = { 'name' : 'ellipse_mA_950_mH_550',
                                                'range' : (7,-0.5,6.5),
                                                'xaxis' : 'elliptical bin in mA-mH, pTZ',
                                                'cuts'  : ['breq_SR'],
                        'samples' : bkg+['AZH_950_550'],
                                               'fold'  : 0
                                            }

variables['ellipse_mA_950_mH_600'] = { 'name' : 'ellipse_mA_950_mH_600',
                                                'range' : (7,-0.5,6.5),
                                                'xaxis' : 'elliptical bin in mA-mH, pTZ',
                                                'cuts'  : ['breq_SR'],
                        'samples' : bkg+['AZH_950_600'],
                                               'fold'  : 0
                                            }

variables['ellipse_mA_950_mH_650'] = { 'name' : 'ellipse_mA_950_mH_650',
                                                'range' : (7,-0.5,6.5),
                                                'xaxis' : 'elliptical bin in mA-mH, pTZ',
                                                'cuts'  : ['breq_SR'],
                        'samples' : bkg+['AZH_950_650'],
                                               'fold'  : 0
                                            }

variables['ellipse_mA_950_mH_700'] = { 'name' : 'ellipse_mA_950_mH_700',
                                                'range' : (7,-0.5,6.5),
                                                'xaxis' : 'elliptical bin in mA-mH, pTZ',
                                                'cuts'  : ['breq_SR'],
                        'samples' : bkg+['AZH_950_700'],
                                               'fold'  : 0
                                            }

variables['ellipse_mA_950_mH_750'] = { 'name' : 'ellipse_mA_950_mH_750',
                                                'range' : (7,-0.5,6.5),
                                                'xaxis' : 'elliptical bin in mA-mH, pTZ',
                                                'cuts'  : ['breq_SR'],
                        'samples' : bkg+['AZH_950_750'],
                                               'fold'  : 0
                                            }

variables['ellipse_mA_950_mH_800'] = { 'name' : 'ellipse_mA_950_mH_800',
                                                'range' : (7,-0.5,6.5),
                                                'xaxis' : 'elliptical bin in mA-mH, pTZ',
                                                'cuts'  : ['breq_SR'],
                        'samples' : bkg+['AZH_950_800'],
                                               'fold'  : 0
                                            }

variables['ellipse_mA_950_mH_850'] = { 'name' : 'ellipse_mA_950_mH_850',
                                                'range' : (7,-0.5,6.5),
                                                'xaxis' : 'elliptical bin in mA-mH, pTZ',
                                                'cuts'  : ['breq_SR'],
                        'samples' : bkg+['AZH_950_850'],
                                               'fold'  : 0
                                            }

### onebjet ellipse variables ###


variables['ellipse_onebjet_mA_1000_mH_330'] = { 'name' : 'ellipse_onebjet_mA_1000_mH_330',
                                                'range' : (7,-0.5,6.5),
                                                'xaxis' : 'elliptical bin in mA-mH, pTZ',
                                                'cuts'  : ['bveto_1j_SR'],
                        'samples' : bkg+['AZH_1000_330'],
                                               'fold'  : 0
                                            }

variables['ellipse_onebjet_mA_1000_mH_350'] = { 'name' : 'ellipse_onebjet_mA_1000_mH_350',
                                                'range' : (7,-0.5,6.5),
                                                'xaxis' : 'elliptical bin in mA-mH, pTZ',
                                                'cuts'  : ['bveto_1j_SR'],
                        'samples' : bkg+['AZH_1000_350'],
                                               'fold'  : 0
                                            }

variables['ellipse_onebjet_mA_1000_mH_400'] = { 'name' : 'ellipse_onebjet_mA_1000_mH_400',
                                                'range' : (7,-0.5,6.5),
                                                'xaxis' : 'elliptical bin in mA-mH, pTZ',
                                                'cuts'  : ['bveto_1j_SR'],
                        'samples' : bkg+['AZH_1000_400'],
                                               'fold'  : 0
                                            }

variables['ellipse_onebjet_mA_1000_mH_450'] = { 'name' : 'ellipse_onebjet_mA_1000_mH_450',
                                                'range' : (7,-0.5,6.5),
                                                'xaxis' : 'elliptical bin in mA-mH, pTZ',
                                                'cuts'  : ['bveto_1j_SR'],
                        'samples' : bkg+['AZH_1000_450'],
                                               'fold'  : 0
                                            }

variables['ellipse_onebjet_mA_1000_mH_500'] = { 'name' : 'ellipse_onebjet_mA_1000_mH_500',
                                                'range' : (7,-0.5,6.5),
                                                'xaxis' : 'elliptical bin in mA-mH, pTZ',
                                                'cuts'  : ['bveto_1j_SR'],
                        'samples' : bkg+['AZH_1000_500'],
                                               'fold'  : 0
                                            }

variables['ellipse_onebjet_mA_1000_mH_550'] = { 'name' : 'ellipse_onebjet_mA_1000_mH_550',
                                                'range' : (7,-0.5,6.5),
                                                'xaxis' : 'elliptical bin in mA-mH, pTZ',
                                                'cuts'  : ['bveto_1j_SR'],
                        'samples' : bkg+['AZH_1000_550'],
                                               'fold'  : 0
                                            }

variables['ellipse_onebjet_mA_1000_mH_600'] = { 'name' : 'ellipse_onebjet_mA_1000_mH_600',
                                                'range' : (7,-0.5,6.5),
                                                'xaxis' : 'elliptical bin in mA-mH, pTZ',
                                                'cuts'  : ['bveto_1j_SR'],
                        'samples' : bkg+['AZH_1000_600'],
                                               'fold'  : 0
                                            }

variables['ellipse_onebjet_mA_1000_mH_650'] = { 'name' : 'ellipse_onebjet_mA_1000_mH_650',
                                                'range' : (7,-0.5,6.5),
                                                'xaxis' : 'elliptical bin in mA-mH, pTZ',
                                                'cuts'  : ['bveto_1j_SR'],
                        'samples' : bkg+['AZH_1000_650'],
                                               'fold'  : 0
                                            }

variables['ellipse_onebjet_mA_1000_mH_700'] = { 'name' : 'ellipse_onebjet_mA_1000_mH_700',
                                                'range' : (7,-0.5,6.5),
                                                'xaxis' : 'elliptical bin in mA-mH, pTZ',
                                                'cuts'  : ['bveto_1j_SR'],
                        'samples' : bkg+['AZH_1000_700'],
                                               'fold'  : 0
                                            }

variables['ellipse_onebjet_mA_1000_mH_750'] = { 'name' : 'ellipse_onebjet_mA_1000_mH_750',
                                                'range' : (7,-0.5,6.5),
                                                'xaxis' : 'elliptical bin in mA-mH, pTZ',
                                                'cuts'  : ['bveto_1j_SR'],
                        'samples' : bkg+['AZH_1000_750'],
                                               'fold'  : 0
                                            }

variables['ellipse_onebjet_mA_1000_mH_800'] = { 'name' : 'ellipse_onebjet_mA_1000_mH_800',
                                                'range' : (7,-0.5,6.5),
                                                'xaxis' : 'elliptical bin in mA-mH, pTZ',
                                                'cuts'  : ['bveto_1j_SR'],
                        'samples' : bkg+['AZH_1000_800'],
                                               'fold'  : 0
                                            }

variables['ellipse_onebjet_mA_1000_mH_850'] = { 'name' : 'ellipse_onebjet_mA_1000_mH_850',
                                                'range' : (7,-0.5,6.5),
                                                'xaxis' : 'elliptical bin in mA-mH, pTZ',
                                                'cuts'  : ['bveto_1j_SR'],
                        'samples' : bkg+['AZH_1000_850'],
                                               'fold'  : 0
                                            }

variables['ellipse_onebjet_mA_1000_mH_900'] = { 'name' : 'ellipse_onebjet_mA_1000_mH_900',
                                                'range' : (7,-0.5,6.5),
                                                'xaxis' : 'elliptical bin in mA-mH, pTZ',
                                                'cuts'  : ['bveto_1j_SR'],
                        'samples' : bkg+['AZH_1000_900'],
                                               'fold'  : 0
                                            }

variables['ellipse_onebjet_mA_1050_mH_330'] = { 'name' : 'ellipse_onebjet_mA_1050_mH_330',
                                                'range' : (7,-0.5,6.5),
                                                'xaxis' : 'elliptical bin in mA-mH, pTZ',
                                                'cuts'  : ['bveto_1j_SR'],
                        'samples' : bkg+['AZH_1050_330'],
                                               'fold'  : 0
                                            }

variables['ellipse_onebjet_mA_1050_mH_350'] = { 'name' : 'ellipse_onebjet_mA_1050_mH_350',
                                                'range' : (7,-0.5,6.5),
                                                'xaxis' : 'elliptical bin in mA-mH, pTZ',
                                                'cuts'  : ['bveto_1j_SR'],
                        'samples' : bkg+['AZH_1050_350'],
                                               'fold'  : 0
                                            }

variables['ellipse_onebjet_mA_1050_mH_400'] = { 'name' : 'ellipse_onebjet_mA_1050_mH_400',
                                                'range' : (7,-0.5,6.5),
                                                'xaxis' : 'elliptical bin in mA-mH, pTZ',
                                                'cuts'  : ['bveto_1j_SR'],
                        'samples' : bkg+['AZH_1050_400'],
                                               'fold'  : 0
                                            }

variables['ellipse_onebjet_mA_1050_mH_450'] = { 'name' : 'ellipse_onebjet_mA_1050_mH_450',
                                                'range' : (7,-0.5,6.5),
                                                'xaxis' : 'elliptical bin in mA-mH, pTZ',
                                                'cuts'  : ['bveto_1j_SR'],
                        'samples' : bkg+['AZH_1050_450'],
                                               'fold'  : 0
                                            }

variables['ellipse_onebjet_mA_1050_mH_500'] = { 'name' : 'ellipse_onebjet_mA_1050_mH_500',
                                                'range' : (7,-0.5,6.5),
                                                'xaxis' : 'elliptical bin in mA-mH, pTZ',
                                                'cuts'  : ['bveto_1j_SR'],
                        'samples' : bkg+['AZH_1050_500'],
                                               'fold'  : 0
                                            }

variables['ellipse_onebjet_mA_1050_mH_550'] = { 'name' : 'ellipse_onebjet_mA_1050_mH_550',
                                                'range' : (7,-0.5,6.5),
                                                'xaxis' : 'elliptical bin in mA-mH, pTZ',
                                                'cuts'  : ['bveto_1j_SR'],
                        'samples' : bkg+['AZH_1050_550'],
                                               'fold'  : 0
                                            }

variables['ellipse_onebjet_mA_1050_mH_600'] = { 'name' : 'ellipse_onebjet_mA_1050_mH_600',
                                                'range' : (7,-0.5,6.5),
                                                'xaxis' : 'elliptical bin in mA-mH, pTZ',
                                                'cuts'  : ['bveto_1j_SR'],
                        'samples' : bkg+['AZH_1050_600'],
                                               'fold'  : 0
                                            }

variables['ellipse_onebjet_mA_1050_mH_650'] = { 'name' : 'ellipse_onebjet_mA_1050_mH_650',
                                                'range' : (7,-0.5,6.5),
                                                'xaxis' : 'elliptical bin in mA-mH, pTZ',
                                                'cuts'  : ['bveto_1j_SR'],
                        'samples' : bkg+['AZH_1050_650'],
                                               'fold'  : 0
                                            }

variables['ellipse_onebjet_mA_1050_mH_700'] = { 'name' : 'ellipse_onebjet_mA_1050_mH_700',
                                                'range' : (7,-0.5,6.5),
                                                'xaxis' : 'elliptical bin in mA-mH, pTZ',
                                                'cuts'  : ['bveto_1j_SR'],
                        'samples' : bkg+['AZH_1050_700'],
                                               'fold'  : 0
                                            }

variables['ellipse_onebjet_mA_1050_mH_750'] = { 'name' : 'ellipse_onebjet_mA_1050_mH_750',
                                                'range' : (7,-0.5,6.5),
                                                'xaxis' : 'elliptical bin in mA-mH, pTZ',
                                                'cuts'  : ['bveto_1j_SR'],
                        'samples' : bkg+['AZH_1050_750'],
                                               'fold'  : 0
                                            }

variables['ellipse_onebjet_mA_1050_mH_800'] = { 'name' : 'ellipse_onebjet_mA_1050_mH_800',
                                                'range' : (7,-0.5,6.5),
                                                'xaxis' : 'elliptical bin in mA-mH, pTZ',
                                                'cuts'  : ['bveto_1j_SR'],
                        'samples' : bkg+['AZH_1050_800'],
                                               'fold'  : 0
                                            }

variables['ellipse_onebjet_mA_1050_mH_850'] = { 'name' : 'ellipse_onebjet_mA_1050_mH_850',
                                                'range' : (7,-0.5,6.5),
                                                'xaxis' : 'elliptical bin in mA-mH, pTZ',
                                                'cuts'  : ['bveto_1j_SR'],
                        'samples' : bkg+['AZH_1050_850'],
                                               'fold'  : 0
                                            }

variables['ellipse_onebjet_mA_1050_mH_900'] = { 'name' : 'ellipse_onebjet_mA_1050_mH_900',
                                                'range' : (7,-0.5,6.5),
                                                'xaxis' : 'elliptical bin in mA-mH, pTZ',
                                                'cuts'  : ['bveto_1j_SR'],
                        'samples' : bkg+['AZH_1050_900'],
                                               'fold'  : 0
                                            }

variables['ellipse_onebjet_mA_1050_mH_950'] = { 'name' : 'ellipse_onebjet_mA_1050_mH_950',
                                                'range' : (7,-0.5,6.5),
                                                'xaxis' : 'elliptical bin in mA-mH, pTZ',
                                                'cuts'  : ['bveto_1j_SR'],
                        'samples' : bkg+['AZH_1050_950'],
                                               'fold'  : 0
                                            }

variables['ellipse_onebjet_mA_1100_mH_1000'] = { 'name' : 'ellipse_onebjet_mA_1100_mH_1000',
                                                'range' : (7,-0.5,6.5),
                                                'xaxis' : 'elliptical bin in mA-mH, pTZ',
                                                'cuts'  : ['bveto_1j_SR'],
                        'samples' : bkg+['AZH_1100_1000'],
                                               'fold'  : 0
                                            }

variables['ellipse_onebjet_mA_1100_mH_330'] = { 'name' : 'ellipse_onebjet_mA_1100_mH_330',
                                                'range' : (7,-0.5,6.5),
                                                'xaxis' : 'elliptical bin in mA-mH, pTZ',
                                                'cuts'  : ['bveto_1j_SR'],
                        'samples' : bkg+['AZH_1100_330'],
                                               'fold'  : 0
                                            }

variables['ellipse_onebjet_mA_1100_mH_350'] = { 'name' : 'ellipse_onebjet_mA_1100_mH_350',
                                                'range' : (7,-0.5,6.5),
                                                'xaxis' : 'elliptical bin in mA-mH, pTZ',
                                                'cuts'  : ['bveto_1j_SR'],
                        'samples' : bkg+['AZH_1100_350'],
                                               'fold'  : 0
                                            }

variables['ellipse_onebjet_mA_1100_mH_400'] = { 'name' : 'ellipse_onebjet_mA_1100_mH_400',
                                                'range' : (7,-0.5,6.5),
                                                'xaxis' : 'elliptical bin in mA-mH, pTZ',
                                                'cuts'  : ['bveto_1j_SR'],
                        'samples' : bkg+['AZH_1100_400'],
                                               'fold'  : 0
                                            }

variables['ellipse_onebjet_mA_1100_mH_450'] = { 'name' : 'ellipse_onebjet_mA_1100_mH_450',
                                                'range' : (7,-0.5,6.5),
                                                'xaxis' : 'elliptical bin in mA-mH, pTZ',
                                                'cuts'  : ['bveto_1j_SR'],
                        'samples' : bkg+['AZH_1100_450'],
                                               'fold'  : 0
                                            }

variables['ellipse_onebjet_mA_1100_mH_500'] = { 'name' : 'ellipse_onebjet_mA_1100_mH_500',
                                                'range' : (7,-0.5,6.5),
                                                'xaxis' : 'elliptical bin in mA-mH, pTZ',
                                                'cuts'  : ['bveto_1j_SR'],
                        'samples' : bkg+['AZH_1100_500'],
                                               'fold'  : 0
                                            }

variables['ellipse_onebjet_mA_1100_mH_550'] = { 'name' : 'ellipse_onebjet_mA_1100_mH_550',
                                                'range' : (7,-0.5,6.5),
                                                'xaxis' : 'elliptical bin in mA-mH, pTZ',
                                                'cuts'  : ['bveto_1j_SR'],
                        'samples' : bkg+['AZH_1100_550'],
                                               'fold'  : 0
                                            }

variables['ellipse_onebjet_mA_1100_mH_600'] = { 'name' : 'ellipse_onebjet_mA_1100_mH_600',
                                                'range' : (7,-0.5,6.5),
                                                'xaxis' : 'elliptical bin in mA-mH, pTZ',
                                                'cuts'  : ['bveto_1j_SR'],
                        'samples' : bkg+['AZH_1100_600'],
                                               'fold'  : 0
                                            }

variables['ellipse_onebjet_mA_1100_mH_650'] = { 'name' : 'ellipse_onebjet_mA_1100_mH_650',
                                                'range' : (7,-0.5,6.5),
                                                'xaxis' : 'elliptical bin in mA-mH, pTZ',
                                                'cuts'  : ['bveto_1j_SR'],
                        'samples' : bkg+['AZH_1100_650'],
                                               'fold'  : 0
                                            }

variables['ellipse_onebjet_mA_1100_mH_700'] = { 'name' : 'ellipse_onebjet_mA_1100_mH_700',
                                                'range' : (7,-0.5,6.5),
                                                'xaxis' : 'elliptical bin in mA-mH, pTZ',
                                                'cuts'  : ['bveto_1j_SR'],
                        'samples' : bkg+['AZH_1100_700'],
                                               'fold'  : 0
                                            }

variables['ellipse_onebjet_mA_1100_mH_750'] = { 'name' : 'ellipse_onebjet_mA_1100_mH_750',
                                                'range' : (7,-0.5,6.5),
                                                'xaxis' : 'elliptical bin in mA-mH, pTZ',
                                                'cuts'  : ['bveto_1j_SR'],
                        'samples' : bkg+['AZH_1100_750'],
                                               'fold'  : 0
                                            }

variables['ellipse_onebjet_mA_1100_mH_800'] = { 'name' : 'ellipse_onebjet_mA_1100_mH_800',
                                                'range' : (7,-0.5,6.5),
                                                'xaxis' : 'elliptical bin in mA-mH, pTZ',
                                                'cuts'  : ['bveto_1j_SR'],
                        'samples' : bkg+['AZH_1100_800'],
                                               'fold'  : 0
                                            }

variables['ellipse_onebjet_mA_1100_mH_850'] = { 'name' : 'ellipse_onebjet_mA_1100_mH_850',
                                                'range' : (7,-0.5,6.5),
                                                'xaxis' : 'elliptical bin in mA-mH, pTZ',
                                                'cuts'  : ['bveto_1j_SR'],
                        'samples' : bkg+['AZH_1100_850'],
                                               'fold'  : 0
                                            }

variables['ellipse_onebjet_mA_1100_mH_900'] = { 'name' : 'ellipse_onebjet_mA_1100_mH_900',
                                                'range' : (7,-0.5,6.5),
                                                'xaxis' : 'elliptical bin in mA-mH, pTZ',
                                                'cuts'  : ['bveto_1j_SR'],
                        'samples' : bkg+['AZH_1100_900'],
                                               'fold'  : 0
                                            }

variables['ellipse_onebjet_mA_1100_mH_950'] = { 'name' : 'ellipse_onebjet_mA_1100_mH_950',
                                                'range' : (7,-0.5,6.5),
                                                'xaxis' : 'elliptical bin in mA-mH, pTZ',
                                                'cuts'  : ['bveto_1j_SR'],
                        'samples' : bkg+['AZH_1100_950'],
                                               'fold'  : 0
                                            }

variables['ellipse_onebjet_mA_1150_mH_1050'] = { 'name' : 'ellipse_onebjet_mA_1150_mH_1050',
                                                'range' : (7,-0.5,6.5),
                                                'xaxis' : 'elliptical bin in mA-mH, pTZ',
                                                'cuts'  : ['bveto_1j_SR'],
                        'samples' : bkg+['AZH_1150_1050'],
                                               'fold'  : 0
                                            }

variables['ellipse_onebjet_mA_1150_mH_330'] = { 'name' : 'ellipse_onebjet_mA_1150_mH_330',
                                                'range' : (7,-0.5,6.5),
                                                'xaxis' : 'elliptical bin in mA-mH, pTZ',
                                                'cuts'  : ['bveto_1j_SR'],
                        'samples' : bkg+['AZH_1150_330'],
                                               'fold'  : 0
                                            }

variables['ellipse_onebjet_mA_1150_mH_350'] = { 'name' : 'ellipse_onebjet_mA_1150_mH_350',
                                                'range' : (7,-0.5,6.5),
                                                'xaxis' : 'elliptical bin in mA-mH, pTZ',
                                                'cuts'  : ['bveto_1j_SR'],
                        'samples' : bkg+['AZH_1150_350'],
                                               'fold'  : 0
                                            }

variables['ellipse_onebjet_mA_1150_mH_450'] = { 'name' : 'ellipse_onebjet_mA_1150_mH_450',
                                                'range' : (7,-0.5,6.5),
                                                'xaxis' : 'elliptical bin in mA-mH, pTZ',
                                                'cuts'  : ['bveto_1j_SR'],
                        'samples' : bkg+['AZH_1150_450'],
                                               'fold'  : 0
                                            }

variables['ellipse_onebjet_mA_1150_mH_550'] = { 'name' : 'ellipse_onebjet_mA_1150_mH_550',
                                                'range' : (7,-0.5,6.5),
                                                'xaxis' : 'elliptical bin in mA-mH, pTZ',
                                                'cuts'  : ['bveto_1j_SR'],
                        'samples' : bkg+['AZH_1150_550'],
                                               'fold'  : 0
                                            }

variables['ellipse_onebjet_mA_1150_mH_650'] = { 'name' : 'ellipse_onebjet_mA_1150_mH_650',
                                                'range' : (7,-0.5,6.5),
                                                'xaxis' : 'elliptical bin in mA-mH, pTZ',
                                                'cuts'  : ['bveto_1j_SR'],
                        'samples' : bkg+['AZH_1150_650'],
                                               'fold'  : 0
                                            }

variables['ellipse_onebjet_mA_1150_mH_750'] = { 'name' : 'ellipse_onebjet_mA_1150_mH_750',
                                                'range' : (7,-0.5,6.5),
                                                'xaxis' : 'elliptical bin in mA-mH, pTZ',
                                                'cuts'  : ['bveto_1j_SR'],
                        'samples' : bkg+['AZH_1150_750'],
                                               'fold'  : 0
                                            }

variables['ellipse_onebjet_mA_1150_mH_850'] = { 'name' : 'ellipse_onebjet_mA_1150_mH_850',
                                                'range' : (7,-0.5,6.5),
                                                'xaxis' : 'elliptical bin in mA-mH, pTZ',
                                                'cuts'  : ['bveto_1j_SR'],
                        'samples' : bkg+['AZH_1150_850'],
                                               'fold'  : 0
                                            }

variables['ellipse_onebjet_mA_1150_mH_950'] = { 'name' : 'ellipse_onebjet_mA_1150_mH_950',
                                                'range' : (7,-0.5,6.5),
                                                'xaxis' : 'elliptical bin in mA-mH, pTZ',
                                                'cuts'  : ['bveto_1j_SR'],
                        'samples' : bkg+['AZH_1150_950'],
                                               'fold'  : 0
                                            }

variables['ellipse_onebjet_mA_1200_mH_1000'] = { 'name' : 'ellipse_onebjet_mA_1200_mH_1000',
                                                'range' : (7,-0.5,6.5),
                                                'xaxis' : 'elliptical bin in mA-mH, pTZ',
                                                'cuts'  : ['bveto_1j_SR'],
                        'samples' : bkg+['AZH_1200_1000'],
                                               'fold'  : 0
                                            }

variables['ellipse_onebjet_mA_1200_mH_1100'] = { 'name' : 'ellipse_onebjet_mA_1200_mH_1100',
                                                'range' : (7,-0.5,6.5),
                                                'xaxis' : 'elliptical bin in mA-mH, pTZ',
                                                'cuts'  : ['bveto_1j_SR'],
                        'samples' : bkg+['AZH_1200_1100'],
                                               'fold'  : 0
                                            }

variables['ellipse_onebjet_mA_1200_mH_330'] = { 'name' : 'ellipse_onebjet_mA_1200_mH_330',
                                                'range' : (7,-0.5,6.5),
                                                'xaxis' : 'elliptical bin in mA-mH, pTZ',
                                                'cuts'  : ['bveto_1j_SR'],
                        'samples' : bkg+['AZH_1200_330'],
                                               'fold'  : 0
                                            }

variables['ellipse_onebjet_mA_1200_mH_350'] = { 'name' : 'ellipse_onebjet_mA_1200_mH_350',
                                                'range' : (7,-0.5,6.5),
                                                'xaxis' : 'elliptical bin in mA-mH, pTZ',
                                                'cuts'  : ['bveto_1j_SR'],
                        'samples' : bkg+['AZH_1200_350'],
                                               'fold'  : 0
                                            }

variables['ellipse_onebjet_mA_1200_mH_400'] = { 'name' : 'ellipse_onebjet_mA_1200_mH_400',
                                                'range' : (7,-0.5,6.5),
                                                'xaxis' : 'elliptical bin in mA-mH, pTZ',
                                                'cuts'  : ['bveto_1j_SR'],
                        'samples' : bkg+['AZH_1200_400'],
                                               'fold'  : 0
                                            }

variables['ellipse_onebjet_mA_1200_mH_500'] = { 'name' : 'ellipse_onebjet_mA_1200_mH_500',
                                                'range' : (7,-0.5,6.5),
                                                'xaxis' : 'elliptical bin in mA-mH, pTZ',
                                                'cuts'  : ['bveto_1j_SR'],
                        'samples' : bkg+['AZH_1200_500'],
                                               'fold'  : 0
                                            }

variables['ellipse_onebjet_mA_1200_mH_600'] = { 'name' : 'ellipse_onebjet_mA_1200_mH_600',
                                                'range' : (7,-0.5,6.5),
                                                'xaxis' : 'elliptical bin in mA-mH, pTZ',
                                                'cuts'  : ['bveto_1j_SR'],
                        'samples' : bkg+['AZH_1200_600'],
                                               'fold'  : 0
                                            }

variables['ellipse_onebjet_mA_1200_mH_700'] = { 'name' : 'ellipse_onebjet_mA_1200_mH_700',
                                                'range' : (7,-0.5,6.5),
                                                'xaxis' : 'elliptical bin in mA-mH, pTZ',
                                                'cuts'  : ['bveto_1j_SR'],
                        'samples' : bkg+['AZH_1200_700'],
                                               'fold'  : 0
                                            }

variables['ellipse_onebjet_mA_1200_mH_800'] = { 'name' : 'ellipse_onebjet_mA_1200_mH_800',
                                                'range' : (7,-0.5,6.5),
                                                'xaxis' : 'elliptical bin in mA-mH, pTZ',
                                                'cuts'  : ['bveto_1j_SR'],
                        'samples' : bkg+['AZH_1200_800'],
                                               'fold'  : 0
                                            }

variables['ellipse_onebjet_mA_1200_mH_850'] = { 'name' : 'ellipse_onebjet_mA_1200_mH_850',
                                                'range' : (7,-0.5,6.5),
                                                'xaxis' : 'elliptical bin in mA-mH, pTZ',
                                                'cuts'  : ['bveto_1j_SR'],
                        'samples' : bkg+['AZH_1200_850'],
                                               'fold'  : 0
                                            }

variables['ellipse_onebjet_mA_1200_mH_900'] = { 'name' : 'ellipse_onebjet_mA_1200_mH_900',
                                                'range' : (7,-0.5,6.5),
                                                'xaxis' : 'elliptical bin in mA-mH, pTZ',
                                                'cuts'  : ['bveto_1j_SR'],
                        'samples' : bkg+['AZH_1200_900'],
                                               'fold'  : 0
                                            }

variables['ellipse_onebjet_mA_1300_mH_1000'] = { 'name' : 'ellipse_onebjet_mA_1300_mH_1000',
                                                'range' : (7,-0.5,6.5),
                                                'xaxis' : 'elliptical bin in mA-mH, pTZ',
                                                'cuts'  : ['bveto_1j_SR'],
                        'samples' : bkg+['AZH_1300_1000'],
                                               'fold'  : 0
                                            }

variables['ellipse_onebjet_mA_1300_mH_1100'] = { 'name' : 'ellipse_onebjet_mA_1300_mH_1100',
                                                'range' : (7,-0.5,6.5),
                                                'xaxis' : 'elliptical bin in mA-mH, pTZ',
                                                'cuts'  : ['bveto_1j_SR'],
                        'samples' : bkg+['AZH_1300_1100'],
                                               'fold'  : 0
                                            }

variables['ellipse_onebjet_mA_1300_mH_1200'] = { 'name' : 'ellipse_onebjet_mA_1300_mH_1200',
                                                'range' : (7,-0.5,6.5),
                                                'xaxis' : 'elliptical bin in mA-mH, pTZ',
                                                'cuts'  : ['bveto_1j_SR'],
                        'samples' : bkg+['AZH_1300_1200'],
                                               'fold'  : 0
                                            }

variables['ellipse_onebjet_mA_1300_mH_350'] = { 'name' : 'ellipse_onebjet_mA_1300_mH_350',
                                                'range' : (7,-0.5,6.5),
                                                'xaxis' : 'elliptical bin in mA-mH, pTZ',
                                                'cuts'  : ['bveto_1j_SR'],
                        'samples' : bkg+['AZH_1300_350'],
                                               'fold'  : 0
                                            }

variables['ellipse_onebjet_mA_1300_mH_400'] = { 'name' : 'ellipse_onebjet_mA_1300_mH_400',
                                                'range' : (7,-0.5,6.5),
                                                'xaxis' : 'elliptical bin in mA-mH, pTZ',
                                                'cuts'  : ['bveto_1j_SR'],
                        'samples' : bkg+['AZH_1300_400'],
                                               'fold'  : 0
                                            }

variables['ellipse_onebjet_mA_1300_mH_500'] = { 'name' : 'ellipse_onebjet_mA_1300_mH_500',
                                                'range' : (7,-0.5,6.5),
                                                'xaxis' : 'elliptical bin in mA-mH, pTZ',
                                                'cuts'  : ['bveto_1j_SR'],
                        'samples' : bkg+['AZH_1300_500'],
                                               'fold'  : 0
                                            }

variables['ellipse_onebjet_mA_1300_mH_600'] = { 'name' : 'ellipse_onebjet_mA_1300_mH_600',
                                                'range' : (7,-0.5,6.5),
                                                'xaxis' : 'elliptical bin in mA-mH, pTZ',
                                                'cuts'  : ['bveto_1j_SR'],
                        'samples' : bkg+['AZH_1300_600'],
                                               'fold'  : 0
                                            }

variables['ellipse_onebjet_mA_1300_mH_700'] = { 'name' : 'ellipse_onebjet_mA_1300_mH_700',
                                                'range' : (7,-0.5,6.5),
                                                'xaxis' : 'elliptical bin in mA-mH, pTZ',
                                                'cuts'  : ['bveto_1j_SR'],
                        'samples' : bkg+['AZH_1300_700'],
                                               'fold'  : 0
                                            }

variables['ellipse_onebjet_mA_1300_mH_800'] = { 'name' : 'ellipse_onebjet_mA_1300_mH_800',
                                                'range' : (7,-0.5,6.5),
                                                'xaxis' : 'elliptical bin in mA-mH, pTZ',
                                                'cuts'  : ['bveto_1j_SR'],
                        'samples' : bkg+['AZH_1300_800'],
                                               'fold'  : 0
                                            }

variables['ellipse_onebjet_mA_1300_mH_900'] = { 'name' : 'ellipse_onebjet_mA_1300_mH_900',
                                                'range' : (7,-0.5,6.5),
                                                'xaxis' : 'elliptical bin in mA-mH, pTZ',
                                                'cuts'  : ['bveto_1j_SR'],
                        'samples' : bkg+['AZH_1300_900'],
                                               'fold'  : 0
                                            }

variables['ellipse_onebjet_mA_1400_mH_1000'] = { 'name' : 'ellipse_onebjet_mA_1400_mH_1000',
                                                'range' : (7,-0.5,6.5),
                                                'xaxis' : 'elliptical bin in mA-mH, pTZ',
                                                'cuts'  : ['bveto_1j_SR'],
                        'samples' : bkg+['AZH_1400_1000'],
                                               'fold'  : 0
                                            }

variables['ellipse_onebjet_mA_1400_mH_1100'] = { 'name' : 'ellipse_onebjet_mA_1400_mH_1100',
                                                'range' : (7,-0.5,6.5),
                                                'xaxis' : 'elliptical bin in mA-mH, pTZ',
                                                'cuts'  : ['bveto_1j_SR'],
                        'samples' : bkg+['AZH_1400_1100'],
                                               'fold'  : 0
                                            }

variables['ellipse_onebjet_mA_1400_mH_1200'] = { 'name' : 'ellipse_onebjet_mA_1400_mH_1200',
                                                'range' : (7,-0.5,6.5),
                                                'xaxis' : 'elliptical bin in mA-mH, pTZ',
                                                'cuts'  : ['bveto_1j_SR'],
                        'samples' : bkg+['AZH_1400_1200'],
                                               'fold'  : 0
                                            }

variables['ellipse_onebjet_mA_1400_mH_1300'] = { 'name' : 'ellipse_onebjet_mA_1400_mH_1300',
                                                'range' : (7,-0.5,6.5),
                                                'xaxis' : 'elliptical bin in mA-mH, pTZ',
                                                'cuts'  : ['bveto_1j_SR'],
                        'samples' : bkg+['AZH_1400_1300'],
                                               'fold'  : 0
                                            }

variables['ellipse_onebjet_mA_1400_mH_350'] = { 'name' : 'ellipse_onebjet_mA_1400_mH_350',
                                                'range' : (7,-0.5,6.5),
                                                'xaxis' : 'elliptical bin in mA-mH, pTZ',
                                                'cuts'  : ['bveto_1j_SR'],
                        'samples' : bkg+['AZH_1400_350'],
                                               'fold'  : 0
                                            }

variables['ellipse_onebjet_mA_1400_mH_400'] = { 'name' : 'ellipse_onebjet_mA_1400_mH_400',
                                                'range' : (7,-0.5,6.5),
                                                'xaxis' : 'elliptical bin in mA-mH, pTZ',
                                                'cuts'  : ['bveto_1j_SR'],
                        'samples' : bkg+['AZH_1400_400'],
                                               'fold'  : 0
                                            }

variables['ellipse_onebjet_mA_1400_mH_500'] = { 'name' : 'ellipse_onebjet_mA_1400_mH_500',
                                                'range' : (7,-0.5,6.5),
                                                'xaxis' : 'elliptical bin in mA-mH, pTZ',
                                                'cuts'  : ['bveto_1j_SR'],
                        'samples' : bkg+['AZH_1400_500'],
                                               'fold'  : 0
                                            }

variables['ellipse_onebjet_mA_1400_mH_600'] = { 'name' : 'ellipse_onebjet_mA_1400_mH_600',
                                                'range' : (7,-0.5,6.5),
                                                'xaxis' : 'elliptical bin in mA-mH, pTZ',
                                                'cuts'  : ['bveto_1j_SR'],
                        'samples' : bkg+['AZH_1400_600'],
                                               'fold'  : 0
                                            }

variables['ellipse_onebjet_mA_1400_mH_700'] = { 'name' : 'ellipse_onebjet_mA_1400_mH_700',
                                                'range' : (7,-0.5,6.5),
                                                'xaxis' : 'elliptical bin in mA-mH, pTZ',
                                                'cuts'  : ['bveto_1j_SR'],
                        'samples' : bkg+['AZH_1400_700'],
                                               'fold'  : 0
                                            }

variables['ellipse_onebjet_mA_1400_mH_800'] = { 'name' : 'ellipse_onebjet_mA_1400_mH_800',
                                                'range' : (7,-0.5,6.5),
                                                'xaxis' : 'elliptical bin in mA-mH, pTZ',
                                                'cuts'  : ['bveto_1j_SR'],
                        'samples' : bkg+['AZH_1400_800'],
                                               'fold'  : 0
                                            }

variables['ellipse_onebjet_mA_1400_mH_900'] = { 'name' : 'ellipse_onebjet_mA_1400_mH_900',
                                                'range' : (7,-0.5,6.5),
                                                'xaxis' : 'elliptical bin in mA-mH, pTZ',
                                                'cuts'  : ['bveto_1j_SR'],
                        'samples' : bkg+['AZH_1400_900'],
                                               'fold'  : 0
                                            }

variables['ellipse_onebjet_mA_1500_mH_1000'] = { 'name' : 'ellipse_onebjet_mA_1500_mH_1000',
                                                'range' : (7,-0.5,6.5),
                                                'xaxis' : 'elliptical bin in mA-mH, pTZ',
                                                'cuts'  : ['bveto_1j_SR'],
                        'samples' : bkg+['AZH_1500_1000'],
                                               'fold'  : 0
                                            }

variables['ellipse_onebjet_mA_1500_mH_1100'] = { 'name' : 'ellipse_onebjet_mA_1500_mH_1100',
                                                'range' : (7,-0.5,6.5),
                                                'xaxis' : 'elliptical bin in mA-mH, pTZ',
                                                'cuts'  : ['bveto_1j_SR'],
                        'samples' : bkg+['AZH_1500_1100'],
                                               'fold'  : 0
                                            }

variables['ellipse_onebjet_mA_1500_mH_1200'] = { 'name' : 'ellipse_onebjet_mA_1500_mH_1200',
                                                'range' : (7,-0.5,6.5),
                                                'xaxis' : 'elliptical bin in mA-mH, pTZ',
                                                'cuts'  : ['bveto_1j_SR'],
                        'samples' : bkg+['AZH_1500_1200'],
                                               'fold'  : 0
                                            }

variables['ellipse_onebjet_mA_1500_mH_1300'] = { 'name' : 'ellipse_onebjet_mA_1500_mH_1300',
                                                'range' : (7,-0.5,6.5),
                                                'xaxis' : 'elliptical bin in mA-mH, pTZ',
                                                'cuts'  : ['bveto_1j_SR'],
                        'samples' : bkg+['AZH_1500_1300'],
                                               'fold'  : 0
                                            }

variables['ellipse_onebjet_mA_1500_mH_1400'] = { 'name' : 'ellipse_onebjet_mA_1500_mH_1400',
                                                'range' : (7,-0.5,6.5),
                                                'xaxis' : 'elliptical bin in mA-mH, pTZ',
                                                'cuts'  : ['bveto_1j_SR'],
                        'samples' : bkg+['AZH_1500_1400'],
                                               'fold'  : 0
                                            }

variables['ellipse_onebjet_mA_1500_mH_350'] = { 'name' : 'ellipse_onebjet_mA_1500_mH_350',
                                                'range' : (7,-0.5,6.5),
                                                'xaxis' : 'elliptical bin in mA-mH, pTZ',
                                                'cuts'  : ['bveto_1j_SR'],
                        'samples' : bkg+['AZH_1500_350'],
                                               'fold'  : 0
                                            }

variables['ellipse_onebjet_mA_1500_mH_400'] = { 'name' : 'ellipse_onebjet_mA_1500_mH_400',
                                                'range' : (7,-0.5,6.5),
                                                'xaxis' : 'elliptical bin in mA-mH, pTZ',
                                                'cuts'  : ['bveto_1j_SR'],
                        'samples' : bkg+['AZH_1500_400'],
                                               'fold'  : 0
                                            }

variables['ellipse_onebjet_mA_1500_mH_500'] = { 'name' : 'ellipse_onebjet_mA_1500_mH_500',
                                                'range' : (7,-0.5,6.5),
                                                'xaxis' : 'elliptical bin in mA-mH, pTZ',
                                                'cuts'  : ['bveto_1j_SR'],
                        'samples' : bkg+['AZH_1500_500'],
                                               'fold'  : 0
                                            }

variables['ellipse_onebjet_mA_1500_mH_600'] = { 'name' : 'ellipse_onebjet_mA_1500_mH_600',
                                                'range' : (7,-0.5,6.5),
                                                'xaxis' : 'elliptical bin in mA-mH, pTZ',
                                                'cuts'  : ['bveto_1j_SR'],
                        'samples' : bkg+['AZH_1500_600'],
                                               'fold'  : 0
                                            }

variables['ellipse_onebjet_mA_1500_mH_700'] = { 'name' : 'ellipse_onebjet_mA_1500_mH_700',
                                                'range' : (7,-0.5,6.5),
                                                'xaxis' : 'elliptical bin in mA-mH, pTZ',
                                                'cuts'  : ['bveto_1j_SR'],
                        'samples' : bkg+['AZH_1500_700'],
                                               'fold'  : 0
                                            }

variables['ellipse_onebjet_mA_1500_mH_800'] = { 'name' : 'ellipse_onebjet_mA_1500_mH_800',
                                                'range' : (7,-0.5,6.5),
                                                'xaxis' : 'elliptical bin in mA-mH, pTZ',
                                                'cuts'  : ['bveto_1j_SR'],
                        'samples' : bkg+['AZH_1500_800'],
                                               'fold'  : 0
                                            }

variables['ellipse_onebjet_mA_1500_mH_900'] = { 'name' : 'ellipse_onebjet_mA_1500_mH_900',
                                                'range' : (7,-0.5,6.5),
                                                'xaxis' : 'elliptical bin in mA-mH, pTZ',
                                                'cuts'  : ['bveto_1j_SR'],
                        'samples' : bkg+['AZH_1500_900'],
                                               'fold'  : 0
                                            }

variables['ellipse_onebjet_mA_1600_mH_1000'] = { 'name' : 'ellipse_onebjet_mA_1600_mH_1000',
                                                'range' : (7,-0.5,6.5),
                                                'xaxis' : 'elliptical bin in mA-mH, pTZ',
                                                'cuts'  : ['bveto_1j_SR'],
                        'samples' : bkg+['AZH_1600_1000'],
                                               'fold'  : 0
                                            }

variables['ellipse_onebjet_mA_1600_mH_1100'] = { 'name' : 'ellipse_onebjet_mA_1600_mH_1100',
                                                'range' : (7,-0.5,6.5),
                                                'xaxis' : 'elliptical bin in mA-mH, pTZ',
                                                'cuts'  : ['bveto_1j_SR'],
                        'samples' : bkg+['AZH_1600_1100'],
                                               'fold'  : 0
                                            }

variables['ellipse_onebjet_mA_1600_mH_1200'] = { 'name' : 'ellipse_onebjet_mA_1600_mH_1200',
                                                'range' : (7,-0.5,6.5),
                                                'xaxis' : 'elliptical bin in mA-mH, pTZ',
                                                'cuts'  : ['bveto_1j_SR'],
                        'samples' : bkg+['AZH_1600_1200'],
                                               'fold'  : 0
                                            }

variables['ellipse_onebjet_mA_1600_mH_1300'] = { 'name' : 'ellipse_onebjet_mA_1600_mH_1300',
                                                'range' : (7,-0.5,6.5),
                                                'xaxis' : 'elliptical bin in mA-mH, pTZ',
                                                'cuts'  : ['bveto_1j_SR'],
                        'samples' : bkg+['AZH_1600_1300'],
                                               'fold'  : 0
                                            }

variables['ellipse_onebjet_mA_1600_mH_1400'] = { 'name' : 'ellipse_onebjet_mA_1600_mH_1400',
                                                'range' : (7,-0.5,6.5),
                                                'xaxis' : 'elliptical bin in mA-mH, pTZ',
                                                'cuts'  : ['bveto_1j_SR'],
                        'samples' : bkg+['AZH_1600_1400'],
                                               'fold'  : 0
                                            }

variables['ellipse_onebjet_mA_1600_mH_1500'] = { 'name' : 'ellipse_onebjet_mA_1600_mH_1500',
                                                'range' : (7,-0.5,6.5),
                                                'xaxis' : 'elliptical bin in mA-mH, pTZ',
                                                'cuts'  : ['bveto_1j_SR'],
                        'samples' : bkg+['AZH_1600_1500'],
                                               'fold'  : 0
                                            }

variables['ellipse_onebjet_mA_1600_mH_350'] = { 'name' : 'ellipse_onebjet_mA_1600_mH_350',
                                                'range' : (7,-0.5,6.5),
                                                'xaxis' : 'elliptical bin in mA-mH, pTZ',
                                                'cuts'  : ['bveto_1j_SR'],
                        'samples' : bkg+['AZH_1600_350'],
                                               'fold'  : 0
                                            }

variables['ellipse_onebjet_mA_1600_mH_400'] = { 'name' : 'ellipse_onebjet_mA_1600_mH_400',
                                                'range' : (7,-0.5,6.5),
                                                'xaxis' : 'elliptical bin in mA-mH, pTZ',
                                                'cuts'  : ['bveto_1j_SR'],
                        'samples' : bkg+['AZH_1600_400'],
                                               'fold'  : 0
                                            }

variables['ellipse_onebjet_mA_1600_mH_500'] = { 'name' : 'ellipse_onebjet_mA_1600_mH_500',
                                                'range' : (7,-0.5,6.5),
                                                'xaxis' : 'elliptical bin in mA-mH, pTZ',
                                                'cuts'  : ['bveto_1j_SR'],
                        'samples' : bkg+['AZH_1600_500'],
                                               'fold'  : 0
                                            }

variables['ellipse_onebjet_mA_1600_mH_600'] = { 'name' : 'ellipse_onebjet_mA_1600_mH_600',
                                                'range' : (7,-0.5,6.5),
                                                'xaxis' : 'elliptical bin in mA-mH, pTZ',
                                                'cuts'  : ['bveto_1j_SR'],
                        'samples' : bkg+['AZH_1600_600'],
                                               'fold'  : 0
                                            }

variables['ellipse_onebjet_mA_1600_mH_700'] = { 'name' : 'ellipse_onebjet_mA_1600_mH_700',
                                                'range' : (7,-0.5,6.5),
                                                'xaxis' : 'elliptical bin in mA-mH, pTZ',
                                                'cuts'  : ['bveto_1j_SR'],
                        'samples' : bkg+['AZH_1600_700'],
                                               'fold'  : 0
                                            }

variables['ellipse_onebjet_mA_1600_mH_800'] = { 'name' : 'ellipse_onebjet_mA_1600_mH_800',
                                                'range' : (7,-0.5,6.5),
                                                'xaxis' : 'elliptical bin in mA-mH, pTZ',
                                                'cuts'  : ['bveto_1j_SR'],
                        'samples' : bkg+['AZH_1600_800'],
                                               'fold'  : 0
                                            }

variables['ellipse_onebjet_mA_1600_mH_900'] = { 'name' : 'ellipse_onebjet_mA_1600_mH_900',
                                                'range' : (7,-0.5,6.5),
                                                'xaxis' : 'elliptical bin in mA-mH, pTZ',
                                                'cuts'  : ['bveto_1j_SR'],
                        'samples' : bkg+['AZH_1600_900'],
                                               'fold'  : 0
                                            }

variables['ellipse_onebjet_mA_1700_mH_1000'] = { 'name' : 'ellipse_onebjet_mA_1700_mH_1000',
                                                'range' : (7,-0.5,6.5),
                                                'xaxis' : 'elliptical bin in mA-mH, pTZ',
                                                'cuts'  : ['bveto_1j_SR'],
                        'samples' : bkg+['AZH_1700_1000'],
                                               'fold'  : 0
                                            }

variables['ellipse_onebjet_mA_1700_mH_1100'] = { 'name' : 'ellipse_onebjet_mA_1700_mH_1100',
                                                'range' : (7,-0.5,6.5),
                                                'xaxis' : 'elliptical bin in mA-mH, pTZ',
                                                'cuts'  : ['bveto_1j_SR'],
                        'samples' : bkg+['AZH_1700_1100'],
                                               'fold'  : 0
                                            }

variables['ellipse_onebjet_mA_1700_mH_1200'] = { 'name' : 'ellipse_onebjet_mA_1700_mH_1200',
                                                'range' : (7,-0.5,6.5),
                                                'xaxis' : 'elliptical bin in mA-mH, pTZ',
                                                'cuts'  : ['bveto_1j_SR'],
                        'samples' : bkg+['AZH_1700_1200'],
                                               'fold'  : 0
                                            }

variables['ellipse_onebjet_mA_1700_mH_1300'] = { 'name' : 'ellipse_onebjet_mA_1700_mH_1300',
                                                'range' : (7,-0.5,6.5),
                                                'xaxis' : 'elliptical bin in mA-mH, pTZ',
                                                'cuts'  : ['bveto_1j_SR'],
                        'samples' : bkg+['AZH_1700_1300'],
                                               'fold'  : 0
                                            }

variables['ellipse_onebjet_mA_1700_mH_1400'] = { 'name' : 'ellipse_onebjet_mA_1700_mH_1400',
                                                'range' : (7,-0.5,6.5),
                                                'xaxis' : 'elliptical bin in mA-mH, pTZ',
                                                'cuts'  : ['bveto_1j_SR'],
                        'samples' : bkg+['AZH_1700_1400'],
                                               'fold'  : 0
                                            }

variables['ellipse_onebjet_mA_1700_mH_1500'] = { 'name' : 'ellipse_onebjet_mA_1700_mH_1500',
                                                'range' : (7,-0.5,6.5),
                                                'xaxis' : 'elliptical bin in mA-mH, pTZ',
                                                'cuts'  : ['bveto_1j_SR'],
                        'samples' : bkg+['AZH_1700_1500'],
                                               'fold'  : 0
                                            }

variables['ellipse_onebjet_mA_1700_mH_1600'] = { 'name' : 'ellipse_onebjet_mA_1700_mH_1600',
                                                'range' : (7,-0.5,6.5),
                                                'xaxis' : 'elliptical bin in mA-mH, pTZ',
                                                'cuts'  : ['bveto_1j_SR'],
                        'samples' : bkg+['AZH_1700_1600'],
                                               'fold'  : 0
                                            }

variables['ellipse_onebjet_mA_1700_mH_350'] = { 'name' : 'ellipse_onebjet_mA_1700_mH_350',
                                                'range' : (7,-0.5,6.5),
                                                'xaxis' : 'elliptical bin in mA-mH, pTZ',
                                                'cuts'  : ['bveto_1j_SR'],
                        'samples' : bkg+['AZH_1700_350'],
                                               'fold'  : 0
                                            }

variables['ellipse_onebjet_mA_1700_mH_400'] = { 'name' : 'ellipse_onebjet_mA_1700_mH_400',
                                                'range' : (7,-0.5,6.5),
                                                'xaxis' : 'elliptical bin in mA-mH, pTZ',
                                                'cuts'  : ['bveto_1j_SR'],
                        'samples' : bkg+['AZH_1700_400'],
                                               'fold'  : 0
                                            }

variables['ellipse_onebjet_mA_1700_mH_500'] = { 'name' : 'ellipse_onebjet_mA_1700_mH_500',
                                                'range' : (7,-0.5,6.5),
                                                'xaxis' : 'elliptical bin in mA-mH, pTZ',
                                                'cuts'  : ['bveto_1j_SR'],
                        'samples' : bkg+['AZH_1700_500'],
                                               'fold'  : 0
                                            }

variables['ellipse_onebjet_mA_1700_mH_600'] = { 'name' : 'ellipse_onebjet_mA_1700_mH_600',
                                                'range' : (7,-0.5,6.5),
                                                'xaxis' : 'elliptical bin in mA-mH, pTZ',
                                                'cuts'  : ['bveto_1j_SR'],
                        'samples' : bkg+['AZH_1700_600'],
                                               'fold'  : 0
                                            }

variables['ellipse_onebjet_mA_1700_mH_700'] = { 'name' : 'ellipse_onebjet_mA_1700_mH_700',
                                                'range' : (7,-0.5,6.5),
                                                'xaxis' : 'elliptical bin in mA-mH, pTZ',
                                                'cuts'  : ['bveto_1j_SR'],
                        'samples' : bkg+['AZH_1700_700'],
                                               'fold'  : 0
                                            }

variables['ellipse_onebjet_mA_1700_mH_800'] = { 'name' : 'ellipse_onebjet_mA_1700_mH_800',
                                                'range' : (7,-0.5,6.5),
                                                'xaxis' : 'elliptical bin in mA-mH, pTZ',
                                                'cuts'  : ['bveto_1j_SR'],
                        'samples' : bkg+['AZH_1700_800'],
                                               'fold'  : 0
                                            }

variables['ellipse_onebjet_mA_1700_mH_900'] = { 'name' : 'ellipse_onebjet_mA_1700_mH_900',
                                                'range' : (7,-0.5,6.5),
                                                'xaxis' : 'elliptical bin in mA-mH, pTZ',
                                                'cuts'  : ['bveto_1j_SR'],
                        'samples' : bkg+['AZH_1700_900'],
                                               'fold'  : 0
                                            }

variables['ellipse_onebjet_mA_1800_mH_1000'] = { 'name' : 'ellipse_onebjet_mA_1800_mH_1000',
                                                'range' : (7,-0.5,6.5),
                                                'xaxis' : 'elliptical bin in mA-mH, pTZ',
                                                'cuts'  : ['bveto_1j_SR'],
                        'samples' : bkg+['AZH_1800_1000'],
                                               'fold'  : 0
                                            }

variables['ellipse_onebjet_mA_1800_mH_1100'] = { 'name' : 'ellipse_onebjet_mA_1800_mH_1100',
                                                'range' : (7,-0.5,6.5),
                                                'xaxis' : 'elliptical bin in mA-mH, pTZ',
                                                'cuts'  : ['bveto_1j_SR'],
                        'samples' : bkg+['AZH_1800_1100'],
                                               'fold'  : 0
                                            }

variables['ellipse_onebjet_mA_1800_mH_1200'] = { 'name' : 'ellipse_onebjet_mA_1800_mH_1200',
                                                'range' : (7,-0.5,6.5),
                                                'xaxis' : 'elliptical bin in mA-mH, pTZ',
                                                'cuts'  : ['bveto_1j_SR'],
                        'samples' : bkg+['AZH_1800_1200'],
                                               'fold'  : 0
                                            }

variables['ellipse_onebjet_mA_1800_mH_1300'] = { 'name' : 'ellipse_onebjet_mA_1800_mH_1300',
                                                'range' : (7,-0.5,6.5),
                                                'xaxis' : 'elliptical bin in mA-mH, pTZ',
                                                'cuts'  : ['bveto_1j_SR'],
                        'samples' : bkg+['AZH_1800_1300'],
                                               'fold'  : 0
                                            }

variables['ellipse_onebjet_mA_1800_mH_1400'] = { 'name' : 'ellipse_onebjet_mA_1800_mH_1400',
                                                'range' : (7,-0.5,6.5),
                                                'xaxis' : 'elliptical bin in mA-mH, pTZ',
                                                'cuts'  : ['bveto_1j_SR'],
                        'samples' : bkg+['AZH_1800_1400'],
                                               'fold'  : 0
                                            }

variables['ellipse_onebjet_mA_1800_mH_1500'] = { 'name' : 'ellipse_onebjet_mA_1800_mH_1500',
                                                'range' : (7,-0.5,6.5),
                                                'xaxis' : 'elliptical bin in mA-mH, pTZ',
                                                'cuts'  : ['bveto_1j_SR'],
                        'samples' : bkg+['AZH_1800_1500'],
                                               'fold'  : 0
                                            }

variables['ellipse_onebjet_mA_1800_mH_1600'] = { 'name' : 'ellipse_onebjet_mA_1800_mH_1600',
                                                'range' : (7,-0.5,6.5),
                                                'xaxis' : 'elliptical bin in mA-mH, pTZ',
                                                'cuts'  : ['bveto_1j_SR'],
                        'samples' : bkg+['AZH_1800_1600'],
                                               'fold'  : 0
                                            }

variables['ellipse_onebjet_mA_1800_mH_1700'] = { 'name' : 'ellipse_onebjet_mA_1800_mH_1700',
                                                'range' : (7,-0.5,6.5),
                                                'xaxis' : 'elliptical bin in mA-mH, pTZ',
                                                'cuts'  : ['bveto_1j_SR'],
                        'samples' : bkg+['AZH_1800_1700'],
                                               'fold'  : 0
                                            }

variables['ellipse_onebjet_mA_1800_mH_350'] = { 'name' : 'ellipse_onebjet_mA_1800_mH_350',
                                                'range' : (7,-0.5,6.5),
                                                'xaxis' : 'elliptical bin in mA-mH, pTZ',
                                                'cuts'  : ['bveto_1j_SR'],
                        'samples' : bkg+['AZH_1800_350'],
                                               'fold'  : 0
                                            }

variables['ellipse_onebjet_mA_1800_mH_400'] = { 'name' : 'ellipse_onebjet_mA_1800_mH_400',
                                                'range' : (7,-0.5,6.5),
                                                'xaxis' : 'elliptical bin in mA-mH, pTZ',
                                                'cuts'  : ['bveto_1j_SR'],
                        'samples' : bkg+['AZH_1800_400'],
                                               'fold'  : 0
                                            }

variables['ellipse_onebjet_mA_1800_mH_500'] = { 'name' : 'ellipse_onebjet_mA_1800_mH_500',
                                                'range' : (7,-0.5,6.5),
                                                'xaxis' : 'elliptical bin in mA-mH, pTZ',
                                                'cuts'  : ['bveto_1j_SR'],
                        'samples' : bkg+['AZH_1800_500'],
                                               'fold'  : 0
                                            }

variables['ellipse_onebjet_mA_1800_mH_600'] = { 'name' : 'ellipse_onebjet_mA_1800_mH_600',
                                                'range' : (7,-0.5,6.5),
                                                'xaxis' : 'elliptical bin in mA-mH, pTZ',
                                                'cuts'  : ['bveto_1j_SR'],
                        'samples' : bkg+['AZH_1800_600'],
                                               'fold'  : 0
                                            }

variables['ellipse_onebjet_mA_1800_mH_700'] = { 'name' : 'ellipse_onebjet_mA_1800_mH_700',
                                                'range' : (7,-0.5,6.5),
                                                'xaxis' : 'elliptical bin in mA-mH, pTZ',
                                                'cuts'  : ['bveto_1j_SR'],
                        'samples' : bkg+['AZH_1800_700'],
                                               'fold'  : 0
                                            }

variables['ellipse_onebjet_mA_1800_mH_800'] = { 'name' : 'ellipse_onebjet_mA_1800_mH_800',
                                                'range' : (7,-0.5,6.5),
                                                'xaxis' : 'elliptical bin in mA-mH, pTZ',
                                                'cuts'  : ['bveto_1j_SR'],
                        'samples' : bkg+['AZH_1800_800'],
                                               'fold'  : 0
                                            }

variables['ellipse_onebjet_mA_1800_mH_900'] = { 'name' : 'ellipse_onebjet_mA_1800_mH_900',
                                                'range' : (7,-0.5,6.5),
                                                'xaxis' : 'elliptical bin in mA-mH, pTZ',
                                                'cuts'  : ['bveto_1j_SR'],
                        'samples' : bkg+['AZH_1800_900'],
                                               'fold'  : 0
                                            }

variables['ellipse_onebjet_mA_1900_mH_1000'] = { 'name' : 'ellipse_onebjet_mA_1900_mH_1000',
                                                'range' : (7,-0.5,6.5),
                                                'xaxis' : 'elliptical bin in mA-mH, pTZ',
                                                'cuts'  : ['bveto_1j_SR'],
                        'samples' : bkg+['AZH_1900_1000'],
                                               'fold'  : 0
                                            }

variables['ellipse_onebjet_mA_1900_mH_1100'] = { 'name' : 'ellipse_onebjet_mA_1900_mH_1100',
                                                'range' : (7,-0.5,6.5),
                                                'xaxis' : 'elliptical bin in mA-mH, pTZ',
                                                'cuts'  : ['bveto_1j_SR'],
                        'samples' : bkg+['AZH_1900_1100'],
                                               'fold'  : 0
                                            }

variables['ellipse_onebjet_mA_1900_mH_1200'] = { 'name' : 'ellipse_onebjet_mA_1900_mH_1200',
                                                'range' : (7,-0.5,6.5),
                                                'xaxis' : 'elliptical bin in mA-mH, pTZ',
                                                'cuts'  : ['bveto_1j_SR'],
                        'samples' : bkg+['AZH_1900_1200'],
                                               'fold'  : 0
                                            }

variables['ellipse_onebjet_mA_1900_mH_1300'] = { 'name' : 'ellipse_onebjet_mA_1900_mH_1300',
                                                'range' : (7,-0.5,6.5),
                                                'xaxis' : 'elliptical bin in mA-mH, pTZ',
                                                'cuts'  : ['bveto_1j_SR'],
                        'samples' : bkg+['AZH_1900_1300'],
                                               'fold'  : 0
                                            }

variables['ellipse_onebjet_mA_1900_mH_1400'] = { 'name' : 'ellipse_onebjet_mA_1900_mH_1400',
                                                'range' : (7,-0.5,6.5),
                                                'xaxis' : 'elliptical bin in mA-mH, pTZ',
                                                'cuts'  : ['bveto_1j_SR'],
                        'samples' : bkg+['AZH_1900_1400'],
                                               'fold'  : 0
                                            }

variables['ellipse_onebjet_mA_1900_mH_1500'] = { 'name' : 'ellipse_onebjet_mA_1900_mH_1500',
                                                'range' : (7,-0.5,6.5),
                                                'xaxis' : 'elliptical bin in mA-mH, pTZ',
                                                'cuts'  : ['bveto_1j_SR'],
                        'samples' : bkg+['AZH_1900_1500'],
                                               'fold'  : 0
                                            }

variables['ellipse_onebjet_mA_1900_mH_1600'] = { 'name' : 'ellipse_onebjet_mA_1900_mH_1600',
                                                'range' : (7,-0.5,6.5),
                                                'xaxis' : 'elliptical bin in mA-mH, pTZ',
                                                'cuts'  : ['bveto_1j_SR'],
                        'samples' : bkg+['AZH_1900_1600'],
                                               'fold'  : 0
                                            }

variables['ellipse_onebjet_mA_1900_mH_1700'] = { 'name' : 'ellipse_onebjet_mA_1900_mH_1700',
                                                'range' : (7,-0.5,6.5),
                                                'xaxis' : 'elliptical bin in mA-mH, pTZ',
                                                'cuts'  : ['bveto_1j_SR'],
                        'samples' : bkg+['AZH_1900_1700'],
                                               'fold'  : 0
                                            }

variables['ellipse_onebjet_mA_1900_mH_1800'] = { 'name' : 'ellipse_onebjet_mA_1900_mH_1800',
                                                'range' : (7,-0.5,6.5),
                                                'xaxis' : 'elliptical bin in mA-mH, pTZ',
                                                'cuts'  : ['bveto_1j_SR'],
                        'samples' : bkg+['AZH_1900_1800'],
                                               'fold'  : 0
                                            }

variables['ellipse_onebjet_mA_1900_mH_350'] = { 'name' : 'ellipse_onebjet_mA_1900_mH_350',
                                                'range' : (7,-0.5,6.5),
                                                'xaxis' : 'elliptical bin in mA-mH, pTZ',
                                                'cuts'  : ['bveto_1j_SR'],
                        'samples' : bkg+['AZH_1900_350'],
                                               'fold'  : 0
                                            }

variables['ellipse_onebjet_mA_1900_mH_400'] = { 'name' : 'ellipse_onebjet_mA_1900_mH_400',
                                                'range' : (7,-0.5,6.5),
                                                'xaxis' : 'elliptical bin in mA-mH, pTZ',
                                                'cuts'  : ['bveto_1j_SR'],
                        'samples' : bkg+['AZH_1900_400'],
                                               'fold'  : 0
                                            }

variables['ellipse_onebjet_mA_1900_mH_500'] = { 'name' : 'ellipse_onebjet_mA_1900_mH_500',
                                                'range' : (7,-0.5,6.5),
                                                'xaxis' : 'elliptical bin in mA-mH, pTZ',
                                                'cuts'  : ['bveto_1j_SR'],
                        'samples' : bkg+['AZH_1900_500'],
                                               'fold'  : 0
                                            }

variables['ellipse_onebjet_mA_1900_mH_600'] = { 'name' : 'ellipse_onebjet_mA_1900_mH_600',
                                                'range' : (7,-0.5,6.5),
                                                'xaxis' : 'elliptical bin in mA-mH, pTZ',
                                                'cuts'  : ['bveto_1j_SR'],
                        'samples' : bkg+['AZH_1900_600'],
                                               'fold'  : 0
                                            }

variables['ellipse_onebjet_mA_1900_mH_700'] = { 'name' : 'ellipse_onebjet_mA_1900_mH_700',
                                                'range' : (7,-0.5,6.5),
                                                'xaxis' : 'elliptical bin in mA-mH, pTZ',
                                                'cuts'  : ['bveto_1j_SR'],
                        'samples' : bkg+['AZH_1900_700'],
                                               'fold'  : 0
                                            }

variables['ellipse_onebjet_mA_1900_mH_800'] = { 'name' : 'ellipse_onebjet_mA_1900_mH_800',
                                                'range' : (7,-0.5,6.5),
                                                'xaxis' : 'elliptical bin in mA-mH, pTZ',
                                                'cuts'  : ['bveto_1j_SR'],
                        'samples' : bkg+['AZH_1900_800'],
                                               'fold'  : 0
                                            }

variables['ellipse_onebjet_mA_1900_mH_900'] = { 'name' : 'ellipse_onebjet_mA_1900_mH_900',
                                                'range' : (7,-0.5,6.5),
                                                'xaxis' : 'elliptical bin in mA-mH, pTZ',
                                                'cuts'  : ['bveto_1j_SR'],
                        'samples' : bkg+['AZH_1900_900'],
                                               'fold'  : 0
                                            }

variables['ellipse_onebjet_mA_2000_mH_1000'] = { 'name' : 'ellipse_onebjet_mA_2000_mH_1000',
                                                'range' : (7,-0.5,6.5),
                                                'xaxis' : 'elliptical bin in mA-mH, pTZ',
                                                'cuts'  : ['bveto_1j_SR'],
                        'samples' : bkg+['AZH_2000_1000'],
                                               'fold'  : 0
                                            }

variables['ellipse_onebjet_mA_2000_mH_1100'] = { 'name' : 'ellipse_onebjet_mA_2000_mH_1100',
                                                'range' : (7,-0.5,6.5),
                                                'xaxis' : 'elliptical bin in mA-mH, pTZ',
                                                'cuts'  : ['bveto_1j_SR'],
                        'samples' : bkg+['AZH_2000_1100'],
                                               'fold'  : 0
                                            }

variables['ellipse_onebjet_mA_2000_mH_1200'] = { 'name' : 'ellipse_onebjet_mA_2000_mH_1200',
                                                'range' : (7,-0.5,6.5),
                                                'xaxis' : 'elliptical bin in mA-mH, pTZ',
                                                'cuts'  : ['bveto_1j_SR'],
                        'samples' : bkg+['AZH_2000_1200'],
                                               'fold'  : 0
                                            }

variables['ellipse_onebjet_mA_2000_mH_1300'] = { 'name' : 'ellipse_onebjet_mA_2000_mH_1300',
                                                'range' : (7,-0.5,6.5),
                                                'xaxis' : 'elliptical bin in mA-mH, pTZ',
                                                'cuts'  : ['bveto_1j_SR'],
                        'samples' : bkg+['AZH_2000_1300'],
                                               'fold'  : 0
                                            }

variables['ellipse_onebjet_mA_2000_mH_1400'] = { 'name' : 'ellipse_onebjet_mA_2000_mH_1400',
                                                'range' : (7,-0.5,6.5),
                                                'xaxis' : 'elliptical bin in mA-mH, pTZ',
                                                'cuts'  : ['bveto_1j_SR'],
                        'samples' : bkg+['AZH_2000_1400'],
                                               'fold'  : 0
                                            }

variables['ellipse_onebjet_mA_2000_mH_1500'] = { 'name' : 'ellipse_onebjet_mA_2000_mH_1500',
                                                'range' : (7,-0.5,6.5),
                                                'xaxis' : 'elliptical bin in mA-mH, pTZ',
                                                'cuts'  : ['bveto_1j_SR'],
                        'samples' : bkg+['AZH_2000_1500'],
                                               'fold'  : 0
                                            }

variables['ellipse_onebjet_mA_2000_mH_1600'] = { 'name' : 'ellipse_onebjet_mA_2000_mH_1600',
                                                'range' : (7,-0.5,6.5),
                                                'xaxis' : 'elliptical bin in mA-mH, pTZ',
                                                'cuts'  : ['bveto_1j_SR'],
                        'samples' : bkg+['AZH_2000_1600'],
                                               'fold'  : 0
                                            }

variables['ellipse_onebjet_mA_2000_mH_1700'] = { 'name' : 'ellipse_onebjet_mA_2000_mH_1700',
                                                'range' : (7,-0.5,6.5),
                                                'xaxis' : 'elliptical bin in mA-mH, pTZ',
                                                'cuts'  : ['bveto_1j_SR'],
                        'samples' : bkg+['AZH_2000_1700'],
                                               'fold'  : 0
                                            }

variables['ellipse_onebjet_mA_2000_mH_1800'] = { 'name' : 'ellipse_onebjet_mA_2000_mH_1800',
                                                'range' : (7,-0.5,6.5),
                                                'xaxis' : 'elliptical bin in mA-mH, pTZ',
                                                'cuts'  : ['bveto_1j_SR'],
                        'samples' : bkg+['AZH_2000_1800'],
                                               'fold'  : 0
                                            }

variables['ellipse_onebjet_mA_2000_mH_1900'] = { 'name' : 'ellipse_onebjet_mA_2000_mH_1900',
                                                'range' : (7,-0.5,6.5),
                                                'xaxis' : 'elliptical bin in mA-mH, pTZ',
                                                'cuts'  : ['bveto_1j_SR'],
                        'samples' : bkg+['AZH_2000_1900'],
                                               'fold'  : 0
                                            }

variables['ellipse_onebjet_mA_2000_mH_350'] = { 'name' : 'ellipse_onebjet_mA_2000_mH_350',
                                                'range' : (7,-0.5,6.5),
                                                'xaxis' : 'elliptical bin in mA-mH, pTZ',
                                                'cuts'  : ['bveto_1j_SR'],
                        'samples' : bkg+['AZH_2000_350'],
                                               'fold'  : 0
                                            }

variables['ellipse_onebjet_mA_2000_mH_400'] = { 'name' : 'ellipse_onebjet_mA_2000_mH_400',
                                                'range' : (7,-0.5,6.5),
                                                'xaxis' : 'elliptical bin in mA-mH, pTZ',
                                                'cuts'  : ['bveto_1j_SR'],
                        'samples' : bkg+['AZH_2000_400'],
                                               'fold'  : 0
                                            }

variables['ellipse_onebjet_mA_2000_mH_500'] = { 'name' : 'ellipse_onebjet_mA_2000_mH_500',
                                                'range' : (7,-0.5,6.5),
                                                'xaxis' : 'elliptical bin in mA-mH, pTZ',
                                                'cuts'  : ['bveto_1j_SR'],
                        'samples' : bkg+['AZH_2000_500'],
                                               'fold'  : 0
                                            }

variables['ellipse_onebjet_mA_2000_mH_600'] = { 'name' : 'ellipse_onebjet_mA_2000_mH_600',
                                                'range' : (7,-0.5,6.5),
                                                'xaxis' : 'elliptical bin in mA-mH, pTZ',
                                                'cuts'  : ['bveto_1j_SR'],
                        'samples' : bkg+['AZH_2000_600'],
                                               'fold'  : 0
                                            }

variables['ellipse_onebjet_mA_2000_mH_700'] = { 'name' : 'ellipse_onebjet_mA_2000_mH_700',
                                                'range' : (7,-0.5,6.5),
                                                'xaxis' : 'elliptical bin in mA-mH, pTZ',
                                                'cuts'  : ['bveto_1j_SR'],
                        'samples' : bkg+['AZH_2000_700'],
                                               'fold'  : 0
                                            }

variables['ellipse_onebjet_mA_2000_mH_800'] = { 'name' : 'ellipse_onebjet_mA_2000_mH_800',
                                                'range' : (7,-0.5,6.5),
                                                'xaxis' : 'elliptical bin in mA-mH, pTZ',
                                                'cuts'  : ['bveto_1j_SR'],
                        'samples' : bkg+['AZH_2000_800'],
                                               'fold'  : 0
                                            }

variables['ellipse_onebjet_mA_2000_mH_900'] = { 'name' : 'ellipse_onebjet_mA_2000_mH_900',
                                                'range' : (7,-0.5,6.5),
                                                'xaxis' : 'elliptical bin in mA-mH, pTZ',
                                                'cuts'  : ['bveto_1j_SR'],
                        'samples' : bkg+['AZH_2000_900'],
                                               'fold'  : 0
                                            }

variables['ellipse_onebjet_mA_2100_mH_1000'] = { 'name' : 'ellipse_onebjet_mA_2100_mH_1000',
                                                'range' : (7,-0.5,6.5),
                                                'xaxis' : 'elliptical bin in mA-mH, pTZ',
                                                'cuts'  : ['bveto_1j_SR'],
                        'samples' : bkg+['AZH_2100_1000'],
                                               'fold'  : 0
                                            }

variables['ellipse_onebjet_mA_2100_mH_1100'] = { 'name' : 'ellipse_onebjet_mA_2100_mH_1100',
                                                'range' : (7,-0.5,6.5),
                                                'xaxis' : 'elliptical bin in mA-mH, pTZ',
                                                'cuts'  : ['bveto_1j_SR'],
                        'samples' : bkg+['AZH_2100_1100'],
                                               'fold'  : 0
                                            }

variables['ellipse_onebjet_mA_2100_mH_1200'] = { 'name' : 'ellipse_onebjet_mA_2100_mH_1200',
                                                'range' : (7,-0.5,6.5),
                                                'xaxis' : 'elliptical bin in mA-mH, pTZ',
                                                'cuts'  : ['bveto_1j_SR'],
                        'samples' : bkg+['AZH_2100_1200'],
                                               'fold'  : 0
                                            }

variables['ellipse_onebjet_mA_2100_mH_1300'] = { 'name' : 'ellipse_onebjet_mA_2100_mH_1300',
                                                'range' : (7,-0.5,6.5),
                                                'xaxis' : 'elliptical bin in mA-mH, pTZ',
                                                'cuts'  : ['bveto_1j_SR'],
                        'samples' : bkg+['AZH_2100_1300'],
                                               'fold'  : 0
                                            }

variables['ellipse_onebjet_mA_2100_mH_1400'] = { 'name' : 'ellipse_onebjet_mA_2100_mH_1400',
                                                'range' : (7,-0.5,6.5),
                                                'xaxis' : 'elliptical bin in mA-mH, pTZ',
                                                'cuts'  : ['bveto_1j_SR'],
                        'samples' : bkg+['AZH_2100_1400'],
                                               'fold'  : 0
                                            }

variables['ellipse_onebjet_mA_2100_mH_1500'] = { 'name' : 'ellipse_onebjet_mA_2100_mH_1500',
                                                'range' : (7,-0.5,6.5),
                                                'xaxis' : 'elliptical bin in mA-mH, pTZ',
                                                'cuts'  : ['bveto_1j_SR'],
                        'samples' : bkg+['AZH_2100_1500'],
                                               'fold'  : 0
                                            }

variables['ellipse_onebjet_mA_2100_mH_1600'] = { 'name' : 'ellipse_onebjet_mA_2100_mH_1600',
                                                'range' : (7,-0.5,6.5),
                                                'xaxis' : 'elliptical bin in mA-mH, pTZ',
                                                'cuts'  : ['bveto_1j_SR'],
                        'samples' : bkg+['AZH_2100_1600'],
                                               'fold'  : 0
                                            }

variables['ellipse_onebjet_mA_2100_mH_1700'] = { 'name' : 'ellipse_onebjet_mA_2100_mH_1700',
                                                'range' : (7,-0.5,6.5),
                                                'xaxis' : 'elliptical bin in mA-mH, pTZ',
                                                'cuts'  : ['bveto_1j_SR'],
                        'samples' : bkg+['AZH_2100_1700'],
                                               'fold'  : 0
                                            }

variables['ellipse_onebjet_mA_2100_mH_1800'] = { 'name' : 'ellipse_onebjet_mA_2100_mH_1800',
                                                'range' : (7,-0.5,6.5),
                                                'xaxis' : 'elliptical bin in mA-mH, pTZ',
                                                'cuts'  : ['bveto_1j_SR'],
                        'samples' : bkg+['AZH_2100_1800'],
                                               'fold'  : 0
                                            }

variables['ellipse_onebjet_mA_2100_mH_1900'] = { 'name' : 'ellipse_onebjet_mA_2100_mH_1900',
                                                'range' : (7,-0.5,6.5),
                                                'xaxis' : 'elliptical bin in mA-mH, pTZ',
                                                'cuts'  : ['bveto_1j_SR'],
                        'samples' : bkg+['AZH_2100_1900'],
                                               'fold'  : 0
                                            }

variables['ellipse_onebjet_mA_2100_mH_2000'] = { 'name' : 'ellipse_onebjet_mA_2100_mH_2000',
                                                'range' : (7,-0.5,6.5),
                                                'xaxis' : 'elliptical bin in mA-mH, pTZ',
                                                'cuts'  : ['bveto_1j_SR'],
                        'samples' : bkg+['AZH_2100_2000'],
                                               'fold'  : 0
                                            }

variables['ellipse_onebjet_mA_2100_mH_350'] = { 'name' : 'ellipse_onebjet_mA_2100_mH_350',
                                                'range' : (7,-0.5,6.5),
                                                'xaxis' : 'elliptical bin in mA-mH, pTZ',
                                                'cuts'  : ['bveto_1j_SR'],
                        'samples' : bkg+['AZH_2100_350'],
                                               'fold'  : 0
                                            }

variables['ellipse_onebjet_mA_2100_mH_400'] = { 'name' : 'ellipse_onebjet_mA_2100_mH_400',
                                                'range' : (7,-0.5,6.5),
                                                'xaxis' : 'elliptical bin in mA-mH, pTZ',
                                                'cuts'  : ['bveto_1j_SR'],
                        'samples' : bkg+['AZH_2100_400'],
                                               'fold'  : 0
                                            }

variables['ellipse_onebjet_mA_2100_mH_500'] = { 'name' : 'ellipse_onebjet_mA_2100_mH_500',
                                                'range' : (7,-0.5,6.5),
                                                'xaxis' : 'elliptical bin in mA-mH, pTZ',
                                                'cuts'  : ['bveto_1j_SR'],
                        'samples' : bkg+['AZH_2100_500'],
                                               'fold'  : 0
                                            }

variables['ellipse_onebjet_mA_2100_mH_600'] = { 'name' : 'ellipse_onebjet_mA_2100_mH_600',
                                                'range' : (7,-0.5,6.5),
                                                'xaxis' : 'elliptical bin in mA-mH, pTZ',
                                                'cuts'  : ['bveto_1j_SR'],
                        'samples' : bkg+['AZH_2100_600'],
                                               'fold'  : 0
                                            }

variables['ellipse_onebjet_mA_2100_mH_700'] = { 'name' : 'ellipse_onebjet_mA_2100_mH_700',
                                                'range' : (7,-0.5,6.5),
                                                'xaxis' : 'elliptical bin in mA-mH, pTZ',
                                                'cuts'  : ['bveto_1j_SR'],
                        'samples' : bkg+['AZH_2100_700'],
                                               'fold'  : 0
                                            }

variables['ellipse_onebjet_mA_2100_mH_800'] = { 'name' : 'ellipse_onebjet_mA_2100_mH_800',
                                                'range' : (7,-0.5,6.5),
                                                'xaxis' : 'elliptical bin in mA-mH, pTZ',
                                                'cuts'  : ['bveto_1j_SR'],
                        'samples' : bkg+['AZH_2100_800'],
                                               'fold'  : 0
                                            }

variables['ellipse_onebjet_mA_2100_mH_900'] = { 'name' : 'ellipse_onebjet_mA_2100_mH_900',
                                                'range' : (7,-0.5,6.5),
                                                'xaxis' : 'elliptical bin in mA-mH, pTZ',
                                                'cuts'  : ['bveto_1j_SR'],
                        'samples' : bkg+['AZH_2100_900'],
                                               'fold'  : 0
                                            }

variables['ellipse_onebjet_mA_430_mH_330'] = { 'name' : 'ellipse_onebjet_mA_430_mH_330',
                                                'range' : (7,-0.5,6.5),
                                                'xaxis' : 'elliptical bin in mA-mH, pTZ',
                                                'cuts'  : ['bveto_1j_SR'],
                        'samples' : bkg+['AZH_430_330'],
                                               'fold'  : 0
                                            }

variables['ellipse_onebjet_mA_450_mH_330'] = { 'name' : 'ellipse_onebjet_mA_450_mH_330',
                                                'range' : (7,-0.5,6.5),
                                                'xaxis' : 'elliptical bin in mA-mH, pTZ',
                                                'cuts'  : ['bveto_1j_SR'],
                        'samples' : bkg+['AZH_450_330'],
                                               'fold'  : 0
                                            }

variables['ellipse_onebjet_mA_450_mH_350'] = { 'name' : 'ellipse_onebjet_mA_450_mH_350',
                                                'range' : (7,-0.5,6.5),
                                                'xaxis' : 'elliptical bin in mA-mH, pTZ',
                                                'cuts'  : ['bveto_1j_SR'],
                        'samples' : bkg+['AZH_450_350'],
                                               'fold'  : 0
                                            }

variables['ellipse_onebjet_mA_500_mH_330'] = { 'name' : 'ellipse_onebjet_mA_500_mH_330',
                                                'range' : (7,-0.5,6.5),
                                                'xaxis' : 'elliptical bin in mA-mH, pTZ',
                                                'cuts'  : ['bveto_1j_SR'],
                        'samples' : bkg+['AZH_500_330'],
                                               'fold'  : 0
                                            }

variables['ellipse_onebjet_mA_500_mH_350'] = { 'name' : 'ellipse_onebjet_mA_500_mH_350',
                                                'range' : (7,-0.5,6.5),
                                                'xaxis' : 'elliptical bin in mA-mH, pTZ',
                                                'cuts'  : ['bveto_1j_SR'],
                        'samples' : bkg+['AZH_500_350'],
                                               'fold'  : 0
                                            }

variables['ellipse_onebjet_mA_500_mH_370'] = { 'name' : 'ellipse_onebjet_mA_500_mH_370',
                                                'range' : (7,-0.5,6.5),
                                                'xaxis' : 'elliptical bin in mA-mH, pTZ',
                                                'cuts'  : ['bveto_1j_SR'],
                        'samples' : bkg+['AZH_500_370'],
                                               'fold'  : 0
                                            }

variables['ellipse_onebjet_mA_500_mH_400'] = { 'name' : 'ellipse_onebjet_mA_500_mH_400',
                                                'range' : (7,-0.5,6.5),
                                                'xaxis' : 'elliptical bin in mA-mH, pTZ',
                                                'cuts'  : ['bveto_1j_SR'],
                        'samples' : bkg+['AZH_500_400'],
                                               'fold'  : 0
                                            }

variables['ellipse_onebjet_mA_550_mH_330'] = { 'name' : 'ellipse_onebjet_mA_550_mH_330',
                                                'range' : (7,-0.5,6.5),
                                                'xaxis' : 'elliptical bin in mA-mH, pTZ',
                                                'cuts'  : ['bveto_1j_SR'],
                        'samples' : bkg+['AZH_550_330'],
                                               'fold'  : 0
                                            }

variables['ellipse_onebjet_mA_550_mH_350'] = { 'name' : 'ellipse_onebjet_mA_550_mH_350',
                                                'range' : (7,-0.5,6.5),
                                                'xaxis' : 'elliptical bin in mA-mH, pTZ',
                                                'cuts'  : ['bveto_1j_SR'],
                        'samples' : bkg+['AZH_550_350'],
                                               'fold'  : 0
                                            }

variables['ellipse_onebjet_mA_550_mH_400'] = { 'name' : 'ellipse_onebjet_mA_550_mH_400',
                                                'range' : (7,-0.5,6.5),
                                                'xaxis' : 'elliptical bin in mA-mH, pTZ',
                                                'cuts'  : ['bveto_1j_SR'],
                        'samples' : bkg+['AZH_550_400'],
                                               'fold'  : 0
                                            }

variables['ellipse_onebjet_mA_550_mH_450'] = { 'name' : 'ellipse_onebjet_mA_550_mH_450',
                                                'range' : (7,-0.5,6.5),
                                                'xaxis' : 'elliptical bin in mA-mH, pTZ',
                                                'cuts'  : ['bveto_1j_SR'],
                        'samples' : bkg+['AZH_550_450'],
                                               'fold'  : 0
                                            }

variables['ellipse_onebjet_mA_600_mH_330'] = { 'name' : 'ellipse_onebjet_mA_600_mH_330',
                                                'range' : (7,-0.5,6.5),
                                                'xaxis' : 'elliptical bin in mA-mH, pTZ',
                                                'cuts'  : ['bveto_1j_SR'],
                        'samples' : bkg+['AZH_600_330'],
                                               'fold'  : 0
                                            }

variables['ellipse_onebjet_mA_600_mH_350'] = { 'name' : 'ellipse_onebjet_mA_600_mH_350',
                                                'range' : (7,-0.5,6.5),
                                                'xaxis' : 'elliptical bin in mA-mH, pTZ',
                                                'cuts'  : ['bveto_1j_SR'],
                        'samples' : bkg+['AZH_600_350'],
                                               'fold'  : 0
                                            }

variables['ellipse_onebjet_mA_600_mH_400'] = { 'name' : 'ellipse_onebjet_mA_600_mH_400',
                                                'range' : (7,-0.5,6.5),
                                                'xaxis' : 'elliptical bin in mA-mH, pTZ',
                                                'cuts'  : ['bveto_1j_SR'],
                        'samples' : bkg+['AZH_600_400'],
                                               'fold'  : 0
                                            }

variables['ellipse_onebjet_mA_600_mH_450'] = { 'name' : 'ellipse_onebjet_mA_600_mH_450',
                                                'range' : (7,-0.5,6.5),
                                                'xaxis' : 'elliptical bin in mA-mH, pTZ',
                                                'cuts'  : ['bveto_1j_SR'],
                        'samples' : bkg+['AZH_600_450'],
                                               'fold'  : 0
                                            }

variables['ellipse_onebjet_mA_600_mH_500'] = { 'name' : 'ellipse_onebjet_mA_600_mH_500',
                                                'range' : (7,-0.5,6.5),
                                                'xaxis' : 'elliptical bin in mA-mH, pTZ',
                                                'cuts'  : ['bveto_1j_SR'],
                        'samples' : bkg+['AZH_600_500'],
                                               'fold'  : 0
                                            }

variables['ellipse_onebjet_mA_650_mH_330'] = { 'name' : 'ellipse_onebjet_mA_650_mH_330',
                                                'range' : (7,-0.5,6.5),
                                                'xaxis' : 'elliptical bin in mA-mH, pTZ',
                                                'cuts'  : ['bveto_1j_SR'],
                        'samples' : bkg+['AZH_650_330'],
                                               'fold'  : 0
                                            }

variables['ellipse_onebjet_mA_650_mH_350'] = { 'name' : 'ellipse_onebjet_mA_650_mH_350',
                                                'range' : (7,-0.5,6.5),
                                                'xaxis' : 'elliptical bin in mA-mH, pTZ',
                                                'cuts'  : ['bveto_1j_SR'],
                        'samples' : bkg+['AZH_650_350'],
                                               'fold'  : 0
                                            }

variables['ellipse_onebjet_mA_650_mH_400'] = { 'name' : 'ellipse_onebjet_mA_650_mH_400',
                                                'range' : (7,-0.5,6.5),
                                                'xaxis' : 'elliptical bin in mA-mH, pTZ',
                                                'cuts'  : ['bveto_1j_SR'],
                        'samples' : bkg+['AZH_650_400'],
                                               'fold'  : 0
                                            }

variables['ellipse_onebjet_mA_650_mH_450'] = { 'name' : 'ellipse_onebjet_mA_650_mH_450',
                                                'range' : (7,-0.5,6.5),
                                                'xaxis' : 'elliptical bin in mA-mH, pTZ',
                                                'cuts'  : ['bveto_1j_SR'],
                        'samples' : bkg+['AZH_650_450'],
                                               'fold'  : 0
                                            }

variables['ellipse_onebjet_mA_650_mH_500'] = { 'name' : 'ellipse_onebjet_mA_650_mH_500',
                                                'range' : (7,-0.5,6.5),
                                                'xaxis' : 'elliptical bin in mA-mH, pTZ',
                                                'cuts'  : ['bveto_1j_SR'],
                        'samples' : bkg+['AZH_650_500'],
                                               'fold'  : 0
                                            }

variables['ellipse_onebjet_mA_650_mH_550'] = { 'name' : 'ellipse_onebjet_mA_650_mH_550',
                                                'range' : (7,-0.5,6.5),
                                                'xaxis' : 'elliptical bin in mA-mH, pTZ',
                                                'cuts'  : ['bveto_1j_SR'],
                        'samples' : bkg+['AZH_650_550'],
                                               'fold'  : 0
                                            }

variables['ellipse_onebjet_mA_700_mH_330'] = { 'name' : 'ellipse_onebjet_mA_700_mH_330',
                                                'range' : (7,-0.5,6.5),
                                                'xaxis' : 'elliptical bin in mA-mH, pTZ',
                                                'cuts'  : ['bveto_1j_SR'],
                        'samples' : bkg+['AZH_700_330'],
                                               'fold'  : 0
                                            }

variables['ellipse_onebjet_mA_700_mH_350'] = { 'name' : 'ellipse_onebjet_mA_700_mH_350',
                                                'range' : (7,-0.5,6.5),
                                                'xaxis' : 'elliptical bin in mA-mH, pTZ',
                                                'cuts'  : ['bveto_1j_SR'],
                        'samples' : bkg+['AZH_700_350'],
                                               'fold'  : 0
                                            }

variables['ellipse_onebjet_mA_700_mH_370'] = { 'name' : 'ellipse_onebjet_mA_700_mH_370',
                                                'range' : (7,-0.5,6.5),
                                                'xaxis' : 'elliptical bin in mA-mH, pTZ',
                                                'cuts'  : ['bveto_1j_SR'],
                        'samples' : bkg+['AZH_700_370'],
                                               'fold'  : 0
                                            }

variables['ellipse_onebjet_mA_700_mH_400'] = { 'name' : 'ellipse_onebjet_mA_700_mH_400',
                                                'range' : (7,-0.5,6.5),
                                                'xaxis' : 'elliptical bin in mA-mH, pTZ',
                                                'cuts'  : ['bveto_1j_SR'],
                        'samples' : bkg+['AZH_700_400'],
                                               'fold'  : 0
                                            }

variables['ellipse_onebjet_mA_700_mH_450'] = { 'name' : 'ellipse_onebjet_mA_700_mH_450',
                                                'range' : (7,-0.5,6.5),
                                                'xaxis' : 'elliptical bin in mA-mH, pTZ',
                                                'cuts'  : ['bveto_1j_SR'],
                        'samples' : bkg+['AZH_700_450'],
                                               'fold'  : 0
                                            }

variables['ellipse_onebjet_mA_700_mH_500'] = { 'name' : 'ellipse_onebjet_mA_700_mH_500',
                                                'range' : (7,-0.5,6.5),
                                                'xaxis' : 'elliptical bin in mA-mH, pTZ',
                                                'cuts'  : ['bveto_1j_SR'],
                        'samples' : bkg+['AZH_700_500'],
                                               'fold'  : 0
                                            }

variables['ellipse_onebjet_mA_700_mH_550'] = { 'name' : 'ellipse_onebjet_mA_700_mH_550',
                                                'range' : (7,-0.5,6.5),
                                                'xaxis' : 'elliptical bin in mA-mH, pTZ',
                                                'cuts'  : ['bveto_1j_SR'],
                        'samples' : bkg+['AZH_700_550'],
                                               'fold'  : 0
                                            }

variables['ellipse_onebjet_mA_700_mH_600'] = { 'name' : 'ellipse_onebjet_mA_700_mH_600',
                                                'range' : (7,-0.5,6.5),
                                                'xaxis' : 'elliptical bin in mA-mH, pTZ',
                                                'cuts'  : ['bveto_1j_SR'],
                        'samples' : bkg+['AZH_700_600'],
                                               'fold'  : 0
                                            }

variables['ellipse_onebjet_mA_750_mH_330'] = { 'name' : 'ellipse_onebjet_mA_750_mH_330',
                                                'range' : (7,-0.5,6.5),
                                                'xaxis' : 'elliptical bin in mA-mH, pTZ',
                                                'cuts'  : ['bveto_1j_SR'],
                        'samples' : bkg+['AZH_750_330'],
                                               'fold'  : 0
                                            }

variables['ellipse_onebjet_mA_750_mH_350'] = { 'name' : 'ellipse_onebjet_mA_750_mH_350',
                                                'range' : (7,-0.5,6.5),
                                                'xaxis' : 'elliptical bin in mA-mH, pTZ',
                                                'cuts'  : ['bveto_1j_SR'],
                        'samples' : bkg+['AZH_750_350'],
                                               'fold'  : 0
                                            }

variables['ellipse_onebjet_mA_750_mH_400'] = { 'name' : 'ellipse_onebjet_mA_750_mH_400',
                                                'range' : (7,-0.5,6.5),
                                                'xaxis' : 'elliptical bin in mA-mH, pTZ',
                                                'cuts'  : ['bveto_1j_SR'],
                        'samples' : bkg+['AZH_750_400'],
                                               'fold'  : 0
                                            }

variables['ellipse_onebjet_mA_750_mH_450'] = { 'name' : 'ellipse_onebjet_mA_750_mH_450',
                                                'range' : (7,-0.5,6.5),
                                                'xaxis' : 'elliptical bin in mA-mH, pTZ',
                                                'cuts'  : ['bveto_1j_SR'],
                        'samples' : bkg+['AZH_750_450'],
                                               'fold'  : 0
                                            }

variables['ellipse_onebjet_mA_750_mH_500'] = { 'name' : 'ellipse_onebjet_mA_750_mH_500',
                                                'range' : (7,-0.5,6.5),
                                                'xaxis' : 'elliptical bin in mA-mH, pTZ',
                                                'cuts'  : ['bveto_1j_SR'],
                        'samples' : bkg+['AZH_750_500'],
                                               'fold'  : 0
                                            }

variables['ellipse_onebjet_mA_750_mH_550'] = { 'name' : 'ellipse_onebjet_mA_750_mH_550',
                                                'range' : (7,-0.5,6.5),
                                                'xaxis' : 'elliptical bin in mA-mH, pTZ',
                                                'cuts'  : ['bveto_1j_SR'],
                        'samples' : bkg+['AZH_750_550'],
                                               'fold'  : 0
                                            }

variables['ellipse_onebjet_mA_750_mH_600'] = { 'name' : 'ellipse_onebjet_mA_750_mH_600',
                                                'range' : (7,-0.5,6.5),
                                                'xaxis' : 'elliptical bin in mA-mH, pTZ',
                                                'cuts'  : ['bveto_1j_SR'],
                        'samples' : bkg+['AZH_750_600'],
                                               'fold'  : 0
                                            }

variables['ellipse_onebjet_mA_750_mH_650'] = { 'name' : 'ellipse_onebjet_mA_750_mH_650',
                                                'range' : (7,-0.5,6.5),
                                                'xaxis' : 'elliptical bin in mA-mH, pTZ',
                                                'cuts'  : ['bveto_1j_SR'],
                        'samples' : bkg+['AZH_750_650'],
                                               'fold'  : 0
                                            }

variables['ellipse_onebjet_mA_800_mH_330'] = { 'name' : 'ellipse_onebjet_mA_800_mH_330',
                                                'range' : (7,-0.5,6.5),
                                                'xaxis' : 'elliptical bin in mA-mH, pTZ',
                                                'cuts'  : ['bveto_1j_SR'],
                        'samples' : bkg+['AZH_800_330'],
                                               'fold'  : 0
                                            }

variables['ellipse_onebjet_mA_800_mH_350'] = { 'name' : 'ellipse_onebjet_mA_800_mH_350',
                                                'range' : (7,-0.5,6.5),
                                                'xaxis' : 'elliptical bin in mA-mH, pTZ',
                                                'cuts'  : ['bveto_1j_SR'],
                        'samples' : bkg+['AZH_800_350'],
                                               'fold'  : 0
                                            }

variables['ellipse_onebjet_mA_800_mH_400'] = { 'name' : 'ellipse_onebjet_mA_800_mH_400',
                                                'range' : (7,-0.5,6.5),
                                                'xaxis' : 'elliptical bin in mA-mH, pTZ',
                                                'cuts'  : ['bveto_1j_SR'],
                        'samples' : bkg+['AZH_800_400'],
                                               'fold'  : 0
                                            }

variables['ellipse_onebjet_mA_800_mH_450'] = { 'name' : 'ellipse_onebjet_mA_800_mH_450',
                                                'range' : (7,-0.5,6.5),
                                                'xaxis' : 'elliptical bin in mA-mH, pTZ',
                                                'cuts'  : ['bveto_1j_SR'],
                        'samples' : bkg+['AZH_800_450'],
                                               'fold'  : 0
                                            }

variables['ellipse_onebjet_mA_800_mH_500'] = { 'name' : 'ellipse_onebjet_mA_800_mH_500',
                                                'range' : (7,-0.5,6.5),
                                                'xaxis' : 'elliptical bin in mA-mH, pTZ',
                                                'cuts'  : ['bveto_1j_SR'],
                        'samples' : bkg+['AZH_800_500'],
                                               'fold'  : 0
                                            }

variables['ellipse_onebjet_mA_800_mH_550'] = { 'name' : 'ellipse_onebjet_mA_800_mH_550',
                                                'range' : (7,-0.5,6.5),
                                                'xaxis' : 'elliptical bin in mA-mH, pTZ',
                                                'cuts'  : ['bveto_1j_SR'],
                        'samples' : bkg+['AZH_800_550'],
                                               'fold'  : 0
                                            }

variables['ellipse_onebjet_mA_800_mH_600'] = { 'name' : 'ellipse_onebjet_mA_800_mH_600',
                                                'range' : (7,-0.5,6.5),
                                                'xaxis' : 'elliptical bin in mA-mH, pTZ',
                                                'cuts'  : ['bveto_1j_SR'],
                        'samples' : bkg+['AZH_800_600'],
                                               'fold'  : 0
                                            }

variables['ellipse_onebjet_mA_800_mH_650'] = { 'name' : 'ellipse_onebjet_mA_800_mH_650',
                                                'range' : (7,-0.5,6.5),
                                                'xaxis' : 'elliptical bin in mA-mH, pTZ',
                                                'cuts'  : ['bveto_1j_SR'],
                        'samples' : bkg+['AZH_800_650'],
                                               'fold'  : 0
                                            }

variables['ellipse_onebjet_mA_800_mH_700'] = { 'name' : 'ellipse_onebjet_mA_800_mH_700',
                                                'range' : (7,-0.5,6.5),
                                                'xaxis' : 'elliptical bin in mA-mH, pTZ',
                                                'cuts'  : ['bveto_1j_SR'],
                        'samples' : bkg+['AZH_800_700'],
                                               'fold'  : 0
                                            }

variables['ellipse_onebjet_mA_850_mH_330'] = { 'name' : 'ellipse_onebjet_mA_850_mH_330',
                                                'range' : (7,-0.5,6.5),
                                                'xaxis' : 'elliptical bin in mA-mH, pTZ',
                                                'cuts'  : ['bveto_1j_SR'],
                        'samples' : bkg+['AZH_850_330'],
                                               'fold'  : 0
                                            }

variables['ellipse_onebjet_mA_850_mH_350'] = { 'name' : 'ellipse_onebjet_mA_850_mH_350',
                                                'range' : (7,-0.5,6.5),
                                                'xaxis' : 'elliptical bin in mA-mH, pTZ',
                                                'cuts'  : ['bveto_1j_SR'],
                        'samples' : bkg+['AZH_850_350'],
                                               'fold'  : 0
                                            }

variables['ellipse_onebjet_mA_850_mH_400'] = { 'name' : 'ellipse_onebjet_mA_850_mH_400',
                                                'range' : (7,-0.5,6.5),
                                                'xaxis' : 'elliptical bin in mA-mH, pTZ',
                                                'cuts'  : ['bveto_1j_SR'],
                        'samples' : bkg+['AZH_850_400'],
                                               'fold'  : 0
                                            }

variables['ellipse_onebjet_mA_850_mH_450'] = { 'name' : 'ellipse_onebjet_mA_850_mH_450',
                                                'range' : (7,-0.5,6.5),
                                                'xaxis' : 'elliptical bin in mA-mH, pTZ',
                                                'cuts'  : ['bveto_1j_SR'],
                        'samples' : bkg+['AZH_850_450'],
                                               'fold'  : 0
                                            }

variables['ellipse_onebjet_mA_850_mH_500'] = { 'name' : 'ellipse_onebjet_mA_850_mH_500',
                                                'range' : (7,-0.5,6.5),
                                                'xaxis' : 'elliptical bin in mA-mH, pTZ',
                                                'cuts'  : ['bveto_1j_SR'],
                        'samples' : bkg+['AZH_850_500'],
                                               'fold'  : 0
                                            }

variables['ellipse_onebjet_mA_850_mH_550'] = { 'name' : 'ellipse_onebjet_mA_850_mH_550',
                                                'range' : (7,-0.5,6.5),
                                                'xaxis' : 'elliptical bin in mA-mH, pTZ',
                                                'cuts'  : ['bveto_1j_SR'],
                        'samples' : bkg+['AZH_850_550'],
                                               'fold'  : 0
                                            }

variables['ellipse_onebjet_mA_850_mH_600'] = { 'name' : 'ellipse_onebjet_mA_850_mH_600',
                                                'range' : (7,-0.5,6.5),
                                                'xaxis' : 'elliptical bin in mA-mH, pTZ',
                                                'cuts'  : ['bveto_1j_SR'],
                        'samples' : bkg+['AZH_850_600'],
                                               'fold'  : 0
                                            }

variables['ellipse_onebjet_mA_850_mH_650'] = { 'name' : 'ellipse_onebjet_mA_850_mH_650',
                                                'range' : (7,-0.5,6.5),
                                                'xaxis' : 'elliptical bin in mA-mH, pTZ',
                                                'cuts'  : ['bveto_1j_SR'],
                        'samples' : bkg+['AZH_850_650'],
                                               'fold'  : 0
                                            }

variables['ellipse_onebjet_mA_850_mH_700'] = { 'name' : 'ellipse_onebjet_mA_850_mH_700',
                                                'range' : (7,-0.5,6.5),
                                                'xaxis' : 'elliptical bin in mA-mH, pTZ',
                                                'cuts'  : ['bveto_1j_SR'],
                        'samples' : bkg+['AZH_850_700'],
                                               'fold'  : 0
                                            }

variables['ellipse_onebjet_mA_850_mH_750'] = { 'name' : 'ellipse_onebjet_mA_850_mH_750',
                                                'range' : (7,-0.5,6.5),
                                                'xaxis' : 'elliptical bin in mA-mH, pTZ',
                                                'cuts'  : ['bveto_1j_SR'],
                        'samples' : bkg+['AZH_850_750'],
                                               'fold'  : 0
                                            }

variables['ellipse_onebjet_mA_900_mH_330'] = { 'name' : 'ellipse_onebjet_mA_900_mH_330',
                                                'range' : (7,-0.5,6.5),
                                                'xaxis' : 'elliptical bin in mA-mH, pTZ',
                                                'cuts'  : ['bveto_1j_SR'],
                        'samples' : bkg+['AZH_900_330'],
                                               'fold'  : 0
                                            }

variables['ellipse_onebjet_mA_900_mH_350'] = { 'name' : 'ellipse_onebjet_mA_900_mH_350',
                                                'range' : (7,-0.5,6.5),
                                                'xaxis' : 'elliptical bin in mA-mH, pTZ',
                                                'cuts'  : ['bveto_1j_SR'],
                        'samples' : bkg+['AZH_900_350'],
                                               'fold'  : 0
                                            }

variables['ellipse_onebjet_mA_900_mH_370'] = { 'name' : 'ellipse_onebjet_mA_900_mH_370',
                                                'range' : (7,-0.5,6.5),
                                                'xaxis' : 'elliptical bin in mA-mH, pTZ',
                                                'cuts'  : ['bveto_1j_SR'],
                        'samples' : bkg+['AZH_900_370'],
                                               'fold'  : 0
                                            }

variables['ellipse_onebjet_mA_900_mH_400'] = { 'name' : 'ellipse_onebjet_mA_900_mH_400',
                                                'range' : (7,-0.5,6.5),
                                                'xaxis' : 'elliptical bin in mA-mH, pTZ',
                                                'cuts'  : ['bveto_1j_SR'],
                        'samples' : bkg+['AZH_900_400'],
                                               'fold'  : 0
                                            }

variables['ellipse_onebjet_mA_900_mH_450'] = { 'name' : 'ellipse_onebjet_mA_900_mH_450',
                                                'range' : (7,-0.5,6.5),
                                                'xaxis' : 'elliptical bin in mA-mH, pTZ',
                                                'cuts'  : ['bveto_1j_SR'],
                        'samples' : bkg+['AZH_900_450'],
                                               'fold'  : 0
                                            }

variables['ellipse_onebjet_mA_900_mH_500'] = { 'name' : 'ellipse_onebjet_mA_900_mH_500',
                                                'range' : (7,-0.5,6.5),
                                                'xaxis' : 'elliptical bin in mA-mH, pTZ',
                                                'cuts'  : ['bveto_1j_SR'],
                        'samples' : bkg+['AZH_900_500'],
                                               'fold'  : 0
                                            }

variables['ellipse_onebjet_mA_900_mH_550'] = { 'name' : 'ellipse_onebjet_mA_900_mH_550',
                                                'range' : (7,-0.5,6.5),
                                                'xaxis' : 'elliptical bin in mA-mH, pTZ',
                                                'cuts'  : ['bveto_1j_SR'],
                        'samples' : bkg+['AZH_900_550'],
                                               'fold'  : 0
                                            }

variables['ellipse_onebjet_mA_900_mH_600'] = { 'name' : 'ellipse_onebjet_mA_900_mH_600',
                                                'range' : (7,-0.5,6.5),
                                                'xaxis' : 'elliptical bin in mA-mH, pTZ',
                                                'cuts'  : ['bveto_1j_SR'],
                        'samples' : bkg+['AZH_900_600'],
                                               'fold'  : 0
                                            }

variables['ellipse_onebjet_mA_900_mH_650'] = { 'name' : 'ellipse_onebjet_mA_900_mH_650',
                                                'range' : (7,-0.5,6.5),
                                                'xaxis' : 'elliptical bin in mA-mH, pTZ',
                                                'cuts'  : ['bveto_1j_SR'],
                        'samples' : bkg+['AZH_900_650'],
                                               'fold'  : 0
                                            }

variables['ellipse_onebjet_mA_900_mH_700'] = { 'name' : 'ellipse_onebjet_mA_900_mH_700',
                                                'range' : (7,-0.5,6.5),
                                                'xaxis' : 'elliptical bin in mA-mH, pTZ',
                                                'cuts'  : ['bveto_1j_SR'],
                        'samples' : bkg+['AZH_900_700'],
                                               'fold'  : 0
                                            }

variables['ellipse_onebjet_mA_900_mH_750'] = { 'name' : 'ellipse_onebjet_mA_900_mH_750',
                                                'range' : (7,-0.5,6.5),
                                                'xaxis' : 'elliptical bin in mA-mH, pTZ',
                                                'cuts'  : ['bveto_1j_SR'],
                        'samples' : bkg+['AZH_900_750'],
                                               'fold'  : 0
                                            }

variables['ellipse_onebjet_mA_900_mH_800'] = { 'name' : 'ellipse_onebjet_mA_900_mH_800',
                                                'range' : (7,-0.5,6.5),
                                                'xaxis' : 'elliptical bin in mA-mH, pTZ',
                                                'cuts'  : ['bveto_1j_SR'],
                        'samples' : bkg+['AZH_900_800'],
                                               'fold'  : 0
                                            }

variables['ellipse_onebjet_mA_950_mH_330'] = { 'name' : 'ellipse_onebjet_mA_950_mH_330',
                                                'range' : (7,-0.5,6.5),
                                                'xaxis' : 'elliptical bin in mA-mH, pTZ',
                                                'cuts'  : ['bveto_1j_SR'],
                        'samples' : bkg+['AZH_950_330'],
                                               'fold'  : 0
                                            }

variables['ellipse_onebjet_mA_950_mH_350'] = { 'name' : 'ellipse_onebjet_mA_950_mH_350',
                                                'range' : (7,-0.5,6.5),
                                                'xaxis' : 'elliptical bin in mA-mH, pTZ',
                                                'cuts'  : ['bveto_1j_SR'],
                        'samples' : bkg+['AZH_950_350'],
                                               'fold'  : 0
                                            }

variables['ellipse_onebjet_mA_950_mH_400'] = { 'name' : 'ellipse_onebjet_mA_950_mH_400',
                                                'range' : (7,-0.5,6.5),
                                                'xaxis' : 'elliptical bin in mA-mH, pTZ',
                                                'cuts'  : ['bveto_1j_SR'],
                        'samples' : bkg+['AZH_950_400'],
                                               'fold'  : 0
                                            }

variables['ellipse_onebjet_mA_950_mH_450'] = { 'name' : 'ellipse_onebjet_mA_950_mH_450',
                                                'range' : (7,-0.5,6.5),
                                                'xaxis' : 'elliptical bin in mA-mH, pTZ',
                                                'cuts'  : ['bveto_1j_SR'],
                        'samples' : bkg+['AZH_950_450'],
                                               'fold'  : 0
                                            }

variables['ellipse_onebjet_mA_950_mH_500'] = { 'name' : 'ellipse_onebjet_mA_950_mH_500',
                                                'range' : (7,-0.5,6.5),
                                                'xaxis' : 'elliptical bin in mA-mH, pTZ',
                                                'cuts'  : ['bveto_1j_SR'],
                        'samples' : bkg+['AZH_950_500'],
                                               'fold'  : 0
                                            }

variables['ellipse_onebjet_mA_950_mH_550'] = { 'name' : 'ellipse_onebjet_mA_950_mH_550',
                                                'range' : (7,-0.5,6.5),
                                                'xaxis' : 'elliptical bin in mA-mH, pTZ',
                                                'cuts'  : ['bveto_1j_SR'],
                        'samples' : bkg+['AZH_950_550'],
                                               'fold'  : 0
                                            }

variables['ellipse_onebjet_mA_950_mH_600'] = { 'name' : 'ellipse_onebjet_mA_950_mH_600',
                                                'range' : (7,-0.5,6.5),
                                                'xaxis' : 'elliptical bin in mA-mH, pTZ',
                                                'cuts'  : ['bveto_1j_SR'],
                        'samples' : bkg+['AZH_950_600'],
                                               'fold'  : 0
                                            }

variables['ellipse_onebjet_mA_950_mH_650'] = { 'name' : 'ellipse_onebjet_mA_950_mH_650',
                                                'range' : (7,-0.5,6.5),
                                                'xaxis' : 'elliptical bin in mA-mH, pTZ',
                                                'cuts'  : ['bveto_1j_SR'],
                        'samples' : bkg+['AZH_950_650'],
                                               'fold'  : 0
                                            }

variables['ellipse_onebjet_mA_950_mH_700'] = { 'name' : 'ellipse_onebjet_mA_950_mH_700',
                                                'range' : (7,-0.5,6.5),
                                                'xaxis' : 'elliptical bin in mA-mH, pTZ',
                                                'cuts'  : ['bveto_1j_SR'],
                        'samples' : bkg+['AZH_950_700'],
                                               'fold'  : 0
                                            }

variables['ellipse_onebjet_mA_950_mH_750'] = { 'name' : 'ellipse_onebjet_mA_950_mH_750',
                                                'range' : (7,-0.5,6.5),
                                                'xaxis' : 'elliptical bin in mA-mH, pTZ',
                                                'cuts'  : ['bveto_1j_SR'],
                        'samples' : bkg+['AZH_950_750'],
                                               'fold'  : 0
                                            }

variables['ellipse_onebjet_mA_950_mH_800'] = { 'name' : 'ellipse_onebjet_mA_950_mH_800',
                                                'range' : (7,-0.5,6.5),
                                                'xaxis' : 'elliptical bin in mA-mH, pTZ',
                                                'cuts'  : ['bveto_1j_SR'],
                        'samples' : bkg+['AZH_950_800'],
                                               'fold'  : 0
                                            }

variables['ellipse_onebjet_mA_950_mH_850'] = { 'name' : 'ellipse_onebjet_mA_950_mH_850',
                                                'range' : (7,-0.5,6.5),
                                                'xaxis' : 'elliptical bin in mA-mH, pTZ',
                                                'cuts'  : ['bveto_1j_SR'],
                        'samples' : bkg+['AZH_950_850'],
                                               'fold'  : 0
                                            }
