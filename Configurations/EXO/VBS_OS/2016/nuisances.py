#Controllare idiso_ele, muon rispetto alle nuisances ggH

# nuisances

#nuisances = {}

# name of samples here must match keys in samples.py    
#


Top_pTrw   = '(TMath::Sqrt( TMath::Exp(0.0615-0.0005*topLHEpt) * TMath::Exp(0.0615-0.0005*antitopLHEpt) ) )'
Top_pTrwUp = '1.'
Top_pTrwDo = '1./(TMath::Sqrt( TMath::Exp(0.0615-0.0005*topLHEpt) * TMath::Exp(0.0615-0.0005*antitopLHEpt) ) )'

nuisances['TopPtRew']  = {
                'name'  : 'TopPtRew',   # Theory uncertainty
                'kind'  : 'weight',
                'type'  : 'shape',
                'samples' : {
                     'top'  : [Top_pTrwUp+"/"+Top_pTrw,
                               Top_pTrwDo+"/"+Top_pTrw]
                }
}


nuisances['lumi']  = {
               'name'  : 'lumi_ICHEP_13TeV', 
               'samples'  : {
                   'ggH_hww'  : '1.050',
                   'qqH_hww'  : '1.050',
                   'WH_hww'   : '1.050',
                   'ZH_hww'   : '1.050',
                   'H_htt'    : '1.050',
                   'H_hww'    : '1.050',
                   'WH_hww'   : '1.050',
                   'ggZH_hww' : '1.050',
                   'VVV'      : '1.050',
                   'VZ'       : '1.050',
                   'ggWW'     : '1.050',
                   'Vg'       : '1.050',
                   'VgS'      : '1.050',
                   'WpWmJJ_EWK_noTop'  : '1.050',
                   'WpWmJJ_QCD_noTop'  : '1.050',
                   'interference'      : '1.050',
                   'WW_DoubleScattering'  : '1.050',

                   },
               'type'  : 'lnN', #Log-normal, variation on normalization
              }

# theory uncertainties


nuisances['QCDscale_VW']  = {
               'name'  : 'QCDscale_VW', 
               'samples'  : {
                   'VW' : '1.03',
                   },
               'type'  : 'lnN'
              }

# PDF: 0.0064 / 0.1427 = 0.0448493
# QCD: 0.0046 / 0.1427 = 0.0322355



from LatinoAnalysis.Tools.HiggsXSection  import *
HiggsXS = HiggsXSection()


#QCD scale uncertainties decorrelated

#ggH 125
nuisances['QCDscale_ggH']  = {
               'name'  : 'QCDscale_ggH', 
               'samples'  : {
                   'ggH_hww' : HiggsXS.GetHiggsProdXSNP('YR4prel','13TeV','ggH','125.0','scale','sm'), # this is probably an underestimation for ggH + 2 jets 
                   },
               'type'  : 'lnN',
              }

nuisances['QCDscale_ggH_accept']  = {
               'name'  : 'QCDscale_ggH_accept',
               'samples'  : {
                   'ggH_hww' : '1.027',
                   },
               'type'  : 'lnN',
              }

## qqH 125
nuisances['QCDscale_qqH']  = {
               'name'  : 'QCDscale_qqH', 
               'samples'  : {
                   'qqH_hww' : HiggsXS.GetHiggsProdXSNP('YR4prel','13TeV','vbfH','125.0','scale','sm'),
                   },
               'type'  : 'lnN',
              }

nuisances['QCDscale_qqH_accept']  = {
               'name'  : 'QCDscale_qqH_accept',
               'type'  : 'lnN',
               'samples'  : {
                   'qqH_hww' : '1.007',
                   },
              }

# vbs EWK
nuisances['QCDscale_WpWmJJ_EWK_noTop']  = {
               'name'  : 'QCDscale_WpWmJJ_EWK_noTop', 
               'samples'  : {
                   'WpWmJJ_EWK_noTop': '1.11', #1.113261
                   },
               'type'  : 'lnN',
              }

nuisances['QCDscale_WpWmJJ_EWK_noTop_accept']  = {
               'name'  : 'QCDscale_WpWmJJ_EWK_noTop_accept',
               'samples'  : {
                   'WpWmJJ_EWK_noTop': '1.02', #1.113261
                   },
               'type'  : 'lnN',
              }

#interference EWK QCD
nuisances['QCDscale_interference']  = {
               'name'  : 'QCDscale_interference', 
               'samples'  : {
                   'interference': '1.32',                  
                   },
               'type'  : 'lnN',
              }

