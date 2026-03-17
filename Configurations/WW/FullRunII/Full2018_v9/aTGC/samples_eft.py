import os
import inspect

configurations = os.path.realpath(inspect.getfile(inspect.currentframe())) # this file
configurations = os.path.dirname(configurations) # inclusive
configurations = os.path.dirname(configurations) # Full2018_v9
configurations = os.path.dirname(configurations) # FullRunII
configurations = os.path.dirname(configurations) # WW
configurations = os.path.dirname(configurations) # Configurations

from LatinoAnalysis.Tools.commonTools import getSampleFiles, getBaseWnAOD, addSampleWeight

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

mcProduction = 'Summer20UL18_106x_nAODv9_Full2018v9'

dataReco = 'Run2018_UL2018_nAODv9_Full2018v9'

mcSteps = 'MCl1loose2018v9__MCCorr2018v9NoJERInHorn__l2tightOR2018v9{var}'

fakeSteps = 'DATAl1loose2018v9__l2loose__fakeW'

dataSteps = 'DATAl1loose2018v9__l2loose__l2tightOR2018v9'

##############################################
###### Tree base directory for the site ######
##############################################

SITE=os.uname()[1]
if    'iihe' in SITE:
  treeBaseDir = '/pnfs/iihe/cms/store/group/phys_higgs/cmshww/amassiro/HWWNano'
elif  'cern' in SITE:
  treeBaseDir = '/eos/cms/store/group/phys_higgs/cmshww/amassiro/HWWNano'

m_mcBase = '/eos/user/c/carbour/public/postProcessing'
m_mcSteps = 'MCl1loose2018v9__MCCorr2018v9NoJERInHorn__l2tightOR2018v9__MCZlrm{var}'

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
m_mcDirectory = '/eos/user/c/carbour/public/postProcessing/Summer20UL18_106x_nAODv9_Full2018v9/MCl1loose2018v9__MCCorr2018v9NoJERInHorn__l2tightOR2018v9__MCZlrm/'
fakeDirectory = os.path.join(treeBaseDir, dataReco, fakeSteps)
dataDirectory = os.path.join(treeBaseDir, dataReco, dataSteps)

################################################
############ DATA DECLARATION ##################
################################################

DataRun = [
    ['A','Run2018A-UL2018-v1'],
    ['B','Run2018B-UL2018-v1'],
    ['C','Run2018C-UL2018-v1'],
    ['D','Run2018D-UL2018-v1'],
]

DataSets = ['MuonEG','SingleMuon','EGamma','DoubleMuon']

DataTrig = {
    'MuonEG'         : 'Trigger_ElMu' ,
    'DoubleMuon'     : '!Trigger_ElMu && Trigger_dblMu' ,
    'SingleMuon'     : '!Trigger_ElMu && !Trigger_dblMu && Trigger_sngMu' ,
    'EGamma'         : '!Trigger_ElMu && !Trigger_dblMu && !Trigger_sngMu && (Trigger_sngEl || Trigger_dblEl)' ,
}

#########################################
############ MC COMMON ##################
#########################################

# SFweight does not include btag weights
mcCommonWeightNoMatch = 'XSWeight*METFilter_MC*SFweight'
mcCommonWeight = 'XSWeight*METFilter_MC*PromptGenLepMatch2l*SFweight'


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
op_dict = json.load(open("%s/WW/FullRunII/Full2018_v9/aTGC/aC/aC_wts.json"%configurations))

# Load dictionary of Zcorrection values
cors = json.load(open("%s/WW/FullRunII/Full2018_v9/aTGC/aC/Zcors.json"%configurations))

# For each desired operator to investigate
for mop in mops:
    # if mop != 'sm' and mop != 'cW':
    #    continue

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

            mx_wt = str(op_wt)

            m_wt = mcCommonWeight
            m_wt += '*' + str(op_dict[mkey][mx_wt])
            # m_wt += '*' + str(cors['MC_MG_Cor'])

            samples[mx_wt] = { 
                'name': nanoGetSampleFiles(m_mcDirectory, 'WWToLNuLNu_MWW-1000ToInf') + \
                        nanoGetSampleFiles(m_mcDirectory, 'WWToLNuLNu_MWW-750To1000') + \
                        nanoGetSampleFiles(m_mcDirectory, 'WWToLNuLNu_MWW-500To750')  + \
                        nanoGetSampleFiles(m_mcDirectory, 'WWToLNuLNu_MWW-0To500'),
                'weight': m_wt,
                'FilesPerJob': m_fpj,
                'suppressNegative':['all'],
                'suppressNegativeNuisances' :['all']
            }   

            addSampleWeight(samples, mx_wt, 'WWToLNuLNu_MWW-1000ToInf', str(cors['cor1I']))
            addSampleWeight(samples, mx_wt, 'WWToLNuLNu_MWW-750To1000', str(cors['cor71']))
            addSampleWeight(samples, mx_wt, 'WWToLNuLNu_MWW-500To750', str(cors['cor57']))
            addSampleWeight(samples, mx_wt, 'WWToLNuLNu_MWW-0To500', str(cors['cor05']))

            signals.append(mx_wt)