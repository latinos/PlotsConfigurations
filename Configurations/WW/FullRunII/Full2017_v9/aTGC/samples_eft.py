import os
import inspect

configurations = os.path.realpath(inspect.getfile(inspect.currentframe())) # this file
configurations = os.path.dirname(configurations) # inclusive
configurations = os.path.dirname(configurations) # Full2017_v9
configurations = os.path.dirname(configurations) # FullRunII
configurations = os.path.dirname(configurations) # WW
configurations = os.path.dirname(configurations) # Configurations

from LatinoAnalysis.Tools.commonTools import getSampleFiles, getBaseWnAOD, addSampleWeight

def nanoGetSampleFiles(inputDir, sample):
    try:
        if _samples_noload:
            return [sample]
    except NameError:
        pass

    return getSampleFiles(inputDir, sample, True, 'nanoLatino_')

def getBaseWFast(mcDir, mcProd, sampleList):
    try:
        if _samples_noload:
            return 'baseW'
    except NameError:
        pass
    return getBaseWnAOD(mcDir, mcProd, sampleList)

# samples

try:
    len(samples)
except NameError:
    import collections
    samples = collections.OrderedDict()

################################################
################# SKIMS ########################
################################################

dataReco = 'Run2017_UL2017_nAODv9_Full2017v9'

mcProduction = 'Summer20UL17_106x_nAODv9_Full2017v9'

mcSteps = 'MCl1loose2017v9__MCCorr2017v9NoJERInHorn__l2tightOR2017v9{var}'

fakeSteps = 'DATAl1loose2017v9__l2loose__fakeW'

dataSteps = 'DATAl1loose2017v9__l2loose__l2tightOR2017v9'

##############################################
###### Tree base directory for the site ######
##############################################

SITE=os.uname()[1]
if    'iihe' in SITE:
  treeBaseDir = '/pnfs/iihe/cms/store/user/xjanssen/HWW2015'
elif  'cern' in SITE:
  treeBaseDir = '/eos/cms/store/group/phys_higgs/cmshww/amassiro/HWWNano'

m_mcBase = '/eos/user/c/carbour/public/postProcessing'
m_mcSteps = 'MCl1loose2017v9__MCCorr2017v9NoJERInHorn__l2tightOR2017v9__MCZlrm2017{var}'

def makeMCDirectory(var='',m_mc=False):
    if m_mc:
        m_treeBase = m_mcBase
        m_steps = m_mcSteps
    else:
        m_treeBase = treeBaseDir
        m_steps = mcSteps

    if var:
        return os.path.join(m_treeBase, mcProduction, m_steps.format(var='__' + var))
    else:
        return os.path.join(m_treeBase, mcProduction, m_steps.format(var=''))

mcDirectory = makeMCDirectory()
m_mcDirectory = '/eos/user/c/carbour/public/postProcessing/Summer20UL17_106x_nAODv9_Full2017v9/MCl1loose2017v9__MCCorr2017v9NoJERInHorn__l2tightOR2017v9__MCZlrm2017'
fakeDirectory = os.path.join(treeBaseDir, dataReco, fakeSteps)
dataDirectory = os.path.join(treeBaseDir, dataReco, dataSteps)

################################################
############ DATA DECLARATION ##################
################################################

DataRun = [
    ['B','Run2017B-UL2017-v1'],
    ['C','Run2017C-UL2017-v1'],
    ['D','Run2017D-UL2017-v1'],
    ['E','Run2017E-UL2017-v1'],
    ['F','Run2017F-UL2017-v1']
]

DataSets = ['MuonEG','SingleMuon','SingleElectron','DoubleMuon', 'DoubleEG']

DataTrig = {
    'MuonEG'         : ' Trigger_ElMu' ,
    'SingleMuon'     : '!Trigger_ElMu && Trigger_sngMu' ,
    'SingleElectron' : '!Trigger_ElMu && !Trigger_sngMu && Trigger_sngEl',
    'DoubleMuon'     : '!Trigger_ElMu && !Trigger_sngMu && !Trigger_sngEl && Trigger_dblMu',
    'DoubleEG'       : '!Trigger_ElMu && !Trigger_sngMu && !Trigger_sngEl && !Trigger_dblMu && Trigger_dblEl'
}

