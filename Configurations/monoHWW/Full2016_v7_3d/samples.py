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


mcProduction = 'Summer16_102X_nAODv7_Full2016v7'

dataReco = 'Run2016_102X_nAODv7_Full2016v7'

fakeReco = 'Run2016_102X_nAODv7_Full2016v7'

embedReco = 'Embedding2016_102X_nAODv7_Full2016v7'

mcSteps = 'MCl1loose2016v7__MCCorr2016v7__l2loose__l2tightOR2016v7{var}'

fakeSteps = 'DATAl1loose2016v7__l2loose__fakeW'

dataSteps = 'DATAl1loose2016v7__l2loose__l2tightOR2016v7'

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

signalDirectory = '/eos/user/r/rocio/MonoH/Summer16_102X_nAODv7_Full2016v7/MCl1loose2016v7__MCCorr2016v7__l2loose__l2tightOR2016v7'

################################################
############ DATA DECLARATION ##################
################################################


DataRun = [
    ['B','Run2016B-02Apr2020_ver1-v1'],
    ['B','Run2016B-02Apr2020_ver2-v1'],
    ['C','Run2016C-02Apr2020-v1'],
    ['D','Run2016D-02Apr2020-v1'],
    ['E','Run2016E-02Apr2020-v1'],
    ['F','Run2016F-02Apr2020-v1'],
    ['G','Run2016G-02Apr2020-v1'],
    ['H','Run2016H-02Apr2020-v1']
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

# ###########################################
# #############  BACKGROUNDS  ###############
###########################################


# ###### Top Nopt rew #######

# files = nanoGetSampleFiles(mcDirectory, 'TTTo2L2Nu') + \
#     nanoGetSampleFiles(mcDirectory, 'ST_s-channel') + \
#     nanoGetSampleFiles(mcDirectory, 'ST_t-channel_antitop') + \
#     nanoGetSampleFiles(mcDirectory, 'ST_t-channel_top') + \
#     nanoGetSampleFiles(mcDirectory, 'ST_tW_antitop') + \
#     nanoGetSampleFiles(mcDirectory, 'ST_tW_top')

# samples['top_noreweight'] = {
#     'name': files,
#     'weight': mcCommonWeight,
#     'suppressNegative':['all'],
#     'suppressNegativeNuisances' :['all'],
#     'FilesPerJob': 1,
# }


###### DY #######

filesDYHT = nanoGetSampleFiles(mcDirectory, 'DYJetsToLL_M-10to50-LO') + \
nanoGetSampleFiles(mcDirectory, 'DYJetsToLL_M-5to50_HT-70to100') + \
nanoGetSampleFiles(mcDirectory, 'DYJetsToLL_M-5to50_HT-100to200') + \
nanoGetSampleFiles(mcDirectory, 'DYJetsToLL_M-5to50_HT-200to400') + \
nanoGetSampleFiles(mcDirectory, 'DYJetsToLL_M-5to50_HT-400to600') + \
nanoGetSampleFiles(mcDirectory, 'DYJetsToLL_M-5to50_HT-600toinf_ext1') + \
nanoGetSampleFiles(mcDirectory, 'DYJetsToTT_MuEle_M-50') + \
nanoGetSampleFiles(mcDirectory, 'DYJetsToLL_M-50_HT-70to100') + \
nanoGetSampleFiles(mcDirectory, 'DYJetsToLL_M-50_HT-100to200') + \
nanoGetSampleFiles(mcDirectory, 'DYJetsToLL_M-50_HT-200to400') + \
nanoGetSampleFiles(mcDirectory, 'DYJetsToLL_M-50_HT-400to600') + \
nanoGetSampleFiles(mcDirectory, 'DYJetsToLL_M-50_HT-600to800') + \
nanoGetSampleFiles(mcDirectory, 'DYJetsToLL_M-50_HT-800to1200') + \
nanoGetSampleFiles(mcDirectory, 'DYJetsToLL_M-50_HT-1200to2500')

samples['DY'] = {
    'name': filesDYHT,
    'weight': mcCommonWeight + '*( !(Sum$(PhotonGen_isPrompt==1 && PhotonGen_pt>15 && abs(PhotonGen_eta)<2.6) > 0))',
    'suppressNegative':['all'],
    'suppressNegativeNuisances' :['all'],
    'FilesPerJob': 3,
}

addSampleWeight(samples,'DY','DYJetsToLL_M-10to50-LO',  'LHE_HT<70.0')
addSampleWeight(samples,'DY','DYJetsToTT_MuEle_M-50',  'LHE_HT<70.0 || LHE_HT>2500')


###### Top #######

files = nanoGetSampleFiles(mcDirectory, 'TTTo2L2Nu') + \
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

addSampleWeight(samples,'top','TTTo2L2Nu','Top_pTrw')



###### WW ########

samples['WW'] = {
    'name': nanoGetSampleFiles(mcDirectory, 'WWTo2L2Nu'),
    'weight': mcCommonWeight + '*nllW*ewknloW',
    'suppressNegative':['all'],
    'suppressNegativeNuisances' :['all'],
    'FilesPerJob': 1
}

samples['WWewk'] = {
    'name': nanoGetSampleFiles(mcDirectory, 'WpWmJJ_EWK_noTop'),
    'weight': mcCommonWeight + '*(Sum$(abs(GenPart_pdgId)==6 || GenPart_pdgId==25)==0)*(lhe_mW1[0] > 60. && lhe_mW1[0] < 100. && lhe_mW2[0] > 60. && lhe_mW2[0] < 100.)', #filter tops and Higgs, limit w mass
    'suppressNegative':['all'],
    'suppressNegativeNuisances' :['all'],
    'FilesPerJob': 4
}

samples['ggWW'] = {
    'name': nanoGetSampleFiles(mcDirectory, 'GluGluWWTo2L2Nu_MCFM'),
    'weight': mcCommonWeight + '*1.53/1.4', # updating k-factor
    'suppressNegative':['all'],
    'suppressNegativeNuisances' :['all'],
    'FilesPerJob': 4
}

######## Vg ########

files = nanoGetSampleFiles(mcDirectory, 'Wg_AMCNLOFXFX_01J') + \
        nanoGetSampleFiles(mcDirectory, 'Wg_AMCNLOFXFX_01J_ext1') + \
        nanoGetSampleFiles(mcDirectory, 'Zg')
  
samples['Vg'] = {
    'name': files,
    'weight': mcCommonWeightNoMatch + '*(!(Gen_ZGstar_mass > 0))',
    'suppressNegative':['all'],
    'suppressNegativeNuisances' :['all'],
    'FilesPerJob': 4
}

# wgbasew = getBaseWnAOD(mcDirectory,'Summer16_102X_nAODv7_Full2016v7',['Wg_AMCNLOFXFX_01J','Wg_AMCNLOFXFX_01J_ext1'])
# addSampleWeight(samples,'Vg','Wg_AMCNLOFXFX_01J','191.4/586.*'+wgbasew+'/baseW')
# addSampleWeight(samples,'Vg','Wg_AMCNLOFXFX_01J_ext1','191.4/586.*'+wgbasew+'/baseW')
  
######## VgS ########

files = nanoGetSampleFiles(mcDirectory, 'Wg_AMCNLOFXFX_01J') + \
        nanoGetSampleFiles(mcDirectory, 'Wg_AMCNLOFXFX_01J_ext1') + \
        nanoGetSampleFiles(mcDirectory, 'Zg') + \
        nanoGetSampleFiles(mcDirectory, 'WZTo3LNu_mllmin01')

samples['VgS'] = {
    'name': files,
    'weight': mcCommonWeight + ' * (gstarLow * 0.94 + gstarHigh * 1.14)',
    'suppressNegative':['all'],
    'suppressNegativeNuisances' :['all'],
    'FilesPerJob': 4,
}

# addSampleWeight(samples, 'VgS', 'Wg_AMCNLOFXFX_01J', '(Gen_ZGstar_mass > 0 && Gen_ZGstar_mass < 0.1)*191.4/586.*'+wgbasew+'/baseW')
# addSampleWeight(samples, 'VgS', 'Wg_AMCNLOFXFX_01J_ext1', '(Gen_ZGstar_mass > 0 && Gen_ZGstar_mass < 0.1)*191.4/586.*'+wgbasew+'/baseW')
# addSampleWeight(samples, 'VgS', 'Zg', '(Gen_ZGstar_mass > 0)')
# addSampleWeight(samples, 'VgS', 'WZTo3LNu_mllmin01', '(Gen_ZGstar_mass > 0.1)')


# ############ VZ ############

files = nanoGetSampleFiles(mcDirectory, 'ZZTo2L2Nu') + \
    nanoGetSampleFiles(mcDirectory, 'ZZTo2L2Q') + \
    nanoGetSampleFiles(mcDirectory, 'ZZTo4L') + \
    nanoGetSampleFiles(mcDirectory, 'WZTo2L2Q')    


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
         nanoGetSampleFiles(mcDirectory, 'HZJ_HToWW_M125') + \
         nanoGetSampleFiles(mcDirectory, 'ggZH_HToWW_M125') + \
         nanoGetSampleFiles(mcDirectory, 'HWplusJ_HToWW_M125') + \
         nanoGetSampleFiles(mcDirectory, 'HWminusJ_HToWW_M125') + \
         nanoGetSampleFiles(mcDirectory, 'ttHToNonbb_M125') + \
         nanoGetSampleFiles(mcDirectory, 'GluGluHToTauTau_M125') + \
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


# ######### Signals ######### 

# # # REFERENCE

# mhs = ['180']
# mDM = ['150']
# mZp = ['1200']

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


mhs = ['160','180','200']
mDM = ['100','150','200']
mZp = ['195','200','295','300','400','500','800','1000','1200','1500','2000','2500']

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

mDM = ['150','200']
mhs = ['300'] #mhs = ['300','400']
mZp = ['400','500','800','1000','1200','1500']

for DM in mDM:
    for hs in mhs:
        if DM == '150' and hs == '400':
            continue
        for Zp in mZp:
            if DM == '200' and Zp == '400':
                continue
            if DM == '200' and hs == '400' and int(Zp) > 1000:
                continue
            samples['DH_mhs_' + hs + '_mx_' + DM  + '_mZp_' + Zp] = {
                'name': nanoGetSampleFiles(signalDirectory, 'DarkHiggs_MonoHs_HsToWWTo2l2nu_mhs_' + hs + '_mx_' + DM  + '_mZp_' + Zp),
                'weight': mcCommonWeight,
    'suppressNegative':['all'],
    'suppressNegativeNuisances' :['all'],
                'FilesPerJob': 20
            }

mDM = ['300']
mhs = ['160','180','200','300']
mZp = ['800','1000','1200','1500','2000','2500']


for DM in mDM:
    for hs in mhs:
        for Zp in mZp:
            if hs == '300' and int(Zp) > 1200:
                continue
            samples['DH_mhs_' + hs + '_mx_' + DM  + '_mZp_' + Zp] = {
                'name': nanoGetSampleFiles(signalDirectory, 'DarkHiggs_MonoHs_HsToWWTo2l2nu_mhs_' + hs + '_mx_' + DM  + '_mZp_' + Zp),
                'weight': mcCommonWeight,
    'suppressNegative':['all'],
    'suppressNegativeNuisances' :['all'],
                'FilesPerJob': 20
            }


###### INTERPOLATIONS

mhs = ['160']
mDM = ['100','150','200','300']
mZp = ['450','550','600','650','700','750','900','1100','1300','1400','1600','1700','1800','1900','2100','2200','2300','2400']

for hs in mhs:
    for DM in mDM:
        for Zp in mZp:
            samples['DH_mhs_' + hs + '_mx_' + DM  + '_mZp_' + Zp] = {
                'name': nanoGetSampleFiles(signalDirectory, 'DarkHiggs_MonoHs_HsToWWTo2l2nu_mhs_160_mx_150_mZp_1200'),
                'linesToAdd' : ['.L /afs/cern.ch/work/f/fernanpe/framework_monoHFullRun2/CMSSW_10_2_9/src/PlotsConfigurations/Configurations/monoHWW/Full2017_v7_3d/onTheFly/interpolationWeight_mhs_' + hs + '_mx_' + DM + '_mZp_' + Zp + '.C', '.L /afs/cern.ch/work/f/fernanpe/framework_monoHFullRun2/CMSSW_10_2_9/src/PlotsConfigurations/Configurations/monoHWW/Full2017_v7_3d/onTheFly/getxsweight.C'],
                'weight': mcCommonWeight + '*interpolationWeight_mhs_' + hs + '_mx_' + DM + '_mZp_' + Zp +'(genDarkHiggs_Pt)*getxsweight('+hs+','+DM+','+Zp+',160,150,1200)',
    'suppressNegative':['all'],
    'suppressNegativeNuisances' :['all'],

                'FilesPerJob': 20
            }


mhs = ['180']
mDM = ['100','150','200','300']
mZp = ['450','550','600','650','700','750','900','1100','1300','1400','1600','1700','1800','1900','2100','2200','2300','2400']

for hs in mhs:
    for DM in mDM:
        for Zp in mZp:
            samples['DH_mhs_' + hs + '_mx_' + DM  + '_mZp_' + Zp] = {
                'name': nanoGetSampleFiles(signalDirectory, 'DarkHiggs_MonoHs_HsToWWTo2l2nu_mhs_180_mx_150_mZp_1200'),
                'linesToAdd' : ['.L /afs/cern.ch/work/f/fernanpe/framework_monoHFullRun2/CMSSW_10_2_9/src/PlotsConfigurations/Configurations/monoHWW/Full2017_v7_3d/onTheFly/interpolationWeight_mhs_' + hs + '_mx_' + DM + '_mZp_' + Zp + '.C', '.L /afs/cern.ch/work/f/fernanpe/framework_monoHFullRun2/CMSSW_10_2_9/src/PlotsConfigurations/Configurations/monoHWW/Full2017_v7_3d/onTheFly/getxsweight.C'],
                'weight': mcCommonWeight + '*interpolationWeight_mhs_' + hs + '_mx_' + DM + '_mZp_' + Zp +'(genDarkHiggs_Pt)*getxsweight('+hs+','+DM+','+Zp+',180,150,1200)',
    'suppressNegative':['all'],
    'suppressNegativeNuisances' :['all'],

                'FilesPerJob': 20
            }


mhs = ['200']
mDM = ['100','150','200','300']
mZp = ['450','550','600','650','700','750','900','1100','1300','1400','1600','1700','1800','1900','2100','2200','2300','2400']

for hs in mhs:
    for DM in mDM:
        for Zp in mZp:
            samples['DH_mhs_' + hs + '_mx_' + DM  + '_mZp_' + Zp] = {
                'name': nanoGetSampleFiles(signalDirectory, 'DarkHiggs_MonoHs_HsToWWTo2l2nu_mhs_200_mx_150_mZp_1200'),
                'linesToAdd' : ['.L /afs/cern.ch/work/f/fernanpe/framework_monoHFullRun2/CMSSW_10_2_9/src/PlotsConfigurations/Configurations/monoHWW/Full2017_v7_3d/onTheFly/interpolationWeight_mhs_' + hs + '_mx_' + DM + '_mZp_' + Zp + '.C', '.L /afs/cern.ch/work/f/fernanpe/framework_monoHFullRun2/CMSSW_10_2_9/src/PlotsConfigurations/Configurations/monoHWW/Full2017_v7_3d/onTheFly/getxsweight.C'],
                'weight': mcCommonWeight + '*interpolationWeight_mhs_' + hs + '_mx_' + DM + '_mZp_' + Zp +'(genDarkHiggs_Pt)*getxsweight('+hs+','+DM+','+Zp+',200,150,1200)',
    'suppressNegative':['all'],
    'suppressNegativeNuisances' :['all'],

                'FilesPerJob': 20
            }



mhs = ['300']
mDM = ['100']
mZp = ['200','300','400','450','550','500','550','600','650','700','750','800','900','1000','1100','1200','1300','1400','1500','1600','1700','1800','1900','2000','2100','2200','2300','2400','2500']

for hs in mhs:
    for DM in mDM:
        for Zp in mZp:
            samples['DH_mhs_' + hs + '_mx_' + DM  + '_mZp_' + Zp] = {
                'name': nanoGetSampleFiles(signalDirectory, 'DarkHiggs_MonoHs_HsToWWTo2l2nu_mhs_300_mx_150_mZp_1200'),
                'linesToAdd' : ['.L /afs/cern.ch/work/f/fernanpe/framework_monoHFullRun2/CMSSW_10_2_9/src/PlotsConfigurations/Configurations/monoHWW/Full2017_v7_3d/onTheFly/interpolationWeight_mhs_' + hs + '_mx_' + DM + '_mZp_' + Zp + '.C', '.L /afs/cern.ch/work/f/fernanpe/framework_monoHFullRun2/CMSSW_10_2_9/src/PlotsConfigurations/Configurations/monoHWW/Full2017_v7_3d/onTheFly/getxsweight.C'],
                'weight': mcCommonWeight + '*interpolationWeight_mhs_' + hs + '_mx_' + DM + '_mZp_' + Zp +'(genDarkHiggs_Pt)*getxsweight('+hs+','+DM+','+Zp+',300,150,1200)',
    'suppressNegative':['all'],
    'suppressNegativeNuisances' :['all'],

                'FilesPerJob': 20
            }


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






mhs = ['300']
mDM = ['150']
mZp = ['200','300','550','600','650','700','750','900','1100','1300','1400','1600','1700','1800','1900','2000','2100','2200','2300','2400','2500'] #450 missing

for hs in mhs:
    for DM in mDM:
        for Zp in mZp:
            samples['DH_mhs_' + hs + '_mx_' + DM  + '_mZp_' + Zp] = {
                'name': nanoGetSampleFiles(signalDirectory, 'DarkHiggs_MonoHs_HsToWWTo2l2nu_mhs_300_mx_150_mZp_1200'),
                'linesToAdd' : ['.L /afs/cern.ch/work/f/fernanpe/framework_monoHFullRun2/CMSSW_10_2_9/src/PlotsConfigurations/Configurations/monoHWW/Full2017_v7_3d/onTheFly/interpolationWeight_mhs_' + hs + '_mx_' + DM + '_mZp_' + Zp + '.C', '.L /afs/cern.ch/work/f/fernanpe/framework_monoHFullRun2/CMSSW_10_2_9/src/PlotsConfigurations/Configurations/monoHWW/Full2017_v7_3d/onTheFly/getxsweight.C'],
                'weight': mcCommonWeight + '*interpolationWeight_mhs_' + hs + '_mx_' + DM + '_mZp_' + Zp +'(genDarkHiggs_Pt)*getxsweight('+hs+','+DM+','+Zp+',300,150,1200)',
    'suppressNegative':['all'],
    'suppressNegativeNuisances' :['all'],

                'FilesPerJob': 20
            }



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




mhs = ['300']
mDM = ['200']
mZp = ['200','300','400','450','550','600','650','700','750','900','1100','1300','1400','1600','1700','1800','1900','2000','2100','2200','2300','2400','2500']

for hs in mhs:
    for DM in mDM:
        for Zp in mZp:
            samples['DH_mhs_' + hs + '_mx_' + DM  + '_mZp_' + Zp] = {
                'name': nanoGetSampleFiles(signalDirectory, 'DarkHiggs_MonoHs_HsToWWTo2l2nu_mhs_300_mx_150_mZp_1200'),
                'linesToAdd' : ['.L /afs/cern.ch/work/f/fernanpe/framework_monoHFullRun2/CMSSW_10_2_9/src/PlotsConfigurations/Configurations/monoHWW/Full2017_v7_3d/onTheFly/interpolationWeight_mhs_' + hs + '_mx_' + DM + '_mZp_' + Zp + '.C', '.L /afs/cern.ch/work/f/fernanpe/framework_monoHFullRun2/CMSSW_10_2_9/src/PlotsConfigurations/Configurations/monoHWW/Full2017_v7_3d/onTheFly/getxsweight.C'],
                'weight': mcCommonWeight + '*interpolationWeight_mhs_' + hs + '_mx_' + DM + '_mZp_' + Zp +'(genDarkHiggs_Pt)*getxsweight('+hs+','+DM+','+Zp+',300,150,1200)',
    'suppressNegative':['all'],
    'suppressNegativeNuisances' :['all'],

                'FilesPerJob': 20
            }




            
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




mhs = ['160']
mDM = ['300']
mZp = ['200','300','400','450','550','500','600','650','700','750','900','1100','1300','1400','1600','1700','1800','1900','2100','2200','2300','2400']

for hs in mhs:
    for DM in mDM:
        for Zp in mZp:
            samples['DH_mhs_' + hs + '_mx_' + DM  + '_mZp_' + Zp] = {
                'name': nanoGetSampleFiles(signalDirectory, 'DarkHiggs_MonoHs_HsToWWTo2l2nu_mhs_160_mx_150_mZp_1200'),
                'linesToAdd' : ['.L /afs/cern.ch/work/f/fernanpe/framework_monoHFullRun2/CMSSW_10_2_9/src/PlotsConfigurations/Configurations/monoHWW/Full2017_v7_3d/onTheFly/interpolationWeight_mhs_' + hs + '_mx_' + DM + '_mZp_' + Zp + '.C', '.L /afs/cern.ch/work/f/fernanpe/framework_monoHFullRun2/CMSSW_10_2_9/src/PlotsConfigurations/Configurations/monoHWW/Full2017_v7_3d/onTheFly/getxsweight.C'],
                'weight': mcCommonWeight + '*interpolationWeight_mhs_' + hs + '_mx_' + DM + '_mZp_' + Zp +'(genDarkHiggs_Pt)*getxsweight('+hs+','+DM+','+Zp+',160,150,1200)',
    'suppressNegative':['all'],
    'suppressNegativeNuisances' :['all'],

                'FilesPerJob': 20
            }




mhs = ['180']
mDM = ['300']
mZp = ['200','300','400','450','550','500','600','650','700','750','900','1100','1300','1400','1600','1700','1800','1900','2100','2200','2300','2400']

for hs in mhs:
    for DM in mDM:
        for Zp in mZp:
            samples['DH_mhs_' + hs + '_mx_' + DM  + '_mZp_' + Zp] = {
                'name': nanoGetSampleFiles(signalDirectory, 'DarkHiggs_MonoHs_HsToWWTo2l2nu_mhs_180_mx_150_mZp_1200'),
                'linesToAdd' : ['.L /afs/cern.ch/work/f/fernanpe/framework_monoHFullRun2/CMSSW_10_2_9/src/PlotsConfigurations/Configurations/monoHWW/Full2017_v7_3d/onTheFly/interpolationWeight_mhs_' + hs + '_mx_' + DM + '_mZp_' + Zp + '.C', '.L /afs/cern.ch/work/f/fernanpe/framework_monoHFullRun2/CMSSW_10_2_9/src/PlotsConfigurations/Configurations/monoHWW/Full2017_v7_3d/onTheFly/getxsweight.C'],
                'weight': mcCommonWeight + '*interpolationWeight_mhs_' + hs + '_mx_' + DM + '_mZp_' + Zp +'(genDarkHiggs_Pt)*getxsweight('+hs+','+DM+','+Zp+',180,150,1200)',
    'suppressNegative':['all'],
    'suppressNegativeNuisances' :['all'],

                'FilesPerJob': 20
            }



mhs = ['200']
mDM = ['300']
mZp = ['200','300','400','450','550','500','600','650','700','750','900','1100','1300','1400','1600','1700','1800','1900','2100','2200','2300','2400']

for hs in mhs:
    for DM in mDM:
        for Zp in mZp:
            samples['DH_mhs_' + hs + '_mx_' + DM  + '_mZp_' + Zp] = {
                'name': nanoGetSampleFiles(signalDirectory, 'DarkHiggs_MonoHs_HsToWWTo2l2nu_mhs_200_mx_150_mZp_1200'),
                'linesToAdd' : ['.L /afs/cern.ch/work/f/fernanpe/framework_monoHFullRun2/CMSSW_10_2_9/src/PlotsConfigurations/Configurations/monoHWW/Full2017_v7_3d/onTheFly/interpolationWeight_mhs_' + hs + '_mx_' + DM + '_mZp_' + Zp + '.C', '.L /afs/cern.ch/work/f/fernanpe/framework_monoHFullRun2/CMSSW_10_2_9/src/PlotsConfigurations/Configurations/monoHWW/Full2017_v7_3d/onTheFly/getxsweight.C'],
                'weight': mcCommonWeight + '*interpolationWeight_mhs_' + hs + '_mx_' + DM + '_mZp_' + Zp +'(genDarkHiggs_Pt)*getxsweight('+hs+','+DM+','+Zp+',200,150,1200)',
    'suppressNegative':['all'],
    'suppressNegativeNuisances' :['all'],

                'FilesPerJob': 20
            }





mhs = ['300']
mDM = ['300']
mZp = ['200','300','400','450','550','500','600','650','700','750','900','1100','1300','1400','1500','1600','1700','1800','1900','2000','2100','2200','2300','2400','2500']

for hs in mhs:
    for DM in mDM:
        for Zp in mZp:
            samples['DH_mhs_' + hs + '_mx_' + DM  + '_mZp_' + Zp] = {
                'name': nanoGetSampleFiles(signalDirectory, 'DarkHiggs_MonoHs_HsToWWTo2l2nu_mhs_300_mx_150_mZp_1200'),
                'linesToAdd' : ['.L /afs/cern.ch/work/f/fernanpe/framework_monoHFullRun2/CMSSW_10_2_9/src/PlotsConfigurations/Configurations/monoHWW/Full2017_v7_3d/onTheFly/interpolationWeight_mhs_' + hs + '_mx_' + DM + '_mZp_' + Zp + '.C', '.L /afs/cern.ch/work/f/fernanpe/framework_monoHFullRun2/CMSSW_10_2_9/src/PlotsConfigurations/Configurations/monoHWW/Full2017_v7_3d/onTheFly/getxsweight.C'],
                'weight': mcCommonWeight + '*interpolationWeight_mhs_' + hs + '_mx_' + DM + '_mZp_' + Zp +'(genDarkHiggs_Pt)*getxsweight('+hs+','+DM+','+Zp+',300,150,1200)',
    'suppressNegative':['all'],
    'suppressNegativeNuisances' :['all'],

                'FilesPerJob': 20
            }



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







mhs = ['250']
mDM = ['100','150','200','300']
mZp = ['200','300','400','450','550','500','600','650','700','750','800','900','1000','1100','1200','1300','1400','1500','1600','1700','1800','1900','2000','2100','2200','2300','2400','2500']

for hs in mhs:
    for DM in mDM:
        for Zp in mZp:
            samples['DH_mhs_' + hs + '_mx_' + DM  + '_mZp_' + Zp] = {
                'name': nanoGetSampleFiles(signalDirectory, 'DarkHiggs_MonoHs_HsToWWTo2l2nu_mhs_250_mx_150_mZp_1200'),
                'linesToAdd' : ['.L /afs/cern.ch/work/f/fernanpe/framework_monoHFullRun2/CMSSW_10_2_9/src/PlotsConfigurations/Configurations/monoHWW/Full2017_v7_3d/onTheFly/interpolationWeight_mhs_' + hs + '_mx_' + DM + '_mZp_' + Zp + '.C', '.L /afs/cern.ch/work/f/fernanpe/framework_monoHFullRun2/CMSSW_10_2_9/src/PlotsConfigurations/Configurations/monoHWW/Full2017_v7_3d/onTheFly/getxsweight.C'],
                'weight': mcCommonWeight + '*interpolationWeight_mhs_' + hs + '_mx_' + DM + '_mZp_' + Zp +'(genDarkHiggs_Pt)*getxsweight('+hs+','+DM+','+Zp+',250,150,1200)',
    'suppressNegative':['all'],
    'suppressNegativeNuisances' :['all'],

                'FilesPerJob': 300
            }






mhs = ['350']
mDM = ['100','150','200','300']
mZp = ['200','300','400','450','550','500','600','650','700','750','800','900','1000','1100','1200','1300','1400','1500','1600','1700','1800','1900','2000','2100','2200','2300','2400','2500']

for hs in mhs:
    for DM in mDM:
        for Zp in mZp:
            samples['DH_mhs_' + hs + '_mx_' + DM  + '_mZp_' + Zp] = {
                'name': nanoGetSampleFiles(signalDirectory, 'DarkHiggs_MonoHs_HsToWWTo2l2nu_mhs_350_mx_200_mZp_1200'),
                'linesToAdd' : ['.L /afs/cern.ch/work/f/fernanpe/framework_monoHFullRun2/CMSSW_10_2_9/src/PlotsConfigurations/Configurations/monoHWW/Full2017_v7_3d/onTheFly/interpolationWeight_mhs_' + hs + '_mx_' + DM + '_mZp_' + Zp + '.C', '.L /afs/cern.ch/work/f/fernanpe/framework_monoHFullRun2/CMSSW_10_2_9/src/PlotsConfigurations/Configurations/monoHWW/Full2017_v7_3d/onTheFly/getxsweight.C'],
                'weight': mcCommonWeight + '*interpolationWeight_mhs_' + hs + '_mx_' + DM + '_mZp_' + Zp +'(genDarkHiggs_Pt)*getxsweight('+hs+','+DM+','+Zp+',350,200,1200)',
    'suppressNegative':['all'],
    'suppressNegativeNuisances' :['all'],

                'FilesPerJob': 300
            }



###########################################
################## FAKE ###################
###########################################

samples['Fake'] = {
  'name': [],
  'weight': 'METFilter_DATA*fakeW',
  'weights': [],
  'isData': ['all'],
    'suppressNegative':['all'],
    'suppressNegativeNuisances' :['all'],
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

