# plot configuration



# groupPlot = {}
# 
# Groups of samples to improve the plots.
# If not defined, normal plots is used
#

groupPlot['Fake']  = {  
                  'nameHR' : 'Non-prompt',
                  'isSignal' : 0,
                  'color': 921,    # kGray + 1
                  'samples'  : ['Fake','Vg_promptSubtr','ZZ_promptSubtr','VVV_promptSubtr','WZ_promptSubtr']
              }

groupPlot['Vg']  = {  
                  'nameHR' : 'Vg',
                  'isSignal' : 0,
                  'color': 616, # kMagenta
                  'samples'  : ['Vg']
              }

groupPlot['VVV']  = {  
                  'nameHR' : 'VVV',
                  'isSignal' : 0,
                  'color': 857, # kAzure -3  
                  'samples'  : ['VVV']
              }

groupPlot['ZZ']  = {
                  'nameHR' : 'ZZ',
                  'isSignal' : 0,
                  'color': 418,    # kGreen+2
                  'samples'  : ['ZZ']
              }

groupPlot['WZ']  = {  
                  'nameHR' : 'WZ',
                  'isSignal' : 1,
                  'color': 633, # kRed+1 
                  'samples'  : ['WZ']
              }



#plot = {}

# keys here must match keys in samples.py    
#                    

plot['Fake']  = {  
                  'color': 921,    # kGray + 1
                  'isSignal' : 0,
                  'isData'   : 0,
                  'scale'    : 1.0                  
              }

plot['Vg_promptSubtr']  = {  
                  'color': 921,    # kGray + 1
                  'isSignal' : 0,
                  'isData'   : 0,
                  'scale'    : 1.0                  
              }

plot['ZZ_promptSubtr']  = {  
                  'color': 921,    # kGray + 1
                  'isSignal' : 0,
                  'isData'   : 0,
                  'scale'    : 1.0                  
              }

plot['VVV_promptSubtr']  = {  
                  'color': 921,    # kGray + 1
                  'isSignal' : 0,
                  'isData'   : 0,
                  'scale'    : 1.0                  
              }

plot['WZ_promptSubtr']  = {  
                  'color': 921,    # kGray + 1
                  'isSignal' : 0,
                  'isData'   : 0,
                  'scale'    : 1.0                  
              }

plot['WZ']  = {  
                  'color': 633, # kRed+1 
                  'isSignal' : 1,
                  'isData'   : 0, 
                  'scale'    : 1.0
              }

plot['ZZ']  = {  
                  'color': 418,    # kGreen+2
                  'isSignal' : 0,
                  'isData'   : 0, 
                  'scale'    : 1.0
              }

plot['Vg']  = {  
                  'color': 616, # kMagenta
                  'isSignal' : 0,
                  'isData'   : 0, 
                  'scale'    : 1.0
              }

plot['VVV']  = {  
                  'color': 857, # kMagenta
                  'isSignal' : 0,
                  'isData'   : 0, 
                  'scale'    : 1.0
              }

plot['DATA']  = { 
                  'nameHR' : 'Data',
                  'color': 1 ,  
                  'isSignal' : 0,
                  'isData'   : 1 ,
                  'isBlind'  : 0
              }




# additional options

# legend['lumi'] = 'L = 2.3/fb' # 2.264 fb-1
#legend['lumi'] = 'L = 2.3/fb' # 2.318 fb-1
#legend['lumi'] = 'L = 4.3/fb' # 2.318 fb-1
#legend['lumi'] = 'L = 6.3/fb'
legend['lumi'] = 'L = 35.9/fb'

legend['sqrt'] = '#sqrt{s} = 13 TeV'




