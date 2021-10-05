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

mcCommonWeight = 'XSWeight'

###########################################
#############   SIGNALS  ##################
###########################################

gen_binning = {
'B0'  : 'dphijjsigngen >= 0.0       && dphijjsigngen < 1./7.*pi',
'B1'  : 'dphijjsigngen >= 1./7.*pi  && dphijjsigngen < 2./7.*pi',
'B2'  : 'dphijjsigngen >= 2./7.*pi  && dphijjsigngen < 3./7.*pi',
'B3'  : 'dphijjsigngen >= 3./7.*pi  && dphijjsigngen < 4./7.*pi',
'B4'  : 'dphijjsigngen >= 4./7.*pi  && dphijjsigngen < 5./7.*pi',
'B5'  : 'dphijjsigngen >= 5./7.*pi  && dphijjsigngen < 6./7.*pi',
'B6'  : 'dphijjsigngen >= 6./7.*pi  && dphijjsigngen < pi',
'B7'  : 'dphijjsigngen >= pi        && dphijjsigngen < 8./7.*pi',
'B8'  : 'dphijjsigngen >= 8./7.*pi  && dphijjsigngen < 9./7.*pi',
'B9'  : 'dphijjsigngen >= 9./7.*pi  && dphijjsigngen < 10./7.*pi',
'B10' : 'dphijjsigngen >= 10./7.*pi && dphijjsigngen < 11./7.*pi',
'B11' : 'dphijjsigngen >= 11./7.*pi && dphijjsigngen < 12./7.*pi',
'B12' : 'dphijjsigngen >= 12./7.*pi && dphijjsigngen < 13./7.*pi',
'B13' : 'dphijjsigngen >= 13./7.*pi && dphijjsigngen < 2.*pi'
}

fiducial = 'fiducial && nGoodGenJet >= 2'

signals = []

###### WW ########

samples['WW'] = {
    'name': nanoGetSampleFiles(mcDirectory, 'WWTo2L2Nu'),
    'weight': mcCommonWeight+'*nllW',
    'FilesPerJob': 2
}

signals.append('WW')

### Add if weights become available for theo unc.
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

  sample['subsamples']['nonfid'] = '!('+fiducial+')'

  for binname,bincut in gen_binning.iteritems():
      sample['subsamples'][binname] = fiducial+' && '+bincut
