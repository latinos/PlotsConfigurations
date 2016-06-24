# samples

#samples = {}



samples['DY']  = {    'name': [
                            #'latino_DYJetsToLL_M-10to50.root',
                            #'latino_DYJetsToLL_M-10to50ext3.root',
                            #
                            #'latino_DYJetsToLL_M-50_0000__part0_genVar.root'
                            'latino_DYJetsToLL_M-10to50.root',
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
                            'latino_DYJetsToLL_M-50_0002__part0.root',
                            ],    
                      #'weight' : '(1.02852 - 0.0949640*TMath::Erf((gen_ptll-19.0422)/10.4487) + 0.0758834*TMath::Erf((gen_ptll-56.1146)/41.1653))*puW*effTrigW*std_vector_lepton_idisoW[0]*std_vector_lepton_idisoW[1]*GEN_weight_SM/abs(GEN_weight_SM)',  
                      'weight' : 'baseW*puW*effTrigW*std_vector_lepton_idisoW[0]*std_vector_lepton_idisoW[1]*GEN_weight_SM/abs(GEN_weight_SM)',  
                   }




samples['Wjets']  = {    'name': ['latino_WJetsToLNu.root'],     #   file name    
                      'weight' : 'puW*baseW*bPogSF*effTrigW*std_vector_lepton_idisoW[0]*std_vector_lepton_idisoW[1]*GEN_weight_SM/abs(GEN_weight_SM)',              #   weight/cut 
                      #'isData': ['0'],                             
                  }




#samples['DYLO']  = {    'name': [
                            ##'latino_DYJetsToLL_M-10to50.root',
                            ##'latino_DYJetsToLL_M-10to50ext3.root',
                            ##
                            #'latino_DYJetsToLL_M-50-LO__part1.root',
                            #'latino_DYJetsToLL_M-50-LO__part0.root',
                            ##
                            #],    
                      #'weight' : 'baseW*puW*bPogSF*effTrigW*std_vector_lepton_idisoW[0]*std_vector_lepton_idisoW[1]*GEN_weight_SM/abs(GEN_weight_SM)',
                  #}



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

             

samples['top'] = {   'name': [
                           'latino_TTJets.root',
                          #'latino_TTTo2L2Nu.root', 
                          'latino_ST_tW_antitop.root',
                          'latino_ST_tW_top.root'
                          ],          
                       'weight' : 'baseW*puW*effTrigW*std_vector_lepton_idisoW[0]*std_vector_lepton_idisoW[1]*GEN_weight_SM/abs(GEN_weight_SM)',    #   weight/cut 
                   }


#samples['WW']  = {    'name': [
                                  #'latino_WWTo2L2Nu.root'
                                #],      
                      #'weight' : 'nllW*puW*baseW*bPogSF*effTrigW*std_vector_lepton_idisoW[0]*std_vector_lepton_idisoW[1]'
                                  ##*((abs(std_vector_lepton_flavour[0]) == 11)* (0.882026*(std_vector_lepton_pt[0]<20)+0.947397*(std_vector_lepton_pt[0]<40 && std_vector_lepton_pt[0]>=20)+0.971082*(std_vector_lepton_pt[0]>=40))+(abs(std_vector_lepton_flavour[0]) == 13))*((abs(std_vector_lepton_flavour[1]) == 11)* (0.882026*(std_vector_lepton_pt[1]<20)+0.947397*(std_vector_lepton_pt[1]<40 && std_vector_lepton_pt[1]>=20)+0.971082*(std_vector_lepton_pt[1]>=40))+(abs(std_vector_lepton_flavour[1]) == 13))',              #   weight/cut 
                      ##'weights': ['abs(nllW)'] ,           
                  #}


samples['ggWW']  = {    'name': ['latino_GluGluWWTo2L2Nu_MCFM.root'],      
                      'weight' : 'puW*baseW*bPogSF*effTrigW*std_vector_lepton_idisoW[0]*std_vector_lepton_idisoW[1]',          
                      #'weights': ['abs(nllW)'] ,           
                      #'weights': ['1.000'] ,           
                      'isData': ['0'],                            
                  }

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


samples['VZ']  = {    'name': [
                          'latino_WZ.root', 
                          #'latino_WZTo3LNu.root', 
                          'latino_ZZ.root', # ---> replaced by inclusive samples
                          #'latino_ZZTo2L2Nu.root',
                          #'latino_ZZTo2L2Q.root'
                          #'latino_ZZTo4L.root'
                         ], 
                      'weight' : 'puW*baseW*bPogSF*effTrigW*std_vector_lepton_idisoW[0]*std_vector_lepton_idisoW[1]',          
                      #'weights': ['1'] ,           
                      #'isData': ['0'],                            
                  }


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

                                '../../../../../j/jlauwers/HWW2015/07Jun2016_Run2016B_PromptReco/l2loose16bis__hadd__l2tight/latino_Run2016B_PromptReco_DoubleEG.root',
                                '../../../../../j/jlauwers/HWW2015/07Jun2016_Run2016B_PromptReco/l2loose16bis__hadd__l2tight/latino_Run2016B_PromptReco_DoubleMuon.root',
                                '../../../../../j/jlauwers/HWW2015/07Jun2016_Run2016B_PromptReco/l2loose16bis__hadd__l2tight/latino_Run2016B_PromptReco_MuonEG.root',
                                '../../../../../j/jlauwers/HWW2015/07Jun2016_Run2016B_PromptReco/l2loose16bis__hadd__l2tight/latino_Run2016B_PromptReco_SingleElectron.root',
                                '../../../../../j/jlauwers/HWW2015/07Jun2016_Run2016B_PromptReco/l2loose16bis__hadd__l2tight/latino_Run2016B_PromptReco_SingleMuon.root',

                                #'../../../../../j/jlauwers/HWW2015/07Jun2016_Run2016B_PromptReco/l2loose16__hadd__l2tight/latino_Run2016B_PromptReco_DoubleEG.root',
                                #'../../../../../j/jlauwers/HWW2015/07Jun2016_Run2016B_PromptReco/l2loose16__hadd__l2tight/latino_Run2016B_PromptReco_DoubleMuon.root',
                                #'../../../../../j/jlauwers/HWW2015/07Jun2016_Run2016B_PromptReco/l2loose16__hadd__l2tight/latino_Run2016B_PromptReco_MuonEG.root',
                                #'../../../../../j/jlauwers/HWW2015/07Jun2016_Run2016B_PromptReco/l2loose16__hadd__l2tight/latino_Run2016B_PromptReco_SingleElectron.root',
                                #'../../../../../j/jlauwers/HWW2015/07Jun2016_Run2016B_PromptReco/l2loose16__hadd__l2tight/latino_Run2016B_PromptReco_SingleMuon.root',

     
                                ] ,     
                       'weight' : 'trigger',
                       #'weight' : '1',
                       #'weight' : 'std_vector_trigger[1]',
                       'isData': ['all'],                            
                  }





