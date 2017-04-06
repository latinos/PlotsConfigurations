# nuisances

nuisances['WWresum2jvbf']  = {
                'name'  : 'WWresum2jvbf',
                'kind'  : 'weight',
                'type'  : 'shape',
                'samples'  : {
                'WW'   : ['nllW_Rup/nllW', 'nllW_Rdown/nllW'],
                },
               'cuts'  : [
                 'hww2l2v_13TeV_of2jvbf',
                ]
                }

nuisances['WWqscale2jvbf']  = {
                'name'  : 'WWqscale2jvbf',
                'kind'  : 'weight',
                'type'  : 'shape',
                'samples'  : {
                'WW'   : ['nllW_Qup/nllW', 'nllW_Qdown/nllW'],
                },
                'cuts'  : [
                 'hww2l2v_13TeV_of2jvbf',
                ]
                }

nuisances['DYttnorm2jvbf']  = {
               'name'  : 'DYttnorm2jvbf',
               'samples'  : {
               'DY' : '1.00',
                   },
               'type'  : 'rateParam',
               'cuts'  : [
                 'hww2l2v_13TeV_of2jvbf',
                ]
              }

nuisances['WWnorm2jvbf']  = {
               'name'  : 'WWnorm2jvbf', 
               #'name'  : 'ICHEP_WWnorm2jvbf', 
               'samples'  : {
                   'WW' : '1.00',
                   },
               'type'  : 'rateParam',
               'cuts'  : [
                 'hww2l2v_13TeV_of2jvbf',
                ]
              }

nuisances['Topnorm2jvbf'] = {
                   'name'  : {
                   'top' : '1.00',
                   },
               'type'  : 'rateParam',
               'cuts'  : [
                 'hww2l2v_13TeV_of2jvbf',
                ]
              }

#####################################
#####################################
#####################################

# name of samples here must match keys in samples.py    

nuisances['lumi']  = {
               'name'  : 'lumi_13TeV', 
               'samples'  : {
                   'qqH_hww'  : '1.023',
                   },
               'type'  : 'lnN',
              }

nuisances['lumi2016']  = {
               'name'  : 'lumi_13TeV_2016', 
               'samples'  : {
                   'qqH_hww'  : '1.058',
                   },
               'type'  : 'lnN',
              }

from LatinoAnalysis.Tools.HiggsXSection  import *
HiggsXS = HiggsXSection()

nuisances['QCDscale_qqH']  = {
               'name'  : 'QCDscale_qqH', 
               'samples'  : {
                   'qqH_hww' : HiggsXS.GetHiggsProdXSNP('YR4prel','13TeV','vbfH','125.0','scale','sm'),
                   },
               'type'  : 'lnN',
              }

nuisances['QCDscale_qqbar_accept']  = { 
    'name'  : 'QCDscale_qqbar_accept', 
    'type'  : 'lnN', 
    'samples'  : { 
         'top': '0.983/1.007' ,
         'WW': '0.980/1.003' ,
         'qqH_hww': '0.974/1.005' ,
    }, 
 } 

nuisances['pdf_qqbar']  = {
               'name'  : 'pdf_qqbar', 
               'type'  : 'lnN',
               'samples'  : {
                   'qqH_hww' : HiggsXS.GetHiggsProdXSNP('YR4prel','13TeV','vbfH','125.0','pdf','sm'),
                   },
              }

nuisances['pdf_qqbar_accept']  = { 
    'name'  : 'pdf_qqbar_accept', 
    'type'  : 'lnN', 
    'samples'  : { 
         'top': '0.988/1.012' ,
         'WW': '0.986/1.008' ,
         'qqH_hww': '0.970/1.029' ,
    }, 
 } 

nuisances['PS']  = {
                'name'  : 'PS', 
                'kind'  : 'tree',
                'type'  : 'shape',
                'samples'  : {
                   'WW' :  ['1./1.03295', '1.'],  # latino_WWTo2L2NuHerwigPS.root moved with different name in __PS folder
                   'qqH_hww' :  ['1./1.06362', '1.'],
                },
                'folderUp'   : 'eos/user/r/rodrigo/HWW2016/07Jun2016_spring16_mAODv2_12pXfbm1_repro/MCl2loose__hadd__bSFL2pTEff__l2tight__wwSel__PS/',
                'folderDown' : 'eos/user/r/rodrigo/HWW2016/07Jun2016_spring16_mAODv2_12pXfbm1_repro/MCl2loose__hadd__bSFL2pTEff__l2tight__wwSel/' 
                }

