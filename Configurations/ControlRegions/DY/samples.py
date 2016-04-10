# samples

#samples = {}

#samples['DY']  = {    'name': [
                            ##'latino_DYJetsToLL_M-10to50.root',
                            ##'latino_DYJetsToLL_M-10to50ext3.root',
                            ##
                            #'latino_DYJetsToLL_M-50_0000__part0.root',
                            ##'latino_DYJetsToLL_M-50_0000__part1.root',
                            ##'latino_DYJetsToLL_M-50_0000__part2.root',
                            ##'latino_DYJetsToLL_M-50_0000__part3.root',
                            ##'latino_DYJetsToLL_M-50_0000__part4.root',
                            ##'latino_DYJetsToLL_M-50_0001__part0.root',
                            ##'latino_DYJetsToLL_M-50_0001__part1.root',
                            #'latino_DYJetsToLL_M-50_0001__part2.root',
                            #'latino_DYJetsToLL_M-50_0001__part3.root',
                            ##'latino_DYJetsToLL_M-50_0001__part4.root',
                            ##'latino_DYJetsToLL_M-50_0002__part0.root'
                            ##
                            #],    
                      #'weight' : 'puW*bPogSF*effTrigW*std_vector_lepton_idisoW[0]*std_vector_lepton_idisoW[1]*GEN_weight_SM/abs(GEN_weight_SM)',              #   weight/cut 
                      ##'isData': ['0', '0'],      
                      #'weights': [ 
                                    ##'0.238112'
                                  ##, '0.238112'
                                  ##, 'baseW'
                                  ##, 'baseW'
                                  ##, 'baseW'
                                  ##, 'baseW'
                                  ##, 'baseW'
                                  ##, 'baseW'
                                  ##, 'baseW'
                                  ##, 'baseW'
                                  ##, 'baseW'
                                  ##, 'baseW'
                                  ##, 'baseW'
                                  ##'3.139345'
                                  #'1.04763130166',
                                  #'1.04763130166',
                                  #'1.04763130166'
                                  #] ,           
                  #}

#
# normalizzazione globale uguale a 0.920, ho applicato i seguenti SF:
#- 10<pt2<20 GeV: 0.931
#- 40<pt2<100 GeV: 1.025
#
# above 40 GeV:   1.025 * 0.920 = 0.943
#    -> sqrt(0.943) = 0.971082  per leg
# plus
#  10-20:     0.920 / 0.971082 * 0.931 = 0.882026 per leg, infact 0.882026 * 0.971082 = 0.920*0.931 = 0.856520
#  20-40:     0.920 --> 0.920 / 0.971082 = 0.947397 per leg, infact 0.947397 * 0.971082 = 0.920 !
#  40-inf:    0.971082
# 
# to summarize:
#   10-20:    0.882026 
#   20-40:    0.947397
#   40-inf:   0.971082
#

#((std_vector_lepton_flavour[0] == 11)* (
#0.882026*(std_vector_lepton_pt[0]<20)+
#0.947397*(std_vector_lepton_pt[0]<40 && std_vector_lepton_pt[0]>=20)+
#0.971082*(std_vector_lepton_pt[0]>=40)
#)
#+(std_vector_lepton_flavour[0] == 13))

#((std_vector_lepton_flavour[0] == 11)* (0.882026*(std_vector_lepton_pt[0]<20)+0.947397*(std_vector_lepton_pt[0]<40 && std_vector_lepton_pt[0]>=20)+0.971082*(std_vector_lepton_pt[0]>=40))+(std_vector_lepton_flavour[0] == 13))*((std_vector_lepton_flavour[1] == 11)* (0.882026*(std_vector_lepton_pt[1]<20)+0.947397*(std_vector_lepton_pt[1]<40 && std_vector_lepton_pt[1]>=20)+0.971082*(std_vector_lepton_pt[1]>=40))+(std_vector_lepton_flavour[1] == 13))


