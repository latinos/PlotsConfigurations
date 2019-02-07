# plot configuration



# groupPlot = {}
# 
# Groups of samples to improve the plots.
# If not defined, normal plots is used
#

#groupPlot['Fake']  = {  
#                  'nameHR' : 'Fake',
#                  'isSignal' : 0,
#                  'color': 921,    # kGray + 1
#                  'samples'  : ['Fake']
#              }
#

# groupPlot['Top']  = {  
#                   'nameHR' : 'tW and t#bart',
#                   'isSignal' : 0,
#                   'color': 400, #  kYellow
#                   'samples'  : ['Top']
#               }


# groupPlot['WW']  = {  
#                   'nameHR' : 'WW',
#                   'isSignal' : 1,
#                   'color': 851, # kAzure -9 
#                   'samples'  : ['WW', 'ggWW']
#               }
# groupPlot['VVV']  = {  
#                   'nameHR' : 'VVV',
#                   'isSignal' : 0,
#                   'color': 857, # kAzure -3  
#                   'samples'  : ['VVV']
#               }

# groupPlot['VZ']  = {  
#                   'nameHR' : "VZ/#gamma*/#gamma",
#                   'isSignal' : 0,
#                   'color'    : 617,   # kViolet + 1  
#                   'samples'  : ['VZ', 'Vg', 'Wg', 'VgS', 'WZ', 'ZZ','Zg']
#               }



# groupPlot['DY']  = {  
#                   'nameHR' : "DY",
#                   'isSignal' : 0,
#                   'color': 418,  #  kGreen+2
#                   #'samples'  : ['DY1', 'DY2']
#                   'samples'  : ['DY']
#               }


# groupPlot['Higgs']  = {  
#                   'nameHR' : 'Higgs',
#                   'isSignal' : 0,
#                   'color': 632, # kRed 
#                   'samples'  : ['Higgs']
#               }







#plot = {}

# keys here must match keys in samples.py    
#                    
               
plot['Fake']  = {  
                  'color': 921,    # kGray + 1
                  'isSignal' : 0,
                  'isData'   : 0,
                  'scale'    : 1.0                  
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

#legend['lumi'] = 'L = 6.3/fb'
legend['lumi'] = 'L = 41.5/fb'
legend['sqrt'] = '#sqrt{s} = 13 TeV'




