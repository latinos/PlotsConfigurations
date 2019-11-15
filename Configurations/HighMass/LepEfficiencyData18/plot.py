# plot configuration



# groupPlot = {}
#
# Groups of samples to improve the plots.
# If not defined, normal plots is used
#


# groupPlot['Higgs']  = {
#     'nameHR' : 'Higgs',
#     'isSignal' : 1,
#     'color': 632, # kRed
#     'samples' : ['ggHWW2l2nu_M200', 'qqHWW2l2nu_M200']
# }

groupPlot['DATA']  = {
    'nameHR' : 'DATA',
    'isSignal' : 1,
    'color': 632, # kRed
    'samples' : ['DATA']
}



plot['DATA'] = {
    'nameHR' : 'DATA',
    'color': 632+1, # kRed+1
    'isSignal' : 1,
    'isData'   : 1,
    'isBlind'  : 0,
    'scale'    : 1    #
}



# additional options
legend['sqrt'] = '#sqrt{s} = 13 TeV'
