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

# ###### B-tagger

# for shift in ['jes', 'lf', 'hf', 'hfstats1', 'hfstats2', 'lfstats1', 'lfstats2', 'cferr1', 'cferr2']:
#     btag_syst = ['(btagSF%sup)/(btagSF)' % shift, '(btagSF%sdown)/(btagSF)' % shift]

#     name = 'CMS_btag_%s' % shift
#     if 'stats' in shift:
#         name += '_2018'

#     nuisances['btag_shape_%s' % shift] = {
#         'name': name,
#         'kind': 'weight',
#         'type': 'shape',
#         'samples': dict((skey, btag_syst) for skey in mc),
#     }

# # nuisances['electronpt'] = {
# #     'name': 'CMS_scale_e_2018',
# #     'kind': 'suffix',
# #     'type': 'shape',
# #     'mapUp': 'ElepTup',
# #     'mapDown': 'ElepTdo',
# #     'samples': dict((skey, ['1', '1']) for skey in mc),
# #     'folderUp': makeMCDirectory('ElepTup_suffix'),
# #     'folderDown': makeMCDirectory('ElepTdo_suffix'),
# #     'AsLnN': '1'
# # }

# nuisances['muonpt'] = {
#     'name'       : 'CMS_scale_m_2018',
#     'kind'       : 'suffix',
#     'type'       : 'shape',
#     'mapUp'      : 'MupTup',
#     'mapDown'    : 'MupTdo',
#     'samples'    : dict((skey, ['1', '1']) for skey in mc),
#     'folderUp'   : makeMCDirectory('MupTup_suffix'),
#     'folderDown' : makeMCDirectory('MupTdo_suffix'),
#     'AsLnN'      : '1'
# }

# # ##### Jet energy scale
# # jes_systs = ['JESAbsolute','JESAbsolute_2018','JESBBEC1','JESBBEC1_2018','JESEC2','JESEC2_2018','JESFlavorQCD','JESHF','JESHF_2018','JESRelativeBal','JESRelativeSample_2018']

# # for js in jes_systs:
# #   if 'Absolute' in js:
# #     folderup = makeMCDirectory('JESAbsoluteup_suffix')
# #     folderdo = makeMCDirectory('JESAbsolutedo_suffix')
# #   elif 'BBEC1' in js:
# #     folderup = makeMCDirectory('JESBBEC1up_suffix')
# #     folderdo = makeMCDirectory('JESBBEC1do_suffix')
# #   elif 'EC2' in js:
# #     folderup = makeMCDirectory('JESEC2up_suffix')
# #     folderdo = makeMCDirectory('JESEC2do_suffix')
# #   elif 'HF' in js:
# #     folderup = makeMCDirectory('JESHFup_suffix')
# #     folderdo = makeMCDirectory('JESHFdo_suffix')
# #   elif 'Relative' in js:
# #     folderup = makeMCDirectory('JESRelativeup_suffix')
# #     folderdo = makeMCDirectory('JESRelativedo_suffix')
# #   elif 'FlavorQCD' in js:
# #     folderup = makeMCDirectory('JESFlavorQCDup_suffix')
# #     folderdo = makeMCDirectory('JESFlavorQCDdo_suffix')

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

# # ##### Jet energy resolution
# # nuisances['JER'] = {
# #     'name': 'CMS_res_j_2018',
# #     'kind': 'suffix',
# #     'type': 'shape',
# #     'mapUp': 'JERup',
# #     'mapDown': 'JERdo',
# #     'samples': dict((skey, ['1', '1']) for skey in mc),
# #     'folderUp': makeMCDirectory('JERup_suffix'),
# #     'folderDown': makeMCDirectory('JERdo_suffix'),
# #     'AsLnN': '1'
# # }

# ##### MET energy scale
# nuisances['met'] = {
#     'name'       : 'CMS_scale_met_2018',
#     'kind'       : 'suffix',
#     'type'       : 'shape',
#     'mapUp'      : 'METup',
#     'mapDown'    : 'METdo',
#     'samples'    : dict((skey, ['1', '1']) for skey in mc),
#     'folderUp'   : makeMCDirectory('METup_suffix'),
#     'folderDown' : makeMCDirectory('METdo_suffix'),
#     'AsLnN'      : '1'
# }


## Use the following if you want to apply the automatic combine MC stat nuisances.
nuisances['stat']  = {
    'type'          : 'auto',
    'maxPoiss'      : '10',
    'includeSignal' : '1',
    'samples'       : {}
}

for n in nuisances.values():
    n['skipCMS'] = 1
