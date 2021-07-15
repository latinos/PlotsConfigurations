#L nuisances
# name of samples here must match keys in samples.py 
from LatinoAnalysis.Tools.commonTools import getSampleFiles, getBaseW, addSampleWeight

def nanoGetSampleFiles(inputDir, Sample):
    return getSampleFiles(inputDir, Sample, False, 'nanoLatino_')

try:
    mc = [skey for skey in samples if skey != 'DATA' and not skey.startswith('Fake')]
except NameError:
    mc = []
    cuts = {}
    nuisances = {}
    def makeMCDirectory(x=''):
        return ''

################################ EXPERIMENTAL UNCERTAINTIES  #################################

##### PU

nuisances['PU'] = {
    'name': 'PU',
    'kind': 'weight',
    'type': 'shape',
    'samples': dict((skey, ['puWeightUp/puWeight', 'puWeightDown/puWeight']) for skey in mc),
    'cuts': ['ww2l2v_13TeV_presel']
}

##### Renormalization & factorization scales

## All samples have nLHEScaleWeight 0 or 9
variations = ['Alt$(LHEScaleWeight[0],1)', 'Alt$(LHEScaleWeight[1],1)', 'Alt$(LHEScaleWeight[3],1)', 'Alt$(LHEScaleWeight[5],1)', 'Alt$(LHEScaleWeight[7],1)', 'Alt$(LHEScaleWeight[8],1)']

nuisances['QCDscale_top']  = {
    'name'  : 'QCDscale_top',
    'kind'  : 'weight_envelope',
    'type'  : 'shape',
    'samples'  : {
       'top' : variations,
    },
    'cuts' : [cut for cut in cuts if 'presel' not in cut]
}

for n in nuisances.values():
    n['skipCMS'] = 1
