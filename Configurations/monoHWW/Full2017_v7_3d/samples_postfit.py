import os
import inspect

configurations = os.path.realpath(inspect.getfile(inspect.currentframe())) # this file
configurations = os.path.dirname(configurations) # Full2017_v6
configurations = os.path.dirname(configurations) # ggH 
configurations = os.path.dirname(configurations) # Configurations

from LatinoAnalysis.Tools.commonTools import getSampleFiles, getBaseW, addSampleWeight

def nanoGetSampleFiles(inputDir, sample):
    try:
        if _samples_noload:
            return [sample]
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

dataReco = 'Run2017_102X_nAODv7_Full2017v7'

fakeReco = 'Run2017_102X_nAODv7_Full2017v7'

mcProduction = 'Fall2017_102X_nAODv7_Full2017v7'

mcSteps = 'MCl1loose2017v7__MCCorr2017v7__l2loose__l2tightOR2017v7{var}'

fakeSteps = 'DATAl1loose2017v7__l2loose__fakeW'

dataSteps = 'DATAl1loose2017v7__l2loose__l2tightOR2017v7'

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
fakeDirectory = os.path.join(treeBaseDir, fakeReco, fakeSteps)
dataDirectory = os.path.join(treeBaseDir, dataReco, dataSteps)

signalDirectory = '/eos/user/r/rocio/MonoH/Fall2017_102X_nAODv7_Full2017v7/MCl1loose2017v7__MCCorr2017v7__l2loose__l2tightOR2017v7'

################################################
############ DATA DECLARATION ##################
################################################

DataRun = [
    ['B','Run2017B-02Apr2020-v1'],
    ['C','Run2017C-02Apr2020-v1'],
    ['D','Run2017D-02Apr2020-v1'],
    ['E','Run2017E-02Apr2020-v1'],
    ['F','Run2017F-02Apr2020-v1']
]

DataSets = ['MuonEG','SingleMuon','SingleElectron','DoubleMuon', 'DoubleEG']

DataTrig = {
    'MuonEG'         : ' Trigger_ElMu' ,
    'SingleMuon'     : '!Trigger_ElMu && Trigger_sngMu' ,
    'SingleElectron' : '!Trigger_ElMu && !Trigger_sngMu && Trigger_sngEl',
    'DoubleMuon'     : '!Trigger_ElMu && !Trigger_sngMu && !Trigger_sngEl && Trigger_dblMu',
    'DoubleEG'       : '!Trigger_ElMu && !Trigger_sngMu && !Trigger_sngEl && !Trigger_dblMu && Trigger_dblEl'
}

#########################################
############ MC COMMON ##################
#########################################

# SFweight does not include btag weights
mcCommonWeightNoMatch = 'XSWeight*SFweight*METFilter_MC'
mcCommonWeight = 'XSWeight*SFweight*PromptGenLepMatch2l*METFilter_MC'

###########################################
#############  BACKGROUNDS  ###############
###########################################

###### DY #######

useDYtt = True

#ptllDYW_NLO = '(((0.623108 + 0.0722934*gen_ptll - 0.00364918*gen_ptll*gen_ptll + 6.97227e-05*gen_ptll*gen_ptll*gen_ptll - 4.52903e-07*gen_ptll*gen_ptll*gen_ptll*gen_ptll)*(gen_ptll<45)*(gen_ptll>0) + 1*(gen_ptll>=45))*(abs(gen_mll-90)<3) + (abs(gen_mll-90)>3))'
#ptllDYW_LO = '((0.632927+0.0456956*gen_ptll-0.00154485*gen_ptll*gen_ptll+2.64397e-05*gen_ptll*gen_ptll*gen_ptll-2.19374e-07*gen_ptll*gen_ptll*gen_ptll*gen_ptll+6.99751e-10*gen_ptll*gen_ptll*gen_ptll*gen_ptll*gen_ptll)*(gen_ptll>0)*(gen_ptll<100)+(1.41713-0.00165342*gen_ptll)*(gen_ptll>=100)*(gen_ptll<300)+1*(gen_ptll>=300))'
"""
if useDYtt:
    files = nanoGetSampleFiles(mcDirectory, 'DYJetsToTT_MuEle_M-50') + \
        nanoGetSampleFiles(mcDirectory, 'DYJetsToLL_M-10to50-LO_ext1')

    samples['DY'] = {
        'name': files,
        'weight': mcCommonWeight + "*( !(Sum$(PhotonGen_isPrompt==1 && PhotonGen_pt>15 && abs(PhotonGen_eta)<2.6) > 0 &&\
                                         Sum$(LeptonGen_isPrompt==1 && LeptonGen_pt>15)>=2) )",
        'FilesPerJob': 5,
    }
#    addSampleWeight(samples,'DY','DYJetsToTT_MuEle_M-50','DY_NLO_pTllrw')
#    addSampleWeight(samples,'DY','DYJetsToLL_M-10to50-LO_ext1','DY_LO_pTllrw')

else:
    files = nanoGetSampleFiles(mcDirectory, 'DYJetsToLL_M-50_ext1') + \
        nanoGetSampleFiles(mcDirectory, 'DYJetsToLL_M-10to50-LO_ext1')
    
    samples['DY'] = {
        'name': files,
        'weight': mcCommonWeight + "*( !(Sum$(PhotonGen_isPrompt==1 && PhotonGen_pt>15 && abs(PhotonGen_eta)<2.6) > 0 &&\
                                         Sum$(LeptonGen_isPrompt==1 && LeptonGen_pt>15)>=2) )",
        'FilesPerJob': 8,
    }
    #addSampleWeight(samples,'DY','DYJetsToLL_M-50',ptllDYW_NLO)
    #addSampleWeight(samples,'DY','DYJetsToLL_M-10to50-LO',ptllDYW_LO)

"""


