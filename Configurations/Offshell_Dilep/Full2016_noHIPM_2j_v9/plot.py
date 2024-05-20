# plot configuration

nbins = 1

#groupPlot = {}
#plot = {}
# 
# Groups of samples to improve the plots.
# If not defined, normal plots is used
#

groupPlot['VH+ttH+qqH']  = {
                  'nameHR' : 'Higgs Other',
                  'isSignal' : 0,
                  'color': 632, # kRed 
                  'samples'  : ['Higgs' ]
              }

groupPlot['VBFToWWOnshell']  = {
                  'nameHR' : 'VBF Onshell',
                  'isSignal' : 0,
                  'color': 409, # kRed                                                                                                                                                                      
                  'samples'  : ['qqH_sonly_on' ]
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
                  'samples'  : ['WW_minnlo', 'ggWW']
              }

groupPlot['qqWW'] = {
                  'nameHR' : 'qqWW',
                  'isSignal' : 0,
                  'color': 849, # kAzure -9 
                  'samples' : ['qqH_bonly_on', 'qqH_bonly_off']
              }

groupPlot['top']  = {
                  'nameHR' : 'tW and t#bar{t}',
                  'isSignal' : 0,
                  'color': 400,   # kYellow
                  'samples'  : ['top']
              }
groupPlot['ggHToWWOffshell']  = {
                  'nameHR' : 'ggH Offshell',
                  'isSignal' : 2,
                  'color': 1, # kCyan
                  'samples'  : ['ggHToWWOffshell' ]
              }

groupPlot['VBFToWWOffshell']  = {
                  'nameHR' : 'VBF Offshell',
                  'isSignal' : 2,
                  'color': 632, # kRed                                                                                                                                                                    
                  'samples'  : ['qqH_sonly_off']
              }

"""
groupPlot['VBF_WW_Int']  = {
                  'nameHR' : 'VBF Offshell',
                  'isSignal' : 1,
                  'color': 640, # kRed                                                                                                                                                                    
                  'samples'  : ['qqH_sand_off', 'qqH_sand_on']
              }
"""

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

#plot['WW']  = {
#                  'color': 851, # kAzure -9 
#                  'isSignal' : 0,
#                  'isData'   : 0,
#                  'scale'    : 1.0   # ele/mu trigger efficiency   datadriven
#                  }

plot['WW_minnlo']  = {
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

#plot['WWewk']  = {
#                  'color': 851, # kAzure -9 
#                  'isSignal' : 0,
#                  'isData'   : 0,
#                  'scale'    : 1.0   # ele/mu trigger efficiency   datadriven
#                  }

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
                  'color': 1, # kRed  
                  'isSignal' : 1,
                  'isData'   : 0,
                  'scale'    : 1.0
                  }

plot['qqH_bonly_on']  = {
                  'color': 409,  #kRed  
                  'isSignal' : 0,
                  'isData'   : 0,
                  'scale'    : 1.0
                  }

plot['qqH_sonly_off']  = {
                  'color': 632,  #kRed  
                  'isSignal' : 2,
                  'isData'   : 0,
                  'scale'    : 1.0
                  }
"""
plot['qqH_sand_on']  = {
                  'color': 411,  #kRed + 2
                  'isSignal' : 0,
                  'isData'   : 0,
                  'scale'    : 1.0
                  }
"""
plot['qqH_bonly_off']  = {
                  'color': 851,  #kRed  
                  'isSignal' : 0,
                  'isData'   : 0,
                  'scale'    : 1.0
                  }

plot['qqH_sonly_on']  = {
                  'color': 921,  #kRed  
                  'isSignal' : 0,
                  'isData'   : 0,
                  'scale'    : 1.0
                  }

"""
plot['qqH_sand_off']  = {
                  'color': 857,  #kRed + 2
                  'isSignal' : 0,
                  'isData'   : 0,
                  'scale'    : 1.0
                  }
"""


# data

plot['DATA']  = { 
                  'nameHR' : 'Data',
                  'color': 1 ,  
                  'isSignal' : 0,
                  'isData'   : 1 ,
                  'isBlind'  : 0
              }



# additional options
legend['lumi'] = 'L = 16.81/fb'

legend['sqrt'] = '#sqrt{s} = 13 TeV'
