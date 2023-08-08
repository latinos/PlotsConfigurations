import os
import copy
import inspect
configurations = os.path.realpath(inspect.getfile(inspect.currentframe())) # this file
configurations = os.path.dirname(configurations) # Full2018
configurations = os.path.dirname(configurations) # HWWSemiLepHighMass
configurations = os.path.dirname(configurations) # Configurations

from LatinoAnalysis.Tools.commonTools import getSampleFiles, getBaseW, addSampleWeight

from LatinoAnalysis.Tools.HiggsXSection import HiggsXSection
HiggsXS = HiggsXSection()

#### samples Weights
def addSampleWeightNano(sampleDic,key,Sample,Weight,pathname=''):

    ### Add Weights in sampleDic if needed
    if not 'weights' in sampleDic[key] :
      sampleDic[key]['weights'] = []
    if len(sampleDic[key]['weights']) < len(sampleDic[key]['name']) :
      for iEntry in range(len(sampleDic[key]['name'])-len(sampleDic[key]['weights'])) : sampleDic[key]['weights'].append('(1.)')

    ### Now add the actual weight
    for iEntry in range(len(sampleDic[key]['name'])):
      name = sampleDic[key]['name'][iEntry].split('/')[4]
      if name == Sample.split('/')[1]:
        sampleDic[key]['weights'][iEntry] += '*(' + Weight + ')'


def nanoGetSampleFiles(inputDir, sample):
    try:
        if _samples_noload:
            return []
    except NameError:
        pass

    return getSampleFiles(inputDir, sample, True, 'nanoLatino_')

# samples

try:
    len(samples)
except NameError:
    import collections
    samples = collections.OrderedDict()


SITE=os.uname()[1]
if  'cern' in SITE:
  treeBaseDir = '/eos/cms/store/group/phys_higgs/cmshww/amassiro/HWWNano'
  myEOSDir    = '/eos/user/g/gbardell/HWWNano'


def makeMCDirectory(var=''):
    if var:
        return os.path.join(treeBaseDir, mcProduction, mcSteps.format(var='_' + var))
    else:
        return os.path.join(treeBaseDir, mcProduction, mcSteps.format(var=''))

def getFilesFromDAS(dataset,dasInstance='prod/global'):
     dasCmd='dasgoclient -query="instance='+dasInstance+' file dataset='+dataset+'"'
     proc=subprocess.Popen(dasCmd, stderr = subprocess.PIPE,stdout = subprocess.PIPE, shell = True)
     out, err = proc.communicate()
     if not proc.returncode == 0 :
       exit()
     FileList=string.split(out)
     return FileList


## NLO samples

