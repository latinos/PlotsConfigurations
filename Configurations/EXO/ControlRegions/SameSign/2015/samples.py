# samples

#samples = {}

#import os.path
#
#massesAndModelsFile = "massesAndModels.py"
#
#if os.path.exists(massesAndModelsFile) :
#  handle = open(massesAndModelsFile,'r')
#  exec(handle)
#  handle.close()
#else:
#  print "!!! ERROR file ", massesAndModelsFile, " does not exist."
#
#for m in masses:
#  for model in models:
#    kp = float(model[6:9])*float(model[6:9])
#    brn = float(model[-3:])
#    sf = kp*(1-brn)
#    print "k' = ", kp," BRnew = ",brn," SF = ",sf
#    model_name = model.replace("cprime","c").replace(".","").replace("BRnew","brn")
#    print model_name
#    samples['ggH_hww_'+m+'_'+model_name] = { 'name': [
#                                             'latino_GluGluHToWWTo2L2Nu_M'+m+'.root'
#                                                  ],
#                                          'weight' : 'metFilter*puW*baseW*bPogSF*effTrigW*std_vector_lepton_idisoW[0]*std_vector_lepton_idisoW[1]*std_vector_lepton_genmatched[0]*std_vector_lepton_genmatched[1]*'+model+"*"+str(sf),
#                                        }
#    samples['qqH_hww_'+m+'_'+model_name] = { 'name': [
#                                             'latino_VBFHToWWTo2L2Nu_M'+m+'.root'
#                                                  ],
#                                          'weight' : 'metFilter*puW*baseW*bPogSF*effTrigW*std_vector_lepton_idisoW[0]*std_vector_lepton_idisoW[1]*std_vector_lepton_genmatched[0]*std_vector_lepton_genmatched[1]*'+model+"*"+str(sf),
#                                        }
#

#samples['ggH_hww_750_NWA'] = { 'name': [
#                                  'latino_GluGluHToWWTo2L2Nu_M750_NWA.root'
#                                   ],
#                          'weight' : 'metFilter*puW*baseW*bPogSF*effTrigW*std_vector_lepton_idisoW[0]*std_vector_lepton_idisoW[1]*std_vector_lepton_genmatched[0]*std_vector_lepton_genmatched[1]',
#                         }
#
#samples['qqH_hww_750_NWA'] = { 'name': [
#                                  'latino_VBFHToWWTo2L2Nu_M750_NWA.root'
#                                   ],
#                          'weight' : 'metFilter*puW*baseW*bPogSF*effTrigW*std_vector_lepton_idisoW[0]*std_vector_lepton_idisoW[1]*std_vector_lepton_genmatched[0]*std_vector_lepton_genmatched[1]',
#                         }

samples['DY'] = { 'name' : [
                            'latino_DYJetsToLL_M-50-LO__part0.root',
                            'latino_DYJetsToLL_M-50-LO__part1.root',
                            #
                            'latino_DYJetsToLL_M-50_HT-100to200_MLM.root',
                            'latino_DYJetsToLL_M-50_HT-200to400_MLM.root',
                            'latino_DYJetsToLL_M-50_HT-400to600_MLM.root',
                            'latino_DYJetsToLL_M-50_HT-600toInf_MLM.root',
                            ],
                   'weight' : 'baseW*metFilter*puW*bPogSF*effTrigW*std_vector_lepton_idisoW[0]*std_vector_lepton_idisoW[1]*std_vector_lepton_genmatched[0]*std_vector_lepton_genmatched[1]*((8.61313e-01+ptll*4.46807e-03-1.52324e-05*ptll*ptll)*(1.08683 * (0.95 - 0.0657370*TMath::Erf((ptll-11.)/5.51582)))*(ptll<140)+1.141996*(ptll>=140))',              #   weight/cut 
                   'weights': [  'std_vector_LHEparton_pt[0]*(std_vector_LHEparton_pt[0]>0)+std_vector_LHEparton_pt[1]*(std_vector_LHEparton_pt[1]>0)+std_vector_LHEparton_pt[2]*(std_vector_LHEparton_pt[2]>0) < 100'
                               , 'std_vector_LHEparton_pt[0]*(std_vector_LHEparton_pt[0]>0)+std_vector_LHEparton_pt[1]*(std_vector_LHEparton_pt[1]>0)+std_vector_LHEparton_pt[2]*(std_vector_LHEparton_pt[2]>0) < 100'
                               #
                               , '1'
                               , '1'
                               , '1'
                               , '1'
                               ] ,

                }

