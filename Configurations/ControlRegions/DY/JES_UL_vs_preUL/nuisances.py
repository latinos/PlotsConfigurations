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


# #   nuisances[js] = {
# #       'name': 'CMS_scale_'+js,
# #       'kind': 'suffix',
# #       'type': 'shape',
# #       'mapUp': js+'up',
# #       'mapDown': js+'do',
# #       'samples': dict((skey, ['1', '1']) for skey in mc),
# #       'folderUp': folderup,
# #       'folderDown': folderdo,
# #       'AsLnN': '1'
# #   }

##### Jet energy resolution
nuisances['JES_UL'] = {
    'name'      : 'CMS_jes_UL_2018',
    'kind'      : 'suffix',
    'type'      : 'shape',
    'mapUp'     : 'JESAbsolute_2018up', # 'JESup',
    'mapDown'   : 'JESAbsolute_2018up', # 'JESdo',
    'samples'   : {
        'DY_UL' : ['1','1']
    },
    'folderUp'  : '/eos/cms/store/group/phys_higgs/cmshww/amassiro/HWWNano/Summer20UL18_106x_nAODv9_Full2018v9/MCl1loose2018v9__MCCorr2018v9NoJERInHorn__l2tightOR2018v9__JESAbsoluteup_suffix/',
    'folderDown': '/eos/cms/store/group/phys_higgs/cmshww/amassiro/HWWNano/Summer20UL18_106x_nAODv9_Full2018v9/MCl1loose2018v9__MCCorr2018v9NoJERInHorn__l2tightOR2018v9__JESAbsoluteup_suffix/',
}

nuisances['JES_preUL'] = {
    'name'      : 'CMS_jes_preUL_2018',
    'kind'      : 'suffix',
    'type'      : 'shape',
    'mapUp'     : 'JESAbsolute_2018up', # 'JESup',
    'mapDown'   : 'JESAbsolute_2018up', # 'JESdo',
    'samples'   : {
        'DY_preUL' : ['1','1']
    },
    'folderUp'  : '/eos/cms/store/group/phys_higgs/cmshww/amassiro/HWWNano/Autumn18_102X_nAODv7_Full2018v7/MCl1loose2018v7__MCCorr2018v7__l2loose__l2tightOR2018v7__JESAbsoluteup_suffix/',
    'folderDown': '/eos/cms/store/group/phys_higgs/cmshww/amassiro/HWWNano/Autumn18_102X_nAODv7_Full2018v7/MCl1loose2018v7__MCCorr2018v7__l2loose__l2tightOR2018v7__JESAbsoluteup_suffix/',
}


## Use the following if you want to apply the automatic combine MC stat nuisances.
nuisances['stat']  = {
    'type'          : 'auto',
    'maxPoiss'      : '10',
    'includeSignal' : '1',
    'samples'       : {}
}

for n in nuisances.values():
    n['skipCMS'] = 1
