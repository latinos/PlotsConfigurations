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

groupPlot['top']  = {  
                  'nameHR' : 'tW and t#bar{t}',
                  'isSignal' : 0,
                  'color': 400,   # kYellow
                  'samples'  : ['top']
              }

groupPlot['ggWW']  = {  
                  'nameHR' : 'WW',
                  'isSignal' : 0,
                  'color': 851, # kAzure -9 
                  'samples'  : ['ggWW']
}



groupPlot['VVV']  = {  
                  'nameHR' : 'VVV',
                  'isSignal' : 0,
                  'color': 857, # kAzure -3  
                  'samples'  : ['VVV']
}

#groupPlot['Fake']  = {  
#                  'nameHR' : 'Non-prompt',
#                  'isSignal' : 0,
#                  'color': 921,    # kGray + 1
#                  'samples'  : ['Fake']
#}

groupPlot['Vg']  = {  
                  'nameHR' : "V#gamma",
                  'isSignal' : 0,
                  'color'    : 810,   # kOrange + 10
                  'samples'  : ['Vg']
}

#groupPlot['WZgS']  = {  
#                  'nameHR' : "WZmll01",
#                  'isSignal' : 0,
#                  'color'    : 600,   # kViolet + 1  
#                  'samples'  : ['WZgS']
#}

groupPlot['VZ']  = {  
                  'nameHR' : "VZ",
                  'isSignal' : 0,
                  'color'    : 617,   # kViolet + 1  
                  'samples'  : ['VZ']
}


#groupPlot['VgS']  = {
#                  'nameHR' : "V#gamma*",
#                  'isSignal' : 0,
#                  'color'    : 409,   # kGreen - 9
#                  'samples'  : ['VgS']
#              }


groupPlot['WZgS_L']  = {  
                  'nameHR' : "WZmll01_L",
                  'isSignal' : 0,
                  'color'    : 600,   # kViolet + 1  
                  'samples'  : ['WZgS_L']
              }

groupPlot['WZgS_H']  = {  
                  'nameHR' : "WZmll01_H",
                  'isSignal' : 0,
                  'color'    : 887,   # kViolet + 1  
                  'samples'  : ['WZgS_H']
}

#groupPlot['Higgs']  = {  
#                  'nameHR' : 'Higgs',
#                  'isSignal' : 1,
#                  'color': 632, # kRed 
#		  'samples'  : ['H_htt', 'H_hww', 'ZH_hww', 'ggZH_hww', 'WH_hww', 'qqH_hww', 'ggH_hww']
#}

#plot['Higgs']  = {
#                  'color': 632, # kRed
#                  'isSignal' : 1,
#                  'isData'   : 0,
#                  'scale'    : 1.0
#}

#plot['WZgS']  = { 'color'    : 600,   # kViolet + 1
#                  'isSignal' : 0,
#                  'isData' : 0,
#                  'scale' : 1.1 
                  
#}

plot['ggWW']  = {
                  'color': 850, # kAzure -10
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

#plot['VgS'] = { 
#                  'color'    : 409,   # kViolet + 1  
#                  'isSignal' : 0,
#                  'isData'   : 0,
#                  'scale'    : 0.53
#}

#plot['Fake']  = {  
#                  'color': 921,    # kGray + 1
#                  'isSignal' : 0,
#                  'isData'   : 0,
#                  'scale'    : 1.0                  
#              }

#plot['ggZH_hww'] = {
#                  'nameHR' : 'ggZH',
#                  'color': 632+4, # kRed+4
#                  'isSignal' : 1,
#                  'isData'   : 0,
#                  'scale'    : 1    #
#}




#plot['WZTo2L2Q'] = {
#                  'nameHR' : 'Hww',
#                  'color': 632, # kRed 
#                  'isSignal' : 1,
#                  'isData'   : 0,
#                  'scale'    : 1    #
#                  }

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

plot['Vg']  = { 
                  'color': 859, # kAzure -1  
                  'isSignal' : 0,
                  'isData'   : 0,
                  'scale'    : 1.0
}

#plot['ggH_hww'] = {
#                  'nameHR' : 'ggH',
#                  'color': 632, # kRed 
#                  'isSignal' : 1,
#                  'isData'   : 0,    
#                  'scale'    : 1    #
#}

plot['VVV']  = { 
                  'color': 857, # kAzure -3  
                  'isSignal' : 0,
                  'isData'   : 0,
                  'scale'    : 1.0
}

#plot['WZ']  = { 
#                  'color': 887, # kAzure -2  
#                  'isSignal' : 0,
#                  'isData'   : 0,
#                  'scale'    : 1.0
#}

#plot['H_htt'] = {
#                  'nameHR' : 'Htt',
#                  'color': 632+4, # kRed+4 
#                  'isSignal' : 1,
#                  'isData'   : 0,    
#                  'scale'    : 1    #
#}


#plot['ZH_htt'] = {
#                  'nameHR' : 'ZHtt',
#                  'color': 632+3, # kRed+3 
#                  'isSignal' : 1,
#                  'isData'   : 0,    
#                  'scale'    : 1    #
#                  }

 
#plot['ZH_hww'] = {
#                  'nameHR' : 'ZH',
#                  'color': 632+3, # kRed+3 
#                  'isSignal' : 1,
#                  'isData'   : 0,    
#                  'scale'    : 1    #
#}

#plot['WH_hww'] = {
#                  'nameHR' : 'WH',
#                  'color': 632+2, # kRed+2 
#                  'isSignal' : 1,
#                  'isData'   : 0,    
#                  'scale'    : 1    #
#}

#plot['WW']  = {
#                  'color': 851, # kAzure -9 
#                  'isSignal' : 0,
#                  'isData'   : 0,    
#                  'scale'    : 1.0   # ele/mu trigger efficiency   datadriven
#}

#plot['DY']  = {
#                  'color': 418,    # kGreen+2
#                  'isSignal' : 0,
#                  'isData'   : 0,
#                  'scale'    : 1,
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

#              }

plot['WZgS_L']  = { 
                  'color': 890, # kAzure -2  
                  'isSignal' : 0,
                  'isData'   : 0,
                  'scale'    : 0.6
                  }

plot['WZgS_H']  = { 
                  'color': 887, # kAzure -2  
                  'isSignal' : 0,
                  'isData'   : 0,
                  'scale'    : 1.0
}
#plot['Wg_MADGRAPHMLM'] = {
#                  'nameHR' : 'Hww',
#                  'color': 632, # kRed 
#                  'isSignal' : 1,
#                  'isData'   : 0,
#                  'scale'    : 1    #
#                  }

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
legend['lumi'] = 'L = 41.5/fb'

legend['sqrt'] = '#sqrt{s} = 13 TeV'