filesDYHT = nanoGetSampleFiles(mcDirectory, 'DYJetsToLL_M-10to50-LO_ext1') + \
nanoGetSampleFiles(mcDirectory, 'DYJetsToLL_M-4to50_HT-100to200_newpmx') + \
nanoGetSampleFiles(mcDirectory, 'DYJetsToLL_M-4to50_HT-200to400_newpmx') + \
nanoGetSampleFiles(mcDirectory, 'DYJetsToLL_M-4to50_HT-400to600') + \
nanoGetSampleFiles(mcDirectory, 'DYJetsToLL_M-4to50_HT-600toInf') + \
nanoGetSampleFiles(mcDirectory, 'DYJetsToTT_MuEle_M-50') + \
nanoGetSampleFiles(mcDirectory, 'DYJetsToLL_M-50_HT-100to200') + \
nanoGetSampleFiles(mcDirectory, 'DYJetsToLL_M-50_HT-200to400') + \
nanoGetSampleFiles(mcDirectory, 'DYJetsToLL_M-50_HT-400to600_newpmx') + \
nanoGetSampleFiles(mcDirectory, 'DYJetsToLL_M-50_HT-600to800') + \
nanoGetSampleFiles(mcDirectory, 'DYJetsToLL_M-50_HT-800to1200') + \
nanoGetSampleFiles(mcDirectory, 'DYJetsToLL_M-50_HT-1200to2500') + \
nanoGetSampleFiles(mcDirectory, 'DYJetsToLL_M-50_HT-2500toInf')

samples['DY'] = {
    'name': filesDYHT,
    'weight': mcCommonWeight + '*( !(Sum$(PhotonGen_isPrompt==1 && PhotonGen_pt>15 && abs(PhotonGen_eta)<2.6) > 0 && Sum$(LeptonGen_isPrompt==1 && LeptonGen_pt>15)>=2) )', 
    'suppressNegative':['all'],
    'suppressNegativeNuisances' :['all'],
    'FilesPerJob': 1,
}

addSampleWeight(samples,'DY','DYJetsToLL_M-10to50-LO_ext1',  'LHE_HT<100.0')
addSampleWeight(samples,'DY','DYJetsToTT_MuEle_M-50',  'LHE_HT<100.0')


###### Top #######

files = nanoGetSampleFiles(mcDirectory, 'TTTo2L2Nu_PSWeights') + \
    nanoGetSampleFiles(mcDirectory, 'ST_s-channel') + \
    nanoGetSampleFiles(mcDirectory, 'ST_t-channel_antitop') + \
    nanoGetSampleFiles(mcDirectory, 'ST_t-channel_top') + \
    nanoGetSampleFiles(mcDirectory, 'ST_tW_antitop') + \
    nanoGetSampleFiles(mcDirectory, 'ST_tW_top')

samples['top'] = {
    'name': files,
    'weight': mcCommonWeight,
    'suppressNegative':['all'],
    'suppressNegativeNuisances' :['all'],
    'FilesPerJob': 1,
}

addSampleWeight(samples,'top','TTTo2L2Nu_PSWeights','Top_pTrw')

###### WW ########

samples['WW'] = {
    'name': nanoGetSampleFiles(mcDirectory, 'WWTo2L2Nu'),
    'weight': mcCommonWeight + '*nllW',
    'suppressNegative':['all'],
    'suppressNegativeNuisances' :['all'],
    'FilesPerJob': 1
}

samples['WWewk'] = {
    'name': nanoGetSampleFiles(mcDirectory, 'WpWmJJ_EWK_noTop'),
    'weight': mcCommonWeight + '*(Sum$(abs(GenPart_pdgId)==6 || GenPart_pdgId==25)==0)', #filter tops and Higgs
    'suppressNegative':['all'],
    'suppressNegativeNuisances' :['all'],
    'FilesPerJob': 2
}

# k-factor 1.4 already taken into account in XSWeight
files = nanoGetSampleFiles(mcDirectory, 'GluGluToWWToENEN') + \
    nanoGetSampleFiles(mcDirectory, 'GluGluToWWToENMN') + \
    nanoGetSampleFiles(mcDirectory, 'GluGluToWWToENTN') + \
    nanoGetSampleFiles(mcDirectory, 'GluGluToWWToMNEN') + \
    nanoGetSampleFiles(mcDirectory, 'GluGluToWWToMNMN') + \
    nanoGetSampleFiles(mcDirectory, 'GluGluToWWToMNTN') + \
    nanoGetSampleFiles(mcDirectory, 'GluGluToWWToTNEN') + \
    nanoGetSampleFiles(mcDirectory, 'GluGluToWWToTNMN') + \
    nanoGetSampleFiles(mcDirectory, 'GluGluToWWToTNTN')

samples['ggWW'] = {
    'name': files,
    'weight': mcCommonWeight + '*1.53/1.4', # updating k-factor
    'suppressNegative':['all'],
    'suppressNegativeNuisances' :['all'],
    'FilesPerJob': 10
}

######## Vg ########

files = nanoGetSampleFiles(mcDirectory, 'Wg_MADGRAPHMLM') + \
    nanoGetSampleFiles(mcDirectory, 'ZGToLLG')

samples['Vg'] = {
    'name': files,
    'weight': mcCommonWeightNoMatch + '*!(Gen_ZGstar_mass > 0)',
    'suppressNegative':['all'],
    'suppressNegativeNuisances' :['all'],
    'FilesPerJob': 10
}

######## VgS ########

files = nanoGetSampleFiles(mcDirectory, 'Wg_MADGRAPHMLM') + \
    nanoGetSampleFiles(mcDirectory, 'ZGToLLG') + \
    nanoGetSampleFiles(mcDirectory, 'WZTo3LNu_mllmin01')

samples['VgS'] = {
    'name': files,
    'weight': mcCommonWeight + ' * (gstarLow * 0.94 + gstarHigh * 1.14)',
    'suppressNegative':['all'],
    'suppressNegativeNuisances' :['all'],
    'FilesPerJob': 4,
}


addSampleWeight(samples, 'VgS', 'Wg_MADGRAPHMLM', '(Gen_ZGstar_mass > 0 && Gen_ZGstar_mass < 0.1)')
addSampleWeight(samples, 'VgS', 'ZGToLLG', '(Gen_ZGstar_mass > 0)')
addSampleWeight(samples, 'VgS', 'WZTo3LNu_mllmin01', '(Gen_ZGstar_mass > 0.1)')

############ VZ ############

