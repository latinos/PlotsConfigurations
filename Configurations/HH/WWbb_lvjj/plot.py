# plot configuration



# groupPlot = {}
# 
# Groups of samples to improve the plots.
# If not defined, normal plots is used
#




groupPlot['HH']  = {  
			'nameHR' : 'HH',
			'isSignal' : 1,
			'color': 632,   
			'samples'  : ['HH']
		   }

groupPlot['Wjets']  = {
                        'nameHR' : 'W+Jets',
                        'isSignal' : 0,
                        'color': 418,  
                        'samples'  : ['Wjets']
                     }

#groupPlot['TTToSemilepton']  = {    
#				  'nameHR' : 'TTToSemilepton',
#				  'isSignal' : 0,
#				  'color' : 860,
#			  	  'samples' : ['TT']
#			       }	


#groupPlot['Others']  = {
#                        'nameHR' : 'Others',
#                        'isSignal' : 0,
#                        'color': 418,
#                        'samples'  : ['Others']
#                        }


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

#groupPlot['DY']  = {
#                        'nameHR' : 'DY',
#                        'isSignal' : 0,
#                        'color': 418,
#                        'samples'  : ['DY']
#                        }
#groupPlot['WWTo2L2Nu']  = {
#                        'nameHR' : 'WWTo2L2Nu',
#                        'isSignal' : 0,
#                        'color': 400,
#                        'samples'  : ['WWTo2L2Nu']
#                        }
#groupPlot['WZTo2L2Q']  = {
#                        'nameHR' : 'WZTo2L2Q',
#                        'isSignal' : 0,
#                        'color': 617,
#                        'samples'  : ['WZTo2L2Q']
#                        }

#groupPlot['ZZTo2L2Q']  = {
#                        'nameHR' : 'ZZTo2L2Q',
#                        'isSignal' : 0,
#                        'color': 629,
#                        'samples'  : ['ZZTo2L2Q']
#                        }

#DATA
#groupPlot['DATA']  = {
#			'nameHR' : 'DATA',
#			'isSignal' : 0,
#                	'color': 1,
#                        'samples'  : ['DATA']
#		     }	



#plot = {}

# keys here must match keys in samples.py    
#                    
plot['HH']  = {  
                  'color': 632,    
                  'isSignal' : 1,
                  'isData'   : 0, 
                  'scale'    : 1.   ,
              }
plot['Wjets']  = {
                  'color': 418,
                  'isSignal' : 0,
                  'isData'   : 0,
                  'scale'    : 1.   ,
	          }


#plot['TT']  = {
#                  'color': 860,    
#                  'isSignal' : 0,
#                  'isData'   : 0,
#                  'scale'    : 1.   ,
#              }

#plot['Others']  = {
#                  'color': 418,
#                  'isSignal' : 0,
#                  'isData'   : 0,
#                  'scale'    : 1.   ,
#              }


#plot['TTW']  = {
#                  'color': 617,
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

#plot['DY']  = {
#                  'color': 418,
#                  'isSignal' : 0,
#                  'isData'   : 0,
#                  'scale'    : 1.   ,
#              }

#plot['WWTo2L2Nu']  = {
#                  'color': 400,
#                  'isSignal' : 0,
#                  'isData'   : 0,
#                  'scale'    : 1.   ,
#              }

#plot['WZTo2L2Q']  = {
#                  'color': 617,
#                  'isSignal' : 0,
#                  'isData'   : 0,
#                  'scale'    : 1.   ,
#              }

#plot['ZZTo2L2Q']  = {
#                  'color': 629,
#                  'isSignal' : 0,
#                  'isData'   : 0,
#                  'scale'    : 1.   ,
#              }


#DATA
#plot['DATA']  = { 
#                  'nameHR' : 'Data',
#                  'color': 1 ,  
#                  'isSignal' : 0,
#                  'isData'   : 1 ,
#                  'isBlind'  : 0,
#		  'scale' : 1.
#              }






#legend['lumi'] = 'L = 6.3/fb'
legend['lumi'] = 'L = 35.9/fb'
legend['sqrt'] = '#sqrt{s} = 13 TeV'




