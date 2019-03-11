# plot configuration



# groupPlot = {}
# 
# Groups of samples to improve the plots (merge different sample during plot).
# If not defined, normal plots is used
#

groupPlot['Fake']  = {  
                  'nameHR' : 'Fake',
                  'isSignal' : 0,
                  'color': 921,    # kGray + 1
                  'samples'  : ['Fake_em', 'Fake_me', 'Fake_ee', 'Fake_mm','DY_promptSubtr','lep_TT_promptSubtr','singleTop_promptSubtr','singleAntiTop_promptSubtr','ggWWTo2L2Nu_promptSubtr','WWTo2L2Nu_promptSubtr','Vg_promptSubtr','ZZ_promptSubtr','WpWpJJ_promptSubtr','WpWpJJ_QCD_promptSubtr','VVV_promptSubtr','DPS_promptSubtr','WZ_promptSubtr']
              }


groupPlot['ChargeMisId']  = {  
                  'nameHR' : "ChMisId",
                  'isSignal' : 0,
                  'color': 617,    # kViolet+1
                  'samples'  : ['ChMisId' , 'ttbar']
              }


groupPlot['VVV']  = {  
                  'nameHR' : 'VVV',
                  'isSignal' : 0,
                  'color': 797, # kOrange -3  
                  'samples'  : ['VVV']
              }


groupPlot['VV']  = {  
                  'nameHR' : "VV",
                  'isSignal' : 0,
                  'color'    : 418,   # kGreen + 2  
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
                  'color'    : 1,   # kBlack  
                  'samples'  : ['WW_EWK']
              }

groupPlot['WW_strong']  = {  
                  'nameHR' : "WW QCD",
                  'isSignal' : 0,
                  'color'    : 600,   # kBlue
                  'samples'  : ['WW_strong']
              }


#plot = {}

# keys here must match keys in samples.py    
#    

##Charge Misidentification               
plot['ChMisId']  = {  
                  'color': 617,    # kViolet+1
                  'isSignal' : 0,
                  'isData'   : 0, 
                  'scale'    : 1.0
              }
plot['ttbar'] = {   
                  'nameHR' : 't#bar{t}',
                  'color': 418,   # kYellow
                  'isSignal' : 0,
                  'isData'   : 0, 
                  'scale'    : 1.0
                  }

##Fake and prompt substraction
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

plot['DY_promptSubtr']  = {  
                  'color': 921,    # kGray + 1
                  'isSignal' : 0,
                  'isData'   : 0,
                  'scale'    : 1.0                  
              }

plot['lep_TT_promptSubtr']  = {  
                  'color': 921,    # kGray + 1
                  'isSignal' : 0,
                  'isData'   : 0,
                  'scale'    : 1.0                  
              }

plot['singleTop_promptSubtr']  = {  
                  'color': 921,    # kGray + 1
                  'isSignal' : 0,
                  'isData'   : 0,
                  'scale'    : 1.0                  
              }

plot['singleAntiTop_promptSubtr']  = {  
                  'color': 921,    # kGray + 1
                  'isSignal' : 0,
                  'isData'   : 0,
                  'scale'    : 1.0                  
              }

plot['ggWWTo2L2Nu_promptSubtr']  = {  
                  'color': 921,    # kGray + 1
                  'isSignal' : 0,
                  'isData'   : 0,
                  'scale'    : 1.0                  
              }

plot['WWTo2L2Nu_promptSubtr']  = {  
                  'color': 921,    # kGray + 1
                  'isSignal' : 0,
                  'isData'   : 0,
                  'scale'    : 1.0                  
              }

plot['Vg_promptSubtr']  = {  
                  'color': 921,    # kGray + 1
                  'isSignal' : 0,
                  'isData'   : 0,
                  'scale'    : 1.0                  
              }

plot['ZZ_promptSubtr']  = {  
                  'color': 921,    # kGray + 1
                  'isSignal' : 0,
                  'isData'   : 0,
                  'scale'    : 1.0                  
              }

plot['WpWpJJ_promptSubtr']  = {  
                  'color': 921,    # kGray + 1
                  'isSignal' : 0,
                  'isData'   : 0,
                  'scale'    : 1.0                  
              }

plot['WpWpJJ_QCD_promptSubtr']  = {  
                  'color': 921,    # kGray + 1
                  'isSignal' : 0,
                  'isData'   : 0,
                  'scale'    : 1.0                  
              }

plot['VVV_promptSubtr']  = {  
                  'color': 921,    # kGray + 1
                  'isSignal' : 0,
                  'isData'   : 0,
                  'scale'    : 1.0                  
              }

plot['DPS_promptSubtr']  = {  
                  'color': 921,    # kGray + 1
                  'isSignal' : 0,
                  'isData'   : 0,
                  'scale'    : 1.0                  
              }

plot['WZ_promptSubtr']  = {  
                  'color': 921,    # kGray + 1
                  'isSignal' : 0,
                  'isData'   : 0,
                  'scale'    : 1.0                  
              }

##Signal
plot['WW_EWK']  = {
                  'color': 632, # kAzure -9 
                  'isSignal' : 1,
                  'isData'   : 0,
                  'scale'    : 1.0   
                  }
##Irreducible Background
plot['WW_strong']  = {
                  'color': 600, # kAzure -9 
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
##Reducible Background
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
                  'isBlind'  : 1 ,
		  'scale'    : 1.0
              }


# additional options
legend['lumi'] = 'L = 35.9/fb   #sqrt{s} = '
#legend['sqrt'] = '#sqrt{s} = 13 TeV'