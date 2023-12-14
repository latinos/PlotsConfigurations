import os
import copy
import inspect

configurations = os.path.realpath(inspect.getfile(inspect.currentframe())) # this file
configurations = os.path.dirname(configurations) # Full2018
configurations = os.path.dirname(configurations) # HWWSemiLepHighMass
configurations = os.path.dirname(configurations) # Configurations

from LatinoAnalysis.Tools.commonTools import getSampleFiles, getBaseW, addSampleWeight

from LatinoAnalysis.Tools.HiggsXSection import HiggsXSection
HiggsXS = HiggsXSection()

def CombineBaseW(directory, samples, proc, samplelist):
  newbaseW = getBaseWnAOD(directory, mcProduction, samplelist)
  for s in samplelist:
    addSampleWeight(samples, proc, s, newbaseW+'/baseW')

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
dataReco     = 'Run2018_102X_nAODv7_Full2018v7'

mcSteps      = 'MCl1loose2018v7__MCCorr2018v7'

dataSteps    = 'DATAl1loose2018v7__DATACombJJLNu2018'
fakeSteps    = 'DATAl1loose2018v7__DATACombJJLNu2018'



#dataReco = 'Run2018_102X_nAODv7_Full2018v7'
#dataSteps = 'DATAl1loose2018v7'
#fakeSteps = 'DATAl1loose2018v7'

mcProduction = 'Autumn18_102X_nAODv7_Full2018v7'
#mcSteps = 'MCl1loose2018v7__MCCorr2018v7'

##############################################
###### Tree base directory for the site ######
##############################################

SITE=os.uname()[1]
if    'iihe' in SITE:
  treeBaseDir = '/pnfs/iihe/cms/store/user/xjanssen/HWW2015'
elif  'cern' in SITE:
  treeBaseDir = '/eos/cms/store/group/phys_higgs/cmshww/amassiro/HWWNano'
  # treeBaseDir = '/eos/user/s/ssiebert/HWWNano'

def makeMCDirectory(var=''):
    if var:
        return os.path.join(treeBaseDir, mcProduction, mcSteps.format(var='_' + var))
    else:
        return os.path.join(treeBaseDir, mcProduction, mcSteps.format(var=''))

mcDirectory = makeMCDirectory()
signalMCDirectory = makeMCDirectory("_BWReweight")
dataDirectory = os.path.join(treeBaseDir, dataReco, dataSteps)
fakeDirectory = os.path.join(treeBaseDir, dataReco, fakeSteps)


#########################################
############ MC COMMON ##################
#########################################

# SFweight does not include btag weights
# SFweight does not include btag weights
mcCommonWeightNoMatch = 'XSWeight*SFweight[0]*METFilter_MC*PUJetIdSF[0]'
mcCommonWeight        = 'XSWeight*SFweight[0]*METFilter_MC*PUJetIdSF[0]*PromptGenLepMatch1l'

###########################################
#############  BACKGROUNDS  ###############
###########################################

##### DY #######

# from ggh 2018_v6
#files = nanoGetSampleFiles(mcDirectory, 'DYJetsToLL_M-50')
#
#samples['DY'] = {
#    'name': files,
#    'weight': mcCommonWeight + '*(Sum$(GenPart_pdgId == 22 && TMath::Odd(GenPart_statusFlags) && GenPart_pt > 20.) == 0)',
#    'FilesPerJob': 5,
#}
#
##addSampleWeight(samples,'DY','DYJetsToLL_M-50',ptllDYW_NLO)
#addSampleWeight(samples,'DY','DYJetsToLL_M-50', 'DY_NLO_pTllrw')
#
#files = nanoGetSampleFiles(mcDirectory, 'DYJetsToLL_M-10to50-LO_ext1')
#files+= nanoGetSampleFiles(mcDirectory, 'DYJetsToLL_M-4to50_HT-100to200')
#files+= nanoGetSampleFiles(mcDirectory, 'DYJetsToLL_M-4to50_HT-200to400')
#files+= nanoGetSampleFiles(mcDirectory, 'DYJetsToLL_M-4to50_HT-400to600')
#files+= nanoGetSampleFiles(mcDirectory, 'DYJetsToLL_M-4to50_HT-600toInf')
#
#samples['DYlow'] = {
#    'name': files,
#    'weight': mcCommonWeight + '*(Sum$(GenPart_pdgId == 22 && TMath::Odd(GenPart_statusFlags) && GenPart_pt > 20.) == 0)',
#    'FilesPerJob': 5,
#}