nuisances['QCDscale_interference_accept']  = {
               'name'  : 'QCDscale_interference_accept',
               'samples'  : {
                   'interference': '1.025',
                   },
               'type'  : 'lnN',
              }

##DPS

nuisances['QCDscale_WW_DoubleScattering']  = {
               'name'  : 'QCDscale_WW_DoubleScattering', 
               'samples'  : {
                   'interference': '1.32',                  
                   },
               'type'  : 'lnN',
              }


# pdf uncertainty correlated

nuisances['pdf_gg']  = {
               'name'  : 'pdf_gg', 
               'samples'  : {
                   'ggH_hww' : HiggsXS.GetHiggsProdXSNP('YR4prel','13TeV','ggH' ,'125.0','pdf','sm'),
                   },
               'type'  : 'lnN',
              }

nuisances['pdf_qqbar']  = {
               'name'  : 'pdf_qqbar', 
               'type'  : 'lnN',
               'samples'  : {
                   'qqH_hww' : HiggsXS.GetHiggsProdXSNP('YR4prel','13TeV','vbfH','125.0','pdf','sm'),
                   'WpWmJJ_EWK_noTop'  : '1.11', #1.112895
                   'interference'      : '1.13',#1.134441

                   },
              }


nuisances['pdf_gg_accept']  = {
               'name'  : 'pdf_gg_accept', 
               'samples'  : {
                   'ggH_hww' : '1.005',
                   },
               'type'  : 'lnN',
              }


nuisances['pdf_qqbar_accept']  = {
               'name'  : 'pdf_qqbar_accept', 
               'type'  : 'lnN',
               'samples'  : {
                   #
                   'qqH_hww' : '1.011',
                   'WpWmJJ_EWK_noTop'  : '1.03',#1.0349836
                   'WpWmJJ_QCD_noTop'  : '1.06',#1.0349836
                   'interference'      : '1.07',#1.0706037


                   },
              }





nuisances['kfactggww']  = {
               'name'  : 'kfactggww', 
               'type'  : 'lnN',
               'samples'  : {
                   'ggWW' : '1.15',
                   },
              }


nuisances['WWqscale2j']  = {
                'name'  : 'WWqscale2j',
                'kind'  : 'weight',
                'type'  : 'shape',
                'samples'  : {
                   'WW'   : ['nllW_Qup/nllW', 'nllW_Qdown/nllW'],
                   'WpWmJJ_QCD_noTop'   : ['std_vector_LHE_weight[8]/std_vector_LHE_weight[0]', 'std_vector_LHE_weight[4]/std_vector_LHE_weight[0]'], # both scales down, both scales up
                   },
                }


# PS/UE TO REVIEW
'''
# PS

nuisances['PS']  = {
                'name'  : 'PS', 
                'kind'  : 'tree', #Take correction from different files
                'type'  : 'shape',
                'samples'  : {
                   'WW' :  ['1./1.03295', '1.'],  # latino_WWTo2L2NuHerwigPS.root moved with different name in __PS folder
                },
                'folderUp'   : 'root://eosuser.cern.ch//eos/user/r/rodrigo/HWW2016/07Jun2016_spring16_mAODv2_12pXfbm1_repro/MCl2loose__hadd__bSFL2pTEff__l2tight__wwSel__PS',
                'folderDown' : 'root://eosuser.cern.ch//eos/user/r/rodrigo/HWW2016/07Jun2016_spring16_mAODv2_12pXfbm1_repro/MCl2loose__hadd__bSFL2pTEff__l2tight__wwSel__PS' 
                }




nuisances['UE']  = {
                'name'  : 'UE', 
                'kind'  : 'weight',
                'type'  : 'shape',
                'samples'  : {
                   'WW' :  ['1/0.978817', '1/1.0192'], 
                },
                }

#
# ue up/nom = 0.978817           ue up/nom = 0.9262                ue up/nom = 0.951846
# ue do/nom = 1.0192             ue do/nom = 0.984785              ue do/nom = 1.00099
# PS   /nom = 1.03295            PS   /nom = 1.00702               PS   /nom = 1.06362
#




nuisances['UE125']  = {
                'name'  : 'UE_125', 
                'kind'  : 'weight',
                'type'  : 'lnN',
                'samples'  : {
                   'ggH_hww' : '1.03',
                   'qqH_hww' : '1.03',
                },
              }

nuisances['PS125']  = {
                'name'  : 'PS_125', 
                'kind'  : 'weight',
                'type'  : 'lnN',
                'samples'  : {
                   'ggH_hww' : '1.02',
                   'qqH_hww' : '1.02',
                },
              }
'''
# experimental uncertainties

