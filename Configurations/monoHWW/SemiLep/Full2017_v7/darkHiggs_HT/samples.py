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

dataReco = 'Run2017_102X_nAODv7_Full2017v7'
dataSteps = 'DATAl1loose2017v7__DATACombJJLNu2017'
fakeSteps = 'DATAl1loose2017v7__DATACombJJLNu2017'


mcProduction = 'Fall2017_102X_nAODv7_Full2017v7'
mcSteps = 'MCl1loose2017v7__MCCorr2017v7__MCCombJJLNu2017'
mcStepsBR = 'MCl1loose2017v7__MCCorr2017v7__MCCombJJLNu2017__BWReweight'

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
mcDirectoryBR = os.path.join(treeBaseDir, mcProduction, mcStepsBR)
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
#files = nanoGetSampleFiles(mcDirectory, 'DYJetsToLL_M-50_ext1')
#files+= nanoGetSampleFiles(mcDirectory, 'DYJetsToLL_M-4to50_HT-100to200_ext1')
##files+= nanoGetSampleFiles(mcDirectory, 'DYJetsToLL_M-4to50_HT-200to400') #FIXME: missing file
#files+= nanoGetSampleFiles(mcDirectory, 'DYJetsToLL_M-4to50_HT-400to600')
#files+= nanoGetSampleFiles(mcDirectory, 'DYJetsToLL_M-4to50_HT-600toInf')
#files+= nanoGetSampleFiles(mcDirectory, 'DYJetsToLL_M-10to50-LO_ext1')
#
#samples['DY'] = {
#    'name': files,
#    'weight': mcCommonWeight + '*(Sum$(GenPart_pdgId == 22 && TMath::Odd(GenPart_statusFlags) && GenPart_pt > 20.) == 0)',
#    'FilesPerJob': 3,
#    #'FilesPerJob': 5,
#    'suppressNegative' :['all'],
#    'suppressNegativeNuisances' :['all'],
#}
#
#addSampleWeight(samples,'DY','DYJetsToLL_M-50_ext1', 'DY_NLO_pTllrw')
#
#addSampleWeight(samples,'DY','DYJetsToLL_M-4to50_HT-100to200', 'DY_LO_pTllrw')
#addSampleWeight(samples,'DY','DYJetsToLL_M-4to50_HT-200to400', 'DY_LO_pTllrw')
#addSampleWeight(samples,'DY','DYJetsToLL_M-4to50_HT-400to600', 'DY_LO_pTllrw')
#addSampleWeight(samples,'DY','DYJetsToLL_M-4to50_HT-600toInf', 'DY_LO_pTllrw')
#addSampleWeight(samples,'DY','DYJetsToLL_M-10to50-LO',         'DY_LO_pTllrw*(LHE_HT<100)')

## LO large stat
files = nanoGetSampleFiles(mcDirectory,'DYJetsToLL_M-50') 
files+= nanoGetSampleFiles(mcDirectory,'DYJetsToLL_M-50_ext1')
files+= nanoGetSampleFiles(mcDirectory,'DYJetsToLL_M-10to50-LO_ext1')
#files+= nanoGetSampleFiles(mcDirectory,'DYJetsToLL_M-50_HT-100to200_newpmx') 
files+= nanoGetSampleFiles(mcDirectory,'DYJetsToLL_M-50_HT-200to400')
files+= nanoGetSampleFiles(mcDirectory,'DYJetsToLL_M-50_HT-200to400_ext1')
files+= nanoGetSampleFiles(mcDirectory,'DYJetsToLL_M-50_HT-400to600_newpmx') 
files+= nanoGetSampleFiles(mcDirectory,'DYJetsToLL_M-50_HT-600to800')
files+= nanoGetSampleFiles(mcDirectory,'DYJetsToLL_M-50_HT-800to1200')
files+= nanoGetSampleFiles(mcDirectory,'DYJetsToLL_M-50_HT-1200to2500')
files+= nanoGetSampleFiles(mcDirectory,'DYJetsToLL_M-50_HT-2500toInf')
files+= nanoGetSampleFiles(mcDirectory,'DYJetsToLL_M-4to50_HT-100to200_newpmx')
files+= nanoGetSampleFiles(mcDirectory,'DYJetsToLL_M-4to50_HT-200to400_newpmx')
files+= nanoGetSampleFiles(mcDirectory,'DYJetsToLL_M-4to50_HT-400to600')
files+= nanoGetSampleFiles(mcDirectory,'DYJetsToLL_M-4to50_HT-400to600_ext1')
files+= nanoGetSampleFiles(mcDirectory,'DYJetsToLL_M-4to50_HT-600toInf')
files+= nanoGetSampleFiles(mcDirectory,'DYJetsToLL_M-4to50_HT-600toInf_ext1')