# 0.238112 for DY-10-50
# baseW for DY-50
# 
#  22Jan_25ns_mAODv2_MC DYJetsToLL_M-10to50 : {'nEvt': '22460679.0', 'nTot': '30868739.0', 'nPos': '26664709.0', 'baseW': '0.828559100996', 'nNeg': '4204030.0', 'xs': '18610.0'}
#  22Jan_25ns_mAODv2_MC DYJetsToLL_M-10to50ext3 : {'nEvt': '55695668.0', 'nTot': '76530604.0', 'nPos': '66113136.0', 'baseW': '0.334137297716', 'nNeg': '10417468.0', 'xs': '18610.0'}
#  18610 / (26664709.0 - 4204030.0) * 1000  = 0.828559
#  18610 / (26664709.0 - 4204030.0 + 66113136.0 - 10417468.0) * 1000 = 0.238112
#


#samples['Wjets']  = {    'name': ['latino_WJetsToLNu.root'],     #   file name    
                      #'weight' : 'puW*baseW*bPogSF*effTrigW*std_vector_lepton_idisoW[0]*std_vector_lepton_idisoW[1]*GEN_weight_SM/abs(GEN_weight_SM)',              #   weight/cut 
                      ##'isData': ['0'],                             
                  #}



# data driven
samples['Fake']  = {    'name': [
                       #'../../../../../../../eos/user/a/amassiro/HWW2015/04MarchFake/22Jan_Run2015C_16Dec2015/latino_DD_Run2015C_16Dec2015_DoubleEG.root',
                       #'../../../../../../../eos/user/a/amassiro/HWW2015/04MarchFake/22Jan_Run2015C_16Dec2015/latino_DD_Run2015C_16Dec2015_DoubleMuon.root',
                       #'../../../../../../../eos/user/a/amassiro/HWW2015/04MarchFake/22Jan_Run2015C_16Dec2015/latino_DD_Run2015C_16Dec2015_MuonEG.root',
                       #'../../../../../../../eos/user/a/amassiro/HWW2015/04MarchFake/22Jan_Run2015C_16Dec2015/latino_DD_Run2015C_16Dec2015_SingleElectron.root',
                       #'../../../../../../../eos/user/a/amassiro/HWW2015/04MarchFake/22Jan_Run2015C_16Dec2015/latino_DD_Run2015C_16Dec2015_SingleMuon.root',
                       #'../../../../../../../eos/user/a/amassiro/HWW2015/04MarchFake/22Jan_Run2015D_16Dec2015/latino_DD_Run2015D_16Dec2015_DoubleEG.root',
                       #'../../../../../../../eos/user/a/amassiro/HWW2015/04MarchFake/22Jan_Run2015D_16Dec2015/latino_DD_Run2015D_16Dec2015_DoubleMuon.root',
                       #'../../../../../../../eos/user/a/amassiro/HWW2015/04MarchFake/22Jan_Run2015D_16Dec2015/latino_DD_Run2015D_16Dec2015_MuonEG.root',
                       #'../../../../../../../eos/user/a/amassiro/HWW2015/04MarchFake/22Jan_Run2015D_16Dec2015/latino_DD_Run2015D_16Dec2015_SingleElectron.root',
                       #'../../../../../../../eos/user/a/amassiro/HWW2015/04MarchFake/22Jan_Run2015D_16Dec2015/latino_DD_Run2015D_16Dec2015_SingleMuon.root'
                       # 
                       '../../../../../../user/r/rebeca/HWW2015/03Mar_Run2015C_16Dec2015/l2loose__hadd__EpTCorr__fakeW/latino_DD_Run2015C_16Dec2015_DoubleEG.root',
                       '../../../../../../user/r/rebeca/HWW2015/03Mar_Run2015C_16Dec2015/l2loose__hadd__EpTCorr__fakeW/latino_DD_Run2015C_16Dec2015_DoubleMuon.root',
                       '../../../../../../user/r/rebeca/HWW2015/03Mar_Run2015C_16Dec2015/l2loose__hadd__EpTCorr__fakeW/latino_DD_Run2015C_16Dec2015_MuonEG.root',
                       '../../../../../../user/r/rebeca/HWW2015/03Mar_Run2015C_16Dec2015/l2loose__hadd__EpTCorr__fakeW/latino_DD_Run2015C_16Dec2015_SingleElectron.root',
                       '../../../../../../user/r/rebeca/HWW2015/03Mar_Run2015C_16Dec2015/l2loose__hadd__EpTCorr__fakeW/latino_DD_Run2015C_16Dec2015_SingleMuon.root',
                       '../../../../../../user/r/rebeca/HWW2015/03Mar_Run2015D_16Dec2015/l2loose__hadd__EpTCorr__fakeW/latino_DD_Run2015D_16Dec2015_DoubleEG.root',
                       '../../../../../../user/r/rebeca/HWW2015/03Mar_Run2015D_16Dec2015/l2loose__hadd__EpTCorr__fakeW/latino_DD_Run2015D_16Dec2015_DoubleMuon.root',
                       '../../../../../../user/r/rebeca/HWW2015/03Mar_Run2015D_16Dec2015/l2loose__hadd__EpTCorr__fakeW/latino_DD_Run2015D_16Dec2015_MuonEG.root',
                       '../../../../../../user/r/rebeca/HWW2015/03Mar_Run2015D_16Dec2015/l2loose__hadd__EpTCorr__fakeW/latino_DD_Run2015D_16Dec2015_SingleElectron.root',
                       '../../../../../../user/r/rebeca/HWW2015/03Mar_Run2015D_16Dec2015/l2loose__hadd__EpTCorr__fakeW/latino_DD_Run2015D_16Dec2015_SingleMuon.root'
                       #
                                 ],     
                      'weight' : 'metFilter*trigger*(fakeW2l0j*(njet==0)+fakeW2l1j*(njet==1)+fakeW2l2j*(njet>=2))',              #   weight/cut 
                      'isData': ['all'],                             
                  }

             

