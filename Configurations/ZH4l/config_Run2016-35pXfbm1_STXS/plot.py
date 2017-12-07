# plot configuration



# groupPlot = {}
# 
# Groups of samples to improve the plots.
# If not defined, normal plots is used
#

groupPlot['top']  = {  
                  'nameHR' : 'tW and t#bart',
                  'isSignal' : 0,
                  'color': 401,   # kYellow+1
                  'samples'  : ['top']
              }

groupPlot['DY']  = {  
                  'nameHR' : 'DY',
                  'isSignal' : 0,
                  'color': 635,    # kGreen+3
                  'samples'  : ['DY']
              }
groupPlot['ttV']  = {  
                  'nameHR' : 'ttV',
                  'isSignal' : 0,
                  'color': 418,    # kGreen+3
                  'samples'  : ['ttW','ttZ']
              }

groupPlot['WW']  = {  
                  'nameHR' : 'WW',
                  'isSignal' : 0,
                  'color': 431,    # kGreen+3
                  'samples'  : ['WW']
              }

groupPlot['VVV']  = {  
                  'nameHR' : 'VVV',
                  'isSignal' : 0,
                  'color': 618, # kViolet +2   
                  'samples'  : ['VVZ','WWW']
              }

groupPlot['Vg']  = {
                  'nameHR' : 'Zg',
                  'color': 922,    # kGray + 2
                  'isSignal' : 0,
                  'isData'   : 0,
                  'scale'    : 1.0,
                  'samples'  : ['Vg']
                  }

groupPlot['ZZ']  = {
                  'nameHR' : "ZZ",
                  'isSignal' : 0,
                  'color'    : 857,   # kAzure -3
                  # 'samples'  : ['ZZ']
                  'samples'  : ['ZZ','ggZZ']
              }

groupPlot['ggH_hzz']  = {
                  'nameHR' : "ggH_hzz",
                  'isSignal' : 0,
                  'color'    : 626,   # kRed -6  
                  'samples'  : ['ggH_hzz']
              }

groupPlot['WZ']  = {
                  'nameHR' : "WZ",
                  'isSignal' : 0,
                  'color'    : 603,   # kMagenta -4
                  'samples'  : ['WZ']
              }

groupPlot['ZH4l']  = {  
                  'nameHR' : 'ZH4l',
                  'isSignal' : 1,
                  'color': 632, # kRed 
                  'samples'  : ['ZH_hww','ZH_htt','ggZH_hww']
              }


#plot = {}

# keys here must match keys in samples.py    
#                    
plot['DY']  = {  
                 'color': 418,    # kGreen+2
                 'isSignal' : 0,
                 'isData'   : 0, 
                 'scale'    : 1.0
             }

plot['ttZ']  = {
                  'color': 419,    # kGreen+3
                  'isSignal' : 0,
                  'isData'   : 0,    
                  'scale'    : 1.0   # ele/mu trigger efficiency   datadriven
                  }

plot['ttW']  = {
                  'color': 419,    # kGreen+3
                  'isSignal' : 0,
                  'isData'   : 0,    
                  'scale'    : 1.0   # ele/mu trigger efficiency   datadriven
                  }


plot['top'] = {   
                  'nameHR' : 'tW and t#bart',
                  'color': 401,   # kYellow+1
                  'isSignal' : 0,
                  'isData'   : 0, 
                  'scale'    : 1.0
                  }


plot['WW']  = {
                  'color': 419,    # kGreen+3
                  'isSignal' : 0,
                  'isData'   : 0,    
                  'scale'    : 1.0   # ele/mu trigger efficiency   datadriven
                  }

plot['Vg']  = { 
                  'nameHR' : 'Zg',
                  'color': 922,    # kGray + 2
                  'isSignal' : 0,
                  'isData'   : 0,
                  'scale'    : 1.0
                  }


plot['WZ']  = { 
                  'nameHR' : 'WZ',
                  'color'    : 612,   # kMagenta -4
                  'isSignal' : 0,
                  'isData'   : 0,
                  'scale'    : 1.0
                  }

plot['ZZ']  = { 
                  'nameHR' : 'ZZ',
                  'color'    : 857,   # kAzure -3
                  'isSignal' : 0,
                  'isData'   : 0,
                  'scale'    : 1.0
                  }

# plot['ggZZ']  = { 
                  # 'nameHR' : 'ggZZ',
                  # 'color'    : 857,   # kAzure -3
                  # 'isSignal' : 0,
                  # 'isData'   : 0,
                  # 'scale'    : 1.0
                  # }
plot['ggH_hzz']  = { 
                  'nameHR' : 'ggH_hzz',
                  'color'    : 626,   # kRed -6  
                  'isSignal' : 0,
                  'isData'   : 0,
                  'scale'    : 1.0
                  }

plot['VVZ']  = { 
                  'color': 618, # kViolet +2   
                  'isSignal' : 0,
                  'isData'   : 0,
                  'scale'    : 1.0
                  }

plot['WWW']  = { 
                  'color': 618, # kViolet +2   
                  'isSignal' : 0,
                  'isData'   : 0,
                  'scale'    : 1.0
                  }


# Htautau

plot['ZH_htt'] = {
                  'nameHR' : 'Htt',
                  'color': 632+4, # kRed+4 
                  'isSignal' : 1,
                  'isData'   : 0,    
                  'scale'    : 1    #
                  }

# HWW 


plot['ZH_hww'] = {
                  'nameHR' : 'ZH',
                  'color': 632+3, # kRed+3 
                  'isSignal' : 1,
                  'isData'   : 0,    
                  'scale'    : 1    #
                  }

plot['ggZH_hww'] = {
                  'nameHR' : 'ggZH',
                  'color': 632+3, # kRed+3 
                  'isSignal' : 1,
                  'isData'   : 0,    
                  'scale'    : 1    #
                  }


# data

plot['DATA']  = { 
                  'nameHR' : 'Data',
                  'color': 1 ,  
                  'isSignal' : 0,
                  'isData'   : 1 ,
                  'isBlind'  : 0
                  # 'isBlind'  : 1
              }


# additional options

legend['lumi'] = 'L = 35.9/fb' # Full2016 data
legend['sqrt'] = '#sqrt{s} = 13 TeV'


