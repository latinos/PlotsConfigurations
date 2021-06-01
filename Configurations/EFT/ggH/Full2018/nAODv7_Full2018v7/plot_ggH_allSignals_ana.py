# plot configuration



groupPlot = {}
plot = {}
# 
# Groups of samples to improve the plots.
# If not defined, normal plots is used
#

groupPlot['top']  = {  
                  'nameHR' : 'tW and t#bar{t}',
                  'isSignal' : 0,
                  'color': 400,   # kYellow
                  'samples'  : ['top']
              }
groupPlot['WW']  = {  
                  'nameHR' : 'WW',
                  'isSignal' : 0,
                  'color': 851, # kAzure -9 
                  'samples'  : ['WW', 'ggWW', 'WWewk']
              }
groupPlot['Fake']  = {  
                  'nameHR' : 'Non-prompt',
                  'isSignal' : 0,
                  'color': 921,    # kGray + 1
                  'samples'  : ['Fake_em', 'Fake_me']
              }


groupPlot['DY']  = {  
                  'nameHR' : "DY",
                  'isSignal' : 0,
                  'color': 418,    # kGreen+2
                  'samples'  : ['DY','Dyemb']
              }



groupPlot['VVV']  = {  
                  'nameHR' : 'VVV',
                  'isSignal' : 0,
                  'color': 857, # kAzure -3  
                  'samples'  : ['VVV']
              }


groupPlot['VZ']  = {  
                  'nameHR' : "VZ",
                  'isSignal' : 0,
                  'color'    : 617,   # kViolet + 1  
                  'samples'  : ['VZ']
              }

groupPlot['Vg']  = {  
                  'nameHR' : "V#gamma",
                  'isSignal' : 0,
                  'color'    : 810,   # kOrange + 10
                  'samples'  : ['Vg']
              }

groupPlot['VgS']  = {
                  'nameHR' : "V#gamma*",
                  'isSignal' : 0,
                  'color'    : 409,   # kGreen - 9
                  'samples'  : ['VgS_L','VgS_H']
              }



groupPlot['SM']  = {  
                  'nameHR' : 'H SM',
                  'isSignal' : 1,
                  'color': 4, 
                  'scale': 1., 
                  'samples'  : ['ggH_T1', 'VBF_T1', 'WH_T1', 'ZH_T1']
              }

groupPlot['BSM']  = {
                      'nameHR' : 'BSM',
                      'color' : 2,
                      'isSignal' : 1,
                      'isData'   : 0,
                      'scale'    : 1.,
                      'samples'  : ['ggH_T3','VBF_T5','WH_T5','ZH_T5']
                    }
'''
groupPlot['SM Background']  = {  
                  'nameHR' : "DY",
                  'isSignal' : 0,
                  'color': 418,    # kGreen+2
                  'samples'  : ['Dyemb','WW', 'ggWW', 'WWewk','top','VVV','VZ','Vg','VgS']
              }

groupPlot['ggH_T1']  = {
                      'nameHR' : 'ggH SM',
                      'color' : 632,
                      'isSignal' : 1,
                      'isData'   : 0,
                      'scale'    : 1,
                      'samples'  : ['ggH_T1']
                    }

groupPlot['ggH_T2']  = {
                      'nameHR' : 'ggH SM+BSM',
                      'color' : 600,
                      'isSignal' : 1,
                      'isData'   : 0,
                      'scale'    : 1,
                      'samples'  : ['ggH_T2']
                    }

groupPlot['ggH_T3']  = {
                      'nameHR' : 'ggH BSM',
                      'color' : 418,
                      'isSignal' : 1,
                      'isData'   : 0,
                      'scale'    : 1,
                      'samples'  : ['ggH_T3']
                    }
'''
'''
groupPlot['VBF_T1']  = {
                      'nameHR' : 'VBF SM',
                      'color' : 851,
                      'isSignal' : 1,
                      'isData'   : 0,
                      'scale'    : 1,
                      'samples'  : ['VBF_T1']
                    }

groupPlot['VBF_T2']  = {
                      'nameHR' : 'VBF INT13',
                      'color' : 617,
                      'isSignal' : 1,
                      'isData'   : 0,
                      'scale'    : 1,
                      'samples'  : ['VBF_T2']
                    }

groupPlot['VBF_T3']  = {
                      'nameHR' : 'VBF INT22',
                      'color' : 418,
                      'isSignal' : 1,
                      'isData'   : 0,
                      'scale'    : 1,
                      'samples'  : ['VBF_T3']
                    }

groupPlot['VBF_T4']  = {
                      'nameHR' : 'VBF INT31',
                      'color' : 409,
                      'isSignal' : 1,
                      'isData'   : 0,
                      'scale'    : 1,
                      'samples'  : ['VBF_T4']
                    }

groupPlot['VBF_T5']  = {
                      'nameHR' : 'VBF BSM',
                      'color' : 409,
                      'isSignal' : 1,
                      'isData'   : 0,
                      'scale'    : 1,
                      'samples'  : ['VBF_T5']
                    }

'''
'''
groupPlot['VBF_H0PM']  = {
                      'nameHR' : 'VBF h',
                      'color' : 851,
                      'isSignal' : 1,
                      'isData'   : 0,
                      'scale'    : 1,
                      'samples'  : ['VBF_H0PM']
                    }

groupPlot['VBF_H0M']  = {
                      'nameHR' : 'VBF H0^{-}',
                      'color' : 617,
                      'isSignal' : 1,
                      'isData'   : 0,
                      'scale'    : 1,
                      'samples'  : ['VBF_H0M']
                    }

groupPlot['VBF_H0PH']  = {
                      'nameHR' : 'VBF H0+',
                      'color' : 632,
                      'isSignal' : 1,
                      'isData'   : 0,
                      'scale'    : 1,
                      'samples'  : ['VBF_H0PH']
                    }
groupPlot['VBF_H0L1']  = {
                      'nameHR' : 'VBF H#Lambda1',
                      'color' : 409,
                      'isSignal' : 1,
                      'isData'   : 0,
                      'scale'    : 1,
                      'samples'  : ['VBF_H0L1']
                    }
'''
#ggF
plot['ggH_T1']  = {
                      'nameHR' : 'ggH SM',
                      'color' : 851,
                      'isSignal' : 1,
                      'isData'   : 0,
                      'scale'    : 1,
                    }

