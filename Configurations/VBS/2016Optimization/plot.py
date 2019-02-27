# plot configuration



# groupPlot = {}
# 
# Groups of samples to improve the plots (merge different sample during plot).
# If not defined, normal plots is used
#

groupPlot['non-prompt']  = {  
                  'nameHR' : 't#bar{t} and WJ',
                  'isSignal' : 0,
                  'color': 400,   # kYellow
                  'samples'  : ['ttbar' , 'Wjets']
              }

groupPlot['Fake']  = {  
                  'nameHR' : 'Fake',
                  'isSignal' : 0,
                  'color': 921,    # kGray + 1
                  'samples'  : ['Fake_em', 'Fake_me', 'Fake_ee', 'Fake_mm']
              }


groupPlot['ChMisId']  = {  
                  'nameHR' : "ChMisId",
                  'isSignal' : 0,
                  'color': 418,    # kGreen+2
                  'samples'  : ['ChMisId']
              }


groupPlot['VVV']  = {  
                  'nameHR' : 'VVV',
                  'isSignal' : 0,
                  'color': 857, # kAzure -3  
                  'samples'  : ['VVV']
              }


groupPlot['VV']  = {  
                  'nameHR' : "VV",
                  'isSignal' : 0,
                  'color'    : 617,   # kViolet + 1  
                  'samples'  : ['ZZ' , 'WZ' , 'DPS']
              }

groupPlot['Vg']  = {  
                  'nameHR' : "V#gamma",
                  'isSignal' : 0,
                  'color'    : 810,   # kOrange + 10
                  'samples'  : ['Vg']
              }

groupPlot['WW_EWK']  = {  
                  'nameHR' : "WW_EWK",
                  'isSignal' : 1,
                  'color'    : 651,   # kViolet + 1  
                  'samples'  : ['WW_EWK']
              }

groupPlot['WW_strong']  = {  
                  'nameHR' : "WW QCD",
                  'isSignal' : 0,
                  'color'    : 633,   # kOrange + 10
                  'samples'  : ['WW_strong']
              }


#plot = {}

# keys here must match keys in samples.py    
#    

##Fake                
plot['ChMisId']  = {  
                  'color': 418,    # kGreen+2
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


plot['Fake_me']  = {  
                  'color': 921,    # kGray + 1
                  'isSignal' : 0,
                  'isData'   : 0,
                  'scale'    : 1.0                  
              }

plot['Fake_ee']  = {
                  'color': 921,    # kGray + 1
                  'isSignal' : 0,
                  'isData'   : 0,
                  'scale'    : 1.0
              }

plot['Fake_mm']  = {
                  'color': 921,    # kGray + 1
                  'isSignal' : 0,
                  'isData'   : 0,
                  'scale'    : 1.0
              }

##Non-Prompt
plot['ttbar'] = {   
                  'nameHR' : 't#bar{t}',
                  'color': 400,   # kYellow
                  'isSignal' : 0,
                  'isData'   : 0, 
                  'scale'    : 1.0
                  }
plot['Wjets'] = {   
                  'nameHR' : 'W+Jets',
                  'color': 400,   # kYellow
                  'isSignal' : 0,
                  'isData'   : 0, 
                  'scale'    : 1.0
                  }

##Signal
plot['WW_EWK']  = {
                  'color': 651, # kAzure -9 
                  'isSignal' : 1,
                  'isData'   : 0,
                  'scale'    : 1.0   
                  }
##Irreducible Background
plot['WW_strong']  = {
                  'color': 633, # kAzure -9 
                  'isSignal' : 0,
                  'isData'   : 0,
                  'scale'    : 1.0   
                  }


plot['Vg']  = { 
                  'color': 810, # kAzure -1  
                  'isSignal' : 0,
                  'isData'   : 0,
                  'scale'    : 1.0
                  }

##VV plot
plot['ZZ']  = { 
                  'color': 617, # kAzure -2  
                  'isSignal' : 0,
                  'isData'   : 0,
                  'scale'    : 1.0
                  }

plot['WZ']  = { 
                  'color': 617, # kAzure -2  
                  'isSignal' : 0,
                  'isData'   : 0,
                  'scale'    : 1.0
                  }

plot['DPS']  = { 
                  'color': 617, # kAzure -2  
                  'isSignal' : 0,
                  'isData'   : 0,
                  'scale'    : 1.0
                  }
##VVV
plot['VVV']  = { 
                  'color': 857, # kAzure -3  
                  'isSignal' : 0,
                  'isData'   : 0,
                  'scale'    : 1.0
                  }

##Data

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




