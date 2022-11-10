# plot configuration

nbins = 1

# groupPlot = {}
# 
# Groups of samples to improve the plots.
# If not defined, normal plots is used
#


groupPlot['top']  = {  
                  'nameHR' : 'tW and t#bar{t}',
                  'isSignal' : 0,
                  'color': 400,   # kYellow
                  'samples'  : ['top']
              }

groupPlot['WW']  = {  
                  'nameHR' : 'WW',
                  'isSignal' : 0,
                  'color': 851, # kAzure -9 
                  'samples'  : ['WW_B%d'%i for i in xrange(nbins)]+['ggWW_B%d'%i for i in xrange(nbins)]
              }

groupPlot['WW_nonfid']  = {
                  'nameHR' : 'WW nonfid',
                  'isSignal' : 0,
                  'color': 853, # kAzure -9 
                  'samples'  : ['WW_nonfid', 'ggWW_nonfid']
              }

groupPlot['WWewk']  = {
                  'nameHR' : 'WWewk',
                  'isSignal' : 0,
                  'color': 852, # kAzure -9 
                  'samples'  : ['WWewk']
              }

groupPlot['Fake']  = {
                  'nameHR' : 'nonprompt',
                  'isSignal' : 0,
                  'color': 921,    # kGray + 1
                  'samples'  : ['Fake_me', 'Fake_em']
}


groupPlot['DY']  = {  
                  'nameHR' : "DY",
                  'isSignal' : 0,
                  'color': 418,    # kGreen+2
                  'samples'  : ['DY']
              }



groupPlot['VVV']  = {  
                  'nameHR' : 'VVV',
                  'isSignal' : 0,
                  'color': 857, # kAzure -3  
                  'samples'  : ['VVV']
              }


groupPlot['WZ']  = {  
                  'nameHR' : "WZ",
                  'isSignal' : 0,
                  'color'    : 617,   # kViolet + 1  
                  'samples'  : ['WZ']
              }

groupPlot['ZZ']  = {  
                  'nameHR' : "ZZ",
                  'isSignal' : 0,
                  'color'    : 618,   # kViolet + 1  
                  'samples'  : ['ZZ']
              }

groupPlot['Vg']  = {
                  'nameHR' : "V#gamma",
                  'isSignal' : 0,
                  'color'    : 811,   # kOrange + 10
                  'samples'  : ['Vg']
              }

groupPlot['Higgs']  = {  
                  'nameHR' : 'Higgs',
                  'isSignal' : 0,
                  'color': 632, # kRed 
		  'samples'  : ['Higgs' ]
              }





#plot = {}

# keys here must match keys in samples.py    
#                    
plot['DY']  = {  
                  'color': 418,    # kGreen+2
                  'isSignal' : 0,
                  'isData'   : 0, 
                  'scale'    : 1.0,
              }


plot['Fake_me']  = {  
                  'color': 921,    # kGray + 1
                  'isSignal' : 0,
                  'isData'   : 0,
                  'scale'    : 1.0                  
              }


plot['Fake_em']  = {  
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

for i in xrange(nbins):
    plot['WW_B%d'%i] = {
        'color': 851, # kAzure -9 
        'isSignal' : 0,
        'isData'   : 0,
        'scale'    : 1.0   # ele/mu trigger efficiency   datadriven
    }

    plot['ggWW_B%d'%i] = {
        'color': 851, # kAzure -9 
        'isSignal' : 0,
        'isData'   : 0,
        'scale'    : 1.0   # ele/mu trigger efficiency   datadriven
    }

plot['WW_nonfid'] = {
                  'color': 853, # kAzure -9 
                  'isSignal' : 0,
                  'isData'   : 0,
                  'scale'    : 1.0   # ele/mu trigger efficiency   datadriven
                  }

plot['ggWW_nonfid'] = {
                  'color': 853, # kAzure -9 
                  'isSignal' : 0,
                  'isData'   : 0,
                  'scale'    : 1.0   # ele/mu trigger efficiency   datadriven
                  }

plot['WWewk']  = {
                  'color': 851, # kAzure -9 
                  'isSignal' : 0,
                  'isData'   : 0,
                  'scale'    : 1.0   # ele/mu trigger efficiency   datadriven
                  }

plot['Vg']  = {
                  'color': 859, # kAzure -1  
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
                  'color': 858, # kAzure -2  
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

# Higgs

plot['Higgs'] = {
                  'nameHR' : 'Higgs',
                  'color': 632, # kRed 
                  'isSignal' : 0,
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
