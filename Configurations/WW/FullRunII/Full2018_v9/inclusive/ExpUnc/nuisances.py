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

###### B-tagger
for shift in ['lf', 'hf', 'hfstats1', 'hfstats2', 'lfstats1', 'lfstats2', 'cferr1', 'cferr2']:
    btag_syst = ['(btagSF%sup)/(btagSF)' % shift, '(btagSF%sdown)/(btagSF)' % shift]

    nuisances['btag_shape_%s' % shift] = {
        'name': shift,
        'kind': 'weight',
        'type': 'shape',
        'samples': dict((skey, btag_syst) for skey in mc),
        'cuts': ['ww2l2v_13TeV_presel']
    }

nuisances['btag_shape_raw'] = {
    'name' : 'raw',
    'kind' : 'weight',
    'type' : 'shape',
    'samples' : dict((skey, ['1.0/(btagSF)']) for skey in mc),
    'OneSided' : 1.0,
    'cuts': ['ww2l2v_13TeV_presel']
}

##### Renormalization & factorization scales
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