plot['ggH_T2']  = {
                      'nameHR' : 'ggH SM+BSM',
                      'color' : 617,
                      'isSignal' : 1,
                      'isData'   : 0,
                      'scale'    : 1,
                    }

plot['ggH_T3']  = {
                      'nameHR' : 'ggH BSM',
                      'color' : 409,
                      'isSignal' : 1,
                      'isData'   : 0,
                      'scale'    : 1,
                    }

# VBF
plot['VBF_T1']  = {
                      'nameHR' : 'VBF SM',
                      'color' : 851,
                      'isSignal' : 1,
                      'isData'   : 0,
                      'scale'    : 1,
                    }

plot['VBF_T2']  = {
                      'nameHR' : 'VBF INT13',
                      'color' : 617,
                      'isSignal' : 1,
                      'isData'   : 0,
                      'scale'    : 1,
                    }

plot['VBF_T3']  = {
                      'nameHR' : 'VBF INT22',
                      'color' : 409,
                      'isSignal' : 1,
                      'isData'   : 0,
                      'scale'    : 1,
                    }

plot['VBF_T4']  = {
                      'nameHR' : 'VBF INT31',
                      'color' : 409,
                      'isSignal' : 1,
                      'isData'   : 0,
                      'scale'    : 1,
                    }

plot['VBF_T5']  = {
                      'nameHR' : 'VBF BSM',
                      'color' : 409,
                      'isSignal' : 1,
                      'isData'   : 0,
                      'scale'    : 1,
                    }

# WH
plot['WH_T1']  = {
                      'nameHR' : 'WH SM',
                      'color' : 851,
                      'isSignal' : 1,
                      'isData'   : 0,
                      'scale'    : 1,
                    }

plot['WH_T2']  = {
                      'nameHR' : 'WH INT13',
                      'color' : 617,
                      'isSignal' : 1,
                      'isData'   : 0,
                      'scale'    : 1,
                    }

plot['WH_T3']  = {
                      'nameHR' : 'WH INT22',
                      'color' : 409,
                      'isSignal' : 1,
                      'isData'   : 0,
                      'scale'    : 1,
                    }

plot['WH_T4']  = {
                      'nameHR' : 'WH INT31',
                      'color' : 409,
                      'isSignal' : 1,
                      'isData'   : 0,
                      'scale'    : 1,
                    }

plot['WH_T5']  = {
                      'nameHR' : 'WH BSM',
                      'color' : 409,
                      'isSignal' : 1,
                      'isData'   : 0,
                      'scale'    : 1,
                    }

#ZH
plot['ZH_T1']  = {
                      'nameHR' : 'ZH SM',
                      'color' : 851,
                      'isSignal' : 1,
                      'isData'   : 0,
                      'scale'    : 1,
                    }

