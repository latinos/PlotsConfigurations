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



groupPlot['Fake']  = {  
                  'nameHR' : 'Fake',
                  'isSignal' : 0,
                  'color': 921,    # kGray + 1
                  'samples'  : ['Fake']
              }


groupPlot['top']  = {  
                  'nameHR' : 'tW and t#bart',
                  'isSignal' : 0,
                  'color': 400,   # kYellow
                  'samples'  : ['top']
              }

groupPlot['WW']  = {  
                  'nameHR' : 'WW',
                  'isSignal' : 0,
                  'color': 851, # kAzure -9 
                  'samples'  : ['WW', 'ggWW']
              }

groupPlot['VVV']  = {  
                  'nameHR' : 'VVV',
                  'isSignal' : 0,
                  'color': 857, # kAzure -3  
                  'samples'  : ['VVV']
              }


groupPlot['VZ']  = {  
                  'nameHR' : "VZ/#gamma*/#gamma",
                  'isSignal' : 0,
                  'color'    : 617,   # kViolet + 1  
                  'samples'  : ['VZ', 'Vg', 'Wg', 'VgS', 'WZ', 'ZZ']
              }


groupPlot['Higgs']  = {  
                  'nameHR' : 'Higgs',
                  'isSignal' : 0,
                  'color': 632, # kRed 
                  'samples'  : ['H_htt', 'H_hww', 'ZH_hww', 'ggZH_hww', 'WH_hww', 'qqH_hww', 'ggH_hww']
              }


groupPlot['600']  = {  
                  'nameHR' : 'mZ=600 GeV',
                  'isSignal' : 2,
                  'color': 800, # kOrange 
                  'samples'  : ['monoH_600']
              }

groupPlot['800']  = {  
                  'nameHR' : 'mZ=800 GeV',
                  'isSignal' : 2,
                  'color': 801, # kOrange + 1 
                  'samples'  : ['monoH_800']
              }

# groupPlot['1000']  = {  
#                   'nameHR' : 'mZ=1000 GeV',
#                   'isSignal' : 2,
#                   'color': 802, # kOrange + 2 
#                   'samples'  : ['monoH_1000']
#               }

groupPlot['1200']  = {  
                  'nameHR' : 'mZ=1200 GeV',
                  'isSignal' : 2,
                  'color': 803, # kOrange + 3 
                  'samples'  : ['monoH_1200']
              }

# groupPlot['1400']  = {   
#                   'nameHR' : 'mZ=1400 GeV',
#                   'isSignal' : 2,
#                   'color': 804, # kOrange + 4 
#                   'samples'  : ['monoH_1400']
#               }

groupPlot['1700']  = {  
                  'nameHR' : 'mZ=1700 GeV',
                  'isSignal' : 2,
                  'color': 805, # kOrange + 5 
                  'samples'  : ['monoH_1700']
              }

groupPlot['2000']  = {  
                  'nameHR' : 'mZ=2000 GeV',
                  'isSignal' : 2,
                  'color': 806, # kOrange + 6 
                  'samples'  : ['monoH_2000']
              }

groupPlot['2500']  = {  
                  'nameHR' : 'mZ=2500 GeV',
                  'isSignal' : 2,
                  'color': 807, # kOrange + 7 
                  'samples'  : ['monoH_2500']
              }


#plot = {}

# keys here must match keys in samples.py    
#                    
plot['DY']  = {  
                  'color': 418,    # kGreen+2
                  'isSignal' : 0,
                  'isData'   : 0, 
                  'scale'    : 1.0
              }


               
plot['Wjets']  = {  
                  'color': 921,    # kGray + 1
                  'isSignal' : 0,
                  'isData'   : 0,
                  'scale'    : 1.0                  
              }



               
plot['Fake']  = {  
                  'color': 921,    # kGray + 1
                  'isSignal' : 0,
                  'isData'   : 0,
                  'scale'    : 1.0                  
              }

              
plot['FakeQCD']  = {  
                  'color': 922,    # kGray + 2
                  'isSignal' : 0,
                  'isData'   : 0,
                  'scale'    : 1.0                  
              }



plot['ttbar'] = {   
                  'nameHR' : 't#bart',
                  'color': 400,   # kYellow 
                  'isSignal' : 0,
                  'isData'   : 0 ,
                  'scale'    : 1.0
                  }


plot['singletop'] = {   
                  'nameHR' : 't and tW',
                  'color': 401,   # kYellow +1
                  'isSignal' : 0,
                  'isData'   : 0, 
                  'scale'    : 1.0
                  }

plot['top'] = {   
                  'nameHR' : 'tW and t#bart',
                  'color': 400,   # kYellow
                  'isSignal' : 0,
                  'isData'   : 0, 
                  'scale'    : 1.0,
                  
                  'cuts'  : {
                       'ww2l2v_13TeV_ww_of0j'   : 0.98 ,
                       'ww2l2v_13TeV_ww_of1j'   : 0.87 , 
                       'ww2l2v_13TeV_ww_of2j'   : 0.90 ,                
                        },
                  
                  }


