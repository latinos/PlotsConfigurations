import os
import json
import copy
import inspect

configurations = os.path.realpath(inspect.getfile(inspect.currentframe())) # this file
configurations = os.path.dirname(configurations) # Full2018
configurations = os.path.dirname(configurations) # HWWSemiLepHighMass
configurations = os.path.dirname(configurations) # Configurations

from LatinoAnalysis.Tools.commonTools import getSampleFiles, getBaseW, addSampleWeight, getBaseWnAOD

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
################# SKIMS ########################
################################################

dataReco = 'Run2016_102X_nAODv7_Full2016v7'
dataSteps = 'DATAl1loose2016v7__DATACombJJLNu2016'
fakeSteps = 'DATAl1loose2016v7__DATACombJJLNu2016'


mcProduction = 'Summer16_102X_nAODv7_Full2016v7'
mcSteps = 'MCl1loose2016v7__MCCorr2016v7__MCCombJJLNu2016'

##############################################
###### Tree base directory for the site ######
##############################################

SITE=os.uname()[1]
if    'iihe' in SITE:
  treeBaseDir = '/pnfs/iihe/cms/store/group/phys_higgs/cmshww/amassiro/HWWNano/'
elif  'cern' in SITE:
  treeBaseDir = '/eos/cms/store/group/phys_higgs/cmshww/amassiro/HWWNano'

def makeMCDirectory(var=None, base=treeBaseDir, step=mcSteps):
    if var is not None:
        return os.path.join(base, mcProduction, step+'_'+var)
    else:
        return os.path.join(base, mcProduction, step)

mcDirectory = makeMCDirectory()
if 'iihe' in SITE:
    VBSDirectory = makeMCDirectory(base='/pnfs/iihe/cms/store/group/phys_higgs/cmshww/amassiro/HWWNano_smp')
else:
    VBSDirectory = makeMCDirectory(base='/eos/cms/store/group/phys_smp/VJets_NLO_VBSanalyses')
myMcDirectory = makeMCDirectory(base='/eos/user/s/svanputt/monoHWW/samples/HWWNano')
dataDirectory = os.path.join(treeBaseDir, dataReco, dataSteps)
fakeDirectory = os.path.join(treeBaseDir, dataReco, fakeSteps)


#########################################
############ MC COMMON ##################
#########################################

# SFweight does not include btag weights
mcCommonWeightNoMatch = 'XSWeight*SFweight[0]*METFilter_MC*btagSF[0]*PUJetIdSF[0]*LepWPCut[0]*1tlVeto[0]'
mcCommonWeightNoXS    =          'SFweight[0]*METFilter_MC*btagSF[0]*PUJetIdSF[0]*LepWPCut[0]*1tlVeto[0]*PromptGenLepMatch1l'
mcCommonWeight        = 'XSWeight*SFweight[0]*METFilter_MC*btagSF[0]*PUJetIdSF[0]*LepWPCut[0]*1tlVeto[0]*PromptGenLepMatch1l'

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

## NLO 
#files = nanoGetSampleFiles(mcDirectory, 'DYJetsToLL_M-50_ext2')
#files+= nanoGetSampleFiles(mcDirectory, 'DYJetsToLL_M-10to50_ext1')
#files+= nanoGetSampleFiles(mcDirectory, 'DYJetsToLL_M-5to50_HT-70to100')
#files+= nanoGetSampleFiles(mcDirectory, 'DYJetsToLL_M-5to50_HT-100to200')
#files+= nanoGetSampleFiles(mcDirectory, 'DYJetsToLL_M-5to50_HT-200to400')
#files+= nanoGetSampleFiles(mcDirectory, 'DYJetsToLL_M-5to50_HT-400to600')
#files+= nanoGetSampleFiles(mcDirectory, 'DYJetsToLL_M-5to50_HT-600toinf')
#
#samples['DY'] = {
#    'name': files,
#    'weight': mcCommonWeight + '*(Sum$(GenPart_pdgId == 22 && TMath::Odd(GenPart_statusFlags) && GenPart_pt > 20.) == 0)',
#    'FilesPerJob': 3,
#    'suppressNegative' :['all'],
#    'suppressNegativeNuisances' :['all'],
#}
#
#addSampleWeight(samples,'DY','DYJetsToLL_M-50_ext2'          , 'DY_NLO_pTllrw')
#addSampleWeight(samples,'DY','DYJetsToLL_M-5to50_HT-70to100' ,  'DY_LO_pTllrw')
#addSampleWeight(samples,'DY','DYJetsToLL_M-5to50_HT-100to200', 'DY_LO_pTllrw')
#addSampleWeight(samples,'DY','DYJetsToLL_M-5to50_HT-200to400', 'DY_LO_pTllrw')
#addSampleWeight(samples,'DY','DYJetsToLL_M-5to50_HT-400to600', 'DY_LO_pTllrw')
#addSampleWeight(samples,'DY','DYJetsToLL_M-5to50_HT-600toinf', 'DY_LO_pTllrw')
#addSampleWeight(samples,'DY','DYJetsToLL_M-10to50_ext1'      , 'DY_LO_pTllrw*(LHE_HT<100)')