#nuisances['btagbc']  = {
#                'name'  : 'ICHEP_btag_bc',
#                'kind'  : 'weight',
#                'type'  : 'shape',
#                'samples'  : {
#                   'qqH_hww' : ['(bPogSF_CMVAL_bc_up)/(bPogSF)', '(bPogSF_CMVAL_bc_down)/(bPogSF)'],
#                   'DY'      : ['(bPogSF_CMVAL_bc_up)/(bPogSF)', '(bPogSF_CMVAL_bc_down)/(bPogSF)'],
#                   'WW'      : ['(bPogSF_CMVAL_bc_up)/(bPogSF)', '(bPogSF_CMVAL_bc_down)/(bPogSF)'],
#                   'top'     : ['(bPogSF_CMVAL_bc_up)/(bPogSF)', '(bPogSF_CMVAL_bc_down)/(bPogSF)'],
#                }
#}
#
#nuisances['btagudsg']  = {
#                'name'  : 'ICHEP_btag_udsg',
#                'kind'  : 'weight',
#                'type'  : 'shape',
#                'samples'  : {
#                   'qqH_hww' : ['(bPogSF_CMVAL_udsg_up)/(bPogSF)', '(bPogSF_CMVAL_udsg_down)/(bPogSF)'],
#                   'DY'      : ['(bPogSF_CMVAL_udsg_up)/(bPogSF)', '(bPogSF_CMVAL_udsg_down)/(bPogSF)'],
#                   'WW'      : ['(bPogSF_CMVAL_udsg_up)/(bPogSF)', '(bPogSF_CMVAL_udsg_down)/(bPogSF)'],
#                   'top'     : ['(bPogSF_CMVAL_udsg_up)/(bPogSF)', '(bPogSF_CMVAL_udsg_down)/(bPogSF)'],
#                }
#} 

nuisances['tttwTh']  = {
                'name'  : 'tttwTh',   # Theory uncertainty
                'kind'  : 'weight',
                'type'  : 'shape',
                'samples'  : {  # up              down
                   'top'     : ['((dataset==15 || dataset==16) * 1.0816 + (dataset==17 || dataset==18 || dataset==19))',
                                '((dataset==15 || dataset==16) * 0.9184 + (dataset==17 || dataset==18 || dataset==19))'],
                }
                # tt = 17/18/19 depending on the sample/generator
                # tW = 15/16
                
}
  

nuisances['trigg']  = {
                'name'  : 'trigger',
                'kind'  : 'weight',
                #'kind'  : 'tree', #'weight',
                'type'  : 'shape',
                'samples'  : {
                   'qqH_hww' : ['(effTrigW_Up)/(effTrigW)', '(effTrigW_Down)/(effTrigW)'],
                   'DY'      : ['(effTrigW_Up)/(effTrigW)', '(effTrigW_Down)/(effTrigW)'],
                   'WW'      : ['(effTrigW_Up)/(effTrigW)', '(effTrigW_Down)/(effTrigW)'],
                   'top'     : ['(effTrigW_Up)/(effTrigW)', '(effTrigW_Down)/(effTrigW)'],
                },
                #'folderUp'   : 'eos/user/a/amassiro/HWW2015/22Jan_25ns_mAODv2_MC/MCl2loose__hadd__bSFL2pTEff__l2tight__wwSel__TrigEff/',    # uncertainties fixed!
                #'folderDown' : 'eos/user/a/amassiro/HWW2015/22Jan_25ns_mAODv2_MC/MCl2loose__hadd__bSFL2pTEff__l2tight__wwSel__TrigEff/' 
}

# FIXME : restore it once we have the niusance ready                                 

