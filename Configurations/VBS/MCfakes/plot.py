# plot configuration



# groupPlot = {}
# 
# Groups of samples to improve the plots.
# If not defined, normal plots is used
#

#groupPlot['DY']  = {  
                  #'nameHR' : "DY",
                  #'isSignal' : 0,
                  #'color': 418,    # kGreen+2
                  #'samples'  : ['DY']
              #}

groupPlot['MC_nonPrompt']  = {  
                  'nameHR' : 't#bar{t}',
                  'isSignal' : 0,
                  'color': 400,   # kYellow
                  'samples'  : ['lepTT','semilepTT']
              }

#groupPlot['Fake']  = {  
                  #'nameHR' : 'Non-prompt',
                  #'isSignal' : 0,
                  #'color': 921,    # kGray + 1
                  #'samples'  : ['Fake']
              #}

groupPlot['WpWpJJ']  = {  
                  'nameHR' : 'WpWpJJ',
                  'isSignal' : 1,
                  'color': 851, # kAzure -9 
                  'samples'  : ['WpWpJJ']
              }

groupPlot['WpWpJJ_QCD']  = {  
                  'nameHR' : 'WpWpJJ_QCD',
                  'isSignal' : 0,
                  'color': 418,    # kGreen+2
                  'samples'  : ['WpWpJJ_QCD']
              }

groupPlot['WZ']  = {  
                  'nameHR' : 'WZ',
                  'isSignal' : 0,
                  'color': 633, # kRed+1 
                  'samples'  : ['WZ']
              }

groupPlot['Wg']  = {  
                  'nameHR' : 'Wg',
                  'isSignal' : 0,
                  'color': 616, # kMagenta
                  'samples'  : ['Wg']
              }

#groupPlot['VVV']  = {  
                  #'nameHR' : 'VVV',
                  #'isSignal' : 0,
                  #'color': 857, # kAzure -3  
                  #'samples'  : ['VVV']
              #}






#plot = {}

# keys here must match keys in samples.py    
#                    
#plot['DY']  = {  
                  #'color': 418,    # kGreen+2
                  #'isSignal' : 0,
                  #'isData'   : 0, 
                  #'scale'    : 1.0
              #}
               
#plot['Fake']  = {  
                  #'color': 921,    # kGray + 1
                  #'isSignal' : 0,
                  #'isData'   : 0,
                  #'scale'    : 1.0                  
              #}

plot['lepTT'] = {   
                  'nameHR' : 'leptonic t#bar{t}',
                  'color': 400,   # kYellow
                  'isSignal' : 0,
                  'isData'   : 0, 
                  'scale'    : 1.0,
                  }

plot['semilepTT'] = {   
                  'nameHR' : 'semileptonic t#bar{t}',
                  'color': 400,   # kYellow
                  'isSignal' : 0,
                  'isData'   : 0, 
                  'scale'    : 1.0,
                  }

plot['WpWpJJ']  = {  
                  'color': 851,    # kGreen+2
                  'isSignal' : 1,
                  'isData'   : 0, 
                  'scale'    : 1.0
              }


plot['WpWpJJ_QCD']  = {  
                  'color':  418,    # kGreen+2
                  'isSignal' : 0,
                  'isData'   : 0, 
                  'scale'    : 1.0
              }

plot['WZ']  = {  
                  'color': 633, # kRed+1 
                  'isSignal' : 0,
                  'isData'   : 0, 
                  'scale'    : 1.0
              }

plot['Wg']  = {  
                  'color': 616, # kMagenta
                  'isSignal' : 0,
                  'isData'   : 0, 
                  'scale'    : 1.0
              }

plot['DATA']  = { 
                  'nameHR' : 'Data',
                  'color': 1 ,  
                  'isSignal' : 0,
                  'isData'   : 1 ,
                  'isBlind'  : 1
              }




# additional options

# legend['lumi'] = 'L = 2.3/fb' # 2.264 fb-1
#legend['lumi'] = 'L = 2.3/fb' # 2.318 fb-1
#legend['lumi'] = 'L = 4.3/fb' # 2.318 fb-1
#legend['lumi'] = 'L = 6.3/fb'
#legend['lumi'] = 'L = 27.9/fb'
legend['lumi'] = 'L = 36.7/fb'

legend['sqrt'] = '#sqrt{s} = 13 TeV'