# LO high stat
files = nanoGetSampleFiles(mcDirectory,'DYJetsToLL_M-50_ext2') 
#files+= nanoGetSampleFiles(mcDirectory, 'DYJetsToLL_M-10to50-LO')
#files+= nanoGetSampleFiles(mcDirectory, 'DYJetsToLL_M-10to50-LO_ext1')
files+= nanoGetSampleFiles(mcDirectory,'DYJetsToLL_M-10to50')
files+= nanoGetSampleFiles(mcDirectory,'DYJetsToLL_M-10to50_ext1')
files+= nanoGetSampleFiles(mcDirectory,'DYJetsToLL_M-50_HT-70to100')
files+= nanoGetSampleFiles(mcDirectory,'DYJetsToLL_M-50_HT-100to200')
files+= nanoGetSampleFiles(mcDirectory,'DYJetsToLL_M-50_HT-100to200_ext1')
files+= nanoGetSampleFiles(mcDirectory,'DYJetsToLL_M-50_HT-200to400')
files+= nanoGetSampleFiles(mcDirectory,'DYJetsToLL_M-50_HT-200to400_ext1')
files+= nanoGetSampleFiles(mcDirectory,'DYJetsToLL_M-50_HT-400to600')
files+= nanoGetSampleFiles(mcDirectory,'DYJetsToLL_M-50_HT-400to600_ext1')
files+= nanoGetSampleFiles(mcDirectory,'DYJetsToLL_M-50_HT-600to800')
files+= nanoGetSampleFiles(mcDirectory,'DYJetsToLL_M-50_HT-800to1200')
files+= nanoGetSampleFiles(mcDirectory,'DYJetsToLL_M-50_HT-1200to2500')
files+= nanoGetSampleFiles(mcDirectory,'DYJetsToLL_M-50_HT-2500toInf')
files+= nanoGetSampleFiles(mcDirectory,'DYJetsToLL_M-5to50_HT-70to100')
files+= nanoGetSampleFiles(mcDirectory,'DYJetsToLL_M-5to50_HT-100to200')
files+= nanoGetSampleFiles(mcDirectory,'DYJetsToLL_M-5to50_HT-200to400')
#files+= nanoGetSampleFiles(mcDirectory,'DYJetsToLL_M-5to50_HT-200to400_ext1')
files+= nanoGetSampleFiles(mcDirectory,'DYJetsToLL_M-5to50_HT-400to600')
files+= nanoGetSampleFiles(mcDirectory,'DYJetsToLL_M-5to50_HT-400to600_ext1')
files+= nanoGetSampleFiles(mcDirectory,'DYJetsToLL_M-5to50_HT-600toinf')
files+= nanoGetSampleFiles(mcDirectory,'DYJetsToLL_M-5to50_HT-600toinf_ext1')

#photon_filter = '(Sum$(GenPart_pdgId == 22 && TMath::Odd(GenPart_statusFlags) && GenPart_pt > 20.) == 0)'
photon_filter = '( !(Sum$(PhotonGen_isPrompt==1 && PhotonGen_pt>10 && abs(PhotonGen_eta)<2.6) > 0 && Sum$(LeptonGen_isPrompt==1 && LeptonGen_pt>15)>=2) )'

samples['DY'] = {
    'name': files,
    'weight': mcCommonWeight + '*' + photon_filter,
    'FilesPerJob': 6,
    'suppressNegative' :['all'],
    'suppressNegativeNuisances' :['all'],
}

# baseW fixing
#addSampleWeight(samples,'DY','DYJetsToLL_M-10to50-LO',                getCachedBaseW(['DYJetsToLL_M-10to50-LO', 'DYJetsToLL_M-10to50-LO_ext1']))
#addSampleWeight(samples,'DY','DYJetsToLL_M-10to50-LO_ext1',           getCachedBaseW(['DYJetsToLL_M-10to50-LO', 'DYJetsToLL_M-10to50-LO_ext1']))
addSampleWeight(samples,'DY','DYJetsToLL_M-10to50',                getCachedBaseW(['DYJetsToLL_M-10to50', 'DYJetsToLL_M-10to50_ext1']))
addSampleWeight(samples,'DY','DYJetsToLL_M-10to50_ext1',           getCachedBaseW(['DYJetsToLL_M-10to50', 'DYJetsToLL_M-10to50_ext1']))

addSampleWeight(samples,'DY','DYJetsToLL_M-50_HT-100to200',        getCachedBaseW(['DYJetsToLL_M-50_HT-100to200', 'DYJetsToLL_M-50_HT-100to200_ext1']))
addSampleWeight(samples,'DY','DYJetsToLL_M-50_HT-100to200_ext1',   getCachedBaseW(['DYJetsToLL_M-50_HT-100to200', 'DYJetsToLL_M-50_HT-100to200_ext1']))
addSampleWeight(samples,'DY','DYJetsToLL_M-50_HT-200to400',        getCachedBaseW(['DYJetsToLL_M-50_HT-200to400', 'DYJetsToLL_M-50_HT-200to400_ext1']))
addSampleWeight(samples,'DY','DYJetsToLL_M-50_HT-200to400_ext1',   getCachedBaseW(['DYJetsToLL_M-50_HT-200to400', 'DYJetsToLL_M-50_HT-200to400_ext1']))
addSampleWeight(samples,'DY','DYJetsToLL_M-50_HT-400to600',        getCachedBaseW(['DYJetsToLL_M-50_HT-400to600', 'DYJetsToLL_M-50_HT-400to600_ext1']))
addSampleWeight(samples,'DY','DYJetsToLL_M-50_HT-400to600_ext1',   getCachedBaseW(['DYJetsToLL_M-50_HT-400to600', 'DYJetsToLL_M-50_HT-400to600_ext1']))

