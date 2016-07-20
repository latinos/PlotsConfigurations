# samples

#samples = {}

#samples['DY']  = {    'name': [
                            ##'latino_DYJetsToLL_M-10to50.root',
                            ##'latino_DYJetsToLL_M-10to50ext3.root',
                            ##
                            #'latino_DYJetsToLL_M-50_0000__part0.root',
                            #'latino_DYJetsToLL_M-50_0000__part1.root',
                            #'latino_DYJetsToLL_M-50_0000__part2.root',
                            #'latino_DYJetsToLL_M-50_0000__part3.root',
                            #'latino_DYJetsToLL_M-50_0000__part4.root',
                            #'latino_DYJetsToLL_M-50_0001__part0.root',
                            #'latino_DYJetsToLL_M-50_0001__part1.root',
                            #'latino_DYJetsToLL_M-50_0001__part2.root',
                            #'latino_DYJetsToLL_M-50_0001__part3.root',
                            #'latino_DYJetsToLL_M-50_0001__part4.root',
                            #'latino_DYJetsToLL_M-50_0002__part0.root'
                            ##
                            #],    
                      #'weight' : 'metFilter*(0.95 - 0.1*TMath::Erf((gen_ptll-14)/8.8))*puW*bPogSF*effTrigW*std_vector_lepton_idisoW[0]*std_vector_lepton_idisoW[1]*std_vector_lepton_genmatched[0]*std_vector_lepton_genmatched[1]*GEN_weight_SM/abs(GEN_weight_SM)',              #   weight/cut 
                      ##'isData': ['0', '0'],      
                      #'weights': [ 
                                    ##'0.238112'
                                  ##, '0.238112'
                                  #, '0.317273040011'
                                  #, '0.317273040011'
                                  #, '0.317273040011'
                                  #, '0.317273040011'
                                  #, '0.317273040011'
                                  #, '0.317273040011'
                                  #, '0.317273040011'
                                  #, '0.317273040011'
                                  #, '0.317273040011'
                                  #, '0.317273040011'
                                  #, '0.317273040011'
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

             
samples['top'] = {   'name': [
                           #'latino_TTJets.root',
                           'latino_TTTo2L2Nu_ext1__part0.root',
                           'latino_TTTo2L2Nu_ext1__part1.root',
                           'latino_TTTo2L2Nu_ext1__part2.root',
                           'latino_TTTo2L2Nu_ext1__part3.root',
                           'latino_TTTo2L2Nu_ext1__part4.root',
                           'latino_TTTo2L2Nu_ext1__part5.root',
                           'latino_TTTo2L2Nu_ext1__part6.root',
                           'latino_TTTo2L2Nu_ext1__part7.root',
                           'latino_TTTo2L2Nu_ext1__part8.root',
                           'latino_TTTo2L2Nu_ext1__part9.root',
                           #
                           'latino_ST_tW_antitop.root',
                           'latino_ST_tW_top.root'
                          ],          
                       'weight' : 'puW*effTrigW*std_vector_lepton_idisoW[0]*std_vector_lepton_idisoW[1]*GEN_weight_SM/abs(GEN_weight_SM)*std_vector_lepton_genmatched[0]*std_vector_lepton_genmatched[1]',    #   weight/cut 
                       'weights' :  [
                          '0.0043711992912',
                          '0.0043711992912',
                          '0.0043711992912',
                          '0.0043711992912',
                          '0.0043711992912',
                          '0.0043711992912',
                          '0.0043711992912',
                          '0.0043711992912',
                          '0.0043711992912',
                          '0.0043711992912',
#
                          'baseW',
                          'baseW',
#                   
                       ]
                      }


# samples['top'] = {   'name': [
#                           'latino_TTTo2L2Nu.root', 
#                           #'latino_ST_tW_antitop.root',
#                           #'latino_ST_tW_top.root'
#                           ],          
#                        'weight' : 'metFilter*puW*baseW*bPogSF*effTrigW*std_vector_lepton_idisoW[0]*std_vector_lepton_idisoW[1]*std_vector_lepton_genmatched[0]*std_vector_lepton_genmatched[1]',                
#                    }


samples['WW']  = {    'name': [
                                  'latino_WWTo2L2Nu.root'
                                ],      
                      'weight' : 'nllW*puW*effTrigW*std_vector_lepton_idisoW[0]*std_vector_lepton_idisoW[1]*std_vector_lepton_genmatched[0]*std_vector_lepton_genmatched[1]',          
                      'weights': ['0.00619058124769'] ,           
                  }