samples['top'] = {   'name': [
                          'latino_TTTo2L2Nu.root', 
                          'latino_ST_tW_antitop.root',
                          'latino_ST_tW_top.root'
                          ],          
                       'weight' : 'metFilter*puW*baseW*bPogSF*effTrigW*std_vector_lepton_idisoW[0]*std_vector_lepton_idisoW[1]*std_vector_lepton_genmatched[0]*std_vector_lepton_genmatched[1]',                
                   }


samples['WW']  = {    'name': [
                                  'latino_WWTo2L2Nu.root'
                                ],      
                      'weight' : 'metFilter*nllW*puW*baseW*bPogSF*effTrigW*std_vector_lepton_idisoW[0]*std_vector_lepton_idisoW[1]*std_vector_lepton_genmatched[0]*std_vector_lepton_genmatched[1]',          
                      #'weights': ['abs(nllW)'] ,           
                  }


samples['ggWW']  = {    'name': ['latino_GluGluWWTo2L2Nu_MCFM.root'],      
                      'weight' : 'metFilter*puW*baseW*bPogSF*effTrigW*std_vector_lepton_idisoW[0]*std_vector_lepton_idisoW[1]*std_vector_lepton_genmatched[0]*std_vector_lepton_genmatched[1]',          
                      'weights': ['1.000'] ,           
                      'isData': ['0'],                            
                  }