#addSampleWeight(samples,'DY','DYJetsToLL_M-5to50_HT-200to400',     getCachedBaseW(['DYJetsToLL_M-5to50_HT-200to400', 'DYJetsToLL_M-5to50_HT-200to400_ext1']))
#addSampleWeight(samples,'DY','DYJetsToLL_M-5to50_HT-200to400_ext1',getCachedBaseW(['DYJetsToLL_M-5to50_HT-200to400', 'DYJetsToLL_M-5to50_HT-200to400_ext1']))
addSampleWeight(samples,'DY','DYJetsToLL_M-5to50_HT-400to600',     getCachedBaseW(['DYJetsToLL_M-5to50_HT-400to600', 'DYJetsToLL_M-5to50_HT-400to600_ext1']))
addSampleWeight(samples,'DY','DYJetsToLL_M-5to50_HT-400to600_ext1',getCachedBaseW(['DYJetsToLL_M-5to50_HT-400to600', 'DYJetsToLL_M-5to50_HT-400to600_ext1']))
addSampleWeight(samples,'DY','DYJetsToLL_M-5to50_HT-600toinf',     getCachedBaseW(['DYJetsToLL_M-5to50_HT-600toinf', 'DYJetsToLL_M-5to50_HT-600toinf_ext1']))
addSampleWeight(samples,'DY','DYJetsToLL_M-5to50_HT-600toinf_ext1',getCachedBaseW(['DYJetsToLL_M-5to50_HT-600toinf', 'DYJetsToLL_M-5to50_HT-600toinf_ext1']))

# Last M50 HT bin is missing
addSampleWeight(samples,'DY','DYJetsToLL_M-50_ext2',               '(LHE_HT < 70)') 
#addSampleWeight(samples,'DY','DYJetsToLL_M-10to50-LO',             '(LHE_HT < 100)')
#addSampleWeight(samples,'DY','DYJetsToLL_M-10to50-LO_ext1',        '(LHE_HT < 100)')
addSampleWeight(samples,'DY','DYJetsToLL_M-10to50',                '(LHE_HT < 70)')
addSampleWeight(samples,'DY','DYJetsToLL_M-10to50_ext1',           '(LHE_HT < 70)')

# ll pT corr
addSampleWeight(samples,'DY','DYJetsToLL_M-50_ext2',               'DY_NLO_pTllrw') 
#addSampleWeight(samples,'DY','DYJetsToLL_M-10to50-LO',             'DY_LO_pTllrw')
#addSampleWeight(samples,'DY','DYJetsToLL_M-10to50-LO_ext1',        'DY_LO_pTllrw')
addSampleWeight(samples,'DY','DYJetsToLL_M-10to50',                'DY_NLO_pTllrw')
addSampleWeight(samples,'DY','DYJetsToLL_M-10to50_ext1',           'DY_NLO_pTllrw')
addSampleWeight(samples,'DY','DYJetsToLL_M-50_HT-70to100',         'DY_LO_pTllrw')
addSampleWeight(samples,'DY','DYJetsToLL_M-50_HT-100to200',        'DY_LO_pTllrw')
addSampleWeight(samples,'DY','DYJetsToLL_M-50_HT-100to200_ext1',   'DY_LO_pTllrw')
addSampleWeight(samples,'DY','DYJetsToLL_M-50_HT-200to400',        'DY_LO_pTllrw')
addSampleWeight(samples,'DY','DYJetsToLL_M-50_HT-200to400_ext1',   'DY_LO_pTllrw')
addSampleWeight(samples,'DY','DYJetsToLL_M-50_HT-400to600',        'DY_LO_pTllrw')
addSampleWeight(samples,'DY','DYJetsToLL_M-50_HT-400to600_ext1',   'DY_LO_pTllrw')
addSampleWeight(samples,'DY','DYJetsToLL_M-50_HT-600to800',        'DY_LO_pTllrw')
addSampleWeight(samples,'DY','DYJetsToLL_M-50_HT-800to1200',       'DY_LO_pTllrw')
addSampleWeight(samples,'DY','DYJetsToLL_M-50_HT-1200to2500',      'DY_LO_pTllrw')
addSampleWeight(samples,'DY','DYJetsToLL_M-50_HT-2500toInf',       'DY_LO_pTllrw')
addSampleWeight(samples,'DY','DYJetsToLL_M-5to50_HT-70to100',      'DY_LO_pTllrw')
addSampleWeight(samples,'DY','DYJetsToLL_M-5to50_HT-100to200',     'DY_LO_pTllrw')
addSampleWeight(samples,'DY','DYJetsToLL_M-5to50_HT-200to400',     'DY_LO_pTllrw')
#addSampleWeight(samples,'DY','DYJetsToLL_M-5to50_HT-200to400_ext1','DY_LO_pTllrw')
addSampleWeight(samples,'DY','DYJetsToLL_M-5to50_HT-400to600',     'DY_LO_pTllrw')
addSampleWeight(samples,'DY','DYJetsToLL_M-5to50_HT-400to600_ext1','DY_LO_pTllrw')
addSampleWeight(samples,'DY','DYJetsToLL_M-5to50_HT-600toinf',     'DY_LO_pTllrw')
addSampleWeight(samples,'DY','DYJetsToLL_M-5to50_HT-600toinf_ext1','DY_LO_pTllrw')

###### Top #######

files = nanoGetSampleFiles(mcDirectory, 'TTToSemiLeptonic') + \
        nanoGetSampleFiles(mcDirectory, 'TTTo2L2Nu') + \
        nanoGetSampleFiles(mcDirectory, 'TTWJetsToLNu_ext1') + \
        nanoGetSampleFiles(mcDirectory, 'TTZjets') + \
        nanoGetSampleFiles(mcDirectory, 'ST_s-channel') + \
        nanoGetSampleFiles(mcDirectory, 'ST_t-channel_antitop') + \
        nanoGetSampleFiles(mcDirectory, 'ST_t-channel_top') + \
        nanoGetSampleFiles(mcDirectory, 'ST_tW_antitop') + \
        nanoGetSampleFiles(mcDirectory, 'ST_tW_top')

samples['top'] = {
    'name': files,
    'weight': mcCommonWeight,
    #'FilesPerJob': 3,
    'FilesPerJob': 2,
}

