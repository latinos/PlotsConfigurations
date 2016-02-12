# nuisances

#nuisances = {}

# name of samples here must match keys in samples.py    
#

#nuisances['lumi']  = {
#               'name'  : 'lumi_13TeV', 
#               'all'   : 1 ,     # apply to all samples
#               'type'  : 'lnN',
#               'value' : '1.05' 
#              }
#
#
##nuisances['QCDscale_ggH0j']  = {
#               #'name'  : 'QCDscale_ggH0j', 
#               #'samples'  : {
#                   #'ggH_hww' : '1.056',
#                   #},
#               #'type'  : 'lnN',
#              #}
#
##nuisances['QCDscale_ggH1j']  = {
#               #'name'  : 'QCDscale_ggH1j', 
#               #'samples'  : {
#                   #'ggH_hww' : '1.13',
#                   #},
#               #'type'  : 'lnN',
#              #}
#
#nuisances['QCDscale_ggH0j']  = {
#                'name'  : 'QCDscale_ggH0j',
#                'kind'  : 'weight',
#                'type'  : 'shape',
#                'samples'  : {
#                   'ggH_hww'   : ['1.056*(njet==0)+1*(njet>0)', '0.944*(njet==0)+1*(njet>0)'],
#                   }
#                }
#
#nuisances['QCDscale_ggH1j']  = {
#                'name'  : 'QCDscale_ggH1j',
#                'kind'  : 'weight',
#                'type'  : 'shape',
#                'samples'  : {
#                   'ggH_hww'   : ['1.056*(njet==1)+1*(njet!=1)', '0.944*(njet==1)+1*(njet!=1)'],
#                   }
#                }
#
#
#
#nuisances['QCDscale_ggH']  = {
#               'name'  : 'QCDscale_ggH', 
#               'samples'  : {
#                   'ggH_hww' : '0.921/1.074',
#                   'ggH_htt' : '0.921/1.074',
#                   'H_htt'   : '0.921/1.074',
#                   },
#               'type'  : 'lnN',
#              }
#
#nuisances['QCDscale_qqH']  = {
#               'name'  : 'QCDscale_qqH', 
#               'samples'  : {
#                   'qqH_hww' : '0.993/1.007',
#                   'qqH_htt' : '0.993/1.007',
#                   },
#               'type'  : 'lnN',
#              }
#
#nuisances['QCDscale_WH']  = {
#               'name'  : 'QCDscale_WH', 
#               'samples'  : {
#                   'WH_hww' : '0.985/1.007',
#                   },
#               'type'  : 'lnN',
#              }
#
#nuisances['QCDscale_ZH']  = {
#               'name'  : 'QCDscale_ZH', 
#               'samples'  : {
#                   'ZH_hww' : '0.962/1.038',
#                   },
#               'type'  : 'lnN',
#              }
#
#
#nuisances['QCDscale_ggZH']  = {
#               'name'  : 'QCDscale_ggZH', 
#               'samples'  : {
#                   'ggZH_hww': '0.795/1.257',                   
#                   },
#               'type'  : 'lnN',
#              }
#
#
#nuisances['pdf_gg']  = {
#               'name'  : 'pdf_gg', 
#               'samples'  : {
#                   'ggH_hww' : '0.929/1.060',
#                   'ggH_htt' : '0.929/1.060',
#                   'H_htt'   : '0.929/1.060',
#                   'ggZH_hww': '0.949/1.051',                   
#                   },
#               'type'  : 'lnN',
#              }
#
#
#nuisances['pdf_qqbar']  = {
#               'name'  : 'pdf_qqbar', 
#               'type'  : 'lnN',
#               'samples'  : {
#                   'qqH_hww' : '0.97/1.03',
#                   'qqH_htt' : '0.97/1.03',
#                   'WH_hww' : '0.978/1.022',
#                   'ZH_hww' : '0.978/1.022',
#                   },
#              }
#
#
#
#nuisances['kfactggww']  = {
#               'name'  : 'kfactggww', 
#               'type'  : 'lnN',
#               'samples'  : {
#                   'ggWW' : '1.30',
#                   },
#              }
#
#
#
#nuisances['WgStarScale']  = {
#                'name'  : 'WgStarScale',
#                'kind'  : 'weight',
#                'type'  : 'shape',
#                'samples'  : {
#                   'VZ'   : ['(dataset==6)*1.30+(dataset!=6)', '(dataset==6)*0.70+(dataset!=6)'],
#                   }
#                }
#
#
#nuisances['DYnormalization']  = {
#                'name'  : 'DYnormalization',
#                'kind'  : 'weight',
#                'type'  : 'shape',
#                'samples'  : {
#                   'DY'   : ['1.06*(njet==0)+1.13*(njet!=0)', '0.94*(njet==0)+0.87*(njet!=0)'],
#                   }
#                }
#
#
## old style "free floating", but still working!
##nuisances['WWnorm']  = {
#               #'name'  : 'WWnorm', 
#               #'samples'  : {
#                   #'WW' : 2.00,
#                   #},
#               #'type'  : 'lnU',
#              #}
#
## new style "free floating" background
## e.g. " z_norm rateParam  htsearch zll 1 "
#nuisances['WWnorm']  = {
#               'name'  : 'WWnorm', 
#               'samples'  : {
#                   'WW' : '1.00',
#                   },
#               'type'  : 'rateParam',
#              }
#
#
#
#
#
#
#
## FIXME: to be added and split
## - lepton scale into muon and electron scale
## - lepton resolution
## - pileup
#
#
### nuisances handled by means of a weight in the tree
#
##nuisances['pileup']  = {
#                #'name'  : 'pileup', 
#                #'kind'  : 'weight',
#                #'type'  : 'shape',
#                #'samples'  : {
#                   ##'ttbar' : ['puWup/puW', 'puWdown/puW'],
#                   ##'DY'    : ['puWup/puW', 'puWdown/puW']
#                   #'ttbar' : ['3./puW', '0.3/puW'],
#                   #'DY'    : ['3./puW', '0.3/puW']
#                #}
##}
#
#
#nuisances['fake']  = {
#                'name'  : 'fakehww',
#                'kind'  : 'weight',
#                'type'  : 'shape',
#                'samples'  : {
#                   'Fake'      : ['(fakeW2l0jUp*(njet==0)+fakeW2l1jUp*(njet==1)+fakeW2l2jUp*(njet>=2))/(fakeW2l0j*(njet==0)+fakeW2l1j*(njet==1)+fakeW2l2j*(njet>=2))',
#                                  '(fakeW2l0jDown*(njet==0)+fakeW2l1jDown*(njet==1)+fakeW2l2jDown*(njet>=2))/(fakeW2l0j*(njet==0)+fakeW2l1j*(njet==1)+fakeW2l2j*(njet>=2))'],
#                }
#}
# 
#
#nuisances['fakestat']  = {
#                'name'  : 'fakestathww',
#                'kind'  : 'weight',
#                'type'  : 'shape',
#                'samples'  : {
#                   'Fake'      : ['(fakeW2l0jstatUp*(njet==0)+fakeW2l1jstatUp*(njet==1)+fakeW2l2jstatUp*(njet>=2))/(fakeW2l0j*(njet==0)+fakeW2l1j*(njet==1)+fakeW2l2j*(njet>=2))',
#                                  '(fakeW2l0jstatDown*(njet==0)+fakeW2l1jstatDown*(njet==1)+fakeW2l2jstatDown*(njet>=2))/(fakeW2l0j*(njet==0)+fakeW2l1j*(njet==1)+fakeW2l2j*(njet>=2))'],
#                }
#}
# 
# 
# 
#nuisances['btag']  = {
#                'name'  : 'btag',
#                'kind'  : 'weight',
#                'type'  : 'shape',
#                'samples'  : {
#                   'DY'      : ['(bTPSFUp)/(bTPSF)*(njet==0)+(bPogSFUp)/(bPogSF)*(njet>0)', '(bTPSFDown)/(bTPSF)*(njet==0)+(bPogSFDown)/(bPogSF)*(njet>0)'],
#                   'VVV'     : ['(bTPSFUp)/(bTPSF)*(njet==0)+(bPogSFUp)/(bPogSF)*(njet>0)', '(bTPSFDown)/(bTPSF)*(njet==0)+(bPogSFDown)/(bPogSF)*(njet>0)'],
#                   'VZ'      : ['(bTPSFUp)/(bTPSF)*(njet==0)+(bPogSFUp)/(bPogSF)*(njet>0)', '(bTPSFDown)/(bTPSF)*(njet==0)+(bPogSFDown)/(bPogSF)*(njet>0)'],
#                   'WW'      : ['(bTPSFUp)/(bTPSF)*(njet==0)+(bPogSFUp)/(bPogSF)*(njet>0)', '(bTPSFDown)/(bTPSF)*(njet==0)+(bPogSFDown)/(bPogSF)*(njet>0)'],
#                   'top'     : ['(bTPSFUp)/(bTPSF)*(njet==0)+(bPogSFUp)/(bPogSF)*(njet>0)', '(bTPSFDown)/(bTPSF)*(njet==0)+(bPogSFDown)/(bPogSF)*(njet>0)'],
#                }
#}
# 
# 
#
#nuisances['tttwTh']  = {
#                'name'  : 'tttwTh',   # Theory uncertainty
#                'kind'  : 'weight',
#                'type'  : 'shape',
#                'samples'  : {  # up              down
#                   'top'     : ['((dataset==15 || dataset==16) * 1.17 + (dataset==17 || dataset==18 || dataset==19))',
#                                '((dataset==15 || dataset==16) * 0.83 + (dataset==17 || dataset==18 || dataset==19))'],
#                }
#                # tt = 17/18/19 depending on the sample/generator
#                # tW = 15/16
#                
#}
#  
#  
#  
#  
#nuisances['trigg']  = {
#                'name'  : 'trigger',
#                'kind'  : 'weight',
#                'type'  : 'shape',
#                'samples'  : {
#                   'DY'      : ['(effTrigW_Up)/(effTrigW)', '(effTrigW_Down)/(effTrigW)'],
#                   'VVV'     : ['(effTrigW_Up)/(effTrigW)', '(effTrigW_Down)/(effTrigW)'],
#                   'VZ'      : ['(effTrigW_Up)/(effTrigW)', '(effTrigW_Down)/(effTrigW)'],
#                   'WW'      : ['(effTrigW_Up)/(effTrigW)', '(effTrigW_Down)/(effTrigW)'],
#                   'top'     : ['(effTrigW_Up)/(effTrigW)', '(effTrigW_Down)/(effTrigW)'],
#                }
#}
#
#
#
#
## nuisances handled by means of a different set of trees
#
#
#nuisances['jes']  = {
#                'name'  : 'scale_j', 
#                'kind'  : 'tree',
#                'type'  : 'shape',
#                'samples'  : {
#                   'WW' :  ['1', '1'],
#                   'DY' :  ['1', '1'],
#                   'top' : ['1', '1'],
#                   'VZ' :  ['1', '1'],
#                   'VVV' : ['1', '1'],
#                   'ggH_hww' : ['1', '1'],
#                   'qqH_hww' : ['1', '1'],
#                   'WH_hww' :  ['1', '1'],
#                   'ZH_hww' :  ['1', '1'],
#                   'H_hww' :  ['1', '1'],
#                   'H_htt' : ['1', '1'],
#                },
#                'folderUp'   : '/media/data/amassiro/LatinoTrees/Moriond/mcwghtcount__MC__l2selFix__hadd__bSFL2Eff__JESup/',
#                'folderDown' : '/media/data/amassiro/LatinoTrees/Moriond/mcwghtcount__MC__l2selFix__hadd__bSFL2Eff__JESdo/' 
#}
#
## scp -r amassiro@lxplus003.cern.ch:/tmp/amassiro/eos/user/x/xjanssen/HWW2015/21Oct_25ns_MC/mcwghtcount__MC__l2selFix__hadd__bSFL2Eff__JESup/    /media/data/amassiro/LatinoTrees/Moriond/
## scp -r amassiro@lxplus003.cern.ch:/tmp/amassiro/eos/user/x/xjanssen/HWW2015/21Oct_25ns_MC/mcwghtcount__MC__l2selFix__hadd__bSFL2Eff__JESdo/    /media/data/amassiro/LatinoTrees/Moriond/
#
#
#nuisances['leptonpt']  = {
#                'name'  : 'scale_l', 
#                'kind'  : 'tree',
#                'type'  : 'shape',
#                'samples'  : {
#                   'WW' :  ['1', '1'],
#                   'DY' :  ['1', '1'],
#                   'top' : ['1', '1'],
#                   'VZ' :  ['1', '1'],
#                   'VVV' : ['1', '1'],
#                   'ggH_hww' : ['1', '1'],
#                   'qqH_hww' : ['1', '1'],
#                   'WH_hww' :  ['1', '1'],
#                   'ZH_hww' :  ['1', '1'],
#                   'H_hww' :  ['1', '1'],
#                   'H_htt' : ['1', '1'],
#                },
#                'folderUp'   : '/media/data/amassiro/LatinoTrees/Moriond/mcwghtcount__MC__l2selFix__hadd__bSFL2Eff__LeppTup/',
#                'folderDown' : '/media/data/amassiro/LatinoTrees/Moriond/mcwghtcount__MC__l2selFix__hadd__bSFL2Eff__LeppTdo/' 
#}
#
## scp -r amassiro@lxplus003.cern.ch:/tmp/amassiro/eos/user/x/xjanssen/HWW2015/21Oct_25ns_MC/mcwghtcount__MC__l2selFix__hadd__bSFL2Eff__LeppTup/    /media/data/amassiro/LatinoTrees/Moriond/
## scp -r amassiro@lxplus003.cern.ch:/tmp/amassiro/eos/user/x/xjanssen/HWW2015/21Oct_25ns_MC/mcwghtcount__MC__l2selFix__hadd__bSFL2Eff__LeppTdo/    /media/data/amassiro/LatinoTrees/Moriond/
#
#
#nuisances['met']  = {
#                'name'  : 'scale_met', 
#                'kind'  : 'tree',
#                'type'  : 'shape',
#                'samples'  : {
#                   'WW' :  ['1', '1'],
#                   'DY' :  ['1', '1'],
#                   'top' : ['1', '1'],
#                   'VZ' :  ['1', '1'],
#                   'VVV' : ['1', '1'],
#                   'ggH_hww' : ['1', '1'],
#                   'qqH_hww' : ['1', '1'],
#                   'WH_hww' :  ['1', '1'],
#                   'ZH_hww' :  ['1', '1'],
#                   'H_hww' :  ['1', '1'],
#                   'H_htt' : ['1', '1'],
#                },
#                'folderUp'   : '/media/data/amassiro/LatinoTrees/Moriond/mcwghtcount__MC__l2selFix__hadd__bSFL2Eff__METup/',
#                'folderDown' : '/media/data/amassiro/LatinoTrees/Moriond/mcwghtcount__MC__l2selFix__hadd__bSFL2Eff__METdo/' 
#}