plot['ZH_T2']  = {
                      'nameHR' : 'ZH INT13',
                      'color' : 617,
                      'isSignal' : 1,
                      'isData'   : 0,
                      'scale'    : 1,
                    }

plot['ZH_T3']  = {
                      'nameHR' : 'ZH INT22',
                      'color' : 409,
                      'isSignal' : 1,
                      'isData'   : 0,
                      'scale'    : 1,
                    }

plot['ZH_T4']  = {
                      'nameHR' : 'ZH INT31',
                      'color' : 409,
                      'isSignal' : 1,
                      'isData'   : 0,
                      'scale'    : 1,
                    }

plot['ZH_T5']  = {
                      'nameHR' : 'ZH BSM',
                      'color' : 409,
                      'isSignal' : 1,
                      'isData'   : 0,
                      'scale'    : 1,
                    }

#plot = {}

# keys here must match keys in samples.py    
# 

plot['DY']  = {  
                  'color': 418,    # kGreen+2
                  'isSignal' : 0,
                  'isData'   : 0, 
                  'scale'    : 1.0,
                  #'cuts'  : {
                       #'hww2l2v_13TeV_of0j'      : 0.95 ,
                       #'hww2l2v_13TeV_top_of0j'  : 0.95 , 
                       #'hww2l2v_13TeV_dytt_of0j' : 0.95 ,
                       #'hww2l2v_13TeV_em_0j'     : 0.95 , 
                       #'hww2l2v_13TeV_me_0j'     : 0.95 , 
                       ##
                       #'hww2l2v_13TeV_of1j'      : 1.08 ,
                       #'hww2l2v_13TeV_top_of1j'  : 1.08 , 
                       #'hww2l2v_13TeV_dytt_of1j' : 1.08 ,
                       #'hww2l2v_13TeV_em_1j'     : 1.08 , 
                       #'hww2l2v_13TeV_me_1j'     : 1.08 , 
                        #},

              }

plot['Dyemb']  = {
                  'color': 418,    # kGreen+2
                  'isSignal' : 0,
                  'isData'   : 0, 
                  'scale'    : 1.0,
              }

plot['Fake_em']  = {  
                  'color': 921,    # kGray + 1
                  'isSignal' : 0,
                  'isData'   : 0,
                  'scale'    : 1.0                  
              }


plot['Fake_me']  = {  
                  'color': 921,    # kGray + 1
                  'isSignal' : 0,
                  'isData'   : 0,
                  'scale'    : 1.0                  
              }

              
plot['top'] = {   
                  'nameHR' : 'tW and t#bar{t}',
                  'color': 400,   # kYellow
                  'isSignal' : 0,
                  'isData'   : 0, 
                  'scale'    : 1.0,
                  #'cuts'  : {
                       #'hww2l2v_13TeV_of0j'      : 0.94 ,
                       #'hww2l2v_13TeV_top_of0j'  : 0.94 , 
                       #'hww2l2v_13TeV_dytt_of0j' : 0.94 ,
                       #'hww2l2v_13TeV_em_0j'     : 0.94 , 
                       #'hww2l2v_13TeV_me_0j'     : 0.94 , 
                       ##
                       #'hww2l2v_13TeV_of1j'      : 0.86 ,
                       #'hww2l2v_13TeV_top_of1j'  : 0.86 , 
                       #'hww2l2v_13TeV_dytt_of1j' : 0.86 ,
                       #'hww2l2v_13TeV_em_1j'     : 0.86 , 
                       #'hww2l2v_13TeV_me_1j'     : 0.86 , 
                        #},
                  }


plot['WW']  = {
                  'color': 851, # kAzure -9 
                  'isSignal' : 0,
                  'isData'   : 0,    
                  'scale'    : 1.0   # ele/mu trigger efficiency   datadriven
                  }

plot['ggWW']  = {
                  'color': 850, # kAzure -10
                  'isSignal' : 0,
                  'isData'   : 0,    
                  'scale'    : 1.0
                  }

plot['WWewk']  = {
                  'color': 851, # kAzure -9 
                  'isSignal' : 0,
                  'isData'   : 0,
                  'scale'    : 1.0   # ele/mu trigger efficiency   datadriven
                  }


plot['Vg']  = { 
                  'color': 859, # kAzure -1  
                  'isSignal' : 0,
                  'isData'   : 0,
                  'scale'    : 1.0
                  }

plot['VgS'] = { 
                  'color'    : 617,   # kViolet + 1  
                  'isSignal' : 0,
                  'isData'   : 0,
                  'scale'    : 1.0
                  }

plot['VZ']  = { 
                  'color': 858, # kAzure -2  
                  'isSignal' : 0,
                  'isData'   : 0,
                  'scale'    : 1.0
                  }