# ttbar pT re-weighting
# https://twiki.cern.ch/twiki/bin/viewauth/CMS/TopPtReweighting
# https://indico.cern.ch/event/904971/contributions/3857701/attachments/2036949/3410728/TopPt_20.05.12.pdf
addSampleWeight(samples,'top','TTToSemiLeptonic','Top_pTrw')  
addSampleWeight(samples,'top','TTTo2L2Nu',         'Top_pTrw')
addSampleWeight(samples,'top','TTWJetsToLNu_ext1', 'Top_pTrw')
addSampleWeight(samples,'top','TTZjets',           'Top_pTrw')


# Xsec correction single top s and t channel: xsec in tree is leptonDecays, but sample is inclusiveDecays
lepD_to_incD = '(100./(10.75 + 10.57 + 11.25))'
#addSampleWeight(samples,'top','ST_s-channel',         lepD_to_incD)
addSampleWeight(samples,'top','ST_t-channel_antitop', lepD_to_incD)
addSampleWeight(samples,'top','ST_t-channel_top',     lepD_to_incD)

###### VBF V ######

#FIXME: missing
#files = nanoGetSampleFiles(mcDirectory,'WLNuJJ_EWK')
#files+= nanoGetSampleFiles(mcDirectory,'EWKZ2Jets_ZToLL_M-50')

#samples['VBF-V']  = {
#    'name' : files,
#    'weight': mcCommonWeight, 
#    'FilesPerJob' : 6,
#}



#-------------------------- inspired by ggH

###### WW ########

files = nanoGetSampleFiles(mcDirectory, 'WWToLNuQQ')
#files+= nanoGetSampleFiles(mcDirectory, 'WWTo2L2Nu')

samples['WW'] = {
    'name': files,
    'weight': mcCommonWeight + '*nllW*ewknloW', # NLL PS correction on WW pT for qq>WW
    'FilesPerJob': 3
}

# Taking ewk samples from semi-lep VBS (from Davide Valsecchi) is this correct?
# Name indicates for example WpTo2J_WmToLNu -> WplusTo2JWminusToLNuJJ_EWK_LO_SM_MJJ100PTJ10
# Usually WpWmJJ_EWK but this is WWJJToLNuLNu_EWK
files = nanoGetSampleFiles(VBSDirectory,'WpTo2J_WmToLNu')
#files+= nanoGetSampleFiles(VBSDirectory,'WpToLNu_WmTo2J') #FIXME: missing
files+= nanoGetSampleFiles(VBSDirectory,'WpToLNu_WpTo2J')
files+= nanoGetSampleFiles(VBSDirectory,'WmToLNu_WmTo2J')

samples['WWewk'] = {
    'name': files,
    'weight': mcCommonWeight + '*(Sum$(abs(GenPart_pdgId)==6 || GenPart_pdgId==25)==0)',
    'FilesPerJob': 6
}

samples['ggWW'] = {
    'name'   : nanoGetSampleFiles(mcDirectory, 'GluGluWWToLNuQQ'),
    'weight' : mcCommonWeight, 
    'FilesPerJob': 4
}

###### WZ ########

# Taking samples from semi-lep VBS (from Davide Valsecchi) is this correct?
# Name indicates for example WmTo2J_ZTo2L_QCD -> WminusTo2JZTo2LJJ_QCD_LO_SM_MJJ100PTJ10
# Also available: WZ (inclusive), WZTo2L2Q, WZTo3LNu 
# Not available : WZToLNu3Q

files = nanoGetSampleFiles(VBSDirectory,'WmTo2J_ZTo2L_QCD' )
files+= nanoGetSampleFiles(VBSDirectory,'WpTo2J_ZTo2L_QCD' )
files+= nanoGetSampleFiles(VBSDirectory,'WmToLNu_ZTo2J_QCD')
files+= nanoGetSampleFiles(VBSDirectory,'WpToLNu_ZTo2J_QCD')

samples['WZqcd'] = {
    'name': files,
    'weight': mcCommonWeight,
    'FilesPerJob': 4
}

files = nanoGetSampleFiles(VBSDirectory,'WmTo2J_ZTo2L' )
files+= nanoGetSampleFiles(VBSDirectory,'WpTo2J_ZTo2L' )
files+= nanoGetSampleFiles(VBSDirectory,'WmToLNu_ZTo2J')
files+= nanoGetSampleFiles(VBSDirectory,'WpToLNu_ZTo2J')

samples['WZewk'] = {
    'name': files,
    'weight': mcCommonWeight,
    'FilesPerJob': 4
}

###### ZZ ########

# Taking samples from semi-lep VBS (from Davide Valsecchi) is this correct?
# Name indicated for example ZTo2L_ZTo2J -> ZTo2LZTo2JJJ_EWK_LO_SM_MJJ100PTJ10
# FIXME: only ZTo2L_ZTo2J available (ewk), ZTo2L_ZTo2J_QCD_LO missing in samplecrossection file
# Also available: ZZ (inclusive), ZZTo2L2Nu, ZZTo2L2Q, ZZTo4L

files = nanoGetSampleFiles(VBSDirectory,'ZTo2L_ZTo2J'  )
files+= nanoGetSampleFiles(VBSDirectory,'ZTo2L_ZTo2J_QCD')

samples['ZZ'] = {
    'name': files,
    'weight': mcCommonWeight,
    'FilesPerJob': 4
}

########## W+jets #########