samples['DY']  = {    'name': [
                            #'latino_DYJetsToLL_M-10to50.root',
                            #'latino_DYJetsToLL_M-10to50ext3.root',
                            #
                            #'latino_DYJetsToLL_M-50_0000__part0_genVar.root'
                            'latino_DYJetsToLL_M-50_0000__part0.root',
                            'latino_DYJetsToLL_M-50_0000__part1.root',
                            'latino_DYJetsToLL_M-50_0000__part2.root',
                            'latino_DYJetsToLL_M-50_0000__part3.root',
                            'latino_DYJetsToLL_M-50_0000__part4.root',
                            'latino_DYJetsToLL_M-50_0001__part0.root',
                            'latino_DYJetsToLL_M-50_0001__part1.root',
                            'latino_DYJetsToLL_M-50_0001__part2.root',
                            'latino_DYJetsToLL_M-50_0001__part3.root',
                            'latino_DYJetsToLL_M-50_0001__part4.root',
                            'latino_DYJetsToLL_M-50_0002__part0.root'
                            #
                            ],    
                      #'weight' : 'puW*bPogSF*effTrigW*std_vector_lepton_idisoW[0]*std_vector_lepton_idisoW[1]*GEN_weight_SM/abs(GEN_weight_SM)',              #   weight/cut 
                      #'weight' : '0.9*puW*bPogSF*effTrigW*std_vector_lepton_idisoW[0]*std_vector_lepton_idisoW[1]*GEN_weight_SM/abs(GEN_weight_SM)',              #   weight/cut 
                      #'weight' : 'puW*bPogSF*effTrigW_SnglEle*std_vector_lepton_idisoW[0]*std_vector_lepton_idisoW[1]*GEN_weight_SM/abs(GEN_weight_SM)',              #   weight/cut 
                      #'weight' : 'puW*bPogSF*effTrigW_SnglEle/std_vector_lepton_idisoW[0]/std_vector_lepton_idisoW[1]*GEN_weight_SM/abs(GEN_weight_SM)',              #   weight/cut 
                      #'weight' : 'puW*bPogSF*effTrigW_SnglEle*GEN_weight_SM/abs(GEN_weight_SM)',              #   weight/cut 
                      #'weight' : 'puW*bPogSF*effTrigW_SnglEle*std_vector_lepton_idisoW[0]*std_vector_lepton_recoW[0]*std_vector_lepton_idisoW[1]*std_vector_lepton_recoW[1]*GEN_weight_SM/abs(GEN_weight_SM)  \
                      #'weight' : 'puW*bPogSF*effTrigW*std_vector_lepton_idisoW[0]*std_vector_lepton_idisoW[1]*GEN_weight_SM/abs(GEN_weight_SM)',
                                  #*((abs(std_vector_lepton_flavour[0]) == 11)* (0.882026*(std_vector_lepton_pt[0]<20)+0.947397*(std_vector_lepton_pt[0]<40 && std_vector_lepton_pt[0]>=20)+0.971082*(std_vector_lepton_pt[0]>=40))+(abs(std_vector_lepton_flavour[0]) == 13))*((abs(std_vector_lepton_flavour[1]) == 11)* (0.882026*(std_vector_lepton_pt[1]<20)+0.947397*(std_vector_lepton_pt[1]<40 && std_vector_lepton_pt[1]>=20)+0.971082*(std_vector_lepton_pt[1]>=40))+(abs(std_vector_lepton_flavour[1]) == 13))',              #   weight/cut 
                      #'weight' : '(0.95 - 0.1*TMath::Erf((ptll-14)/8.8))*puW*bPogSF*effTrigW*std_vector_lepton_idisoW[0]*std_vector_lepton_idisoW[1]*GEN_weight_SM/abs(GEN_weight_SM)',                    
                      #'weight' : '(0.95 - 0.1*TMath::Erf((gen_ptll-14)/8.8))*puW*bPogSF*effTrigW*std_vector_lepton_idisoW[0]*std_vector_lepton_idisoW[1]*GEN_weight_SM/abs(GEN_weight_SM)',  
                      
                      'weight' : '(1.02852 - 0.0949640*TMath::Erf((gen_ptll-19.0422)/10.4487) + 0.0758834*TMath::Erf((gen_ptll-56.1146)/41.1653))*puW*bPogSF*effTrigW*std_vector_lepton_idisoW[0]*std_vector_lepton_idisoW[1]*GEN_weight_SM/abs(GEN_weight_SM)',  
                     #'isData': ['0', '0'],      
                      'weights': [ 
                                    #'0.238112'
                                  #, '0.238112'
                                    'baseW'
                                  , 'baseW'
                                  , 'baseW'
                                  , 'baseW'
                                  , 'baseW'
                                  , 'baseW'
                                  , 'baseW'
                                  , 'baseW'
                                  , 'baseW'
                                  , 'baseW'
                                  , 'baseW'
                                  #'3.139345'
                                  #'1.04763130166',
                                  #'1.04763130166',
                                  #'1.04763130166'
                                  ] ,           
                  }