##files  = nanoGetSampleFiles(mcDirectory, 'DYJetsToLL_M-50')
files = nanoGetSampleFiles(mcDirectory, 'DYJetsToLL_M-50_ext2')
## LO
## prefer inlcusive LO M-10to50 and fill M-4to10 with HT-binned LO
## known issue with HT-binned: https://twiki.cern.ch/twiki/bin/viewauth/CMS/MCKnownIssues
##files += nanoGetSampleFiles(mcDirectory, 'DYJetsToLL_M-10to50-LO')
files += nanoGetSampleFiles(mcDirectory, 'DYJetsToLL_M-10to50-LO_ext1')
# files += nanoGetSampleFiles(mcDirectory, 'DYJetsToLL_M-4to50_HT-100to200')
# files += nanoGetSampleFiles(mcDirectory, 'DYJetsToLL_M-4to50_HT-200to400')
# files += nanoGetSampleFiles(mcDirectory, 'DYJetsToLL_M-4to50_HT-400to600')
# files += nanoGetSampleFiles(mcDirectory, 'DYJetsToLL_M-4to50_HT-600toInf')

samples['DY'] = {
    'name': files,
    'weight': mcCommonWeight + '*( !(Sum$(PhotonGen_isPrompt==1 && PhotonGen_pt>15 &&\
                abs(PhotonGen_eta)<2.6) > 0 && Sum$(LeptonGen_isPrompt==1 && LeptonGen_pt>15)>=2) )',
    'FilesPerJob': 2,
}

#CombineBaseW(mcDirectory, samples, 'DY',
#            ['DYJetsToLL_M-50', 'DYJetsToLL_M-50_ext2'])
#CombineBaseW(mcDirectory, samples, 'DY',
#            ['DYJetsToLL_M-10to50-LO', 'DYJetsToLL_M-10to50-LO_ext1'])

#addSampleWeight(samples,'DY','DYJetsToLL_M-50'     ,'DY_NLO_pTllrw')
addSampleWeight(samples,'DY','DYJetsToLL_M-50_ext2','DY_NLO_pTllrw')

#addSampleWeight(samples,'DY','DYJetsToLL_M-10to50-LO'     ,'DY_LO_pTllrw')
addSampleWeight(samples,'DY','DYJetsToLL_M-10to50-LO_ext1','DY_LO_pTllrw')


#addSampleWeight(samples,'DYlow','DYJetsToLL_M-4to50_HT-100to200', ptllDYW_LO)
#addSampleWeight(samples,'DYlow','DYJetsToLL_M-4to50_HT-200to400', ptllDYW_LO)
#addSampleWeight(samples,'DYlow','DYJetsToLL_M-4to50_HT-400to600', ptllDYW_LO)
#addSampleWeight(samples,'DYlow','DYJetsToLL_M-4to50_HT-600toInf', ptllDYW_LO)
#addSampleWeight(samples,'DYlow','DYJetsToLL_M-10to50-LO_ext1',    ptllDYW_LO+'*(LHE_HT<100)')
#addSampleWeight(samples,'DYlow','DYJetsToLL_M-4to50_HT-100to200', ptllDYW_LO)

#addSampleWeight(samples,'DYlow','DYJetsToLL_M-4to50_HT-200to400', 'DY_LO_pTllrw')
#addSampleWeight(samples,'DYlow','DYJetsToLL_M-4to50_HT-400to600', 'DY_LO_pTllrw')
#addSampleWeight(samples,'DYlow','DYJetsToLL_M-4to50_HT-600toInf', 'DY_LO_pTllrw')
#addSampleWeight(samples,'DYlow','DYJetsToLL_M-10to50-LO_ext1',    'DY_LO_pTllrw*(LHE_HT<100)')

####### Top #######
#print("top")
#
files  = nanoGetSampleFiles(mcDirectory, 'TTToSemiLeptonic')
samples['top'] = {
    'name': files,
    'weight': mcCommonWeight,
    'FilesPerJob': 3,
}

# CombineBaseW(mcDirectory, samples, 'top',
#             ['TTToSemiLeptonic', 'TTToSemiLeptonic_ext3'])