nuisances['idiso_ele']  = {
                'name'  : 'idiso_ele',
                'kind'  : 'weight',
                #'kind'  : 'tree', #'weight',
                'type'  : 'shape',
                'samples'  : {
                  'qqH_hww' : ['((abs(std_vector_lepton_flavour[0]) == 11)*(std_vector_lepton_idisoW_Up[0])/(std_vector_lepton_idisoW[0])+(abs(std_vector_lepton_flavour[0]) == 13)) * ((abs(std_vector_lepton_flavour[1]) == 11)*(std_vector_lepton_idisoW_Up[1])/(std_vector_lepton_idisoW[1])+(abs(std_vector_lepton_flavour[1]) == 13))', '((abs(std_vector_lepton_flavour[0]) == 11)*(std_vector_lepton_idisoW_Down[0])/(std_vector_lepton_idisoW[0])+(abs(std_vector_lepton_flavour[0]) == 13)) * ((abs(std_vector_lepton_flavour[1]) == 11)*(std_vector_lepton_idisoW_Down[1])/(std_vector_lepton_idisoW[1])+(abs(std_vector_lepton_flavour[1]) == 13))'],
                  'DY' : ['((abs(std_vector_lepton_flavour[0]) == 11)*(std_vector_lepton_idisoW_Up[0])/(std_vector_lepton_idisoW[0])+(abs(std_vector_lepton_flavour[0]) == 13)) * ((abs(std_vector_lepton_flavour[1]) == 11)*(std_vector_lepton_idisoW_Up[1])/(std_vector_lepton_idisoW[1])+(abs(std_vector_lepton_flavour[1]) == 13))', '((abs(std_vector_lepton_flavour[0]) == 11)*(std_vector_lepton_idisoW_Down[0])/(std_vector_lepton_idisoW[0])+(abs(std_vector_lepton_flavour[0]) == 13)) * ((abs(std_vector_lepton_flavour[1]) == 11)*(std_vector_lepton_idisoW_Down[1])/(std_vector_lepton_idisoW[1])+(abs(std_vector_lepton_flavour[1]) == 13))'],
                  'WW' : ['((abs(std_vector_lepton_flavour[0]) == 11)*(std_vector_lepton_idisoW_Up[0])/(std_vector_lepton_idisoW[0])+(abs(std_vector_lepton_flavour[0]) == 13)) * ((abs(std_vector_lepton_flavour[1]) == 11)*(std_vector_lepton_idisoW_Up[1])/(std_vector_lepton_idisoW[1])+(abs(std_vector_lepton_flavour[1]) == 13))', '((abs(std_vector_lepton_flavour[0]) == 11)*(std_vector_lepton_idisoW_Down[0])/(std_vector_lepton_idisoW[0])+(abs(std_vector_lepton_flavour[0]) == 13)) * ((abs(std_vector_lepton_flavour[1]) == 11)*(std_vector_lepton_idisoW_Down[1])/(std_vector_lepton_idisoW[1])+(abs(std_vector_lepton_flavour[1]) == 13))'],
                  'top' : ['((abs(std_vector_lepton_flavour[0]) == 11)*(std_vector_lepton_idisoW_Up[0])/(std_vector_lepton_idisoW[0])+(abs(std_vector_lepton_flavour[0]) == 13)) * ((abs(std_vector_lepton_flavour[1]) == 11)*(std_vector_lepton_idisoW_Up[1])/(std_vector_lepton_idisoW[1])+(abs(std_vector_lepton_flavour[1]) == 13))', '((abs(std_vector_lepton_flavour[0]) == 11)*(std_vector_lepton_idisoW_Down[0])/(std_vector_lepton_idisoW[0])+(abs(std_vector_lepton_flavour[0]) == 13)) * ((abs(std_vector_lepton_flavour[1]) == 11)*(std_vector_lepton_idisoW_Down[1])/(std_vector_lepton_idisoW[1])+(abs(std_vector_lepton_flavour[1]) == 13))'],
                 
                 },
                #'folderUp'   : 'eos/user/a/amassiro/HWW2015/22Jan_25ns_mAODv2_MC/MCl2loose__hadd__bSFL2pTEff__l2tight__wwSel__TrigEff/',    # uncertainties fixed!
                #'folderDown' : 'eos/user/a/amassiro/HWW2015/22Jan_25ns_mAODv2_MC/MCl2loose__hadd__bSFL2pTEff__l2tight__wwSel__TrigEff/' 
}
                