# K factor (Data/Wg*) = 2.0 +/- 0.5
nuisances['WgStarScale']  = {
               'name'  : 'WgStarScale', 
               'type'  : 'lnN',
               'samples'  : {
                   'WgS' : '1.25',  # 0.5 / 2.0   --> k_factor = 2.0 +/- 0.5
                   'VgS' : '1.25',  # 0.5 / 2.0   --> k_factor = 2.0 +/- 0.5
                   },
                }

nuisances['WWnorm2j']  = {
               'name'  : 'WWnorm2j',
               'samples'  : {
                   'WW' : '1.00',
                   'WpWmJJ_QCD_noTop'  : '1.00',
                   },
               'type'  : 'rateParam',
              }

nuisances['Topnorm2j']  = {
               'name'  : 'Topnorm2j',
               'samples'  : {
                   'top' : '1.00',
                   },
               'type'  : 'rateParam',
              }




# FIXME: to be added and split
# - lepton resolution
# - pileup


## nuisances handled by means of a weight in the tree

#nuisances['pileup']  = {
                #'name'  : 'pileup', 
                #'kind'  : 'weight',
                #'type'  : 'shape',
                #'samples'  : {
                   ##'ttbar' : ['puWup/puW', 'puWdown/puW'],
                   ##'DY'    : ['puWup/puW', 'puWdown/puW']
                   #'ttbar' : ['3./puW', '0.3/puW'],
                   #'DY'    : ['3./puW', '0.3/puW']
                #}
#}


# fakes 

nuisances['fake_ele']  = {
                'name'  : 'fake_ele_hww',
                'kind'  : 'weight',
                'type'  : 'shape',
                'samples'  : {
                   'Fake'      : ['(fakeW2l0jElUp*(njet==0)+fakeW2l1jElUp*(njet==1)+fakeW2l2jElUp*(njet>=2))/(fakeW2l0j*(njet==0)+fakeW2l1j*(njet==1)+fakeW2l2j*(njet>=2))',
                                  '(fakeW2l0jElDown*(njet==0)+fakeW2l1jElDown*(njet==1)+fakeW2l2jElDown*(njet>=2))/(fakeW2l0j*(njet==0)+fakeW2l1j*(njet==1)+fakeW2l2j*(njet>=2))'],
                }
}


nuisances['fake_ele_stat']  = {
                'name'  : 'fake_ele_stat_hww',
                'kind'  : 'weight',
                'type'  : 'shape',
                'samples'  : {
                   'Fake'      : ['(fakeW2l0jstatElUp*(njet==0)+fakeW2l1jstatElUp*(njet==1)+fakeW2l2jstatElUp*(njet>=2))/(fakeW2l0j*(njet==0)+fakeW2l1j*(njet==1)+fakeW2l2j*(njet>=2))',
                                  '(fakeW2l0jstatElDown*(njet==0)+fakeW2l1jstatElDown*(njet==1)+fakeW2l2jstatElDown*(njet>=2))/(fakeW2l0j*(njet==0)+fakeW2l1j*(njet==1)+fakeW2l2j*(njet>=2))'],
                }
}


nuisances['fake_mu']  = {
                'name'  : 'fake_mu_hww',
                'kind'  : 'weight',
                'type'  : 'shape',
                'samples'  : {
                   'Fake'      : ['(fakeW2l0jMuUp*(njet==0)+fakeW2l1jMuUp*(njet==1)+fakeW2l2jMuUp*(njet>=2))/(fakeW2l0j*(njet==0)+fakeW2l1j*(njet==1)+fakeW2l2j*(njet>=2))',
                                  '(fakeW2l0jMuDown*(njet==0)+fakeW2l1jMuDown*(njet==1)+fakeW2l2jMuDown*(njet>=2))/(fakeW2l0j*(njet==0)+fakeW2l1j*(njet==1)+fakeW2l2j*(njet>=2))'],
                }
}