#### NLO
#
## NLO combine stat
##oldbW100pt = getBaseWnAOD(mcDirectory, mcProduction, ['WJetsToLNu_Wpt100To250'])
##newbW100pt = getBaseWnAOD(mcDirectory, mcProduction, ['WJetsToLNu_Wpt100To250', 'WJetsToLNu_Wpt100To250_ext1'])
##newbW100w = newbW100pt+'/baseW'
#newbW100w = getCachedBaseW(['WJetsToLNu_Wpt100To250', 'WJetsToLNu_Wpt100To250_ext1'])
#
##oldbW250pt = getBaseWnAOD(mcDirectory, mcProduction, ['WJetsToLNu_Wpt250To400'])
##newbW250pt = getBaseWnAOD(mcDirectory, mcProduction, ['WJetsToLNu_Wpt250To400', 'WJetsToLNu_Wpt250To400_ext1'])
##newbW250w = newbW250pt+'/baseW'
#newbW250w = getCachedBaseW(['WJetsToLNu_Wpt250To400', 'WJetsToLNu_Wpt250To400_ext1'])
#
##oldbW400pt = getBaseWnAOD(mcDirectory, mcProduction, ['WJetsToLNu_Wpt400To600'])
##newbW400pt = getBaseWnAOD(mcDirectory, mcProduction, ['WJetsToLNu_Wpt400To600', 'WJetsToLNu_Wpt400To600_ext1'])
##newbW400w = newbW400pt+'/baseW'
#newbW400w = getCachedBaseW(['WJetsToLNu_Wpt400To600', 'WJetsToLNu_Wpt400To600_ext1'])
#
##oldbW600pt = getBaseWnAOD(mcDirectory, mcProduction, ['WJetsToLNu_Wpt600ToInf'])
##newbW600pt = getBaseWnAOD(mcDirectory, mcProduction, ['WJetsToLNu_Wpt600ToInf', 'WJetsToLNu_Wpt600ToInf_ext1'])
##newbW600w = newbW600pt+'/baseW'
#newbW600w = getCachedBaseW(['WJetsToLNu_Wpt600ToInf', 'WJetsToLNu_Wpt600ToInf_ext1'])
#
#files = nanoGetSampleFiles(mcDirectory, 'WJetsToLNu_Wpt100To250')
#files+= nanoGetSampleFiles(mcDirectory, 'WJetsToLNu_Wpt250To400')
#files+= nanoGetSampleFiles(mcDirectory, 'WJetsToLNu_Wpt400To600')
#files+= nanoGetSampleFiles(mcDirectory, 'WJetsToLNu_Wpt600ToInf')
#files+= nanoGetSampleFiles(mcDirectory, 'WJetsToLNu_Wpt100To250_ext1')
#files+= nanoGetSampleFiles(mcDirectory, 'WJetsToLNu_Wpt250To400_ext1')
#files+= nanoGetSampleFiles(mcDirectory, 'WJetsToLNu_Wpt400To600_ext1')
#files+= nanoGetSampleFiles(mcDirectory, 'WJetsToLNu_Wpt600ToInf_ext1')
#files+= nanoGetSampleFiles(mcDirectory, 'WJetsToLNu_ext2')
#
#samples['WjetsNLO'] = {
#    'name'   : files,
#    'weight' : mcCommonWeight +'*EWKnloW[0]', # ewk nlo correction https://arxiv.org/pdf/1705.04664v2.pdf 
#    'FilesPerJob' : 4,
#    #'subsamples': {
#    #    '2j_dRjj_low' : 'Sum$(CleanJet_pt>30) == 2 && MHlnjj_dr_jVj < 2', 
#    #    '3j_dRjj_low' : 'Sum$(CleanJet_pt>30) == 3 && MHlnjj_dr_jVj < 2', 
#    #    '4j_dRjj_low' : 'Sum$(CleanJet_pt>30) >= 4 && MHlnjj_dr_jVj < 2', 
#    #    '2j_dRjj_hig' : 'Sum$(CleanJet_pt>30) == 2 && MHlnjj_dr_jVj >= 2', 
#    #    '3j_dRjj_hig' : 'Sum$(CleanJet_pt>30) == 3 && MHlnjj_dr_jVj >= 2', 
#    #    '4j_dRjj_hig' : 'Sum$(CleanJet_pt>30) >= 4 && MHlnjj_dr_jVj >= 2', 
#    #},
#}
#
## fix baseW for ext samples
#addSampleWeight(samples, 'WjetsNLO', 'WJetsToLNu_Wpt100To250'     , newbW100w)
#addSampleWeight(samples, 'WjetsNLO', 'WJetsToLNu_Wpt100To250_ext1', newbW100w)
#addSampleWeight(samples, 'WjetsNLO', 'WJetsToLNu_Wpt250To400'     , newbW250w)
#addSampleWeight(samples, 'WjetsNLO', 'WJetsToLNu_Wpt250To400_ext1', newbW250w)
#addSampleWeight(samples, 'WjetsNLO', 'WJetsToLNu_Wpt400To600'     , newbW400w)
#addSampleWeight(samples, 'WjetsNLO', 'WJetsToLNu_Wpt400To600_ext1', newbW400w)
#addSampleWeight(samples, 'WjetsNLO', 'WJetsToLNu_Wpt600ToInf'     , newbW600w)
#addSampleWeight(samples, 'WjetsNLO', 'WJetsToLNu_Wpt600ToInf_ext1', newbW600w)
#
## avoid double counting
#addSampleWeight(samples, 'WjetsNLO', 'WJetsToLNu_ext2', '(LHE_Vpt < 120)')
#addSampleWeight(samples, 'WjetsNLO', 'WJetsToLNu_Wpt100To250'     , '(LHE_Vpt > 120)')
#addSampleWeight(samples, 'WjetsNLO', 'WJetsToLNu_Wpt100To250_ext1', '(LHE_Vpt > 120)')
#addSampleWeight(samples, 'WjetsNLO', 'WJetsToLNu_Wpt250To400'     , '(LHE_Vpt > 120)')
#addSampleWeight(samples, 'WjetsNLO', 'WJetsToLNu_Wpt250To400_ext1', '(LHE_Vpt > 120)')
#addSampleWeight(samples, 'WjetsNLO', 'WJetsToLNu_Wpt400To600'     , '(LHE_Vpt > 120)')
#addSampleWeight(samples, 'WjetsNLO', 'WJetsToLNu_Wpt400To600_ext1', '(LHE_Vpt > 120)')
#addSampleWeight(samples, 'WjetsNLO', 'WJetsToLNu_Wpt600ToInf'     , '(LHE_Vpt > 120)')
#addSampleWeight(samples, 'WjetsNLO', 'WJetsToLNu_Wpt600ToInf_ext1', '(LHE_Vpt > 120)')