files = nanoGetSampleFiles(mcDirectory, 'ZZTo2L2Nu') + \
    nanoGetSampleFiles(mcDirectory, 'ZZTo2L2Q') + \
    nanoGetSampleFiles(mcDirectory, 'WZTo2L2Q')    
#nanoGetSampleFiles(mcDirectory, 'ZZTo4L') + \

samples['VZ'] = {
    'name': files,
    'weight': mcCommonWeight + '*1.11',
    'suppressNegative':['all'],
    'suppressNegativeNuisances' :['all'],
    'FilesPerJob': 2
}

########## VVV #########

files = nanoGetSampleFiles(mcDirectory, 'ZZZ') + \
    nanoGetSampleFiles(mcDirectory, 'WZZ') + \
    nanoGetSampleFiles(mcDirectory, 'WWZ') + \
    nanoGetSampleFiles(mcDirectory, 'WWW')
#+ nanoGetSampleFiles(mcDirectory, 'WWG'), #should this be included? or is it already taken into account in the WW sample?

samples['VVV'] = {
    'name': files,
    'weight': mcCommonWeight,
    'suppressNegative':['all'],
    'suppressNegativeNuisances' :['all'],
    'FilesPerJob': 3
}


########## Higgs #########

files =  nanoGetSampleFiles(mcDirectory, 'GluGluHToWWTo2L2Nu_M125') + \
         nanoGetSampleFiles(mcDirectory, 'VBFHToWWTo2L2Nu_M125') + \
         nanoGetSampleFiles(mcDirectory, 'HZJ_HToWWTo2L2Nu_M125') + \
         nanoGetSampleFiles(mcDirectory, 'GluGluZH_HToWWTo2L2Nu_M125') + \
         nanoGetSampleFiles(mcDirectory, 'HWplusJ_HToWW_M125') + \
         nanoGetSampleFiles(mcDirectory, 'HWminusJ_HToWW_M125') + \
         nanoGetSampleFiles(mcDirectory, 'ttHToNonbb_M125') + \
         nanoGetSampleFiles(mcDirectory, 'GluGluHToTauTau_M125_ext1') + \
         nanoGetSampleFiles(mcDirectory, 'VBFHToTauTau_M125') + \
         nanoGetSampleFiles(mcDirectory, 'HZJ_HToTauTau_M125') + \
         nanoGetSampleFiles(mcDirectory, 'HWplusJ_HToTauTau_M125') + \
         nanoGetSampleFiles(mcDirectory, 'HWminusJ_HToTauTau_M125')
         
samples['Higgs'] = {
    'name': files,
    'weight': mcCommonWeight,
    'suppressNegative':['all'],
    'suppressNegativeNuisances' :['all'],
    'FilesPerJob': 10,
}


# # ######### Signals ######### 

# REFERENCE

mhs = ['160']
mDM = ['100']
mZp = ['500']

for hs in mhs:
    for DM in mDM:
        for Zp in mZp:
            samples['DH_mhs_' + hs + '_mx_' + DM  + '_mZp_' + Zp] = {
                'name': nanoGetSampleFiles(signalDirectory, 'DarkHiggs_MonoHs_HsToWWTo2l2nu_mhs_' + hs + '_mx_' + DM  + '_mZp_' + Zp),
                'weight': mcCommonWeight,
    'suppressNegative':['all'],
    'suppressNegativeNuisances' :['all'],
                'FilesPerJob': 20
            }


# mhs = ['160','180','200']
# mDM = ['100','150','200']
# mZp = ['195','200','295','300','400','500','800','1000','1200','1500','2000','2500']

# for hs in mhs:
#     for DM in mDM:
#         for Zp in mZp:
#             samples['DH_mhs_' + hs + '_mx_' + DM  + '_mZp_' + Zp] = {
#                 'name': nanoGetSampleFiles(signalDirectory, 'DarkHiggs_MonoHs_HsToWWTo2l2nu_mhs_' + hs + '_mx_' + DM  + '_mZp_' + Zp),
#                 'weight': mcCommonWeight,
#     'suppressNegative':['all'],
#     'suppressNegativeNuisances' :['all'],
#                 'FilesPerJob': 20
#             }

# mDM = ['150','200']
# mhs = ['300','400']
# mZp = ['400','500','800','1000','1200','1500']

# for DM in mDM:
#     for hs in mhs:
#         if DM == '150' and hs == '400':
#             continue
#         for Zp in mZp:
#             if DM == '200' and Zp == '400':
#                 continue
#             if DM == '200' and hs == '400' and int(Zp) > 1000:
#                 continue
#             samples['DH_mhs_' + hs + '_mx_' + DM  + '_mZp_' + Zp] = {
#                 'name': nanoGetSampleFiles(signalDirectory, 'DarkHiggs_MonoHs_HsToWWTo2l2nu_mhs_' + hs + '_mx_' + DM  + '_mZp_' + Zp),
#                 'weight': mcCommonWeight,
#     'suppressNegative':['all'],
#     'suppressNegativeNuisances' :['all'],
#                 'FilesPerJob': 20
#             }

# mDM = ['300']
# mhs = ['160','180','200','300']
# mZp = ['800','1000','1200','1500','2000','2500']


# for DM in mDM:
#     for hs in mhs:
#         for Zp in mZp:
#             if hs == '300' and int(Zp) > 1200:
#                 continue
#             samples['DH_mhs_' + hs + '_mx_' + DM  + '_mZp_' + Zp] = {
#                 'name': nanoGetSampleFiles(signalDirectory, 'DarkHiggs_MonoHs_HsToWWTo2l2nu_mhs_' + hs + '_mx_' + DM  + '_mZp_' + Zp),
#                 'weight': mcCommonWeight,
#     'suppressNegative':['all'],
#     'suppressNegativeNuisances' :['all'],
#                 'FilesPerJob': 20
#             }


# ### INTERPOLATIONS

# mhs = ['160']
# mDM = ['100','150','200','300']
# mZp = ['450','550','600','650','700','750','900','1100','1300','1400','1600','1700','1800','1900','2100','2200','2300','2400']