# samples['ggWW']  = {    'name': ['latino_GluGluWWTo2L2Nu_MCFM.root'],      
#                       'weight' : 'puW*baseW*effTrigW*std_vector_lepton_idisoW[0]*std_vector_lepton_idisoW[1]*std_vector_lepton_genmatched[0]*std_vector_lepton_genmatched[1]',          
#                       #'weights': ['abs(nllW)'] ,           
#                       #'weights': ['1.000'] ,           
#                       'isData': ['0'],                            
#                   }

#samples['WW']  = {    'name': [
                                  #'latino_WWTo2L2Nu.root'
                                #],      
                      #'weight' : 'metFilter*nllW*puW*baseW*bPogSF*effTrigW*std_vector_lepton_idisoW[0]*std_vector_lepton_idisoW[1]*std_vector_lepton_genmatched[0]*std_vector_lepton_genmatched[1]',          
                      ##'weights': ['abs(nllW)'] ,           
                  #}


#samples['ggWW']  = {    'name': ['latino_GluGluWWTo2L2Nu_MCFM.root'],      
                      #'weight' : 'metFilter*puW*baseW*bPogSF*effTrigW*std_vector_lepton_idisoW[0]*std_vector_lepton_idisoW[1]*std_vector_lepton_genmatched[0]*std_vector_lepton_genmatched[1]',          
                      #'weights': ['1.000'] ,           
                      #'isData': ['0'],                            
                  #}

##samples['ggWW_Int']  = {    'name': ['latino_GluGluWWTo2L2Nu_MCFM.root', 'latino_GluGluWWTo2L2NuHiggs_MCFM.root'],      
                      ##'weight' : '1.87*puW*baseW*bPogSF*effTrigW*std_vector_lepton_idisoW[0]*std_vector_lepton_idisoW[1]*std_vector_lepton_genmatched[0]*std_vector_lepton_genmatched[1]',          
                      ##'weights': ['-1./1.4', '1/1.4'] ,           
                  ##}

## during tree production: 1.4 k-factor has been applied to both samples
## ggWW sample: k = 1.4 +/- 15%
## ggWW interference: k = 1.87 +/- 25%



#samples['Vg']  = {    'name': ['latino_Wg_AMCNLOFXFX.root'],      
                      #'weight' : 'metFilter*puW*baseW*bPogSF*effTrigW*std_vector_lepton_idisoW[0]*std_vector_lepton_idisoW[1]*GEN_weight_SM/abs(GEN_weight_SM)\
                                  #* !(Gen_ZGstar_mass > 0 && Gen_ZGstar_MomId == 22 )',
                                 ##*(!(Gen_ZGstar_MomStatus==44 && Gen_ZGstar_MomId==22))',
                      #'weights': ['1'] ,           
                      ##'isData': ['0'],                            
                  #}



#samples['VgS']  = {    'name': ['latino_WgStarLNuEE.root', 'latino_WgStarLNuMuMu.root'],      
                      #'weight' : 'metFilter*2.0*puW*baseW*bPogSF*effTrigW*std_vector_lepton_idisoW[0]*std_vector_lepton_idisoW[1]*std_vector_lepton_genmatched[0]*std_vector_lepton_genmatched[1]*GEN_weight_SM/abs(GEN_weight_SM)',
                      #'weights': ['1','1'] ,           
                  #}

## 
## Wg* scale factor is
##
## 1.98 +/- 0.54    in mumumu
## 2.0  +/- 0.5     in emumu
##
##