photon_filter = '( !(Sum$(PhotonGen_isPrompt==1 && PhotonGen_pt>10 && abs(PhotonGen_eta)<2.6) > 0 && Sum$(LeptonGen_isPrompt==1 && LeptonGen_pt>15)>=2) )'

samples['DY'] = {
    'name': files,
    'weight': mcCommonWeight + '*' + photon_filter,
    'FilesPerJob': 6,
    'suppressNegative' :['all'],
    'suppressNegativeNuisances' :['all'],
}

# baseW fixing
addSampleWeight(samples,'DY', 'DYJetsToLL_M-50',                      getCachedBaseW(['DYJetsToLL_M-50', 'DYJetsToLL_M-50_ext1']))
addSampleWeight(samples,'DY', 'DYJetsToLL_M-50_ext1',                 getCachedBaseW(['DYJetsToLL_M-50', 'DYJetsToLL_M-50_ext1']))

addSampleWeight(samples,'DY', 'DYJetsToLL_M-50_HT-200to400',          getCachedBaseW(['DYJetsToLL_M-50_HT-200to400', 'DYJetsToLL_M-50_HT-200to400_ext1']))
addSampleWeight(samples,'DY', 'DYJetsToLL_M-50_HT-200to400_ext1',     getCachedBaseW(['DYJetsToLL_M-50_HT-200to400', 'DYJetsToLL_M-50_HT-200to400_ext1']))

addSampleWeight(samples,'DY', 'DYJetsToLL_M-4to50_HT-400to600',       getCachedBaseW(['DYJetsToLL_M-4to50_HT-400to600', 'DYJetsToLL_M-4to50_HT-400to600_ext1']))
addSampleWeight(samples,'DY', 'DYJetsToLL_M-4to50_HT-400to600_ext1',  getCachedBaseW(['DYJetsToLL_M-4to50_HT-400to600', 'DYJetsToLL_M-4to50_HT-400to600_ext1']))
addSampleWeight(samples,'DY', 'DYJetsToLL_M-4to50_HT-600toInf',       getCachedBaseW(['DYJetsToLL_M-4to50_HT-600toInf', 'DYJetsToLL_M-4to50_HT-600toInf_ext1']))
addSampleWeight(samples,'DY', 'DYJetsToLL_M-4to50_HT-600toInf_ext1',  getCachedBaseW(['DYJetsToLL_M-4to50_HT-600toInf', 'DYJetsToLL_M-4to50_HT-600toInf_ext1']))

# Last M50 HT bin is missing
addSampleWeight(samples,'DY', 'DYJetsToLL_M-50',                      '(LHE_HT < 200)')  # To put 100 when HT100to200 is back
addSampleWeight(samples,'DY', 'DYJetsToLL_M-50_ext1',                 '(LHE_HT < 200)')  # To put 100 when HT100to200 is back
addSampleWeight(samples,'DY', 'DYJetsToLL_M-10to50-LO_ext1',          '(LHE_HT < 100)')