# for hs in mhs:
#     for DM in mDM:
#         for Zp in mZp:
#             samples['DH_mhs_' + hs + '_mx_' + DM  + '_mZp_' + Zp] = {
#                 'name': nanoGetSampleFiles(signalDirectory, 'DarkHiggs_MonoHs_HsToWWTo2l2nu_mhs_160_mx_150_mZp_1200'),
#                 'linesToAdd' : ['.L /afs/cern.ch/work/f/fernanpe/framework_monoHFullRun2/CMSSW_10_2_9/src/PlotsConfigurations/Configurations/monoHWW/Full2017_v7_3d/onTheFly/interpolationWeight_mhs_' + hs + '_mx_' + DM + '_mZp_' + Zp + '.C', '.L /afs/cern.ch/work/f/fernanpe/framework_monoHFullRun2/CMSSW_10_2_9/src/PlotsConfigurations/Configurations/monoHWW/Full2017_v7_3d/onTheFly/getxsweight.C'],
#                 'weight': mcCommonWeight + '*interpolationWeight_mhs_' + hs + '_mx_' + DM + '_mZp_' + Zp +'(genDarkHiggs_Pt)*getxsweight('+hs+','+DM+','+Zp+',160,150,1200)',
#     'suppressNegative':['all'],
#     'suppressNegativeNuisances' :['all'],

#                 'FilesPerJob': 20
#             }


# mhs = ['180']
# mDM = ['100','150','200','300']
# mZp = ['450','550','600','650','700','750','900','1100','1300','1400','1600','1700','1800','1900','2100','2200','2300','2400']

# for hs in mhs:
#     for DM in mDM:
#         for Zp in mZp:
#             samples['DH_mhs_' + hs + '_mx_' + DM  + '_mZp_' + Zp] = {
#                 'name': nanoGetSampleFiles(signalDirectory, 'DarkHiggs_MonoHs_HsToWWTo2l2nu_mhs_180_mx_150_mZp_1200'),
#                 'linesToAdd' : ['.L /afs/cern.ch/work/f/fernanpe/framework_monoHFullRun2/CMSSW_10_2_9/src/PlotsConfigurations/Configurations/monoHWW/Full2017_v7_3d/onTheFly/interpolationWeight_mhs_' + hs + '_mx_' + DM + '_mZp_' + Zp + '.C', '.L /afs/cern.ch/work/f/fernanpe/framework_monoHFullRun2/CMSSW_10_2_9/src/PlotsConfigurations/Configurations/monoHWW/Full2017_v7_3d/onTheFly/getxsweight.C'],
#                 'weight': mcCommonWeight + '*interpolationWeight_mhs_' + hs + '_mx_' + DM + '_mZp_' + Zp +'(genDarkHiggs_Pt)*getxsweight('+hs+','+DM+','+Zp+',180,150,1200)',
#     'suppressNegative':['all'],
#     'suppressNegativeNuisances' :['all'],

#                 'FilesPerJob': 20
#             }


# mhs = ['200']
# mDM = ['100','150','200','300']
# mZp = ['450','550','600','650','700','750','900','1100','1300','1400','1600','1700','1800','1900','2100','2200','2300','2400']

# for hs in mhs:
#     for DM in mDM:
#         for Zp in mZp:
#             samples['DH_mhs_' + hs + '_mx_' + DM  + '_mZp_' + Zp] = {
#                 'name': nanoGetSampleFiles(signalDirectory, 'DarkHiggs_MonoHs_HsToWWTo2l2nu_mhs_200_mx_150_mZp_1200'),
#                 'linesToAdd' : ['.L /afs/cern.ch/work/f/fernanpe/framework_monoHFullRun2/CMSSW_10_2_9/src/PlotsConfigurations/Configurations/monoHWW/Full2017_v7_3d/onTheFly/interpolationWeight_mhs_' + hs + '_mx_' + DM + '_mZp_' + Zp + '.C', '.L /afs/cern.ch/work/f/fernanpe/framework_monoHFullRun2/CMSSW_10_2_9/src/PlotsConfigurations/Configurations/monoHWW/Full2017_v7_3d/onTheFly/getxsweight.C'],
#                 'weight': mcCommonWeight + '*interpolationWeight_mhs_' + hs + '_mx_' + DM + '_mZp_' + Zp +'(genDarkHiggs_Pt)*getxsweight('+hs+','+DM+','+Zp+',200,150,1200)',
#     'suppressNegative':['all'],
#     'suppressNegativeNuisances' :['all'],

#                 'FilesPerJob': 20
#             }

# #######

# mhs = ['300']
# mDM = ['100']
# mZp = ['200','300','400','450','550','500','550','600','650','700','750','800','900','1000','1100','1200','1300','1400','1500','1600','1700','1800','1900','2000','2100','2200','2300','2400','2500']

# for hs in mhs:
#     for DM in mDM:
#         for Zp in mZp:
#             samples['DH_mhs_' + hs + '_mx_' + DM  + '_mZp_' + Zp] = {
#                 'name': nanoGetSampleFiles(signalDirectory, 'DarkHiggs_MonoHs_HsToWWTo2l2nu_mhs_300_mx_150_mZp_1200'),
#                 'linesToAdd' : ['.L /afs/cern.ch/work/f/fernanpe/framework_monoHFullRun2/CMSSW_10_2_9/src/PlotsConfigurations/Configurations/monoHWW/Full2017_v7_3d/onTheFly/interpolationWeight_mhs_' + hs + '_mx_' + DM + '_mZp_' + Zp + '.C', '.L /afs/cern.ch/work/f/fernanpe/framework_monoHFullRun2/CMSSW_10_2_9/src/PlotsConfigurations/Configurations/monoHWW/Full2017_v7_3d/onTheFly/getxsweight.C'],
#                 'weight': mcCommonWeight + '*interpolationWeight_mhs_' + hs + '_mx_' + DM + '_mZp_' + Zp +'(genDarkHiggs_Pt)*getxsweight('+hs+','+DM+','+Zp+',300,150,1200)',
#     'suppressNegative':['all'],
#     'suppressNegativeNuisances' :['all'],

#                 'FilesPerJob': 20
#             }


