# nuisances

#nuisances = {}

# name of samples here must match keys in samples.py    
#

nuisances['lumi']  = {
               'name'  : 'lumi', 
               'all'   : 1 ,     # apply to all samples
               'type'  : 'lnN',
               'value' : 1.05 
              }



# statistical fluctuation
# on MC/data
# "stat" is a special word to identify this nuisance
nuisances['stat']  = {
               'name'  : 'lumi', 
                # apply to the following samples: name of samples here must match keys in samples.py
               'samples'  : {
                   
                   'ttbar': {
                         'typeStat' : 'uni',
                         'listBins' : [1,0,0,1,1],  # depend on variable???
                         },
                    
                   'DY': {
                         'typeStat' : 'uni',
                         'listBins' : '-',
                         },
                    
                   'DY': {
                         'typeStat' : 'uni',
                         'listBins' : [1, 1, 1, 1, 1],  # depend on variable???
                         }
                 },
               'type'  : 'lnN'
              }

               #'samples'  : ['ttbar', 'DY' , 'WW' ] , # apply to the following samples: name of samples here must match keys in samples.py
               #'typeStat' : ['uni'  , 'uni', 'uni'] , # bbb = bin by bin, uni = unified
               #'listBins' : [[1,0,0,1,1]  , '-', [1, 1, 1, 1, 1]] , # bbb = bin by bin, uni = unified