# ll pT corr
addSampleWeight(samples,'DY', 'DYJetsToLL_M-50',                       'DY_NLO_pTllrw')
addSampleWeight(samples,'DY', 'DYJetsToLL_M-50_ext1',                  'DY_NLO_pTllrw')
addSampleWeight(samples,'DY', 'DYJetsToLL_M-10to50-LO_ext1',           'DY_LO_pTllrw')
#addSampleWeight(samples,'DY', 'DYJetsToLL_M-50_HT-100to200_newpmx',    'DY_LO_pTllrw * 1.00') # Added HT stitching  ##TO be added back
addSampleWeight(samples,'DY', 'DYJetsToLL_M-50_HT-200to400',           'DY_LO_pTllrw * 0.999')
addSampleWeight(samples,'DY', 'DYJetsToLL_M-50_HT-200to400_ext1',      'DY_LO_pTllrw * 0.999')
addSampleWeight(samples,'DY', 'DYJetsToLL_M-50_HT-400to600_newpmx',    'DY_LO_pTllrw * 0.990')
addSampleWeight(samples,'DY', 'DYJetsToLL_M-50_HT-600to800',           'DY_LO_pTllrw * 0.975')
addSampleWeight(samples,'DY', 'DYJetsToLL_M-50_HT-800to1200',          'DY_LO_pTllrw * 0.907')
addSampleWeight(samples,'DY', 'DYJetsToLL_M-50_HT-1200to2500',         'DY_LO_pTllrw * 0.833')
addSampleWeight(samples,'DY', 'DYJetsToLL_M-50_HT-2500toInf',          'DY_LO_pTllrw * 1.015')
addSampleWeight(samples,'DY', 'DYJetsToLL_M-4to50_HT-100to200_newpmx', 'DY_LO_pTllrw')
addSampleWeight(samples,'DY', 'DYJetsToLL_M-4to50_HT-200to400_newpmx', 'DY_LO_pTllrw')
addSampleWeight(samples,'DY', 'DYJetsToLL_M-4to50_HT-400to600',        'DY_LO_pTllrw')
addSampleWeight(samples,'DY', 'DYJetsToLL_M-4to50_HT-400to600_ext1',   'DY_LO_pTllrw')
addSampleWeight(samples,'DY', 'DYJetsToLL_M-4to50_HT-600toInf',        'DY_LO_pTllrw')
addSampleWeight(samples,'DY', 'DYJetsToLL_M-4to50_HT-600toInf_ext1',   'DY_LO_pTllrw')

###### Top #######

files = nanoGetSampleFiles(mcDirectory, 'TTToSemiLeptonic')
files+= nanoGetSampleFiles(mcDirectory, 'TTTo2L2Nu')
files+= nanoGetSampleFiles(mcDirectory, 'TTWjets')
files+= nanoGetSampleFiles(mcDirectory, 'TTZjets_ext1')
files+= nanoGetSampleFiles(mcDirectory, 'ST_s-channel')
files+= nanoGetSampleFiles(mcDirectory, 'ST_t-channel_antitop')
files+= nanoGetSampleFiles(mcDirectory, 'ST_t-channel_top')
files+= nanoGetSampleFiles(mcDirectory, 'ST_tW_antitop')
files+= nanoGetSampleFiles(mcDirectory, 'ST_tW_top')

samples['top'] = {
    'name': files,
    'weight': mcCommonWeight,
    'FilesPerJob': 3,
}

# ttbar pT re-weighting
# https://twiki.cern.ch/twiki/bin/viewauth/CMS/TopPtReweighting
# https://indico.cern.ch/event/904971/contributions/3857701/attachments/2036949/3410728/TopPt_20.05.12.pdf
addSampleWeight(samples,'top','TTToSemiLeptonic','Top_pTrw')  
addSampleWeight(samples,'top','TTTo2L2Nu'       ,'Top_pTrw')
addSampleWeight(samples,'top','TTWjets'         ,'Top_pTrw')
addSampleWeight(samples,'top','TTZjets_ext1'    ,'Top_pTrw')

# Xsec correction single top s and t channel: xsec in tree is leptonDecays, but sample is inclusiveDecays
lepD_to_incD = '(100./(10.75 + 10.57 + 11.25))'
#addSampleWeight(samples,'top','ST_s-channel'        , lepD_to_incD)
addSampleWeight(samples,'top','ST_t-channel_antitop', lepD_to_incD)
addSampleWeight(samples,'top','ST_t-channel_top'    , lepD_to_incD)

###### VBF V ######

files = nanoGetSampleFiles(mcDirectory,'WLNuJJ_EWK')
#files+= nanoGetSampleFiles(mcDirectory,'EWKZ2Jets_ZToLL_M-50') #FIXME: missing file

samples['VBF-V']  = {
    'name' : files,
    'weight': mcCommonWeight, 
    'FilesPerJob' : 6,
}