nuisances['idiso_mu']  = {
                'name'  : 'idiso_mu',
                'kind'  : 'weight',
                #'kind'  : 'tree', #'weight',
                'type'  : 'shape',
                'samples'  : {

                  'qqH_hww' : ['((abs(std_vector_lepton_flavour[0]) == 13)*(std_vector_lepton_idisoW_Up[0])/(std_vector_lepton_idisoW[0])+(abs(std_vector_lepton_flavour[0]) == 11)) * ((abs(std_vector_lepton_flavour[1]) == 13)*(std_vector_lepton_idisoW_Up[1])/(std_vector_lepton_idisoW[1])+(abs(std_vector_lepton_flavour[1]) == 11))', '((abs(std_vector_lepton_flavour[0]) == 13)*(std_vector_lepton_idisoW_Down[0])/(std_vector_lepton_idisoW[0])+(abs(std_vector_lepton_flavour[0]) == 11)) * ((abs(std_vector_lepton_flavour[1]) == 13)*(std_vector_lepton_idisoW_Down[1])/(std_vector_lepton_idisoW[1])+(abs(std_vector_lepton_flavour[1]) == 11))'],
                  'DY' : ['((abs(std_vector_lepton_flavour[0]) == 13)*(std_vector_lepton_idisoW_Up[0])/(std_vector_lepton_idisoW[0])+(abs(std_vector_lepton_flavour[0]) == 11)) * ((abs(std_vector_lepton_flavour[1]) == 13)*(std_vector_lepton_idisoW_Up[1])/(std_vector_lepton_idisoW[1])+(abs(std_vector_lepton_flavour[1]) == 11))', '((abs(std_vector_lepton_flavour[0]) == 13)*(std_vector_lepton_idisoW_Down[0])/(std_vector_lepton_idisoW[0])+(abs(std_vector_lepton_flavour[0]) == 11)) * ((abs(std_vector_lepton_flavour[1]) == 13)*(std_vector_lepton_idisoW_Down[1])/(std_vector_lepton_idisoW[1])+(abs(std_vector_lepton_flavour[1]) == 11))'],
                  'WW' : ['((abs(std_vector_lepton_flavour[0]) == 13)*(std_vector_lepton_idisoW_Up[0])/(std_vector_lepton_idisoW[0])+(abs(std_vector_lepton_flavour[0]) == 11)) * ((abs(std_vector_lepton_flavour[1]) == 13)*(std_vector_lepton_idisoW_Up[1])/(std_vector_lepton_idisoW[1])+(abs(std_vector_lepton_flavour[1]) == 11))', '((abs(std_vector_lepton_flavour[0]) == 13)*(std_vector_lepton_idisoW_Down[0])/(std_vector_lepton_idisoW[0])+(abs(std_vector_lepton_flavour[0]) == 11)) * ((abs(std_vector_lepton_flavour[1]) == 13)*(std_vector_lepton_idisoW_Down[1])/(std_vector_lepton_idisoW[1])+(abs(std_vector_lepton_flavour[1]) == 11))'],
                  'top' : ['((abs(std_vector_lepton_flavour[0]) == 13)*(std_vector_lepton_idisoW_Up[0])/(std_vector_lepton_idisoW[0])+(abs(std_vector_lepton_flavour[0]) == 11)) * ((abs(std_vector_lepton_flavour[1]) == 13)*(std_vector_lepton_idisoW_Up[1])/(std_vector_lepton_idisoW[1])+(abs(std_vector_lepton_flavour[1]) == 11))', '((abs(std_vector_lepton_flavour[0]) == 13)*(std_vector_lepton_idisoW_Down[0])/(std_vector_lepton_idisoW[0])+(abs(std_vector_lepton_flavour[0]) == 11)) * ((abs(std_vector_lepton_flavour[1]) == 13)*(std_vector_lepton_idisoW_Down[1])/(std_vector_lepton_idisoW[1])+(abs(std_vector_lepton_flavour[1]) == 11))'],
                },
                #'folderUp'   : 'eos/user/a/amassiro/HWW2015/22Jan_25ns_mAODv2_MC/MCl2loose__hadd__bSFL2pTEff__l2tight__wwSel__TrigEff/',    # uncertainties fixed!
                #'folderDown' : 'eos/user/a/amassiro/HWW2015/22Jan_25ns_mAODv2_MC/MCl2loose__hadd__bSFL2pTEff__l2tight__wwSel__TrigEff/' 
}


                

# nuisances handled by means of a different set of trees

# FIXME : restore it once we have the niusance ready                                 