# mhs = ['400']
# mDM = ['100']
# mZp = ['200','300','400','450','550','500','550','600','650','700','750','800','900','1000','1100','1200','1300','1400','1500','1600','1700','1800','1900','2000','2100','2200','2300','2400','2500']

# for hs in mhs:
#     for DM in mDM:
#         for Zp in mZp:
#             samples['DH_mhs_' + hs + '_mx_' + DM  + '_mZp_' + Zp] = {
#                 'name': nanoGetSampleFiles(signalDirectory, 'DarkHiggs_MonoHs_HsToWWTo2l2nu_mhs_400_mx_200_mZp_1000'),
#                 'linesToAdd' : ['.L /afs/cern.ch/work/f/fernanpe/framework_monoHFullRun2/CMSSW_10_2_9/src/PlotsConfigurations/Configurations/monoHWW/Full2017_v7_3d/onTheFly/interpolationWeight_mhs_' + hs + '_mx_' + DM + '_mZp_' + Zp + '.C', '.L /afs/cern.ch/work/f/fernanpe/framework_monoHFullRun2/CMSSW_10_2_9/src/PlotsConfigurations/Configurations/monoHWW/Full2017_v7_3d/onTheFly/getxsweight.C'],
#                 'weight': mcCommonWeight + '*interpolationWeight_mhs_' + hs + '_mx_' + DM + '_mZp_' + Zp +'(genDarkHiggs_Pt)*getxsweight('+hs+','+DM+','+Zp+',400,200,1000)',
#     'suppressNegative':['all'],
#     'suppressNegativeNuisances' :['all'],

#                 'FilesPerJob': 20
#             }



# ######


# mhs = ['300']
# mDM = ['150']
# mZp = ['200','300','550','600','650','700','750','900','1100','1300','1400','1600','1700','1800','1900','2000','2100','2200','2300','2400','2500'] #450 missing

# for hs in mhs:
#     for DM in mDM:
#         for Zp in mZp:
#             samples['DH_mhs_' + hs + '_mx_' + DM  + '_mZp_' + Zp] = {
#                 'name': nanoGetSampleFiles(signalDirectory, 'DarkHiggs_MonoHs_HsToWWTo2l2nu_mhs_300_mx_150_mZp_1200'),
#                 'linesToAdd' : ['.L /afs/cern.ch/work/f/fernanpe/framework_monoHFullRun2/CMSSW_10_2_9/src/PlotsConfigurations/Configurations/monoHWW/Full2017_v7_3d/onTheFly/interpolationWeight_mhs_' + hs + '_mx_' + DM + '_mZp_' + Zp + '.C', '.L /afs/cern.ch/work/f/fernanpe/framework_monoHFullRun2/CMSSW_10_2_9/src/PlotsConfigurations/Configurations/monoHWW/Full2017_v7_3d/onTheFly/getxsweight.C'],
#                 'weight': mcCommonWeight + '*interpolationWeight_mhs_' + hs + '_mx_' + DM + '_mZp_' + Zp +'(genDarkHiggs_Pt)*getxsweight('+hs+','+DM+','+Zp+',300,150,1200)',
#     'suppressNegative':['all'],
#     'suppressNegativeNuisances' :['all'],

#                 'FilesPerJob': 20
#             }

# #########

# mhs = ['400']
# mDM = ['150']
# mZp = ['200','300','400','450','550','500','550','600','650','700','750','800','900','1000','1100','1200','1300','1400','1500','1600','1700','1800','1900','2000','2100','2200','2300','2400','2500']

# for hs in mhs:
#     for DM in mDM:
#         for Zp in mZp:
#             samples['DH_mhs_' + hs + '_mx_' + DM  + '_mZp_' + Zp] = {
#                 'name': nanoGetSampleFiles(signalDirectory, 'DarkHiggs_MonoHs_HsToWWTo2l2nu_mhs_400_mx_200_mZp_1000'),
#                 'linesToAdd' : ['.L /afs/cern.ch/work/f/fernanpe/framework_monoHFullRun2/CMSSW_10_2_9/src/PlotsConfigurations/Configurations/monoHWW/Full2017_v7_3d/onTheFly/interpolationWeight_mhs_' + hs + '_mx_' + DM + '_mZp_' + Zp + '.C', '.L /afs/cern.ch/work/f/fernanpe/framework_monoHFullRun2/CMSSW_10_2_9/src/PlotsConfigurations/Configurations/monoHWW/Full2017_v7_3d/onTheFly/getxsweight.C'],
#                 'weight': mcCommonWeight + '*interpolationWeight_mhs_' + hs + '_mx_' + DM + '_mZp_' + Zp +'(genDarkHiggs_Pt)*getxsweight('+hs+','+DM+','+Zp+',400,200,1000)',
#     'suppressNegative':['all'],
#     'suppressNegativeNuisances' :['all'],

#                 'FilesPerJob': 20
#             }


# ####

# mhs = ['300']
# mDM = ['200']
# mZp = ['200','300','400','450','550','600','650','700','750','900','1100','1300','1400','1600','1700','1800','1900','2000','2100','2200','2300','2400','2500']

# for hs in mhs:
#     for DM in mDM:
#         for Zp in mZp:
#             samples['DH_mhs_' + hs + '_mx_' + DM  + '_mZp_' + Zp] = {
#                 'name': nanoGetSampleFiles(signalDirectory, 'DarkHiggs_MonoHs_HsToWWTo2l2nu_mhs_300_mx_150_mZp_1200'),
#                 'linesToAdd' : ['.L /afs/cern.ch/work/f/fernanpe/framework_monoHFullRun2/CMSSW_10_2_9/src/PlotsConfigurations/Configurations/monoHWW/Full2017_v7_3d/onTheFly/interpolationWeight_mhs_' + hs + '_mx_' + DM + '_mZp_' + Zp + '.C', '.L /afs/cern.ch/work/f/fernanpe/framework_monoHFullRun2/CMSSW_10_2_9/src/PlotsConfigurations/Configurations/monoHWW/Full2017_v7_3d/onTheFly/getxsweight.C'],
#                 'weight': mcCommonWeight + '*interpolationWeight_mhs_' + hs + '_mx_' + DM + '_mZp_' + Zp +'(genDarkHiggs_Pt)*getxsweight('+hs+','+DM+','+Zp+',300,150,1200)',
#     'suppressNegative':['all'],
#     'suppressNegativeNuisances' :['all'],

