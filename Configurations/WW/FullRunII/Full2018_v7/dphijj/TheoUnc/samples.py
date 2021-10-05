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

mcProduction = 'Autumn18_102X_nAODv7_Full2018v7'

mcSteps = 'MCl1loose2018v7__MCCorr2018v7'

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

###### DY #######

files = nanoGetSampleFiles(mcDirectory, 'DYJetsToTT_MuEle_M-50') + \
        nanoGetSampleFiles(mcDirectory, 'DYJetsToLL_M-10to50-LO')+ \
        nanoGetSampleFiles(mcDirectory, 'DYJetsToLL_M-10to50-LO_ext1')

samples['DY'] = {
    'name': files,
    'weight': mcCommonWeight+ '*( !(Sum$(PhotonGen_isPrompt==1 && PhotonGen_pt>15 && abs(PhotonGen_eta)<2.6) > 0 &&\
                                     Sum$(LeptonGen_isPrompt==1 && LeptonGen_pt>15)>=2) )',
    'FilesPerJob': 6,
}

DYbaseW = getBaseWnAOD(mcDirectory, mcProduction, ['DYJetsToLL_M-10to50-LO', 'DYJetsToLL_M-10to50-LO_ext1'])

addSampleWeight(samples,'DY','DYJetsToLL_M-10to50-LO',     DYbaseW+'/baseW')
addSampleWeight(samples,'DY','DYJetsToLL_M-10to50-LO_ext1',DYbaseW+'/baseW')

###### Top #######

files = nanoGetSampleFiles(mcDirectory, 'TTTo2L2Nu') + \
    nanoGetSampleFiles(mcDirectory, 'ST_s-channel_ext1') + \
    nanoGetSampleFiles(mcDirectory, 'ST_t-channel_antitop') + \
    nanoGetSampleFiles(mcDirectory, 'ST_t-channel_top') + \
    nanoGetSampleFiles(mcDirectory, 'ST_tW_antitop_ext1') + \
    nanoGetSampleFiles(mcDirectory, 'ST_tW_top_ext1')

samples['top'] = {
    'name': files,
    'weight': mcCommonWeight,
    'FilesPerJob': 2,
}

###### WWewk ########

samples['WWewk'] = {
    'name': nanoGetSampleFiles(mcDirectory, 'WpWmJJ_EWK_noTop'),
    'weight': mcCommonWeight+ '*(Sum$(abs(GenPart_pdgId)==6 || GenPart_pdgId==25)==0)', #filter tops and Higgs
    'FilesPerJob': 4
}

######## Wg ########

samples['Wg'] = {
    'name': nanoGetSampleFiles(mcDirectory, 'Wg_MADGRAPHMLM'),
    'weight': mcCommonWeight+'*(Gen_ZGstar_mass <= 0)',
    'FilesPerJob': 4
}

######## Zg ########

samples['Zg'] = {
    'name': nanoGetSampleFiles(mcDirectory, 'ZGToLLG'),
    'weight': mcCommonWeight+'*(Gen_ZGstar_mass <= 0)',
    'FilesPerJob': 4
}

######## ZgS ########
files = nanoGetSampleFiles(mcDirectory, 'ZGToLLG')

samples['ZgS'] = {
    'name': files,
    'weight': mcCommonWeight,
    'FilesPerJob': 4,
    }
addSampleWeight(samples, 'ZgS', 'ZGToLLG', '(Gen_ZGstar_mass > 0)')

######## WgS ########

files = nanoGetSampleFiles(mcDirectory, 'Wg_MADGRAPHMLM') + \
    nanoGetSampleFiles(mcDirectory, 'WZTo3LNu_mllmin01')

samples['WgS'] = {
    'name': files,
    'weight': mcCommonWeight + ' * (gstarLow * 0.94)',
    'FilesPerJob': 4,
}
addSampleWeight(samples, 'WgS', 'Wg_MADGRAPHMLM', '(Gen_ZGstar_mass > 0 && Gen_ZGstar_mass < 0.1)')
addSampleWeight(samples, 'WgS', 'WZTo3LNu_mllmin01', '(Gen_ZGstar_mass > 0.1)')

######## WZ ########

files = nanoGetSampleFiles(mcDirectory, 'WZTo3LNu_mllmin01') + \
    nanoGetSampleFiles(mcDirectory, 'WZTo2L2Q')

samples['WZ'] = {
    'name': files,
    'weight': mcCommonWeight + ' * (gstarHigh)',
    'FilesPerJob': 4,
}

############ ZZ ############

files = nanoGetSampleFiles(mcDirectory, 'ZZTo2L2Nu_ext1') + \
        nanoGetSampleFiles(mcDirectory, 'ZZTo2L2Nu_ext2') + \
    nanoGetSampleFiles(mcDirectory, 'ZZTo2L2Q') + \
    nanoGetSampleFiles(mcDirectory, 'ZZTo4L_ext1') + \
    nanoGetSampleFiles(mcDirectory, 'ZZTo4L_ext2')

samples['ZZ'] = {
    'name': files,
    'weight': mcCommonWeight,
    'FilesPerJob': 4
}

