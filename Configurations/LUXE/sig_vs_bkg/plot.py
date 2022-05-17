# plot configuration

# groupPlot = {}
# 
# Groups of samples to improve the plots.
# If not defined, normal plots is used
#

# groupPlot['top']  = {  
#     'nameHR' : 'tW+ and t#bar{t}',
#     'isSignal' : 0,
#     'color': 400,   # kYellow
#     'samples'  : ['top']
# }


#plot = {}

# keys here must match keys in samples.py    
#     

plot['Bkg_phase0'] = {
    'nameHR'   : 'Phase0_background',
    'color'    : 600, #kBlue # 632, # kRed 
    'isSignal' : 1,
    'isData'   : 0,    
    'scale'    : 1    #
}

plot['Bkg_phase1'] = {
    'nameHR'   : 'Phase1_background',
    'color'    : 632, #kBlue # 632, # kRed 
    'isSignal' : 1,
    'isData'   : 0,    
    'scale'    : 1    #
}

# # data
# plot['DATA']  = { 
#     'nameHR' : 'Data',
#     'color': 1 ,  
#     'isSignal' : 0,
#     'isData'   : 1,
#     'isBlind'  : 1
# }

# additional options

legend['lumi'] = 'Aribtrary Luminosity'
legend['sqrt'] = 'Beam Dump'
