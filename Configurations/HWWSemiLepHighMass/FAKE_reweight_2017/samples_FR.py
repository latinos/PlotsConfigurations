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

#dataReco = 'Run2017_102X_nAODv7_Full2017v7'
#dataSteps = 'DATAl1loose2017v7'
#fakeSteps = 'DATAl1loose2017v7'
#
#
#mcProduction = 'Fall2017_102X_nAODv7_Full2017v7'
#mcSteps = 'MCl1loose2017v7__MCCorr2017v7'


mcProduction = 'Fall2017_102X_nAODv7_Full2017v7'

dataReco     = 'Run2017_102X_nAODv7_Full2017v7'

mcSteps      = 'MCl1loose2017v7__MCCorr2017v7'

dataSteps    = 'DATAl1loose2017v7__DATACombJJLNu2017'
fakeSteps    = 'DATAl1loose2017v7__DATACombJJLNu2017'

##############################################
###### Tree base directory for the site ######
##############################################

SITE=os.uname()[1]
if  'cern' in SITE:
  treeBaseDir = '/eos/cms/store/group/phys_higgs/cmshww/amassiro/HWWNano'
  myEOSDir    = '/eos/user/g/gabrdell/HWWNano'


def makeMCDirectory(var=''):
    if var:
        return os.path.join(treeBaseDir, mcProduction, mcSteps.format(var='_' + var))
    else:
        return os.path.join(treeBaseDir, mcProduction, mcSteps.format(var=''))

mcDirectory = makeMCDirectory()
signalMCDirectory = makeMCDirectory("_BWReweight")

dataDirectory = os.path.join(treeBaseDir, dataReco, dataSteps)
fakeDirectory = os.path.join(treeBaseDir, dataReco, fakeSteps)

myeosMC = os.path.join(myEOSDir, mcProduction, mcSteps.format(var=''))

#########################################
############ MC COMMON ##################
#########################################

# SFweight does not include btag weights
mcCommonWeightNoMatch = 'XSWeight*SFweight[0]*METFilter_MC*PUJetIdSF[0]'
mcCommonWeight        = 'XSWeight*SFweight[0]*METFilter_MC*PUJetIdSF[0]*PromptGenLepMatch1l'

###########################################
#############  BACKGROUNDS  ###############
###########################################


###### DY #######

#files = nanoGetSampleFiles(mcDirectory, 'DYJetsToLL_M-50_ext1')
#
#samples['DY'] = {
#    'name': files,
#    'weight': mcCommonWeight + '*(Sum$(GenPart_pdgId == 22 && TMath::Odd(GenPart_statusFlags) && GenPart_pt > 20.) == 0)',
#    'FilesPerJob': 3,
#}
#
## from high mass (fully leptonic) 2017 config
#ptllDYW_NLO = '(((0.623108 + 0.0722934*gen_ptll - 0.00364918*gen_ptll*gen_ptll + 6.97227e-05*gen_ptll*gen_ptll*gen_ptll - 4.52903e-07*gen_ptll*gen_ptll*gen_ptll*gen_ptll)*(gen_ptll<45)*(gen_ptll>0) + 1*(gen_ptll>=45))*(abs(gen_mll-90)<3) + (abs(gen_mll-90)>3))'
#ptllDYW_LO = '((0.632927+0.0456956*gen_ptll-0.00154485*gen_ptll*gen_ptll+2.64397e-05*gen_ptll*gen_ptll*gen_ptll-2.19374e-07*gen_ptll*gen_ptll*gen_ptll*gen_ptll+6.99751e-10*gen_ptll*gen_ptll*gen_ptll*gen_ptll*gen_ptll)*(gen_ptll>0)*(gen_ptll<100)+(1.41713-0.00165342*gen_ptll)*(gen_ptll>=100)*(gen_ptll<300)+1*(gen_ptll>=300))'
#
#
##addSampleWeight(samples,'DY','DYJetsToLL_M-50',ptllDYW_NLO)
##addSampleWeight(samples,'DY','DYJetsToLL_M-50_ext1',ptllDYW_NLO)
#addSampleWeight(samples,'DY','DYJetsToLL_M-50_ext1', 'DY_NLO_pTllrw')
#
#files = nanoGetSampleFiles(mcDirectory, 'DYJetsToLL_M-4to50_HT-100to200_ext1')
##files+= nanoGetSampleFiles(mcDirectory, 'DYJetsToLL_M-4to50_HT-200to400') #FIXME: missing file
#files+= nanoGetSampleFiles(mcDirectory, 'DYJetsToLL_M-4to50_HT-400to600')
#files+= nanoGetSampleFiles(mcDirectory, 'DYJetsToLL_M-4to50_HT-600toInf')
#files+= nanoGetSampleFiles(mcDirectory, 'DYJetsToLL_M-10to50-LO_ext1')
#
#samples['DYlow'] = {
#    'name': files,
#    'weight': mcCommonWeight + '*(Sum$(GenPart_pdgId == 22 && TMath::Odd(GenPart_statusFlags) && GenPart_pt > 20.) == 0)',
#    'FilesPerJob': 3,
#}

