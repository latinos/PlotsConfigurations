
plot['TT_semilep']  = {
                  'nameHR' : 't#bar{t}semileptonic',
                  'isSignal' : 0,
                  'color': 400,   # kYellow
                  'isData'   : 0,                 
                  'samples'  : ['TT_semilep']
              }

plot['ggHToLNuQQ']  = {
                  'nameHR' : 'ggHToLNuQQ_M250',
                  'isSignal' : 1,
                  'isData'   : 0,
                  'color': 851,   
                  'samples'  : ['ggHToLNuQQ']
              }

#plot['DATA']  = {
#                  'nameHR' : 'DATA',
#                  'isSignal' : 0,
#                  'color': 418, 
#                  'isData'   : 1 ,
#                  'samples'  : ['DATA']
#              }
#legend['lumi'] = 'L = 35.9/fb'
legend['lumi'] = 'Simulation'
legend['sqrt'] = '#sqrt{s} = 13 TeV'
