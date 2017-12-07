# plot configuration
# groupPlot = {}
 
# Groups of samples to improve the plots.
# If not defined, normal plots is used


#groupPlot['DY']  = {  
#                  'nameHR' : "DY",
#                  'isSignal' : 0,
#                  'color': 418,    # kGreen+2
#                  'samples'  : ['DY']
#              }

groupPlot['Fake']  = {  
                  'nameHR' : 'Non-prompt',
                  'isSignal' : 0,
                  'color': 921,    # kGray + 1
                  'samples'  : ['Fake']
              }

#groupPlot['top']  = {  
#                  'nameHR' : 'tW and t#bart',
#                  'isSignal' : 0,
#                  'color': 921,   # kYellow
#                  'samples'  : ['top']
#              }

groupPlot['WW']  = {  
                  'nameHR' : 'WW',
                  'isSignal' : 0,
                  'color': 851, # kAzure -9 
                  'samples'  : ['WW']
              }

groupPlot['VVV']  = {  
                  'nameHR' : 'VVV',
                  'isSignal' : 0,
                  'color': 857, # kAzure -3  
                  'samples'  : ['VVV']
              }


groupPlot['Vg']  = {
                  'nameHR' : 'Vg',
                  'color': 859, # kAzure -1  
                  'isSignal' : 0,
                  'isData'   : 0,
                  'scale'    : 1.0,
                  'samples'  : ['Vg']
                  }


groupPlot['ZZ']  = {
                  'nameHR' : "ZZ",
                  'isSignal' : 0,
                  'color'    : 617,   # kViolet + 1  
          #        'samples'  : ['ZZ', 'ggZZ_tt', 'ggZZ_em', 'ggZZ_ee', 'ggZZ_mm']
                  'samples'  : ['ZZ']
              }

groupPlot['WZ']  = {
                  'nameHR' : "WZ",
                  'isSignal' : 0,
                  'color'    : 400,   # Yellow
                  'samples'  : ['WZ']
              }

