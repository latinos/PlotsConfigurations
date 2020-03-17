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

mcProduction = 'Fall2017_102X_nAODv4_Full2017v5'
mcProductionSigOnly = 'Fall2017_102X_nAODv5_SigOnly_Full2017v5'

mcSteps = 'MCl1loose2017v5__MCCorr2017v5__l2loose__l2tightOR2017v5'

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

ptllDYW_NLO = '(((0.623108 + 0.0722934*gen_ptll - 0.00364918*gen_ptll*gen_ptll + 6.97227e-05*gen_ptll*gen_ptll*gen_ptll - 4.52903e-07*gen_ptll*gen_ptll*gen_ptll*gen_ptll)*(gen_ptll<45)*(gen_ptll>0) + 1*(gen_ptll>=45))*(abs(gen_mll-90)<3) + (abs(gen_mll-90)>3))'
ptllDYW_LO = '((0.632927+0.0456956*gen_ptll-0.00154485*gen_ptll*gen_ptll+2.64397e-05*gen_ptll*gen_ptll*gen_ptll-2.19374e-07*gen_ptll*gen_ptll*gen_ptll*gen_ptll+6.99751e-10*gen_ptll*gen_ptll*gen_ptll*gen_ptll*gen_ptll)*(gen_ptll>0)*(gen_ptll<100)+(1.41713-0.00165342*gen_ptll)*(gen_ptll>=100)*(gen_ptll<300)+1*(gen_ptll>=300))'

# files = nanoGetSampleFiles(mcDirectory, 'DYJetsToLL_M-50_ext1') + \
        # nanoGetSampleFiles(mcDirectory, 'DYJetsToLL_M-10to50-LO_ext1')

# samples['DY'] = {
    # 'name': files,
    # 'weight': mcCommonWeight + '*(Sum$(GenPart_pdgId == 22 && TMath::Odd(GenPart_statusFlags) && GenPart_pt > 20.) == 0)',
    # 'FilesPerJob': 5,
# }
# addSampleWeight(samples,'DY','DYJetsToLL_M-50_ext1',    ptllDYW_NLO)
# addSampleWeight(samples,'DY','DYJetsToLL_M-10to50-LO_ext1',    ptllDYW_LO)

samples['DY_1'] = {
    'name': nanoGetSampleFiles(mcDirectory, 'DYJetsToLL_M-50_ext1'),
    'weight': mcCommonWeight + '*(Sum$(GenPart_pdgId == 22 && TMath::Odd(GenPart_statusFlags) && GenPart_pt > 20.) == 0)',
    'FilesPerJob': 4,
}

samples['DY_2'] = {
    'name': nanoGetSampleFiles(mcDirectory, 'DYJetsToLL_M-10to50-LO_ext1'),
    'weight': mcCommonWeight + '*(Sum$(GenPart_pdgId == 22 && TMath::Odd(GenPart_statusFlags) && GenPart_pt > 20.) == 0)',
    'FilesPerJob': 4,
}

addSampleWeight(samples,'DY_1','DYJetsToLL_M-50_ext1',    ptllDYW_NLO)
addSampleWeight(samples,'DY_2','DYJetsToLL_M-10to50-LO_ext1',    ptllDYW_LO)



############ Top ############

# Top_pTrw = '(TMath::Sqrt( TMath::Exp(0.0615-0.0005*topGenPt) * TMath::Exp(0.0615-0.0005*antitopGenPt) ) )'
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

# addSampleWeight(samples,'top','TTTo2L2Nu',Top_pTrw)

Top_pTrw = '(TMath::Sqrt( TMath::Exp(0.0615-0.0005*topGenPt) * TMath::Exp(0.0615-0.0005*antitopGenPt) ) )'
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

addSampleWeight(samples,'top_1','TTTo2L2Nu',Top_pTrw)

###### WW ########

samples['WW'] = {
    'name': nanoGetSampleFiles(mcDirectory, 'WWTo2L2Nu'),
    'weight': mcCommonWeight + '*nllWOTF', # temporary
    'FilesPerJob': 5
}

######## Vg ########

# files = nanoGetSampleFiles(mcDirectory, 'Wg_MADGRAPHMLM') + \
    # nanoGetSampleFiles(mcDirectory, 'ZGToLLG')

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
    'name': nanoGetSampleFiles(mcDirectory, 'ZGToLLG'),
    'weight': mcCommonWeightNoMatch + '*!(Gen_ZGstar_mass > 0)',
    'FilesPerJob': 4
}

######## VgS ########

# files = nanoGetSampleFiles(mcDirectory, 'Wg_MADGRAPHMLM') + \
    # nanoGetSampleFiles(mcDirectory, 'ZGToLLG')

# samples['VgS'] = {
    # 'name': files,
    # 'weight': mcCommonWeight,
    # 'FilesPerJob': 4,
# }

samples['VgS_1'] = {
    'name': nanoGetSampleFiles(mcDirectory, 'Wg_MADGRAPHMLM'),
    'weight': mcCommonWeight,
    'FilesPerJob': 4,
}
addSampleWeight(samples, 'VgS_1', 'Wg_MADGRAPHMLM', '(Gen_ZGstar_mass > 0 && Gen_ZGstar_mass < 0.1)')
samples['VgS_2'] = {
    'name': nanoGetSampleFiles(mcDirectory, 'ZGToLLG'),
    'weight': mcCommonWeight,
    'FilesPerJob': 4,
}
addSampleWeight(samples, 'VgS_2', 'ZGToLLG', '(Gen_ZGstar_mass > 0 && Gen_ZGstar_MomId == 22)*(Sum$(GenPart_pdgId == 22 && TMath::Odd(GenPart_statusFlags) && GenPart_pt < 20.) == 0)')

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

# samples['WH_hww'] = {
    # 'name':   nanoGetSampleFiles(mcDirectory, 'HWminusJ_HToWW_LNu_M125') + nanoGetSampleFiles(mcDirectory, 'HWplusJ_HToWW_LNu_M125'),
    # 'weight': mcCommonWeight,
    # 'FilesPerJob': 4
# }

# signals.append('WH_hww')

samples['WH_hww_1'] = {
    'name':  nanoGetSampleFiles(mcDirectory, 'HWplusJ_HToWW_LNu_M125'),
    'weight': mcCommonWeight,
    'FilesPerJob': 4
}

signals.append('WH_hww_1')
samples['WH_hww_2'] = {
    'name': nanoGetSampleFiles(mcDirectory, 'HWminusJ_HToWW_LNu_M125'),
    'weight': mcCommonWeight,
    'FilesPerJob': 4
}

signals.append('WH_hww_2')

############ WH H->WW ############

# samples['WH_hww'] = {
    # 'name':   nanoGetSampleFiles(mcDirectory, 'HWplusJ_HToWW_M125') + nanoGetSampleFiles(mcDirectory, 'HWminusJ_HToWW_M125'),
    # 'weight': mcCommonWeight,
    # 'FilesPerJob': 4
# }

# signals.append('WH_hww')

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