samples['DYfixData']  = {    'name': [
                            #
                            'latino_DYJetsToLL_M-50_0000__part0.root',
                            'latino_DYJetsToLL_M-50_0000__part1.root',
                            'latino_DYJetsToLL_M-50_0000__part2.root',
                            'latino_DYJetsToLL_M-50_0000__part3.root',
                            'latino_DYJetsToLL_M-50_0000__part4.root',
                            'latino_DYJetsToLL_M-50_0001__part0.root',
                            'latino_DYJetsToLL_M-50_0001__part1.root',
                            'latino_DYJetsToLL_M-50_0001__part2.root',
                            'latino_DYJetsToLL_M-50_0001__part3.root',
                            'latino_DYJetsToLL_M-50_0001__part4.root',
                            'latino_DYJetsToLL_M-50_0002__part0.root'
                            #
                            ],    
                      'weight' : '(0.95 - 0.1*TMath::Erf((gen_ptll-14)/8.8))*puW*bPogSF*effTrigW*std_vector_lepton_idisoW[0]*std_vector_lepton_idisoW[1]*GEN_weight_SM/abs(GEN_weight_SM)',  
                      'weights': [ 
                                    'baseW'
                                  , 'baseW'
                                  , 'baseW'
                                  , 'baseW'
                                  , 'baseW'
                                  , 'baseW'
                                  , 'baseW'
                                  , 'baseW'
                                  , 'baseW'
                                  , 'baseW'
                                  , 'baseW'
                                  ] ,           
                  }



samples['DYnoFix']  = {    'name': [
                            'latino_DYJetsToLL_M-50_0000__part0.root',
                            'latino_DYJetsToLL_M-50_0000__part1.root',
                            'latino_DYJetsToLL_M-50_0000__part2.root',
                            'latino_DYJetsToLL_M-50_0000__part3.root',
                            'latino_DYJetsToLL_M-50_0000__part4.root',
                            'latino_DYJetsToLL_M-50_0001__part0.root',
                            'latino_DYJetsToLL_M-50_0001__part1.root',
                            'latino_DYJetsToLL_M-50_0001__part2.root',
                            'latino_DYJetsToLL_M-50_0001__part3.root',
                            'latino_DYJetsToLL_M-50_0001__part4.root',
                            'latino_DYJetsToLL_M-50_0002__part0.root'
                            ],    
                      'weight' : 'puW*bPogSF*effTrigW*std_vector_lepton_idisoW[0]*std_vector_lepton_idisoW[1]*GEN_weight_SM/abs(GEN_weight_SM)',  
                      'weights': [ 
                                    'baseW'
                                  , 'baseW'
                                  , 'baseW'
                                  , 'baseW'
                                  , 'baseW'
                                  , 'baseW'
                                  , 'baseW'
                                  , 'baseW'
                                  , 'baseW'
                                  , 'baseW'
                                  , 'baseW'
                                  ] ,           
                  }
                      

#samples['DYnoFixVar1']  = {    'name': [
                            #'latino_DYJetsToLL_M-50_0000__part0_genVar.root'
                            #],    
                      #'weight' : 'puW*bPogSF*effTrigW*std_vector_lepton_idisoW[0]*std_vector_lepton_idisoW[1]*GEN_weight_SM/abs(GEN_weight_SM)*std_vector_LHE_weight[1]/std_vector_LHE_weight[0]',  
                      #'weights': [ 
                                    #'baseW'
                                  #] ,           
                  #}
                      

#samples['DYnoFixVar2']  = {    'name': [
                            #'latino_DYJetsToLL_M-50_0000__part0_genVar.root'
                            #],    
                      #'weight' : 'puW*bPogSF*effTrigW*std_vector_lepton_idisoW[0]*std_vector_lepton_idisoW[1]*GEN_weight_SM/abs(GEN_weight_SM)*std_vector_LHE_weight[2]/std_vector_LHE_weight[0]',  
                      #'weights': [ 
                                    #'baseW'
                                  #] ,           
                  #}