### LO

# baseW
print('Extracting basW LO samples')
#newbWLO = getBaseWnAOD(mcDirectory, 'Summer16_102X_nAODv7_Full2016v7', ['WJetsToLNu-LO', 'WJetsToLNu-LO_ext2'])
#newbWLOw = newbWLO+'/baseW'
newbWLOw = getCachedBaseW(['WJetsToLNu-LO', 'WJetsToLNu-LO_ext2'])

#newbWHT100 = getBaseWnAOD(mcDirectory, 'Summer16_102X_nAODv7_Full2016v7', ['WJetsToLNu_HT100_200', 'WJetsToLNu_HT100_200_ext2'])
#newbWHT100w = newbWHT100+'/baseW'
newbWHT100w = getCachedBaseW(['WJetsToLNu_HT100_200', 'WJetsToLNu_HT100_200_ext2']) 

#newbWHT200 = getBaseWnAOD(mcDirectory, 'Summer16_102X_nAODv7_Full2016v7', ['WJetsToLNu_HT200_400', 'WJetsToLNu_HT200_400_ext2'])
#newbWHT200w = newbWHT200+'/baseW'
newbWHT200w = getCachedBaseW(['WJetsToLNu_HT200_400', 'WJetsToLNu_HT200_400_ext2'])

#newbWHT400 = getBaseWnAOD(mcDirectory, 'Summer16_102X_nAODv7_Full2016v7', ['WJetsToLNu_HT400_600', 'WJetsToLNu_HT400_600_ext1'])
#newbWHT400w = newbWHT400+'/baseW'
newbWHT400w = getCachedBaseW(['WJetsToLNu_HT400_600', 'WJetsToLNu_HT400_600_ext1'])

#newbWHT600 = getBaseWnAOD(mcDirectory, 'Summer16_102X_nAODv7_Full2016v7', ['WJetsToLNu_HT600_800', 'WJetsToLNu_HT600_800_ext1'])
#newbWHT600w = newbWHT600+'/baseW'
newbWHT600w = getCachedBaseW(['WJetsToLNu_HT600_800', 'WJetsToLNu_HT600_800_ext1'])

#newbWHT800 = getBaseWnAOD(mcDirectory, 'Summer16_102X_nAODv7_Full2016v7', ['WJetsToLNu_HT800_1200', 'WJetsToLNu_HT800_1200_ext1'])
#newbWHT800w = newbWHT800+'/baseW'
newbWHT800w = getCachedBaseW(['WJetsToLNu_HT800_1200', 'WJetsToLNu_HT800_1200_ext1'])

#newbWHT1200 = getBaseWnAOD(mcDirectory, 'Summer16_102X_nAODv7_Full2016v7', ['WJetsToLNu_HT1200_2500', 'WJetsToLNu_HT1200_2500_ext1'])
#newbWHT1200w = newbWHT1200+'/baseW'
newbWHT1200w = getCachedBaseW(['WJetsToLNu_HT1200_2500', 'WJetsToLNu_HT1200_2500_ext1'])

#newbWHT2500 = getBaseWnAOD(mcDirectory, 'Summer16_102X_nAODv7_Full2016v7', ['WJetsToLNu_HT2500_inf', 'WJetsToLNu_HT2500_inf_ext1'])
#newbWHT2500w = newbWHT2500+'/baseW'
newbWHT2500w = getCachedBaseW(['WJetsToLNu_HT2500_inf', 'WJetsToLNu_HT2500_inf_ext1'])


# HT binned 
files = nanoGetSampleFiles(mcDirectory, 'WJetsToLNu_HT70_100')
files+= nanoGetSampleFiles(mcDirectory, 'WJetsToLNu_HT100_200')
files+= nanoGetSampleFiles(mcDirectory, 'WJetsToLNu_HT100_200_ext2')
files+= nanoGetSampleFiles(mcDirectory, 'WJetsToLNu_HT200_400')
files+= nanoGetSampleFiles(mcDirectory, 'WJetsToLNu_HT200_400_ext2')
files+= nanoGetSampleFiles(mcDirectory, 'WJetsToLNu_HT400_600')
files+= nanoGetSampleFiles(mcDirectory, 'WJetsToLNu_HT400_600_ext1')
files+= nanoGetSampleFiles(mcDirectory, 'WJetsToLNu_HT600_800')
files+= nanoGetSampleFiles(mcDirectory, 'WJetsToLNu_HT600_800_ext1')
files+= nanoGetSampleFiles(mcDirectory, 'WJetsToLNu_HT800_1200')
files+= nanoGetSampleFiles(mcDirectory, 'WJetsToLNu_HT800_1200_ext1')
files+= nanoGetSampleFiles(mcDirectory, 'WJetsToLNu_HT1200_2500')
files+= nanoGetSampleFiles(mcDirectory, 'WJetsToLNu_HT1200_2500_ext1')
files+= nanoGetSampleFiles(mcDirectory, 'WJetsToLNu_HT2500_inf')
files+= nanoGetSampleFiles(mcDirectory, 'WJetsToLNu_HT2500_inf_ext1')
files+= nanoGetSampleFiles(mcDirectory, 'WJetsToLNu-LO')
files+= nanoGetSampleFiles(mcDirectory, 'WJetsToLNu-LO_ext2') #FIXME: missing branches

samples['Wjets'] = {
    'name'   : files,
    #'weight' : mcCommonWeight +'*EWKnloW[0]', # ewk nlo correction https://arxiv.org/pdf/1705.04664v2.pdf 
    #'weight' : mcCommonWeight + '*EWKnloW[0]*kfact[0]*kfactMjj[0]', 
    'weight' : mcCommonWeight + '*EWKnloW[0]*kfact[0]', 
    #'weight' : mcCommonWeight, 
    'FilesPerJob' : 4,
}

