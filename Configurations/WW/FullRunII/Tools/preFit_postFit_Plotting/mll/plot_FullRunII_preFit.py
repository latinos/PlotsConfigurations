# plot configuration

nbins = 12

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
    #if i in (2,3,4,5,6,7,8,9,10,11): B0 0J
    # Prefit issue for 
    # 0j: 
    #     B0: WWB2,WWB3,WWB4,WWB5,WWB6,WWB7,WWB8,WWB9,WWB10,WWB11
	#     B1: WWB2,WWB3,WWB4,WWB5,WWB6,WWB7,WWB8,WWB9,WWB10,WWB11
    #     B2: WWB7,WWB8,WWB9,WWB10,WWB11
    #     B3: WWB0,WWB1,WWB8,WWB9,WWB10,WWB11
    #     B4: WWB0,WWB1,WWB2,WWB8,WWB10,WWB11
    #     B5: WWB0,WWB1,WWB2,WWB3,WWB9,WWB10,WWB11
	#     B6: WWB0,WWB1,WWB2,WWB3,WWB4,WWB10,WWB11
    #     B7: WWB0,WWB2,WWB3,WWB4,WWB5,WWB10,WWB11
    #     B8: WWB0,WWB1,WWB2,WWB3,WWB4,WWB5,WWB6,WWB10,WWB11
    #     B9: WWB0,WWB1,WWB2,WWB3,WWB4,WWB5,WWB6,WWB7	
    #     B10: WWB0,WWB1,WWB2,WWB3,WWB4,WWB5,WWB6,WWB7,WWB8
    #     B11: WWB0,WWB1,WWB2,WWB3,WWB4,WWB5,WWB6,WWB7,WWB8,WWB9	
    # 1j:
    #     B0: WWB2,WWB3,WWB4,WWB5,WWB6,WWB7,WWB11
    #     B1: WWB5,WWB6,WWB8,WWB10
    #     B2: WWB0,WWB7,WWB9,WWB10,WWB11
    #     B3: WWB0,WWB7,WWB11
    #     B4: WWB0,WWB1,WWB9,WWB10,WWB11
    #     B5: WWB0,WWB1,WWB3,WWB11
    #     B6: WWB0,WWB1,WWB2
    #     B7: WWB0,WWB1,WWB2,WWB3,WWB4,WWB5
    #     B8: WWB0,WWB1,WWB2,WWB3,WWB4,WWB5,WWB10
    #     B9: WWB0,WWB1,WWB2,WWB3,WWB4,WWB5,WWB6,WWB7 
    #     B10: WWB0,WWB1,WWB2,WWB3,WWB4,WWB5,WWB6,WWB7,WWB8 
    #     B11: WWB0,WWB1,WWB2,WWB3,WWB4,WWB5,WWB6,WWB7,WWB8,WWB9	
    # 2j:
    #     B0: WWB3,WWB4,WWB5,WWB6,WWB7,WWB8
    #     B1: WWB4,WWB5,WWB7
    #     B2: WWB0,WWB6,WWB7
    #     B3: WWB0,WWB1,WWB10
    #     B4: WWB0,WWB1,WWB2,WWB10,WWB11
    #     B5: WWB0,WWB1,WWB2,WWB3
    #     B6: WWB0,WWB1,WWB2,WWB3,WWB4
    #     B7: WWB0,WWB3,WWB4,WWB5
    #     B8: WWB0,WWB1,WWB2,WWB3,WWB4,WWB5,WWB6
    #     B9: WWB0,WWB1,WWB2,WWB3,WWB4,WWB5,WWB6,WWB7
    #     B10: WWB0,WWB1,WWB2,WWB3,WWB4,WWB5,WWB6,WWB7
    #     B11: WWB0,WWB1,WWB2,WWB3,WWB4,WWB5,WWB6,WWB7,WWB8,WWB9
    if i in (0,1,2,3,4,5,6,7,8,9):
        continue
    plot['WW_B%d'%i] = {
        'color': 851, # kAzure -9 
        'isSignal' : 0,
        'isData'   : 0,
        'scale'    : 1.0   # ele/mu trigger efficiency   datadriven
    }

for i in xrange(nbins):
    # Prefit issue for
    # 0j:
    #     B1: ggWW_B7 
    #     B2: ggWW_B0,ggWW_B9,ggWW_B10
    #     B3: ggWW_B0
    #     B4: ggWW_B0,ggWW_B1
    #     B5: ggWW_B0,ggWW_B1,ggWW_B2,ggWW_B10
    #     B6: ggWW_B0,ggWW_B1,ggWW_B2
    #     B7: ggWW_B0,ggWW_B1,ggWW_B2,ggWW_B3,ggWW_B4
    #     B8: ggWW_B0,ggWW_B2,ggWW_B3,ggWW_B5
    #     B9: ggWW_B0,ggWW_B1,ggWW_B2,ggWW_B3,ggWW_B4,ggWW_B5,ggWW_B6
    #     B10: ggWW_B0,ggWW_B1,ggWW_B2,ggWW_B3,ggWW_B4,ggWW_B5,ggWW_B6,ggWW_B7
    # 	  B11: ggWW_B0,ggWW_B1,ggWW_B2,ggWW_B3,ggWW_B4,ggWW_B5,ggWW_B6,ggWW_B7,ggWW_B8
    # 1j:
    #     B1: ggWW_B9
    #     B2: ggWW_B0
    #     B3: ggWW_B0
    #     B4: ggWW_B0,ggWW_B1
    #     B5: ggWW_B1, ggWW_B2
    #     B6: ggWW_B0, ggWW_B3
    #     B7: ggWW_B0,ggWW_B1,ggWW_B2,ggWW_B3
    #     B8: ggWW_B0,ggWW_B2,ggWW_B3,ggWW_B4,ggWW_B5
    #     B9: ggWW_B0,ggWW_B1,ggWW_B2,ggWW_B3,ggWW_B4,ggWW_B5,ggWW_B6
    #     B10: ggWW_B0,ggWW_B1,ggWW_B2,ggWW_B3,ggWW_B4,ggWW_B5,ggWW_B7
    #     B11: ggWW_B0,ggWW_B1,ggWW_B2,ggWW_B3,ggWW_B4,ggWW_B5,ggWW_B6,ggWW_B7,ggWW_B9
    # 2j:
    #     B0: ggWW_B3,ggWW_B4,ggWW_B5,ggWW_B7,ggWW_B10
    #     B1: -
    #     B2: ggWW_B0,ggWW_B7
    #     B3: ggWW_B0,ggWW_B9,ggWW_B10
    #     B4: ggWW_B0,ggWW_B1,ggWW_B11
    #     B5: ggWW_B0,ggWW_B2
    #     B6: ggWW_B0,ggWW_B2,ggWW_B3,ggWW_B4
    #     B7: ggWW_B0,ggWW_B1,ggWW_B2,ggWW_B3,ggWW_B4,ggWW_B5
    #     B8: ggWW_B0,ggWW_B1,ggWW_B2,ggWW_B3,ggWW_B4,ggWW_B5
    #     B9: ggWW_B2,ggWW_B3,ggWW_B4,ggWW_B5,ggWW_B6
    #     B10: ggWW_B0,ggWW_B1,ggWW_B2,ggWW_B3,ggWW_B4,ggWW_B5,ggWW_B7,ggWW_B8
    #     B11: ggWW_B0,ggWW_B1,ggWW_B2,ggWW_B3,ggWW_B4,ggWW_B5,ggWW_B6,ggWW_B7,ggWW_B8,ggWW_B9
#    if i in (0,1,2,3,4,5,6,7,8,9):
#        continue	
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
