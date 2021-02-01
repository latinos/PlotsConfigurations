
# plot configuration

### Backgrounds GROUPS
### Comment out when you want to plot the backgrounds merged in the same distribution
groupPlot['MC_Background'] = {
                  'nameHR' : 'MC Background ',
                  'color': 7,
                  'isSignal' : 0,
                  #'isData'   : 0,
                  #'scale'    : 1,
                  'samples'  : ['WW', 'DY', 'TTbar']
                  }
### Comment out when you want to plot the MC backgrounds separated
plot['WW']  = {  
                  'nameHR' : 'WW',
                  'color': 7, 
                  'isSignal' : 0,
                  'isData'   : 0,
                  'scale'    : 1.0,
                 }
plot['DY']  = {  
                  'nameHR' : 'DY',
                  'color': 3, 
                  'isSignal' : 0,
                  'isData'   : 0,
                  'scale'    : 1.0,
                 }
plot['TTbar']  = {  
                  'nameHR' : 'TTbar',
                  'color': 5, 
                  'isSignal' : 0,
                  'isData'   : 0,
                  'scale'    : 1.0,
                 }

'''
groupPlot['WW_Bckg'] = {
                  'nameHR' : 'WH h ',
                  'color': 7,
                  'isSignal' : 0,
                  'isData'   : 0,
		  'scale'    : 1,
                  'samples'  : ['WW']
                  }

groupPlot['DY_Bckg']  = {
                  'nameHR' : 'DY',
                  'color': 3,
                  'isSignal' : 0,
                  'isData'   : 0,
                  'scale'    : 1,
		  'samples'  : ['DY']
                 }


groupPlot['TTbar_Bckg']  = {
                  'nameHR' : 'TTbar',
                  'color': 5,
                  'isSignal' : 0,
                  'isData'   : 0,
                  'scale'    : 1,
		  'samples'  : ['TTbar']
                 }

groupPlot['qqH_htt_Bckg']  = {
                  'nameHR' : 'VBF h #rightarrow #tau #tau',
                  'color': 6,
                  'isSignal' : 0,
                  'isData'   : 0,
                  'scale'    : 1,
		  'samples'  :['qqH_htt']
                 }
plot['qqH_htt']  = {  
                  'nameHR' : 'VBF h #rightarrow #tau #tau',
                  'color': 6, 
                  'isSignal' : 0,
                  'isData'   : 0,
                  'scale'    : 1,
                 }

groupPlot['ggH_htt_Bckg']  = {
                  'nameHR' : 'gg h #rightarrow #tau #tau',
                  'color': 12,
                  'isSignal' : 0,
                  'isData'   : 0,
                  'scale'    : 1,
		  'samples'  : ['ggH_htt']
                 }
plot['ggH_htt']  = {  
                  'nameHR' : 'gg h #rightarrow #tau #tau',
                  'color': 12, 
                  'isSignal' : 0,
                  'isData'   : 0,
                  'scale'    : 1,
                 }

#Backgrounds
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
                      'isSignal' : 1, 
                      'isData'   : 0,
                      'scale'    : 1,
                     }
'''
# VH

groupPlot['WH_SM'] = {  
                  'nameHR' : 'WH h ',
                  'color': 2, 
                  'isSignal' : 0, 
                  'isData'   : 0,
                  'samples'  : ['WH_H0PM']
                  }
groupPlot['ZH_SM'] = {  
                  'nameHR' : 'ZH h ',
                  'color': 9, 
                  'isSignal' : 0, 
                  'isData'   : 0,
                  'samples'  : ['ZH_H0PM']
                  }

plot['WH_H0PM'] = {  
                  'nameHR' : 'WH h ',
                  'color': 2, 
                  'isSignal' : 1, 
                  'isData'   : 0,
		  'scale' : 1.0
                  }

plot['ZH_H0PM'] = {  
                  'nameHR' : 'ZH h ',
                  'color': 9, 
                  'isSignal' : 1, 
                  'isData'   : 0,
                  'scale' : 1.0 
                  }


groupPlot['ZH_0M']  =   {
                      'nameHR' : 'ZH 0^{-}',
                      'color' : 800,
                      'isSignal' : 1, 
                      'isData'   : 0,
                      'samples'  : ['ZH_H0M']
                     }
groupPlot['WH_0M']  =   {
                      'nameHR' : 'WH 0^{-}',
                      'color' : 417,
                      'isSignal' : 1, 
                      'isData'   : 0,
                      'samples'  : ['WH_H0M']
                     }

plot['ZH_H0M']  =   {
                      'nameHR' : 'ZH 0^{-}',
                      'color' : 800,
                      'isSignal' : 1, 
                      'isData'   : 0,
		      'scale' : 1.0
                     }
plot['WH_H0M']  =   {
                      'nameHR' : 'WH 0^{-}',
                      'color' : 417,
                      'isSignal' : 1, 
                      'isData'   : 0,
                      'scale' :	1.0
                     }

'''
groupPlot['ZH_0P']  =   {
                      'nameHR' : 'ZH 0^{+}',
                      'color' : 800,
                      'isSignal' : 1,
                      'isData'   : 0,
                      'samples'  : ['ZH_H0PH']
                     }
groupPlot['WH_0P']  =   {
                      'nameHR' : 'WH 0^{+}',
                      'color' : 417,
                      'isSignal' : 1,
                      'isData'   : 0,
                      'samples'  : ['WH_H0PH']
                     }
plot['ZH_H0PH'] = {
                      'nameHR' : 'ZH 0^{+}',
                      'color' : 800,
                      'isSignal' : 1,
                      'isData'   : 0,
		      
                     }
plot['WH_H0PH']	= {
                      'nameHR' : 'WH 0^{+}',
                      'color' : 417,
                      'isSignal' : 1,
                      'isData'   : 0,
		    
                    }

groupPlot['ZH_HL']  =   {
                      'nameHR' : 'ZH 0^{#Lambda}',
                      'color' : 800,
                      'isSignal' : 0,
                      'isData'   : 0,
                      'samples'  : ['ZH_H0L1']
                     }
groupPlot['WH_HL']  =   {
                      'nameHR' : 'WH 0^{#Lambda}',
                      'color' : 417,
                      'isSignal' : 0,
                      'isData'   : 0,
                      'samples'  : ['WH_H0L1']
                     }
#H LAMBDA MODEL
plot['ZH_H0L1'] = {
                      'nameHR' : 'ZH 0^{#Lambda}',
                      'color' : 800,
                      'isSignal' : 0,
                      'isData'   : 0,
                      'scale'    : 1,
                     }
plot['WH_H0L1'] = {
                      'nameHR' : 'WH 0^{#Lambda}',
                      'color' : 417,
                      'isSignal' : 0,
                      'isData'   : 0,
                      'scale'    : 1,
                     }
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




