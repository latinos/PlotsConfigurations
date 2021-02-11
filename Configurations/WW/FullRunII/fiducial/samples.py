import os
import inspect

configurations = os.path.realpath(inspect.getfile(inspect.currentframe())) # this file
configurations = os.path.dirname(configurations) # fiducial
configurations = os.path.dirname(configurations) # FullRunII
configurations = os.path.dirname(configurations) # WW
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
mcProduction = 'Summer16_102X_nAODv7_Full2016v7'
mcSteps = 'MCl1loose2016v7__MCCorr2016v7__l2loose__l2tightOR2016v7'

altmcProduction = 'Fall2017_102X_nAODv7_Full2017v7'
altmcSteps = 'MCl1loose2017v7__MCCorr2017v7__l2loose__l2tightOR2017v7'

##############################################
###### Tree base directory for the site ######
##############################################

SITE=os.uname()[1]
if    'iihe' in SITE:
  treeBaseDir = '/pnfs/iihe/cms/store/user/xjanssen/HWW2015'
elif  'cern' in SITE:
  treeBaseDir = '/eos/cms/store/group/phys_higgs/cmshww/amassiro/HWWNano'

def makeMCDirectory(var=''):
    if var:
        return os.path.join(treeBaseDir, mcProduction, mcSteps.format(var='__' + var))
    else:
        return os.path.join(treeBaseDir, mcProduction, mcSteps.format(var=''))

mcDirectory = makeMCDirectory()
altmcDirectory = os.path.join(treeBaseDir, altmcProduction, altmcSteps)

#########################################
############ MC COMMON ##################
#########################################

mcCommonWeight = 'baseW * genWeight'

###########################################
#############   SIGNALS  ##################
###########################################

############ qqWW ############

samples['WW'] = {
    'name': nanoGetSampleFiles(mcDirectory, 'WWTo2L2Nu') + \
            nanoGetSampleFiles(mcDirectory, 'GluGluWWTo2L2Nu_MCFM'),            
    'weight': mcCommonWeight,
    'FilesPerJob': 1,
}
addSampleWeight(samples, 'WW', 'WWTo2L2Nu', 'nllW')
addSampleWeight(samples, 'WW', 'GluGluWWTo2L2Nu_MCFM', '1.53/1.4')

'''
samples['WW_alt'] = {
    'name': nanoGetSampleFiles(altmcDirectory, 'WWTo2L2Nu'),
    'weight': mcCommonWeight+ '*nllW', # temporary - nllW module not run on PS and UE variation samples
    'FilesPerJob': 1
}

############ ggWW ############

samples['ggWW'] = {
    'name': nanoGetSampleFiles(mcDirectory, 'GluGluWWTo2L2Nu_MCFM'),
    'weight': mcCommonWeight+'*1.53/1.4', # updating k-factor
    'FilesPerJob': 4
}

# k-factor 1.4 already taken into account in XSWeight
files = nanoGetSampleFiles(altmcDirectory, 'GluGluToWWToENEN') + \
    nanoGetSampleFiles(altmcDirectory, 'GluGluToWWToENMN') + \
    nanoGetSampleFiles(altmcDirectory, 'GluGluToWWToENTN') + \
    nanoGetSampleFiles(altmcDirectory, 'GluGluToWWToMNEN') + \
    nanoGetSampleFiles(altmcDirectory, 'GluGluToWWToMNMN') + \
    nanoGetSampleFiles(altmcDirectory, 'GluGluToWWToMNTN') + \
    nanoGetSampleFiles(altmcDirectory, 'GluGluToWWToTNEN') + \
    nanoGetSampleFiles(altmcDirectory, 'GluGluToWWToTNMN') + \
    nanoGetSampleFiles(altmcDirectory, 'GluGluToWWToTNTN')

samples['ggWW_alt'] = {
    'name': files,
    'weight': mcCommonWeight + '*1.53/1.4', # updating k-factor
    'FilesPerJob': 10
}
'''
