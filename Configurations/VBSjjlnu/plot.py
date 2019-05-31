# plot configuration



# groupPlot = {}
# 
# Groups of samples to improve the plots.
# If not defined, normal plots is used
#



# cr top
groupPlot['VBS']  = {  
                 'nameHR' : 'VBS',
                 'isSignal' : 1,
                 'color': 415, #617,   
                 'samples'  : ['VBS']
              }




groupPlot['Others']  = {
                        'nameHR' : 'Others',
                        'isSignal' : 0,
                        'color': 861,#632,
                        'samples'  : ['Others']
                        }


groupPlot['TT']  = {    
				'nameHR' : 'TT',
				'isSignal' : 0,
				'color' : 797,#860,
				'samples' : ['TT']
                		 }	

groupPlot['Wjets']  = {
                        'nameHR' : 'W+Jets',
                        'isSignal' : 0,
                        'color': 629, #620  
                        'samples'  : ['Wjets']
                        }

#groupPlot['TTWJetsToLNu'] = {
#				'nameHR' : 'TTWJetsToLNu',
#				'isSignal' : 0,
#				'color' : 617,
#				'samples' : ['TTW']
#				}

#groupPlot['WZTo1L1Nu2Q'] = {
#                                'nameHR' : 'WZTo1L1Nu2Q',
#                                'isSignal' : 0,
#                                'color' : 632,
#                                'samples' : ['WZTo1L1Nu2Q']
#                                }

#groupPlot['WZTo1L3Nu'] = {
#                                'nameHR' : 'WZTo1L3Nu',
#                                'isSignal' : 0,
#                                'color' : 400,
#                                'samples' : ['WZTo1L3Nu']
#                                }

#groupPlot['WWW']  = {
#                        'nameHR' : 'WWW',
#                        'isSignal' : 0,
#                        'color': 850,
#                        'samples'  : ['WWW']
#                        }



#groupPlot['WWZ']  = {
#                        'nameHR' : 'WWZ',
#                        'isSignal' : 0,
#                        'color': 410,
#                        'samples'  : ['WWZ']
#                        }


# groupPlot['DY']  = {
#                         'nameHR' : 'DY',
#                         'isSignal' : 0,
#                         'color': 418,
#                         'samples'  : ['DY']
#                         }
# groupPlot['WWTo2L2Nu']  = {
#                         'nameHR' : 'WWTo2L2Nu',
#                         'isSignal' : 0,
#                         'color': 400,
#                         'samples'  : ['WWTo2L2Nu']
#                         }
# groupPlot['WZTo2L2Q']  = {
#                         'nameHR' : 'WZTo2L2Q',
#                         'isSignal' : 0,
#                         'color': 617,
#                         'samples'  : ['WZTo2L2Q']
#                         }

# groupPlot['ZZTo2L2Q']  = {
#                         'nameHR' : 'ZZTo2L2Q',
#                         'isSignal' : 0,
#                         'color': 629,
#                         'samples'  : ['ZZTo2L2Q']
#                         }


# #groupPlot['top']  = {  
#                   #'nameHR' : 'tW and t#bart',
#                   #'isSignal' : 0,
                  #'color': 400, #  kYellow
                  #'samples'  : ['top']
              #}

#groupPlot['WW']  = {  
                  #'nameHR' : 'WW',
                  #'isSignal' : 0,
                  #'color': 851, # kAzure -9 
                  #'samples'  : ['WW', 'ggWW']
              #}

#groupPlot['VVV']  = {  
                  #'nameHR' : 'VVV',
                  #'isSignal' : 0,
                  #'color': 857, # kAzure -3  
                  #'samples'  : ['VVV']
              #}


#groupPlot['VZ']  = {  
                  #'nameHR' : "VZ/#gamma*/#gamma",
                  #'isSignal' : 0,
                  #'color'    : 617,   # kViolet + 1  
                  #'samples'  : ['VZ', 'Vg', 'Wg', 'VgS', 'WZ', 'ZZ','Zg']
              #}


#groupPlot['DY']  = {  
                  #'nameHR' : "DY",
                  #'isSignal' : 0,
                  #'color': 418,  #  kGreen+2
                  ##'samples'  : ['DY1', 'DY2']
                  #'samples'  : ['DY']
              #}


#groupPlot['Higgs']  = {  
                  #'nameHR' : 'Higgs',
                  #'isSignal' : 1,
                  #'color': 632, # kRed 
                  #'samples'  : ['H_htt', 'H_hww', 'ZH_hww', 'ggZH_hww', 'WH_hww', 'qqH_hww', 'ggH_hww','bbH_hww']
              #}






#plot = {}

# keys here must match keys in samples.py    
#                    
# cr top
plot['VBS']  = {  
                  'color': 415 ,    
                  'isSignal' : 1,
                  'isData'   : 0, 
                  'scale'    : 1.   ,
              }



plot['Others']  = {
                  'color': 861,
                  'isSignal' : 0,
                  'isData'   : 0,
                  'scale'    : 1.   ,
              }

plot['TT']  = {
                  'color': 797,    
                  'isSignal' : 0,
                  'isData'   : 0,
                  'scale'    : 1.   ,
              }

plot['Wjets']  = {
                  'color': 629,
                  'isSignal' : 0,
                  'isData'   : 0,
                  'scale'    : 1.   ,
              }


#plot['TTW']  = {
#                  'color': ,
#                  'isSignal' : 0,
#                  'isData'   : 0,
#                  'scale'    : 1.   ,
#              }

#plot['WZTo1L1Nu2Q']  = {
#                  'color': 632,
#                  'isSignal' : 0,
#                  'isData'   : 0,
#                  'scale'    : 1.   ,
#              }

#plot['WZTo1L3Nu']  = {
#	          'color': 400,
#                  'isSignal' : 0,
#                  'isData'   : 0,
#                  'scale'    : 1.   ,
#              }

#plot['WWW']  = {
#                  'color': 850,
#                  'isSignal' : 0,
#                  'isData'   : 0,
#                  'scale'    : 1.   ,
#              }

#plot['WWZ']  = {
#                  'color': 410,
#                  'isSignal' : 0,
#                  'isData'   : 0,
#                  'scale'    : 1.   ,
#              }



# plot['DY']  = {
#                   'color': 418,
#                   'isSignal' : 0,
#                   'isData'   : 0,
#                   'scale'    : 1.   ,
#               }

# plot['WWTo2L2Nu']  = {
#                   'color': 400,
#                   'isSignal' : 0,
#                   'isData'   : 0,
#                   'scale'    : 1.   ,
#               }

# plot['WZTo2L2Q']  = {
#                   'color': 617,
#                   'isSignal' : 0,
#                   'isData'   : 0,
#                   'scale'    : 1.   ,
#               }

# plot['ZZTo2L2Q']  = {
#                   'color': 629,
#                   'isSignal' : 0,
#                   'isData'   : 0,
#                   'scale'    : 1.   ,
#               }

#legend['lumi'] = 'L = 6.3/fb'
legend['lumi'] = 'L = 35.9/fb'
legend['sqrt'] = '#sqrt{s} = 13 TeV'