nuisances['fake_mu_stat']  = {
                'name'  : 'fake_mu_stat_hww',
                'kind'  : 'weight',
                'type'  : 'shape',
                'samples'  : {
                   'Fake'      : ['(fakeW2l0jstatMuUp*(njet==0)+fakeW2l1jstatMuUp*(njet==1)+fakeW2l2jstatMuUp*(njet>=2))/(fakeW2l0j*(njet==0)+fakeW2l1j*(njet==1)+fakeW2l2j*(njet>=2))',
                                  '(fakeW2l0jstatMuDown*(njet==0)+fakeW2l1jstatMuDown*(njet==1)+fakeW2l2jstatMuDown*(njet>=2))/(fakeW2l0j*(njet==0)+fakeW2l1j*(njet==1)+fakeW2l2j*(njet>=2))'],
                }
}


# others ... 
  
                                 
                                 
  
nuisances['btag']  = {
                'name'  : 'ICHEP_btag',
                'kind'  : 'weight',
                'type'  : 'shape',
                'samples'  : {
                   'ggH_hww' : ['(bPogSFUp)/(bPogSF)', '(bPogSFDown)/(bPogSF)'],
                   'qqH_hww' : ['(bPogSFUp)/(bPogSF)', '(bPogSFDown)/(bPogSF)'],
                   'WH_hww'  : ['(bPogSFUp)/(bPogSF)', '(bPogSFDown)/(bPogSF)'],
                   'ZH_hww'  : ['(bPogSFUp)/(bPogSF)', '(bPogSFDown)/(bPogSF)'],
                   'H_htt'   : ['(bPogSFUp)/(bPogSF)', '(bPogSFDown)/(bPogSF)'],
                   'H_hww'   : ['(bPogSFUp)/(bPogSF)', '(bPogSFDown)/(bPogSF)'],
                   'WH_hww'  : ['(bPogSFUp)/(bPogSF)', '(bPogSFDown)/(bPogSF)'],
                   'DY'      : ['(bPogSFUp)/(bPogSF)', '(bPogSFDown)/(bPogSF)'],
                   'VVV'     : ['(bPogSFUp)/(bPogSF)', '(bPogSFDown)/(bPogSF)'],
                   'VZ'      : ['(bPogSFUp)/(bPogSF)', '(bPogSFDown)/(bPogSF)'],
                   'WW'      : ['(bPogSFUp)/(bPogSF)', '(bPogSFDown)/(bPogSF)'],
                   'ggWW'    : ['(bPogSFUp)/(bPogSF)', '(bPogSFDown)/(bPogSF)'],
                   'top'     : ['(bPogSFUp)/(bPogSF)', '(bPogSFDown)/(bPogSF)'],
                   'Vg'      : ['(bPogSFUp)/(bPogSF)', '(bPogSFDown)/(bPogSF)'],
                   'VgS'     : ['(bPogSFUp)/(bPogSF)', '(bPogSFDown)/(bPogSF)'],
                   'WpWmJJ_EWK_noTop'     : ['(bPogSFUp)/(bPogSF)', '(bPogSFDown)/(bPogSF)'],
                   'WpWmJJ_QCD_noTop'     : ['(bPogSFUp)/(bPogSF)', '(bPogSFDown)/(bPogSF)'],
# 'interference'     : ['(bPogSFUp)/(bPogSF)', '(bPogSFDown)/(bPogSF)'],
                   'WW_DoubleScattering'     : ['(bPogSFUp)/(bPogSF)', '(bPogSFDown)/(bPogSF)'],

#Add Signal!!! WpWmJJ_EWK_noTop
                }
}