plot['WW']  = {
                  'color': 851, # kAzure -9 
                  'isSignal' : 0,
                  'isData'   : 0,    
                  'scale'    : 1.0,   # ele/mu trigger efficiency   datadriven
                  
                  'cuts'  : {
                       'ww2l2v_13TeV_ww_of'     : 1.05 ,
                       'ww2l2v_13TeV_ww_of0j'   : 1.05 ,
                       'ww2l2v_13TeV_ww_of1j'   : 1.20 , 
                       'ww2l2v_13TeV_ww_of2j'   : 1.20 ,                
                  
                  }
                 }
                  

plot['ggWW']  = {
                  'color': 850, # kAzure -10
                  'isSignal' : 0,
                  'isData'   : 0,    
                  'scale'    : 1.0
                  }

plot['ggWW_Int']  = {
                  'color': 616, # kMagenta
                  'isSignal' : 0,
                  'isData'   : 0,    
                  'scale'    : 1.0
                  }

plot['Wg']  = { 
                  'color': 859, # kAzure -1  
                  'isSignal' : 0,
                  'isData'   : 0,
                  'scale'    : 1.0
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

plot['WZ']  = { 
                  'color': 858, # kAzure -2  
                  'isSignal' : 0,
                  'isData'   : 0,
                  'scale'    : 1.0
                  }

plot['ZZ']  = { 
                  'color': 856, # kAzure -4  
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

plot['ZZ']  = {
                  'color': 854, # kAzure -6 
                  'isSignal' : 0,
                  'isData'   : 0,    
                  'scale'    : 1.0
                  }



# Htautau

plot['H_htt'] = {
                  'nameHR' : 'Htt',
                  'color': 632+4, # kRed+4 
                  'isSignal' : 1,
                  'isData'   : 0,    
                  'scale'    : 1    #
                  }

# HWW 

plot['H_hww'] = {
                  'nameHR' : 'Hww',
                  'color': 632, # kRed 
                  'isSignal' : 0,
                  'isData'   : 0,    
                  'scale'    : 1    #
                  }

plot['ZH_hww'] = {
                  'nameHR' : 'ZH',
                  'color': 632+3, # kRed+3 
                  'isSignal' : 0,
                  'isData'   : 0,    
                  'scale'    : 1    #
                  }

plot['ggZH_hww'] = {
                  'nameHR' : 'ggZH',
                  'color': 632+4, # kRed+4
                  'isSignal' : 0,
                  'isData'   : 0,    
                  'scale'    : 1    #
                  }

plot['WH_hww'] = {
                  'nameHR' : 'WH',
                  'color': 632+2, # kRed+2 
                  'isSignal' : 0,
                  'isData'   : 0,    
                  'scale'    : 1    #
                  }


plot['qqH_hww'] = {
                  'nameHR' : 'qqH',
                  'color': 632+1, # kRed+1 
                  'isSignal' : 0,
                  'isData'   : 0,    
                  'scale'    : 1    #
                  }


plot['ggH_hww'] = {
                  'nameHR' : 'ggH',
                  'color': 632, # kRed 
                  'isSignal' : 0,
                  'isData'   : 0,    
                  'scale'    : 1    #
                  }

#monoH

plot['monoH_600'] = {
                  'nameHR' : 'mZ600',
                  'color': 800, # kOrange 
                  'isSignal' : 2,
                  'isData'   : 0,    
                  'scale'    : 1    #
                  }

plot['monoH_800'] = {
                  'nameHR' : 'mZ800',
                  'color': 801, # kOrange + 1
                  'isSignal' : 2,
                  'isData'   : 0,    
                  'scale'    : 1    #
                  }

plot['monoH_1000'] = {
                  'nameHR' : 'mZ1000',
                  'color': 802, # kOrange + 2
                  'isSignal' : 2,
                  'isData'   : 0,    
                  'scale'    : 1    #
                  }

plot['monoH_1200'] = {
                  'nameHR' : 'mZ1200',
                  'color': 803, # kOrange + 3
                  'isSignal' : 2,
                  'isData'   : 0,    
                  'scale'    : 1    #
                  }

plot['monoH_1400'] = {
                  'nameHR' : 'mZ1400',
                  'color': 804, # kOrange + 4
                  'isSignal' : 2,
                  'isData'   : 0,    
                  'scale'    : 1    #
                  }

plot['monoH_1700'] = {
                  'nameHR' : 'mZ1700',
                  'color': 805, # kOrange + 5 
                  'isSignal' : 2,
                  'isData'   : 0,    
                  'scale'    : 1    #
                  }

plot['monoH_2000'] = {
                  'nameHR' : 'mZ2000',
                  'color': 806, # kOrange + 6
                  'isSignal' : 2,
                  'isData'   : 0,    
                  'scale'    : 1    #
                  }

plot['monoH_2500'] = {
                  'nameHR' : 'mZ2500',
                  'color': 807, # kOrange + 7 
                  'isSignal' : 2,
                  'isData'   : 0,    
                  'scale'    : 1    #
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

# legend['lumi'] = 'L = 2.3/fb' # 2.264 fb-1
#legend['lumi'] = 'L = 2.3/fb' # 2.318 fb-1
#legend['lumi'] = 'L = 2.6/fb' # 
#legend['lumi'] = 'L = 4.3/fb' # 
#legend['lumi'] = 'L = 6.3/fb' # 
legend['lumi'] = 'L = 12.3/fb' # 
legend['sqrt'] = '#sqrt{s} = 13 TeV'




