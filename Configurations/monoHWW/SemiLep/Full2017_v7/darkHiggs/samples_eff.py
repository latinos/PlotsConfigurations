import os
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
  treeBaseDir = '/pnfs/iihe/cms/store/user/xjanssen/HWW2015'
elif  'cern' in SITE:
  treeBaseDir = '/eos/cms/store/group/phys_higgs/cmshww/amassiro/HWWNano'
  # treeBaseDir = '/eos/user/s/ssiebert/HWWNano'

#def makeMCDirectory(var=None):
#    if var is not None:
#        return os.path.join(treeBaseDir, mcProduction, mcSteps+'_'+var)
#    else:
#        return os.path.join(treeBaseDir, mcProduction, mcSteps)

def makeMCDirectory(var=None, base=treeBaseDir, step=mcSteps):
    if var is not None:
        return os.path.join(base, mcProduction, step+'_'+var)
    else:
        return os.path.join(base, mcProduction, step)

mcDirectory = makeMCDirectory()
mcDirectoryBR = os.path.join(treeBaseDir, mcProduction, mcStepsBR)
#VBSDirectory = os.path.join('/eos/cms/store/group/phys_smp/VJets_NLO_VBSanalyses', mcProduction, mcSteps)
VBSDirectory = makeMCDirectory(base='/eos/cms/store/group/phys_smp/VJets_NLO_VBSanalyses')
dataDirectory = os.path.join(treeBaseDir, dataReco, dataSteps)
fakeDirectory = os.path.join(treeBaseDir, dataReco, fakeSteps)


#########################################
############ MC COMMON ##################
#########################################

# SFweight does not include btag weights

mcCommonWeightNoMatch = 'XSWeight*SFweight[0]*METFilter_MC*btagSF[0]*PUJetIdSF[0]*LepWPCut[0]*1tlVeto[0]'
mcCommonWeightNoXS    =          'SFweight[0]*METFilter_MC*btagSF[0]*PUJetIdSF[0]*LepWPCut[0]*1tlVeto[0]*PromptGenLepMatch1l'
mcCommonWeight        = 'XSWeight*SFweight[0]*METFilter_MC*btagSF[0]*PUJetIdSF[0]*LepWPCut[0]*1tlVeto[0]*PromptGenLepMatch1l'

noP_mcCommonWeightNoMatch = 'XSWeight*SFweight_no_prefire[0]*METFilter_MC*btagSF[0]*PUJetIdSF[0]*LepWPCut[0]*1tlVeto[0]'
noP_mcCommonWeightNoXS    =          'SFweight_no_prefire[0]*METFilter_MC*btagSF[0]*PUJetIdSF[0]*LepWPCut[0]*1tlVeto[0]*PromptGenLepMatch1l'
noP_mcCommonWeight        = 'XSWeight*SFweight_no_prefire[0]*METFilter_MC*btagSF[0]*PUJetIdSF[0]*LepWPCut[0]*1tlVeto[0]*PromptGenLepMatch1l'

noT_mcCommonWeightNoMatch = 'XSWeight*SFweight_no_trigger[0]*METFilter_MC*btagSF[0]*PUJetIdSF[0]*LepWPCut[0]*1tlVeto[0]'
noT_mcCommonWeightNoXS    =          'SFweight_no_trigger[0]*METFilter_MC*btagSF[0]*PUJetIdSF[0]*LepWPCut[0]*1tlVeto[0]*PromptGenLepMatch1l'
noT_mcCommonWeight        = 'XSWeight*SFweight_no_trigger[0]*METFilter_MC*btagSF[0]*PUJetIdSF[0]*LepWPCut[0]*1tlVeto[0]*PromptGenLepMatch1l'

###########################################
#############  BACKGROUNDS  ###############
###########################################


