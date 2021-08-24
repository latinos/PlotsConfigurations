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

mcProduction = 'Summer16_102X_nAODv7_Full2016v7'

mcSteps = 'MCl1loose2016v7__MCCorr2016v7'

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

mcCommonWeight_signal = 'genjetetacut*XSWeight'

###########################################
#############   SIGNALS  ##################
###########################################

njetBinning = ['0', '1', '2', '3+']
ngenjet = 'nCleanGenJet'
fiducial = 'fiducial'

signals = []

###### WW ########

samples['WW'] = {
    'name': nanoGetSampleFiles(mcDirectory, 'WWTo2L2Nu'),
    'weight': mcCommonWeight_signal+'*nllW',
    'FilesPerJob': 2
}

signals.append('WW')

#samples['ggWW'] = {
#    'name': nanoGetSampleFiles(mcDirectory, 'GluGluWWTo2L2Nu_MCFM'),
#    'weight': mcCommonWeight+'*1.53/1.4', # updating k-factor
#    'FilesPerJob': 4
#}
#signals.append('ggWW')


### Now bin in (fiducial / nonfiducial) x {njets}

for sname in signals:
  sample = samples[sname]
  sample['subsamples'] = {}

  for flabel, fidcut in [('fid', fiducial), ('nonfid', '!('+fiducial+')')]:
    for nj in njetBinning:
      if nj.endswith('+'):
        binName = '%s_NJ_GE%s' % (flabel, nj[:-1])
        cut = '%s && %s >= %s' % (fidcut, ngenjet, nj[:-1])
      else:
        binName = '%s_NJ_%s' % (flabel, nj)
        cut = '%s && %s == %s' % (fidcut, ngenjet, nj)
      sample['subsamples'][binName] = cut