#samples['ggWW_Int']  = {    'name': ['latino_GluGluWWTo2L2Nu_MCFM.root', 'latino_GluGluWWTo2L2NuHiggs_MCFM.root'],      
                      #'weight' : '1.87*puW*baseW*bPogSF*effTrigW*std_vector_lepton_idisoW[0]*std_vector_lepton_idisoW[1]',          
                      #'weights': ['-1./1.4', '1/1.4'] ,           
                  #}

# during tree production: 1.4 k-factor has been applied to both samples
# ggWW sample: k = 1.4 +/- 15%
# ggWW interference: k = 1.87 +/- 25%


#samples['Vg']  = {    'name': ['latino_Wg_AMCNLOFXFX.root'],      
#                      'weight' : '(njet<2)*metFilter*1.23*puW*baseW*bPogSF*effTrigW*std_vector_lepton_idisoW[0]*std_vector_lepton_idisoW[1]*GEN_weight_SM/abs(GEN_weight_SM)',          
#                      'weights': ['1'] ,           
#                      #'isData': ['0'],                            
#                  }

samples['Vg']  = {    'name': ['latino_Wg_MADGRAPHMLM.root'],
                      'weight' : 'metFilter*1.23*1.45*puW*baseW*bPogSF*effTrigW*std_vector_lepton_idisoW[0]*std_vector_lepton_idisoW[1]',          # 1.45 -> NLO/LO k-factor	1.23 -> ask Sangeun
                      'weights': ['1'] ,           
                  }


samples['VgS']  = {    'name': ['latino_WgStarLNuEE.root', 'latino_WgStarLNuMuMu.root'],      
                      'weight' : 'metFilter*2.0*puW*baseW*bPogSF*effTrigW*std_vector_lepton_idisoW[0]*std_vector_lepton_idisoW[1]*std_vector_lepton_genmatched[0]*std_vector_lepton_genmatched[1]*GEN_weight_SM/abs(GEN_weight_SM)',
                      'weights': ['1','1'] ,           
                  }

samples['VZ']  = {    'name': [
                          'latino_WZTo3LNu.root', 
                          #'latino_ZZ.root',  ---> replaced by inclusive samples
                          'latino_ZZTo2L2Nu.root', #  ---->  NEEDED FIXME
                          #'latino_ZZTo2L2Q.root'
                          'latino_ZZTo4L.root'
                         ], 
                      'weight' : 'metFilter*puW*baseW*bPogSF*effTrigW*std_vector_lepton_idisoW[0]*std_vector_lepton_idisoW[1]*std_vector_lepton_genmatched[0]*std_vector_lepton_genmatched[1]',          
                      #'weights': ['1'] ,           
                      #'isData': ['0'],                            
                  }


samples['VVV'] = {    'name': [
                          'latino_WZZ.root', 
                          #'latino_ZZZ.root'
                          #'latino_WWW.root'
                          #'latino_WWZ.root'
                          ],      
                      'weight' : 'metFilter*puW*baseW*bPogSF*effTrigW*std_vector_lepton_idisoW[0]*std_vector_lepton_idisoW[1]*GEN_weight_SM/abs(GEN_weight_SM)*std_vector_lepton_genmatched[0]*std_vector_lepton_genmatched[1]',          
                      #'isData': ['0'],                            
                  }


###########################################
###########################################
###########################################

