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



groupPlot['Wjets']  = {  
                  'nameHR' : 'Wjets',
                  'isSignal' : 0,
                  'color': 921,    # kGray + 1
                  'samples'  : ['Wjets']
              }




#groupPlot['topWeight_right_1']  = {  
                  #'nameHR' : 'top tagged 1',
                  #'isSignal' : 0,
                  #'color': 632, # kRed 
                  #'samples'  : ['topWeight_right_1']
              #}



#groupPlot['topWeight_left_1']  = {  
                  #'nameHR' : 'top tagged 1',
                  #'isSignal' : 0,
                  #'color': 400, # kYellow 
                  #'samples'  : ['topWeight_left_1']
              #}


#groupPlot['topWeight_inclusive_1']  = {  
                  #'nameHR' : 'top inclusive 1',
                  #'isSignal' : 0,
                  #'color': 400, # kYellow 
                  #'samples'  : ['topWeight_inclusive_1']
              #}



#etaRange = [-5.0, -2.5, -2.0, -1.0, 0, 1.0, 2.0, 2.5, 5.0]
#etaRange = [-5.0, 5.0, 10.0, 15.0]
#etaRange = [-5.0, -2.5, 0, 2.5, 5.0]
#etaRange = [-5.0, 5.0]  # here without the eta symmetrization!
etaRange = [-5.0, -2.5, 0, 2.5, 5.0]  # here without the eta symmetrization!
#ptRange = [20,30,50,70,100, 10000000]
ptRange = [20, 30, 50, 100, 200]




for eta in range(len(etaRange)-1):
  for pt in range(len(ptRange)-1):

    groupPlot['topWeight_left_' + str(eta) + '_' + str(pt)]  = {  
                  'nameHR' : 'top veto #eta ' + str(etaRange[eta]) + ' p_{T}' + str(ptRange[pt]),
                  'isSignal' : 0,
                  'color': 400+2*(eta+pt*len(etaRange)), 
                  'samples'  : ['topWeight_left_' + str(eta) + '_' + str(pt)]
                  }

    groupPlot['topWeight_right_' + str(eta) + '_' + str(pt)]  = {  
                  'nameHR' : 'top tag #eta ' + str(etaRange[eta]) + ' p_{T}' + str(ptRange[pt]),
                  'isSignal' : 0,
                  'color': 418+2*(eta+pt*len(etaRange))+1, 
                  'samples'  : ['topWeight_right_' + str(eta) + '_' + str(pt)]
                  }



#
#
#
#




for eta in range(len(etaRange)-1):
  for pt in range(len(ptRange)-1):

    plot['topWeight_left_' + str(eta) + '_' + str(pt)]  = {  
                      'color': 418+eta+pt*len(etaRange),    # kGreen+2
                      'isSignal' : 0,
                      'isData'   : 0, 
                      'scale'    : 1.0,
                  }

    plot['topWeight_right_' + str(eta) + '_' + str(pt)]  = {  
                      'color': 418-eta-pt*len(etaRange),    # kGreen+2
                      'isSignal' : 0,
                      'isData'   : 0, 
                      'scale'    : 1.0,
                  }








plot['DY']  = {  
                  'color': 418,    # kGreen+2
                  'isSignal' : 0,
                  'isData'   : 0, 
                  'scale'    : 1.0,
                  #'scale'    : 0.87,
                  #'scale'    : 10.0*0.7*1.2*1.1,
                  #'scale'    : 11.0*0.87,
                  #'isSignal' : 2                    
              }


plot['DYnoFix']  = {  
                  'color': 417,    # kGreen+1
                  'isSignal' : 0,
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



plot['DYpow']  = {  
                  'color': 632,    # kRed
                  'isSignal' : 0,
                  'isData'   : 0, 
                  #'scale'    : 6025.20,
                  'scale'    : 1,
                  #'isSignal' : 2     # draw together
                  'isSignal' : 3     # draw together and do ratio plot w.r.t. data
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




plot['topWeight_right_1'] = {   
                  'nameHR' : 'tW and t#bart B-tagged',
                  'color': 400,   # kYellow
                  'isSignal' : 0,
                  'isData'   : 0, 
                  'scale'    : 1.0
                  }


plot['topWeight_left_1'] = {   
                  'nameHR' : 'tW and t#bart B-tagged',
                  'color': 401,   # kYellow+2
                  'isSignal' : 0,
                  'isData'   : 0, 
                  'scale'    : 1.0
                  }

plot['topWeight_inclusive_1'] = {   
                  'nameHR' : 'tW and t#bart inclusive',
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

# legend['lumi'] = 'L = 2.3/fb' # 2.264 fb-1
#legend['lumi'] = 'L = 2.3/fb' # 2.318 fb-1
legend['lumi'] = 'L = 0.8/fb' # XXX fb-1
legend['sqrt'] = '#sqrt{s} = 13 TeV'




