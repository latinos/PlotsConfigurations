import os
import inspect

configurations = os.path.realpath(inspect.getfile(inspect.currentframe())) # this file
configurations = os.path.dirname(configurations) # ggH2016
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

#mcProduction = 'Summer16_102X_nAODv4_Full2016v5'
# mcProduction = 'Summer16_102X_nAODv5_SigOnly_Full2016v5'
mcProduction = 'Summer16_102X_nAODv4_Full2016v5'
mcProductionSigOnly = 'Summer16_102X_nAODv5_SigOnly_Full2016v5'

mcSteps = 'MCl1loose2016v5__MCCorr2016v5__l2loose__l2tightOR2016v5'

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
mcSigOnlyDirectory = os.path.join(treeBaseDir, mcProductionSigOnly, mcSteps.format(var=''))

#########################################
############ MC COMMON ##################
#########################################

# SFweight does not include btag weights
mcCommonWeightNoMatch = 'XSWeight*SFweight*METFilter_MC'
mcCommonWeight = 'XSWeight*SFweight*PromptGenLepMatch3l*METFilter_MC'

###########################################
#############  BACKGROUNDS  ###############
###########################################

###### DY #######

# ptllDYW_NLO = '(0.876979+gen_ptll*(4.11598e-03)-(2.35520e-05)*gen_ptll*gen_ptll)*(1.10211 * (0.958512 - 0.131835*TMath::Erf((gen_ptll-14.1972)/10.1525)))*(gen_ptll<140)+0.891188*(gen_ptll>=140)'
# ptllDYW_LO  = '(8.61313e-01+gen_ptll*4.46807e-03-1.52324e-05*gen_ptll*gen_ptll)*(1.08683 * (0.95 - 0.0657370*TMath::Erf((gen_ptll-11.)/5.51582)))*(gen_ptll<140)+1.141996*(gen_ptll>=140)'

# files = nanoGetSampleFiles(mcDirectory, 'DYJetsToLL_M-50-LO_ext1') + \
    # nanoGetSampleFiles(mcDirectory, 'DYJetsToLL_M-10to50-LO')

# samples['DY'] = {
    # 'name': files,
    # 'weight': mcCommonWeight + '*(Sum$(GenPart_pdgId == 22 && TMath::Odd(GenPart_statusFlags) && GenPart_pt > 20.) == 0)',
    # 'FilesPerJob': 4,
# }
# addSampleWeight(samples,'DY','DYJetsToLL_M-50-LO_ext1',ptllDYW_LO)
# addSampleWeight(samples,'DY','DYJetsToLL_M-10to50-LO',ptllDYW_LO)

ptllDYW_NLO = '(0.876979+gen_ptll*(4.11598e-03)-(2.35520e-05)*gen_ptll*gen_ptll)*(1.10211 * (0.958512 - 0.131835*TMath::Erf((gen_ptll-14.1972)/10.1525)))*(gen_ptll<140)+0.891188*(gen_ptll>=140)'
ptllDYW_LO  = '(8.61313e-01+gen_ptll*4.46807e-03-1.52324e-05*gen_ptll*gen_ptll)*(1.08683 * (0.95 - 0.0657370*TMath::Erf((gen_ptll-11.)/5.51582)))*(gen_ptll<140)+1.141996*(gen_ptll>=140)'

samples['DY_1'] = {
    'name': nanoGetSampleFiles(mcDirectory, 'DYJetsToLL_M-50-LO_ext1'),
    'weight': mcCommonWeight + '*(Sum$(GenPart_pdgId == 22 && TMath::Odd(GenPart_statusFlags) && GenPart_pt > 20.) == 0)',
    'FilesPerJob': 4,
}

samples['DY_2'] = {
    'name': nanoGetSampleFiles(mcDirectory, 'DYJetsToLL_M-10to50-LO'),
    'weight': mcCommonWeight + '*(Sum$(GenPart_pdgId == 22 && TMath::Odd(GenPart_statusFlags) && GenPart_pt > 20.) == 0)',
    'FilesPerJob': 4,
}


addSampleWeight(samples,'DY_1','DYJetsToLL_M-50-LO_ext1',ptllDYW_LO)
addSampleWeight(samples,'DY_2','DYJetsToLL_M-10to50-LO',ptllDYW_LO)
###### Top #######

# files = nanoGetSampleFiles(mcDirectory, 'TTTo2L2Nu') + \
    # nanoGetSampleFiles(mcDirectory, 'ST_s-channel') + \
    # nanoGetSampleFiles(mcDirectory, 'ST_t-channel_antitop') + \
    # nanoGetSampleFiles(mcDirectory, 'ST_t-channel_top') + \
    # nanoGetSampleFiles(mcDirectory, 'ST_tW_antitop') + \
    # nanoGetSampleFiles(mcDirectory, 'ST_tW_top')

