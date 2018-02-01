# plot configuration



# groupPlot = {}
# 
# Groups of samples to improve the plots.
# If not defined, normal plots is used
#
              
groupPlot['chargeMisId']  = {  
                'nameHR' : 'chargeMisId',
                'isSignal' : 0,
                'color': 400,   # kYellow
                'samples'  : ['chargeMisId']
}

groupPlot['Fake']  = {  
                  'nameHR' : 'Non-prompt',
                  'isSignal' : 0,
                  'color': 921,    # kGray + 1
                  'samples'  : ['Fake','DY_promptSubtr','lep_TT_promptSubtr','singleTop_promptSubtr','singleAntiTop_promptSubtr','ggWWTo2L2Nu_promptSubtr','WWTo2L2Nu_promptSubtr','Vg_promptSubtr','ZZ_promptSubtr','WpWpJJ_promptSubtr','WpWpJJ_QCD_promptSubtr','VVV_promptSubtr','DPS_promptSubtr','WZ_promptSubtr']
              }

groupPlot['WpWpJJ_QCD']  = {  
                  'nameHR' : 'WpWpJJ_QCD',
                  'isSignal' : 0,
                  'color': 418,    # kGreen+2
                  'samples'  : ['WpWpJJ_QCD']
              }

groupPlot['VV']  = {  
                  'nameHR' : 'VV',
                  'isSignal' : 0,
                  'color': 633, # kRed+1 
                  'samples'  : ['WZ','ZZ','DPS']
              }

groupPlot['Vg']  = {  
                  'nameHR' : 'Vg',
                  'isSignal' : 0,
                  'color': 616, # kMagenta
                  'samples'  : ['Vg']
              }

groupPlot['VVV']  = {  
                  'nameHR' : 'VVV',
                  'isSignal' : 0,
                  'color': 857, # kAzure -3  
                  'samples'  : ['VVV']
              }


groupPlot['WpWpJJ']  = {
                  'nameHR' : 'WpWpJJ',
                  'isSignal' : 1,
                  'color': 851, # kAzure -9 
                  'samples'  : ['WpWpJJ']
              }




#plot = {}

# keys here must match keys in samples.py    
#                    
plot['chargeMisId']  = {  
                  'color': 418,    # kGreen+2
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

plot['WpWpJJ']  = {  
                  'color': 851,    # kGreen+2
                  'isSignal' : 1,
                  'isData'   : 0, 
                  'scale'    : 1.0
              }


plot['WpWpJJ_QCD']  = {  
                  'color':  418,    # kGreen+2
                  'isSignal' : 0,
                  'isData'   : 0, 
                  'scale'    : 1.0
              }

plot['WZ']  = {  
                  'color': 633, # kRed+1 
                  'isSignal' : 0,
                  'isData'   : 0, 
                  'scale'    : 1.0
              }

plot['ZZ']  = {  
                  'color': 632, # kRed
                  'isSignal' : 0,
                  'isData'   : 0, 
                  'scale'    : 1.0
              }

plot['Vg']  = {  
                  'color': 616, # kMagenta
                  'isSignal' : 0,
                  'isData'   : 0, 
                  'scale'    : 1.0
              }

plot['DPS']  = {  
                  'color': 634, # kRed+2
                  'isSignal' : 0,
                  'isData'   : 0, 
                  'scale'    : 1.0
              }

plot['VVV']  = {  
                  'color': 857, # kMagenta
                  'isSignal' : 0,
                  'isData'   : 0, 
                  'scale'    : 1.0
              }

plot['DATA']  = { 
                  'nameHR' : 'Data',
                  'color': 1 ,  
                  'isSignal' : 0,
                  'isData'   : 1 ,
                  'isBlind'  : 0
              }




# additional options

# legend['lumi'] = 'L = 2.3/fb' # 2.264 fb-1
#legend['lumi'] = 'L = 2.3/fb' # 2.318 fb-1
#legend['lumi'] = 'L = 4.3/fb' # 2.318 fb-1
#legend['lumi'] = 'L = 6.3/fb'
legend['lumi'] = 'L = 35.9/fb'

legend['sqrt'] = '#sqrt{s} = 13 TeV'