nuisances['trigg']  = {
                'name'  : 'trigger',
                'kind'  : 'weight',
                #'kind'  : 'tree', #'weight',
                'type'  : 'shape',
                'samples'  : {
                   'ggH_hww' : ['(effTrigW_Up)/(effTrigW)', '(effTrigW_Down)/(effTrigW)'],
                   'qqH_hww' : ['(effTrigW_Up)/(effTrigW)', '(effTrigW_Down)/(effTrigW)'],
                   'WH_hww'  : ['(effTrigW_Up)/(effTrigW)', '(effTrigW_Down)/(effTrigW)'],
                   'ZH_hww'  : ['(effTrigW_Up)/(effTrigW)', '(effTrigW_Down)/(effTrigW)'],
                   'ggZH_hww': ['(effTrigW_Up)/(effTrigW)', '(effTrigW_Down)/(effTrigW)'],
                   'H_htt'   : ['(effTrigW_Up)/(effTrigW)', '(effTrigW_Down)/(effTrigW)'],
                   'H_hww'   : ['(effTrigW_Up)/(effTrigW)', '(effTrigW_Down)/(effTrigW)'],
                   'WH_hww'  : ['(effTrigW_Up)/(effTrigW)', '(effTrigW_Down)/(effTrigW)'],
                   'DY'      : ['(effTrigW_Up)/(effTrigW)', '(effTrigW_Down)/(effTrigW)'],
                   'VVV'     : ['(effTrigW_Up)/(effTrigW)', '(effTrigW_Down)/(effTrigW)'],
                   'VZ'      : ['(effTrigW_Up)/(effTrigW)', '(effTrigW_Down)/(effTrigW)'],
                   'ggWW'    : ['(effTrigW_Up)/(effTrigW)', '(effTrigW_Down)/(effTrigW)'],
                   'WW'      : ['(effTrigW_Up)/(effTrigW)', '(effTrigW_Down)/(effTrigW)'],
                   'top'     : ['(effTrigW_Up)/(effTrigW)', '(effTrigW_Down)/(effTrigW)'],
                   'Vg'      : ['(effTrigW_Up)/(effTrigW)', '(effTrigW_Down)/(effTrigW)'],
                   'VgS'     : ['(effTrigW_Up)/(effTrigW)', '(effTrigW_Down)/(effTrigW)'],
                   'WpWmJJ_EWK_noTop'     : ['(effTrigW_Up)/(effTrigW)', '(effTrigW_Down)/(effTrigW)'],
                   'WpWmJJ_QCD_noTop'     : ['(effTrigW_Up)/(effTrigW)', '(effTrigW_Down)/(effTrigW)'],
#                   'interference'     : ['(effTrigW_Up)/(effTrigW)', '(effTrigW_Down)/(effTrigW)'],
                   'WW_DoubleScattering'     : ['(effTrigW_Up)/(effTrigW)', '(effTrigW_Down)/(effTrigW)'],
#Add signal!!!
                },
              
}

id_syst_ele = [
               '((abs(std_vector_lepton_flavour[0]) == 11)*(std_vector_lepton_idisoWcut_WP_Tight80X_Up[0])/(std_vector_lepton_idisoWcut_WP_Tight80X[0])+(abs(std_vector_lepton_flavour[0]) == 13)) * ((abs(std_vector_lepton_flavour[1]) == 11)*(std_vector_lepton_idisoWcut_WP_Tight80X_Up[1])/(std_vector_lepton_idisoWcut_WP_Tight80X[1])+(abs(std_vector_lepton_flavour[1]) == 13))' ,
                              '((abs(std_vector_lepton_flavour[0]) == 11)*(std_vector_lepton_idisoWcut_WP_Tight80X_Down[0])/(std_vector_lepton_idisoWcut_WP_Tight80X[0])+(abs(std_vector_lepton_flavour[0]) == 13)) * ((abs(std_vector_lepton_flavour[1]) == 11)*(std_vector_lepton_idisoWcut_WP_Tight80X_Down[1])/(std_vector_lepton_idisoWcut_WP_Tight80X[1])+(abs(std_vector_lepton_flavour[1]) == 13))'
                                            ]



nuisances['idiso_ele']  = {
                'name'  : 'idiso_ele',
                'kind'  : 'weight',
                #'kind'  : 'tree', #'weight',
                'type'  : 'shape',
                'samples'  : {
                  'ggH_hww' : id_syst_ele, 
                  'qqH_hww' : id_syst_ele,
                  'WH_hww' : id_syst_ele,
                  'ZH_hww' : id_syst_ele,
                  'ggZH_hww' : id_syst_ele,
                  'H_hww' : id_syst_ele,
                  'WH_hww' : id_syst_ele,
                  'DY' : id_syst_ele,
                  'VVV' : id_syst_ele,
                  'VZ' : id_syst_ele,
                  'ggWW' : id_syst_ele,
                  'WW' : id_syst_ele,
                  'top' : id_syst_ele,
                  'Vg' : id_syst_ele,
                  'VgS' : id_syst_ele,
                  'WpWmJJ_EWK_noTop' : id_syst_ele, 
                  'WpWmJJ_QCD_noTop' : id_syst_ele,
#                 'interference' : id_syst_ele,
                   'WW_DoubleScattering' : id_syst_ele,
# !!!                 
                 },
                #'folderUp'   : 'eos/user/a/amassiro/HWW2015/22Jan_25ns_mAODv2_MC/MCl2loose__hadd__bSFL2pTEff__l2tight__wwSel__TrigEff/',    # uncertainties fixed!
                #'folderDown' : 'eos/user/a/amassiro/HWW2015/22Jan_25ns_mAODv2_MC/MCl2loose__hadd__bSFL2pTEff__l2tight__wwSel__TrigEff/' 
}
               
