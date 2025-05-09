# plot configuration

nbins = 10

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
    if i in (0,1):
        continue		
    # Prefit: WW_B8 issue for B1 0j; WW_B2 issue for B6,B7 0j; WW_B3 issue for B9 0j
	# 1j: WW_B6,WW_B7,WW_B8 for B0 1j; WW_B8,WW_B9 for B1 1j; WW_B9 for B2 B4 1j; WW_B0 for B6 1j; WW_B0,WW_B1,WW_B2,WW_B4,WW_B5 for B9 1j
	# 2j: WW_B4,WW_B7,WW_B9 for B0; WW_B7 for B1; WW_B7,WW_B8 for B2; WW_B8 for B3; WW_B0 for B4; WW_B0,WW_B1 for B5,B6; ggWW_B0,ggWW_B1,WW_B0,WW_B1 for B7; WW_B0,WW_B3,WWB4 for B8; ggWW_B0,WW_B0,WW_B1 for B9
	# PostFit
	# 0j: WW_B8 for B1; WW_B1 for B6; WW_B0 for B7; ggWW_B1 for B8; WW_B3 for B9 
	# 1j: WW_B8 for B0; WW_B8 for B1; WW_B9 for B2; WW_B9 for B4; WW_B0 for B6; WW_B4 for B9
	# 2j: WW_B9 for B0; WW_B7 for B1; WW_B8 for B2; WW_B8 for B3; WW_B0 for B4; WW_B0 for B5; WW_B0 for B6; ggWW_B0 for B7; WW_B4 for B8; ggWW_B0 for B9
    plot['WW_B%d'%i] = {
        'color': 851, # kAzure -9 
        'isSignal' : 0,
        'isData'   : 0,
        'scale'    : 1.0   # ele/mu trigger efficiency   datadriven
    }

for i in xrange(nbins):
    if i==0:
        continue
    # Prefit: ggWW_B1 issue got B8 0j
	# 2j: ggWW_B0,ggWW_B1 for B7
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
                  'isData'   : 1,
                  'isBlind'  : 0
              }




# additional options

legend['lumi'] = 'L = 138/fb'

legend['sqrt'] = '#sqrt{s} = 13 TeV'
