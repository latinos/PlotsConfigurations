## plot configuration
#
#
#
## groupPlot = {}
## 
## Groups of samples to improve the plots.
## If not defined, normal plots is used
##
#
##groupPlot['Fake']  = {  
#                  #'nameHR' : 'Fake',
#                  #'isSignal' : 0,
#                  #'color': 921,    # kGray + 1
#                  #'samples'  : ['Fake']
#              #}
#
#
##groupPlot['top']  = {  
##                  'nameHR' : 'tW and t#bart',
##                  'isSignal' : 0,
##                  'color': 400, #  kYellow
##                  'samples'  : ['top']
##              }
#
##groupPlot['WW']  = {  
##                  'nameHR' : 'WW',
##                  'isSignal' : 0,
##                  'color': 851, # kAzure -9 
##                  'samples'  : ['WW']
##                  #'samples'  : ['WW', 'ggWW']
##              }
#
##groupPlot['VVV']  = {  
#                  #'nameHR' : 'VVV',
#                  #'isSignal' : 0,
#                  #'color': 857, # kAzure -3  
#                  #'samples'  : ['VVV']
#              #}
#
#
##groupPlot['VZ']  = {  
#                  #'nameHR' : "VZ/#gamma*/#gamma",
#                  #'isSignal' : 0,
#                  #'color'    : 617,   # kViolet + 1  
#                  #'samples'  : ['VZ', 'Vg', 'Wg', 'VgS', 'WZ', 'ZZ']
#              #}
#
#
#groupPlot['DY']  = {  
#                  'nameHR' : "DY",
#                  'isSignal' : 0,
#                  'color': 418,  #  kGreen+2
#                  #'samples'  : ['DY1', 'DY2']
#                  'samples'  : ['DY']
#              }
#
#groupPlot['DY-noSF']  = {
#                  'nameHR' : "DY-noSF",
#                  'isSignal' : 3,
#                  'color': 1,  #  kGreen+2
#                  #'samples'  : ['DY1', 'DY2']
#                  'samples'  : ['DY-noSF']
#              }
#
#groupPlot['DY-trigW']  = {
#                  'nameHR' : "DY-trigW",
#                  'isSignal' : 3,
#                  'color': 2,  #  kGreen+2
#                  #'samples'  : ['DY1', 'DY2']
#                  'samples'  : ['DY-trigW']
#              }
#
#groupPlot['DY-trigW-SF']  = {
#                  'nameHR' : "DY-trigW-SF",
#                  'isSignal' : 3,
#                  'color': 3,  #  kGreen+2
#                  #'samples'  : ['DY1', 'DY2']
#                  'samples'  : ['DY-trigW-SF']
#              }
#
##groupPlot['DYvtx']  = {  
#                  #'nameHR' : "DY vtx fix",
#                  #'isSignal' : 3,
#                  #'color': 418,  #  kGreen+2
#                  #'samples'  : ['DY1vtxFix', 'DY2vtxFix']
#                  ##'samples'  : ['DY']
#              #}
#
#
#
#
##groupPlot['DYreco']  = {  
#                  #'nameHR' : "DY reco eff fix",
#                  #'isSignal' : 0,
#                  #'color': 418,  #  kGreen+2
#                  #'samples'  : ['DY1reco', 'DY2reco']
#                  ##'samples'  : ['DY']
#              #}
#
#
#
#
##groupPlot['DYreco']  = {  
#                  #'nameHR' : "DY",
#                  #'isSignal' : 0,
#                  #'color': 418,  #  kGreen+2
#                  #'samples'  : ['DYlocal']
#                  ##'samples'  : ['DY']
#              #}
#
###groupPlot['DYreco']  = {  
#                  ##'nameHR' : "DY",
#                  ##'isSignal' : 0,
#                  ##'color': 418,  #  kGreen+2
#                  ##'samples'  : ['DYlocalNoPTZ']
#                  ###'samples'  : ['DY']
#              ##}
#
#
#
#
#
##groupPlot['DYpow']  = {  
#                  #'nameHR' : "DYpow",
#                  #'isSignal' : 3,
#                  #'color': 418,  #  kGreen+2
#                  #'samples'  : ['DYpow']
#                  ##'samples'  : ['DY']
#              #}
#
##groupPlot['Higgs']  = {  
#                  #'nameHR' : 'Higgs',
#                  #'isSignal' : 1,
#                  #'color': 632, # kRed 
#                  #'samples'  : ['H_htt', 'H_hww', 'ZH_hww', 'ggZH_hww', 'WH_hww', 'qqH_hww', 'ggH_hww']
#              #}
#
#





#plot = {}

# keys here must match keys in samples.py    
#                    
plot['DY']  = {  
                  'color': 418,    # kGreen+2
                  'isSignal' : 0,
                  'isData'   : 0, 
                  'scale'    : 1.   ,
              }

plot['DY-noSF'] = {
                  'color': 1,    # kGreen+2
                  'isSignal' : 3,
                  'isData'   : 0,
                  'scale'    : 1.   ,
              }

plot['DY-trigW'] = {
                  'color': 2,    # kGreen+2
                  'isSignal' : 3,
                  'isData'   : 0,
                  'scale'    : 1.   ,
              }

