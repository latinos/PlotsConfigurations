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

mcProduction = 'Autumn18_102X_nAODv5_Full2018v5'

mcSteps = 'MCl1loose2018v5__MCCorr2018v5__l2loose__l2tightOR2018v5'

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

# SFweight does not include btag weights
mcCommonWeightNoMatch = 'XSWeight*SFweight*METFilter_MC'
mcCommonWeight = 'XSWeight*SFweight*PromptGenLepMatch3l*METFilter_MC'

###########################################
#############  BACKGROUNDS  ###############
###########################################


###### DY #######

ptllDYW_NLO = '(0.87*(gen_ptll<10)+(0.379119+0.099744*gen_ptll-0.00487351*gen_ptll**2+9.19509e-05*gen_ptll**3-6.0212e-07*gen_ptll**4)*(gen_ptll>=10 && gen_ptll<45)+(9.12137e-01+1.11957e-04*gen_ptll-3.15325e-06*gen_ptll**2-4.29708e-09*gen_ptll**3+3.35791e-11*gen_ptll**4)*(gen_ptll>=45 && gen_ptll<200) + 1*(gen_ptll>200))'
ptllDYW_LO = '((0.632927+0.0456956*gen_ptll-0.00154485*gen_ptll*gen_ptll+2.64397e-05*gen_ptll*gen_ptll*gen_ptll-2.19374e-07*gen_ptll*gen_ptll*gen_ptll*gen_ptll+6.99751e-10*gen_ptll*gen_ptll*gen_ptll*gen_ptll*gen_ptll)*(gen_ptll>0)*(gen_ptll<100)+(1.41713-0.00165342*gen_ptll)*(gen_ptll>=100)*(gen_ptll<300)+1*(gen_ptll>=300))'


# files = nanoGetSampleFiles(mcDirectory, 'DYJetsToLL_M-50-LO') + \
        # nanoGetSampleFiles(mcDirectory, 'DYJetsToLL_M-10to50-LO')

# samples['DY'] = {
    # 'name': files,
    # 'weight': mcCommonWeight + '*(Sum$(GenPart_pdgId == 22 && TMath::Odd(GenPart_statusFlags) && GenPart_pt > 20.) == 0)',
    # 'FilesPerJob': 4,
# }
# addSampleWeight(samples,'DY','DYJetsToLL_M-50-LO_ext1',ptllDYW_LO)
# addSampleWeight(samples,'DY','DYJetsToLL_M-10to50-LO',ptllDYW_LO)



samples['DY_1'] = {
    'name': nanoGetSampleFiles(mcDirectory, 'DYJetsToLL_M-50-LO'),
    'weight': mcCommonWeight + '*(Sum$(GenPart_pdgId == 22 && TMath::Odd(GenPart_statusFlags) && GenPart_pt > 20.) == 0)',
    'FilesPerJob': 4,
}

samples['DY_2'] = {
    'name': nanoGetSampleFiles(mcDirectory, 'DYJetsToLL_M-10to50-LO'),
    'weight': mcCommonWeight + '*(Sum$(GenPart_pdgId == 22 && TMath::Odd(GenPart_statusFlags) && GenPart_pt > 20.) == 0)',
    'FilesPerJob': 4,
}

addSampleWeight(samples,'DY_1','DYJetsToLL_M-50-LO',ptllDYW_LO)
addSampleWeight(samples,'DY_2','DYJetsToLL_M-10to50-LO',ptllDYW_LO)



############ Top ############

# Top_pTrw = '(TMath::Sqrt( TMath::Exp(0.0615-0.0005*topGenPt) * TMath::Exp(0.0615-0.0005*antitopGenPt) ) )'

# files = nanoGetSampleFiles(mcDirectory, 'TTTo2L2Nu') + \
        # nanoGetSampleFiles(mcDirectory, 'ST_s-channel_ext1') + \
        # nanoGetSampleFiles(mcDirectory, 'ST_t-channel_antitop') + \
        # nanoGetSampleFiles(mcDirectory, 'ST_t-channel_top') + \
        # nanoGetSampleFiles(mcDirectory, 'ST_tW_antitop_ext1') + \
        # nanoGetSampleFiles(mcDirectory, 'ST_tW_top_ext1')

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
    'name': nanoGetSampleFiles(mcDirectory, 'ST_s-channel_ext1'),
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
    'name': nanoGetSampleFiles(mcDirectory, 'ST_tW_antitop_ext1'),
    'weight': mcCommonWeight,
    'FilesPerJob': 1,
}
samples['top_6'] = {
    'name': nanoGetSampleFiles(mcDirectory, 'ST_tW_top_ext1'),
    'weight': mcCommonWeight,
    'FilesPerJob': 1,
}

addSampleWeight(samples,'top_1','TTTo2L2Nu',Top_pTrw)

###### WW ########