addSampleWeight(samples,'top','TTToSemiLeptonic'     ,'Top_pTrw')

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

#files =   nanoGetSampleFiles(mcDirectory, 'WJetsToLNu-LO')\
#        + nanoGetSampleFiles(mcDirectory, 'WJetsToLNu_Pt50to100')\
#        + nanoGetSampleFiles(mcDirectory, 'WJetsToLNu_Pt100to250')\
#        + nanoGetSampleFiles(mcDirectory, 'WJetsToLNu_Pt250to400')\
#        + nanoGetSampleFiles(mcDirectory, 'WJetsToLNu_Pt400to600')\
#        + nanoGetSampleFiles(mcDirectory, 'WJetsToLNu_Pt600toInf')

## nJet binned
#files = nanoGetSampleFiles(mcDirectory, 'WJetsToLNu-0J')
#files+= nanoGetSampleFiles(mcDirectory, 'WJetsToLNu-1J')
#files+= nanoGetSampleFiles(mcDirectory, 'WJetsToLNu-2J')
#
#samples['Wjets'] = {
#    'name'   : files,
#    'weight' : mcCommonWeight +'*EWKnloW[0]', # ewk nlo correction https://arxiv.org/pdf/1705.04664v2.pdf 
#    #'weight' : mcCommonWeight + '*ewknloW', 
#    #'weight' : mcCommonWeight, 
#    'FilesPerJob' : 4,
#}

files  = nanoGetSampleFiles(mcDirectory, 'WJetsToLNu-LO')
#files  = nanoGetSampleFiles(mcDirectory, 'WJetsToLNu-LO')
#files += nanoGetSampleFiles(mcDirectory, 'WJetsToLNu-LO_ext1')
files += nanoGetSampleFiles(mcDirectory, 'WJetsToLNu_HT100_200')
#files += nanoGetSampleFiles(mcDirectory, 'WJetsToLNu_HT100_200_ext1')
files += nanoGetSampleFiles(mcDirectory, 'WJetsToLNu_HT1200_2500')
#files += nanoGetSampleFiles(mcDirectory, 'WJetsToLNu_HT1200_2500_ext1')
files += nanoGetSampleFiles(mcDirectory, 'WJetsToLNu_HT200_400')
#files += nanoGetSampleFiles(mcDirectory, 'WJetsToLNu_HT200_400_ext1')
files += nanoGetSampleFiles(mcDirectory, 'WJetsToLNu_HT2500_inf')
#files += nanoGetSampleFiles(mcDirectory, 'WJetsToLNu_HT2500_inf_ext1')
files += nanoGetSampleFiles(mcDirectory, 'WJetsToLNu_HT400_600')
#files += nanoGetSampleFiles(mcDirectory, 'WJetsToLNu_HT400_600_ext1')
files += nanoGetSampleFiles(mcDirectory, 'WJetsToLNu_HT600_800')
#files += nanoGetSampleFiles(mcDirectory, 'WJetsToLNu_HT600_800_ext1')
files += nanoGetSampleFiles(mcDirectory, 'WJetsToLNu_HT70_100')
files += nanoGetSampleFiles(mcDirectory, 'WJetsToLNu_HT800_1200')
#files += nanoGetSampleFiles(mcDirectory, 'WJetsToLNu_HT800_1200_ext1')

samples['Wjets'] = {
    'name'   : files,
    'weight' : mcCommonWeight +"*EWK_W_correction[0]*kfact[0]",
    #'weight' : mcCommonWeight +"*EWK_W_correction[0]"
 #               +"*(resolved*{0}+!resolved*1)".format(whad_reweight),
    'FilesPerJob' : 1,
}
#CombineBaseW(mcDirectory, samples, 'Wjets',
#            ['WJetsToLNu-LO', 'WJetsToLNu-LO_ext1'])
#CombineBaseW(mcDirectory, samples, 'Wjets',
#            ['WJetsToLNu_HT100_200', 'WJetsToLNu_HT100_200_ext1'])
#CombineBaseW(mcDirectory, samples, 'Wjets',
#            ['WJetsToLNu_HT1200_2500', 'WJetsToLNu_HT1200_2500_ext1'])
#CombineBaseW(mcDirectory, samples, 'Wjets',
#            ['WJetsToLNu_HT200_400', 'WJetsToLNu_HT200_400_ext1'])
#CombineBaseW(mcDirectory, samples, 'Wjets',
#            ['WJetsToLNu_HT2500_inf', 'WJetsToLNu_HT2500_inf_ext1'])
#CombineBaseW(mcDirectory, samples, 'Wjets',
#            ['WJetsToLNu_HT400_600', 'WJetsToLNu_HT400_600_ext1'])
#CombineBaseW(mcDirectory, samples, 'Wjets',
#            ['WJetsToLNu_HT600_800', 'WJetsToLNu_HT600_800_ext1'])
#CombineBaseW(mcDirectory, samples, 'Wjets',
#            ['WJetsToLNu_HT800_1200', 'WJetsToLNu_HT800_1200_ext1'])

