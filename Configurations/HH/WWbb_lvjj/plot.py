# plot configuration



# groupPlot = {}
# 
# Groups of samples to improve the plots.
# If not defined, normal plots is used
#




#groupPlot['HH']  = {  
#                 'nameHR' : 'HH',
#                 'isSignal' : 1,
#         0        'color': 861,   
#                 'samples'  : ['HH']
#              }

groupPlot['TTToSemilepton']  = {
                 	'nameHR' : 'TTToSemilepton',
                 	'isSignal' : 1,
                 	'color': 861, # kAzure +1 
                 	'samples'  : ['TTToSemilepton']
              		}

#groupPlot['Wjets']  = {
#                        'nameHR' : 'W+Jets',
#                        'isSignal' : 0,
#                        'color': 629,  
#                        'samples'  : ['Wjets']
#                        }

groupPlot['TTWJetsToLNu'] = {
				'nameHR' : 'TTWJetsToLNu',
				'isSignal' : 0,
				'color' : 629,
				'samples' : ['TTWJetsToLNu']
				}

groupPlot['WZTo1L1Nu2Q'] = {
                                'nameHR' : 'WZTo1L1Nu2Q',
                                'isSignal' : 0,
                                'color' : 415,
                                'samples' : ['WZTo1L1Nu2Q']
                                }



#groupPlot['top']  = {  
                  #'nameHR' : 'tW and t#bart',
                  #'isSignal' : 0,
                  #'color': 400, #  kYellow
                  #'samples'  : ['top']
              #}

#groupPlot['WW']  = {  
                  #'nameHR' : 'WW',
                  #'isSignal' : 0,
                  #'color': 851, # kAzure -9 
                  #'samples'  : ['WW', 'ggWW']
              #}

#groupPlot['VVV']  = {  
                  #'nameHR' : 'VVV',
                  #'isSignal' : 0,
                  #'color': 857, # kAzure -3  
                  #'samples'  : ['VVV']
              #}


#groupPlot['VZ']  = {  
                  #'nameHR' : "VZ/#gamma*/#gamma",
                  #'isSignal' : 0,
                  #'color'    : 617,   # kViolet + 1  
                  #'samples'  : ['VZ', 'Vg', 'Wg', 'VgS', 'WZ', 'ZZ','Zg']
              #}


#groupPlot['DY']  = {  
                  #'nameHR' : "DY",
                  #'isSignal' : 0,
                  #'color': 418,  #  kGreen+2
                  ##'samples'  : ['DY1', 'DY2']
                  #'samples'  : ['DY']
              #}


#groupPlot['Higgs']  = {  
                  #'nameHR' : 'Higgs',
                  #'isSignal' : 1,
                  #'color': 632, # kRed 
                  #'samples'  : ['H_htt', 'H_hww', 'ZH_hww', 'ggZH_hww', 'WH_hww', 'qqH_hww', 'ggH_hww','bbH_hww']
              #}






#plot = {}

# keys here must match keys in samples.py    
#                    
#plot['HH']  = {  
#                  'color': 861,    
#                  'isSignal' : 1,
#                  'isData'   : 0, 
#                  'scale'    : 1.   ,
#              }

plot['TTToSemilepton']  = {
                  'color': 861,    
                  'isSignal' : 1,
                  'isData'   : 0,
                  'scale'    : 1.   ,
              }

#plot['Wjets']  = {
#                  'color': 629,
#                  'isSignal' : 0,
#                  'isData'   : 0,
#                  'scale'    : 1.   ,
#              }

plot['TTWJetsToLNu']  = {
                  'color': 629,
                  'isSignal' : 0,
                  'isData'   : 0,
                  'scale'    : 1.   ,
              }

plot['WZTo1L1Nu2Q']  = {
                  'color': 415,
                  'isSignal' : 0,
                  'isData'   : 0,
                  'scale'    : 1.   ,
              }

#legend['lumi'] = 'L = 6.3/fb'
legend['lumi'] = 'L = 35.9/fb'
legend['sqrt'] = '#sqrt{s} = 13 TeV'




