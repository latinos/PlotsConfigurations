# variables

#variables = {}
    
#'fold' : # 0 = not fold (default), 1 = fold underflowbin, 2 = fold overflow bin, 3 = fold underflow and overflow
   
variables['events']     = { 'name': '1',      
                            'range' : (1,0,2),  
                            'xaxis' : 'events', 
                            'doWeight' : 1,
                            'scaleMultiplicativeOverlaid' : 0.001,
                            'binX' : 1,
                            'binY' : 1,
                            'fold' : 3
                        }

variables['njet']       = { 'name'  : 'ZH3l_njet',
                            'range' : (10,0,10),
                            'xaxis' : 'N_{jet}',
                            'doWeight' : 1,
                            'scaleMultiplicativeOverlaid' : 0.001,
                            'binX' : 1,
                            'binY' : 10,
                            'fold' : 0
                        }

variables['pt1']        = { 'name': 'Lepton_pt[0]',
                            'range' : (10,0.,200),
                            'xaxis' : 'lept1_p_{T} [GeV]',
                            'doWeight' : 1,
                            'scaleMultiplicativeOverlaid' : 0.001,
                            'binX' : 1,
                            'binY' : 10,
                            'fold' : 0
                        }

variables['dphilmetj'] = {  'name' : 'ZH3l_dphilmetj',
                            'range' : (16,0,3.14159),
                            'xaxis' : 'dphilmetj',
                            'doWeight' : 1,
                            'scaleMultiplicativeOverlaid' : 0.001,
                            'binX' : 1,
                            'binY' : 16,
                            'fold' : 0
                           }

variables['dphilmetjj'] = { 'name' : 'ZH3l_dphilmetjj',
                            'range' : (16,0,3.14159),
                            'xaxis' : 'dphilmetjj',
                            'doWeight' : 1,
                            'scaleMultiplicativeOverlaid' : 0.001,
                            'binX' : 1,
                            'binY' : 16,
                            'fold' : 0,
                            'cuts' : [cut for cut in cuts if '1j' not in cut]
                        }

variables['pTlmetj'] = {    'name' : 'ZH3l_pTlmetj',
                            'range' : (20,0,400),
                            'xaxis' : 'pTlmetj',
                            'doWeight' : 1,
                            'scaleMultiplicativeOverlaid' : 0.001,
                            'binX' : 1,
                            'binY' : 20,
                            'fold' : 0
                            }

variables['pTlmetjj'] = {   'name' : 'ZH3l_pTlmetjj',
                            'range' : (20,0,400),
                            'xaxis' : 'pTlmetjj',
                            'doWeight' : 1,
                            'scaleMultiplicativeOverlaid' : 0.001,
                            'binX' : 1,
                            'binY' : 20,
                            'fold' : 0,
                            'cuts' : [cut for cut in cuts if '1j' not in cut]
                            }

variables['mTlmetjj']   = { 'name' : 'ZH3l_mTlmetjj',
                            'range' : (25,0,500),
                            'xaxis' : 'mTlmetjj',
                            'doWeight' : 1,
                            'scaleMultiplicativeOverlaid' : 0.001,
                            'binX' : 1,
                            'binY' : 25,
                            'fold' : 0,
                            'cuts' : [cut for cut in cuts if '1j' not in cut]
                        }

variables['ptz']        = { 'name' : 'ZH3l_pTZ',
                            'range' : (20,0,400),
                            'xaxis' : 'ptz',
                            'doWeight' : 1,
                            'scaleMultiplicativeOverlaid' : 0.001,
                            'binX' : 1,
                            'binY' : 20,
                            'fold' : 0
                        }

variables['mtw_notZ']   = { 'name' : 'ZH3l_mTlmet',
                            'range' : (20,0,200),
                            'xaxis' : 'mTlmet',
                            'doWeight' : 1,
                            'scaleMultiplicativeOverlaid' : 0.001,
                            'binX' : 1,
                            'binY' : 20,
                            'fold' : 0
                        }

variables['mtw_fit']    = { 'name' : 'ZH3l_mTlmet',
                            'range' : (8,0,160),
                            'xaxis' : 'mTlmet',
                            'doWeight' : 1,
                            'scaleMultiplicativeOverlaid' : 0.001,
                            'binX' : 1,
                            'binY' : 8,
                            'fold' : 2
                        }

variables['checkmZ']    = { 'name' : 'ZH3l_checkmZ',
                            'range' : (20,0,200),
                            'xaxis' : 'checkmZ',
                            'doWeight' : 1,
                            'scaleMultiplicativeOverlaid' : 0.001,
                            'binX' : 1,
                            'binY' : 20,
                            'fold' : 0
                        }

variables['ptjet0']     = { 'name' : 'CleanJet_pt[0]',
                            'range' : (20,0,200),
                            'xaxis' : 'Leading jet p_{T}',
                            'doWeight' : 1,
                            'scaleMultiplicativeOverlaid' : 0.001,
                            'binX' : 1,
                            'binY' : 20,
                            'fold' : 0
                        }

variables['WlepId']     = { 'name' : 'ZH3l_pdgid_l',
                            'range' : (31,-15.5,15.5),
                            'xaxis' : 'W lepton ID',
                            'doWeight' : 1,
                            'scaleMultiplicativeOverlaid' : 0.001,
                            'binX' : 1,
                            'binY' : 31,
                            'fold' : 0
                        }

variables['flavor3l']   = { 'name' : '0*(abs(Lepton_pdgId[0])==13 && abs(Lepton_pdgId[1])==13 & &abs(Lepton_pdgId[2])==13)+ \
                                      1*(abs(Lepton_pdgId[0])==13 && abs(Lepton_pdgId[1])==13 & &abs(Lepton_pdgId[2])==11)+ \
                                      2*(abs(Lepton_pdgId[0])==13 && abs(Lepton_pdgId[1])==11 & &abs(Lepton_pdgId[2])==13)+ \
                                      3*(abs(Lepton_pdgId[0])==11 && abs(Lepton_pdgId[1])==13 & &abs(Lepton_pdgId[2])==13)+ \
                                      4*(abs(Lepton_pdgId[0])==13 && abs(Lepton_pdgId[1])==11 & &abs(Lepton_pdgId[2])==11)+ \
                                      5*(abs(Lepton_pdgId[0])==11 && abs(Lepton_pdgId[1])==13 & &abs(Lepton_pdgId[2])==11)+ \
                                      6*(abs(Lepton_pdgId[0])==11 && abs(Lepton_pdgId[1])==11 & &abs(Lepton_pdgId[2])==13)+ \
                                      7*(abs(Lepton_pdgId[0])==11 && abs(Lepton_pdgId[1])==11 & &abs(Lepton_pdgId[2])==11)',
                            'range' : (8,-0.5,7.5),
                            'xaxis' : 'Trilepton flavor',
                            'doWeight' : 1,
                            'scaleMultiplicativeOverlaid' : 0.001,
                            'binX' : 1,
                            'binY' : 8,
                            'fold' : 0
                        }