addSampleWeight(samples,'Wjets','WJetsToLNu-LO','(LHE_HT < 70)')
addSampleWeight(samples, 'Wjets', 'WJetsToLNu_HT70_100', '1.21')
addSampleWeight(samples, 'Wjets', 'WJetsToLNu_HT100_200', '0.993')
addSampleWeight(samples, 'Wjets', 'WJetsToLNu_HT200_400', '1.002')
addSampleWeight(samples, 'Wjets', 'WJetsToLNu_HT400_600', '1.009')
addSampleWeight(samples, 'Wjets', 'WJetsToLNu_HT600_800', '1.120')
addSampleWeight(samples, 'Wjets', 'WJetsToLNu_HT800_1200', '1.202')
addSampleWeight(samples, 'Wjets', 'WJetsToLNu_HT1200_2500', '1.332')
addSampleWeight(samples, 'Wjets', 'WJetsToLNu_HT2500_inf','4.2')
## HT binned
##files = nanoGetSampleFiles(mcDirectory, 'WJetsToLNu-LO')
##files+= nanoGetSampleFiles(mcDirectory, 'WJetsToLNu_HT70_100')
##files+= nanoGetSampleFiles(mcDirectory, 'WJetsToLNu_HT100_200')
##files+= nanoGetSampleFiles(mcDirectory, 'WJetsToLNu_HT200_400')
##files+= nanoGetSampleFiles(mcDirectory, 'WJetsToLNu_HT400_600')
##files+= nanoGetSampleFiles(mcDirectory, 'WJetsToLNu_HT600_800')
##files+= nanoGetSampleFiles(mcDirectory, 'WJetsToLNu_HT800_1200')
##files+= nanoGetSampleFiles(mcDirectory, 'WJetsToLNu_HT1200_2500')
##files+= nanoGetSampleFiles(mcDirectory, 'WJetsToLNu_HT2500_inf')
##
##samples['Wjets'] = {
##    'name'   : files,
##    'weight' : mcCommonWeight +'*EWKnloW[0]', # ewk nlo correction https://arxiv.org/pdf/1705.04664v2.pdf 
##    #'weight' : mcCommonWeight + '*ewknloW', 
##    'FilesPerJob' : 5,
##}
##
###addSampleWeight(samples, "Wjets","WJetsToLNu-LO",  "LHE_Vpt < 50" )
##addSampleWeight(samples, "Wjets","WJetsToLNu-LO",  "LHE_HT < 70" )
##
### HT stitching from Davide (derived by comparing HT to inclusive LO with only lep pt cuts)
##addSampleWeight(samples,'Wjets', 'WJetsToLNu_HT70_100',    '1.21 * 0.95148')  
##addSampleWeight(samples,'Wjets', 'WJetsToLNu_HT100_200',   '0.9471') 
##addSampleWeight(samples,'Wjets', 'WJetsToLNu_HT200_400',   '0.9515') 
##addSampleWeight(samples,'Wjets', 'WJetsToLNu_HT400_600',   '0.9581') 
##addSampleWeight(samples,'Wjets', 'WJetsToLNu_HT600_800',   '1.0582') 
##addSampleWeight(samples,'Wjets', 'WJetsToLNu_HT800_1200',  '1.1285') 
##addSampleWeight(samples,'Wjets', 'WJetsToLNu_HT1200_2500', '1.3268') 
##addSampleWeight(samples,'Wjets', 'WJetsToLNu_HT2500_inf',  '2.7948') 


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


##samples = { k:v for k, v in samples.items() if k  in ["Wjets"]}
