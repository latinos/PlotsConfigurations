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
    mc_emb = [skey for skey in samples if skey != 'DATA' and skey != 'Dyveto' and not skey.startswith('Fake')]
    mc = [skey for skey in mc_emb if skey != 'Dyemb']
    gghAC = [skey for skey in samples if (skey.startswith('ggH_T') or skey.startswith('GGHjj_T'))]
    qqhAC = [skey for skey in samples if skey.startswith('VBF_T')]
    whAC  = [skey for skey in samples if skey.startswith('WH_T')]
    zhAC  = [skey for skey in samples if skey.startswith('ZH_T')]
except NameError:
    mc = []
    mc_emb = []
    cuts = {}
    nuisances = {}
    useEmbeddedDY = True
    treeBaseDir = '/eos/cms/store/group/phys_higgs/cmshww/amassiro/HWWNano'
    def makeMCDirectory(x=''):
        return ''
print("Loading full set of nuisances version: preApprovalV02.")
runDYveto = False
useWgFXFX = True

from LatinoAnalysis.Tools.HiggsXSection import HiggsXSection
HiggsXS = HiggsXSection()

cuts0j = []
cuts1j = []
cuts2j = []

for k in cuts:
  if 'categories' not in cuts[k]: continue
  for cat in cuts[k]['categories']:
    if '0j' in cat: cuts0j.append(k+'_'+cat)
    elif '1j' in cat: cuts1j.append(k+'_'+cat)
    elif '2j' in cat: cuts2j.append(k+'_'+cat)
    else: print 'WARNING: name of category does not contain on either 0j,1j,2j'


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

print ' '.join(nuis['name'] for nname, nuis in nuisances.iteritems() if nname not in ('lumi', 'stat'))

print("SHAPE UP/DO NUISANCE LIST:")
print ' '.join(nuis['name'] for nname, nuis in nuisances.iteritems() if ((nuis['type'] == 'shape' or 'folderUp' in nuis.keys()) and (len(nuis['samples'].keys())==0 or "VBF_H0PM" in nuis['samples'].keys() or "H0PM" in nuis['samples'].keys() or "WH_H0PM" in nuis['samples'].keys() or "ZH_H0PM" in nuis['samples'].keys() )))
