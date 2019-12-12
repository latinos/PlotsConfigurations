import os
import inspect

configurations = os.path.realpath(inspect.getfile(inspect.currentframe())) # this file
configurations = os.path.dirname(configurations) # fiducial
configurations = os.path.dirname(configurations) # Differential
configurations = os.path.dirname(configurations) # Configurations

from LatinoAnalysis.Tools.commonTools import getSampleFiles, getBaseW, addSampleWeight

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

mcProduction = 'Autumn18_102X_nAODv5_Full2018v5'
#mcProduction = 'Fall2017_102X_nAODv5_SigOnly_Full2017v5'
altmcProduction = 'Summer16_102X_nAODv5_SigOnly_Full2016v5'

mcSteps = 'MCGenOnly'

##############################################
###### Tree base directory for the site ######
##############################################

treeBaseDir = '/eos/cms/store/user/yiiyama/HWWNano'

def makeMCDirectory(var=''):
    if var:
        return os.path.join(treeBaseDir, mcProduction, mcSteps.format(var='__' + var))
    else:
        return os.path.join(treeBaseDir, mcProduction, mcSteps.format(var=''))

mcDirectory = makeMCDirectory()
altmcDirectory = os.path.join(treeBaseDir, altmcProduction, mcSteps)

#########################################
############ MC COMMON ##################
#########################################

mcCommonWeight = 'baseW * genWeight'

###########################################
#############   SIGNALS  ##################
###########################################

############ ggF H->WW ############

samples['ggH_hww'] = {
    'name': nanoGetSampleFiles(mcDirectory, 'GluGluHToWWTo2L2NuPowheg_M125'),
    'weight': [mcCommonWeight, {'class': 'Weight2MINLO', 'args': '%s/src/LatinoAnalysis/Gardener/python/data/powheg2minlo/NNLOPS_reweight.root' % os.getenv('CMSSW_BASE')}],
    'FilesPerJob': 1,
    'linesToAdd': ['.L %s/Differential/weight2MINLO.cc+' % configurations]
}

samples['ggH_hwwalt'] = {
    'name': nanoGetSampleFiles(altmcDirectory, 'GluGluHToWWTo2L2NuAMCNLO_M125'),
    'weight': mcCommonWeight,
    'FilesPerJob': 3
}

############ VBF H->WW ############
samples['qqH_hww'] = {
    'name': nanoGetSampleFiles(mcDirectory, 'VBFHToWWTo2L2NuPowheg_M125'),
    'weight': mcCommonWeight,
    'FilesPerJob': 3
}

samples['qqH_hwwalt'] = {
    'name': nanoGetSampleFiles(altmcDirectory, 'VBFHToWWTo2L2NuAMCNLO_M125'),
    'weight': mcCommonWeight,
    'FilesPerJob': 3
}

############ ZH H->WW ############

samples['ZH_hww'] = {
    'name':   nanoGetSampleFiles(mcDirectory, 'HZJ_HToWWTo2L2Nu_M125'),
    'weight': mcCommonWeight,
    'FilesPerJob': 1
}

samples['ggZH_hww'] = {
    'name':   nanoGetSampleFiles(mcDirectory, 'GluGluZH_HToWWTo2L2Nu_M125'),
    'weight': mcCommonWeight,
    'FilesPerJob': 2
}

############ WH H->WW ############

samples['WH_hww'] = {
    'name':   nanoGetSampleFiles(mcDirectory, 'HWplusJ_HToWW_M125') + nanoGetSampleFiles(mcDirectory, 'HWminusJ_HToWW_M125'),
    'weight': mcCommonWeight,
    'FilesPerJob': 2
}

############ ttH ############

samples['ttH_hww'] = {
    'name':   nanoGetSampleFiles(mcDirectory, 'ttHToNonbb_M125'),
    'weight': mcCommonWeight,
    'FilesPerJob': 1
}

############# bbH ############
#
#samples['bbH_hww'] = {
#    'name':   nanoGetSampleFiles(mcDirectory, 'bbHToWWTo2L2Nu_M125_ybyt') + nanoGetSampleFiles(mcDirectory, 'bbHToWWTo2L2Nu_M125_yb2'),
#    'weight': mcCommonWeight,
#    'FilesPerJob': 1
#}