#samples['DYnoFixVar3']  = {    'name': [
                            #'latino_DYJetsToLL_M-50_0000__part0_genVar.root'
                            #],    
                      #'weight' : 'puW*bPogSF*effTrigW*std_vector_lepton_idisoW[0]*std_vector_lepton_idisoW[1]*GEN_weight_SM/abs(GEN_weight_SM)*std_vector_LHE_weight[3]/std_vector_LHE_weight[0]',  
                      #'weights': [ 
                                    #'baseW'
                                  #] ,           
                  #}

#samples['DYnoFixVar4']  = {    'name': [
                            #'latino_DYJetsToLL_M-50_0000__part0_genVar.root'
                            #],    
                      #'weight' : 'puW*bPogSF*effTrigW*std_vector_lepton_idisoW[0]*std_vector_lepton_idisoW[1]*GEN_weight_SM/abs(GEN_weight_SM)*std_vector_LHE_weight[4]/std_vector_LHE_weight[0]',  
                      #'weights': [ 
                                    #'baseW'
                                  #] ,           
                  #}

#samples['DYnoFixVar5']  = {    'name': [
                            #'latino_DYJetsToLL_M-50_0000__part0_genVar.root'
                            #],    
                      #'weight' : 'puW*bPogSF*effTrigW*std_vector_lepton_idisoW[0]*std_vector_lepton_idisoW[1]*GEN_weight_SM/abs(GEN_weight_SM)*std_vector_LHE_weight[5]/std_vector_LHE_weight[0]',  
                      #'weights': [ 
                                    #'baseW'
                                  #] ,           
                  #}

#samples['DYnoFixVar6']  = {    'name': [
                            #'latino_DYJetsToLL_M-50_0000__part0_genVar.root'
                            #],    
                      #'weight' : 'puW*bPogSF*effTrigW*std_vector_lepton_idisoW[0]*std_vector_lepton_idisoW[1]*GEN_weight_SM/abs(GEN_weight_SM)*std_vector_LHE_weight[6]/std_vector_LHE_weight[0]',  
                      #'weights': [ 
                                    #'baseW'
                                  #] ,           
                  #}

#samples['DYnoFixVar7']  = {    'name': [
                            #'latino_DYJetsToLL_M-50_0000__part0_genVar.root'
                            #],    
                      #'weight' : 'puW*bPogSF*effTrigW*std_vector_lepton_idisoW[0]*std_vector_lepton_idisoW[1]*GEN_weight_SM/abs(GEN_weight_SM)*std_vector_LHE_weight[7]/std_vector_LHE_weight[0]',  
                      #'weights': [ 
                                    #'baseW'
                                  #] ,           
                  #}

#samples['DYnoFixVar8']  = {    'name': [
                            #'latino_DYJetsToLL_M-50_0000__part0_genVar.root'
                            #],    
                      #'weight' : 'puW*bPogSF*effTrigW*std_vector_lepton_idisoW[0]*std_vector_lepton_idisoW[1]*GEN_weight_SM/abs(GEN_weight_SM)*std_vector_LHE_weight[8]/std_vector_LHE_weight[0]',  
                      #'weights': [ 
                                    #'baseW'
                                  #] ,           
                  #}

                      

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




samples['DYLO']  = {    'name': [
                            #'latino_DYJetsToLL_M-10to50.root',
                            #'latino_DYJetsToLL_M-10to50ext3.root',
                            #
                            'latino_DYJetsToLL_M-50-LO__part1.root',
                            'latino_DYJetsToLL_M-50-LO__part0.root',
                            #
                            ],    
                      'weight' : 'baseW*puW*bPogSF*effTrigW*std_vector_lepton_idisoW[0]*std_vector_lepton_idisoW[1]*GEN_weight_SM/abs(GEN_weight_SM)',
                  }



# data driven
#samples['Fake']  = {    'name': [
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
                                 #],     
                      #'weight' : 'trigger*(fakeW2l0j*(njet==0)+fakeW2l1j*(njet==1)+fakeW2l2j*(njet>=2))',              #   weight/cut 
                      #'isData': ['all'],                             
                  #}

             