#-------------------------- inspired by ggH

###### WW ########

files = nanoGetSampleFiles(mcDirectory, 'WWToLNuQQ')
files+= nanoGetSampleFiles(mcDirectory, 'WWTo2L2Nu')

samples['WW'] = {
    'name': files,
    'weight': mcCommonWeight + '*nllW*ewknloW', # NLL PS correction on WW pT for qq>WW
    'FilesPerJob': 3
}

# Taking ewk samples from semi-lep VBS (from Davide Valsecchi) is this correct?
# Name indicates for example WpTo2J_WmToLNu -> WplusTo2JWminusToLNuJJ_EWK_LO_SM_MJJ100PTJ10
# Usually WpWmJJ_EWK but this is WWJJToLNuLNu_EWK
files = nanoGetSampleFiles(VBSDirectory,'WpTo2J_WmToLNu') + \
        nanoGetSampleFiles(VBSDirectory,'WpToLNu_WmTo2J') + \
        nanoGetSampleFiles(VBSDirectory,'WpToLNu_WpTo2J') + \
        nanoGetSampleFiles(VBSDirectory,'WmToLNu_WmTo2J')

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

files = nanoGetSampleFiles(VBSDirectory,'WmTo2J_ZTo2L_QCD' ) + \
        nanoGetSampleFiles(VBSDirectory,'WpTo2J_ZTo2L_QCD' ) + \
        nanoGetSampleFiles(VBSDirectory,'WmToLNu_ZTo2J_QCD') + \
        nanoGetSampleFiles(VBSDirectory,'WpToLNu_ZTo2J_QCD')
samples['WZqcd'] = {
    'name': files,
    'weight': mcCommonWeight,
    'FilesPerJob': 4
}
files = nanoGetSampleFiles(VBSDirectory,'WmTo2J_ZTo2L' ) + \
        nanoGetSampleFiles(VBSDirectory,'WpTo2J_ZTo2L' ) + \
        nanoGetSampleFiles(VBSDirectory,'WmToLNu_ZTo2J') + \
        nanoGetSampleFiles(VBSDirectory,'WpToLNu_ZTo2J')
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
##oldbW1J = getBaseWnAOD(mcDirectory, mcProduction, ['WJetsToLNu-1J'])
##newbW1J = getBaseWnAOD(mcDirectory, mcProduction, ['WJetsToLNu-1J', 'WJetsToLNu-1J_ext1'])
##newbW1Jw = newbW1J+'/baseW'
#newbW1Jw = getCachedBaseW(['WJetsToLNu-1J', 'WJetsToLNu-1J_ext1'])
#
##oldbW2J = getBaseWnAOD(mcDirectory, mcProduction, ['WJetsToLNu-2J'])
##newbW2J = getBaseWnAOD(mcDirectory, mcProduction, ['WJetsToLNu-2J', 'WJetsToLNu-2J_ext1'])
##newbW2Jw = newbW2J+'/baseW'
#newbW2Jw = getCachedBaseW(['WJetsToLNu-2J', 'WJetsToLNu-2J_ext1'])
#
## nJet binned + pT binned 
#files = nanoGetSampleFiles(mcDirectory, 'WJetsToLNu_Pt100to250')
#files+= nanoGetSampleFiles(mcDirectory, 'WJetsToLNu_Pt250to400')
#files+= nanoGetSampleFiles(mcDirectory, 'WJetsToLNu_Pt400to600')
#files+= nanoGetSampleFiles(mcDirectory, 'WJetsToLNu_Pt600toInf')
#files+= nanoGetSampleFiles(mcDirectory, 'WJetsToLNu-0J')
#files+= nanoGetSampleFiles(mcDirectory, 'WJetsToLNu-1J')
#files+= nanoGetSampleFiles(mcDirectory, 'WJetsToLNu-1J_ext1')
#files+= nanoGetSampleFiles(mcDirectory, 'WJetsToLNu-2J')
#files+= nanoGetSampleFiles(mcDirectory, 'WJetsToLNu-2J_ext1')
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
## fix baseW for ext
#addSampleWeight(samples, 'WjetsNLO', 'WJetsToLNu-1J'     , newbW1Jw)
#addSampleWeight(samples, 'WjetsNLO', 'WJetsToLNu-1J_ext1', newbW1Jw)
#addSampleWeight(samples, 'WjetsNLO', 'WJetsToLNu-2J'     , newbW2Jw)
#addSampleWeight(samples, 'WjetsNLO', 'WJetsToLNu-2J_ext1', newbW2Jw)
#
## avoid overlap
#addSampleWeight(samples, 'WjetsNLO', 'WJetsToLNu-0J'     , '(LHE_Vpt < 120)')
#addSampleWeight(samples, 'WjetsNLO', 'WJetsToLNu-1J'     , '(LHE_Vpt < 120)')
#addSampleWeight(samples, 'WjetsNLO', 'WJetsToLNu-1J_ext1', '(LHE_Vpt < 120)')
#addSampleWeight(samples, 'WjetsNLO', 'WJetsToLNu-2J'     , '(LHE_Vpt < 120)')
#addSampleWeight(samples, 'WjetsNLO', 'WJetsToLNu-2J_ext1', '(LHE_Vpt < 120)')
#addSampleWeight(samples, 'WjetsNLO', 'WJetsToLNu_Pt100to250', '(LHE_Vpt > 120)')
#addSampleWeight(samples, 'WjetsNLO', 'WJetsToLNu_Pt250to400', '(LHE_Vpt > 120)')
#addSampleWeight(samples, 'WjetsNLO', 'WJetsToLNu_Pt400to600', '(LHE_Vpt > 120)')
#addSampleWeight(samples, 'WjetsNLO', 'WJetsToLNu_Pt600toInf', '(LHE_Vpt > 120)')

