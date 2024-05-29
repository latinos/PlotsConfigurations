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

mcProduction = 'Summer20UL18_106x_nAODv9_Full2018v9'

mcSteps = 'MCl1loose2018v9__MCCorr2018v9NoJERInHorn__l2tightOR2018v9'

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

mcDirectory = makeMCDirectory()

#########################################
############ MC COMMON ##################
#########################################

# SFweight does not include btag weights
mcCommonWeightNoMatch = 'XSWeight*METFilter_MC*SFweight'
mcCommonWeight = 'XSWeight*METFilter_MC*PromptGenLepMatch2l*SFweight'

##########################################
#############  BACKGROUNDS  ###############
###########################################

###### DY #######

files = nanoGetSampleFiles(mcDirectory, 'DYJetsToTT_MuEle_M-50') + \
        nanoGetSampleFiles(mcDirectory, 'DYJetsToLL_M-10to50-LO')

samples['DY'] = {
    'name': files,
    'weight': mcCommonWeight+ '*( !(Sum$(PhotonGen_isPrompt==1 && PhotonGen_pt>15 && abs(PhotonGen_eta)<2.6) > 0 &&\
                                     Sum$(LeptonGen_isPrompt==1 && LeptonGen_pt>15)>=2) )',
    'FilesPerJob': 8,
}
addSampleWeight(samples,'DY','DYJetsToTT_MuEle_M-50',       'DY_NLO_pTllrw')
addSampleWeight(samples,'DY','DYJetsToLL_M-10to50-LO','DY_LO_pTllrw')


###### Top #######
    
files = nanoGetSampleFiles(mcDirectory, 'TTTo2L2Nu') + \
    nanoGetSampleFiles(mcDirectory, 'ST_t-channel_antitop') + \
    nanoGetSampleFiles(mcDirectory, 'ST_t-channel_top') + \
    nanoGetSampleFiles(mcDirectory, 'ST_tW_top') + \
    nanoGetSampleFiles(mcDirectory, 'ST_tW_antitop') + \
    nanoGetSampleFiles(mcDirectory, 'ST_s-channel')

samples['top'] = {
    'name': files, 
    'weight': mcCommonWeight,
    'FilesPerJob': 8,
}
    
addSampleWeight(samples,'top','TTTo2L2Nu','Top_pTrw')


###### WWewk ########

samples['WWewk'] = {
    'name': nanoGetSampleFiles(mcDirectory, 'WpWmJJ_EWK_noTop'),
    'weight': mcCommonWeight+ '*(Sum$(abs(GenPart_pdgId)==6 || GenPart_pdgId==25)==0)', #filter tops and Higgs
    'FilesPerJob': 8
}

######## Vg ########

files =  nanoGetSampleFiles(mcDirectory, 'Wg_AMCNLOFXFX_01J') + \
         nanoGetSampleFiles(mcDirectory, 'WZTo3LNu_mllmin0p1') + \
         nanoGetSampleFiles(mcDirectory, 'ZGToLLG')

samples['Vg'] = {
    'name': files,
    'weight': mcCommonWeightNoMatch+'*((Gen_ZGstar_mass>0)*PromptGenLepMatch2l + Gen_ZGstar_mass<=0)',
    'FilesPerJob': 8
}

addSampleWeight(samples,'Vg','Wg_AMCNLOFXFX_01J', 'gstarLow*0.94*(Gen_ZGstar_mass < 0.1)')
addSampleWeight(samples,'Vg','WZTo3LNu_mllmin0p1','gstarLow*0.94*(Gen_ZGstar_mass > 0.1)*1.138*0.601644*58.59/4.666')

######## WZ ########

files = nanoGetSampleFiles(mcDirectory, 'WZTo3LNu_mllmin0p1') + \
        nanoGetSampleFiles(mcDirectory, 'WZTo2Q2L_mllmin4p0')

samples['WZ'] = {
    'name': files,
    'weight': mcCommonWeight + ' * (gstarHigh)',
    'FilesPerJob': 8,
}

addSampleWeight(samples,'WZ','WZTo3LNu_mllmin0p1','1.138*0.601644*58.59/4.666')

############ ZZ ############

files = nanoGetSampleFiles(mcDirectory, 'ZZTo2L2Nu') + \
        nanoGetSampleFiles(mcDirectory, 'ZZTo2Q2L_mllmin4p0') + \
    nanoGetSampleFiles(mcDirectory, 'ZZTo4L')

samples['ZZ'] = {
    'name': files,
    'weight': mcCommonWeight,
    'FilesPerJob': 8
}

########## VVV #########

files = nanoGetSampleFiles(mcDirectory, 'ZZZ') + \
    nanoGetSampleFiles(mcDirectory, 'WZZ') + \
    nanoGetSampleFiles(mcDirectory, 'WWZ') + \
    nanoGetSampleFiles(mcDirectory, 'WWW')

samples['VVV'] = {
    'name': files,
    'weight': mcCommonWeight,
    'FilesPerJob': 8
}

########### Higgs ###########

files = nanoGetSampleFiles(mcDirectory, 'GluGluHToWWTo2L2Nu_M125') + \
        nanoGetSampleFiles(mcDirectory, 'VBFHToWWTo2L2Nu_M125') + \
        nanoGetSampleFiles(mcDirectory, 'HZJ_HToWW_M125') + \
        nanoGetSampleFiles(mcDirectory, 'GluGluZH_HToWWTo2L2Nu_M125') + \
        nanoGetSampleFiles(mcDirectory, 'HWplusJ_HToWW_M125') + nanoGetSampleFiles(mcDirectory, 'HWminusJ_HToWW_M125') + \
        nanoGetSampleFiles(mcDirectory, 'ttHToNonbb_M125') + \
        nanoGetSampleFiles(mcDirectory, 'GluGluHToTauTau_M125') + \
        nanoGetSampleFiles(mcDirectory, 'VBFHToTauTau_M125') + \
        nanoGetSampleFiles(mcDirectory, 'ZHToTauTau_M125') + \
        nanoGetSampleFiles(mcDirectory, 'WplusHToTauTau_M125') + nanoGetSampleFiles(mcDirectory, 'WminusHToTauTau_M125')

samples['Higgs'] = {
    'name' : files,
    'weight': mcCommonWeight,
    'FilesPerJob': 10
}


###########################################
#############   SIGNALS  ##################
###########################################

###### WW ########

samples['WW_minnlo'] = {
    'name': nanoGetSampleFiles(mcDirectory, 'WWJTo2L2Nu_minnlo'),
    'weight': mcCommonWeight,
    'FilesPerJob': 7,
    'suppressNegative' :['all'],
    'suppressNegativeNuisances' :['all']
}

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
    'FilesPerJob': 8
}

