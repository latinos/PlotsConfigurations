# plot configuration



# groupPlot = {}
#
# Groups of samples to improve the plots (merge different sample during plot).
# If not defined, normal plots is used
#
Red=632; Violet=880; Green=416; Orange=800; Yellow=400; Azure=860
'''
groupPlot['ChargeMisId']  = {
                  'nameHR' : "ChMisId",
                  'isSignal' : 0,
                  'color': Red,    # kRed
                  'samples'  : ['ChMisId' , 'ttbar']
              }
'''
groupPlot['VV']  = {
                  'nameHR' : "VV",
                  'isSignal' : 0,
                  'color'    : Violet+10, # kViolet+10
                  'samples'  : ['ZZ' , 'WZ' , 'DPS']
              }

groupPlot['VVV']  = {
                  'nameHR' : 'VVV',
                  'isSignal' : 0,
                  'color': Green, # kGreen
                  'samples'  : ['VVV']
              }




groupPlot['Vg']  = {
                  'nameHR' : "V#gamma",
                  'isSignal' : 0,
                  'color'    : Orange+10,   # kOrange + 10
                  'samples'  : ['Vg']
              }

groupPlot['WW_strong']  = {
                  'nameHR' : "WW QCD",
                  'isSignal' : 0,
                  'color'    : Violet, # kViolet
                  'samples'  : ['WW_strong']
              }



groupPlot['non-prompt']  = {
                  'nameHR' : 'non-Prompt',
                  'isSignal' : 0,
                  'color': Yellow,    # kYellow
                  'samples'  : ['Fake_lep']
              }


groupPlot['WW_EWK']  = {
                  'nameHR' : "WW EWK",
                  'isSignal' : 0,
                  'color'    : Azure+4, # kAzure+4
                  'samples'  : ['WpWp_EWK']
              }





#plot = {}

# keys here must match keys in samples.py
#

##Charge Misidentification
'''
plot['ChMisId']  = {
                  'color': Red,    # kRed
                  'isSignal' : 0,
                  'isData'   : 0,
                  'scale'    : 1.0
              }
plot['ttbar'] = {
                  'nameHR' : 'ttbar',
                  'color': Red,   # kRed
                  'isSignal' : 0,
                  'isData'   : 0,
                  'scale'    : 1.0
                  }
'''

##Fake and prompt substraction
plot['Fake_lep']  = {
                  'color': Yellow,    # kYellow
                  'isSignal' : 0,
                  'isData'   : 0,
                  'scale'    : 1.0
              }

'''
plot['Vg_promptSubtr']  = {
                  'color': Yellow,    # kYellow
                  'isSignal' : 0,
                  'isData'   : 0,
                  'scale'    : 1.0
              }

plot['WZ_promptSubtr']  = {
                  'color': Yellow,    # kYellow
                  'isSignal' : 0,
                  'isData'   : 0,
                  'scale'    : 1.0
              }
'''
##Signal
plot['WpWp_EWK']  = {
                  'color': Azure+4, # kAzure+4
                  'isSignal' : 0,
                  'isData'   : 0,
                  'scale'    : 1.0
                  }
##Irreducible Background
plot['WW_strong']  = {
                  'color': Violet, # kViolet
                  'isSignal' : 0,
                  'isData'   : 0,
                  'scale'    : 1.0
                  }


plot['Vg']  = {
                  'color': Orange+10, # kOrange+10
                  'isSignal' : 0,
                  'isData'   : 0,
                  'scale'    : 1.0
                  }
##Reducible Background
##VV plot
plot['ZZ']  = {
                  'color': Violet+10, # kViolet+10
                  'isSignal' : 0,
                  'isData'   : 0,
                  'scale'    : 1.0
                  }

plot['WZ']  = {
                  'color': Violet+10, # kViolet+10
                  'isSignal' : 0,
                  'isData'   : 0,
                  'scale'    : 1.0
                  }

plot['DPS']  = {
                  'color': Violet+10, # kViolet+10
                  'isSignal' : 0,
                  'isData'   : 0,
                  'scale'    : 1.0
                  }
##VVV
plot['VVV']  = {
                  'color': Green, # kGreen
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
legend['lumi'] = 'L = 41.5/fb'

legend['sqrt'] = '#sqrt{s} = 13 TeV'
