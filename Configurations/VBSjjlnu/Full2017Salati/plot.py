# plot configuration



# groupPlot = {}
# 
# Groups of samples to improve the plots.
# If not defined, normal plots is used
#
groupPlot['VBS']  = {  
                 'nameHR' : 'VBS',
                 'isSignal' : 1,
                 'color': 869, #617,   
                 'samples'  : ['VBS']
              } 

groupPlot['QCD-WW']  = {  
                 'nameHR' : 'QCD-WW',
                 'isSignal' : 0,
                 'color': 921, #617,   
                 'samples'  : ['QCD-WW']
              }    

groupPlot['singleTop']  = {  
                 'nameHR' : 'singleTop',
                 'isSignal' : 0,
                 'color': 616,   
                 'samples'  : ['singleTop']
             }

groupPlot['ttbar']  = {  
                 'nameHR' : 'ttbar',
                 'isSignal' : 0,
                 'color': 797,   
                 'samples'  : ['ttbar']
             }

# groupPlot['WW']  = {  
#                   'nameHR' : 'WW',
#                   'isSignal' : 0,
#                   'color': 851, # kAzure -9 
#                   'samples'  : ['WW', 'ggWW', 'WWewk']
#               }

# groupPlot['Fake']  = {  
#                   'nameHR' : 'Non-prompt',
#                   'isSignal' : 0,
#                   'color': 921,    # kGray + 1
#                   'samples'  : ['Fake_em', 'Fake_me']
#               }


#groupPlot['DY']  = {  
#                 'nameHR' : "DY",
#                 'isSignal' : 0,
#                 'color': 418,    # kGreen+2
#                 'samples'  : ['DY']
#             }



# groupPlot['VVV']  = {  
#                   'nameHR' : 'VVV',
#                   'isSignal' : 0,
#                   'color': 857, # kAzure -3  
#                   'samples'  : ['VVV']
#               }


# groupPlot['VZ']  = {  
#                   'nameHR' : "VZ",
#                   'isSignal' : 0,
#                   'color'    : 617,   # kViolet + 1  
#                   'samples'  : ['VZ', 'WZ', 'ZZ']
#               }

# groupPlot['Vg']  = {  
#                   'nameHR' : "V#gamma",
#                   'isSignal' : 0,
#                   'color'    : 810,   # kOrange + 10
#                   'samples'  : ['Vg', 'Wg']
#               }

# groupPlot['VgS']  = {
#                   'nameHR' : "V#gamma*",
#                   'isSignal' : 0,
#                   'color'    : 409,   # kGreen - 9
#                   'samples'  : ['VgS']
#               }



# groupPlot['Higgs']  = {  
#                   'nameHR' : 'Higgs',
#                   'isSignal' : 1,
#                   'color': 632, # kRed 
# 		  'samples'  : ['H_htt', 'H_hww', 'ZH_hww', 'ggZH_hww', 'WH_hww', 'qqH_hww', 'ggH_hww','bbH_hww','ttH_hww','ZH_htt', 'ggZH_htt', 'WH_htt', 'qqH_htt', 'ggH_htt','bbH_htt','ttH_htt' ]
#               }


groupPlot['Wjets']  = {  
                  'nameHR' : 'W+Jets',
                  'isSignal' : 0,
                  'color': 629,  
                  'samples'  : ['Wjets']
              }



#plot = {}

# keys here must match keys in samples.py    
# 

plot['VBS']  = {
                  'color': 869,
                  'isSignal' : 1,
                  'isData'   : 0,
                  'scale'    : 1.   ,
              }

plot['QCD-WW']  = {
                  'color': 921,
                  'isSignal' : 0,
                  'isData'   : 0,
                  'scale'    : 1.   ,
              }              


#plot['DY']  = {  
 #                'color': 418,    # kGreen+2
#                 'isSignal' : 0,
#                 'isData'   : 0, 
#                 'scale'    : 1.0,
#             }



              
plot['singleTop'] = {   
                 'nameHR' : 'singleTop',
                 'color': 616,   
                 'isSignal' : 0,
                 'isData'   : 0, 
                 'scale'    : 1.0,
                 }

plot['ttbar'] = {   
                 'nameHR' : 'ttbar',
                 'color': 797,   
                 'isSignal' : 0,
                 'isData'   : 0, 
                 'scale'    : 1.0,
                 }

# plot['WW']  = {
#                   'color': 851, # kAzure -9 
#                   'isSignal' : 0,
#                   'isData'   : 0,    
#                   'scale'    : 1.0   # ele/mu trigger efficiency   datadriven
#                   }

# plot['ggWW']  = {
#                   'color': 850, # kAzure -10
#                   'isSignal' : 0,
#                   'isData'   : 0,    
#                   'scale'    : 1.0
#                   }

# plot['WWewk']  = {
#                   'color': 851, # kAzure -9 
#                   'isSignal' : 0,
#                   'isData'   : 0,
#                   'scale'    : 1.0   # ele/mu trigger efficiency   datadriven
#                   }


# plot['Vg']  = { 
#                   'color': 859, # kAzure -1  
#                   'isSignal' : 0,
#                   'isData'   : 0,
#                   'scale'    : 1.0
#                   }

# plot['VgS'] = { 
#                   'color'    : 617,   # kViolet + 1  
#                   'isSignal' : 0,
#                   'isData'   : 0,
#                   'scale'    : 1.0
#                   }

# plot['VZ']  = { 
#                   'color': 858, # kAzure -2  
#                   'isSignal' : 0,
#                   'isData'   : 0,
#                   'scale'    : 1.0
#                   }

# plot['VVV']  = { 
#                   'color': 857, # kAzure -3  
#                   'isSignal' : 0,
#                   'isData'   : 0,
#                   'scale'    : 1.0
#                   }

plot['Wjets']  = {
                  'color': 629,
                  'isSignal' : 0,
                  'isData'   : 0,
                  'scale'    : 1.   ,
              }


# # data

#plot['DATA']  = { 
#                  'nameHR' : 'Data',
#                  'color': 1 ,  
#                  'isSignal' : 0,
#                  'isData'   : 1 ,
#                  'isBlind'  : 1
#              }




# additional options

legend['lumi'] = 'L = 41.5/fb'

legend['sqrt'] = '#sqrt{s} = 13 TeV'

