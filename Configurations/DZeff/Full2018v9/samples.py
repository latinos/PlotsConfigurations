import os

from LatinoAnalysis.Tools.commonTools import getSampleFiles, getBaseW, addSampleWeight, getBaseWnAOD

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

################################################
################# SKIMS ########################
################################################

dataReco = 'Run2018_UL2018_nAODv9_Full2018v9'
dataSteps = 'DATAl1loose2018v9'

##############################################
###### Tree base directory for the site ######
##############################################

SITE=os.uname()[1]
if    'iihe' in SITE:
  treeBaseDir = '/pnfs/iihe/cms/store/group/phys_higgs/cmshww/amassiro/HWWNano'
elif  'cern' in SITE:
  treeBaseDir = '/eos/cms/store/group/phys_higgs/cmshww/amassiro/HWWNano'

def makeMCDirectory(var=''):
    if var:
        return os.path.join(treeBaseDir, mcProduction, mcSteps.format(var='__' + var))
    else:
        return os.path.join(treeBaseDir, mcProduction, mcSteps.format(var=''))

dataDirectory = os.path.join(treeBaseDir, dataReco, dataSteps)

################################################
############ DATA DECLARATION ##################
################################################

DataRun = [
            ['A','Run2018A-UL2018-v1'] ,
            ['B','Run2018B-UL2018-v1'] ,
            ['C','Run2018C-UL2018-v1'] ,
            ['D','Run2018D-UL2018-v1'] ,
          ]

DataSets = ['MuonEG','DoubleMuon','SingleMuon','EGamma']

DataTrig = {
            'MuonEG'         : 'Trigger_ElMu' ,
            'DoubleMuon'     : '!Trigger_ElMu && Trigger_dblMu' ,
            'SingleMuon'     : '!Trigger_ElMu && !Trigger_dblMu && Trigger_sngMu' ,
            'EGamma'         : '!Trigger_ElMu && !Trigger_dblMu && !Trigger_sngMu && (Trigger_sngEl || Trigger_dblEl)' ,
           }


###########################################
################## DATA ###################
###########################################

LepWPCut = '((Alt$(Lepton_isTightElectron_mvaFall17V2Iso_WP90[0],0)>0.5 || Alt$(Lepton_isTightMuon_cut_Tight_HWWW[0],0)>0.5) && (Alt$(Lepton_isTightElectron_mvaFall17V2Iso_WP90[1],0)>0.5 || Alt$(Lepton_isTightMuon_cut_Tight_HWWW[1],0)>0.5))'

samples['DATA'] = {
  'name': [],
  'weight': 'METFilter_DATA*'+LepWPCut,
  'weights': [],
  'isData': ['all'],
  'FilesPerJob': 40
}

for _, sd in DataRun:
  for pd in DataSets:
    tag = pd + '_' + sd
    if 'DoubleMuon' in pd and any(x in sd for x in ['Run2018B','Run2018D']): tag = tag.replace('v1','v2')
    elif 'SingleMuon' in pd and any(x in sd for x in ['Run2018A','Run2018B','Run2018C']): tag = tag.replace('v1','v2')
    files = nanoGetSampleFiles(dataDirectory, tag)
    samples['DATA']['name'].extend(files)
    samples['DATA']['weights'].extend([DataTrig[pd]] * len(files))


