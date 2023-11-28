# plot configuration



# groupPlot = {}
# 
# Groups of samples to improve the plots.
# If not defined, normal plots is used
#


# groupPlot['VZ']  = {  
#                   'nameHR' : "VZ",
#                   'isSignal' : 0,
#                   'color'    : 617,   # kViolet + 1  
#                   'samples'  : ['VZ', 'WZ', 'ZZ']
#               }

# groupPlot['VVV']  = {  
#                   'nameHR' : 'VVV',
#                   'isSignal' : 0,
#                   'color': 857, # kAzure -3  
#                   'samples'  : ['VVV']
#               }

# groupPlot['Vg']  = {  
#                   'nameHR' : "V#gamma",
#                   'isSignal' : 0,
#                   'color'    : 800,   # kOrange
#                   'samples'  : ['Vg', 'Wg']
#               }


# groupPlot['VgS']  = {
#                   'nameHR' : "V#gamma*",
#                   'isSignal' : 0,
#                   'color'    : 409,   # kGreen - 9
#                   'samples'  : ['VgS']
#               }


groupPlot['Other']  = {  
                  'nameHR' : "Other background",
                  'isSignal' : 0,
                  'color'    : 617,   # kOrange
                  'samples'  : ['Vg', 'Wg', 'VgS', 'VVV', 'VZ', 'WZ', 'ZZ']
              }


groupPlot['DY']  = {  
                  'nameHR' : "Drell-Yan",
                  'isSignal' : 0,
                  'color': 418,    # kGreen+2
                  'samples'  : ['DY']
              }


groupPlot['Fake']  = {
                  'nameHR' : 'Nonprompt',
                  'isSignal' : 0,
                  'color': 921,    # kGray + 1
                  'samples'  : ['Fake']
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


groupPlot['Higgs_onshell']  = {  
                  'nameHR' : 'Higgs onshell',
                  'isSignal' : 0,
                  'color': 632,   # kYellow
                  'samples'  : ['Higgs_onshell']
              }


groupPlot['Higgs_offshell']  = {
                  'nameHR' : 'Higgs offshell',
                  'isSignal' : 2,
                  'color': 1, # kRed
                  'samples'  : ['Higgs_offshell' ]
              }







#plot = {}

# keys here must match keys in samples.py    
#                    
plot['DY']  = {  
                  'color': 418,    # kGreen+2
                  'isSignal' : 0,
                  'isData'   : 0, 
                  'scale'    : 1.0,
                  #'cuts'  : {
                       #'hww2l2v_13TeV_of0j'      : 0.95 ,
                       #'hww2l2v_13TeV_top_of0j'  : 0.95 , 
                       #'hww2l2v_13TeV_dytt_of0j' : 0.95 ,
                       #'hww2l2v_13TeV_em_0j'     : 0.95 , 
                       #'hww2l2v_13TeV_me_0j'     : 0.95 , 
                       ##
                       #'hww2l2v_13TeV_of1j'      : 1.08 ,
                       #'hww2l2v_13TeV_top_of1j'  : 1.08 , 
                       #'hww2l2v_13TeV_dytt_of1j' : 1.08 ,
                       #'hww2l2v_13TeV_em_1j'     : 1.08 , 
                       #'hww2l2v_13TeV_me_1j'     : 1.08 , 
                        #},

              }

plot['Fake']  = {  
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
                  #'cuts'  : {
                       #'hww2l2v_13TeV_of0j'      : 0.94 ,
                       #'hww2l2v_13TeV_top_of0j'  : 0.94 , 
                       #'hww2l2v_13TeV_dytt_of0j' : 0.94 ,
                       #'hww2l2v_13TeV_em_0j'     : 0.94 , 
                       #'hww2l2v_13TeV_me_0j'     : 0.94 , 
                       ##
                       #'hww2l2v_13TeV_of1j'      : 0.86 ,
                       #'hww2l2v_13TeV_top_of1j'  : 0.86 , 
                       #'hww2l2v_13TeV_dytt_of1j' : 0.86 ,
                       #'hww2l2v_13TeV_em_1j'     : 0.86 , 
                       #'hww2l2v_13TeV_me_1j'     : 0.86 , 
                        #},
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

plot['VgS'] = { 
                  'color'    : 617,   # kViolet + 1  
                  'isSignal' : 0,
                  'isData'   : 0,
                  'scale'    : 1.0
                  }


plot['VZ']  = { 
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


plot['Higgs_onshell']  = { 
                  'color': 632, # kAzure -3  
                  'isSignal' : 0,
                  'isData'   : 0,
                  'scale'    : 1.0
                  }


plot['Higgs_offshell']  = { 
                  'color': 1, # kAzure -3  
                  'isSignal' : 2,
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
              } ##plot data overlay (isBlind: 0)



# additional options

legend['lumi'] = '59.83 fb^{-1}'

legend['sqrt'] = '#sqrt{s} = 13 TeV'