#                 'FilesPerJob': 20
#             }



# #####

# mhs = ['400']
# mDM = ['200']
# mZp = ['200','300','400','450','550','600','650','700','750','900','1100','1200','1300','1400','1500','1600','1700','1800','1900','2000','2100','2200','2300','2400','2500']

# for hs in mhs:
#     for DM in mDM:
#         for Zp in mZp:
#             samples['DH_mhs_' + hs + '_mx_' + DM  + '_mZp_' + Zp] = {
#                 'name': nanoGetSampleFiles(signalDirectory, 'DarkHiggs_MonoHs_HsToWWTo2l2nu_mhs_400_mx_200_mZp_1000'),
#                 'linesToAdd' : ['.L /afs/cern.ch/work/f/fernanpe/framework_monoHFullRun2/CMSSW_10_2_9/src/PlotsConfigurations/Configurations/monoHWW/Full2017_v7_3d/onTheFly/interpolationWeight_mhs_' + hs + '_mx_' + DM + '_mZp_' + Zp + '.C', '.L /afs/cern.ch/work/f/fernanpe/framework_monoHFullRun2/CMSSW_10_2_9/src/PlotsConfigurations/Configurations/monoHWW/Full2017_v7_3d/onTheFly/getxsweight.C'],
#                 'weight': mcCommonWeight + '*interpolationWeight_mhs_' + hs + '_mx_' + DM + '_mZp_' + Zp +'(genDarkHiggs_Pt)*getxsweight('+hs+','+DM+','+Zp+',400,200,1000)',
#     'suppressNegative':['all'],
#     'suppressNegativeNuisances' :['all'],

#                 'FilesPerJob': 20
#             }


# #####

# mhs = ['160']
# mDM = ['300']
# mZp = ['200','300','400','450','550','500','600','650','700','750','900','1100','1300','1400','1600','1700','1800','1900','2100','2200','2300','2400']

# for hs in mhs:
#     for DM in mDM:
#         for Zp in mZp:
#             samples['DH_mhs_' + hs + '_mx_' + DM  + '_mZp_' + Zp] = {
#                 'name': nanoGetSampleFiles(signalDirectory, 'DarkHiggs_MonoHs_HsToWWTo2l2nu_mhs_160_mx_150_mZp_1200'),
#                 'linesToAdd' : ['.L /afs/cern.ch/work/f/fernanpe/framework_monoHFullRun2/CMSSW_10_2_9/src/PlotsConfigurations/Configurations/monoHWW/Full2017_v7_3d/onTheFly/interpolationWeight_mhs_' + hs + '_mx_' + DM + '_mZp_' + Zp + '.C', '.L /afs/cern.ch/work/f/fernanpe/framework_monoHFullRun2/CMSSW_10_2_9/src/PlotsConfigurations/Configurations/monoHWW/Full2017_v7_3d/onTheFly/getxsweight.C'],
#                 'weight': mcCommonWeight + '*interpolationWeight_mhs_' + hs + '_mx_' + DM + '_mZp_' + Zp +'(genDarkHiggs_Pt)*getxsweight('+hs+','+DM+','+Zp+',160,150,1200)',
#     'suppressNegative':['all'],
#     'suppressNegativeNuisances' :['all'],

#                 'FilesPerJob': 20
#             }




# mhs = ['180']
# mDM = ['300']
# mZp = ['200','300','400','450','550','500','600','650','700','750','900','1100','1300','1400','1600','1700','1800','1900','2100','2200','2300','2400']

# for hs in mhs:
#     for DM in mDM:
#         for Zp in mZp:
#             samples['DH_mhs_' + hs + '_mx_' + DM  + '_mZp_' + Zp] = {
#                 'name': nanoGetSampleFiles(signalDirectory, 'DarkHiggs_MonoHs_HsToWWTo2l2nu_mhs_180_mx_150_mZp_1200'),
#                 'linesToAdd' : ['.L /afs/cern.ch/work/f/fernanpe/framework_monoHFullRun2/CMSSW_10_2_9/src/PlotsConfigurations/Configurations/monoHWW/Full2017_v7_3d/onTheFly/interpolationWeight_mhs_' + hs + '_mx_' + DM + '_mZp_' + Zp + '.C', '.L /afs/cern.ch/work/f/fernanpe/framework_monoHFullRun2/CMSSW_10_2_9/src/PlotsConfigurations/Configurations/monoHWW/Full2017_v7_3d/onTheFly/getxsweight.C'],
#                 'weight': mcCommonWeight + '*interpolationWeight_mhs_' + hs + '_mx_' + DM + '_mZp_' + Zp +'(genDarkHiggs_Pt)*getxsweight('+hs+','+DM+','+Zp+',180,150,1200)',
#     'suppressNegative':['all'],
#     'suppressNegativeNuisances' :['all'],

#                 'FilesPerJob': 20
#             }



# mhs = ['200']
# mDM = ['300']
# mZp = ['200','300','400','450','550','500','600','650','700','750','900','1100','1300','1400','1600','1700','1800','1900','2100','2200','2300','2400']

# for hs in mhs:
#     for DM in mDM:
#         for Zp in mZp:
#             samples['DH_mhs_' + hs + '_mx_' + DM  + '_mZp_' + Zp] = {
#                 'name': nanoGetSampleFiles(signalDirectory, 'DarkHiggs_MonoHs_HsToWWTo2l2nu_mhs_200_mx_150_mZp_1200'),
#                 'linesToAdd' : ['.L /afs/cern.ch/work/f/fernanpe/framework_monoHFullRun2/CMSSW_10_2_9/src/PlotsConfigurations/Configurations/monoHWW/Full2017_v7_3d/onTheFly/interpolationWeight_mhs_' + hs + '_mx_' + DM + '_mZp_' + Zp + '.C', '.L /afs/cern.ch/work/f/fernanpe/framework_monoHFullRun2/CMSSW_10_2_9/src/PlotsConfigurations/Configurations/monoHWW/Full2017_v7_3d/onTheFly/getxsweight.C'],
#                 'weight': mcCommonWeight + '*interpolationWeight_mhs_' + hs + '_mx_' + DM + '_mZp_' + Zp +'(genDarkHiggs_Pt)*getxsweight('+hs+','+DM+','+Zp+',200,150,1200)',
#     'suppressNegative':['all'],
#     'suppressNegativeNuisances' :['all'],