samples['VZ']  = {    'name': [
                          #'latino_WZ.root', 
                          'latino_WZTo3LNu.root', 
                          #'latino_ZZ.root', # ---> replaced by exclusive samples
                          'latino_ZZTo2L2Nu.root',   # 
                          #'latino_ZZTo2L2Q.root'
                          'latino_WZTo2L2Q__part0.root',
                          'latino_WZTo2L2Q__part1.root',
                          'latino_WZTo2L2Q__part10.root',
                          'latino_WZTo2L2Q__part11.root',
                          'latino_WZTo2L2Q__part12.root',
                          'latino_WZTo2L2Q__part13.root',
                          'latino_WZTo2L2Q__part14.root',
                          'latino_WZTo2L2Q__part15.root',
                          'latino_WZTo2L2Q__part16.root',
                          'latino_WZTo2L2Q__part17.root',
                          'latino_WZTo2L2Q__part18.root',
                          'latino_WZTo2L2Q__part19.root',
                          'latino_WZTo2L2Q__part2.root',
                          'latino_WZTo2L2Q__part20.root',
                          'latino_WZTo2L2Q__part21.root',
                          'latino_WZTo2L2Q__part22.root',
                          'latino_WZTo2L2Q__part23.root',
                          'latino_WZTo2L2Q__part24.root',
                          'latino_WZTo2L2Q__part25.root',
                          'latino_WZTo2L2Q__part26.root',
                          'latino_WZTo2L2Q__part27.root',
                          'latino_WZTo2L2Q__part28.root',
                          'latino_WZTo2L2Q__part29.root',
                          'latino_WZTo2L2Q__part3.root',
                          'latino_WZTo2L2Q__part30.root',
                          'latino_WZTo2L2Q__part31.root',
                          'latino_WZTo2L2Q__part32.root',
                          'latino_WZTo2L2Q__part33.root',
                          'latino_WZTo2L2Q__part34.root',
                          'latino_WZTo2L2Q__part35.root',
                          'latino_WZTo2L2Q__part36.root',
                          'latino_WZTo2L2Q__part37.root',
                          'latino_WZTo2L2Q__part38.root',
                          'latino_WZTo2L2Q__part39.root',
                          'latino_WZTo2L2Q__part4.root',
                          'latino_WZTo2L2Q__part40.root',
                          'latino_WZTo2L2Q__part41.root',
                          'latino_WZTo2L2Q__part42.root',
                          'latino_WZTo2L2Q__part5.root',
                          'latino_WZTo2L2Q__part6.root',
                          'latino_WZTo2L2Q__part7.root',
                          'latino_WZTo2L2Q__part8.root',
                          'latino_WZTo2L2Q__part9.root',                          
                          #
                          'latino_ZZTo2L2Q__part0.root',
                          'latino_ZZTo2L2Q__part1.root',
                          'latino_ZZTo2L2Q__part2.root',
                          'latino_ZZTo2L2Q__part3.root',
                          #
                          #'latino_ZZTo4L.root'
                         ], 
                      'weight' : 'puW*bPogSF*effTrigW*std_vector_lepton_idisoW[0]*std_vector_lepton_idisoW[1]*std_vector_lepton_genmatched[0]*std_vector_lepton_genmatched[1]*GEN_weight_SM/abs(GEN_weight_SM)',          
                      'weights': [
                          '0.002214825',
                          #
                          '6.28902765388e-05',
                          #
                          '0.000359426036128',
                          '0.000359426036128',
                          '0.000359426036128',
                          '0.000359426036128',
                          '0.000359426036128',
                          '0.000359426036128',
                          '0.000359426036128',
                          '0.000359426036128',
                          '0.000359426036128',
                          '0.000359426036128',
                          '0.000359426036128',
                          '0.000359426036128',
                          '0.000359426036128',
                          '0.000359426036128',
                          '0.000359426036128',
                          '0.000359426036128',
                          '0.000359426036128',
                          '0.000359426036128',
                          '0.000359426036128',
                          '0.000359426036128',
                          '0.000359426036128',
                          '0.000359426036128',
                          '0.000359426036128',
                          '0.000359426036128',
                          '0.000359426036128',
                          '0.000359426036128',
                          '0.000359426036128',
                          '0.000359426036128',
                          '0.000359426036128',
                          '0.000359426036128',
                          '0.000359426036128',
                          '0.000359426036128',
                          '0.000359426036128',
                          '0.000359426036128',
                          '0.000359426036128',
                          '0.000359426036128',
                          '0.000359426036128',
                          '0.000359426036128',
                          '0.000359426036128',
                          '0.000359426036128',
                          '0.000359426036128',
                          '0.000359426036128',
                          '0.000359426036128',                          
                          #
                          '0.000329080664109',
                          '0.000329080664109',
                          '0.000329080664109',
                          '0.000329080664109',
                          #
                        '',
                        ] ,           
                      #'isData': ['0'],                            
                  }

