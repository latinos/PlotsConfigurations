# variables

#variables = {}
    
#'fold' : # 0 = not fold (default), 1 = fold underflowbin, 2 = fold overflow bin, 3 = fold underflow and overflow
# The following is needed if combining plots between years:
#'doWeight' : 1
#'binX' : 1 
#'binY' : <# of bins>
   
variables['events']     = { 'name': '1',      
                            'range' : (1,0,2),  
                            'xaxis' : 'events', 
                            'fold' : 3
                        }

variables['njet']       = { 'name'  : 'ZH3l_njet',
                            'range' : (10,0,10),
                            'xaxis' : 'N_{jet}',
                            'fold' : 0
                        }

variables['met']       = { 'name'  : 'PuppiMET_pt',
                            'range' : (20,0,100),
                            'xaxis' : 'Puppi MET',
                            'fold' : 0
                        }

variables['pt1']        = { 'name': 'Lepton_pt[0]',
                            'range' : (10,0.,200),
                            'xaxis' : 'lept1_p_{T} [GeV]',
                            'fold' : 0
                        }

variables['dphilmetj'] = {  'name' : 'ZH3l_dphilmetj_test[0]', #FIXME
                            'range' : (16,0,3.14159),
                            'xaxis' : 'dphilmetj',
                            'fold' : 0
                           }

variables['dphilmetjj'] = { 'name' : 'ZH3l_dphilmetjj_test[0]', #FIXME
                            'range' : (16,0,3.14159),
                            'xaxis' : 'dphilmetjj',
                            'fold' : 0,
                            'cuts' : [cut for cut in cuts if '1j' not in cut]
                        }

variables['pTlmetj'] = {    'name' : 'ZH3l_pTlmetj',
                            'range' : (20,0,400),
                            'xaxis' : 'pTlmetj',
                            'fold' : 0
                            }

variables['pTlmetjj'] = {   'name' : 'ZH3l_pTlmetjj',
                            'range' : (20,0,400),
                            'xaxis' : 'pTlmetjj',
                            'fold' : 0,
                            'cuts' : [cut for cut in cuts if '1j' not in cut]
                            }

variables['mTlmetjj']   = { 'name' : 'ZH3l_mTlmetjj_test[0]', #FIXME
                            'range' : (16,50,450),
                            'xaxis' : 'mTlmetjj',
                            'fold' : 3,
                            'cuts' : [cut for cut in cuts if '1j' not in cut]
                        }

variables['mTlmetj']   = { 'name' : 'ZH3l_mTlmetj_test[0]', #FIXME
                            'range' : (10,0,250),
                            'xaxis' : 'mTlmetj',
                            'fold' : 2,
                        }

variables['ptz']        = { 'name' : 'ZH3l_pTZ',
                            'range' : (20,0,400),
                            'xaxis' : 'ptz',
                            'fold' : 0
                        }

variables['mtw_notZ']   = { 'name' : 'ZH3l_mTlmet_test[0]', #FIXME
                            'range' : (20,0,200),
                            'xaxis' : 'mTlmet',
                            'fold' : 0
                        }

variables['mtw_fit']    = { 'name' : 'ZH3l_mTlmet_test[0]', #FIXME
                            'range' : (8,0,160),
                            'xaxis' : 'mTlmet',
                            'fold' : 2
                        }

variables['checkmZ']    = { 'name' : 'ZH3l_checkmZ',
                            'range' : (20,0,200),
                            'xaxis' : 'checkmZ',
                            'fold' : 0
                        }

variables['ptjet0']     = { 'name' : 'CleanJet_pt[0]',
                            'range' : (20,0,200),
                            'xaxis' : 'Leading jet p_{T}',
                            'fold' : 0
                        }

variables['ptjet1']     = { 'name' : 'CleanJet_pt[1]',
                            'range' : (20,0,200),
                            'xaxis' : 'Subleading jet p_{T}',
                            'cuts' : [cut for cut in cuts if '1j' not in cut],
                            'fold' : 0
                        }

variables['WlepId']     = { 'name' : 'ZH3l_pdgid_l',
                            'range' : (31,-15.5,15.5),
                            'xaxis' : 'W lepton ID',
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
                            'fold' : 0
                        }