nuisances['jes']  = {
                'name'  : 'scale_j', 
                'kind'  : 'tree',
                'type'  : 'shape',
                'samples'  : {
                   'WW' :  ['1', '1'],
                   'DY' :  ['1', '1'],
                   'top' : ['1', '1'],
                   'qqH_hww' : ['1', '1'],
                },


                'folderUp'   : 'eos/user/r/rodrigo/HWW2016/07Jun2016_spring16_mAODv2_12pXfbm1_repro/MCl2loose__hadd__bSFL2pTEff__l2tight__JESMaxup__wwSel/',
                'folderDown' : 'eos/user/r/rodrigo/HWW2016/07Jun2016_spring16_mAODv2_12pXfbm1_repro/MCl2loose__hadd__bSFL2pTEff__l2tight__JESMaxdo__wwSel/' 
}

# FIXME : restore it once we have the niusance ready                                 

nuisances['electronpt']  = {
                'name'  : 'scale_e', 
                'kind'  : 'tree',
                'type'  : 'shape',
                'samples'  : {
                   'WW' :  ['1', '1'],
                   'DY' :  ['1', '1'],
                   'top' : ['1', '1'],
                   'qqH_hww' : ['1', '1'],
                },
                                
                'folderUp'   : 'eos/user/r/rodrigo/HWW2016/07Jun2016_spring16_mAODv2_12pXfbm1_repro/MCl2loose__hadd__bSFL2pTEff__l2tight__LepElepTup__wwSel/',
                'folderDown' : 'eos/user/r/rodrigo/HWW2016/07Jun2016_spring16_mAODv2_12pXfbm1_repro/MCl2loose__hadd__bSFL2pTEff__l2tight__LepElepTdo__wwSel/' 
}
                
# FIXME : restore it once we have the niusance ready                                 
   
nuisances['muonpt']  = {
                'name'  : 'scale_m', 
                'kind'  : 'tree',
                'type'  : 'shape',
                'samples'  : {
                   'WW' :  ['1', '1'],
                   'DY' :  ['1', '1'],
                   'top' : ['1', '1'],
                   'qqH_hww' : ['1', '1'],
                },
                
                'folderUp'   : 'eos/user/r/rodrigo/HWW2016/07Jun2016_spring16_mAODv2_12pXfbm1_repro/MCl2loose__hadd__bSFL2pTEff__l2tight__LepMupTup__wwSel/',
                'folderDown' : 'eos/user/r/rodrigo/HWW2016/07Jun2016_spring16_mAODv2_12pXfbm1_repro/MCl2loose__hadd__bSFL2pTEff__l2tight__LepMupTdo__wwSel/' 
}


# FIXME : restore it once we have the niusance ready                                 

nuisances['met']  = {
                'name'  : 'scale_met', 
                'kind'  : 'tree',
                'type'  : 'shape',
                'samples'  : {
                   'WW' :  ['1', '1'],
                   'DY' :  ['1', '1'],
                   'top' : ['1', '1'],
                   'qqH_hww' : ['1', '1'],
                },

                'folderUp'   : 'eos/user/r/rodrigo/HWW2016/07Jun2016_spring16_mAODv2_12pXfbm1_repro/MCl2loose__hadd__bSFL2pTEff__l2tight__METup__wwSel/',
                'folderDown' : 'eos/user/r/rodrigo/HWW2016/07Jun2016_spring16_mAODv2_12pXfbm1_repro/MCl2loose__hadd__bSFL2pTEff__l2tight__METdo__wwSel/' 
}


                
                
# statistical fluctuation
# on MC/data
# "stat" is a special word to identify this nuisance
nuisances['stat']  = {
                # apply to the following samples: name of samples here must match keys in samples.py
               'samples'  : {
                   
                   'ttbar': {
                         'typeStat' : 'bbb',
                         },

                   'singletop': {
                         'typeStat' : 'bbb',
                         },
                    
                   'top': {
                         'typeStat' : 'bbb',
                         },
                    
                   'DY': {
                         'typeStat' : 'bbb',
                         'keepNormalization' : '1'  # default = 0 -> 0=don't keep normalization
                         },
                    
                   'WW': {
                         'typeStat' : 'bbb',
                         },
                    
                   'qqH_hww': {
                         'typeStat' : 'bbb',
                         },
                 },
               'type'  : 'shape'
              }