#samples['top'] = {   'name': [
                          #'latino_TTTo2L2Nu.root', 
                          #'latino_ST_tW_antitop.root',
                          #'latino_ST_tW_top.root'
                          #],          
                       #'weight' : 'puW*baseW*bPogSF*effTrigW*std_vector_lepton_idisoW[0]*std_vector_lepton_idisoW[1]',
                                  ##*((abs(std_vector_lepton_flavour[0]) == 11)* (0.882026*(std_vector_lepton_pt[0]<20)+0.947397*(std_vector_lepton_pt[0]<40 && std_vector_lepton_pt[0]>=20)+0.971082*(std_vector_lepton_pt[0]>=40))+(abs(std_vector_lepton_flavour[0]) == 13))*((abs(std_vector_lepton_flavour[1]) == 11)* (0.882026*(std_vector_lepton_pt[1]<20)+0.947397*(std_vector_lepton_pt[1]<40 && std_vector_lepton_pt[1]>=20)+0.971082*(std_vector_lepton_pt[1]>=40))+(abs(std_vector_lepton_flavour[1]) == 13))',              #   weight/cut 
                   #}


#samples['WW']  = {    'name': [
                                  #'latino_WWTo2L2Nu.root'
                                #],      
                      #'weight' : 'nllW*puW*baseW*bPogSF*effTrigW*std_vector_lepton_idisoW[0]*std_vector_lepton_idisoW[1]'
                                  ##*((abs(std_vector_lepton_flavour[0]) == 11)* (0.882026*(std_vector_lepton_pt[0]<20)+0.947397*(std_vector_lepton_pt[0]<40 && std_vector_lepton_pt[0]>=20)+0.971082*(std_vector_lepton_pt[0]>=40))+(abs(std_vector_lepton_flavour[0]) == 13))*((abs(std_vector_lepton_flavour[1]) == 11)* (0.882026*(std_vector_lepton_pt[1]<20)+0.947397*(std_vector_lepton_pt[1]<40 && std_vector_lepton_pt[1]>=20)+0.971082*(std_vector_lepton_pt[1]>=40))+(abs(std_vector_lepton_flavour[1]) == 13))',              #   weight/cut 
                      ##'weights': ['abs(nllW)'] ,           
                  #}


#samples['ggWW']  = {    'name': ['latino_GluGluWWTo2L2Nu_MCFM.root'],      
                      #'weight' : 'puW*baseW*bPogSF*effTrigW*std_vector_lepton_idisoW[0]*std_vector_lepton_idisoW[1]',          
                      #'weights': ['abs(nllW)'] ,           
                      #'weights': ['1.000'] ,           
                      #'isData': ['0'],                            
                  #}

#samples['ggWW_Int']  = {    'name': ['latino_GluGluWWTo2L2Nu_MCFM.root', 'latino_GluGluWWTo2L2NuHiggs_MCFM.root'],      
                      #'weight' : '1.87*puW*baseW*bPogSF*effTrigW*std_vector_lepton_idisoW[0]*std_vector_lepton_idisoW[1]',          
                      #'weights': ['-1./1.4', '1/1.4'] ,           
                  #}

## during tree production: 1.4 k-factor has been applied to both samples
## ggWW sample: k = 1.4 +/- 15%
## ggWW interference: k = 1.87 +/- 25%



#samples['Wg']  = {    'name': ['latino_Wg_AMCNLOFXFX.root'],      
                      #'weight' : '1.2*puW*baseW*bPogSF*effTrigW*std_vector_lepton_idisoW[0]*std_vector_lepton_idisoW[1]*GEN_weight_SM/abs(GEN_weight_SM)',          
                      ##'weights': ['1'] ,           
                      ##'isData': ['0'],                            
                  #}


#samples['VZ']  = {    'name': [
                          #'latino_WZTo3LNu.root', 
                          ##'latino_ZZ.root',  ---> replaced by inclusive samples
                          #'latino_ZZTo2L2Nu.root',
                          ##'latino_ZZTo2L2Q.root'
                          #'latino_ZZTo4L.root'
                         #], 
                      #'weight' : 'puW*baseW*bPogSF*effTrigW*std_vector_lepton_idisoW[0]*std_vector_lepton_idisoW[1]',          
                      ##'weights': ['1'] ,           
                      ##'isData': ['0'],                            
                  #}


#samples['VVV'] = {    'name': [
                          #'latino_WZZ.root', 
                          ##'latino_ZZZ.root'
                          ##'latino_WWW.root'
                          ##'latino_WWZ.root'
                          #],      
                      #'weight' : 'puW*baseW*bPogSF*effTrigW*std_vector_lepton_idisoW[0]*std_vector_lepton_idisoW[1]*GEN_weight_SM/abs(GEN_weight_SM)',          
                      ##'isData': ['0'],                            
                  #}