#########################################
############ MC COMMON ##################
#########################################

# SFweight does not include btag weights
mcCommonWeightNoMatch = 'XSWeight*SFweight*METFilter_MC'
mcCommonWeight = 'XSWeight*SFweight*PromptGenLepMatch2l*METFilter_MC'

###########################################
#############   SIGNALS  ##################
###########################################

signals = []

###### WW ########

# My Operators  ('sm' should be included)
mops = ['sm', 'cW', 'cHDD', 'cHWB', 'cHl3', 'cHq3', 'cll1']
m_fpj = 20

import json

# Load dictionary of operator weight expressions
op_dict = json.load(open("%s/WW/FullRunII/Full2017_v9/aTGC/aC/aC_wts.json"%configurations))

# Load dictionary of Zcorrection values
cors = json.load(open("%s/WW/FullRunII/Full2017_v9/aTGC/aC/Zcors.json"%configurations))

# For each desired operator to investigate
for mop in mops:

    # Load weighted samples needed for said operator
    for op_wt in op_dict[mop].keys():

        op_wt = str(op_wt)

        m_wt = mcCommonWeight
        m_wt += '*' + str(op_dict[mop][op_wt])
        # m_wt += '*' + str(cors['MC_MG_Cor'])

        samples[op_wt] = { 
            'name': nanoGetSampleFiles(m_mcDirectory, 'WWToLNuLNu_MWW-1000ToInf') + \
                    nanoGetSampleFiles(m_mcDirectory, 'WWToLNuLNu_MWW-750To1000') + \
                    nanoGetSampleFiles(m_mcDirectory, 'WWToLNuLNu_MWW-500To750')  + \
                    nanoGetSampleFiles(m_mcDirectory, 'WWToLNuLNu_MWW-0To500'),
            'weight': m_wt,
            'FilesPerJob': m_fpj,
            'suppressNegative':['all'],
            'suppressNegativeNuisances' :['all']
        }   

        addSampleWeight(samples, op_wt, 'WWToLNuLNu_MWW-1000ToInf', str(cors['cor1I']))
        addSampleWeight(samples, op_wt, 'WWToLNuLNu_MWW-750To1000', str(cors['cor71']))
        addSampleWeight(samples, op_wt, 'WWToLNuLNu_MWW-500To750', str(cors['cor57']))
        addSampleWeight(samples, op_wt, 'WWToLNuLNu_MWW-0To500', str(cors['cor05']))

        signals.append(op_wt)

# For each pair of operators (interference terms)
for i in range(1,len(mops)):
    op1 = mops[i]
    for j in range(i+1,len(mops)):
        op2 = mops[j]

        mkey = '{}_{}'.format(op1,op2)

        for op_wt in op_dict[mkey].keys():
            op_wt = str(op_wt)

            m_wt = mcCommonWeight
            m_wt += '*' + str(op_dict[mkey][op_wt])
            # m_wt += '*' + str(cors['MC_MG_Cor'])

            samples[op_wt] = { 
                'name': nanoGetSampleFiles(m_mcDirectory, 'WWToLNuLNu_MWW-1000ToInf') + \
                        nanoGetSampleFiles(m_mcDirectory, 'WWToLNuLNu_MWW-750To1000') + \
                        nanoGetSampleFiles(m_mcDirectory, 'WWToLNuLNu_MWW-500To750')  + \
                        nanoGetSampleFiles(m_mcDirectory, 'WWToLNuLNu_MWW-0To500'),
                'weight': m_wt,
                'FilesPerJob': m_fpj,
                'suppressNegative':['all'],
                'suppressNegativeNuisances' :['all']
            }   

            addSampleWeight(samples, op_wt, 'WWToLNuLNu_MWW-1000ToInf', str(cors['cor1I']))
            addSampleWeight(samples, op_wt, 'WWToLNuLNu_MWW-750To1000', str(cors['cor71']))
            addSampleWeight(samples, op_wt, 'WWToLNuLNu_MWW-500To750', str(cors['cor57']))
            addSampleWeight(samples, op_wt, 'WWToLNuLNu_MWW-0To500', str(cors['cor05']))

            signals.append(op_wt)