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


nuisances['mytest']  = {
               'name'  : 'mylumi', 
               'type'  : 'lnN',
               'samples'  : {
                   'ttbar' : 1.05,
                   'DY'    : 1.10
                }
              }


# nuisances handled by means of a weight in the tree

nuisances['pileup']  = {
                'name'  : 'pileup', 
                'kind'  : 'weight',
                'type'  : 'shape',
                'samples'  : {
                   #'ttbar' : ['puWup/puW', 'puWdown/puW'],
                   #'DY'    : ['puWup/puW', 'puWdown/puW']
                   'ttbar' : ['3./puW', '0.3/puW'],
                   'DY'    : ['3./puW', '0.3/puW']
                }
}


# nuisances handled by means of a different set of trees

nuisances['eleScale']  = {
                'name'  : 'eleScale', 
                'kind'  : 'tree',
                'type'  : 'shape',
                'samples'  : {
                   'ttbar' : ['1', '1'],
                   'Wjets' : ['1', '1']
                },
                'folderUp'   : '/tmp/amassiro/Tree_eleScaleUp/',
                'folderDown' : '/tmp/amassiro/Tree_eleScaleDown/' 
}

# statistical fluctuation
# on MC/data
# "stat" is a special word to identify this nuisance
nuisances['stat']  = {
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
                    
                   'WW': {
                         'typeStat' : 'uni',
                         'listBins' : [1, 1, 1, 1, 1],  # depend on variable???
                         }
                 },
               'type'  : 'shape'
              }

               #'samples'  : ['ttbar', 'DY' , 'WW' ] , # apply to the following samples: name of samples here must match keys in samples.py
               #'typeStat' : ['uni'  , 'uni', 'uni'] , # bbb = bin by bin, uni = unified
               #'listBins' : [[1,0,0,1,1]  , '-', [1, 1, 1, 1, 1]] , # bbb = bin by bin, uni = unified
