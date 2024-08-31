# plot configuration

nbins = 1

#groupPlot = {}
#plot = {}
# 
# Groups of samples to improve the plots.
# If not defined, normal plots is used
#


Vg_sf = 3.9035767061 / 3.8063594225  
qqH_bonly_off_sf = 27.7433156162 / 28.2590589168
VVV_sf = 28.2907251665 / 29.5304570527
top_sf = 54038.9194473 / 53104.1320988  * .944 ## INCLUDES RATE PARAM
Higgs_other_sf = 44.549770773 / 45.9865981303 
qqH_bonly_on_sf = 0.00276089968126 / 0.0028127842788 
WW_sf = 960.392081125 / 979.345541808  * .591 ## INCLUDES RATE PARAM
qqH_sand_on_sf = 14.670112283 / 14.7811660015 
ggH_bonly_on_sf = 0.343154478776 / 0.351274435229    
ZZ_sf = 2.37336338422 / 2.54473982269
DY_sf = 138.813827264 / 141.70471594 
ggH_bonly_off_sf = 61.935859296 / 62.8639780522 
WZ_sf = 95.5187839122 / 104.520400309
qqH_sonly_on_sf =14.6680199401 / 14.7790623693
qqH_sand_off_sf = 24.4376256872 / 24.9199964557
ggH_sand_on_sf = 4.39610772285 / 4.49782612178
ggH_sonly_on_sf = 4.47430047849 / 4.53456981711
ggH_sonly_off_sf = 7.1573030726 / 7.25539232023 
qqH_sonly_off_sf = 2.61896848289 / 2.64707459257
ggH_sand_off_sf = 55.0583494601 / 55.8954029555

WW_scale = 1 #.59622
top_scale = 1 #.97210

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
                  'samples'  : ['ggH_sonly_on']
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
                  'samples'  : ['WW', 'ggH_bonly_on', 'ggH_bonly_off', 'qqH_bonly_on', 'qqH_bonly_off']
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
                  'samples'  : ['ggH_sonly_off' ]
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
                  'scale'    : DY_sf,
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
                  'scale'    : top_sf #.97210,
                  }

#plot['WW']  = {
#                  'color': 851, # kAzure -9 
#                  'isSignal' : 0,
#                  'isData'   : 0,
#                  'scale'    : 1.0   # ele/mu trigger efficiency   datadriven
#                  }

plot['WW']  = {
                  'color': 851, # kAzure -9 
                  'isSignal' : 0,
                  'isData'   : 0,
                  'scale'    : WW_sf #.59622   # ele/mu trigger efficiency   datadriven
                  }

plot['ggH_bonly_on']  = {
                  'color': 850, # kAzure -10
                  'isSignal' : 0,
                  'isData'   : 0,
                  'scale'    : qqH_bonly_on_sf
                  }


plot['ggH_bonly_off']  = {
                  'color': 849, # kAzure -10
                  'isSignal' : 0,
                  'isData'   : 0,
                  'scale'    : ggH_bonly_off_sf
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
                  'scale'    : Vg_sf
                  }

plot['WZ']  = { 
                  'color': 858, # kAzure -2  
                  'isSignal' : 0,
                  'isData'   : 0,
                  'scale'    : WZ_sf
                  }

plot['ZZ']  = {
                  'color': 858, # kAzure -2  
                  'isSignal' : 0,
                  'isData'   : 0,
                  'scale'    : ZZ_sf
                  }

plot['VVV']  = { 
                  'color': 857, # kAzure -3  
                  'isSignal' : 0,
                  'isData'   : 0,
                  'scale'    : VVV_sf
                  }

# Higgs

plot['Higgs'] = {
                  'nameHR' : 'Higgs',
                  'color': 632, # kRed 
                  'isSignal' : 0,
                  'isData'   : 0,    
                  'scale'    : Higgs_other_sf    #
                  }

plot['ggH_sonly_on']  = {
                  'color': 404, # kRed  
                  'isSignal' : 2,
                  'isData'   : 0,
                  'scale'    : ggH_sonly_on_sf
                  }

plot['ggH_sonly_off']  = {
                  'color': 1, # kRed  
                  'isSignal' : 2,
                  'isData'   : 0,
                  'scale'    : ggH_sonly_off_sf
                  }

plot['qqH_bonly_on']  = {
                  'color': 409,  #kRed  
                  'isSignal' : 0,
                  'isData'   : 0,
                  'scale'    : qqH_bonly_on_sf
                  }

plot['qqH_sonly_off']  = {
                  'color': 632,  #kRed  
                  'isSignal' : 2,
                  'isData'   : 0,
                  'scale'    : qqH_sonly_off_sf
                  }

plot['qqH_sand_on']  = {
                  'color': 411,  #kRed + 2
                  'isSignal' : 0,
                  'isData'   : 0,
                  'scale'    : qqH_sand_on_sf
                  }

plot['qqH_bonly_off']  = {
                  'color': 851,  #kRed  
                  'isSignal' : 0,
                  'isData'   : 0,
                  'scale'    : qqH_bonly_off_sf
                  }

plot['qqH_sonly_on']  = {
                  'color': 420,  #kRed  
                  'isSignal' : 2,
                  'isData'   : 0,
                  'scale'    : qqH_sonly_on_sf
                  }
plot['qqH_sand_off']  = {
                  'color': 857,  #kRed + 2
                  'isSignal' : 0,
                  'isData'   : 0,
                  'scale'    : qqH_sand_off_sf
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
legend['lumi'] = 'L = 16.81/fb'

legend['sqrt'] = '#sqrt{s} = 13 TeV'