id_syst_mu = [
               '((abs(std_vector_lepton_flavour[0]) == 13)*(std_vector_lepton_idisoWcut_WP_Tight80X_Up[0])/(std_vector_lepton_idisoWcut_WP_Tight80X[0])+(abs(std_vector_lepton_flavour[0]) == 11)) * ((abs(std_vector_lepton_flavour[1]) == 13)*(std_vector_lepton_idisoWcut_WP_Tight80X_Up[1])/(std_vector_lepton_idisoWcut_WP_Tight80X[1])+(abs(std_vector_lepton_flavour[1]) == 11))',
                              '((abs(std_vector_lepton_flavour[0]) == 13)*(std_vector_lepton_idisoWcut_WP_Tight80X_Down[0])/(std_vector_lepton_idisoWcut_WP_Tight80X[0])+(abs(std_vector_lepton_flavour[0]) == 11)) * ((abs(std_vector_lepton_flavour[1]) == 13)*(std_vector_lepton_idisoWcut_WP_Tight80X_Down[1])/(std_vector_lepton_idisoWcut_WP_Tight80X[1])+(abs(std_vector_lepton_flavour[1]) == 11))'
                                           ]



nuisances['idiso_mu']  = {
                'name'  : 'idiso_mu',
                'kind'  : 'weight',
                #'kind'  : 'tree', #'weight',
                'type'  : 'shape',
                'samples'  : {
                  'ggH_hww' : id_syst_mu,
                  'qqH_hww' : id_syst_mu,
                  'WH_hww' : id_syst_mu,
                  'ZH_hww' : id_syst_mu,
                  'ggZH_hww' : id_syst_mu,
                  'H_hww' : id_syst_mu,
                  'WH_hww' : id_syst_mu,
                  'DY' : id_syst_mu,
                  'VVV' : id_syst_mu,
                  'VZ' : id_syst_mu,
                  'ggWW' : id_syst_mu,
                  'WW' : id_syst_mu,
                  'top' : id_syst_mu,
                  'Vg' : id_syst_mu,
                  'VgS' : id_syst_mu,
                  'WpWmJJ_EWK_noTop' : id_syst_mu, 
                  'WpWmJJ_QCD_noTop' : id_syst_mu,
#                   'interference' : 
                   'WW_DoubleScattering' : id_syst_mu,  
                 
# !!!
                },
                #'folderUp'   : 'eos/user/a/amassiro/HWW2015/22Jan_25ns_mAODv2_MC/MCl2loose__hadd__bSFL2pTEff__l2tight__wwSel__TrigEff/',    # uncertainties fixed!
                #'folderDown' : 'eos/user/a/amassiro/HWW2015/22Jan_25ns_mAODv2_MC/MCl2loose__hadd__bSFL2pTEff__l2tight__wwSel__TrigEff/' 
}
# nuisances handled by means of a different set of trees