groupPlot['Higgs']  = {  
                  'nameHR' : 'Higgs',
                  'isSignal' : 1,
                  'color': 632, # kRed 
                  'samples'  : [
                                'ZH_hww', 'ZH_had_hww' , 'ZH_had_fwd_hww' , 'ZH_lep_hww' , 'ZH_lep_fwd_hww' , 
                                'WH_hww', 'WH_had_hww' , 'WH_had_fwd_hww' , 'WH_lep_hww' , 'WH_lep_fwd_hww' , 
                                'ggZH_hww' , 'ggZH_lep_hww' , 'ggZH_lep_fwd_hww' , 
                                #
                                'ZH_htt', 'ZH_had_htt' , 'ZH_had_fwd_htt' , 'ZH_lep_htt' , 'ZH_lep_fwd_htt' , 
                                'WH_htt', 'WH_had_htt' , 'WH_had_fwd_htt' , 'WH_lep_htt' , 'WH_lep_fwd_htt' , 
                               ]



groupPlot['Higgs']  = {  
                  'nameHR' : 'Higgs',
                  'isSignal' : 1,
                  'color': 632, # kRed 
                  'samples'  : ['WH_htt', 'ZH_htt', 'WH_hww', 'ZH_hww']
              }

#plot = {}

# keys here must match keys in samples.py    
#                    
#plot['DY']  = {
#                  'color': 418,    # kGreen+2
#                  'isSignal' : 0,
#                  'isData'   : 0,
#                  'scale'    : 1.0,
#              }

               
#plot['Wjets']  = {  
#                  'color': 921,    # kGray + 1
#                  'isSignal' : 0,
#                  'isData'   : 0,
#                  'scale'    : 1.0                  
#              }

               
plot['Fake']  = {  
                  'color': 921,    # kGray + 1
                  'isSignal' : 0,
                  'isData'   : 0,
                  'scale'    : 1.0                  
              }

#plot['top'] = {   
#                  'nameHR' : 't#bart',
#                  'color': 400,   # kYellow 
#                  'isSignal' : 0,
#                  'isData'   : 0 ,
#                  'scale'    : 1.0
#                  }

              
plot['VV']  = {
                  'color': 851, # kAzure -9 
                  'isSignal' : 0,
                  'isData'   : 0,    
                  'scale'    : 1.0
                  }

plot['WW']  = {
                  'color': 850, # kAzure -10
                  'isSignal' : 0,
                  'isData'   : 0,    
                  'scale'    : 1.0
                  }


plot['Vg']  = { 
                  'nameHR' : 'Zg',
                  'color': 859, # kAzure -1  
                  'isSignal' : 0,
                  'isData'   : 0,
                  'scale'    : 1.0
                  }

#plot['VgS'] = { 
#                  'color'    : 617,   # kViolet + 1  
#                  'isSignal' : 0,
#                  'isData'   : 0,
#                  'scale'    : 1.0
#                  }

plot['WZ']  = { 
                  'nameHR' : 'WZ',
                  'color': 858, # kAzure -2  
                  'isSignal' : 0,
                  'isData'   : 0,
                  'scale'    : 1.0
                  }

plot['ZZ']  = { 
                  'nameHR' : 'ZZ',
                  'color': 856, # kAzure -4  
                  'isSignal' : 0,
                  'isData'   : 0,
                  'scale'    : 1.0
                  }

#plot['ggZZ_tt']  = {
#                  'nameHR' : 'ggZZ_tt',
#                  'color': 856, # kAzure -4  
#                  'isSignal' : 0,
#                  'isData'   : 0,
#                  'scale'    : 1.0
#                  }
#
#plot['ggZZ_em']  = {
#                  'nameHR' : 'ggZZ_em',
#                  'color': 856, # kAzure -4  
#                  'isSignal' : 0,
#                  'isData'   : 0,
#                  'scale'    : 1.0
#                  }
#
#plot['ggZZ_ee']  = {
#                  'nameHR' : 'ggZZ_ee',
#                  'color': 856, # kAzure -4  
#                  'isSignal' : 0,
#                  'isData'   : 0,
#                  'scale'    : 1.0
#                  }
#
#plot['ggZZ_mm']  = {
#                  'nameHR' : 'ggZZ_mm',
#                  'color': 856, # kAzure -4  
#                  'isSignal' : 0,
#                  'isData'   : 0,
#                  'scale'    : 1.0
#                  }

plot['VVV']  = { 
                  'color': 857, # kAzure -3  
                  'isSignal' : 0,
                  'isData'   : 0,
                  'scale'    : 1.0
                  }

plot['ZH_htt'] = {
                  'nameHR' : 'ZH',
                  'color': 632+3, # kRed+3 
                  'isSignal' : 1,
                  'isData'   : 0,    
                  'scale'    : 1    #
                  }

plot['ZH_had_htt'] = {
                  'nameHR' : 'ZH',
                  'color': 632+3, # kRed+3 
                  'isSignal' : 1,
                  'isData'   : 0,
                  'scale'    : 1    #
                  }

plot['ZH_had_fwd_htt'] = {
                  'nameHR' : 'ZH',
                  'color': 632+3, # kRed+3 
                  'isSignal' : 1,
                  'isData'   : 0,
                  'scale'    : 1    #
                  }

plot['ZH_lep_htt'] = {
                  'nameHR' : 'ZH',
                  'color': 632+3, # kRed+3 
                  'isSignal' : 1,
                  'isData'   : 0,
                  'scale'    : 1    #
                  }

plot['ZH_lep_fwd_htt'] = {
                  'nameHR' : 'ZH',
                  'color': 632+3, # kRed+3 
                  'isSignal' : 1,
                  'isData'   : 0,
                  'scale'    : 1    #
                  }

plot['WH_htt'] = {
                  'nameHR' : 'WH',
                  'color': 632+2, # kRed+2 
                  'isSignal' : 1,
                  'isData'   : 0,    
                  'scale'    : 1    #
                  }

plot['WH_had_htt'] = {
                  'nameHR' : 'WH',
                  'color': 632+2, # kRed+2 
                  'isSignal' : 1,
                  'isData'   : 0,
                  'scale'    : 1    #
                  }

plot['WH_had_fwd_htt'] = {
                  'nameHR' : 'WH',
                  'color': 632+2, # kRed+2 
                  'isSignal' : 1,
                  'isData'   : 0,
                  'scale'    : 1    #
                  }

plot['WH_lep_htt'] = {
                  'nameHR' : 'WH',
                  'color': 632+2, # kRed+2 
                  'isSignal' : 1,
                  'isData'   : 0,
                  'scale'    : 1    #
                  }

plot['WH_lep_fwd_htt'] = {
                  'nameHR' : 'WH',
                  'color': 632+2, # kRed+2 
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

plot['ZH_had_hww'] = {
                  'nameHR' : 'ZH',
                  'color': 632+3, # kRed+3 
                  'isSignal' : 1,
                  'isData'   : 0,
                  'scale'    : 1    #
                  }

plot['ZH_had_fwd_hww'] = {
                  'nameHR' : 'ZH',
                  'color': 632+3, # kRed+3 
                  'isSignal' : 1,
                  'isData'   : 0,
                  'scale'    : 1    #
                  }

plot['ZH_lep_hww'] = {
                  'nameHR' : 'ZH',
                  'color': 632+3, # kRed+3 
                  'isSignal' : 1,
                  'isData'   : 0,
                  'scale'    : 1    #
                  }

plot['ZH_lep_fwd_hww'] = {
                  'nameHR' : 'ZH',
                  'color': 632+3, # kRed+3 
                  'isSignal' : 1,
                  'isData'   : 0,
                  'scale'    : 1    #
                  }

plot['ggZH_hww'] = {
                  'nameHR' : 'ggZH',
                  'color': 632+4, # kRed+4
                  'isSignal' : 1,
                  'isData'   : 0,    
                  'scale'    : 1    #
                  }

plot['ggZH_lep_hww'] = {
                  'nameHR' : 'ggZH',
                  'color': 632+4, # kRed+4
                  'isSignal' : 1,
                  'isData'   : 0,
                  'scale'    : 1    #
                  }

plot['ggZH_lep_fwd_hww'] = {
                  'nameHR' : 'ggZH',
                  'color': 632+4, # kRed+4
                  'isSignal' : 1,
                  'isData'   : 0,
                  'scale'    : 1    #
                  }

plot['WH_hww'] = {
                  'nameHR' : 'WH',
                  'color': 632+2, # kRed+2 
                  'isSignal' : 1,
                  'isData'   : 0,    
                  'scale'    : 1    #
                  }

plot['WH_had_hww'] = {
                  'nameHR' : 'WH',
                  'color': 632+2, # kRed+2 
                  'isSignal' : 1,
                  'isData'   : 0,
                  'scale'    : 1    #
                  }

plot['WH_had_fwd_hww'] = {
                  'nameHR' : 'WH',
                  'color': 632+2, # kRed+2 
                  'isSignal' : 1,
                  'isData'   : 0,
                  'scale'    : 1    #
                  }

plot['WH_lep_hww'] = {
                  'nameHR' : 'WH',
                  'color': 632+2, # kRed+2 
                  'isSignal' : 1,
                  'isData'   : 0,
                  'scale'    : 1    #
                  }

plot['WH_lep_fwd_hww'] = {
                  'nameHR' : 'WH',
                  'color': 632+2, # kRed+2 
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
                  'isBlind'  : 1
              }

# additional options

legend['lumi'] = 'L = 35.9/fb'
legend['sqrt'] = '#sqrt{s} = 13 TeV'