files  = nanoGetSampleFiles(mcDirectory, 'TTToSemiLeptonic')
samples['top'] = {
    'name': files,
    'weight': mcCommonWeight,
    'FilesPerJob': 1,
    'EventsPerJob': 100000,
}
#CombineBaseW(mcDirectory, samples, 'top',
#['TTWJetsToLNu_ext1', 'TTWJetsToLNu_ext2'])

addSampleWeight(samples,'top','TTToSemiLeptonic','Top_pTrw')



##### DY #######
print("DY")

# NLO
# prefer M-10to50 NLO and fill M-5to10 with HT-binned LO
#files  = nanoGetSampleFiles(mcDirectory, 'DYJetsToLL_M-10to50')
#files  = nanoGetSampleFiles(mcDirectory, 'DYJetsToLL_M-50')
files = nanoGetSampleFiles(mcDirectory, 'DYJetsToLL_M-50_ext1')
files += nanoGetSampleFiles(mcDirectory, 'DYJetsToLL_M-10to50-LO_ext1')
#files += nanoGetSampleFiles(mcDirectory, 'DYJetsToLL_M-50_ext1')
# LO
# files += nanoGetSampleFiles(mcDirectory, 'DYJetsToLL_M-5to50_HT-70to100')
# files += nanoGetSampleFiles(mcDirectory, 'DYJetsToLL_M-5to50_HT-100to200')
# files += nanoGetSampleFiles(mcDirectory, 'DYJetsToLL_M-5to50_HT-200to400')
# files += nanoGetSampleFiles(mcDirectory, 'DYJetsToLL_M-5to50_HT-400to600')
# files += nanoGetSampleFiles(mcDirectory, 'DYJetsToLL_M-5to50_HT-600toinf')
# files += nanoGetSampleFiles(mcDirectory, 'DYJetsToLL_M-5to50_HT-200to400_ext1')
# files += nanoGetSampleFiles(mcDirectory, 'DYJetsToLL_M-5to50_HT-400to600_ext1')
# files += nanoGetSampleFiles(mcDirectory, 'DYJetsToLL_M-5to50_HT-600toinf_ext1')


samples['DY'] = {
    'name': files,
    'weight': mcCommonWeight + '*( !(Sum$(PhotonGen_isPrompt==1 && PhotonGen_pt>15 && abs(PhotonGen_eta)<2.6) > 0))',
    'FilesPerJob': 3,
}
#CombineBaseW(mcDirectory, samples, 'DY',
#            ['DYJetsToLL_M-50', 'DYJetsToLL_M-50_ext1'])
#CombineBaseW(mcDirectory, samples, 'DY',
#            ['DYJetsToLL_M-10to50', 'DYJetsToLL_M-10to50_ext1'])
#CombineBaseW(mcDirectory, samples, 'DY',
#            ['DYJetsToLL_M-5to50_HT-200to400', 'DYJetsToLL_M-5to50_HT-200to400_ext1'])
#CombineBaseW(mcDirectory, samples, 'DY',
#            ['DYJetsToLL_M-5to50_HT-400to600', 'DYJetsToLL_M-5to50_HT-400to600_ext1'])
#CombineBaseW(mcDirectory, samples, 'DY',
#            ['DYJetsToLL_M-5to50_HT-600toinf', 'DYJetsToLL_M-5to50_HT-600toinf_ext1'])

