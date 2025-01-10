# plot configuration



groupPlot = OrderedDict()
plot = {}
globScale = 5.
# 
# Groups of samples to improve the plots.
# If not defined, normal plots is used
#

plot['DATA']  = {
                  'nameHR' : 'Data',
                  'color': 1 ,
                  'isSignal' : 0,
                  'isData'   : 1 ,
                  'isBlind'  : 0
              }

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
                  'nameHR' : 'Nonprompt',
                  'isSignal' : 0,
                  'color': 921,    # kGray + 1
                  'samples'  : ['Fake']
              }
groupPlot['DY']  = {
                  'nameHR' : "DY",
                  'isSignal' : 0,
                  'color': 418,    # kGreen+2
                  'samples'  : ['DY','Dyemb']
              }
groupPlot['VV']  = {
                  'nameHR' : 'Multiboson',
                  'isSignal' : 0,
                  'color': 857,   # kViolet +1
                  'samples'  : ['VZ', 'Vg', 'VgS_L', 'VgS_H', 'VVV']
              }

processes = ["ggH","VBF","WH","ZH"]
sm = "ggF+VBF+VH"
bsm = "H0M"
factors = { 'H0PH' : "1.", 'H0M' : "1.", "H0L1" : "1.", "H0LZg" : "1." }
factorLabelBSM = { 'H0PH' : "a_{2}", 'H0M' : "a_{3}", 'H0L1' : "a_{#Lambda1}", 'H0LZg' : "a_{#Lambda1}^{Z#gamma}" }
tplLabelBSM = {'ggH' : "T3", 'VBF' : "T5", 'WH' : "T5", 'ZH' : "T5"}
powerLabelBSM = {
                  'BSM' : {'ggH' : "^{2}", 'VBF' : "^{4}", 'WH' : "^{4}", 'ZH' : "^{4}"},
                  'T2'  : {'ggH' : "", 'VBF' : "", 'WH' : "", 'ZH' : ""},
                  'T3'  : {'ggH' : "^{2}", 'VBF' : "^{2}", 'WH' : "^{2}", 'ZH' : "^{2}"},
                  'T4'  : {'ggH' : "^{3}", 'VBF' : "^{3}", 'WH' : "^{3}", 'ZH' : "^{3}"}
                }

isScaled = False
factor = {'BSM' : '', 'T2' : '', 'T3' : '', 'T4' : ''}
factor['BSM'] = factorLabelBSM[bsm] 
if isScaled:
  for tpl in ['BSM','T2','T3','T4']:
      if float(factors[bsm]) > 1.:
          factor[tpl] += "*"+factors[bsm]
      #factor[tpl] = "*"+factors[bsm]+powerLabelBSM[tpl][process]

groupPlot['TotalSig'] = {
                  'nameHR' : 'H #rightarrow WW',
                  'isSignal' : 0,
                  'color': 2,
                  'scale': 1.,
                  'samples'  : [process+'_T1' for process in processes]+\
                               [process+'_T2' for process in processes if (process != "ggH" or bsm != "H0M")]+\
                               [process+'_T3' for process in processes]+\
                               [process+'_T4' for process in processes if process != "ggH"]+\
                               [process+'_T5' for process in processes if process != "ggH"]
              }
groupPlot['SigSM'] = {
                  'nameHR' : 'H #rightarrow WW (f_{a3}=0)',
                  'isSignal' : 2,
                  'color': 2,
                  'style': 1, 
                  'scale': 1.,
                  'samples'  : [process+'_T1_prefit' for process in processes]
              }
groupPlot['SigBSM'] = {
                  'nameHR' : 'H #rightarrow WW (f_{a3}=1)',
                  'isSignal' : 2,
                  'color': 4,
                  'style': 1,
                  'scale': 1.,
                  'samples'  : [process+'_T3_prefit' for process in processes if process == "ggH"]+\
                               [process+'_T5_prefit' for process in processes if process != "ggH"]
              }
'''
groupPlot['T2']  = {
                      'nameHR' : sm+' (T2)'+factor['T2'],
                      'color' : 617,
                      'isSignal' : 1,
                      'isData'   : 0,
                      'scale'    : 1.,
                      'samples'  : [process+'_T2' for process in processes]
}

if process != "ggH":
    groupPlot['T3']  = {
                      'nameHR' : sm+' (T3)'+factor['T3'],
                      'color' : 418,
                      'isSignal' : 1,
                      'isData'   : 0,
                      'scale'    : 1.,
                      'samples'  : [process+'_T3' for process in processes]
                    }

    groupPlot['T4']  = {
                      'nameHR' : sm+' (T4)'+factor['T4'],
                      'color' : 409,
                      'isSignal' : 1,
                      'isData'   : 0,
                      'scale'    : 1.,
                      'samples'  : [process+'_T4' for process in processes]
                    }

'''
####### individual samples ###########
#ggF
plot['ggH_T1']  = {
                      'nameHR' : 'ggH SM',
                      'color' : 851,
                      'isSignal' : 0,
                      'isData'   : 0,
                      'scale'    : 1,
                    }
plot['ggH_T1_prefit']  = {
                      'nameHR' : 'ggH SM',
                      'color' : 851,
                      'isSignal' : 2,
                      'isData'   : 0,
                      'scale'    : globScale,
                    }
'''
plot['ggH_T2']  = {
                      'nameHR' : 'ggH SM+BSM',
                      'color' : 617,
                      'isSignal' : 1,
                      'isData'   : 0,
                      'scale'    : 1,
                    }
'''
plot['ggH_T3']  = {
                      'nameHR' : 'ggH BSM',
                      'color' : 409,
                      'isSignal' : 0,
                      'isData'   : 0,
                      'scale'    : 1,
                    }
