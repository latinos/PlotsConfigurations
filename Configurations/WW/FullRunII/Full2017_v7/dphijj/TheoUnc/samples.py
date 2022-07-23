import os
import inspect

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

mcProduction = 'Fall2017_102X_nAODv7_Full2017v7'

mcSteps = 'MCl1loose2017v7__MCCorr2017v7__l2loose' #TEMP while samples missing from MCCorr

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

#########################################
############ MC COMMON ##################
#########################################

mcCommonWeight = 'XSWeight'

###########################################
#############   SIGNALS  ##################
###########################################

signals = []

###### WW ########

samples['WW'] = {
    'name': nanoGetSampleFiles(mcDirectory, 'WWTo2L2Nu'),
    'weight': mcCommonWeight+'*nllW',
    'FilesPerJob': 2
}

signals.append('WW')

###### ggWW ########

### Add if weights become available for theo unc.
#samples['ggWW'] = {
#    'name': nanoGetSampleFiles(mcDirectory, 'GluGluToWWToENEN') + \
#            nanoGetSampleFiles(mcDirectory, 'GluGluToWWToENMN') + \
#            nanoGetSampleFiles(mcDirectory, 'GluGluToWWToENTN') + \
#            nanoGetSampleFiles(mcDirectory, 'GluGluToWWToMNEN') + \
#            nanoGetSampleFiles(mcDirectory, 'GluGluToWWToMNMN') + \
#            nanoGetSampleFiles(mcDirectory, 'GluGluToWWToMNTN') + \
#            nanoGetSampleFiles(mcDirectory, 'GluGluToWWToTNEN') + \
#            nanoGetSampleFiles(mcDirectory, 'GluGluToWWToTNMN') + \
#            nanoGetSampleFiles(mcDirectory, 'GluGluToWWToTNTN'),
#    'weight': mcCommonWeight+'*1.53/1.4',
#    'FilesPerJob': 2
#}

#signals.append('ggWW')

### Now bin in nonfiducial / fiducial x bins

nbins = 14

for sname in signals:
  sample = samples[sname]
  sample['subsamples'] = {}

  sample['subsamples']['nonfid'] = '!(fid)'

  for i in range(nbins):
      sample['subsamples']['B%d'%i] = 'fid && B%d'%i
