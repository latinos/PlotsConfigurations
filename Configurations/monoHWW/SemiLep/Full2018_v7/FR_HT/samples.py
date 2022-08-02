import os
import json
import copy
import inspect

configurations = os.path.realpath(inspect.getfile(inspect.currentframe())) # this file
configurations = os.path.dirname(configurations) # Full2018
configurations = os.path.dirname(configurations) # HWWSemiLepHighMass
configurations = os.path.dirname(configurations) # Configurations

from LatinoAnalysis.Tools.commonTools import getSampleFiles, getBaseW, addSampleWeight

from LatinoAnalysis.Tools.HiggsXSection import HiggsXSection
HiggsXS = HiggsXSection()

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
######### Higgs mass samples and models ########
################################################

#models_file = 'models.py'
#if os.path.exists(models_file) :
#    handle = open(models_file,'r')
#    exec(handle)
#    handle.close()
#else:
#    print "!!! ERROR file ", models_file, " does not exist."


################################################
################# SKIMS ########################
################################################

dataReco = 'Run2018_102X_nAODv7_Full2018v7'
# These files where deleted around 06/01/2022
#dataSteps = 'DATAl1loose2018v7'
#fakeSteps = 'DATAl1loose2018v7'
# Proxy them by
dataSteps = 'DATAl1loose2018v7__l2loose'
fakeSteps = 'DATAl1loose2018v7__l2loose'

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
  # treeBaseDir = '/eos/user/s/ssiebert/HWWNano'

def makeMCDirectory(var=None):
    if var is not None:
        return os.path.join(treeBaseDir, mcProduction, mcSteps+'_'+var)
    else:
        return os.path.join(treeBaseDir, mcProduction, mcSteps)

mcDirectory = makeMCDirectory()
#mcDirectory = os.path.join(treeBaseDir, mcProduction, mcSteps)
dataDirectory = os.path.join(treeBaseDir, dataReco, dataSteps)
fakeDirectory = os.path.join(treeBaseDir, dataReco, fakeSteps)


#########################################
############ MC COMMON ##################
#########################################

# SFweight does not include btag weights
# No btagSF and no LepWPCut, 1tlVeto
mcCommonWeightNoMatch = 'XSWeight*SFweight[0]*METFilter_MC*PUJetIdSF[0]'
mcCommonWeight        = 'XSWeight*SFweight[0]*METFilter_MC*PUJetIdSF[0]*PromptGenLepMatch1l'

baseW_cache_file = 'cache_baseW.py'
if not os.path.exists(baseW_cache_file):
    baseW_cache_file_o = open(baseW_cache_file, 'w')
    baseW_cache_file_o.write('{}\n')
    baseW_cache_file_o.close()
    baseW_cache = {}
else: 
    baseW_cache_file_o = open(baseW_cache_file, 'r')
    baseW_cache = json.load(baseW_cache_file_o)
    baseW_cache_file_o.close()

def getCachedBaseW(sample_list):
    sample_list.sort()
    sample_key = '__'.join(sample_list)
    if not sample_key in baseW_cache:
        baseW_cache[sample_key] = getBaseWnAOD(mcDirectory, mcProduction, sample_list)
        baseW_cache_file_o = open(baseW_cache_file, 'w')
        baseW_cache_file_o.write(json.dumps(baseW_cache, indent=2))
    print('getCachedBaseW return: '+baseW_cache[sample_key] +'/baseW')
    return str(baseW_cache[sample_key] +'/baseW')

###########################################
#############  BACKGROUNDS  ###############
###########################################

###### DY #######

files = nanoGetSampleFiles(mcDirectory, 'DYJetsToLL_M-50') #Don't use LO(_ext0)! DYMVA Training!
files+= nanoGetSampleFiles(mcDirectory, 'DYJetsToLL_M-50_ext2')
files+= nanoGetSampleFiles(mcDirectory, 'DYJetsToLL_M-10to50-LO_ext1')
files+= nanoGetSampleFiles(mcDirectory, 'DYJetsToLL_M-50_HT-70to100')
files+= nanoGetSampleFiles(mcDirectory, 'DYJetsToLL_M-50_HT-100to200')
files+= nanoGetSampleFiles(mcDirectory, 'DYJetsToLL_M-50_HT-200to400')
files+= nanoGetSampleFiles(mcDirectory, 'DYJetsToLL_M-50_HT-400to600')
files+= nanoGetSampleFiles(mcDirectory, 'DYJetsToLL_M-50_HT-600to800')
files+= nanoGetSampleFiles(mcDirectory, 'DYJetsToLL_M-50_HT-800to1200')
files+= nanoGetSampleFiles(mcDirectory, 'DYJetsToLL_M-50_HT-1200to2500')
files+= nanoGetSampleFiles(mcDirectory, 'DYJetsToLL_M-50_HT-2500toInf')
files+= nanoGetSampleFiles(mcDirectory, 'DYJetsToLL_M-4to50_HT-100to200')
files+= nanoGetSampleFiles(mcDirectory, 'DYJetsToLL_M-4to50_HT-200to400')
files+= nanoGetSampleFiles(mcDirectory, 'DYJetsToLL_M-4to50_HT-400to600')
files+= nanoGetSampleFiles(mcDirectory, 'DYJetsToLL_M-4to50_HT-600toInf')