plot['DY-trigW-EMTF'] = {
                  'color': 4,    # kGreen+2
                  'isSignal' : 3,
                  'isData'   : 0,
                  'scale'    : 1.   ,
              }

plot['DY-trigW-SF'] = {
                  'color': 3,    # kGreen+2
                  'isSignal' : 3,
                  'isData'   : 0,
                  'scale'    : 1.   ,
              }

plot['DYnoReco']  = {  
                  'color': 419,    # kGreen+3
                  'isSignal' : 0,
                  'isData'   : 0, 
                  #'scale'    : 0.0036,
                  'scale'    : 1.0,
                  #'scale'    : 0.87,
                  #'scale'    : 10.0*0.7*1.2*1.1,
                  #'scale'    : 11.0*0.87,
                  #'isSignal' : 2                    
                  'cuts'  : {
                       'DYee'      : 0.80 ,
                       'Zee'       : 0.80 ,
                       'Zmm'       : 0.95 ,
                       'DYee2lepEB'      : 0.85 ,
                       'DYee2lepEE'      : 0.85 ,
                       'DYee0j'      : 0.85 ,
                       'DYee1j'      : 0.85 ,
                       'DYee2j'      : 0.85 ,
                       'DYeeLowVtx'      : 0.86 ,
                       'DYeeHighVtx'      : 0.80 ,
                       #
                       }
              }






plot['DYpow']  = {  
                  'color': 632,    # kRed
                  'isSignal' : 0,
                  'isData'   : 0, 
                  #'scale'    : 6025.20,
                  'scale'    : 0.8,
                  #'isSignal' : 2     # draw together
                  'isSignal' : 3     # draw together and do ratio plot w.r.t. data
              }



plot['DYlocal']  = {  
                  'color': 418,    # kGreen+2
                  'isSignal' : 0,
                  'isData'   : 0, 
                  'scale'    : 11.0*0.85,
                  #'scale'    : 11.0*0.75,
              }

plot['DYlocalNoPTZ']  = {  
                  'color': 419,    # kGreen+3
                  'isSignal' : 0,
                  'isData'   : 0, 
                  'scale'    : 11.0*0.75,
              }




plot['DY1']  = {  
                  'color': 418,    # kGreen+2
                  'isSignal' : 0,
                  'isData'   : 0, 
                  'scale'    : 1.0,
                  #'scale'    : 0.87,
                  #'scale'    : 10.0*0.7*1.2*1.1,
                  #'scale'    : 11.0*0.87,
                  #'isSignal' : 2                    
                  #'cuts'  : {
                       #'DYee'      : 0.85 ,
                       #'DYee2lepEB'      : 0.85 ,
                       #'DYee2lepEE'      : 0.85 ,
                       #'DYee2lepEBEE'      : 0.85 ,
                       #'DYee0j'      : 0.85 ,
                       #'DYee1j'      : 0.85 ,
                       #'DYee2j'      : 0.85 ,
                       ##
                       #}
              }

plot['DY2']  = {  
                  'color': 418,    # kGreen+2
                  'isSignal' : 0,
                  'isData'   : 0, 
                  'scale'    : 1.0,
                  #'scale'    : 0.87,
                  #'scale'    : 10.0*0.7*1.2*1.1,
                  #'scale'    : 11.0*0.87,
                  #'isSignal' : 2                    
                  #'cuts'  : {
                       #'DYee'      : 0.85 ,
                       #'DYee2lepEB'      : 0.85 ,
                       #'DYee2lepEE'      : 0.85 ,
                       #'DYee2lepEBEE'      : 0.85 ,
                       #'DYee0j'      : 0.85 ,
                       #'DYee1j'      : 0.85 ,
                       #'DYee2j'      : 0.85 ,
                       ##
                       #}
              }                  


plot['DY1vtxFix']  = {  
                  'color': 418,    # kGreen+2
                  'isSignal' : 0,
                  'isData'   : 0, 
                  'scale'    : 1.0,
              }

plot['DY2vtxFix']  = {  
                  'color': 418,    # kGreen+2
                  'isSignal' : 0,
                  'isData'   : 0, 
                  'scale'    : 1.0,
              }                  




plot['DY1reco']  = {  
                  'color': 418,    # kGreen+2
                  'isSignal' : 0,
                  'isData'   : 0, 
                  'scale'    : 1.0,
              }

plot['DY2reco']  = {  
                  'color': 418,    # kGreen+2
                  'isSignal' : 0,
                  'isData'   : 0, 
                  'scale'    : 1.0,
              }                  





plot['DYnoFix']  = {  
                  'color': 417,    # kGreen+1
                  #'isSignal' : 0,
                  'isData'   : 0, 
                  #'scale'    : 1.0,
                  'scale'    : 0.87,
                  #'scale'    : 10.0*0.7*1.2*1.12531366997*0.957448585511,
                  #'scale'    : 11.0*0.87,
                  'isSignal' : 3                    
              }

