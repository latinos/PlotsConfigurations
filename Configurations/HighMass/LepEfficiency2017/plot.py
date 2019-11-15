# plot configuration



# groupPlot = {}
# 
# Groups of samples to improve the plots.
# If not defined, normal plots is used
#


groupPlot['Higgs']  = {  
    'nameHR' : 'Higgs',
    'isSignal' : 1,
    'color': 632, # kRed 
    'samples' : ['ggHWW2l2nu_M200', 'qqHWW2l2nu_M200']
}



plot['qqHWW2l2nu_M200'] = {
                  'nameHR' : 'qqH',
                  'color': 632+1, # kRed+1 
                  'isSignal' : 1,
                  'isData'   : 0,    
                  'scale'    : 1    #
                  }


plot['ggHWW2l2nu_M200'] = {
                  'nameHR' : 'ggH',
                  'color': 632, # kRed 
                  'isSignal' : 1,
                  'isData'   : 0,    
                  'scale'    : 1    #
                  }



# additional options
legend['sqrt'] = '#sqrt{s} = 13 TeV'




