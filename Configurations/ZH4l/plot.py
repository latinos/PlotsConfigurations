# plot configuration



# groupPlot = {}
# 
# Groups of samples to improve the plots.
# If not defined, normal plots is used
#

#groupPlot['DY']  = {  
#                  'nameHR' : "DY",
#                  'isSignal' : 0,
#                  'color': 418,    # kGreen+2
#                  'samples'  : ['DY']
#              }



#groupPlot['Fake']  = {  
#                  'nameHR' : 'Non-Prompt',
#                  'isSignal' : 0,
#                  'color': 921,    # kGray + 1
#                  'samples'  : ['Fake']
#              }
#

groupPlot['top']  = {  
                  'nameHR' : 'tW and t#bart',
                  'isSignal' : 0,
                  'color': 401,   # kYellow+1
                  'samples'  : ['top']
              }

groupPlot['WW']  = {  
                  'nameHR' : 'WW',
                  'isSignal' : 0,
                  'color': 419,    # kGreen+3
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

#groupPlot['VZ']  = {  
#                  'nameHR' : "VZ/#gamma*/#gamma",
#                  'isSignal' : 0,
#                  'color'    : 617,   # kViolet + 1  
#                  'samples'  : ['VZ', 'WZ', 'ZZ']
#              }


groupPlot['ZZ']  = {
                  'nameHR' : "ZZ",
                  'isSignal' : 0,
                  'color'    : 857,   # kAzure -3
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
                  'color'    : 612,   # kMagenta -4
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
#plot['DY']  = {  
#                  'color': 418,    # kGreen+2
#                  'isSignal' : 0,
#                  'isData'   : 0, 
#                  'scale'    : 1.0,
 #                 'cuts'  : {
#                       'hww2l2v_13TeV_of0j'      : 0.95 ,
#                       'hww2l2v_13TeV_top_of0j'  : 0.95 , 
#                       'hww2l2v_13TeV_dytt_of0j' : 0.95 ,
#                       'hww2l2v_13TeV_em_0j'     : 0.95 , 
#                       'hww2l2v_13TeV_me_0j'     : 0.95 , 
                       #
 #                      'hww2l2v_13TeV_of1j'      : 1.08 ,
 #                      'hww2l2v_13TeV_top_of1j'  : 1.08 , 
 #                      'hww2l2v_13TeV_dytt_of1j' : 1.08 ,
 #                      'hww2l2v_13TeV_em_1j'     : 1.08 , 
 #                      'hww2l2v_13TeV_me_1j'     : 1.08 , 
  #                      },
#
 #             }


               
#plot['Wjets']  = {  
#                  'color': 921,    # kGray + 1
#                  'isSignal' : 0,
#                  'isData'   : 0,
#                  'scale'    : 1.0                  
#              }



               
#plot['Fake']  = {  
#                  'color': 921,    # kGray + 1
#                  'isSignal' : 0,
#                  'isData'   : 0,
#                  'scale'    : 1.0                  
#              }
#
              
#plot['FakeQCD']  = {  
#                  'color': 922,    # kGray + 2
#                  'isSignal' : 0,
#                  'isData'   : 0,
#                  'scale'    : 1.0                  
#              }



#plot['ttbar'] = {   
#                  'nameHR' : 't#bart',
#                  'color': 400,   # kYellow 
#                  'isSignal' : 0,
#                  'isData'   : 0 ,
#                  'scale'    : 1.0
#                  }


#plot['singletop'] = {   
#                  'nameHR' : 't and tW',
#                  'color': 401,   # kYellow +1
#                  'isSignal' : 0,
#                  'isData'   : 0, 
#                  'scale'    : 1.0
#                  }

plot['top'] = {   
                  'nameHR' : 'tW and t#bart',
                  'color': 401,   # kYellow+1
                  'isSignal' : 0,
                  'isData'   : 0, 
                  'scale'    : 1.0,
           #      'cuts'  : {
#                       'hww2l2v_13TeV_of0j'      : 0.94 ,
#                       'hww2l2v_13TeV_top_of0j'  : 0.94 , 
#                       'hww2l2v_13TeV_dytt_of0j' : 0.94 ,
#                       'hww2l2v_13TeV_em_0j'     : 0.94 , 
#                       'hww2l2v_13TeV_me_0j'     : 0.94 , 
#                       #
#                       'hww2l2v_13TeV_of1j'      : 0.86 ,
#                       'hww2l2v_13TeV_top_of1j'  : 0.86 , 
#                       'hww2l2v_13TeV_dytt_of1j' : 0.86 ,
#                       'hww2l2v_13TeV_em_1j'     : 0.86 , 
#                       'hww2l2v_13TeV_me_1j'     : 0.86 , 
             #           },
                  }


plot['WW']  = {
                  'color': 419,    # kGreen+3
                  'isSignal' : 0,
                  'isData'   : 0,    
                  'scale'    : 1.0   # ele/mu trigger efficiency   datadriven
                  }

#plot['ggWW']  = {
#                  'color': 850, # kAzure -10
#                  'isSignal' : 0,
#                  'isData'   : 0,    
#                  'scale'    : 1.0
#                  }


#plot['Wg']  = { 
#                  'color': 859, # kAzure -1  
#                  'isSignal' : 0,
#                  'isData'   : 0,
#                  'scale'    : 1.0
#                  }

plot['Vg']  = { 
                  'nameHR' : 'Zg',
                  'color': 922,    # kGray + 2
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

#plot['VZ']  = { 
#                  'color': 858, # kAzure -2  
#                  'isSignal' : 0,
#                  'isData'   : 0,
#                  'scale'    : 1.0
#                  }

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

plot['ggZZ']  = { 
                  'nameHR' : 'ggZZ',
                  'color'    : 857,   # kAzure -3
                  'isSignal' : 0,
                  'isData'   : 0,
                  'scale'    : 1.0
                  }
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

#plot['ZZ']  = {
#                  'color': 854, # kAzure -6 
#                  'isSignal' : 0,
#                  'isData'   : 0,    
#                  'scale'    : 1.0
#                  }



# Htautau

plot['ZH_htt'] = {
                  'nameHR' : 'Htt',
                  'color': 632+4, # kRed+4 
                  'isSignal' : 1,
                  'isData'   : 0,    
                  'scale'    : 1    #
                  }

# HWW 

#plot['H_hww'] = {
#                  'nameHR' : 'Hww',
#                  'color': 632, # kRed 
##                  'isSignal' : 1,
#                  'isData'   : 0,    
#                  'scale'    : 1    #
#                  }

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


#plot['qqH_hww'] = {
#                  'nameHR' : 'qqH',

#plot['qqH_hww'] = {
#                  'nameHR' : 'qqH',
#                  'color': 632+1, # kRed+1 
#                  'isSignal' : 1,
#                  'isData'   : 0,    
#                  'scale'    : 1    #
#
#plot['ggH_hww'] = {
#                  'nameHR' : 'ggH',
#                  'color': 632, # kRed 
#                  'isSignal' : 1,
#                  'isData'   : 0,    
#                  'scale'    : 1    #
#                  }

# data
#
plot['DATA']  = { 
                  'nameHR' : 'Data',
                  'color': 1 ,  
                  'isSignal' : 0,
                  'isData'   : 1 ,
                  'isBlind'  : 0
              }




# additional options

legend['lumi'] = 'L = 12.9/fb' # 12.8890 fb-1
legend['sqrt'] = '#sqrt{s} = 13 TeV'




