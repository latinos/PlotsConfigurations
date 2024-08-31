# plot configuration

nbins = 1

#groupPlot = {}
#plot = {}
# 
# Groups of samples to improve the plots.
# If not defined, normal plots is used
#


Vg_sf = 13.5251922103 / 14.0925982593
qqH_bonly_off_sf = 108.384543103 / 110.698825047
VVV_sf = 97.4356736902 / 98.4395568593 
top_sf = 199231.493393 / 194130.29306 * .944 ## INCLUDES RATE PARAM
Higgs_other_sf = 138.742189136 / 200.478702555
qqH_bonly_on_sf = 0.459540234653 / 0.412521465569
WW_sf = 3687.2061233 / 3703.45910658 * .591 ## INCLUDES RATE PARAM
qqH_sand_on_sf = 57.8737442305 / 58.1395424243
ggH_bonly_on_sf = 1.34789012113 / 1.34700308844
ZZ_sf = 8.36442074344 / 9.06564163272
DY_sf = 483.192854055 / 490.378277798
ggH_bonly_off_sf = 243.156182327 / 241.419998061
WZ_sf = 360.452056974 / 386.958556193
qqH_sonly_on_sf = 57.64526205 / 57.9352422441   
qqH_sand_off_sf = 95.1059771767 / 96.9126654057
ggH_sand_on_sf = 18.8738760554 / 18.830543741 
ggH_sonly_on_sf = 18.7505592178 / 18.6473579061
ggH_sonly_off_sf = 27.502110059 / 27.4518061848
qqH_sonly_off_sf = 10.1969614749 / 10.2822739084
ggH_sand_off_sf = 217.039937542 / 215.645183556


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

legend['lumi'] = 'L = 59.83/fb'

legend['sqrt'] = '#sqrt{s} = 13 TeV'
