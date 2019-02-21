# plot configuration

# groupPlot = {}
# 
# Groups of samples to improve the plots.
# If not defined, normal plots is used
#

#groupPlot['DY']  = {  
#                  'nameHR' : "DY",
#                  'isSignal' : 0,
#                  'color': 418,    # kGreen+2
#                  'samples'  : ['DY']
#              }

#plot = {}

# keys here must match keys in samples.py    
#                    
     
plot['ttbar'] = {   
    'nameHR' : 't#bart (2l)',
    'color': 400, #kYellow  
    'isSignal' : 0,
    'isData'   : 0 ,
    'scale'    : 1.0
    }

plot['ttsemi'] = {   
    'nameHR' : 't#bart (1l)',
    'color':402, #kYellow+2
    'isSignal' : 0,
    'isData'   : 0, 
    'scale'    : 1.0
    }

plot['singletop'] = {   
    'nameHR' : 'Single top',
    'color': 401, #kYellow+1
    'isSignal' : 0,
    'isData'   : 0, 
    'scale'    : 1.0
    }

plot['TTV'] = {   
    'nameHR' : 'TTV',
    'color': 434, #kCyan+2  
    'isSignal' : 0,
    'isData'   : 0, 
    'scale'    : 1.0
    }

plot['DY']  = {  
    'color': 418, #kGreen+2
    'isSignal' : 0,
    'isData'   : 0, 
    'scale'    : 1.0
    }
     
plot['WJets']  = {  
    'color': 921, #kGray+1
    'isSignal' : 0,
    'isData'   : 0,
    'scale'    : 1.0                  
    }

plot['WW'] = {   
    'color': 851, #kAzure-9
    'isSignal' : 0,
    'isData'   : 0, 
    'scale'    : 1.0
    }

plot['WZ'] = {   
    'color': 858, #kAzure-2 
    'isSignal' : 0,
    'isData'   : 0, 
    'scale'    : 1.0
    }

plot['ZZ'] = {   
    'color': 856, #kAzure-4
    'isSignal' : 0,
    'isData'   : 0, 
    'scale'    : 1.0
    }

plot['VV'] = {   
    'color': 856, #kAzure-4
    'isSignal' : 0,
    'isData'   : 0, 
    'scale'    : 1.0
    }


plot['VVV'] = {   
    'color': 857, #kAzure-3
    'isSignal' : 0,
    'isData'   : 0, 
    'scale'    : 1.0
    }

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
    'isBlind'  : 0
    }


# Additional options

# legend['lumi'] = 'L = 2.3/fb' # 2.264 fb-1
#legend['lumi'] = 'L = 2.3/fb' # 2.318 fb-1
#legend['lumi'] = 'L = 2.6/fb' # 
#legend['lumi'] = 'L = 4.3/fb' # 
#legend['lumi'] = 'L = 6.3/fb' # 
legend['lumi'] = 'L = 42.0/fb' # 
legend['sqrt'] = '#sqrt{s} = 13 TeV'




