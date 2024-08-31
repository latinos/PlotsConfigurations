# plot configuration

nbins = 1

#groupPlot = {}
#plot = {}
# 
# Groups of samples to improve the plots.
# If not defined, normal plots is used
#



Vg_sf =  5.14039899853 / 5.1097267441
qqH_bonly_off_sf =  31.7269775295 / 31.7345416855
VVV_sf = 28.606849916 / 28.9278248718
top_sf =  61417.9241712 / 60135.2607298  * .944 ## INCLUDES RATE PARAM
Higgs_other_sf = 49.5304712671 / 66.9928202234
qqH_bonly_on_sf = 0.00362932578667 / 0.00382075832907
WW_sf = 1057.84603773 / 1060.13612904  * .591 ## INCLUDES RATE PARAM
qqH_sand_on_sf = 16.7916656318 / 16.6859482737
ggH_bonly_on_sf = 0.382549753855 / 0.372997314904
ZZ_sf = 2.41771556506 / 2.44696649486
DY_sf = 124.705352575 / 126.652281463
ggH_bonly_off_sf = 69.6584648656 / 68.5811837399
WZ_sf = 104.830580703 / 108.508472325
qqH_sonly_on_sf = 16.7893870364 / 16.6834148718
qqH_sand_off_sf = 27.8922473562 / 27.92848067
ggH_sand_on_sf =  5.06648023158 / 5.01016700963
ggH_sonly_on_sf = 4.99765927096 / 4.90518795727
ggH_sonly_off_sf = 7.84693583788 / 7.74385541993
qqH_sonly_off_sf = 2.9557977872 / 2.93878186102
ggH_sand_off_sf =  61.6121990391 / 60.6485107591 

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
legend['lumi'] = 'L = 19.52/fb'

legend['sqrt'] = '#sqrt{s} = 13 TeV'