#                 'FilesPerJob': 20
#             }



# #####

# mhs = ['300']
# mDM = ['300']
# mZp = ['200','300','400','450','550','500','600','650','700','750','900','1100','1300','1400','1500','1600','1700','1800','1900','2000','2100','2200','2300','2400','2500']

# for hs in mhs:
#     for DM in mDM:
#         for Zp in mZp:
#             samples['DH_mhs_' + hs + '_mx_' + DM  + '_mZp_' + Zp] = {
#                 'name': nanoGetSampleFiles(signalDirectory, 'DarkHiggs_MonoHs_HsToWWTo2l2nu_mhs_300_mx_150_mZp_1200'),
#                 'linesToAdd' : ['.L /afs/cern.ch/work/f/fernanpe/framework_monoHFullRun2/CMSSW_10_2_9/src/PlotsConfigurations/Configurations/monoHWW/Full2017_v7_3d/onTheFly/interpolationWeight_mhs_' + hs + '_mx_' + DM + '_mZp_' + Zp + '.C', '.L /afs/cern.ch/work/f/fernanpe/framework_monoHFullRun2/CMSSW_10_2_9/src/PlotsConfigurations/Configurations/monoHWW/Full2017_v7_3d/onTheFly/getxsweight.C'],
#                 'weight': mcCommonWeight + '*interpolationWeight_mhs_' + hs + '_mx_' + DM + '_mZp_' + Zp +'(genDarkHiggs_Pt)*getxsweight('+hs+','+DM+','+Zp+',300,150,1200)',
#     'suppressNegative':['all'],
#     'suppressNegativeNuisances' :['all'],

#                 'FilesPerJob': 20
#             }

# #####

# mhs = ['400']
# mDM = ['300']
# mZp = ['200','300','400','450','550','500','600','650','700','750','800','900','1000','1100','1200','1300','1400','1500','1600','1700','1800','1900','2000','2100','2200','2300','2400','2500']

# for hs in mhs:
#     for DM in mDM:
#         for Zp in mZp:
#             samples['DH_mhs_' + hs + '_mx_' + DM  + '_mZp_' + Zp] = {
#                 'name': nanoGetSampleFiles(signalDirectory, 'DarkHiggs_MonoHs_HsToWWTo2l2nu_mhs_400_mx_200_mZp_1000'),
#                 'linesToAdd' : ['.L /afs/cern.ch/work/f/fernanpe/framework_monoHFullRun2/CMSSW_10_2_9/src/PlotsConfigurations/Configurations/monoHWW/Full2017_v7_3d/onTheFly/interpolationWeight_mhs_' + hs + '_mx_' + DM + '_mZp_' + Zp + '.C', '.L /afs/cern.ch/work/f/fernanpe/framework_monoHFullRun2/CMSSW_10_2_9/src/PlotsConfigurations/Configurations/monoHWW/Full2017_v7_3d/onTheFly/getxsweight.C'],
#                 'weight': mcCommonWeight + '*interpolationWeight_mhs_' + hs + '_mx_' + DM + '_mZp_' + Zp +'(genDarkHiggs_Pt)*getxsweight('+hs+','+DM+','+Zp+',400,200,1000)',
#     'suppressNegative':['all'],
#     'suppressNegativeNuisances' :['all'],

#                 'FilesPerJob': 20
#             }




# ####


# mhs = ['250']
# mDM = ['100','150','200','300']
# mZp = ['200','300','400','450','550','500','600','650','700','750','800','900','1000','1100','1200','1300','1400','1500','1600','1700','1800','1900','2000','2100','2200','2300','2400','2500']

# for hs in mhs:
#     for DM in mDM:
#         for Zp in mZp:
#             samples['DH_mhs_' + hs + '_mx_' + DM  + '_mZp_' + Zp] = {
#                 'name': nanoGetSampleFiles(signalDirectory, 'DarkHiggs_MonoHs_HsToWWTo2l2nu_mhs_200_mx_150_mZp_1200'),
#                 'linesToAdd' : ['.L /afs/cern.ch/work/f/fernanpe/framework_monoHFullRun2/CMSSW_10_2_9/src/PlotsConfigurations/Configurations/monoHWW/Full2017_v7_3d/onTheFly/interpolationWeight_mhs_' + hs + '_mx_' + DM + '_mZp_' + Zp + '.C', '.L /afs/cern.ch/work/f/fernanpe/framework_monoHFullRun2/CMSSW_10_2_9/src/PlotsConfigurations/Configurations/monoHWW/Full2017_v7_3d/onTheFly/getxsweight.C'],
#                 'weight': mcCommonWeight + '*interpolationWeight_mhs_' + hs + '_mx_' + DM + '_mZp_' + Zp +'(genDarkHiggs_Pt)*getxsweight('+hs+','+DM+','+Zp+',200,150,1200)',
#     'suppressNegative':['all'],
#     'suppressNegativeNuisances' :['all'],

#                 'FilesPerJob': 20
#             }






# mhs = ['350']
# mDM = ['100','150','200','300']
# mZp = ['200','300','400','450','550','500','600','650','700','750','800','900','1000','1100','1200','1300','1400','1500','1600','1700','1800','1900','2000','2100','2200','2300','2400','2500']

