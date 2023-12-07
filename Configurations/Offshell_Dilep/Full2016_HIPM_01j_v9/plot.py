# plot configuration

# groupPlot = {}
# 
# Groups of samples to improve the plots.
# If not defined, normal plots is used
#
groupPlot['VH+ttH+qqH']  = {
                  'nameHR' : 'VH+ttH+qqH',
                  'isSignal' : 0,
                  'color': 632, # kRed 
                  'samples'  : ['Higgs' ]
              }

groupPlot['ggHToWWOnshell']  = {
                  'nameHR' : 'ggH Onshell',
                  'isSignal' : 0,
                  'color': 603, # kBlue+3                                                                                                                                                                  
                  'samples'  : ['ggHToWWOnshell' ]
              }

groupPlot['Vg+VZ+VVV']  = {
                  'nameHR' : "Vg+VZ+VVV",
                  'isSignal' : 0,
                  'color'    : 618,   # kOrange + 10
                  'samples'  : ['Vg', 'WZ', 'ZZ', 'VVV']
              }


groupPlot['DY']  = {
                  'nameHR' : "DY",
                  'isSignal' : 0,
                  'color': 418,    # kGreen+2
                  'samples'  : ['DY']
              }

groupPlot['Fake']  = {
                  'nameHR' : 'nonprompt',
                  'isSignal' : 0,
                  'color': 921,    # kGray + 1
                  'samples'  : ['Fake_me', 'Fake_em']
}

groupPlot['WW']  = {
                  'nameHR' : 'WW',
                  'isSignal' : 0,
                  'color': 851, # kAzure -9 
                  'samples'  : ['WW', 'ggWW', 'WWewk']
              }

groupPlot['top']  = {
                  'nameHR' : 'tW and t#bar{t}',
                  'isSignal' : 0,
                  'color': 400,   # kYellow
                  'samples'  : ['top']
              }

groupPlot['ggHToWWOffshell']  = {
                  'nameHR' : 'ggH Offshell',
                  'isSignal' : 1,
                  'color': 1, # kCyan
                  'samples'  : ['ggHToWWOffshell' ]
              }

#plot = {}

# keys here must match keys in samples.py    
#                    

plot['DY']  = {  
                  'color': 418,    # kGreen+2
                  'isSignal' : 0,
                  'isData'   : 0, 
                  'scale'    : 1.0,
              }


plot['Fake_me']  = {  
                  'color': 921,    # kGray + 1
                  'isSignal' : 0,
                  'isData'   : 0,
                  'scale'    : 1.0                  
              }


plot['Fake_em']  = {  
                  'color': 921,    # kGray + 1
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

plot['WW']  = {
                  'color': 851, # kAzure -9 
                  'isSignal' : 0,
                  'isData'   : 0,
                  'scale'    : 1.0   # ele/mu trigger efficiency   datadriven
                  }

plot['ggWW']  = {
                  'color': 850, # kAzure -10
                  'isSignal' : 0,
                  'isData'   : 0,
                  'scale'    : 1.0
                  }

plot['WWewk']  = {
                  'color': 851, # kAzure -9 
                  'isSignal' : 0,
                  'isData'   : 0,
                  'scale'    : 1.0   # ele/mu trigger efficiency   datadriven
                  }

plot['Vg']  = {
                  'color': 859, # kAzure -1  
                  'isSignal' : 0,
                  'isData'   : 0,
                  'scale'    : 1.0
                  }

plot['WZ']  = { 
                  'color': 858, # kAzure -2  
                  'isSignal' : 0,
                  'isData'   : 0,
                  'scale'    : 1.0
                  }

plot['ZZ']  = {
                  'color': 858, # kAzure -2  
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

# Higgs

plot['Higgs'] = {
                  'nameHR' : 'Higgs',
                  'color': 632, # kRed 
                  'isSignal' : 0,
                  'isData'   : 0,    
                  'scale'    : 1    #
                  }


plot['ggHToWWOnshell']  = {
                  'color': 603, # kRed  
                  'isSignal' : 0,
                  'isData'   : 0,
                  'scale'    : 1.0
                  }


plot['ggHToWWOffshell']  = {
                  'color': 432, # kRed  
                  'isSignal' : 1,
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

legend['lumi'] = 'L = 19.5/fb'

legend['sqrt'] = '#sqrt{s} = 13 TeV'