addSampleWeight(samples, 'Wjets', 'WJetsToLNu-LO', '(LHE_HT < 70)') 
#FIXME: missing branches
addSampleWeight(samples, 'Wjets', 'WJetsToLNu-LO_ext2', '(LHE_HT < 70)') 

# baseW fix
#FIXME: missing branches
addSampleWeight(samples, 'Wjets', 'WJetsToLNu-LO',      newbWLOw) 
addSampleWeight(samples, 'Wjets', 'WJetsToLNu-LO_ext2', newbWLOw) 

addSampleWeight(samples, 'Wjets', 'WJetsToLNu_HT100_200',         newbWHT100w) 
addSampleWeight(samples, 'Wjets', 'WJetsToLNu_HT100_200_ext2',    newbWHT100w) 
addSampleWeight(samples, 'Wjets', 'WJetsToLNu_HT200_400',         newbWHT200w) 
addSampleWeight(samples, 'Wjets', 'WJetsToLNu_HT200_400_ext2',    newbWHT200w) 
addSampleWeight(samples, 'Wjets', 'WJetsToLNu_HT400_600',         newbWHT400w) 
addSampleWeight(samples, 'Wjets', 'WJetsToLNu_HT400_600_ext1',    newbWHT400w)
addSampleWeight(samples, 'Wjets', 'WJetsToLNu_HT600_800',         newbWHT600w) 
addSampleWeight(samples, 'Wjets', 'WJetsToLNu_HT600_800_ext1',    newbWHT600w) 
addSampleWeight(samples, 'Wjets', 'WJetsToLNu_HT800_1200',        newbWHT800w) 
addSampleWeight(samples, 'Wjets', 'WJetsToLNu_HT800_1200_ext1',   newbWHT800w)
addSampleWeight(samples, 'Wjets', 'WJetsToLNu_HT1200_2500',       newbWHT1200w) 
addSampleWeight(samples, 'Wjets', 'WJetsToLNu_HT1200_2500_ext1',  newbWHT1200w) 
addSampleWeight(samples, 'Wjets', 'WJetsToLNu_HT2500_inf',        newbWHT2500w) 
addSampleWeight(samples, 'Wjets', 'WJetsToLNu_HT2500_inf_ext1',   newbWHT2500w) 

# HT stitching from Davide (derived by comparing HT to inclusive LO with only lep pt cuts)
addSampleWeight(samples, 'Wjets', 'WJetsToLNu_HT70_100',          '1.21 * 1.0346')  #adding also k-factor
addSampleWeight(samples, 'Wjets', 'WJetsToLNu_HT100_200',         '1.019') 
addSampleWeight(samples, 'Wjets', 'WJetsToLNu_HT100_200_ext2',    '1.019') 
addSampleWeight(samples, 'Wjets', 'WJetsToLNu_HT200_400',         '1.012') 
addSampleWeight(samples, 'Wjets', 'WJetsToLNu_HT200_400_ext2',    '1.012') 
addSampleWeight(samples, 'Wjets', 'WJetsToLNu_HT400_600',         '0.9945') 
addSampleWeight(samples, 'Wjets', 'WJetsToLNu_HT400_600_ext1',    '0.9945')
addSampleWeight(samples, 'Wjets', 'WJetsToLNu_HT600_800',         '0.9537') 
addSampleWeight(samples, 'Wjets', 'WJetsToLNu_HT600_800_ext1',    '0.9537') 
addSampleWeight(samples, 'Wjets', 'WJetsToLNu_HT800_1200',        '0.8844') 
addSampleWeight(samples, 'Wjets', 'WJetsToLNu_HT800_1200_ext1',   '0.8844')
addSampleWeight(samples, 'Wjets', 'WJetsToLNu_HT1200_2500',       '0.7643') 
addSampleWeight(samples, 'Wjets', 'WJetsToLNu_HT1200_2500_ext1',  '0.7643') 
addSampleWeight(samples, 'Wjets', 'WJetsToLNu_HT2500_inf',        '0.2422') 
addSampleWeight(samples, 'Wjets', 'WJetsToLNu_HT2500_inf_ext1',   '0.2422') 

#samples['WjetsSP'] = copy.deepcopy(samples['Wjets'])
#samples['WjetsSP']['weight'] = mcCommonWeight + '*EWKnloW[0]*kfactSP[0]'

#samples['WjetsMjj'] = copy.deepcopy(samples['Wjets'])
##samples['WjetsMjj'] = {}
#samples['WjetsMjj']['weight'] = mcCommonWeight + '*EWKnloW[0]*kfact[0]*kfactMjj[0]'

####### Vg ########
files = nanoGetSampleFiles(mcDirectory, 'Wg_MADGRAPHMLM')
files += nanoGetSampleFiles(mcDirectory, 'Zg')

samples['Vg'] = {
    'name': files,
    'weight': mcCommonWeightNoMatch + '*(!(Gen_ZGstar_mass > 0))',
    'FilesPerJob': 4,
    'suppressNegative' :['all'],
    'suppressNegativeNuisances' :['all'],
}
#the following is needed in v5 and should be removed in v6
# addSampleWeight(samples, 'Vg', 'ZGToLLG', '0.448')

####### VgS ########

files = nanoGetSampleFiles(mcDirectory, 'Wg_MADGRAPHMLM')
files+= nanoGetSampleFiles(mcDirectory, 'WZTo3LNu_mllmin01')
files+= nanoGetSampleFiles(mcDirectory, 'Zg')

