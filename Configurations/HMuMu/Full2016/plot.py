# plot configuration
#
# groupPlot = {}
# 
# Groups of samples to improve the plots.
# If not defined, normal plots is used
#

groupPlot['top']  = {  
                  'nameHR' : 'tW and t#bar{t}',
                  'isSignal' : 0,
                  'color': 400,   # kYellow
                  'samples'  : ['top','TTV']
              }


groupPlot['Fakes']  = {  
                  'nameHR' : 'Non-prompt',
                  'isSignal' : 0,
                  'color': 921,    # kGray + 1
                  'samples'  : ['Fakes']#['Fake_em', 'Fake_me']
              }


groupPlot['DY']  = {  
                  'nameHR' : "DY",
                  'isSignal' : 0,
                  'color': 418,    # kGreen+2
                  'samples'  : ['DY','EWK']
              }


groupPlot['VVV']  = {  
                  'nameHR' : 'VVV',
                  'isSignal' : 0,
                  'color': 857, # kAzure -3  
                  'samples'  : ['VVV']
              }


groupPlot['VV']  = {  
                  'nameHR' : 'VV',
                  'isSignal' : 0,
                  'color': 851, # kAzure -9  
                  'samples'  : ['VV']
              }


groupPlot['Higgs']  = {  
                  'nameHR' : 'Higgs',
                  'isSignal' : 1,
                  'color': 632, # kRed 
		  'samples'  : ['ggH_hmm', 'VBF_hmm', 'WH_hmm', 'ZH_hmm', 'ttH_hmm']
              }




#plot = {}

# keys here must match keys in samples.py    
#                    
plot['DY']  = {  
                  'color': 418,    # kGreen+2
                  'isSignal' : 0,
                  'isData'   : 0, 
                  'scale'    : 1.12,
              }


plot['Fakes']  = {  
                  'color': 921,    # kGray + 1
                  'isSignal' : 0,
                  'isData'   : 0,
                  'scale'    : 1.0                  
              }


plot['top'] = {   
                  'nameHR' : 'tW and t#bar{t}',
                  'color': 400,   # kYellow
                  'isSignal' : 0,
                  'isData'   : 0, 
                  'scale'    : 1.0,
                  }


plot['VVV']  = { 
                  'color': 857, # kAzure -3  
                  'isSignal' : 0,
                  'isData'   : 0,
                  'scale'    : 1.0
                  }

plot['VV']  = { 
                  'color': 857, # kAzure -3  
                  'isSignal' : 0,
                  'isData'   : 0,
                  'scale'    : 1.0
                  }

plot['TTV']  = {  
                  'color': 849, # kAzure -9  
                  'isSignal' : 0,
                  'isData'   : 0,
                  'scale'    : 1.0
              }


plot['EWK']  = {  
                  'color': 849, # kAzure -9  
                  'isSignal' : 0,
                  'isData'   : 0,
                  'scale'    : 1.0
              }



# H MuMu signal

plot['ggH_hmm'] = {
                  'nameHR' : 'ggH',
                  'color': 632, # kRed 
                  'isSignal' : 1,
                  'isData'   : 0,    
                  'scale'    : 1    #
                  }

plot['VBF_hmm'] = {
                  'nameHR' : 'ggH',
                  'color': 633, # kRed + 1
                  'isSignal' : 1,
                  'isData'   : 0,    
                  'scale'    : 1    #
                  }

plot['WH_hmm'] = {
                  'nameHR' : 'WH',
                  'color': 634, # kRed + 2
                  'isSignal' : 1,
                  'isData'   : 0,    
                  'scale'    : 1    #
                  }


plot['ZH_hmm'] = {
                  'nameHR' : 'ZH',
                  'color': 635, # kRed + 3 
                  'isSignal' : 1,
                  'isData'   : 0,    
                  'scale'    : 1    #
                  }

plot['ttH_hmm'] = {
                  'nameHR' : 'ttH',
                  'color': 636, # kRed + 4
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
                  'isBlind'  : 0
              }


# additional options

legend['lumi'] = 'L = 35.9/fb'

legend['sqrt'] = '#sqrt{s} = 13 TeV'