#files = getFilesFromDAS('/WJetsToLNu_0J_TuneCP5_13TeV-amcatnloFXFX-pythia8/RunIIAutumn18NanoAODv7-Nano02Apr2020_102X_upgrade2018_realistic_v21-v1/NANOAODSIM')
#files += getFilesFromDAS('/WJetsToLNu_1J_TuneCP5_13TeV-amcatnloFXFX-pythia8/RunIIAutumn18NanoAODv7-Nano02Apr2020_102X_upgrade2018_realistic_v21-v1/NANOAODSIM')
#files  += getFilesFromDAS('/WJetsToLNu_2J_TuneCP5_13TeV-amcatnloFXFX-pythia8/RunIIAutumn18NanoAODv7-Nano02Apr2020_102X_upgrade2018_realistic_v21-v1/NANOAODSIM') 
#
#samples['Wjets_NLOnj'] = {
#	'name' : files,
#        'weight' : '1',
#        'FilesPerJob': 1,
#}
#addSampleWeightNano(samples, 'Wjets_NLOnj', '/WJetsToLNu_0J_TuneCP5_13TeV-amcatnloFXFX-pythia8/RunIIAutumn18NanoAODv7-Nano02Apr2020_102X_upgrade2018_realistic_v21-v1/NANOAODSIM', 'genWeight*4.282e-06')
#addSampleWeightNano(samples, 'Wjets_NLOnj', '/WJetsToLNu_1J_TuneCP5_13TeV-amcatnloFXFX-pythia8/RunIIAutumn18NanoAODv7-Nano02Apr2020_102X_upgrade2018_realistic_v21-v1/NANOAODSIM', 'genWeight*1.076e-06')
#addSampleWeightNano(samples, 'Wjets_NLOnj', '/WJetsToLNu_2J_TuneCP5_13TeV-amcatnloFXFX-pythia8/RunIIAutumn18NanoAODv7-Nano02Apr2020_102X_upgrade2018_realistic_v21-v1/NANOAODSIM',' genWeight*1.299e-06')
#
#files = getFilesFromDAS('/WJetsToLNu_0J_TuneCP5_13TeV-amcatnloFXFX-pythia8/RunIIAutumn18NanoAODv7-Nano02Apr2020_102X_upgrade2018_realistic_v21-v1/NANOAODSIM')
#
#samples['Wjets_NLO_0j'] = {
#	'name' : files,
#        'weight' : '1',
#        'FilesPerJob': 1,
#}
#addSampleWeightNano(samples, 'Wjets_NLO_0j', '/WJetsToLNu_0J_TuneCP5_13TeV-amcatnloFXFX-pythia8/RunIIAutumn18NanoAODv7-Nano02Apr2020_102X_upgrade2018_realistic_v21-v1/NANOAODSIM', 'genWeight*4.282e-06')
#
#files = getFilesFromDAS('/WJetsToLNu_1J_TuneCP5_13TeV-amcatnloFXFX-pythia8/RunIIAutumn18NanoAODv7-Nano02Apr2020_102X_upgrade2018_realistic_v21-v1/NANOAODSIM')
#
#samples['Wjets_NLO_1j'] = {
#	'name' : files,
#        'weight' : '1',
#        'FilesPerJob': 1,
#}
#addSampleWeightNano(samples, 'Wjets_NLO_1j', '/WJetsToLNu_1J_TuneCP5_13TeV-amcatnloFXFX-pythia8/RunIIAutumn18NanoAODv7-Nano02Apr2020_102X_upgrade2018_realistic_v21-v1/NANOAODSIM', 'genWeight*1.076e-06')
#
#
#files  = getFilesFromDAS('/WJetsToLNu_2J_TuneCP5_13TeV-amcatnloFXFX-pythia8/RunIIAutumn18NanoAODv7-Nano02Apr2020_102X_upgrade2018_realistic_v21-v1/NANOAODSIM') 
#
#samples['Wjets_NLO_2j'] = {
#	'name' : files,
#        'weight' : '1',
#        'FilesPerJob': 1,
#}
#
#addSampleWeightNano(samples, 'Wjets_NLO_2j', '/WJetsToLNu_2J_TuneCP5_13TeV-amcatnloFXFX-pythia8/RunIIAutumn18NanoAODv7-Nano02Apr2020_102X_upgrade2018_realistic_v21-v1/NANOAODSIM','genWeight*1.299e-06')


files  = getFilesFromDAS('/WJetsToLNu_TuneCP5_13TeV-amcatnloFXFX-pythia8/RunIIAutumn18NanoAODv7-Nano02Apr2020_102X_upgrade2018_realistic_v21-v1/NANOAODSIM')
samples['Wjets_NLO_inc'] = {
	'name' : files,
        'weight' : '1',
        'FilesPerJob': 1,
}
addSampleWeightNano(samples, 'Wjets_NLO_inc','/WJetsToLNu_TuneCP5_13TeV-amcatnloFXFX-pythia8/RunIIAutumn18NanoAODv7-Nano02Apr2020_102X_upgrade2018_realistic_v21-v1/NANOAODSIM','genWeight*1.221e-05')


## LO samples

# HT binned
files = getFilesFromDAS('/WJetsToLNu_HT-70To100_TuneCP5_13TeV-madgraphMLM-pythia8/RunIIAutumn18NanoAODv7-Nano02Apr2020_102X_upgrade2018_realistic_v21-v1/NANOAODSIM')
files+= getFilesFromDAS('/WJetsToLNu_HT-100To200_TuneCP5_13TeV-madgraphMLM-pythia8/RunIIAutumn18NanoAODv7-Nano02Apr2020_102X_upgrade2018_realistic_v21-v1/NANOAODSIM')
files+= getFilesFromDAS('/WJetsToLNu_HT-200To400_TuneCP5_13TeV-madgraphMLM-pythia8/RunIIAutumn18NanoAODv7-Nano02Apr2020_102X_upgrade2018_realistic_v21-v1/NANOAODSIM')
files+= getFilesFromDAS('/WJetsToLNu_HT-400To600_TuneCP5_13TeV-madgraphMLM-pythia8/RunIIAutumn18NanoAODv7-Nano02Apr2020_102X_upgrade2018_realistic_v21-v1/NANOAODSIM')
files+= getFilesFromDAS('/WJetsToLNu_HT-600To800_TuneCP5_13TeV-madgraphMLM-pythia8/RunIIAutumn18NanoAODv7-Nano02Apr2020_102X_upgrade2018_realistic_v21-v1/NANOAODSIM')
files+= getFilesFromDAS('/WJetsToLNu_HT-800To1200_TuneCP5_13TeV-madgraphMLM-pythia8/RunIIAutumn18NanoAODv7-Nano02Apr2020_102X_upgrade2018_realistic_v21-v1/NANOAODSIM')
files+= getFilesFromDAS('/WJetsToLNu_HT-1200To2500_TuneCP5_13TeV-madgraphMLM-pythia8/RunIIAutumn18NanoAODv7-Nano02Apr2020_102X_upgrade2018_realistic_v21-v1/NANOAODSIM')
files+= getFilesFromDAS('/WJetsToLNu_HT-2500ToInf_TuneCP5_13TeV-madgraphMLM-pythia8/RunIIAutumn18NanoAODv7-Nano02Apr2020_102X_upgrade2018_realistic_v21-v1/NANOAODSIM')
files+= getFilesFromDAS('/WJetsToLNu_TuneCP5_13TeV-madgraphMLM-pythia8/RunIIAutumn18NanoAODv7-Nano02Apr2020_102X_upgrade2018_realistic_v21-v1/NANOAODSIM')