#addSampleWeight(samples,'DY','DYJetsToLL_M-50'     ,'DY_NLO_pTllrw')
addSampleWeight(samples,'DY','DYJetsToLL_M-50_ext1','DY_NLO_pTllrw')
addSampleWeight(samples,'DY','DYJetsToLL_M-10to50-LO_ext1'    ,'DY_LO_pTllrw')

#addSampleWeight(samples,'DY','DYJetsToLL_M-5to50_HT-70to100'      ,'(gen_mll<10)*DY_LO_pTllrw')
#addSampleWeight(samples,'DY','DYJetsToLL_M-5to50_HT-100to200'     ,'(gen_mll<10)*DY_LO_pTllrw')
#addSampleWeight(samples,'DY','DYJetsToLL_M-5to50_HT-200to400'     ,'(gen_mll<10)*DY_LO_pTllrw')
#addSampleWeight(samples,'DY','DYJetsToLL_M-5to50_HT-400to600'     ,'(gen_mll<10)*DY_LO_pTllrw')
#addSampleWeight(samples,'DY','DYJetsToLL_M-5to50_HT-600toinf'     ,'(gen_mll<10)*DY_LO_pTllrw')
#addSampleWeight(samples,'DY','DYJetsToLL_M-5to50_HT-200to400_ext1','(gen_mll<10)*DY_LO_pTllrw')
#addSampleWeight(samples,'DY','DYJetsToLL_M-5to50_HT-400to600_ext1','(gen_mll<10)*DY_LO_pTllrw')
#addSampleWeight(samples,'DY','DYJetsToLL_M-5to50_HT-600toinf_ext1','(gen_mll<10)*DY_LO_pTllrw')






########## W+jets #########
print("W+jets")
whad_reweight = '(1.27217e+00 - 1.78593e-03*HM_Whad_mass)'

#files  = nanoGetSampleFiles(mcDirectory, 'WJetsToLNu')
#files  = nanoGetSampleFiles(mcDirectory, 'WJetsToLNu-LO')
files = nanoGetSampleFiles(mcDirectory, 'WJetsToLNu-LO_ext1')
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

addSampleWeight(samples,'Wjets','WJetsToLNu-LO_ext1','(LHE_HT < 70)')
#addSampleWeight(samples,'Wjets','WJetsToLNu-LO_ext1','(LHE_HT < 70)')
addSampleWeight(samples, 'Wjets', 'WJetsToLNu_HT70_100', '1.21')
addSampleWeight(samples, 'Wjets', 'WJetsToLNu_HT100_200', '0.993')
addSampleWeight(samples, 'Wjets', 'WJetsToLNu_HT200_400', '1.002')
addSampleWeight(samples, 'Wjets', 'WJetsToLNu_HT400_600', '1.009')
addSampleWeight(samples, 'Wjets', 'WJetsToLNu_HT600_800', '1.120')
addSampleWeight(samples, 'Wjets', 'WJetsToLNu_HT800_1200', '1.202')
addSampleWeight(samples, 'Wjets', 'WJetsToLNu_HT1200_2500', '1.332')
addSampleWeight(samples, 'Wjets', 'WJetsToLNu_HT2500_inf','4.2')


#addSampleWeight(samples,'DYlow','DYJetsToLL_M-4to50_HT-100to200',ptllDYW_LO)
#addSampleWeight(samples,'DYlow','DYJetsToLL_M-4to50_HT-200to400',ptllDYW_LO)
#addSampleWeight(samples,'DYlow','DYJetsToLL_M-4to50_HT-400to600',ptllDYW_LO)
#addSampleWeight(samples,'DYlow','DYJetsToLL_M-4to50_HT-600toInf',ptllDYW_LO)
#addSampleWeight(samples,'DYlow','DYJetsToLL_M-10to50-LO',ptllDYW_LO+'*(LHE_HT<100)')