### LO

# baseW
#oldbWlo = getBaseWnAOD(mcDirectory, 'Fall2017_102X_nAODv7_Full2017v7', ['WJetsToLNu-LO'])
#extbWlo = getBaseWnAOD(mcDirectory, 'Fall2017_102X_nAODv7_Full2017v7', ['WJetsToLNu-LO_ext1'])
#newbWlo = getBaseWnAOD(mcDirectory, 'Fall2017_102X_nAODv7_Full2017v7', ['WJetsToLNu-LO', 'WJetsToLNu-LO_ext1'])
#newbWlow = newbWlo+'/baseW'
newbWlow = getCachedBaseW(['WJetsToLNu-LO', 'WJetsToLNu-LO_ext1'])
#print(' LO old baseW: '+oldbWlo+', new baseW: '+newbWlo+', ext baseW: '+extbWlo)

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
files+= nanoGetSampleFiles(mcDirectory, 'WJetsToLNu-LO_ext1') #FIXME: missing branches

samples['Wjets'] = {
    'name'   : files,
    #'weight' : mcCommonWeight +'*EWKnloW[0]', # ewk nlo correction https://arxiv.org/pdf/1705.04664v2.pdf 
    #'weight' : mcCommonWeight + '*ewknloW', 
    'weight' : mcCommonWeight+'*ewknloW*kfact[0]',
    #'weight' : mcCommonWeight, 
    'FilesPerJob' : 4,
}

#FIXME: missing branches
addSampleWeight(samples, 'Wjets', 'WJetsToLNu-LO',      newbWlow) 
addSampleWeight(samples, 'Wjets', 'WJetsToLNu-LO_ext1', newbWlow)

addSampleWeight(samples, 'Wjets', 'WJetsToLNu-LO',      '(LHE_HT < 70)') 
#FIXME: missing branches
addSampleWeight(samples, 'Wjets', 'WJetsToLNu-LO_ext1', '(LHE_HT < 70)')

# Stitching from Davide
addSampleWeight(samples, 'Wjets', 'WJetsToLNu_HT70_100', '1.21 * 0.9582') 
addSampleWeight(samples, 'Wjets', 'WJetsToLNu_HT100_200',    '0.9525') 
addSampleWeight(samples, 'Wjets', 'WJetsToLNu_HT200_400',    '0.9577') 
addSampleWeight(samples, 'Wjets', 'WJetsToLNu_HT400_600',    '0.9613') 
addSampleWeight(samples, 'Wjets', 'WJetsToLNu_HT600_800',    '1.0742') 
addSampleWeight(samples, 'Wjets', 'WJetsToLNu_HT800_1200',   '1.1698') 
addSampleWeight(samples, 'Wjets', 'WJetsToLNu_HT1200_2500',  '1.3046') 
addSampleWeight(samples, 'Wjets', 'WJetsToLNu_HT2500_inf',   '2.1910')  