plot['ggH_T3_prefit']  = {
                      'nameHR' : 'ggH BSM',
                      'color' : 409,
                      'isSignal' : 2,
                      'isData'   : 0,
                      'scale'    : globScale,
                    }

# VBF
plot['VBF_T1']  = {
                      'nameHR' : 'VBF SM',
                      'color' : 851,
                      'isSignal' : 0,
                      'isData'   : 0,
                      'scale'    : 1,
                    }
plot['VBF_T1_prefit']  = {
                      'nameHR' : 'VBF SM',
                      'color' : 851,
                      'isSignal' : 2,
                      'isData'   : 0,
                      'scale'    : globScale,
                    }
plot['VBF_T2']  = {
                      'nameHR' : 'VBF INT13',
                      'color' : 617,
                      'isSignal' : 0,
                      'isData'   : 0,
                      'scale'    : 1,
                    }

plot['VBF_T3']  = {
                      'nameHR' : 'VBF INT22',
                      'color' : 409,
                      'isSignal' : 0,
                      'isData'   : 0,
                      'scale'    : 1,
                    }

plot['VBF_T4']  = {
                      'nameHR' : 'VBF INT31',
                      'color' : 409,
                      'isSignal' : 0,
                      'isData'   : 0,
                      'scale'    : 1,
                    }
plot['VBF_T5']  = {
                      'nameHR' : 'VBF BSM',
                      'color' : 409,
                      'isSignal' : 0,
                      'isData'   : 0,
                      'scale'    : 1,
                    }
plot['VBF_T5_prefit']  = {
                      'nameHR' : 'VBF BSM',
                      'color' : 409,
                      'isSignal' : 2,
                      'isData'   : 0,
                      'scale'    : globScale,
                    }

# WH
plot['WH_T1']  = {
                      'nameHR' : 'WH SM',
                      'color' : 851,
                      'isSignal' : 0,
                      'isData'   : 0,
                      'scale'    : 1,
                    }
plot['WH_T1_prefit']  = {
                      'nameHR' : 'WH SM',
                      'color' : 851,
                      'isSignal' : 2,
                      'isData'   : 0,
                      'scale'    : globScale,
                    } 
plot['WH_T2']  = {
                      'nameHR' : 'WH INT13',
                      'color' : 617,
                      'isSignal' : 0,
                      'isData'   : 0,
                      'scale'    : 1,
                    }

plot['WH_T3']  = {
                      'nameHR' : 'WH INT22',
                      'color' : 409,
                      'isSignal' : 0,
                      'isData'   : 0,
                      'scale'    : 1,
                    }

plot['WH_T4']  = {
                      'nameHR' : 'WH INT31',
                      'color' : 409,
                      'isSignal' : 0,
                      'isData'   : 0,
                      'scale'    : 1,
                    }
plot['WH_T5']  = {
                      'nameHR' : 'WH BSM',
                      'color' : 409,
                      'isSignal' : 0,
                      'isData'   : 0,
                      'scale'    : 1,
                    }
plot['WH_T5_prefit']  = {
                      'nameHR' : 'WH BSM',
                      'color' : 409,
                      'isSignal' : 2,
                      'isData'   : 0,
                      'scale'    : globScale,
                    }
#ZH
plot['ZH_T1']  = {
                      'nameHR' : 'ZH SM',
                      'color' : 851,
                      'isSignal' : 0,
                      'isData'   : 0,
                      'scale'    : 1,
                    }
plot['ZH_T1_prefit']  = {
                      'nameHR' : 'ZH SM',
                      'color' : 851,
                      'isSignal' : 2,
                      'isData'   : 0,
                      'scale'    : globScale,
                    } 
plot['ZH_T2']  = {
                      'nameHR' : 'ZH INT13',
                      'color' : 617,
                      'isSignal' : 0,
                      'isData'   : 0,
                      'scale'    : 1,
                    }

plot['ZH_T3']  = {
                      'nameHR' : 'ZH INT22',
                      'color' : 409,
                      'isSignal' : 0,
                      'isData'   : 0,
                      'scale'    : 1,
                    }

plot['ZH_T4']  = {
                      'nameHR' : 'ZH INT31',
                      'color' : 409,
                      'isSignal' : 0,
                      'isData'   : 0,
                      'scale'    : 1,
                    }
plot['ZH_T5']  = {
                      'nameHR' : 'ZH BSM',
                      'color' : 409,
                      'isSignal' : 0,
                      'isData'   : 0,
                      'scale'    : 1,
                    }
plot['ZH_T5_prefit']  = {
                      'nameHR' : 'ZH BSM',
                      'color' : 409,
                      'isSignal' : 2,
                      'isData'   : 0,
                      'scale'    : globScale,
                    }

#SM backgrounds 
plot['DY']  = {  
                  'color': 418,    # kGreen+2
                  'isSignal' : 0,
                  'isData'   : 0, 
                  'scale'    : 1.0,
              }

plot['Dyemb']  = {  
                  'color': 418,    # kGreen+2
                  'isSignal' : 0,
                  'isData'   : 0,
                  'scale'    : 1.0,
              }


plot['Fake']  = {  
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

plot['VgS_L'] = { 
                  'color'    : 617,   # kViolet + 1  
                  'isSignal' : 0,
                  'isData'   : 0,
                  'scale'    : 1.0
                  }

plot['VgS_H'] = {
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


# additional options
legend = {}
legend['lumi'] = '138 fb^{-1}'
legend['sqrt'] = '(13 TeV)'

#comboPlot['SMvsALT'] = {
#                      'groups' : ['H0PM','H0PH','H0M','H0L1']
#}