# for hs in mhs:
#     for DM in mDM:
#         for Zp in mZp:
#             samples['DH_mhs_' + hs + '_mx_' + DM  + '_mZp_' + Zp] = {
#                 'name': nanoGetSampleFiles(signalDirectory, 'DarkHiggs_MonoHs_HsToWWTo2l2nu_mhs_300_mx_150_mZp_1200'),
#                 'linesToAdd' : ['.L /afs/cern.ch/work/f/fernanpe/framework_monoHFullRun2/CMSSW_10_2_9/src/PlotsConfigurations/Configurations/monoHWW/Full2017_v7_3d/onTheFly/interpolationWeight_mhs_' + hs + '_mx_' + DM + '_mZp_' + Zp + '.C', '.L /afs/cern.ch/work/f/fernanpe/framework_monoHFullRun2/CMSSW_10_2_9/src/PlotsConfigurations/Configurations/monoHWW/Full2017_v7_3d/onTheFly/getxsweight.C'],
#                 'weight': mcCommonWeight + '*interpolationWeight_mhs_' + hs + '_mx_' + DM + '_mZp_' + Zp +'(genDarkHiggs_Pt)*getxsweight('+hs+','+DM+','+Zp+',300,150,1200)',
#     'suppressNegative':['all'],
#     'suppressNegativeNuisances' :['all'],

#                 'FilesPerJob': 20
#             }



# ### INTERMEDIATE


# mhs = ['170']
# mDM = ['200']
# mZp = ['600','1300']

# for hs in mhs:
#     for DM in mDM:
#         for Zp in mZp:
#             samples['DH_mhs_' + hs + '_mx_' + DM  + '_mZp_' + Zp] = {
#                 'name': nanoGetSampleFiles(signalDirectory, 'DarkHiggs_MonoHs_HsToWWTo2l2nu_mhs_160_mx_150_mZp_1200'),
#                 'linesToAdd' : ['.L /afs/cern.ch/work/f/fernanpe/framework_monoHFullRun2/CMSSW_10_2_9/src/PlotsConfigurations/Configurations/monoHWW/Full2017_v7_3d/onTheFly/interpolationWeight_mhs_' + hs + '_mx_' + DM + '_mZp_' + Zp + '.C', '.L /afs/cern.ch/work/f/fernanpe/framework_monoHFullRun2/CMSSW_10_2_9/src/PlotsConfigurations/Configurations/monoHWW/Full2017_v7_3d/onTheFly/getxsweight.C'],
#                 'weight': mcCommonWeight + '*interpolationWeight_mhs_' + hs + '_mx_' + DM + '_mZp_' + Zp +'(genDarkHiggs_Pt)*getxsweight('+hs+','+DM+','+Zp+',160,150,1200)',
#     'suppressNegative':['all'],
#     'suppressNegativeNuisances' :['all'],

#                 'FilesPerJob': 20
#             }


# mhs = ['190']
# mDM = ['200']
# mZp = ['700','1100','1400']

# for hs in mhs:
#     for DM in mDM:
#         for Zp in mZp:
#             samples['DH_mhs_' + hs + '_mx_' + DM  + '_mZp_' + Zp] = {
#                 'name': nanoGetSampleFiles(signalDirectory, 'DarkHiggs_MonoHs_HsToWWTo2l2nu_mhs_200_mx_150_mZp_1200'),
#                 'linesToAdd' : ['.L /afs/cern.ch/work/f/fernanpe/framework_monoHFullRun2/CMSSW_10_2_9/src/PlotsConfigurations/Configurations/monoHWW/Full2017_v7_3d/onTheFly/interpolationWeight_mhs_' + hs + '_mx_' + DM + '_mZp_' + Zp + '.C', '.L /afs/cern.ch/work/f/fernanpe/framework_monoHFullRun2/CMSSW_10_2_9/src/PlotsConfigurations/Configurations/monoHWW/Full2017_v7_3d/onTheFly/getxsweight.C'],
#                 'weight': mcCommonWeight + '*interpolationWeight_mhs_' + hs + '_mx_' + DM + '_mZp_' + Zp +'(genDarkHiggs_Pt)*getxsweight('+hs+','+DM+','+Zp+',200,150,1200)',
#     'suppressNegative':['all'],
#     'suppressNegativeNuisances' :['all'],

#                 'FilesPerJob': 20
#             }







# mA = ['200', '400', '500', '600']

# for A in mA:
#     samples['2HMDa__gg_sinp_0p35_tanb_1p0_mXd_10_MA_' + A + '_ma_150'] = {
#         'name': nanoGetSampleFiles(signalDirectory, '2HDMa_HWWTollnunu_gg_sinp_0p35_tanb_1p0_mXd_10_MH3_' + A + '_MH4_150_MH2_' + A + '_MHC_' + A),
#         'weight': mcCommonWeight,
#         'FilesPerJob': 1
#     }


# sintheta = ['0p35', '0p7']
# tanbeta = ['0p5', '1p0', '1p5', '2p0', '4p0', '8p0']

# for theta in sintheta:
#     for beta in tanbeta:
#         samples['2HMDa__gg_sinp_' + theta  + '_tanb_' + beta  + '_mXd_10_MA_300_ma_150'] = {
#             'name': nanoGetSampleFiles(signalDirectory, '2HDMa_HWWTollnunu_gg_sinp_' + theta  + '_tanb_' + beta  + '_mXd_10_MH3_300_MH4_150_MH2_300_MHC_300'),
#             'weight': mcCommonWeight,
#             'FilesPerJob': 1
#         }


###########################################
################## FAKE ###################
###########################################

samples['Fake'] = {
  'name': [],
  'weight': 'METFilter_DATA*fakeW',
  'weights': [],
    'suppressNegative':['all'],
    'suppressNegativeNuisances' :['all'],
  'isData': ['all'],
  'FilesPerJob': 30
}

for _, sd in DataRun:
  for pd in DataSets:
    files = nanoGetSampleFiles(fakeDirectory, pd + '_' + sd)
    samples['Fake']['name'].extend(files)
    samples['Fake']['weights'].extend([DataTrig[pd]] * len(files))

###########################################
################## DATA ###################
###########################################

samples['DATA'] = {
  'name': [],
  'weight': 'METFilter_DATA*LepWPCut',
  'weights': [],
  'isData': ['all'],
  'FilesPerJob': 40
}

for _, sd in DataRun:
  for pd in DataSets:
    files = nanoGetSampleFiles(dataDirectory, pd + '_' + sd)
    samples['DATA']['name'].extend(files)
    samples['DATA']['weights'].extend([DataTrig[pd]] * len(files))

