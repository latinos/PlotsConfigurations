# nuisances

#nuisances = {}

# name of samples here must match keys in samples.py

# imported from samples.py:
# samples, treeBaseDir, mcProduction, mcSteps
# imported from cuts.py
# cuts

from LatinoAnalysis.Tools.commonTools import getSampleFiles, getBaseW, addSampleWeight

def nanoGetSampleFiles(inputDir, Sample):
    return getSampleFiles(inputDir, Sample, False, 'nanoLatino_')

try:
    mc = [skey for skey in samples if skey != 'DATA' and not skey.startswith('FAKE')]
except NameError:
    mc = []
    cuts = {}
    nuisances = {}
    def makeMCDirectory(x=''):
        return ''

from LatinoAnalysis.Tools.HiggsXSection import HiggsXSection
HiggsXS = HiggsXSection()

mu_cuts = [ c for c in cuts if 'MuCh' in c] 
el_cuts = [ c for c in cuts if 'ElCh' in c] 

mc_VBS = [skey for skey in mc if 'VJets_NLO_VBSanalyses' in samples[skey]['name'][0]]
mc_noVBS = [skey for skey in mc if not skey in mc_VBS]
print('VBS samples:' + str(mc_VBS))

def makeSuffixVar(name, fix, cuts=None, folder_fix=None):
    nuis = {}
    nuis['name']    = name
    nuis['kind']    = 'suffix'
    nuis['type']    = 'shape'
    nuis['mapUp']   = fix+'up'
    nuis['mapDown'] = fix+'do'
    if not cuts is None: nuis['cuts'] = cuts
    f_fix = fix
    if not folder_fix is None: f_fix = folder_fix
    
    nuis_VBS = copy.deepcopy(nuis)
    nuis_VBS['samples']    = dict((skey, ['1.', '1.']) for skey in mc_VBS)
    nuis_VBS['folderUp']   = makeMCDirectory(var=f_fix+'up', base='/eos/cms/store/group/phys_smp/VJets_NLO_VBSanalyses')    
    nuis_VBS['folderDown'] = makeMCDirectory(var=f_fix+'do', base='/eos/cms/store/group/phys_smp/VJets_NLO_VBSanalyses')    
    nuisances[name+'_VBS'] = copy.deepcopy(nuis_VBS)

    nuis_noVBS = copy.deepcopy(nuis)
    nuis_noVBS['samples']    = dict((skey, ['1.', '1.']) for skey in mc_noVBS)
    nuis_noVBS['folderUp']   = makeMCDirectory(var=f_fix+'up')    
    nuis_noVBS['folderDown'] = makeMCDirectory(var=f_fix+'do')    
    nuisances[name] = copy.deepcopy(nuis_noVBS)
    

################################ EXPERIMENTAL UNCERTAINTIES  #################################

## Use the following if you want to apply the automatic combine MC stat nuisances.
nuisances['stat'] = {
    'type': 'auto',
    'maxPoiss': '10',
    'includeSignal': '0',
    #  nuisance ['maxPoiss'] =  Number of threshold events for Poisson modelling
    #  nuisance ['includeSignal'] =  Include MC stat nuisances on signal processes (1=True, 0=False)
    'samples': {}
}
for n in nuisances.values():
    n['skipCMS'] = 1

#print(' '.join(nuis['name'] for nname, nuis in nuisances.iteritems() if nname not in ('lumi', 'stat')))