# samples['top'] = {
    # 'name': files,
    # 'weight': mcCommonWeight,
    # 'FilesPerJob': 1,
# }

# addSampleWeight(samples,'top','TTTo2L2Nu','Top_pTrw')

samples['top_1'] = {
    'name': nanoGetSampleFiles(mcDirectory, 'TTTo2L2Nu'),
    'weight': mcCommonWeight,
    'FilesPerJob': 1,
}
samples['top_2'] = {
    'name': nanoGetSampleFiles(mcDirectory, 'ST_s-channel'),
    'weight': mcCommonWeight,
    'FilesPerJob': 1,
}
samples['top_3'] = {
    'name': nanoGetSampleFiles(mcDirectory, 'ST_t-channel_antitop'),
    'weight': mcCommonWeight,
    'FilesPerJob': 1,
}
samples['top_4'] = {
    'name': nanoGetSampleFiles(mcDirectory, 'ST_t-channel_top'),
    'weight': mcCommonWeight,
    'FilesPerJob': 1,
}
samples['top_5'] = {
    'name': nanoGetSampleFiles(mcDirectory, 'ST_tW_antitop'),
    'weight': mcCommonWeight,
    'FilesPerJob': 1,
}
samples['top_6'] = {
    'name': nanoGetSampleFiles(mcDirectory, 'ST_tW_top'),
    'weight': mcCommonWeight,
    'FilesPerJob': 1,
}

# addSampleWeight(samples,'top_1','TTTo2L2Nu',Top_pTrw)

###### Fake ########


# files = nanoGetSampleFiles(mcDirectory, 'TTTo2L2Nu') + \
    # nanoGetSampleFiles(mcDirectory, 'TTToSemiLeptonic')

# samples['top'] = {
    # 'name': files,
    # 'weight': mcCommonWeight,
    # 'FilesPerJob' : 1,
# }

# files = nanoGetSampleFiles(mcDirectory, 'DYJetsToLL_M-50') + \
    # nanoGetSampleFiles(mcDirectory, 'DYJetsToLL_M-10to50-LO')

# samples['DY'] = {    
    # 'name': files,
    # 'weight': mcCommonWeight,
    # 'FilesPerJob' : 5,
# }

###### WW ########

samples['WW'] = {
    'name': nanoGetSampleFiles(mcDirectory, 'WWTo2L2Nu'),
    'weight': mcCommonWeight + '*nllWOTF', # temporary
    'FilesPerJob': 5
}

######## Vg ########

# files = nanoGetSampleFiles(mcDirectory, 'Wg_MADGRAPHMLM') + \
    # nanoGetSampleFiles(mcDirectory, 'Zg')

# samples['Vg'] = {
    # 'name': files,
    # 'weight': mcCommonWeightNoMatch + '*!(Gen_ZGstar_mass > 0)',
    # 'FilesPerJob': 4
# }

samples['Vg_1'] = {
    'name': nanoGetSampleFiles(mcDirectory, 'Wg_MADGRAPHMLM'),
    'weight': mcCommonWeightNoMatch + '*!(Gen_ZGstar_mass > 0)',
    'FilesPerJob': 4
}
samples['Vg_2'] = {
    'name': nanoGetSampleFiles(mcDirectory, 'Zg'),
    'weight': mcCommonWeightNoMatch + '*!(Gen_ZGstar_mass > 0)',
    'FilesPerJob': 4
}

######## VgS ########

# files = nanoGetSampleFiles(mcDirectory, 'Wg_MADGRAPHMLM') + \
    # nanoGetSampleFiles(mcDirectory, 'Zg')

# samples['VgS'] = {
    # 'name': files,
    # 'weight': mcCommonWeight,
    # 'FilesPerJob': 4,
# }
# addSampleWeight(samples, 'VgS', 'Wg_MADGRAPHMLM', '(Gen_ZGstar_mass > 0 && Gen_ZGstar_mass < 0.1)')
# addSampleWeight(samples, 'VgS', 'Zg', '(Gen_ZGstar_mass > 0 && Gen_ZGstar_MomId == 22)*(Sum$(GenPart_pdgId == 22 && TMath::Odd(GenPart_statusFlags) && GenPart_pt < 20.) == 0)')