nuisances['jes']  = {
                'name'  : 'scale_j', 
                'kind'  : 'tree',
                'type'  : 'shape',
                'samples'  : {
                   'ggWW' :['1', '1'],
                   'WW' :  ['1', '1'],
                   'DY' :  ['1', '1'], # messa
                   'top' : ['1', '1'],
                   'VZ' :  ['1', '1'],
                   'VVV' : ['1', '1'],
                   'ggH_hww' : ['1', '1'],
                   'qqH_hww' : ['1', '1'],
                   'WH_hww' :  ['1', '1'],
                   'ZH_hww' :  ['1', '1'],
                   'ggZH_hww' :  ['1', '1'],
                   'H_hww'  :  ['1', '1'],
                   'H_htt'  : ['1', '1'],
                   #'Vg' : ['1', '1'], #messa
                   'VgS': ['1', '1'],
                   'WpWmJJ_EWK_noTop': ['1', '1'],
                   'WpWmJJ_QCD_noTop': ['1', '1'],
#                   'interference': ['1', '1'],
                   'WW_DoubleScattering': ['1', '1'],

#Add Signal!!! 
                },
                'folderUp'   : '/eos/cms/store/caf/user/lenzip/Full2016/Feb2017_summer16/MCl2looseCut__hadd__bSFL2pTEffCut__l2tight__JESup__wwSel__genericFormulas/',
                'folderDown' : '/eos/cms/store/caf/user/lenzip/Full2016/Feb2017_summer16/MCl2looseCut__hadd__bSFL2pTEffCut__l2tight__JESdo__wwSel__genericFormulas/' 
}
nuisances['electronpt']  = {
                'name'  : 'scale_e', 
                'kind'  : 'tree',
                'type'  : 'shape',
                'samples'  : {
                   'ggWW' :['1', '1'],
                   'WW' :  ['1', '1'],
                   'DY' :  ['1', '1'], # messa
                   'top' : ['1', '1'],
                   'VZ' :  ['1', '1'],
                   'VVV' : ['1', '1'],
                   'ggH_hww' : ['1', '1'],
                   'qqH_hww' : ['1', '1'],
                   'WH_hww'  :  ['1', '1'],
                   'ZH_hww'  :  ['1', '1'],
                   'ggZH_hww':  ['1', '1'],
                   'H_hww'   :  ['1', '1'],
                   'H_htt'   : ['1', '1'],
                   'Vg' : ['1', '1'],
                   'VgS': ['1', '1'],
                   'WpWmJJ_EWK_noTop': ['1', '1'],
                   'WpWmJJ_QCD_noTop': ['1', '1'],
#                   'interference': ['1', '1'],
                   'WW_DoubleScattering': ['1', '1'],
#Add signal!!!
                },
                'folderUp'   : '/eos/cms/store/caf/user/lenzip/Full2016/Feb2017_summer16/MCl2looseCut__hadd__bSFL2pTEffCut__l2tight__LepElepTCutup__wwSel__genericFormulas/',
                'folderDown' : '/eos/cms/store/caf/user/lenzip/Full2016/Feb2017_summer16/MCl2looseCut__hadd__bSFL2pTEffCut__l2tight__LepElepTCutdo__wwSel__genericFormulas/' 
}    
nuisances['muonpt']  = {
                'name'  : 'scale_m', 
                'kind'  : 'tree',
                'type'  : 'shape',
                'samples'  : {
                   'ggWW' :['1', '1'],
                   'WW' :  ['1', '1'],
                   'DY' :  ['1', '1'], # messa
                   'top' : ['1', '1'],
                   'VZ' :  ['1', '1'],
                   'VVV' : ['1', '1'],
                   'ggH_hww' : ['1', '1'],
                   'qqH_hww' : ['1', '1'],
                   'WH_hww' :  ['1', '1'],
                   'ZH_hww' :  ['1', '1'],
                   'ggZH_hww':  ['1', '1'],
                   'H_hww' :  ['1', '1'],
                   'H_htt' : ['1', '1'],
                   'Vg' : ['1', '1'],
                   'VgS': ['1', '1'],
                   'WpWmJJ_EWK_noTop': ['1', '1'],
                   'WpWmJJ_QCD_noTop': ['1', '1'],
#                   'interference': ['1', '1'],
                   'WW_DoubleScattering': ['1', '1'],
#Add signal!!!

                },
                'folderUp'   : '/eos/cms/store/caf/user/lenzip/Full2016/Feb2017_summer16/MCl2looseCut__hadd__bSFL2pTEffCut__l2tight__LepMupTCutup__wwSel__genericFormulas/',
                'folderDown' : '/eos/cms/store/caf/user/lenzip/Full2016/Feb2017_summer16/MCl2looseCut__hadd__bSFL2pTEffCut__l2tight__LepMupTCutdo__wwSel__genericFormulas/' 
}