####### DY #######
#
#files = nanoGetSampleFiles(mcDirectory, 'DYJetsToLL_M-50_ext1')
#files+= nanoGetSampleFiles(mcDirectory, 'DYJetsToLL_M-4to50_HT-100to200_ext1')
##files+= nanoGetSampleFiles(mcDirectory, 'DYJetsToLL_M-4to50_HT-200to400') #FIXME: missing file
#files+= nanoGetSampleFiles(mcDirectory, 'DYJetsToLL_M-4to50_HT-400to600')
#files+= nanoGetSampleFiles(mcDirectory, 'DYJetsToLL_M-4to50_HT-600toInf')
#files+= nanoGetSampleFiles(mcDirectory, 'DYJetsToLL_M-10to50-LO_ext1')
#
#
#samples['DY'] = {
#    'name': files,
#    'weight': mcCommonWeight + '*(Sum$(GenPart_pdgId == 22 && TMath::Odd(GenPart_statusFlags) && GenPart_pt > 20.) == 0)',
#    'FilesPerJob': 3,
#    #'FilesPerJob': 5,
#}
#
#addSampleWeight(samples,'DY','DYJetsToLL_M-50_ext1', 'DY_NLO_pTllrw')
#addSampleWeight(samples,'DY','DYJetsToLL_M-4to50_HT-100to200', 'DY_LO_pTllrw')
#addSampleWeight(samples,'DY','DYJetsToLL_M-4to50_HT-200to400', 'DY_LO_pTllrw')
#addSampleWeight(samples,'DY','DYJetsToLL_M-4to50_HT-400to600', 'DY_LO_pTllrw')
#addSampleWeight(samples,'DY','DYJetsToLL_M-4to50_HT-600toInf', 'DY_LO_pTllrw')
#addSampleWeight(samples,'DY','DYJetsToLL_M-10to50-LO',         'DY_LO_pTllrw*(LHE_HT<100)')
#
####### Top #######
#
#files = nanoGetSampleFiles(mcDirectory, 'TTToSemiLeptonic')
#files+= nanoGetSampleFiles(mcDirectory, 'TTTo2L2Nu')
#files+= nanoGetSampleFiles(mcDirectory, 'TTWjets')
#files+= nanoGetSampleFiles(mcDirectory, 'TTZjets_ext1')
#files+= nanoGetSampleFiles(mcDirectory, 'ST_s-channel')
#files+= nanoGetSampleFiles(mcDirectory, 'ST_t-channel_antitop')
#files+= nanoGetSampleFiles(mcDirectory, 'ST_t-channel_top')
#files+= nanoGetSampleFiles(mcDirectory, 'ST_tW_antitop')
#files+= nanoGetSampleFiles(mcDirectory, 'ST_tW_top')
#
#samples['top'] = {
#    'name': files,
#    'weight': mcCommonWeight,
#    'FilesPerJob': 3,
#}
#
## ttbar pT re-weighting
## https://twiki.cern.ch/twiki/bin/viewauth/CMS/TopPtReweighting
## https://indico.cern.ch/event/904971/contributions/3857701/attachments/2036949/3410728/TopPt_20.05.12.pdf
#addSampleWeight(samples,'top','TTToSemiLeptonic','Top_pTrw')  
#addSampleWeight(samples,'top','TTTo2L2Nu'       ,'Top_pTrw')
#addSampleWeight(samples,'top','TTWjets'         ,'Top_pTrw')
#addSampleWeight(samples,'top','TTZjets_ext1'    ,'Top_pTrw')
#
## Xsec correction single top s and t channel: xsec in tree is leptonDecays, but sample is inclusiveDecays
#lepD_to_incD = '(100./(10.75 + 10.57 + 11.25))'
##addSampleWeight(samples,'top','ST_s-channel'        , lepD_to_incD)
#addSampleWeight(samples,'top','ST_t-channel_antitop', lepD_to_incD)
#addSampleWeight(samples,'top','ST_t-channel_top'    , lepD_to_incD)
#
#
####### VBF V ######
#
#files = nanoGetSampleFiles(mcDirectory,'WLNuJJ_EWK')
##files+= nanoGetSampleFiles(mcDirectory,'EWKZ2Jets_ZToLL_M-50') #FIXME: missing file
#
#samples['VBF-V']  = {
#    'name' : files,
#    'weight': mcCommonWeight, 
#    'FilesPerJob' : 6,
#}
#
#
#
####### WW ########
#
#files = nanoGetSampleFiles(mcDirectory, 'WWToLNuQQ')
#files+= nanoGetSampleFiles(mcDirectory, 'WWTo2L2Nu')
#
#samples['WW'] = {
#    'name': files,
#    #'weight': mcCommonWeight + '*nllW', # NLL PS correction on WW pT for qq>WW
#    'weight': mcCommonWeight + '*nllW*ewknloW', # NLL PS correction on WW pT for qq>WW
#    'FilesPerJob': 3
#}
#
## Taking ewk samples from semi-lep VBS (from Davide Valsecchi) is this correct?
## Name indicates for example WpTo2J_WmToLNu -> WplusTo2JWminusToLNuJJ_EWK_LO_SM_MJJ100PTJ10
## Usually WpWmJJ_EWK but this is WWJJToLNuLNu_EWK
#files = nanoGetSampleFiles(VBSDirectory,'WpTo2J_WmToLNu') + \
#        nanoGetSampleFiles(VBSDirectory,'WpToLNu_WmTo2J') + \
#        nanoGetSampleFiles(VBSDirectory,'WpToLNu_WpTo2J') + \
#        nanoGetSampleFiles(VBSDirectory,'WmToLNu_WmTo2J')
#
#samples['WWewk'] = {
#    'name': files,
#    'weight': mcCommonWeight + '*(Sum$(abs(GenPart_pdgId)==6 || GenPart_pdgId==25)==0)',
#    'FilesPerJob': 6
#}
#
## FIXME
## Missing semi-lep MC, using HM signal sample calulating back to bkg with interference term
#samples['ggWW'] = {
#    'name'   : nanoGetSampleFiles(mcDirectoryBR, 'GluGluHToWWToLNuQQ_M125'),
#    'weight' : mcCommonWeight + '*(RelW0.02_B)*(RelW0.02_B < 50)', 
#    #'weight' : mcCommonWeight, # FIXME: RelW0.02_B branch not there in v7 
#    'FilesPerJob': 4
#}
#
####### WZ ########
#
## Taking samples from semi-lep VBS (from Davide Valsecchi) is this correct?
## Name indicates for example WmTo2J_ZTo2L_QCD -> WminusTo2JZTo2LJJ_QCD_LO_SM_MJJ100PTJ10
## Also available: WZ (inclusive), WZTo2L2Q, WZTo3LNu 
## Not available : WZToLNu3Q
#
#files = nanoGetSampleFiles(VBSDirectory,'WmTo2J_ZTo2L_QCD' ) + \
#        nanoGetSampleFiles(VBSDirectory,'WpTo2J_ZTo2L_QCD' ) + \
#        nanoGetSampleFiles(VBSDirectory,'WmToLNu_ZTo2J_QCD') + \
#        nanoGetSampleFiles(VBSDirectory,'WpToLNu_ZTo2J_QCD')
#samples['WZqcd'] = {
#    'name': files,
#    'weight': mcCommonWeight,
#    'FilesPerJob': 4
#}
#files = nanoGetSampleFiles(VBSDirectory,'WmTo2J_ZTo2L' ) + \
#        nanoGetSampleFiles(VBSDirectory,'WpTo2J_ZTo2L' ) + \
#        nanoGetSampleFiles(VBSDirectory,'WmToLNu_ZTo2J') + \
#        nanoGetSampleFiles(VBSDirectory,'WpToLNu_ZTo2J')
#samples['WZewk'] = {
#    'name': files,
#    'weight': mcCommonWeight,
#    'FilesPerJob': 4
#}
#
####### ZZ ########
#
## Taking samples from semi-lep VBS (from Davide Valsecchi) is this correct?
## Name indicated for example ZTo2L_ZTo2J -> ZTo2LZTo2JJJ_EWK_LO_SM_MJJ100PTJ10
## FIXME: only ZTo2L_ZTo2J available (ewk), ZTo2L_ZTo2J_QCD_LO missing in samplecrossection file
## Also available: ZZ (inclusive), ZZTo2L2Nu, ZZTo2L2Q, ZZTo4L
#
#files = nanoGetSampleFiles(VBSDirectory,'ZTo2L_ZTo2J'  )
#files+= nanoGetSampleFiles(VBSDirectory,'ZTo2L_ZTo2J_QCD')
#
#samples['ZZ'] = {
#    'name': files,
#    'weight': mcCommonWeight,
#    'FilesPerJob': 4
#}