samples['Wjets_HT'] = {
    'name'   : files,
    'weight' : '1.', 
    'FilesPerJob' : 1,
}

addSampleWeightNano(samples, 'Wjets_HT', '/WJetsToLNu_TuneCP5_13TeV-madgraphMLM-pythia8/RunIIAutumn18NanoAODv7-Nano02Apr2020_102X_upgrade2018_realistic_v21-v1/NANOAODSIM', '(LHE_HT < 70)*genWeight*0.8670359') 
addSampleWeightNano(samples, 'Wjets_HT', '/WJetsToLNu_HT-70To100_TuneCP5_13TeV-madgraphMLM-pythia8/RunIIAutumn18NanoAODv7-Nano02Apr2020_102X_upgrade2018_realistic_v21-v1/NANOAODSIM', 'genWeight*0.0460524*1.21')
addSampleWeightNano(samples, 'Wjets_HT', '/WJetsToLNu_HT-100To200_TuneCP5_13TeV-madgraphMLM-pythia8/RunIIAutumn18NanoAODv7-Nano02Apr2020_102X_upgrade2018_realistic_v21-v1/NANOAODSIM', 'genWeight*0.0574412*0.993')
addSampleWeightNano(samples, 'Wjets_HT', '/WJetsToLNu_HT-200To400_TuneCP5_13TeV-madgraphMLM-pythia8/RunIIAutumn18NanoAODv7-Nano02Apr2020_102X_upgrade2018_realistic_v21-v1/NANOAODSIM', 'genWeight*0.0194198*1.002')
addSampleWeightNano(samples, 'Wjets_HT', '/WJetsToLNu_HT-400To600_TuneCP5_13TeV-madgraphMLM-pythia8/RunIIAutumn18NanoAODv7-Nano02Apr2020_102X_upgrade2018_realistic_v21-v1/NANOAODSIM',  'genWeight*0.0117611*1.009')
addSampleWeightNano(samples, 'Wjets_HT', '/WJetsToLNu_HT-600To800_TuneCP5_13TeV-madgraphMLM-pythia8/RunIIAutumn18NanoAODv7-Nano02Apr2020_102X_upgrade2018_realistic_v21-v1/NANOAODSIM',  'genWeight*0.0007908*1.120')
addSampleWeightNano(samples, 'Wjets_HT', '/WJetsToLNu_HT-800To1200_TuneCP5_13TeV-madgraphMLM-pythia8/RunIIAutumn18NanoAODv7-Nano02Apr2020_102X_upgrade2018_realistic_v21-v1/NANOAODSIM',  'genWeight*0.0007768*1.202')
addSampleWeightNano(samples, 'Wjets_HT', '/WJetsToLNu_HT-1200To2500_TuneCP5_13TeV-madgraphMLM-pythia8/RunIIAutumn18NanoAODv7-Nano02Apr2020_102X_upgrade2018_realistic_v21-v1/NANOAODSIM',  'genWeight*0.0001717*1.332')
addSampleWeightNano(samples, 'Wjets_HT', '/WJetsToLNu_HT-2500ToInf_TuneCP5_13TeV-madgraphMLM-pythia8/RunIIAutumn18NanoAODv7-Nano02Apr2020_102X_upgrade2018_realistic_v21-v1/NANOAODSIM',    'genWeight*3.035e-06*4.2')


