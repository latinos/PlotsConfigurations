# plot configuration





# groupPlot = {}
# 
# Groups of samples to improve the plots.
# If not defined, normal plots is used
#

groupPlot['ZH']  = {  
                  'nameHR' : 'ZH',
                  'isSignal' : 0,
                  'color': 635, # kRed + 3
                  'samples'  : ['ZH_hww', 'ggZH_hww']
              }


groupPlot['Higgs']  = {  
                  'nameHR' : 'Higgs',
                  'isSignal' : 0,
                  'color': 632, # kRed 
                  'samples'  : ['H_htt', 'H_hww', 'WH_hww', 'qqH_hww', 'ggH_hww']
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

groupPlot['DY']  = {  
                  'nameHR' : "DY",
                  'isSignal' : 0,
                  'color': 418,    # kGreen+2
                  'samples'  : ['DY']
              }


ZpMasses={"600","800","1000","1200","1400","1700","2000","2500"}
A0Masses={"300","400","500","600","700","800"}
i=0

for mZp in ZpMasses:
    for mA0 in A0Masses :
         if ((mZp == "600" and (mA0 == "300" or mA0 == "400")) or ((mZp == "800" and (mA0 == "300" or mA0 == "400" or mA0 == "500" or mA0 == "600"))) or (mZp != "600" and mZp != "800")) :
             if mA0 == "300" :
                 groupPlot[mZp + '_' + mA0]  = {  
                     'nameHR' : 'mZ=' + mZp + ' GeV, mA0=' + mA0 + ' GeV',
                     'isSignal' : 2,
                     'color': 800 + i, # kOrange + i
                     'samples'  : ['monoH_' + mZp + '_' + mA0]
                     }
                 i = i + 1

# ZbarMasses={"500","1000"}
# ChiMasses={"1","150","500","1000"}
# i=0

# for mZb in ZbarMasses :
#     for Chi in ChiMasses :
#         if mZb == "500" and Chi == "1000" :
#             continue
#         if mZb == "1000" and Chi == "500" :
#             continue
#         if mZb == "1000" and Chi == "150" :
#             continue
#         groupPlot['Zbar_' + mZb + '_' + Chi] = { 
#             'nameHR' : 'mZp=' + mZb + ' GeV, mChi=' + Chi + ' GeV',
#             'isSignal' : 2,
#             'color': i, # kBlue + i
#             'samples'  : ['Zbar_' + mZb + '_' + Chi]
#             }
#         i = i + 1

#plot = {}

# keys here must match keys in samples.py    
#                    
plot['DY']  = {  
                  'color': 418,    # kGreen+2
                  'isSignal' : 0,
                  'isData'   : 0, 
                  'scale'    : 0.63
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
                  'scale'    : 0.89,
                  
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
                  'scale'    : 0.75,   # ele/mu trigger efficiency   datadriven
                  
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


i=0
for mZp in ZpMasses :
    for mA0 in A0Masses :
        if ((mZp == "600" and (mA0 == "300" or mA0 == "400")) or ((mZp == "800" and (mA0 == "300" or mA0 == "400" or mA0 == "500" or mA0 == "600"))) or (mZp != "600" and mZp != "800")) :
            if mA0 == "300" :
                plot['monoH_' + mZp + '_' + mA0]  = {  
                    'nameHR' : 'mZ=' + mZp + ' GeV, mA0=' + mA0 + ' GeV x 100',
                    'color': 800 + i, # kOrange + i
                    'isSignal' : 2,
                    'isData'   : 0,
                    'scale'    : 100   #
                    }
                i = i + 1
            else :
                plot['monoH_' + mZp + '_' + mA0]  = {  
                    'nameHR' : '',
                    'color': 2, # kOrange + i
                    'isSignal' : 0,
                    'isData'   : 0,
                    'scale'    : 0   #
                    }
                i = i + 1

        
# ZbarMasses={"500","1000"}
# ChiMasses={"1","150","500","1000"}
# i=0

# for mZb in ZbarMasses :
#     for Chi in ChiMasses :
#         if mZb == "500" and Chi == "1000" :
#             continue
#         if mZb == "1000" and Chi == "500" :
#             continue
#         if mZb == "1000" and Chi == "150" :
#             continue
#         plot['Zbar_' + mZb + '_' + Chi] = { 
#             'nameHR' : 'mZp=' + mZb + ' GeV, mChi=' + Chi + ' GeV',
#             'color': i, # kBlue + i
#             'isSignal' : 2,
#             'isData'   : 0,
#             'scale'    : 1
#             }
#         i = i + 1

# data

plot['DATA']  = { 
                  'nameHR' : 'Data',
                  'color': 1 ,  
                  'isSignal' : 0,
                  'isData'   : 1 ,
                  'isBlind'  : 0
              }




# Additional options

# legend['lumi'] = 'L = 2.3/fb' # 2.264 fb-1
#legend['lumi'] = 'L = 2.3/fb' # 2.318 fb-1
#legend['lumi'] = 'L = 2.6/fb' # 
#legend['lumi'] = 'L = 4.3/fb' # 
#legend['lumi'] = 'L = 6.3/fb' # 
legend['lumi'] = 'L = 2.58/fb' # 
legend['sqrt'] = '#sqrt{s} = 13 TeV'