photon_filter = '( !(Sum$(PhotonGen_isPrompt==1 && PhotonGen_pt>10 && abs(PhotonGen_eta)<2.6) > 0 && Sum$(LeptonGen_isPrompt==1 && LeptonGen_pt>15)>=2) )'

samples['DY'] = {
    'name': files,
    'weight': mcCommonWeight + '*' + photon_filter,
    'FilesPerJob': 6,
    'suppressNegative' :['all'],
    'suppressNegativeNuisances' :['all'],
}

# baseW fixing
addSampleWeight(samples,'DY','DYJetsToLL_M-50',                getCachedBaseW(['DYJetsToLL_M-50', 'DYJetsToLL_M-50_ext2']))
addSampleWeight(samples,'DY','DYJetsToLL_M-50_ext2',           getCachedBaseW(['DYJetsToLL_M-50', 'DYJetsToLL_M-50_ext2']))

# Last M50 HT bin is missing
addSampleWeight(samples,'DY','DYJetsToLL_M-50',                    '(LHE_HT < 70)') 
addSampleWeight(samples,'DY','DYJetsToLL_M-50_ext2',               '(LHE_HT < 70)') 
addSampleWeight(samples,'DY','DYJetsToLL_M-10to50-LO_ext1',        '(LHE_HT < 100)')

# ll pT corr
addSampleWeight(samples,'DY','DYJetsToLL_M-50',               'DY_NLO_pTllrw')
addSampleWeight(samples,'DY','DYJetsToLL_M-50_ext2',          'DY_NLO_pTllrw')
addSampleWeight(samples,'DY','DYJetsToLL_M-10to50-LO_ext1',   'DY_LO_pTllrw') 
addSampleWeight(samples,'DY','DYJetsToLL_M-50_HT-70to100',    'DY_LO_pTllrw')
addSampleWeight(samples,'DY','DYJetsToLL_M-50_HT-100to200',   'DY_LO_pTllrw * 1.000') #HT stitching correction
addSampleWeight(samples,'DY','DYJetsToLL_M-50_HT-200to400',   'DY_LO_pTllrw * 0.999')
addSampleWeight(samples,'DY','DYJetsToLL_M-50_HT-400to600',   'DY_LO_pTllrw * 0.990')
addSampleWeight(samples,'DY','DYJetsToLL_M-50_HT-600to800',   'DY_LO_pTllrw * 0.975')
addSampleWeight(samples,'DY','DYJetsToLL_M-50_HT-800to1200',  'DY_LO_pTllrw * 0.907')
addSampleWeight(samples,'DY','DYJetsToLL_M-50_HT-1200to2500', 'DY_LO_pTllrw * 0.833')
addSampleWeight(samples,'DY','DYJetsToLL_M-50_HT-2500toInf',  'DY_LO_pTllrw * 1.015')  
addSampleWeight(samples,'DY','DYJetsToLL_M-4to50_HT-100to200','DY_LO_pTllrw') 
addSampleWeight(samples,'DY','DYJetsToLL_M-4to50_HT-200to400','DY_LO_pTllrw')
addSampleWeight(samples,'DY','DYJetsToLL_M-4to50_HT-400to600','DY_LO_pTllrw')

###### Top #######

# files = nanoGetSampleFiles(mcDirectory, 'TTToSemiLeptonic') + \
#         nanoGetSampleFiles(mcDirectory, 'TTTo2L2Nu') + \
#         nanoGetSampleFiles(mcDirectory, 'TTWjets') + \
#         nanoGetSampleFiles(mcDirectory, 'TTZjets') + \
#         nanoGetSampleFiles(mcDirectory, 'ST_s-channel_ext1') + \
#         nanoGetSampleFiles(mcDirectory, 'ST_t-channel_antitop') + \
#         nanoGetSampleFiles(mcDirectory, 'ST_t-channel_top') + \
#         nanoGetSampleFiles(mcDirectory, 'ST_tW_antitop_ext1') + \
#         nanoGetSampleFiles(mcDirectory, 'ST_tW_top_ext1')

# samples['top'] = {
#     'name': files,
#     'weight': mcCommonWeight,
#     'FilesPerJob': 5,
# }

# # ttbar pT re-weighting
# # https://twiki.cern.ch/twiki/bin/viewauth/CMS/TopPtReweighting
# # https://indico.cern.ch/event/904971/contributions/3857701/attachments/2036949/3410728/TopPt_20.05.12.pdf
# addSampleWeight(samples,'top','TTToSemiLeptonic','Top_pTrw')  # https://indico.cern.ch/event/904971/contributions/3857701/attachments/2036949/3410728/TopPt_20.05.12.pdf
# addSampleWeight(samples,'top','TTTo2L2Nu',       'Top_pTrw')
# addSampleWeight(samples,'top','TTWjets',         'Top_pTrw')
# addSampleWeight(samples,'top','TTZjets',         'Top_pTrw')