samples['VgS_1'] = {
    'name': nanoGetSampleFiles(mcDirectory, 'Wg_MADGRAPHMLM'),
    'weight': mcCommonWeight,
    'FilesPerJob': 4,
}
samples['VgS_2'] = {
    'name': nanoGetSampleFiles(mcDirectory, 'Zg'),
    'weight': mcCommonWeight,
    'FilesPerJob': 4,
}
addSampleWeight(samples, 'VgS_1', 'Wg_MADGRAPHMLM', '(Gen_ZGstar_mass > 0 && Gen_ZGstar_mass < 0.1)')
addSampleWeight(samples, 'VgS_2', 'Zg', '(Gen_ZGstar_mass > 0 && Gen_ZGstar_MomId == 22)*(Sum$(GenPart_pdgId == 22 && TMath::Odd(GenPart_statusFlags) && GenPart_pt < 20.) == 0)')

############ ZZ ############

samples['ZZ'] = {
    'name': nanoGetSampleFiles(mcDirectory,'ZZTo4L'),
    'weight': mcCommonWeight,
    'FilesPerJob' : 5,
}

############ WZ ############

samples['WZ'] = {
    'name': nanoGetSampleFiles(mcDirectory,'WZTo3LNu'),
    'weight': mcCommonWeight,
    'FilesPerJob' : 5,
}
addSampleWeight(samples,'WZ','WZTo3LNu', '(Gen_ZGstar_mass>=0.1)')

# samples['WZ'] = {
    # 'name': nanoGetSampleFiles(mcDirectory,'WZTo3LNu_mllmin01'),
    # 'weight': mcCommonWeight,
    # 'FilesPerJob' : 5,
# }
# addSampleWeight(samples,'WZ','WZTo3LNu_mllmin01', '(Gen_ZGstar_mass>=0.1)')

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

###########################################
#############   SIGNALS  ##################
###########################################

signals = []

############ WH H->WW ############

# files = nanoGetSampleFiles(mcDirectory, 'HWminusJ_HToWW_LNu_M120') + \
        # nanoGetSampleFiles(mcDirectory, 'HWminusJ_HToWW_LNu_M130') + \
        # nanoGetSampleFiles(mcDirectory, 'HWplusJ_HToWW_LNu_M120') + \
        # nanoGetSampleFiles(mcDirectory, 'HWplusJ_HToWW_LNu_M130')
# samples['WH_hww'] = {
    # 'name': files,
    # 'weight': mcCommonWeight,
    # 'FilesPerJob': 4
# }

# signals.append('WH_hww')

samples['WH_hww_1'] = {
    'name':  nanoGetSampleFiles(mcDirectory, 'HWminusJ_HToWW_LNu_M120'),
    # 'name':  nanoGetSampleFiles(mcDirectory, 'HWplusJ_HToWW_M125'),
    'weight': mcCommonWeight,
    'FilesPerJob': 4
}

signals.append('WH_hww_1')
samples['WH_hww_2'] = {
    'name': nanoGetSampleFiles(mcDirectory, 'HWplusJ_HToWW_LNu_M120'),
    # 'name': nanoGetSampleFiles(mcDirectory, 'HWminusJ_HToWW_M125'),
    'weight': mcCommonWeight,
    'FilesPerJob': 4
}

signals.append('WH_hww_2')

############ H->TauTau ############

# samples['WH_htt'] = {
    # 'name':  nanoGetSampleFiles(mcDirectory, 'HWplusJ_HToTauTau_M125') + nanoGetSampleFiles(mcDirectory, 'HWminusJ_HToTauTau_M125'),
    # 'weight': mcCommonWeight,
    # 'FilesPerJob': 4
# }
# signals.append('WH_htt')
samples['WH_htt_1'] = {
    'name':  nanoGetSampleFiles(mcDirectory, 'HWplusJ_HToTauTau_M125'),
    'weight': mcCommonWeight,
    'FilesPerJob': 4
}
signals.append('WH_htt_1')
samples['WH_htt_2'] = {
    'name':  nanoGetSampleFiles(mcDirectory, 'HWminusJ_HToTauTau_M125'),
    'weight': mcCommonWeight,
    'FilesPerJob': 4
}
signals.append('WH_htt_2')

############ WH H->WW ############

# samples['WH_hww'] = {
    # 'name':   nanoGetSampleFiles(mcDirectory, 'HWplusJ_HToWW_M125') + nanoGetSampleFiles(mcDirectory, 'HWminusJ_HToWW_M125'),
    # 'weight': mcCommonWeight,
    # 'FilesPerJob': 4
# }

# signals.append('WH_hww')

# ############ H->TauTau ############

# samples['WH_htt'] = {
    # 'name':  nanoGetSampleFiles(mcDirectory, 'HWplusJ_HToTauTau_M125') + nanoGetSampleFiles(mcDirectory, 'HWminusJ_HToTauTau_M125'),
    # 'weight': mcCommonWeight,
    # 'FilesPerJob': 4
# }
# signals.append('WH_htt')

