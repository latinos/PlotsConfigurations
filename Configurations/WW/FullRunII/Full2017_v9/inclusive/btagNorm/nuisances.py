# nuisances
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

from LatinoAnalysis.Tools.HiggsXSection import HiggsXSection
HiggsXS = HiggsXSection()

################################ EXPERIMENTAL UNCERTAINTIES  #################################

###### B-tagger

nuisances['btag_shape_nom'] = {
    'name': 'CMS_btag_nom',
    'kind': 'weight',
    'type': 'shape',
    'samples': dict((skey, ["1.","btagSF"]) for skey in mc),
    'AsLnN': '0'
}

for shift in ['lf', 'hf', 'hfstats1', 'hfstats2', 'lfstats1', 'lfstats2', 'cferr1', 'cferr2']:
    btag_syst = ['(btagSF%sup)' % shift, '(btagSF%sdown)' % shift]

    name = 'CMS_btag_%s' % shift
    if 'stats' in shift:
        name += '_2017'

    nuisances['btag_shape_%s' % shift] = {
        'name': name,
        'kind': 'weight',
        'type': 'shape',
        'samples': dict((skey, btag_syst) for skey in mc),
        'AsLnN': '0'
    }

###### Jet energy scale
jes_systs = ['JESAbsolute','JESAbsolute_2017','JESBBEC1','JESBBEC1_2017','JESEC2','JESEC2_2017','JESFlavorQCD','JESHF','JESHF_2017','JESRelativeBal','JESRelativeSample_2017']

for js in jes_systs:
    nuisances[js] = {
        'name': 'CMS_scale_' +js.replace("JES","j_"),
        'kind': 'suffix',
        'type': 'shape',
        'mapUp': js+'up',
        'mapDown': js+'do',
        'samples': dict((skey, ['1', '1']) for skey in mc),
        'folderUp': 'root://eoscms.cern.ch/'+makeMCDirectory('RDF__JESup_suffix'),
        'folderDown': 'root://eoscms.cern.ch/'+makeMCDirectory('RDF__JESdo_suffix'),
        'AsLnN': '0'
    }

    nuisances[js+'_btag'] = {
        'name': 'CMS_scale_' +js.replace("JES","j_")+'_btag',
        'kind': 'suffix',
        'type': 'shape',
        'mapUp': js+'up',
        'mapDown': js+'do',
        'samples': dict((skey, ['1', '1']) for skey in mc),
        'folderUp': 'root://eoscms.cern.ch/'+makeMCDirectory('RDF__JESup_suffix'),
        'folderDown': 'root://eoscms.cern.ch/'+makeMCDirectory('RDF__JESdo_suffix'),
        'reweight' : ['btagSF'+js.replace('JES','jes')+'up','btagSF'+js.replace('JES','jes')+'down'],
        'AsLnN': '0'
    }

for n in nuisances.values():
    n['skipCMS'] = 1

#print ' '.join(nuis['name'] for nname, nuis in nuisances.iteritems() if nname not in ('lumi', 'stat'))
