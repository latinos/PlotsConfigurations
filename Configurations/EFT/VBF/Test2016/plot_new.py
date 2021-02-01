# plot configuration

### Backgrounds


plot['WW']  = {  
                  'nameHR' : 'WW',
                  'color': 7, 
                  'isSignal' : 0,
                  'isData'   : 0,
                  'scale'    : 1,
                 }
plot['DY']  = {  
                  'nameHR' : 'DY',
                  'color': 7, 
                  'isSignal' : 0,
                  'isData'   : 0,
                  'scale'    : 1,
                 }
plot['TTbar']  = {  
                  'nameHR' : 'TTbar',
                  'color': 7, 
                  'isSignal' : 0,
                  'isData'   : 0,
                  'scale'    : 1,
                 }
groupPlot['MC_Background'] = {
                  'nameHR' : 'MC Background ',
                  'color': 7,
                  'isSignal' : 0,
                  #'isData'   : 0,
                  'scale'    : 1,
                  'samples'  : ['WW', 'DY', 'TTbar']
                  }

'''
plot['qqH_htt']  = {  
                  'nameHR' : 'VBF h #rightarrow #tau #tau',
                  'color': 6, 
                  'isSignal' : 0,
                  'isData'   : 0,
                  'scale'    : 1,
                 }
plot['ggH_htt']  = {  
                  'nameHR' : 'gg h #rightarrow #tau #tau',
                  'color': 12, 
                  'isSignal' : 0,
                  'isData'   : 0,
                  'scale'    : 1,
                 }
####
plot['ggH_hww']  = {  
                  'nameHR' : 'gg h (Powheg)',
                  'color': 12, 
                  'isSignal' : 0,
                  'isData'   : 0,
                  'scale'    : 1,
                 }
plot['GGHjj_H0PM'] = {  
                  'nameHR' : 'gg h ',
                  'color': 3, 
                  'isSignal' : 0, 
                  'isData'   : 0,
                  'scale'    : 1,
                  }
plot['GGHjj_H0M']  =   {
                      'nameHR' : 'gg 0^{-}',
                      'color' : 4,
                      'isSignal' : 3, 
                      'isData'   : 0,
                      'scale'    : 1,
                     }
# VH
'''
plot['WH_H0PM'] = {  
                  'nameHR' : 'WH h ',
                  'color': 3, 
                  'isSignal' : 1, 
                  'isData'   : 0,
                  #'scale'    : 1,
                  }


groupPlot['WH_0PM'] = {
                  'nameHR' : 'WH h ',
                  'color': 3,
                  'isSignal' : 1,
                  #'isData'   : 0,
                  #'scale'    : 1,
		  'samples' : ['WH_H0PM'] 
                 }


plot['WH_H0M']  =   {
                      'nameHR' : 'WH 0^{-}',
                      'color' : 4,
                      'isSignal' : 1, 
                      'isData'   : 0,
                      'scale'    : 1,
                     }
groupPlot['WH_0M'] = {
                  'nameHR' : 'WH 0^{-} ',
                  'color': 4,
                  'isSignal' : 1,
                  #'isData'   : 0,
                  #'scale'    : 1,
                  'samples' : ['WH_H0M']
                 }

plot['ZH_H0PM'] = {  
                  'nameHR' : 'ZH h ',
                  'color': 5, 
                  'isSignal' : 1, 
                  'isData'   : 0,
                  'scale'    : 1,
                  }
groupPlot['ZH_0M'] = {
                  'nameHR' : 'ZH h ',
                  'color': 4,
                  'isSignal' : 1,
                  #'isData'   : 0,
                  #'scale'    : 1,
                  'samples' : ['ZH_H0PM']
                 }

plot['ZH_H0M']  =   {
                      'nameHR' : 'ZH 0^{-}',
                      'color' : 6,
                      'isSignal' : 3, 
                      'isData'   : 0,
                      'scale'    : 1,
                     }
groupPlot['ZH_0M'] = {
                  'nameHR' : 'ZH 0^{-} ',
                  'color': 4,
                  'isSignal' : 1,
                  #'isData'   : 0,
                  #'scale'    : 1,
                  'samples' : ['ZH_H0M']
                 }


'''
# data
plot['DATA']  = { 
                  'nameHR' : 'Data',
                  'color': 1 ,  
                  'isSignal' : 0,
                  'isData'   : 1,
                  'isBlind'  : 1
                }
'''

# additional options

legend['lumi'] = 'L = 35.9/fb'

legend['sqrt'] = '#sqrt{s} = 13 TeV'