plot['DYnoFixVar1']  = {  
                  'color': 419,    # kGreen+3
                  'isSignal' : 0,
                  'isData'   : 0, 
                  #'scale'    : 1.0,
                  'scale'    : 10.0*0.7*1.2*1.09908811089,
                  #'scale'    : 11.0*0.87,
                  'isSignal' : 3                   
              }

plot['DYnoFixVar2']  = {  
                  'color': 420,    # kGreen+4
                  'isSignal' : 0,
                  'isData'   : 0, 
                  #'scale'    : 1.0,
                  'scale'    : 10.0*0.7*1.2*1.17460108196,
                  #'scale'    : 11.0*0.87,
                  'isSignal' : 3                   
              }

plot['DYnoFixVar3']  = {  
                  'color': 856, # kAzure -4  
                  'isSignal' : 0,
                  'isData'   : 0, 
                  #'scale'    : 1.0,
                  'scale'    : 10.0*0.7*1.2*1.14516381304,
                  #'scale'    : 11.0*0.87,
                  'isSignal' : 3                   
              }

plot['DYnoFixVar4']  = {  
                  'color': 855, # kAzure -3
                  'isSignal' : 0,
                  'isData'   : 0, 
                  #'scale'    : 1.0,
                  'scale'    : 10.0*0.7*1.2*1.10819059615,
                  #'scale'    : 11.0*0.87,
                  'isSignal' : 3                   
              }

plot['DYnoFixVar5']  = {  
                  'color': 423,    # kGreen+7
                  'isSignal' : 0,
                  'isData'   : 0, 
                  #'scale'    : 1.0,
                  'scale'    : 10.0*0.7*1.2*1.20689393207,
                  #'scale'    : 11.0*0.87,
                  'isSignal' : 3                   
              }

plot['DYnoFixVar6']  = {  
                  'color': 424,    # kGreen+8
                  'isSignal' : 0,
                  'isData'   : 0, 
                  #'scale'    : 1.0,
                  'scale'    : 10.0*0.7*1.2*1.10595098881,
                  #'scale'    : 11.0*0.87,
                  'isSignal' : 3                   
              }

plot['DYnoFixVar7']  = {  
                  'color': 425,    # kGreen+9
                  'isSignal' : 0,
                  'isData'   : 0, 
                  #'scale'    : 1.0,
                  'scale'    : 10.0*0.7*1.2*1.09292849814,
                  #'scale'    : 11.0*0.87,
                  'isSignal' : 3                   
              }

plot['DYnoFixVar8']  = {  
                  'color': 426,    # kGreen+10
                  'isSignal' : 0,
                  'isData'   : 0, 
                  #'scale'    : 1.0,
                  'scale'    : 10.0*0.7*1.2*1.14043681113,
                  #'scale'    : 11.0*0.87,
                  'isSignal' : 3                   
              }

plot['DYnoFixVar9']  = {  
                  'color': 427,    # kGreen+11
                  'isSignal' : 0,
                  'isData'   : 0, 
                  #'scale'    : 1.0,
                  'scale'    : 10.0*0.7*1.2,
                  #'scale'    : 11.0*0.87,
                  'isSignal' : 3                   
              }




plot['DYfixData']  = {  
                  'color': 851, # kAzure -9 
                  'isSignal' : 0,
                  'isData'   : 0, 
                  #'scale'    : 1,
                  'scale'    : 0.92,
                  #'scale'    : 9.76004256888*1.02849886636,
                  'isSignal' : 3     # draw together and do ratio plot w.r.t. data
              }


plot['DYLO']  = {  
                  'color': 632,    # kRed
                  'isSignal' : 0,
                  'isData'   : 0, 
                  #'scale'    : 6025.20,
                  #'scale'    : 1,
                  'scale'    : 0.95,
                  #'scale'    : 1*0.969828926366*1.03932766586*0.96216047436,
                  #'isSignal' : 2     # draw together
                  'isSignal' : 3     # draw together and do ratio plot w.r.t. data
              }

 

plot['VgS'] = { 
                  'color'    : 617,   # kViolet + 1  
                  'isSignal' : 0,
                  'isData'   : 0,
                  'scale'    : 1.0
                  }

 
plot['Vg'] = { 
                  'color'    : 617,   # kViolet + 1  
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
                  'isSignal' : 1,
                  'isData'   : 0,    
                  'scale'    : 1    #
                  }

plot['ZH_hww'] = {
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

plot['WH_hww'] = {
                  'nameHR' : 'WH',
                  'color': 632+2, # kRed+2 
                  'isSignal' : 1,
                  'isData'   : 0,    
                  'scale'    : 1    #
                  }


plot['qqH_hww'] = {
                  'nameHR' : 'qqH',
                  'color': 632+1, # kRed+1 
                  'isSignal' : 1,
                  'isData'   : 0,    
                  'scale'    : 1    #
                  }


plot['ggH_hww'] = {
                  'nameHR' : 'ggH',
                  'color': 632, # kRed 
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
                  #'isBlind'  : 1
              }




# additional options

#legend['lumi'] = 'L = 6.3/fb'
legend['lumi'] = 'L = 35.9/fb'
legend['sqrt'] = '#sqrt{s} = 13 TeV'