## Htautau
#samples['H_htt']  = {      'name': ['latino_GluGluHToTauTau_M125.root',
                                    #'latino_VBFHToTauTau_M125.root',
                                    #'latino_HWminusJ_HToTauTau_M125.root',
                                    #'latino_HWplusJ_HToTauTau_M125.root',
                                    #'latino_HZJ_HToTauTau_M125.root'
                                    #],      
                           #'weight' : 'puW*baseW*bPogSF*effTrigW*std_vector_lepton_idisoW[0]*std_vector_lepton_idisoW[1]',          
                           #'weights': ['1', '1', 'GEN_weight_SM/abs(GEN_weight_SM)', 'GEN_weight_SM/abs(GEN_weight_SM)', 'GEN_weight_SM/abs(GEN_weight_SM)' ]            
                  #}



## HWW 

#samples['ggH_hww']  = {    'name': [
                               #'latino_GluGluHToWWTo2L2NuPowheg_M125.root'
                               ##'latino_GluGluHToWWTo2L2Nu_M125.root'
                               ##'latino_GluGluHToWWTo2L2Nu_alternative_M125.root'  --> 500k events
                               #],      
                           #'weight' : 'puW*baseW*bPogSF*effTrigW*std_vector_lepton_idisoW[0]*std_vector_lepton_idisoW[1]',          
                  #}

#samples['qqH_hww']  = {    'name': ['latino_VBFHToWWTo2L2Nu_M125.root'],      
                           #'weight' : 'puW*baseW*bPogSF*effTrigW*std_vector_lepton_idisoW[0]*std_vector_lepton_idisoW[1]',          
                  #}

#samples['ggZH_hww']  = {    'name': [
                               #'latino_ggZH_HToWW_M125.root',
                               #],      
                           #'weight' : 'puW*baseW*bPogSF*effTrigW*std_vector_lepton_idisoW[0]*std_vector_lepton_idisoW[1]',          
                  #}


#samples['WH_hww']  = {    'name': ['latino_HWminusJ_HToWW_M125.root', 'latino_HWplusJ_HToWW_M125.root'],      
                           #'weight' : 'puW*baseW*bPogSF*effTrigW*std_vector_lepton_idisoW[0]*std_vector_lepton_idisoW[1]*GEN_weight_SM/abs(GEN_weight_SM)',          
                  #}

#samples['ZH_hww']  = {    'name': ['latino_HZJ_HToWW_M125.root'],      
                           #'weight' : 'puW*baseW*bPogSF*effTrigW*std_vector_lepton_idisoW[0]*std_vector_lepton_idisoW[1]*GEN_weight_SM/abs(GEN_weight_SM)',          
                  #}



###########################################
###########################################
###########################################