#scp -r amassiro@lxplus003.cern.ch:/tmp/amassiro/eos/user/x/xjanssen/HWW2015/21Oct_25ns_MC/mcwghtcount__MC__l2selFix__hadd__bSFL2Eff__METup/    /media/data/amassiro/LatinoTrees/Moriond/
#scp -r amassiro@lxplus003.cern.ch:/tmp/amassiro/eos/user/x/xjanssen/HWW2015/21Oct_25ns_MC/mcwghtcount__MC__l2selFix__hadd__bSFL2Eff__METdo/    /media/data/amassiro/LatinoTrees/Moriond/



                
                
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

                   'WZ': {
                         'typeStat' : 'bbb',
                         },

                   'VVV': {
                         'typeStat' : 'bbb',
                         },

                   'H_hww': {
                         'typeStat' : 'bbb',
                         },

                   'ggH_hww': {
                         'typeStat' : 'bbb',
                         },

                   'qqH_hww': {
                         'typeStat' : 'bbb',
                         },

                   'WH_hww': {
                         'typeStat' : 'bbb',
                         },

                   'ZH_hww': {
                         'typeStat' : 'bbb',
                         },

                   'H_htt': {
                         'typeStat' : 'bbb',
                         },

                   'ggH_htt': {
                         'typeStat' : 'bbb',
                         },

                   'qqH_htt': {
                         'typeStat' : 'bbb',
                         },

                   'WH_htt': {
                         'typeStat' : 'bbb',
                         },

                   'ZH_htt': {
                         'typeStat' : 'bbb',
                         },


                 },
               'type'  : 'shape'
              }