samples['VgS'] = {
    'name': files,
    'weight': mcCommonWeight + ' * (gstarLow * 0.94 + gstarHigh * 1.14)',
    'FilesPerJob': 4,
    'subsamples': {
      'L': 'gstarLow',
      'H': 'gstarHigh'
    },
    'suppressNegative' :['all'],
    'suppressNegativeNuisances' :['all'],
}

addSampleWeight(samples, 'VgS', 'Wg_MADGRAPHMLM',    '(Gen_ZGstar_mass > 0 && Gen_ZGstar_mass < 0.1)')
addSampleWeight(samples, 'VgS', 'Zg',                '(Gen_ZGstar_mass > 0)*0.448')
addSampleWeight(samples, 'VgS', 'WZTo3LNu_mllmin01', '(Gen_ZGstar_mass > 0.1)')


########## VVV #########

files = nanoGetSampleFiles(mcDirectory, 'ZZZ')
files+= nanoGetSampleFiles(mcDirectory, 'WZZ')
files+= nanoGetSampleFiles(mcDirectory, 'WWZ')
files+= nanoGetSampleFiles(mcDirectory, 'WWW')
files+= nanoGetSampleFiles(mcDirectory, 'WWG')
    #FIXME: should WWG be included? or is it already taken into account in the WW sample?

samples['VVV'] = {
    'name': files,
    'weight': mcCommonWeight,
    'FilesPerJob': 4
}

############## SM Higgs ############

files = nanoGetSampleFiles(mcDirectory, 'GluGluHToWWToLNuQQ_M125')
#files+= nanoGetSampleFiles(mcDirectory, 'GluGluHToWWTo2L2Nu_M125')
files+= nanoGetSampleFiles(mcDirectory, 'VBFHToWWToLNuQQ_M125')
#files+= nanoGetSampleFiles(mcDirectory, 'VBFHToWWTo2L2Nu_M125')
files+= nanoGetSampleFiles(mcDirectory, 'HZJ_HToWW_M125')
files+= nanoGetSampleFiles(mcDirectory, 'HWplusJ_HToWW_M125')
files+= nanoGetSampleFiles(mcDirectory, 'HWminusJ_HToWW_M125')
files+= nanoGetSampleFiles(mcDirectory, 'ttHToNonbb_M125')
files+= nanoGetSampleFiles(mcDirectory, 'GluGluHToTauTau_M125')
files+= nanoGetSampleFiles(mcDirectory, 'VBFHToTauTau_M125')
files+= nanoGetSampleFiles(mcDirectory, 'HZJ_HToTauTau_M125')
files+= nanoGetSampleFiles(mcDirectory, 'HWplusJ_HToTauTau_M125')
files+= nanoGetSampleFiles(mcDirectory, 'HWminusJ_HToTauTau_M125')

samples['Higgs'] = {
    'name': files,
    'weight': mcCommonWeight,
    'FilesPerJob': 10
}

############################################
##############   SIGNALS  ##################
############################################

signal_file = 'darkHiggs_central.py'
signal_file_int = 'darkHiggs_interpolation.py'
if os.path.exists(signal_file) :
    handle = open(signal_file,'r')
    exec(handle)
    handle.close()
else:
    raise IOError('FILE NOT FOUND: '+signal_file+'does not exist.')

#if os.path.exists(signal_file_int) :
#    handle = open(signal_file_int,'r')
#    exec(handle)
#    handle.close()
#else:
#    raise IOError('FILE NOT FOUND: '+signal_file_int+'does not exist.')


for mp in signal:
    mpo = mp.replace('darkHiggs_', '')
    #if not mpo in ['mhs_160_mx_100_mZp_500', 'mhs_180_mx_100_mZp_1200', 'mhs_180_mx_100_mZp_1500', 'mhs_180_mx_100_mZp_2000']: continue
    if not mpo in ['mhs_160_mx_100_mZp_500']: continue
    samples[mp] = copy.deepcopy(signal[mp])

################################################
############ DATA DECLARATION ##################
################################################

DataRun = [
    ['B','Run2016B-02Apr2020_ver2-v1'] ,
    ['C','Run2016C-02Apr2020-v1'] ,
    ['D','Run2016D-02Apr2020-v1'] ,
    ['E','Run2016E-02Apr2020-v1'] ,
    ['F','Run2016F-02Apr2020-v1'] ,
    ['G','Run2016G-02Apr2020-v1'] ,
    ['H','Run2016H-02Apr2020-v1'] ,
]

DataSets = [
    'SingleMuon',
    'SingleElectron'
]

DataTrig = {
    'SingleMuon'     : '!Trigger_sngEl && Trigger_sngMu' ,
    'SingleElectron' : 'Trigger_sngEl' ,
}

###########################################
################## DATA ###################
###########################################

########### FAKE ###########


Mu_jetEt = 35
El_jetEt = 35
fakeW = 'FW_mu'+str(Mu_jetEt)+ '_el'+str(El_jetEt)+'[0]'

samples['FAKE'] = {
  'name': [],
  'weight': 'METFilter_DATA*'+fakeW,
  'weights': [],
  'isData': ['all'],
  'FilesPerJob': 20
}

for _, sd in DataRun:
  for pd in DataSets:
    files = nanoGetSampleFiles(fakeDirectory, pd + '_' + sd)
    samples['FAKE']['name'].extend(files)
    samples['FAKE']['weights'].extend([DataTrig[pd]] * len(files))


########### DATA ###########

samples['DATA'] = {
  'name': [],
  'weight': 'METFilter_DATA*LepWPCut[0]*1tlVeto[0]',
  'weights': [],
  'isData': ['all'],
  'FilesPerJob': 25
}

for _, sd in DataRun:
  for pd in DataSets:
    files = nanoGetSampleFiles(dataDirectory, pd + '_' + sd)
    samples['DATA']['name'].extend(files)
    samples['DATA']['weights'].extend([DataTrig[pd]] * len(files))