samples['DATA']  = {   'name': [
                                #'../../22Jan_Run2015C_16Dec2015/l2loose__hadd__bSFL2pTEff__l2tight/latino_Run2015C_16Dec2015_DoubleEG.root',
                                #'../../22Jan_Run2015C_16Dec2015/l2loose__hadd__bSFL2pTEff__l2tight/latino_Run2015C_16Dec2015_DoubleMuon.root',
                                #'../../22Jan_Run2015C_16Dec2015/l2loose__hadd__bSFL2pTEff__l2tight/latino_Run2015C_16Dec2015_MuonEG.root',
                                #'../../22Jan_Run2015C_16Dec2015/l2loose__hadd__bSFL2pTEff__l2tight/latino_Run2015C_16Dec2015_SingleElectron.root',
                                #'../../22Jan_Run2015C_16Dec2015/l2loose__hadd__bSFL2pTEff__l2tight/latino_Run2015C_16Dec2015_SingleMuon.root',
                                #'../../22Jan_Run2015D_16Dec2015/l2loose__hadd__bSFL2pTEff__l2tight/latino_Run2015D_16Dec2015_DoubleEG.root',
                                #'../../22Jan_Run2015D_16Dec2015/l2loose__hadd__bSFL2pTEff__l2tight/latino_Run2015D_16Dec2015_DoubleMuon.root',
                                #'../../22Jan_Run2015D_16Dec2015/l2loose__hadd__bSFL2pTEff__l2tight/latino_Run2015D_16Dec2015_MuonEG.root',
                                #'../../22Jan_Run2015D_16Dec2015/l2loose__hadd__bSFL2pTEff__l2tight/latino_Run2015D_16Dec2015_SingleElectron.root',
                                #'../../22Jan_Run2015D_16Dec2015/l2loose__hadd__bSFL2pTEff__l2tight/latino_Run2015D_16Dec2015_SingleMuon.root',

                                #'../../../../../j/jlauwers/HWW2015/22Jan_Run2015C_16Dec2015/l2loose__hadd__bSFL2pTEff__l2tight/latino_Run2015C_16Dec2015_DoubleEG.root',
                                #'../../../../../j/jlauwers/HWW2015/22Jan_Run2015C_16Dec2015/l2loose__hadd__bSFL2pTEff__l2tight/latino_Run2015C_16Dec2015_DoubleMuon.root',
                                #'../../../../../j/jlauwers/HWW2015/22Jan_Run2015C_16Dec2015/l2loose__hadd__bSFL2pTEff__l2tight/latino_Run2015C_16Dec2015_MuonEG.root',
                                #'../../../../../j/jlauwers/HWW2015/22Jan_Run2015C_16Dec2015/l2loose__hadd__bSFL2pTEff__l2tight/latino_Run2015C_16Dec2015_SingleElectron.root',
                                #'../../../../../j/jlauwers/HWW2015/22Jan_Run2015C_16Dec2015/l2loose__hadd__bSFL2pTEff__l2tight/latino_Run2015C_16Dec2015_SingleMuon.root',
                                #'../../../../../j/jlauwers/HWW2015/22Jan_Run2015D_16Dec2015/l2loose__hadd__bSFL2pTEff__l2tight/latino_Run2015D_16Dec2015_DoubleEG.root',
                                #'../../../../../j/jlauwers/HWW2015/22Jan_Run2015D_16Dec2015/l2loose__hadd__bSFL2pTEff__l2tight/latino_Run2015D_16Dec2015_DoubleMuon.root',
                                #'../../../../../j/jlauwers/HWW2015/22Jan_Run2015D_16Dec2015/l2loose__hadd__bSFL2pTEff__l2tight/latino_Run2015D_16Dec2015_MuonEG.root',
                                #'../../../../../j/jlauwers/HWW2015/22Jan_Run2015D_16Dec2015/l2loose__hadd__bSFL2pTEff__l2tight/latino_Run2015D_16Dec2015_SingleElectron.root',
                                #'../../../../../j/jlauwers/HWW2015/22Jan_Run2015D_16Dec2015/l2loose__hadd__bSFL2pTEff__l2tight/latino_Run2015D_16Dec2015_SingleMuon.root',

                                '../../03Mar_Run2015C_16Dec2015/l2loose__hadd__EpTCorr__l2tight/latino_Run2015C_16Dec2015_DoubleEG.root',
                                '../../03Mar_Run2015C_16Dec2015/l2loose__hadd__EpTCorr__l2tight/latino_Run2015C_16Dec2015_DoubleMuon.root',
                                '../../03Mar_Run2015C_16Dec2015/l2loose__hadd__EpTCorr__l2tight/latino_Run2015C_16Dec2015_MuonEG.root',
                                '../../03Mar_Run2015C_16Dec2015/l2loose__hadd__EpTCorr__l2tight/latino_Run2015C_16Dec2015_SingleElectron.root',
                                '../../03Mar_Run2015C_16Dec2015/l2loose__hadd__EpTCorr__l2tight/latino_Run2015C_16Dec2015_SingleMuon.root',
                                '../../03Mar_Run2015D_16Dec2015/l2loose__hadd__EpTCorr__l2tight/latino_Run2015D_16Dec2015_DoubleEG.root',
                                '../../03Mar_Run2015D_16Dec2015/l2loose__hadd__EpTCorr__l2tight/latino_Run2015D_16Dec2015_DoubleMuon.root',
                                '../../03Mar_Run2015D_16Dec2015/l2loose__hadd__EpTCorr__l2tight/latino_Run2015D_16Dec2015_MuonEG.root',
                                '../../03Mar_Run2015D_16Dec2015/l2loose__hadd__EpTCorr__l2tight/latino_Run2015D_16Dec2015_SingleElectron.root',
                                '../../03Mar_Run2015D_16Dec2015/l2loose__hadd__EpTCorr__l2tight/latino_Run2015D_16Dec2015_SingleMuon.root',

                                #'../../../../../r/rebeca/HWW2015/03Mar_Run2015C_16Dec2015/l2loose__hadd__EpTCorr__l2tight/latino_Run2015C_16Dec2015_DoubleEG.root',
                                #'../../../../../r/rebeca/HWW2015/03Mar_Run2015C_16Dec2015/l2loose__hadd__EpTCorr__l2tight/latino_Run2015C_16Dec2015_DoubleMuon.root',
                                #'../../../../../r/rebeca/HWW2015/03Mar_Run2015C_16Dec2015/l2loose__hadd__EpTCorr__l2tight/latino_Run2015C_16Dec2015_MuonEG.root',
                                #'../../../../../r/rebeca/HWW2015/03Mar_Run2015C_16Dec2015/l2loose__hadd__EpTCorr__l2tight/latino_Run2015C_16Dec2015_SingleElectron.root',
                                #'../../../../../r/rebeca/HWW2015/03Mar_Run2015C_16Dec2015/l2loose__hadd__EpTCorr__l2tight/latino_Run2015C_16Dec2015_SingleMuon.root',
                                #'../../../../../r/rebeca/HWW2015/03Mar_Run2015D_16Dec2015/l2loose__hadd__EpTCorr__l2tight/latino_Run2015D_16Dec2015_DoubleEG.root',
                                #'../../../../../r/rebeca/HWW2015/03Mar_Run2015D_16Dec2015/l2loose__hadd__EpTCorr__l2tight/latino_Run2015D_16Dec2015_DoubleMuon.root',
                                #'../../../../../r/rebeca/HWW2015/03Mar_Run2015D_16Dec2015/l2loose__hadd__EpTCorr__l2tight/latino_Run2015D_16Dec2015_MuonEG.root',
                                #'../../../../../r/rebeca/HWW2015/03Mar_Run2015D_16Dec2015/l2loose__hadd__EpTCorr__l2tight/latino_Run2015D_16Dec2015_SingleElectron.root',
                                #'../../../../../r/rebeca/HWW2015/03Mar_Run2015D_16Dec2015/l2loose__hadd__EpTCorr__l2tight/latino_Run2015D_16Dec2015_SingleMuon.root',


                                #'../eos/user/j/jlauwers/HWW2015/22Jan_Run2015C_16Dec2015/l2loose__hadd__bSFL2pTEff__l2tight/latino_Run2015C_16Dec2015_DoubleEG.root',
                                #'../eos/user/j/jlauwers/HWW2015/22Jan_Run2015C_16Dec2015/l2loose__hadd__bSFL2pTEff__l2tight/latino_Run2015C_16Dec2015_DoubleMuon.root',
                                #'../eos/user/j/jlauwers/HWW2015/22Jan_Run2015C_16Dec2015/l2loose__hadd__bSFL2pTEff__l2tight/latino_Run2015C_16Dec2015_MuonEG.root',
                                #'../eos/user/j/jlauwers/HWW2015/22Jan_Run2015C_16Dec2015/l2loose__hadd__bSFL2pTEff__l2tight/latino_Run2015C_16Dec2015_SingleElectron.root',
                                #'../eos/user/j/jlauwers/HWW2015/22Jan_Run2015C_16Dec2015/l2loose__hadd__bSFL2pTEff__l2tight/latino_Run2015C_16Dec2015_SingleMuon.root',
                                #'../eos/user/j/jlauwers/HWW2015/22Jan_Run2015D_16Dec2015/l2loose__hadd__bSFL2pTEff__l2tight/latino_Run2015D_16Dec2015_DoubleEG.root',
                                #'../eos/user/j/jlauwers/HWW2015/22Jan_Run2015D_16Dec2015/l2loose__hadd__bSFL2pTEff__l2tight/latino_Run2015D_16Dec2015_DoubleMuon.root',
                                #'../eos/user/j/jlauwers/HWW2015/22Jan_Run2015D_16Dec2015/l2loose__hadd__bSFL2pTEff__l2tight/latino_Run2015D_16Dec2015_MuonEG.root',
                                #'../eos/user/j/jlauwers/HWW2015/22Jan_Run2015D_16Dec2015/l2loose__hadd__bSFL2pTEff__l2tight/latino_Run2015D_16Dec2015_SingleElectron.root',
                                #'../eos/user/j/jlauwers/HWW2015/22Jan_Run2015D_16Dec2015/l2loose__hadd__bSFL2pTEff__l2tight/latino_Run2015D_16Dec2015_SingleMuon.root',
                                ] ,     
                       'weight' : 'trigger',
                       #'weight' : '1',
                       #'weight' : 'std_vector_trigger[1]',
                       'isData': ['all'],                            
                  }