# # Xsec correction single top s and t channel: xsec in tree is leptonDecays, but sample is inclusiveDecays
# lepD_to_incD = '(100./(10.75 + 10.57 + 11.25))'
# #addSampleWeight(samples,'top','ST_s-channel',         lepD_to_incD)
# addSampleWeight(samples,'top','ST_t-channel_antitop', lepD_to_incD)
# addSampleWeight(samples,'top','ST_t-channel_top',     lepD_to_incD)

###### VBF V ######

# files = nanoGetSampleFiles(mcDirectory,'WLNuJJ_EWK')
# files+= nanoGetSampleFiles(mcDirectory,'EWKZ2Jets_ZToLL_M-50')

# samples['VBF-V']  = {
#     'name' : files,
#     'weight': mcCommonWeight, 
#     'FilesPerJob' : 6,
# }

########## W+jets #########

# HT binned
files = nanoGetSampleFiles(mcDirectory, 'WJetsToLNu_HT70_100')
files+= nanoGetSampleFiles(mcDirectory, 'WJetsToLNu_HT100_200')
files+= nanoGetSampleFiles(mcDirectory, 'WJetsToLNu_HT200_400')
files+= nanoGetSampleFiles(mcDirectory, 'WJetsToLNu_HT400_600')
files+= nanoGetSampleFiles(mcDirectory, 'WJetsToLNu_HT600_800')
files+= nanoGetSampleFiles(mcDirectory, 'WJetsToLNu_HT800_1200')
files+= nanoGetSampleFiles(mcDirectory, 'WJetsToLNu_HT1200_2500')
files+= nanoGetSampleFiles(mcDirectory, 'WJetsToLNu_HT2500_inf')
files+= nanoGetSampleFiles(mcDirectory, 'WJetsToLNu-LO')

samples['Wjets'] = {
    'name'   : files,
    #'weight' : mcCommonWeight +'*EWKnloW[0]', # ewk nlo correction https://arxiv.org/pdf/1705.04664v2.pdf 
    'weight' : mcCommonWeight + '*ewknloW*kfact[0]', 
    #'weight' : mcCommonWeight, 
    'FilesPerJob' : 4,
}

addSampleWeight(samples, 'Wjets', 'WJetsToLNu-LO', '(LHE_HT < 70)') 

# HT stitching from Davide (derived by comparing HT to inclusive LO with only lep pt cuts)
addSampleWeight(samples, 'Wjets', 'WJetsToLNu_HT70_100',    '1.21 * 0.95148')  
addSampleWeight(samples, 'Wjets', 'WJetsToLNu_HT100_200',   '0.9471') 
addSampleWeight(samples, 'Wjets', 'WJetsToLNu_HT200_400',   '0.9515') 
addSampleWeight(samples, 'Wjets', 'WJetsToLNu_HT400_600',   '0.9581') 
addSampleWeight(samples, 'Wjets', 'WJetsToLNu_HT600_800',   '1.0582') 
addSampleWeight(samples, 'Wjets', 'WJetsToLNu_HT800_1200',  '1.1285') 
addSampleWeight(samples, 'Wjets', 'WJetsToLNu_HT1200_2500', '1.3268') 
addSampleWeight(samples, 'Wjets', 'WJetsToLNu_HT2500_inf',  '2.7948') 

################################################
############ DATA DECLARATION ##################
################################################

DataRun = [
    ['A','Run2018A-02Apr2020-v1'] ,
    ['B','Run2018B-02Apr2020-v1'] ,
    ['C','Run2018C-02Apr2020-v1'] ,
    ['D','Run2018D-02Apr2020-v1'] ,
]

DataSets = [
    'SingleMuon',
    'EGamma'
]

DataTrig = {
    #'SingleMuon'     : 'Trigger_sngMu' ,
    #'SingleElectron' : '!Trigger_sngMu && Trigger_sngEl' ,
    'SingleMuon'     : '!Trigger_sngEl && Trigger_sngMu' ,
    'EGamma' : 'Trigger_sngEl' ,
}

###########################################
################## DATA ###################
###########################################

########### DATA ###########

samples['DATA'] = {
  'name': [],
  'weight': 'METFilter_DATA',
  'weights': [],
  'isData': ['all'],
  'FilesPerJob': 15
}

for _, sd in DataRun:
  for pd in DataSets:
    files = nanoGetSampleFiles(dataDirectory, pd + '_' + sd)
    samples['DATA']['name'].extend(files)
    samples['DATA']['weights'].extend([DataTrig[pd]] * len(files))


#samples = { k:v for k, v in samples.items() if k  in ["Wjets"]}
