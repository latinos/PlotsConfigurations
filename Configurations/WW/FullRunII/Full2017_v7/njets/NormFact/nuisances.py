# nuisances
# name of samples here must match keys in samples.py 
from LatinoAnalysis.Tools.commonTools import getSampleFiles, getBaseW, addSampleWeight

nuisances['QCDscale_top']  = {
    'name'  : 'QCDscale_top',
    'kind'  : 'weight',
    'type'  : 'shape',
    'samples'  : {
       'top' : ['Alt$(LHEScaleWeight[0],1)','Alt$(LHEScaleWeight[8],1)']
    }
}

for n in nuisances.values():
    n['skipCMS'] = 1


