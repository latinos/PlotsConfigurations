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
    mc = [skey for skey in samples if skey != 'DATA' and not skey.startswith('Fake')]
except NameError:
    mc = []
    cuts = {}
    nuisances = {}
    def makeMCDirectory(x=''):
        return ''

from LatinoAnalysis.Tools.HiggsXSection import HiggsXSection
HiggsXS = HiggsXSection()


cuts0j = []
cuts1j = []
cuts2j = []

for k in cuts:
  #k in this case is the general category (signal, acceptance, top...)
  for cat in cuts[k]['categories']:
    print ' #################### !!!!!!!!!!!!!!!!! ##############'
    print k+'_'+cat
    print ' #################### !!!!!!!!!!!!!!!!! ##############'
    if '0j' in cat: cuts0j.append(k+'_'+cat)
    elif '1j' in cat: cuts1j.append(k+'_'+cat)
    elif '2j' in cat: cuts2j.append(k+'_'+cat)
    else: print 'WARNING: name of category does not contain on either 0j,1j,2j'

################################ EXPERIMENTAL UNCERTAINTIES  #################################

#### Luminosity

#nuisances['lumi'] = {
#    'name': 'lumi_13TeV_2017',
#    'type': 'lnN',
#    'samples': dict((skey, '1.023') for skey in mc if skey not in ['WW', 'top', 'DY'])
#}

nuisances['lumi_Uncorrelated'] = {
    'name': 'lumi_13TeV_2017',
    'type': 'lnN',
    'samples': dict((skey, '1.02') for skey in mc if skey not in ['WW', 'top', 'DY'])
}

nuisances['lumi_XYFact'] = {
    'name': 'lumi_13TeV_XYFact',
    'type': 'lnN',
    'samples': dict((skey, '1.008') for skey in mc if skey not in ['WW', 'top', 'DY'])
}

nuisances['lumi_LScale'] = {
    'name': 'lumi_13TeV_LSCale',
    'type': 'lnN',
    'samples': dict((skey, '1.003') for skey in mc if skey not in ['WW', 'top', 'DY'])
}

nuisances['lumi_BBDefl'] = {
    'name': 'lumi_13TeV_BBDefl',
    'type': 'lnN',
    'samples': dict((skey, '1.004') for skey in mc if skey not in ['WW', 'top', 'DY'])
}

nuisances['lumi_DynBeta'] = {
    'name': 'lumi_13TeV_DynBeta',
    'type': 'lnN',
    'samples': dict((skey, '1.005') for skey in mc if skey not in ['WW', 'top', 'DY'])
}

nuisances['lumi_CurrCalib'] = {
    'name': 'lumi_13TeV_CurrCalib',
    'type': 'lnN',
    'samples': dict((skey, '1.003') for skey in mc if skey not in ['WW', 'top', 'DY'])
}

nuisances['lumi_Ghosts'] = {
    'name': 'lumi_13TeV_Ghosts',
    'type': 'lnN',
    'samples': dict((skey, '1.001') for skey in mc if skey not in ['WW', 'top', 'DY'])
}

nuisances['DYeenorm0j']  = {
   'name'     : 'DYeenorm0j',
   'kind'     : 'weight',
   'type'     : 'shape',
   'samples'  : {
      'DY'    : ['1.','1.'] ,
      },
   #'cuts'     : [cut for cut in cuts0j if 'ee' in cut]
   'cutspost' : lambda self, cuts: [cut for cut in cuts if '0j' in cut and 'ee' in cut]
}

nuisances['DYmmnorm0j']  = {
   'name'     : 'DYmmnorm0j',
   'kind'     : 'weight',
   'type'     : 'shape',
   'samples'  : {
      'DY'    : ['1.','1.'] ,
      },
   #'cuts'     : [cut for cut in cuts0j if 'mm' in cut]
   'cutspost' : lambda self, cuts: [cut for cut in cuts if '0j' in cut and 'mm' in cut]
}

nuisances['DYeenorm1j']  = {
   'name'     : 'DYeenorm1j',
   'kind'     : 'weight',
   'type'     : 'shape',
   'samples'  : {
      'DY'    : ['1.','1.'] ,
      },
   #'cuts'     : [cut for cut in cuts1j if 'ee' in cut]
   'cutspost' : lambda self, cuts: [cut for cut in cuts if '1j' in cut and 'ee' in cut]
}

nuisances['DYmmnorm1j']  = {
   'name'     : 'DYmmnorm1j',
   'kind'     : 'weight',
   'type'     : 'shape',
   'samples'  : {
      'DY'    : ['1.','1.'] ,
      },
   #'cuts'     : [cut for cut in cuts1j if 'mm' in cut]
   'cutspost' : lambda self, cuts: [cut for cut in cuts if '1j' in cut and 'mm' in cut]
}

nuisances['DYeenorm2j']  = {
   'name'     : 'DYeenorm2j',
   'kind'     : 'weight',
   'type'     : 'shape',
   'samples'  : {
      'DY'    : ['1.','1.'] ,
      },
   #'cuts'     : [cut for cut in cuts2j if 'ee' in cut]
   'cutspost' : lambda self, cuts: [cut for cut in cuts if '2j' in cut and 'ee' in cut and 'vh' not in cut and 'vbf' not in cut]
}

nuisances['DYmmnorm2j']  = {
   'name'     : 'DYmmnorm2j',
   'kind'     : 'weight',
   'type'     : 'shape',
   'samples'  : {
      'DY'    : ['1.','1.'] ,
      },
   #'cuts'     : [cut for cut in cuts2j if 'mm' in cut]
   'cutspost' : lambda self, cuts: [cut for cut in cuts if '2j' in cut and 'mm' in cut and 'vh' not in cut and 'vbf' not in cut]
}

for n in nuisances.values():
    n['skipCMS'] = 1

print ' '.join(nuis['name'] for nname, nuis in nuisances.iteritems() if nname not in ('lumi', 'stat'))

try:
  for iNP in nuisances:
    if 'cuts' in nuisances[iNP] :
      newCuts = []
      for iCut in nuisances[iNP]['cuts']:
        for iOptim in optim:
           newCuts.append(iCut)
      nuisances[iNP]['cuts'] = newCuts
except:
  print "No optim dictionary"

