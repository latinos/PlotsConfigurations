# plot configuration



# groupPlot = {}
# 
# Groups of samples to improve the plots.
# If not defined, normal plots is used
#

groupPlot['DY']  = {
                  'nameHR' : "DY",
                  'isSignal' : 0,
                  'color': 418,    # kGreen+2
                  'samples'  : ['DY']
              }

plot['DY']  = {
                  'color': 418,    # kGreen+2
                  'isSignal' : 0,
                  'isData'   : 0,
                  'scale'    : 1,

              }

groupPlot['top']  = {  
                  'nameHR' : 'tW and t#bar{t}',
                  'isSignal' : 0,
                  'color': 400,   # kYellow
                  'samples'  : ['top']
              }
'''
groupPlot['ggWW']  = {  
                  'nameHR' : 'WW',
                  'isSignal' : 0,
                  'color': 851, # kAzure -9 
                  'samples'  : ['ggWW']
}
'''


groupPlot['VVV']  = {  
                  'nameHR' : 'VVV',
                  'isSignal' : 0,
                  'color': 857, # kAzure -3  
                  'samples'  : ['VVV']
}


groupPlot['Vg']  = {  
                  'nameHR' : "V#gamma",
                  'isSignal' : 0,
                  'color'    : 810,   # kOrange + 10
                  'samples'  : ['Vg']
}


groupPlot['VZ']  = {  
                  'nameHR' : "VZ",
                  'isSignal' : 0,
                  'color'    : 617,   # kViolet + 1  
                  'samples'  : ['VZ']
}



groupPlot['WZgS_L']  = {  
                  'nameHR' : "WZmll01_L",
                  'isSignal' : 0,
                  'color'    : 600,   # kViolet + 1  
                  'samples'  : ['WZgS_L']
              }

groupPlot['WZgS_L_zero']  = {
                  'nameHR' : "WZmll01_L",
                  'isSignal' : 0,
                  'color'    : 600,   # kViolet + 1  
                  'samples'  : ['WZgS_L_zero']
              }


groupPlot['WZgS_H']  = {  
                  'nameHR' : "WZmll01_H",
                  'isSignal' : 0,
                  'color'    : 887,   # kViolet + 1  
                  'samples'  : ['WZgS_H']
}

'''
plot['ggWW']  = {
                  'color': 850, # kAzure -10
                  'isSignal' : 0,
                  'isData'   : 0,    
                  'scale'    : 1.0
}
'''
plot['VZ']  = { 
                  'color': 858, # kAzure -2  
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

plot['Vg']  = { 
                  'color': 859, # kAzure -1  
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


plot['WZgS_L']  = { 
                  'color': 890, # kAzure -2  
                  'isSignal' : 0,
                  'isData'   : 0,
                  'scale'    : 1.0	
                  }

plot['WZgS_L_zero']  = {
                  'color': 890, # kAzure -2  
                  'isSignal' : 0,
                  'isData'   : 0,
                  'scale'    : 1.0
                  }

plot['WZgS_H']  = { 
                  'color': 887, # kAzure -2  
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




# additional options

# legend['lumi'] = 'L = 2.3/fb' # 2.264 fb-1
#legend['lumi'] = 'L = 2.3/fb' # 2.318 fb-1
#legend['lumi'] = 'L = 0.8/fb' # 2.318 fb-1
#legend['lumi'] = 'L = 2.6/fb'
#legend['lumi'] = 'L = 4.3/fb'
#legend['lumi'] = 'L = 6.3/fb'
#legend['lumi'] = 'L = 12.9/fb'
legend['lumi'] = 'L = 35.867/fb'

legend['sqrt'] = '#sqrt{s} = 13 TeV'

