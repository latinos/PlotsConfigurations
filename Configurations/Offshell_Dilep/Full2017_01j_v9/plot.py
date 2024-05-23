# plot configuration

# groupPlot = {}
# 
# Groups of samples to improve the plots.
# If not defined, normal plots is used
#
groupPlot['VH+ttH+qqH']  = {
                  'nameHR' : 'Higgs Other', ##TC
                  'isSignal' : 0,
                  'color': 632, # kRed 
                  'samples'  : ['Higgs' ]
              }

groupPlot['ggHToWWOnshell']  = {
                  'nameHR' : 'ggH Onshell',
                  'isSignal' : 0,
                  'color': 603, # kBlue+3                                    
                  'samples'  : ['ggH_sonly_on' ] ##TC
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
                  'samples'  : ['WW', 'ggH_bonly_on', 'ggH_bonly_off', 'qqH_bonly_off', 'qqH_bonly_on'] ##TC 2024 plot together qqWW, ggWW, and qqWW VBS
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
                  'samples'  : ['ggH_sonly_off' ] ##TC 2024
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

##TC 2024
plot['ggH_bonly_on']  = {
                  'color': 850, # kAzure -10
                  'isSignal' : 0,
                  'isData'   : 0,
                  'scale'    : 1.0
                  }

##TC 2024
plot['ggH_bonly_off']  = {
                  'color': 849, # kAzure -10
                  'isSignal' : 0,
                  'isData'   : 0,
                  'scale'    : 1.0
                  }

# plot['ggWW']  = { ##TC
#                   'color': 850, # kAzure -10
#                   'isSignal' : 0,
#                   'isData'   : 0,
#                   'scale'    : 1.0
#                   }

# plot['WWewk']  = { ##TC
#                   'color': 851, # kAzure -9 
#                   'isSignal' : 0,
#                   'isData'   : 0,
#                   'scale'    : 1.0   # ele/mu trigger efficiency   datadriven
#                   }

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


plot['ggH_sonly_on']  = { ##TC
                  'color': 404, ##  
                  'isSignal' : 0, ##
                  'isData'   : 0,
                  'scale'    : 1.0
                  }


plot['ggH_sonly_off']  = { ##TC
                  'color': 1, ##  
                  'isSignal' : 2, ##
                  'isData'   : 0,
                  'scale'    : 1.0
                  }

##TC 2024
plot['qqH_bonly_on']  = {
                  'color': 409,  #kRed  
                  'isSignal' : 0,
                  'isData'   : 0,
                  'scale'    : 1.0
                  }
##TC 2024
plot['qqH_sonly_off']  = {
                  'color': 632,  #kRed  
                  'isSignal' : 2,
                  'isData'   : 0,
                  'scale'    : 1.0
                  }
##TC 2024
plot['qqH_bonly_off']  = {
                  'color': 851,  #kRed  
                  'isSignal' : 0,
                  'isData'   : 0,
                  'scale'    : 1.0
                  }
##TC 2024
plot['qqH_sonly_on']  = {
                  'color': 420,  #kRed  
                  'isSignal' : 0, ##
                  'isData'   : 0,
                  'scale'    : 1.0
                  }

# data

plot['DATA']  = { 
                  'nameHR' : 'Data',
                  'color': 1 ,  
                  'isSignal' : 0,
                  'isData'   : 1 ,
                  'isBlind'  : 1 #0 unblind
              }


# additional options

legend['lumi'] = 'L = 41.5/fb'

legend['sqrt'] = '#sqrt{s} = 13 TeV'