plot['VVV']  = { 
                  'color': 857, # kAzure -3  
                  'isSignal' : 0,
                  'isData'   : 0,
                  'scale'    : 1.0
                  }

# Htautau

plot['H_htt'] = {
                  'nameHR' : 'Htt',
                  'color': 632+4, # kRed+4 
                  'isSignal' : 0,
                  'isData'   : 0,    
                  'scale'    : 1    #
                  }


#plot['ZH_htt'] = {
#                  'nameHR' : 'ZHtt',
#                  'color': 632+3, # kRed+3 
#                  'isSignal' : 1,
#                  'isData'   : 0,    
#                  'scale'    : 1    #
#                  }
#
#plot['bbH_htt'] = {
#                  'nameHR' : 'bbHtt',
#                  'color': 632-1, # kRed-1 
#                  'isSignal' : 1,
#                  'isData'   : 0,
#                  'scale'    : 1    #
#                  }
#
#plot['ttH_htt'] = {
#                  'nameHR' : 'bbHtt',
#                  'color': 632-2, # kRed-1 
#                  'isSignal' : 1,
#                  'isData'   : 0,
#                  'scale'    : 1    #
#                  }
#
#
#plot['ggZH_htt'] = {
#                  'nameHR' : 'ggZHtt',
#                  'color': 632+4, # kRed+4
#                  'isSignal' : 1,
#                  'isData'   : 0,    
#                  'scale'    : 1    #
#                  }
#
#plot['WH_htt'] = {
#                  'nameHR' : 'WHtt',
#                  'color': 632+2, # kRed+2 
#                  'isSignal' : 1,
#                  'isData'   : 0,    
#                  'scale'    : 1    #
#                  }
#
#
#plot['qqH_htt'] = {
#                  'nameHR' : 'qqHtt',
#                  'color': 632+1, # kRed+1 
#                  'isSignal' : 1,
#                  'isData'   : 0,    
#                  'scale'    : 1    #
#                  }
#
#
#plot['ggH_htt'] = {
#                  'nameHR' : 'ggHtt',
#                  'color': 632, # kRed 
#                  'isSignal' : 1,
#                  'isData'   : 0,    
#                  'scale'    : 1    #
#                  }

# HWW 

#plot['H_hww'] = {
#                  'nameHR' : 'Hww',
#                  'color': 632, # kRed 
#                  'isSignal' : 1,
#                  'isData'   : 0,    
#                  'scale'    : 1    #
#                  }

plot['ZH_hww'] = {
                  'nameHR' : 'ZH',
                  'color': 632+3, # kRed+3 
                  'isSignal' : 0,
                  'isData'   : 0,    
                  'scale'    : 1    #
                  }

plot['ggZH_hww'] = {
                  'nameHR' : 'ggZH',
                  'color': 632+4, # kRed+4
                  'isSignal' : 0,
                  'isData'   : 0,    
                  'scale'    : 1    #
                  }

plot['WH_hww'] = {
                  'nameHR' : 'WH',
                  'color': 632+2, # kRed+2 
                  'isSignal' : 0,
                  'isData'   : 0,    
                  'scale'    : 1    #
                  }


plot['qqH_hww'] = {
                  'nameHR' : 'qqH',
                  'color': 632+1, # kRed+1 
                  'isSignal' : 0,
                  'isData'   : 0,    
                  'scale'    : 1    #
                  }


plot['ggH_hww'] = {
                  'nameHR' : 'ggH',
                  'color': 632, # kRed 
                  'isSignal' : 0,
                  'isData'   : 0,    
                  'scale'    : 1    #
                  }

#plot['bbH_hww'] = {
#                  'nameHR' : 'bbH',
#                  'color': 632+5, # kRed+5 
#                  'isSignal' : 1,
#                  'isData'   : 0,
#                  'scale'    : 1    #
#                  }

plot['ttH_hww'] = {
                  'nameHR' : 'ttH',
                  'color': 632+6, # kRed+6
                  'isSignal' : 0,
                  'isData'   : 0,
                  'scale'    : 1    #
                  }


# data

plot['DATA']  = { 
                  'nameHR' : 'Data',
                  'color': 1 ,  
                  'isSignal' : 0,
                  'isData'   : 1 ,
                  'isBlind'  : 1
              }




# additional options
legend = {}
legend['lumi'] = 'L = 59.7/fb'

legend['sqrt'] = '#sqrt{s} = 13 TeV'

#comboPlot['SMvsBSMvsBKG'] = {
#                      'groups' : ['Higgs SM','BSM','SM Background']
#}


