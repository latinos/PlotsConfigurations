# nuisances

#nuisances = {}

# name of samples here must match keys in samples.py    
#
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

# Just to put something
nuisances['lumi'] = {
    'name'    : 'lumi',
    'type'    : 'lnN',
    'samples' : dict((skey, '1.015') for skey in mc if skey not in ['WZ'])
}