nuisances['met']  = {
                'name'  : 'scale_met', 
                'kind'  : 'tree',
                'type'  : 'shape',
                'samples'  : {
                   'ggWW' :['1', '1'],
                   'WW' :  ['1', '1'],
                   'DY' :  ['1', '1'], #messa
                   'top' : ['1', '1'],
                   'VZ' :  ['1', '1'],
                   'VVV' : ['1', '1'],
                   'ggH_hww' : ['1', '1'],
                   'qqH_hww' : ['1', '1'],
                   'WH_hww' :  ['1', '1'],
                   'ZH_hww' :  ['1', '1'],
                   'ggZH_hww':  ['1', '1'],
                   'H_hww' :  ['1', '1'],
                   'H_htt' : ['1', '1'],
                   #'Vg' : ['1', '1'], #messa
                   'VgS': ['1', '1'],
                   'WpWmJJ_EWK_noTop': ['1', '1'],
                   'WpWmJJ_QCD_noTop': ['1', '1'],
#                   'interference': ['1', '1'],
                   'WW_DoubleScattering': ['1', '1'],
#Add signal!!!

                },
                'folderUp'   : '/eos/cms/store/caf/user/lenzip/Full2016/Feb2017_summer16/MCl2looseCut__hadd__bSFL2pTEffCut__l2tight__METup__wwSel__genericFormulas/',
                'folderDown' : '/eos/cms/store/caf/user/lenzip/Full2016/Feb2017_summer16/MCl2looseCut__hadd__bSFL2pTEffCut__l2tight__METdo__wwSel__genericFormulas/' 
}
                
                
# statistical fluctuation
# on MC/data
# "stat" is a special word to identify this nuisance
nuisances['stat']  = {
                # apply to the following samples: name of samples here must match keys in samples.py
               'samples'  : {
                   
                   'ttbar': {
                         'typeStat' : 'bbb',#Bin by bin
                         'zeroMCError' : '0',
                         },

                   'singletop': {
                         'typeStat' : 'bbb',
                         'zeroMCError' : '0',
                         },
                    
                   'top': {
                         'typeStat' : 'bbb',
                         'zeroMCError' : '0',
                         },
                 

                   'DY': {
                         'typeStat' : 'bbb',
                         'zeroMCError' : '0',
                         },
                    
                   'ggWW': {
                         'typeStat' : 'bbb',
                         'zeroMCError' : '0',
                         },
                    
                   'ggWW_Int': {
                         'typeStat' : 'bbb',
                         'zeroMCError' : '0',
                         },
                    
                   'WW': {
                         'typeStat' : 'bbb',
                         'zeroMCError' : '0',
                         },

                   'VZ': {
                         'typeStat' : 'bbb',
                         'zeroMCError' : '0',
                         },

                   'WZ': {
                         'typeStat' : 'bbb',
                         'zeroMCError' : '0',
                         },

                   'VVV': {
                         'typeStat' : 'bbb',
                         'zeroMCError' : '0',
                         },

                   'H_hww': {
                         'typeStat' : 'bbb',
                         'zeroMCError' : '0',
                         },

                   'ggH_hww': {
                         'typeStat' : 'bbb',
                         'zeroMCError' : '0',
                         },

                   'qqH_hww': {
                         'typeStat' : 'bbb',
                         'zeroMCError' : '0',
                         },

                   'WH_hww': {
                         'typeStat' : 'bbb',
                         'zeroMCError' : '0',
                         },

                   'ZH_hww': {
                         'typeStat' : 'bbb',
                         'zeroMCError' : '0',
                         },

                   'H_htt': {
                         'typeStat' : 'bbb',
                         'zeroMCError' : '0',
                         },

                   'ggH_htt': {
                         'typeStat' : 'bbb',
                         'zeroMCError' : '0',
                         },

                   'qqH_htt': {
                         'typeStat' : 'bbb',
                         'zeroMCError' : '0',
                         },

                   'WH_htt': {
                         'typeStat' : 'bbb',
                         'zeroMCError' : '0',
                         },

                   'ZH_htt': {
                         'typeStat' : 'bbb',
                         'zeroMCError' : '0',
                         },

                   'ggZH_hww': {
                         'typeStat' : 'bbb',
                         'zeroMCError' : '0',
                         },
                   
                   'Fake': {  # needed? da rimettere
                         'typeStat' : 'bbb',
                         },
                   
                   'Vg': {  
                         'typeStat' : 'bbb',
                         'zeroMCError' : '0',
                         },

                   'VgS':{  
                         'typeStat' : 'bbb',
                         'zeroMCError' : '0',
                         },

                   'WpWmJJ_EWK_noTop':{  
                         'typeStat' : 'bbb',
                         'zeroMCError' : '0',
                         },

                   'WpWmJJ_QCD_noTop':{  
                         'typeStat' : 'bbb',
                         'zeroMCError' : '0',
                         },



                   'interference':{  
                         'typeStat' : 'bbb',
                         'zeroMCError' : '0',
                         },


                   'WW_DoubleScattering':{  
                         'typeStat' : 'bbb',
                         'zeroMCError' : '0',


                         },

#Add signal!!!
                 },
               'type'  : 'shape'
              }