#files  = nanoGetSampleFiles(mcDirectory,'QCD_Pt-15to20_MuEnrichedPt5')
#files += nanoGetSampleFiles(mcDirectory,'QCD_Pt-20to30_MuEnrichedPt5')
#files += nanoGetSampleFiles(mcDirectory,'QCD_Pt-30to50_MuEnrichedPt5')
#files += nanoGetSampleFiles(mcDirectory,'QCD_Pt-50to80_MuEnrichedPt5')
#files += nanoGetSampleFiles(mcDirectory,'QCD_Pt-80to120_MuEnrichedPt5')
#files += nanoGetSampleFiles(mcDirectory,'QCD_Pt-120to170_MuEnrichedPt5')
#files += nanoGetSampleFiles(mcDirectory,'QCD_Pt-170to300_MuEnrichedPt5')
#files += nanoGetSampleFiles(mcDirectory,'QCD_Pt-300to470_MuEnrichedPt5')
#files += nanoGetSampleFiles(mcDirectory,'QCD_Pt-470to600_MuEnrichedPt5')
#files += nanoGetSampleFiles(mcDirectory,'QCD_Pt-600to800_MuEnrichedPt5')
#files += nanoGetSampleFiles(mcDirectory,'QCD_Pt-800to1000_MuEnrichedPt5')
#files += nanoGetSampleFiles(mcDirectory,'QCD_Pt-1000toInf_MuEnrichedPt5')
#
##files += nanoGetSampleFiles(mcDirectory,'QCD_Pt-20toInf_MuEnrichedPt15')
## files += nanoGetSampleFiles(mcDirectory,'QCD_Pt-15to20_EMEnriched')
#files += nanoGetSampleFiles(mcDirectory,'QCD_Pt-20to30_EMEnriched')
#files += nanoGetSampleFiles(mcDirectory,'QCD_Pt-30to50_EMEnriched')
#files += nanoGetSampleFiles(mcDirectory,'QCD_Pt-50to80_EMEnriched')
#files += nanoGetSampleFiles(mcDirectory,'QCD_Pt-80to120_EMEnriched')
#files += nanoGetSampleFiles(mcDirectory,'QCD_Pt-120to170_EMEnriched')
#files += nanoGetSampleFiles(mcDirectory,'QCD_Pt-170to300_EMEnriched')
#files += nanoGetSampleFiles(mcDirectory,'QCD_Pt-300toInf_EMEnriched')
#
#files += nanoGetSampleFiles(mcDirectory, 'QCD_Pt_20to30_bcToE_newpmx')
#files += nanoGetSampleFiles(mcDirectory, 'QCD_Pt_30to80_bcToE')
#files += nanoGetSampleFiles(mcDirectory, 'QCD_Pt_80to170_bcToE')
#files += nanoGetSampleFiles(mcDirectory, 'QCD_Pt_170to250_bcToE')
#files += nanoGetSampleFiles(mcDirectory, 'QCD_Pt_250toInf_bcToE')
#
#samples['QCD'] = {
#    'name'   :   files,
#    'weight' : mcCommonWeight + '*(abs(' + mcCommonWeight + ') < 50)',
#    'FilesPerJob' : 18,
#}
#
#addSampleWeight(samples, 'QCD', 'QCD_Pt-15to20_MuEnrichedPt5'   , '(abs(Lepton_pdgId[0]) == 13)')
#addSampleWeight(samples, 'QCD', 'QCD_Pt-20to30_MuEnrichedPt5'      , '(abs(Lepton_pdgId[0]) == 13)')
#addSampleWeight(samples, 'QCD', 'QCD_Pt-30to50_MuEnrichedPt5'      , '(abs(Lepton_pdgId[0]) == 13)')
#addSampleWeight(samples, 'QCD', 'QCD_Pt-50to80_MuEnrichedPt5'      , '(abs(Lepton_pdgId[0]) == 13)')
#addSampleWeight(samples, 'QCD', 'QCD_Pt-80to120_MuEnrichedPt5'     , '(abs(Lepton_pdgId[0]) == 13)')
#addSampleWeight(samples, 'QCD', 'QCD_Pt-120to170_MuEnrichedPt5'    , '(abs(Lepton_pdgId[0]) == 13)')
#addSampleWeight(samples, 'QCD', 'QCD_Pt-170to300_MuEnrichedPt5'    , '(abs(Lepton_pdgId[0]) == 13)')
#addSampleWeight(samples, 'QCD', 'QCD_Pt-300to470_MuEnrichedPt5'    , '(abs(Lepton_pdgId[0]) == 13)')
#addSampleWeight(samples, 'QCD', 'QCD_Pt-470to600_MuEnrichedPt5'    , '(abs(Lepton_pdgId[0]) == 13)')
#addSampleWeight(samples, 'QCD', 'QCD_Pt-600to800_MuEnrichedPt5'    , '(abs(Lepton_pdgId[0]) == 13)')
#addSampleWeight(samples, 'QCD', 'QCD_Pt-800to1000_MuEnrichedPt5'    , '(abs(Lepton_pdgId[0]) == 13)')
#addSampleWeight(samples, 'QCD', 'QCD_Pt-1000toInf_MuEnrichedPt5'    , '(abs(Lepton_pdgId[0]) == 13)')
## addSampleWeight(samples, 'QCD', 'QCD_Pt-15to20_EMEnriched'      , '(abs(Lepton_pdgId[0]) == 11)')
#addSampleWeight(samples, 'QCD', 'QCD_Pt-20to30_EMEnriched'      , '(abs(Lepton_pdgId[0]) == 11)')
#addSampleWeight(samples, 'QCD', 'QCD_Pt-30to50_EMEnriched'      , '(abs(Lepton_pdgId[0]) == 11)')
#addSampleWeight(samples, 'QCD', 'QCD_Pt-50to80_EMEnriched'      , '(abs(Lepton_pdgId[0]) == 11)')
#addSampleWeight(samples, 'QCD', 'QCD_Pt-80to120_EMEnriched'     , '(abs(Lepton_pdgId[0]) == 11)')
#addSampleWeight(samples, 'QCD', 'QCD_Pt-120to170_EMEnriched'    , '(abs(Lepton_pdgId[0]) == 11)')
#addSampleWeight(samples, 'QCD', 'QCD_Pt-170to300_EMEnriched'    , '(abs(Lepton_pdgId[0]) == 11)')
#addSampleWeight(samples, 'QCD', 'QCD_Pt-300toInf_EMEnriched'    , '(abs(Lepton_pdgId[0]) == 11)')
#addSampleWeight(samples, 'QCD', 'QCD_Pt_20to30_bcToE_newpmx'    , '(abs(Lepton_pdgId[0]) == 11)')
#addSampleWeight(samples, 'QCD', 'QCD_Pt_30to80_bcToE'           , '(abs(Lepton_pdgId[0]) == 11)')
#addSampleWeight(samples, 'QCD', 'QCD_Pt_80to170_bcToE'          , '(abs(Lepton_pdgId[0]) == 11)')
#addSampleWeight(samples, 'QCD', 'QCD_Pt_170to250_bcToE'         , '(abs(Lepton_pdgId[0]) == 11)')
#addSampleWeight(samples, 'QCD', 'QCD_Pt_250toInf_bcToE'         , '(abs(Lepton_pdgId[0]) == 11)')


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
    #'SingleMuon'     : 'Trigger_sngMu' ,
    #'SingleElectron' : '!Trigger_sngMu && Trigger_sngEl' ,
    'SingleMuon'     : '!Trigger_sngEl && Trigger_sngMu' ,
    'SingleElectron' : 'Trigger_sngEl' ,
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
  'FilesPerJob': 25
}

for _, sd in DataRun:
  for pd in DataSets:
    files = nanoGetSampleFiles(dataDirectory, pd + '_' + sd)
    samples['DATA']['name'].extend(files)
    samples['DATA']['weights'].extend([DataTrig[pd]] * len(files))