samples['WW'] = {
    'name': nanoGetSampleFiles(mcDirectory, 'WWTo2L2Nu'),
    'weight': mcCommonWeight,
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
# addSampleWeight(samples, 'VgS', 'Wg_MADGRAPHMLM', '(Gen_ZGstar_mass > 0 && Gen_ZGstar_mass < 0.1)')
# addSampleWeight(samples, 'VgS', 'ZGToLLG', '(Gen_ZGstar_mass > 0 && Gen_ZGstar_MomId == 22)*(Sum$(GenPart_pdgId == 22 && TMath::Odd(GenPart_statusFlags) && GenPart_pt < 20.) == 0)')


samples['VgS_1'] = {
    'name': nanoGetSampleFiles(mcDirectory, 'Wg_MADGRAPHMLM'),
    'weight': mcCommonWeight,
    'FilesPerJob': 4,
}
samples['VgS_2'] = {
    'name': nanoGetSampleFiles(mcDirectory, 'ZGToLLG'),
    'weight': mcCommonWeight,
    'FilesPerJob': 4,
}
addSampleWeight(samples, 'VgS_1', 'Wg_MADGRAPHMLM', '(Gen_ZGstar_mass > 0 && Gen_ZGstar_mass < 0.1)')
addSampleWeight(samples, 'VgS_2', 'ZGToLLG', '(Gen_ZGstar_mass > 0 && Gen_ZGstar_MomId == 22)*(Sum$(GenPart_pdgId == 22 && TMath::Odd(GenPart_statusFlags) && GenPart_pt < 20.) == 0)')

############ ZZ ############

samples['ZZ'] = {
    'name': nanoGetSampleFiles(mcDirectory,'ZZTo4L_ext1'),
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
# files = nanoGetSampleFiles(mcDirectory, 'HWminusJ_HToWW_LNu_M125') + \
        # nanoGetSampleFiles(mcDirectory, 'HWplusJ_HToWW_LNu_M125')

# samples['WH_hww'] = {
    # 'name': files,
    # 'weight': mcCommonWeight,
    # 'FilesPerJob': 4
# }

# signals.append('WH_hww')

############ WH H->WW ############

# files = nanoGetSampleFiles(mcDirectory, 'HWminusJ_HToWW_M130')    + nanoGetSampleFiles(mcDirectory, 'HWminusJ_HToWW_M120')     + \
    # nanoGetSampleFiles(mcDirectory, 'HWplusJ_HToWW_M130')     + nanoGetSampleFiles(mcDirectory, 'HWplusJ_HToWW_M120')      + \
    # nanoGetSampleFiles(mcDirectory, 'HWplusJ_HToWW_M125')     + nanoGetSampleFiles(mcDirectory, 'HWminusJ_HToWW_M125')     + \
    # nanoGetSampleFiles(mcDirectory, 'HWplusJ_HToWW_LNu_M130') + nanoGetSampleFiles(mcDirectory, 'HWminusJ_HToWW_LNu_M130') + \
    # nanoGetSampleFiles(mcDirectory, 'HWplusJ_HToWW_LNu_M120') + nanoGetSampleFiles(mcDirectory, 'HWminusJ_HToWW_LNu_M120') + \
    # nanoGetSampleFiles(mcDirectory, 'HWplusJ_HToWW_LNu_M125') + nanoGetSampleFiles(mcDirectory, 'HWminusJ_HToWW_LNu_M125')
# files = nanoGetSampleFiles(mcDirectory, 'HWplusJ_HToWW_LNu_M125') + nanoGetSampleFiles(mcDirectory, 'HWminusJ_HToWW_LNu_M125')
# files = nanoGetSampleFiles(mcDirectory, 'HWminusJ_HToWW_M125') # 47080
# files = nanoGetSampleFiles(mcDirectory, 'HWplusJ_HToWW_M125') # 1356
# files = nanoGetSampleFiles(mcDirectory, 'HWminusJ_HToWW_M120') # 279
# files = nanoGetSampleFiles(mcDirectory, 'HWplusJ_HToWW_M120') # 857 
# files = nanoGetSampleFiles(mcDirectory, 'HWminusJ_HToWW_M130') # 186
# files = nanoGetSampleFiles(mcDirectory, 'HWplusJ_HToWW_M130') # 8161 

# samples['WH_hww'] = {
    # 'name':  files,
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

############ H->TauTau ############
# files = nanoGetSampleFiles(mcDirectory, 'HWplusJ_HToTauTau_M125') + nanoGetSampleFiles(mcDirectory, 'HWminusJ_HToTauTau_M125')
# files = nanoGetSampleFiles(mcDirectory, 'HWplusJ_HToTauTau_M120') + nanoGetSampleFiles(mcDirectory, 'HWminusJ_HToTauTau_M120') + \
    # nanoGetSampleFiles(mcDirectory, 'HWplusJ_HToTauTau_M125') + nanoGetSampleFiles(mcDirectory, 'HWminusJ_HToTauTau_M125') + \
    # nanoGetSampleFiles(mcDirectory, 'HWplusJ_HToTauTau_M130') + nanoGetSampleFiles(mcDirectory, 'HWminusJ_HToTauTau_M130') 

# samples['WH_htt'] = {
    # 'name':  files,
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