ZZ2LbaseW = getBaseWnAOD(mcDirectory, mcProduction, ['ZZTo2L2Nu_ext1', 'ZZTo2L2Nu_ext2'])
ZZ4LbaseW = getBaseWnAOD(mcDirectory, mcProduction, ['ZZTo4L_ext1',    'ZZTo4L_ext2'])

addSampleWeight(samples,'ZZ','ZZTo2L2Nu_ext1',ZZ2LbaseW+'/baseW')
addSampleWeight(samples,'ZZ','ZZTo2L2Nu_ext2',ZZ2LbaseW+'/baseW')
addSampleWeight(samples,'ZZ','ZZTo4L_ext1',   ZZ4LbaseW+'/baseW')
addSampleWeight(samples,'ZZ','ZZTo4L_ext2',   ZZ4LbaseW+'/baseW')

########## VVV #########

files = nanoGetSampleFiles(mcDirectory, 'ZZZ') + \
    nanoGetSampleFiles(mcDirectory, 'WZZ') + \
    nanoGetSampleFiles(mcDirectory, 'WWZ') + \
    nanoGetSampleFiles(mcDirectory, 'WWW')

samples['VVV'] = {
    'name': files,
    'weight': mcCommonWeight,
    'FilesPerJob': 4
}

#### ggH -> WW

samples['ggH_hww'] = {
    'name': nanoGetSampleFiles(mcDirectory, 'GluGluHToWWTo2L2Nu_M125'),
    'weight': mcCommonWeight,
    'FilesPerJob': 1,
}

############ VBF H->WW ############
samples['qqH_hww'] = {
    'name': nanoGetSampleFiles(mcDirectory, 'VBFHToWWTo2L2Nu_M125'),
    'weight': mcCommonWeight,
    'FilesPerJob': 4
}

############ ZH H->WW ############

samples['ZH_hww'] = {
    'name':   nanoGetSampleFiles(mcDirectory, 'HZJ_HToWW_M125'),
    'weight': mcCommonWeight,
    'FilesPerJob': 4
}

samples['ggZH_hww'] = {
    'name':   nanoGetSampleFiles(mcDirectory, 'GluGluZH_HToWWTo2L2Nu_M125'),
    'weight': mcCommonWeight,
    'FilesPerJob': 4
}

############ WH H->WW ############

samples['WH_hww'] = {
    'name':   nanoGetSampleFiles(mcDirectory, 'HWplusJ_HToWW_M125') + nanoGetSampleFiles(mcDirectory, 'HWminusJ_HToWW_M125'),
    'weight': mcCommonWeight,
    'FilesPerJob': 4
}

############ ttH ############

samples['ttH_hww'] = {
    'name':   nanoGetSampleFiles(mcDirectory, 'ttHToNonbb_M125'),
    'weight': mcCommonWeight,
    'FilesPerJob': 1
}

############ H->TauTau ############

samples['ggH_htt'] = {
    'name': nanoGetSampleFiles(mcDirectory, 'GluGluHToTauTau_M125'),
    'weight': mcCommonWeight,
    'FilesPerJob': 20
}


samples['qqH_htt'] = {
    'name': nanoGetSampleFiles(mcDirectory, 'VBFHToTauTau_M125'),
    'weight': mcCommonWeight,
    'FilesPerJob': 10
}


samples['ZH_htt'] = {
    'name': nanoGetSampleFiles(mcDirectory, 'HZJ_HToTauTau_M125'),
    'weight': mcCommonWeight,
    'FilesPerJob': 4
}

samples['WH_htt'] = {
    'name':  nanoGetSampleFiles(mcDirectory, 'HWplusJ_HToTauTau_M125') + nanoGetSampleFiles(mcDirectory, 'HWminusJ_HToTauTau_M125'),
    'weight': mcCommonWeight,
    'FilesPerJob': 4
}

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

###### ggWW ########

samples['ggWW'] = {
    'name': nanoGetSampleFiles(mcDirectory, 'GluGluToWWToENEN') + \
            nanoGetSampleFiles(mcDirectory, 'GluGluToWWToENMN') + \
            nanoGetSampleFiles(mcDirectory, 'GluGluToWWToENTN') + \
            nanoGetSampleFiles(mcDirectory, 'GluGluToWWToMNEN') + \
            nanoGetSampleFiles(mcDirectory, 'GluGluToWWToMNMN') + \
            nanoGetSampleFiles(mcDirectory, 'GluGluToWWToMNTN') + \
            nanoGetSampleFiles(mcDirectory, 'GluGluToWWToTNEN') + \
            nanoGetSampleFiles(mcDirectory, 'GluGluToWWToTNMN') + \
            nanoGetSampleFiles(mcDirectory, 'GluGluToWWToTNTN'),
    'weight': mcCommonWeight+'*1.53/1.4',
    'FilesPerJob': 4
}

signals.append('ggWW')

### Now bin in (fiducial / nonfiducial) x {njets}

for sname in signals:
  sample = samples[sname]
  sample['subsamples'] = {}

  sample['subsamples']['nonfid'] = '!('+fiducial+')'

  for binname,bincut in gen_binning.iteritems():
      sample['subsamples'][binname] = fiducial+' && '+bincut