########## W+jets #########

# nJet binned
files = nanoGetSampleFiles(mcDirectory, 'WJetsToLNu-0J')
files+= nanoGetSampleFiles(mcDirectory, 'WJetsToLNu-1J')
files+= nanoGetSampleFiles(mcDirectory, 'WJetsToLNu-2J')

samples['Wjets'] = {
    'name'   : files,
    'weight' : mcCommonWeight +'*EWKnloW[0]', # ewk nlo correction https://arxiv.org/pdf/1705.04664v2.pdf 
    #'weight' : mcCommonWeight + '*ewknloW', 
    #'weight' : mcCommonWeight, 
    'FilesPerJob' : 4,
}

######## Vg ########
#files = nanoGetSampleFiles(mcDirectory, 'Wg_MADGRAPHMLM')
#files += nanoGetSampleFiles(mcDirectory, 'ZGToLLG')
#
#samples['Vg'] = {
#    'name': files,
#    'weight': mcCommonWeightNoMatch + '*(!(Gen_ZGstar_mass > 0))',
#    'FilesPerJob': 4
#}
##the following is needed in v5 and should be removed in v6
## addSampleWeight(samples, 'Vg', 'ZGToLLG', '0.448')
#
######## VgS ########
#
#files = nanoGetSampleFiles(mcDirectory, 'Wg_MADGRAPHMLM') + \
#    nanoGetSampleFiles(mcDirectory, 'WZTo3LNu_mllmin01') + \
#    nanoGetSampleFiles(mcDirectory, 'ZGToLLG')
#
#samples['VgS'] = {
#    'name': files,
#    'weight': mcCommonWeight + ' * (gstarLow * 0.94 + gstarHigh * 1.14)',
#    'FilesPerJob': 4,
#    'subsamples': {
#      'L': 'gstarLow',
#      'H': 'gstarHigh'
#    }
#}
#
#addSampleWeight(samples, 'VgS', 'Wg_MADGRAPHMLM', '(Gen_ZGstar_mass > 0 && Gen_ZGstar_mass < 0.1)')
#addSampleWeight(samples, 'VgS', 'ZGToLLG', '(Gen_ZGstar_mass > 0)*0.448')
#addSampleWeight(samples, 'VgS', 'WZTo3LNu_mllmin01', '(Gen_ZGstar_mass > 0.1)')
#
#
########### VVV #########
#
#files = nanoGetSampleFiles(mcDirectory, 'ZZZ') + \
#    nanoGetSampleFiles(mcDirectory, 'WZZ') + \
#    nanoGetSampleFiles(mcDirectory, 'WWZ') + \
#    nanoGetSampleFiles(mcDirectory, 'WWW') + \
#    nanoGetSampleFiles(mcDirectory, 'WWG')
#    #FIXME: should WWG be included? or is it already taken into account in the WW sample?
#
#samples['VVV'] = {
#    'name': files,
#    'weight': mcCommonWeight,
#    'FilesPerJob': 4
#}
#
############### SM Higgs ############
#files = nanoGetSampleFiles(mcDirectory, 'GluGluHToWWToLNuQQ_M125')
##files+= nanoGetSampleFiles(mcDirectory, 'GluGluHToWWTo2L2Nu_M125')
#files+= nanoGetSampleFiles(mcDirectory, 'VBFHToWWToLNuQQ_M126')
##files+= nanoGetSampleFiles(mcDirectory, 'VBFHToWWTo2L2Nu_M125')
#files+= nanoGetSampleFiles(mcDirectory, 'HZJ_HToWW_M125')
#files+= nanoGetSampleFiles(mcDirectory, 'GluGluZH_HToWW_M125')
#files+= nanoGetSampleFiles(mcDirectory, 'HWplusJ_HToWW_M125')
#files+= nanoGetSampleFiles(mcDirectory, 'HWminusJ_HToWW_M125')
#files+= nanoGetSampleFiles(mcDirectory, 'ttHToNonbb_M125')
#files+= nanoGetSampleFiles(mcDirectory, 'GluGluHToTauTau_M125')
#files+= nanoGetSampleFiles(mcDirectory, 'VBFHToTauTau_M125')
#files+= nanoGetSampleFiles(mcDirectory, 'HZJ_HToTauTau_M125')
#files+= nanoGetSampleFiles(mcDirectory, 'HWplusJ_HToTauTau_M125')
#files+= nanoGetSampleFiles(mcDirectory, 'HWminusJ_HToTauTau_M125')
#
#samples['Higgs'] = {
#    'name': files,
#    'weight': mcCommonWeight,
#    'FilesPerJob': 10,
#}

for sample in samples:
    if sample.startswith('noP_'): continue
    if sample.startswith('noT_'): continue
    noP_dict = copy.deepcopy(samples[sample]) 
    noT_dict = copy.deepcopy(samples[sample]) 
    
    if mcCommonWeight in noP_dict['weight']:
        noP_dict['weight'] = samples[sample]['weight'].replace(mcCommonWeight, noP_mcCommonWeight)
    elif mcCommonWeightNoMatch in noP_dict['weight']:
        noP_dict['weight'] = samples[sample]['weight'].replace(mcCommonWeightNoMatch, noP_mcCommonWeightNoMatch)
    samples['noP_'+sample] = noP_dict

    if mcCommonWeight in noT_dict['weight']:
        noT_dict['weight'] = samples[sample]['weight'].replace(mcCommonWeight, noT_mcCommonWeight)
    elif mcCommonWeightNoMatch in noT_dict['weight']:
        noT_dict['weight'] = samples[sample]['weight'].replace(mcCommonWeightNoMatch, noT_mcCommonWeightNoMatch)
    samples['noT_'+sample] = noT_dict

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

