# samples

#samples = {}

samples['Wg']  = {    'name': ['latino_Wg_AMCNLOFXFX.root'],      
                      'weight' : 'metFilter*puW*baseW*bPogSF*effTrigW*std_vector_lepton_idisoW[0]*std_vector_lepton_idisoW[1]*GEN_weight_SM/abs(GEN_weight_SM)\
                                  *(std_vector_leptonGen_pt[2]<10)',          
                      'weights': ['1'] ,           
                      #'isData': ['0'],                            
                  }



samples['WgS']  = {    'name': ['latino_WgStarLNuEE.root', 'latino_WgStarLNuMuMu.root'],      
                      'weight' : 'metFilter*puW*baseW*bPogSF*effTrigW*std_vector_lepton_idisoW[0]*std_vector_lepton_idisoW[1]*GEN_weight_SM/abs(GEN_weight_SM)',
                      'weights': ['1','1'] ,           
                  }


samples['VZ']  = {    'name': [
                          'latino_WZTo3LNu.root', 
                          #'latino_ZZ.root',  ---> replaced by inclusive samples
                          'latino_ZZTo2L2Nu.root', #  ---->  NEEDED FIXME
                          #'latino_ZZTo2L2Q.root'
                          'latino_ZZTo4L.root'
                         ], 
                      'weight' : 'metFilter*puW*baseW*bPogSF*effTrigW*std_vector_lepton_idisoW[0]*std_vector_lepton_idisoW[1]',          
                      #'weights': ['1'] ,           
                      #'isData': ['0'],                            
                  }


###########################################
###########################################
###########################################

samples['DATA']  = {   'name': [
                                '../../03Mar_Run2015C_16Dec2015/l2loose__hadd__EpTCorr__l2tight__wwSel/latino_Run2015C_16Dec2015_DoubleEG.root',
                                '../../03Mar_Run2015C_16Dec2015/l2loose__hadd__EpTCorr__l2tight__wwSel/latino_Run2015C_16Dec2015_DoubleMuon.root',
                                '../../03Mar_Run2015C_16Dec2015/l2loose__hadd__EpTCorr__l2tight__wwSel/latino_Run2015C_16Dec2015_MuonEG.root',
                                '../../03Mar_Run2015C_16Dec2015/l2loose__hadd__EpTCorr__l2tight__wwSel/latino_Run2015C_16Dec2015_SingleElectron.root',
                                '../../03Mar_Run2015C_16Dec2015/l2loose__hadd__EpTCorr__l2tight__wwSel/latino_Run2015C_16Dec2015_SingleMuon.root',
                                '../../03Mar_Run2015D_16Dec2015/l2loose__hadd__EpTCorr__l2tight__wwSel/latino_Run2015D_16Dec2015_DoubleEG.root',
                                '../../03Mar_Run2015D_16Dec2015/l2loose__hadd__EpTCorr__l2tight__wwSel/latino_Run2015D_16Dec2015_DoubleMuon.root',
                                '../../03Mar_Run2015D_16Dec2015/l2loose__hadd__EpTCorr__l2tight__wwSel/latino_Run2015D_16Dec2015_MuonEG.root',
                                '../../03Mar_Run2015D_16Dec2015/l2loose__hadd__EpTCorr__l2tight__wwSel/latino_Run2015D_16Dec2015_SingleElectron.root',
                                '../../03Mar_Run2015D_16Dec2015/l2loose__hadd__EpTCorr__l2tight__wwSel/latino_Run2015D_16Dec2015_SingleMuon.root',
                                ] ,     
                       'weight' : 'trigger*metFilter',
                       'isData': ['all'],                            
                  }