#samples['DATA']  = {   'name': [
#                                '../../../../../r/rebeca/HWW2015/03Mar_Run2015C_16Dec2015/l2loose__hadd__EpTCorr__l2tight__wwSel/latino_Run2015C_16Dec2015_DoubleEG.root',
#                                '../../../../../r/rebeca/HWW2015/03Mar_Run2015C_16Dec2015/l2loose__hadd__EpTCorr__l2tight__wwSel/latino_Run2015C_16Dec2015_DoubleMuon.root',
#                                '../../../../../r/rebeca/HWW2015/03Mar_Run2015C_16Dec2015/l2loose__hadd__EpTCorr__l2tight__wwSel/latino_Run2015C_16Dec2015_MuonEG.root',
#                                '../../../../../r/rebeca/HWW2015/03Mar_Run2015C_16Dec2015/l2loose__hadd__EpTCorr__l2tight__wwSel/latino_Run2015C_16Dec2015_SingleElectron.root',
#                                '../../../../../r/rebeca/HWW2015/03Mar_Run2015C_16Dec2015/l2loose__hadd__EpTCorr__l2tight__wwSel/latino_Run2015C_16Dec2015_SingleMuon.root',
#                                '../../../../../r/rebeca/HWW2015/03Mar_Run2015D_16Dec2015/l2loose__hadd__EpTCorr__l2tight__wwSel/latino_Run2015D_16Dec2015_DoubleEG.root',
#                                '../../../../../r/rebeca/HWW2015/03Mar_Run2015D_16Dec2015/l2loose__hadd__EpTCorr__l2tight__wwSel/latino_Run2015D_16Dec2015_DoubleMuon.root',
#                                '../../../../../r/rebeca/HWW2015/03Mar_Run2015D_16Dec2015/l2loose__hadd__EpTCorr__l2tight__wwSel/latino_Run2015D_16Dec2015_MuonEG.root',
#                                '../../../../../r/rebeca/HWW2015/03Mar_Run2015D_16Dec2015/l2loose__hadd__EpTCorr__l2tight__wwSel/latino_Run2015D_16Dec2015_SingleElectron.root',
#                                '../../../../../r/rebeca/HWW2015/03Mar_Run2015D_16Dec2015/l2loose__hadd__EpTCorr__l2tight__wwSel/latino_Run2015D_16Dec2015_SingleMuon.root',
#                                ] ,     
#                       'weight' : 'trigger*metFilter',
#                       'isData': ['all'],                            
#                  }
samples['DATA']  = {   'name': [
                                '../../../../../r/rebeca/HWW2015/03Mar_Run2015C_16Dec2015/l2loose__hadd__EpTCorr__l2tight/latino_Run2015C_16Dec2015_DoubleEG.root',
                                '../../../../../r/rebeca/HWW2015/03Mar_Run2015C_16Dec2015/l2loose__hadd__EpTCorr__l2tight/latino_Run2015C_16Dec2015_DoubleMuon.root',
                                '../../../../../r/rebeca/HWW2015/03Mar_Run2015C_16Dec2015/l2loose__hadd__EpTCorr__l2tight/latino_Run2015C_16Dec2015_MuonEG.root',
                                '../../../../../r/rebeca/HWW2015/03Mar_Run2015C_16Dec2015/l2loose__hadd__EpTCorr__l2tight/latino_Run2015C_16Dec2015_SingleElectron.root',
                                '../../../../../r/rebeca/HWW2015/03Mar_Run2015C_16Dec2015/l2loose__hadd__EpTCorr__l2tight/latino_Run2015C_16Dec2015_SingleMuon.root',
                                '../../../../../r/rebeca/HWW2015/03Mar_Run2015D_16Dec2015/l2loose__hadd__EpTCorr__l2tight/latino_Run2015D_16Dec2015_DoubleEG.root',
                                '../../../../../r/rebeca/HWW2015/03Mar_Run2015D_16Dec2015/l2loose__hadd__EpTCorr__l2tight/latino_Run2015D_16Dec2015_DoubleMuon.root',
                                '../../../../../r/rebeca/HWW2015/03Mar_Run2015D_16Dec2015/l2loose__hadd__EpTCorr__l2tight/latino_Run2015D_16Dec2015_MuonEG.root',
                                '../../../../../r/rebeca/HWW2015/03Mar_Run2015D_16Dec2015/l2loose__hadd__EpTCorr__l2tight/latino_Run2015D_16Dec2015_SingleElectron.root',
                                '../../../../../r/rebeca/HWW2015/03Mar_Run2015D_16Dec2015/l2loose__hadd__EpTCorr__l2tight/latino_Run2015D_16Dec2015_SingleMuon.root',
                                ] ,
                       'weight' : 'trigger',
                       'isData': ['all'],
                  }