#samples['WjetsSP'] = copy.deepcopy(samples['Wjets'])
#samples['WjetsSP']['weight'] = mcCommonWeight + '*ewknloW*kfactSP[0]'

#samples['WjetsMjj'] = copy.deepcopy(samples['Wjets'])
##samples['WjetsMjj'] = {}
#samples['WjetsMjj']['weight'] = mcCommonWeight + '*ewknloW*kfact[0]*kfactMjj[0]'

####### Vg ########
files = nanoGetSampleFiles(mcDirectory, 'Wg_MADGRAPHMLM')
files += nanoGetSampleFiles(mcDirectory, 'ZGToLLG')

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

files = nanoGetSampleFiles(mcDirectory, 'Wg_MADGRAPHMLM') + \
    nanoGetSampleFiles(mcDirectory, 'WZTo3LNu_mllmin01') + \
    nanoGetSampleFiles(mcDirectory, 'ZGToLLG')

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

addSampleWeight(samples, 'VgS', 'Wg_MADGRAPHMLM', '(Gen_ZGstar_mass > 0 && Gen_ZGstar_mass < 0.1)')
addSampleWeight(samples, 'VgS', 'ZGToLLG', '(Gen_ZGstar_mass > 0)*0.448')
addSampleWeight(samples, 'VgS', 'WZTo3LNu_mllmin01', '(Gen_ZGstar_mass > 0.1)')


########## VVV #########

files = nanoGetSampleFiles(mcDirectory, 'ZZZ') + \
    nanoGetSampleFiles(mcDirectory, 'WZZ') + \
    nanoGetSampleFiles(mcDirectory, 'WWZ') + \
    nanoGetSampleFiles(mcDirectory, 'WWW') + \
    nanoGetSampleFiles(mcDirectory, 'WWG')
    #FIXME: should WWG be included? or is it already taken into account in the WW sample?

samples['VVV'] = {
    'name': files,
    'weight': mcCommonWeight,
    'FilesPerJob': 4
}

############## SM Higgs ############
files = nanoGetSampleFiles(mcDirectory, 'GluGluHToWWToLNuQQ_M125')
#files+= nanoGetSampleFiles(mcDirectory, 'GluGluHToWWTo2L2Nu_M125')
files+= nanoGetSampleFiles(mcDirectory, 'VBFHToWWToLNuQQ_M126')
#files+= nanoGetSampleFiles(mcDirectory, 'VBFHToWWTo2L2Nu_M125')
files+= nanoGetSampleFiles(mcDirectory, 'HZJ_HToWW_M125')
files+= nanoGetSampleFiles(mcDirectory, 'GluGluZH_HToWW_M125')
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
    'FilesPerJob': 10,
}

############################################
##############   SIGNALS  ##################
############################################

#signal_file = 'darkHiggs_private.py'
signal_file = 'darkHiggs_central.py'
if os.path.exists(signal_file) :
    handle = open(signal_file,'r')
    exec(handle)
    handle.close()
else:
    raise IOError('FILE NOT FOUND: '+signal_file+'does not exist.')

for mp in signal:
    mpo = mp.replace('darkHiggs_', '')
    #if not mpo in ['mhs_160_mx_100_mZp_500', 'mhs_180_mx_100_mZp_1200', 'mhs_180_mx_100_mZp_1500', 'mhs_180_mx_100_mZp_2000']: continue
    if not mpo in ['mhs_160_mx_100_mZp_500']: continue
    samples[mp] = copy.deepcopy(signal[mp])

################################################
############ DATA DECLARATION ##################
################################################

DataRun = [
  ['B','Run2017B-02Apr2020-v1'] ,
  ['C','Run2017C-02Apr2020-v1'],
  ['D','Run2017D-02Apr2020-v1'],
  ['E','Run2017E-02Apr2020-v1'],
  ['F','Run2017F-02Apr2020-v1']
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
  'FilesPerJob': 15,
  #'FilesPerJob': 25
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

