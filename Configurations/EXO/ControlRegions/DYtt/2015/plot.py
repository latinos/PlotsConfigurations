# plot configuration

#plot = {}

# keys here must match keys in samples.py    
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


#groupPlot['Higgs']  = {  
#                  'nameHR' : 'Higgs',
#                  'isSignal' : 0,
#                  'color': 632, # kRed 
#                  'samples'  : ['H_htt', 'H_hww', 'ZH_hww', 'ggZH_hww', 'WH_hww', 'qqH_hww', 'ggH_hww']
#              }

#groupPlot['300']  = {
#                  'nameHR' : 'mH = 300 GeV X 10',
#                  'isSignal' : 2,
#                  'color': 633, # kRed 
#                  'samples'  : ['ggH_hww_300_c10brn00','qqH_hww_300_c10brn00']
#               }

#groupPlot['800']  = {
#                  'nameHR' : 'mH = 800 GeV X 10',
#                  'isSignal' : 2,
#                  'color': 635, # kRed 
#                  'samples'  : ['ggH_hww_800_c10brn00','qqH_hww_800_c10brn00']
#               }

plot['DY']  = {  
                  'color': 418,    # kGreen+2
                  'isSignal' : 0,
                  'isData'   : 0, 
                  'scale'    : 1.0
              }

plot['DY0jet']  = {  
                  'color': 418,    # kGreen+2
                  'isSignal' : 0,
                  'isData'   : 0, 
                  'scale'    : 1.0
              }

plot['DY1jet']  = {  
                  'color': 419,    # kGreen+3
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
                  'scale'    : 1.0
                  }

plot['top0jet'] = {   
                  'nameHR' : 'tW and t#bart 0 jet',
                  'color': 400,   # kYellow
                  'isSignal' : 0,
                  'isData'   : 0, 
                  'scale'    : 1.0
                  }


plot['top1jet'] = {   
                  'nameHR' : 'tW and t#bart 1 jet',
                  'color': 401,   # kYellow+1
                  'isSignal' : 0,
                  'isData'   : 0, 
                  'scale'    : 1.0
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
                  'isSignal' : 0,
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


#plot['ggH_hww_750_NWA'] = {
#                 'nameHR' : 'ggH 750 NWA',
#                  'color': 632, # kRed 
#                  'isSignal' : 2,
#                  'isData'   : 0,
#                  'scale'    : 0    #
#                  }
#
#plot['qqH_hww_750_NWA'] = {
#                  'nameHR' : 'qqH 750 NWA (x100)',
#                  'color': 654,
#                  'isSignal' : 2,
#                  'isData'   : 0,
#                  'scale'    : 0    #
#                  }
#
#import os.path
#
#massesAndModelsFile = "massesAndModels.py"
#
#if os.path.exists(massesAndModelsFile) :
#  handle = open(massesAndModelsFile,'r')
#  exec(handle)
#  handle.close()
#else:
#  print "!!! ERROR file ", massesAndModelsFile, " does not exist."
#
#for m in masses:
#  for model in models:
#    model_name = model.replace("cprime","c").replace(".","").replace("BRnew","brn")
#    plot['ggH_hww_'+m+'_'+model_name] = {
#                  'nameHR' : 'ggH '+m+' '+model,
#                  'color': 600+int(int(m)/100+0.5), # kRed 
#                  #'color':   col,
#                  'isSignal' : 2,
#                  'isData'   : 0,
#                  'scale'    : 10    #
#                  }
#    plot['qqH_hww_'+m+'_'+model_name] = {
#                  'nameHR' : 'qqH '+m+' '+model+' (x100)',
#                  'color': 600+20+int(int(m)/100+0.5), # kRed 
#                  'isSignal' : 2,
#                  'isData'   : 0,
#                  'scale'    : 10    #
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
legend['lumi'] = 'L = 2.3/fb' # 2.318 fb-1
legend['sqrt'] = '#sqrt{s} = 13 TeV'




