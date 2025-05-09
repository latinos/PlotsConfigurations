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
    #if i in (2,3,4,5,6,7,8,9,10,11):
    #    continue		
	#     B1: WWB5,WWB6,WWB7,WWB8,WWB9,WWB10,WWB11
    #if i in (5,6,7,8,9,10,11):
    #    continue
    #     B2: WWB7,WWB8,WWB9,WWB10,WWB11
    #if i in (7,8,9,10,11):
    #    continue
    #     B3: WWB0,WWB1,WWB8,WWB9,WWB10,WWB11
    #if i in (0,1,8,9,10,11):
    #    continue		
    #     B4: WWB0,WWB1,WWB2,WWB8,WWB10,WWB11
    #if i in (0,1,2,8,10,11):
    #    continue		
    #     B5: WWB0,WWB1,WWB2,WWB3,WWB9,WWB10,WWB11
    #if i in (0,1,2,3,9,10,11):
    #    continue		
	#     B6: WWB0,WWB1,WWB2,WWB3,WWB4,WWB10,WWB11
    #if i in (0,1,2,3,4,10,11):
    #    continue		
    #     B7: WWB0,WWB2,WWB3,WWB4,WWB5,WWB10,WWB11
    #if i in (0,2,3,4,5,10,11):
    #    continue		
    #     B8: WWB0,WWB1,WWB2,WWB3,WWB4,WWB5,WWB6,WWB11
    #if i in (0,1,2,3,4,5,6,11):
    #    continue		
    #     B9: WWB0,WWB1,WWB2,WWB3,WWB4,WWB5,WWB6,WWB7	
    #if i in (0,1,2,3,4,5,6,7):
    #    continue		
    #     B10: WWB0,WWB1,WWB2,WWB3,WWB4,WWB5,WWB6,WWB7,WWB8
    #if i in (0,1,2,3,4,5,6,7,8):
    #    continue		
    #     B11: WWB0,WWB1,WWB2,WWB3,WWB4,WWB5,WWB6,WWB7,WWB8,WWB9
    #if i in (0,1,2,3,4,5,6,7,8,9):
    #    continue		
    # 1j:
    #     B0: WWB2,WWB3,WWB4,WWB5,WWB6,WWB7,WWB11
    #if i in (2,3,4,5,6,7,11):
    #    continue		
    #     B1: WWB5,WWB6,WWB8,WWB10
    #if i in (5,6,8,10):
    #    continue		
    #     B2: WWB0,WWB7,WWB9,WWB10,WWB11
    #if i in (0,7,9,10,11):
    #    continue		
    #     B3: WWB0,WWB7,WWB11
    #if i in (0,7,11):
    #    continue		
    #     B4: WWB0,WWB1,WWB9,WWB10,WWB11
    #if i in (0,1,9,10,11):
    #    continue		
    #     B5: WWB0,WWB1,WWB2,WWB3,WWB11
    #if i in (0,1,2,3,11):
    #    continue		
    #     B6: WWB0,WWB1,WWB2
    #if i in (0,1,2):	
    #    continue		
    #     B7: WWB0,WWB1,WWB2,WWB3,WWB4,WWB5
    #if i in (0,1,2,3,4,5):
    #    continue		
    #     B8: WWB0,WWB1,WWB2,WWB3,WWB4,WWB5,WWB10
    #if i in (0,1,2,3,4,5,10):
    #    continue		
    #     B9: WWB0,WWB1,WWB2,WWB3,WWB4,WWB5,WWB6,WWB7 
    #if i in (0,1,2,3,4,5,6,7):
    #    continue		
    #     B10: WWB0,WWB1,WWB2,WWB3,WWB4,WWB5,WWB6,WWB7,WWB8 
    #if i in (0,1,2,3,4,5,6,7,8):
    #    continue		
    #     B11: WWB0,WWB1,WWB2,WWB3,WWB4,WWB5,WWB6,WWB7,WWB8,WWB9	
    if i in (0,1,2,3,4,5,6,7,8,9):
        continue	
    # 2j:
    #     B0: WWB3,WWB4,WWB5,WWB6,WWB7,WWB8
    #if i in (3,4,5,6,7,8):
    #    continue
    #     B1: WWB4,WWB5,WWB7
    #if i in (4,5,7):
    #    continue		
    #     B2: WWB0,WWB6,WWB7
    #if i in (0,6,7):
    #    continue		
    #     B3: WWB0,WWB1,WWB10
    #if i in (0,1,10):
    #    continue		
    #     B4: WWB0,WWB1,WWB2,WWB10,WWB11
    #if i in (0,1,2,10,11):
    #    continue		
    #     B5: WWB0,WWB1,WWB2,WWB3
    #if i in (0,1,2,3):
    #    continue		
    #     B6: WWB0,WWB1,WWB2,WWB3,WWB4
    #if i in (0,1,2,3,4):
    #    continue		
    #     B7: WWB0,WWB3,WWB4,WWB5
    #if i in (0,3,4,5):
    #    continue		
    #     B8: WWB0,WWB1,WWB2,WWB3,WWB4,WWB5,WWB6
    #if i in (0,1,2,3,4,5,6):
    #    continue		
    #     B9: WWB0,WWB1,WWB2,WWB3,WWB4,WWB5,WWB6,WWB7
    #if i in (0,1,2,3,4,5,6,7):
    #    continue		
    #     B10: WWB0,WWB1,WWB2,WWB3,WWB4,WWB5,WWB6,WWB7
    #if i in (0,1,2,3,4,5,6,7):	
    #    continue		
    #     B11: WWB0,WWB1,WWB2,WWB3,WWB4,WWB5,WWB6,WWB7,WWB8,WWB9
    #if i in (0,1,2,3,4,5,6,7,8,9):
    #    continue
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
    #if i==7:
    #    continue
    #     B2: ggWW_B0,ggWW_B9,ggWW_B10
    #if i in (0,9,10):
    #    continue
    #     B3: ggWW_B0
    #if i==0:
    #    continue		
    #     B4: ggWW_B0,ggWW_B1
    #if i in (0,1):
    #    continue		
    #     B5: ggWW_B0,ggWW_B1,ggWW_B2,ggWW_B10
    #if i in (0,1,2,10):
    #    continue		
    #     B6: ggWW_B0,ggWW_B1,ggWW_B2
    #if i in (0,1,2):
    #   continue		
    #     B7: ggWW_B0,ggWW_B1,ggWW_B2,ggWW_B3,ggWW_B4
    #if i in (0,1,2,3,4):
    #    continue		
    #     B8: ggWW_B0,ggWW_B2,ggWW_B3,ggWW_B5
    #if i in (0,2,3,5):
    #    continue		
    #     B9: ggWW_B0,ggWW_B1,ggWW_B2,ggWW_B3,ggWW_B4,ggWW_B5,ggWW_B6
    #if i in (0,1,2,3,4,5,6,):
    #    continue		
    #     B10: ggWW_B0,ggWW_B1,ggWW_B2,ggWW_B3,ggWW_B4,ggWW_B5,ggWW_B6,ggWW_B7
    #if i in (0,1,2,3,4,5,6,7):
    #    continue		
    # 	  B11: ggWW_B0,ggWW_B1,ggWW_B2,ggWW_B3,ggWW_B4,ggWW_B5,ggWW_B6,ggWW_B7,ggWW_B8
    #if i in (0,1,2,3,4,5,6,7,8):
    #    continue		
    # 1j:
    #     B1: ggWW_B9
    #if i==9:	
    #    continue		
    #     B2: ggWW_B0
    #if i==0:
    #    continue		
    #     B3: ggWW_B0
    #if i==0:
    #    continue		
    #     B4: ggWW_B0,ggWW_B1
    #if i in (0,1):
    #    continue
    #     B5: ggWW_B1, ggWW_B2
    #if i in (1,2):
    #    continue		
    #     B6: ggWW_B0, ggWW_B3
    #if i in (0,3):
    #    continue		
    #     B7: ggWW_B0,ggWW_B1,ggWW_B2,ggWW_B3
    #if i in (0,1,2,3):
    #    continue		
    #     B8: ggWW_B0,ggWW_B2,ggWW_B3,ggWW_B4,ggWW_B5
    #if i in (0,2,3,4,5):
    #    continue		
    #     B9: ggWW_B0,ggWW_B1,ggWW_B2,ggWW_B3,ggWW_B4,ggWW_B5,ggWW_B6
    #if i in (0,1,2,3,4,5,6):
    #    continue		
    #     B10: ggWW_B0,ggWW_B1,ggWW_B2,ggWW_B3,ggWW_B4,ggWW_B5,ggWW_B7
    #if i in (0,1,2,3,4,5,7):
    #    continue		
    #     B11: ggWW_B0,ggWW_B1,ggWW_B2,ggWW_B3,ggWW_B4,ggWW_B5,ggWW_B6,ggWW_B7,ggWW_B9
    if i in (0,1,2,3,4,5,6,7,9):
        continue		
    # 2j:
    #     B0: ggWW_B3,ggWW_B4,ggWW_B5,ggWW_B7,ggWW_B10
    #if i in (3,4,5,7,10):
    #    continue		
    #     B1: -
    #     B2: ggWW_B0,ggWW_B7
    #if i in (0,7):
    #    continue		
    #     B3: ggWW_B0,ggWW_B9,ggWW_B10
    #if i in (0,9,10):
    #    continue		
    #     B4: ggWW_B0,ggWW_B1,ggWW_B11
    #if i in (0,1,11):
    #    continue		
    #     B5: ggWW_B0,ggWW_B2
    #if i in (0,2):
    #    continue		
    #     B6: ggWW_B0,ggWW_B2,ggWW_B3,ggWW_B4
    #if i in (0,2,3,4):
    #    continue		
    #     B7: ggWW_B0,ggWW_B1,ggWW_B2,ggWW_B3,ggWW_B4,ggWW_B5
    #if i in (0,1,2,3,4,5):
    #    continue		
    #     B8: ggWW_B0,ggWW_B1,ggWW_B2,ggWW_B3,ggWW_B4,ggWW_B5
    #if i in (0,1,2,3,4,5):
    #    continue		
    #     B9: ggWW_B2,ggWW_B3,ggWW_B4,ggWW_B5,ggWW_B6
    #if i in (2,3,4,5,6):
    #    continue		
    #     B10: ggWW_B0,ggWW_B1,ggWW_B2,ggWW_B3,ggWW_B4,ggWW_B5,ggWW_B7,ggWW_B8
    #if i in (0,1,2,3,4,5,7,8):
    #    continue		
    #     B11: ggWW_B0,ggWW_B1,ggWW_B2,ggWW_B3,ggWW_B4,ggWW_B5,ggWW_B6,ggWW_B7,ggWW_B8,ggWW_B9
    #if i in (0,1,2,3,4,5,6,7,8,9):
    #    continue	
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