#samples['VZ']  = {    'name': [
                          #'latino_WZTo3LNu.root', 
                          ##'latino_ZZ.root',  ---> replaced by inclusive samples
                          #'latino_ZZTo2L2Nu.root', #  ---->  NEEDED FIXME
                          ##'latino_ZZTo2L2Q.root'
                          #'latino_ZZTo4L.root'
                         #], 
                      #'weight' : 'metFilter*puW*baseW*bPogSF*effTrigW*std_vector_lepton_idisoW[0]*std_vector_lepton_idisoW[1]*std_vector_lepton_genmatched[0]*std_vector_lepton_genmatched[1]',          
                      ##'weights': ['1'] ,           
                      ##'isData': ['0'],                            
                  #}


#samples['VVV'] = {    'name': [
                          #'latino_WZZ.root', 
                          ##'latino_ZZZ.root'
                          ##'latino_WWW.root'
                          ##'latino_WWZ.root'
                          #],      
                      #'weight' : 'metFilter*puW*baseW*bPogSF*effTrigW*std_vector_lepton_idisoW[0]*std_vector_lepton_idisoW[1]*std_vector_lepton_genmatched[0]*std_vector_lepton_genmatched[1]*GEN_weight_SM/abs(GEN_weight_SM)',          
                      ##'isData': ['0'],                            
                  #}


## Htautau
#samples['H_htt']  = {      'name': ['latino_GluGluHToTauTau_M125.root',
                                    #'latino_VBFHToTauTau_M125.root',
                                    #'latino_HWminusJ_HToTauTau_M125.root',
                                    #'latino_HWplusJ_HToTauTau_M125.root',
                                    #'latino_HZJ_HToTauTau_M125.root'
                                    #],      
                           #'weight' : 'metFilter*puW*baseW*bPogSF*effTrigW*std_vector_lepton_idisoW[0]*std_vector_lepton_idisoW[1]*std_vector_lepton_genmatched[0]*std_vector_lepton_genmatched[1]',         
                           #'weights': ['1', '1', 'GEN_weight_SM/abs(GEN_weight_SM)', 'GEN_weight_SM/abs(GEN_weight_SM)', 'GEN_weight_SM/abs(GEN_weight_SM)' ]            
                  #}



# HWW 

samples['ggH_hww']  = {    'name': [
                               'latino_GluGluHToWWTo2L2NuPowheg_M125.root'
                               #'latino_GluGluHToWWTo2L2Nu_M125.root'
                               #'latino_GluGluHToWWTo2L2Nu_alternative_M125.root' # --> 500k events
                               ],      
                           'weight' : 'metFilter*puW*baseW*bPogSF*effTrigW*std_vector_lepton_idisoW[0]*std_vector_lepton_idisoW[1]*std_vector_lepton_genmatched[0]*std_vector_lepton_genmatched[1]',          
                  }

samples['qqH_hww']  = {    'name': [
                               'latino_VBFHToWWTo2L2Nu_M125.root'
                               #'latino_VBFHToWWTo2L2Nu_alternative_M125.root'
                               ],      
                           'weight' : 'metFilter*puW*baseW*bPogSF*effTrigW*std_vector_lepton_idisoW[0]*std_vector_lepton_idisoW[1]*std_vector_lepton_genmatched[0]*std_vector_lepton_genmatched[1]',          
                  }

samples['ggZH_hww']  = {    'name': [
                               'latino_ggZH_HToWW_M125.root',
                               ],      
                           'weight' : 'metFilter*puW*baseW*bPogSF*effTrigW*std_vector_lepton_idisoW[0]*std_vector_lepton_idisoW[1]*std_vector_lepton_genmatched[0]*std_vector_lepton_genmatched[1]',          
                  }


samples['WH_hww']  = {    'name': ['latino_HWminusJ_HToWW_M125.root', 'latino_HWplusJ_HToWW_M125.root'],      
                           'weight' : 'metFilter*puW*baseW*bPogSF*effTrigW*std_vector_lepton_idisoW[0]*std_vector_lepton_idisoW[1]*std_vector_lepton_genmatched[0]*std_vector_lepton_genmatched[1]*GEN_weight_SM/abs(GEN_weight_SM)',          
                  }

samples['ZH_hww']  = {    'name': ['latino_HZJ_HToWW_M125.root'],      
                           'weight' : 'metFilter*puW*baseW*bPogSF*effTrigW*std_vector_lepton_idisoW[0]*std_vector_lepton_idisoW[1]*std_vector_lepton_genmatched[0]*std_vector_lepton_genmatched[1]*GEN_weight_SM/abs(GEN_weight_SM)',          
                  }



