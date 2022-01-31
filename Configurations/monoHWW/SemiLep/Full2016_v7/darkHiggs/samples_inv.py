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
  # treeBaseDir = '/eos/user/s/ssiebert/HWWNano'

def makeMCDirectory(var=None, base=treeBaseDir, step=mcSteps):
    if var is not None:
        return os.path.join(base, mcProduction, step+'_'+var)
    else:
        return os.path.join(base, mcProduction, step)

mcDirectory = makeMCDirectory()
#mcDirectory = os.path.join(treeBaseDir, mcProduction, mcSteps)
if 'iihe' in SITE:
    VBSDirectory = makeMCDirectory(base='/pnfs/iihe/cms/store/group/phys_higgs/cmshww/amassiro/HWWNano_smp')
else:
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

###########################################
#############  BACKGROUNDS  ###############
###########################################

###### DY #######

files = nanoGetSampleFiles(mcDirectory, 'DYJetsToLL_M-50_ext2')
files+= nanoGetSampleFiles(mcDirectory, 'DYJetsToLL_M-10to50_ext1')
files+= nanoGetSampleFiles(mcDirectory, 'DYJetsToLL_M-5to50_HT-70to100')
files+= nanoGetSampleFiles(mcDirectory, 'DYJetsToLL_M-5to50_HT-100to200')
files+= nanoGetSampleFiles(mcDirectory, 'DYJetsToLL_M-5to50_HT-200to400')
files+= nanoGetSampleFiles(mcDirectory, 'DYJetsToLL_M-5to50_HT-400to600')
files+= nanoGetSampleFiles(mcDirectory, 'DYJetsToLL_M-5to50_HT-600toinf')

samples['DY'] = {
    'name': files,
    'weight': mcCommonWeight + '*(Sum$(GenPart_pdgId == 22 && TMath::Odd(GenPart_statusFlags) && GenPart_pt > 20.) == 0)',
    'FilesPerJob': 3,
    'suppressNegative' :['all'],
    'suppressNegativeNuisances' :['all'],
}

addSampleWeight(samples,'DY','DYJetsToLL_M-50_ext2'          , 'DY_NLO_pTllrw')
addSampleWeight(samples,'DY','DYJetsToLL_M-5to50_HT-70to100' ,  'DY_LO_pTllrw')
addSampleWeight(samples,'DY','DYJetsToLL_M-5to50_HT-100to200', 'DY_LO_pTllrw')
addSampleWeight(samples,'DY','DYJetsToLL_M-5to50_HT-200to400', 'DY_LO_pTllrw')
addSampleWeight(samples,'DY','DYJetsToLL_M-5to50_HT-400to600', 'DY_LO_pTllrw')
addSampleWeight(samples,'DY','DYJetsToLL_M-5to50_HT-600toinf', 'DY_LO_pTllrw')
addSampleWeight(samples,'DY','DYJetsToLL_M-10to50_ext1'      , 'DY_LO_pTllrw*(LHE_HT<100)')

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
addSampleWeight(samples,'top','TTToSemiLeptonic','Top_pTrw')  # https://indico.cern.ch/event/904971/contributions/3857701/attachments/2036949/3410728/TopPt_20.05.12.pdf
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
    #'weight': mcCommonWeight + '*nllW', # NLL PS correction on WW pT for qq>WW
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
    #'name'   : nanoGetSampleFiles(mcDirectory, 'GluGluHToWWToLNuQQ_M125'),
    #'weight' : mcCommonWeight + '*(RelW0.02_B)*(RelW0.02_B < 1000)', 
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

##-------------------------- inspired by VBS semi-lep
#
####### WW ########
#
##files = nanoGetSampleFiles(mcDirectory, 'WWToLNuQQ')
#files = nanoGetSampleFiles(mcDirectory,'WmToLNu_WmTo2J_QCD') + \
#        nanoGetSampleFiles(mcDirectory,'WpTo2J_WmToLNu_QCD') + \
#        nanoGetSampleFiles(mcDirectory,'WpToLNu_WmTo2J_QCD') + \
#        nanoGetSampleFiles(mcDirectory,'WpToLNu_WpTo2J_QCD') + \
#
#samples['WW'] = {
#    'name': files,
#    'weight': mcCommonWeight, # + '*nllW', #FIXME: what is this weight
#    'FilesPerJob': 3
#}
#
#files = nanoGetSampleFiles(mcDirectory,'WmToLNu_WmTo2J') + \
#        nanoGetSampleFiles(mcDirectory,'WpTo2J_WmToLNu') + \
#        nanoGetSampleFiles(mcDirectory,'WpToLNu_WmTo2J') + \
#        nanoGetSampleFiles(mcDirectory,'WpToLNu_WpTo2J') + \
#
#samples['WWewk'] = {
#    'name': files,
#    'weight': mcCommonWeight, # + '*nllW', #FIXME: what is this weight
#    'FilesPerJob': 6
#}
#
#samples['ggWW'] = {
#    'name'   : nanoGetSampleFiles(mcDirectory, 'GluGluHToWWToLNuQQ_M125'),
#    'weight' : mcCommonWeight + '*(RelW0.02_B)*(RelW0.02_B < 1000)', # FIXME: in HM +'*'+model+'_B * ('+model+'_B < 1000)', in differential *1.53/1.4
#    'FilesPerJob': 4
#}
#
####### VZ ########
#
##files = nanoGetSampleFiles(mcDirectory,'ZTo2L_ZTo2J_QCD'  ) + \
#files = nanoGetSampleFiles(mcDirectory,'WmTo2J_ZTo2L_QCD' ) + \
#        nanoGetSampleFiles(mcDirectory,'WpTo2J_ZTo2L_QCD' ) + \
#        nanoGetSampleFiles(mcDirectory,'WmToLNu_ZTo2J_QCD') + \
#        nanoGetSampleFiles(mcDirectory,'WpToLNu_ZTo2J_QCD') + \
#        nanoGetSampleFiles(mcDirectory,'ZTo2L_ZTo2J'  ) + \
#        nanoGetSampleFiles(mcDirectory,'WmTo2J_ZTo2L' ) + \
#        nanoGetSampleFiles(mcDirectory,'WpTo2J_ZTo2L' ) + \
#        nanoGetSampleFiles(mcDirectory,'WmToLNu_ZTo2J') + \
#        nanoGetSampleFiles(mcDirectory,'WpToLNu_ZTo2J') ,
#
#samples['VZ'] = {
#    'name': files,
#    'weight': mcCommonWeight,
#    'FilesPerJob': 4
#}


##--------------------------
##VV VBS
#files = nanoGetSampleFiles(mcDirectory,'WmTo2J_ZTo2L_QCD'  ) + \
#        nanoGetSampleFiles(mcDirectory,'WmToLNu_WmTo2J_QCD') + \
#        nanoGetSampleFiles(mcDirectory,'WmToLNu_ZTo2J_QCD' ) + \
#        nanoGetSampleFiles(mcDirectory,'WpTo2J_WmToLNu_QCD') + \
#        nanoGetSampleFiles(mcDirectory,'WpTo2J_ZTo2L_QCD'  ) + \
#        nanoGetSampleFiles(mcDirectory,'WpToLNu_WmTo2J_QCD') + \
#        nanoGetSampleFiles(mcDirectory,'WpToLNu_WpTo2J_QCD') + \
#        nanoGetSampleFiles(mcDirectory,'WpToLNu_ZTo2J_QCD' ) ,
#        #nanoGetSampleFiles(mcDirectory,'ZTo2L_ZTo2J_QCD',  ) , #admin, ADD ME
#
#samples['VV_QCD']  = { 
#    'name' : files,
#    'weight': mcCommonWeight, # + '*nllW', #FIXME: what is this weight
#    'FilesPerJob' : 6,
#}
#
#files = nanoGetSampleFiles(mcDirectory,'WmTo2J_ZTo2L'  ) + \
#        nanoGetSampleFiles(mcDirectory,'WmToLNu_WmTo2J') + \
#        nanoGetSampleFiles(mcDirectory,'WmToLNu_ZTo2J' ) + \
#        nanoGetSampleFiles(mcDirectory,'WpTo2J_WmToLNu') + \
#        nanoGetSampleFiles(mcDirectory,'WpTo2J_ZTo2L'  ) + \
#        nanoGetSampleFiles(mcDirectory,'WpToLNu_WmTo2J') + \
#        nanoGetSampleFiles(mcDirectory,'WpToLNu_WpTo2J') + \
#        nanoGetSampleFiles(mcDirectory,'WpToLNu_ZTo2J' ),
#        #nanoGetSampleFiles(mcDirectory,'ZTo2L_ZTo2J' ),
#
#samples['VV_EWK']  = {
#    'name' : files,
#    'weight': mcCommonWeight, # + '*nllW', #FIXME: what is this weight
#    'FilesPerJob' : 6,
#}

############# VZ ############
#
## FIXME: what about ZZTo2L2Q and WZTo2L2Q ?
#files = nanoGetSampleFiles(mcDirectory, 'ZZ') +\
#        nanoGetSampleFiles(mcDirectory, 'WZ') #FIXME double counting of WZTo3LNu
#
#samples['VZ'] = {
#    'name': files,
#    'weight': mcCommonWeight + '*1.11',
#    'FilesPerJob': 4
#}


########## W+jets #########

#files = nanoGetSampleFiles(mcDirectory, 'WJetsToLNu_Wpt100To250')
#files+= nanoGetSampleFiles(mcDirectory, 'WJetsToLNu_Wpt250To400')
#files+= nanoGetSampleFiles(mcDirectory, 'WJetsToLNu_Wpt400To600')
#files+= nanoGetSampleFiles(mcDirectory, 'WJetsToLNu_Wpt600ToInf')

#_ext4 not processed
# NLO combine stat
oldbW100pt = getBaseWnAOD(mcDirectory, mcProduction, ['WJetsToLNu_Wpt100To250'])
newbW100pt = getBaseWnAOD(mcDirectory, mcProduction, ['WJetsToLNu_Wpt100To250', 'WJetsToLNu_Wpt100To250_ext1'])
newbW100w = newbW100pt+'/baseW'

oldbW250pt = getBaseWnAOD(mcDirectory, mcProduction, ['WJetsToLNu_Wpt250To400'])
newbW250pt = getBaseWnAOD(mcDirectory, mcProduction, ['WJetsToLNu_Wpt250To400', 'WJetsToLNu_Wpt250To400_ext1'])
newbW250w = newbW250pt+'/baseW'

oldbW400pt = getBaseWnAOD(mcDirectory, mcProduction, ['WJetsToLNu_Wpt400To600'])
newbW400pt = getBaseWnAOD(mcDirectory, mcProduction, ['WJetsToLNu_Wpt400To600', 'WJetsToLNu_Wpt400To600_ext1'])
newbW400w = newbW400pt+'/baseW'

oldbW600pt = getBaseWnAOD(mcDirectory, mcProduction, ['WJetsToLNu_Wpt600ToInf'])
newbW600pt = getBaseWnAOD(mcDirectory, mcProduction, ['WJetsToLNu_Wpt600ToInf', 'WJetsToLNu_Wpt600ToInf_ext1'])
newbW600w = newbW600pt+'/baseW'

files = nanoGetSampleFiles(mcDirectory, 'WJetsToLNu_Wpt100To250')
files+= nanoGetSampleFiles(mcDirectory, 'WJetsToLNu_Wpt250To400')
files+= nanoGetSampleFiles(mcDirectory, 'WJetsToLNu_Wpt400To600')
files+= nanoGetSampleFiles(mcDirectory, 'WJetsToLNu_Wpt600ToInf')
files+= nanoGetSampleFiles(mcDirectory, 'WJetsToLNu_Wpt100To250_ext1')
files+= nanoGetSampleFiles(mcDirectory, 'WJetsToLNu_Wpt250To400_ext1')
files+= nanoGetSampleFiles(mcDirectory, 'WJetsToLNu_Wpt400To600_ext1')
files+= nanoGetSampleFiles(mcDirectory, 'WJetsToLNu_Wpt600ToInf_ext1')
files+= nanoGetSampleFiles(mcDirectory, 'WJetsToLNu_ext2')

samples['Wjets'] = {
    'name'   : files,
    'weight' : mcCommonWeight +'*EWKnloW[0]', # ewk nlo correction https://arxiv.org/pdf/1705.04664v2.pdf 
    'FilesPerJob' : 4,
}

# fix baseW for ext samples
addSampleWeight(samples, 'Wjets', 'WJetsToLNu_Wpt100To250'     , newbW100w)
addSampleWeight(samples, 'Wjets', 'WJetsToLNu_Wpt100To250_ext1', newbW100w)
addSampleWeight(samples, 'Wjets', 'WJetsToLNu_Wpt250To400'     , newbW250w)
addSampleWeight(samples, 'Wjets', 'WJetsToLNu_Wpt250To400_ext1', newbW250w)
addSampleWeight(samples, 'Wjets', 'WJetsToLNu_Wpt400To600'     , newbW400w)
addSampleWeight(samples, 'Wjets', 'WJetsToLNu_Wpt400To600_ext1', newbW400w)
addSampleWeight(samples, 'Wjets', 'WJetsToLNu_Wpt600ToInf'     , newbW600w)
addSampleWeight(samples, 'Wjets', 'WJetsToLNu_Wpt600ToInf_ext1', newbW600w)

# avoid double counting
addSampleWeight(samples, 'Wjets', 'WJetsToLNu_ext2', '(LHE_Vpt < 120)')
addSampleWeight(samples, 'Wjets', 'WJetsToLNu_Wpt100To250'     , '(LHE_Vpt > 120)')
addSampleWeight(samples, 'Wjets', 'WJetsToLNu_Wpt100To250_ext1', '(LHE_Vpt > 120)')
addSampleWeight(samples, 'Wjets', 'WJetsToLNu_Wpt250To400'     , '(LHE_Vpt > 120)')
addSampleWeight(samples, 'Wjets', 'WJetsToLNu_Wpt250To400_ext1', '(LHE_Vpt > 120)')
addSampleWeight(samples, 'Wjets', 'WJetsToLNu_Wpt400To600'     , '(LHE_Vpt > 120)')
addSampleWeight(samples, 'Wjets', 'WJetsToLNu_Wpt400To600_ext1', '(LHE_Vpt > 120)')
addSampleWeight(samples, 'Wjets', 'WJetsToLNu_Wpt600ToInf'     , '(LHE_Vpt > 120)')
addSampleWeight(samples, 'Wjets', 'WJetsToLNu_Wpt600ToInf_ext1', '(LHE_Vpt > 120)')

#files = nanoGetSampleFiles(mcDirectory, 'WJetsToLNu_Wpt100To250')
#files+= nanoGetSampleFiles(mcDirectory, 'WJetsToLNu_Wpt250To400')
#files+= nanoGetSampleFiles(mcDirectory, 'WJetsToLNu_Wpt400To600')
#files+= nanoGetSampleFiles(mcDirectory, 'WJetsToLNu_Wpt600ToInf')
#files+= nanoGetSampleFiles(mcDirectory, 'WJetsToLNu_Wpt100To250_ext1')
#files+= nanoGetSampleFiles(mcDirectory, 'WJetsToLNu_Wpt250To400_ext1')
#files+= nanoGetSampleFiles(mcDirectory, 'WJetsToLNu_Wpt400To600_ext1')
#files+= nanoGetSampleFiles(mcDirectory, 'WJetsToLNu_Wpt600ToInf_ext1')
#
#samples['Wjets_hWpt'] = {
#    'name'   : files,
#    'weight' : mcCommonWeight +'*EWKnloW[0]*(LHE_Vpt > 120)',
#    'FilesPerJob' : 4,
#    'suppressNegative' :['all'],
#    'suppressNegativeNuisances' :['all'],
#}
#
#files = nanoGetSampleFiles(mcDirectory, 'WJetsToLNu_ext2')
#
#samples['Wjets_lWpt'] = {
#    'name'   : files,
#    'weight' : mcCommonWeight +'*EWKnloW[0]*(LHE_Vpt < 120)',
#    'FilesPerJob' : 4,
#    'suppressNegative' :['all'],
#    'suppressNegativeNuisances' :['all'],
#}

## HT binned 
#files = nanoGetSampleFiles(mcDirectory, 'WJetsToLNu-LO')
##files+= nanoGetSampleFiles(mcDirectory, 'WJetsToLNu-LO_ext2')
#files+= nanoGetSampleFiles(mcDirectory, 'WJetsToLNu_HT70_100')
#files+= nanoGetSampleFiles(mcDirectory, 'WJetsToLNu_HT100_200')
##files+= nanoGetSampleFiles(mcDirectory, 'WJetsToLNu_HT100_200_ext2')
#files+= nanoGetSampleFiles(mcDirectory, 'WJetsToLNu_HT200_400')
##files+= nanoGetSampleFiles(mcDirectory, 'WJetsToLNu_HT200_400_ext2')
#files+= nanoGetSampleFiles(mcDirectory, 'WJetsToLNu_HT400_600')
##files+= nanoGetSampleFiles(mcDirectory, 'WJetsToLNu_HT400_600_ext1')
#files+= nanoGetSampleFiles(mcDirectory, 'WJetsToLNu_HT600_800')
##files+= nanoGetSampleFiles(mcDirectory, 'WJetsToLNu_HT600_800_ext1')
#files+= nanoGetSampleFiles(mcDirectory, 'WJetsToLNu_HT800_1200')
##files+= nanoGetSampleFiles(mcDirectory, 'WJetsToLNu_HT800_1200_ext1')
#files+= nanoGetSampleFiles(mcDirectory, 'WJetsToLNu_HT1200_2500')
##files+= nanoGetSampleFiles(mcDirectory, 'WJetsToLNu_HT1200_2500_ext1')
#files+= nanoGetSampleFiles(mcDirectory, 'WJetsToLNu_HT2500_inf')
##files+= nanoGetSampleFiles(mcDirectory, 'WJetsToLNu_HT2500_inf_ext1')
#
#samples['Wjets'] = {
#    'name'   : files,
#    'weight' : mcCommonWeight +'*EWKnloW[0]', # ewk nlo correction https://arxiv.org/pdf/1705.04664v2.pdf 
#    #'weight' : mcCommonWeight + '*ewknloW', 
#    #'weight' : mcCommonWeight, 
#    'FilesPerJob' : 4,
#}
## Xsec*k-factor correction https://indico.cern.ch/event/673253/contributions/2756806/attachments/1541203/2416962/20171016_VJetsXsecsUpdate_PH-GEN.pdf
## Fixed in v7
##addSampleWeight(samples, 'Wjets', 'WJetsToLNu-0J', '0.90209625793*1.0176') # 49264.92/54611.6 = 0.90209625793
##addSampleWeight(samples, 'Wjets', 'WJetsToLNu-1J', '0.92350828667*1.0176') # 8280.36/8966.2   = 0.92350828667 
##addSampleWeight(samples, 'Wjets', 'WJetsToLNu-2J', '0.85588177166*1.0176') # 3118.08/3643.12  = 0.85588177166
#
#addSampleWeight(samples, 'Wjets', 'WJetsToLNu-LO', '(LHE_HT < 70)') 
##addSampleWeight(samples, 'Wjets', 'WJetsToLNu-LO_ext2', '(LHE_HT < 70)') 
#
## HT stitching from Davide (derived by comparing HT to inclusive LO with only lep pt cuts)
#addSampleWeight(samples, 'Wjets', 'WJetsToLNu_HT70_100',          '1.21 * 1.0346')  #adding also k-factor
#addSampleWeight(samples, 'Wjets', 'WJetsToLNu_HT100_200',         '1.019') 
##addSampleWeight(samples, 'Wjets', 'WJetsToLNu_HT100_200_ext2',    '1.019') 
#addSampleWeight(samples, 'Wjets', 'WJetsToLNu_HT200_400',         '1.012') 
##addSampleWeight(samples, 'Wjets', 'WJetsToLNu_HT200_400_ext2',    '1.012') 
#addSampleWeight(samples, 'Wjets', 'WJetsToLNu_HT400_600',         '0.9945') 
##addSampleWeight(samples, 'Wjets', 'WJetsToLNu_HT400_600_ext1',    '0.9945')
#addSampleWeight(samples, 'Wjets', 'WJetsToLNu_HT600_800',         '0.9537') 
##addSampleWeight(samples, 'Wjets', 'WJetsToLNu_HT600_800_ext1',    '0.9537') 
#addSampleWeight(samples, 'Wjets', 'WJetsToLNu_HT800_1200',        '0.8844') 
##addSampleWeight(samples, 'Wjets', 'WJetsToLNu_HT800_1200_ext1',   '0.8844')
#addSampleWeight(samples, 'Wjets', 'WJetsToLNu_HT1200_2500',       '0.7643') 
##addSampleWeight(samples, 'Wjets', 'WJetsToLNu_HT1200_2500_ext1',  '0.7643') 
#addSampleWeight(samples, 'Wjets', 'WJetsToLNu_HT2500_inf',        '0.2422') 
##addSampleWeight(samples, 'Wjets', 'WJetsToLNu_HT2500_inf_ext1',   '0.2422') 

#samples['Wjets_HTsf'] = {
#    'name'   : files,
#    'weight' : mcCommonWeight +'*EWKnloW[0]*VptSF[0]', # ewk nlo correction https://arxiv.org/pdf/1705.04664v2.pdf 
#    #'weight' : mcCommonWeight + '*ewknloW', 
#    #'weight' : mcCommonWeight, 
#    'FilesPerJob' : 4,
#}
#
#addSampleWeight(samples, 'Wjets_HTsf', 'WJetsToLNu-LO', '(LHE_HT < 70)') 
##addSampleWeight(samples, 'Wjets_HTsf', 'WJetsToLNu-LO_ext2', '(LHE_HT < 70)') 
#
## HT stitching from Davide (derived by comparing HT to inclusive LO with only lep pt cuts)
#addSampleWeight(samples, 'Wjets_HTsf', 'WJetsToLNu_HT70_100',          '1.21 * 1.0346')  #adding also k-factor
#addSampleWeight(samples, 'Wjets_HTsf', 'WJetsToLNu_HT100_200',         '1.019') 
##addSampleWeight(samples, 'Wjets_HTsf', 'WJetsToLNu_HT100_200_ext2',    '1.019') 
#addSampleWeight(samples, 'Wjets_HTsf', 'WJetsToLNu_HT200_400',         '1.012') 
##addSampleWeight(samples, 'Wjets_HTsf', 'WJetsToLNu_HT200_400_ext2',    '1.012') 
#addSampleWeight(samples, 'Wjets_HTsf', 'WJetsToLNu_HT400_600',         '0.9945') 
##addSampleWeight(samples, 'Wjets_HTsf', 'WJetsToLNu_HT400_600_ext1',    '0.9945')
#addSampleWeight(samples, 'Wjets_HTsf', 'WJetsToLNu_HT600_800',         '0.9537') 
##addSampleWeight(samples, 'Wjets_HTsf', 'WJetsToLNu_HT600_800_ext1',    '0.9537') 
#addSampleWeight(samples, 'Wjets_HTsf', 'WJetsToLNu_HT800_1200',        '0.8844') 
##addSampleWeight(samples, 'Wjets_HTsf', 'WJetsToLNu_HT800_1200_ext1',   '0.8844')
#addSampleWeight(samples, 'Wjets_HTsf', 'WJetsToLNu_HT1200_2500',       '0.7643') 
##addSampleWeight(samples, 'Wjets_HTsf', 'WJetsToLNu_HT1200_2500_ext1',  '0.7643') 
#addSampleWeight(samples, 'Wjets_HTsf', 'WJetsToLNu_HT2500_inf',        '0.2422') 
##addSampleWeight(samples, 'Wjets_HTsf', 'WJetsToLNu_HT2500_inf_ext1',   '0.2422') 


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

##### ggH -> WW
#
#samples['ggH_hww'] = {
#    'name': nanoGetSampleFiles(mcDirectory, 'GluGluHToWWToLNuQQ_M125'),
#    'weight': mcCommonWeight,
#    'FilesPerJob': 10,
#}
#
############# VBF H->WW ############
#samples['qqH_hww'] = {
#    'name': nanoGetSampleFiles(mcDirectory, 'VBFHToWWToLNuQQ_M125'),
#    'weight': mcCommonWeight,
#    'FilesPerJob': 10
#}
#
############# ZH H->WW ############
#
#samples['ZH_hww'] = {
#    'name':   nanoGetSampleFiles(mcDirectory, 'HZJ_HToWW_M125'),
#    'weight': mcCommonWeight,
#    'FilesPerJob': 10
#}
#
## samples['ggZH_hww'] = {
##     'name':   nanoGetSampleFiles(mcDirectory, 'GluGluZH_HToWWTo2L2Nu_M125'),
##     'weight': mcCommonWeight,
##     'FilesPerJob': 10
## }
#
############# WH H->WW ############
#
#samples['WH_hww'] = {
#    'name':   nanoGetSampleFiles(mcDirectory, 'HWplusJ_HToWW_M125') + nanoGetSampleFiles(mcDirectory, 'HWminusJ_HToWW_M125'),
#    'weight': mcCommonWeight,
#    'FilesPerJob': 10
#}
#
############# ttH ############
#
#samples['ttH_hww'] = {
#    'name':   nanoGetSampleFiles(mcDirectory, 'ttHToNonbb_M125'),
#    'weight': mcCommonWeight,
#    'FilesPerJob': 10
#}
#
## ############ H->TauTau ############
##
#samples['ggH_htt'] = {
#    'name': nanoGetSampleFiles(mcDirectory, 'GluGluHToTauTau_M125'),
#    'weight': mcCommonWeight,
#    'FilesPerJob': 10
#}
#
#samples['qqH_htt'] = {
#    'name': nanoGetSampleFiles(mcDirectory, 'VBFHToTauTau_M125'),
#    'weight': mcCommonWeight,
#    'FilesPerJob': 10
#}
#
#samples['ZH_htt'] = {
#   'name': nanoGetSampleFiles(mcDirectory, 'HZJ_HToTauTau_M125'),
#   'weight': mcCommonWeight,
#   'FilesPerJob': 10
#}
#
## samples['ggZH_htt'] = {
##     'name':   nanoGetSampleFiles(mcDirectory, 'GluGluZH_HToTauTau_ZTo2L_M125'),
##     'weight': mcCommonWeight,
##     'FilesPerJob': 4
## }
#
## samples['WH_htt'] = {
##    'name':  nanoGetSampleFiles(mcDirectory, 'HWplusJ_HToTauTau_M125') + nanoGetSampleFiles(mcDirectory, 'HWminusJ_HToTauTau_M125'),
##    'weight': mcCommonWeight,
##    'FilesPerJob': 4
## }


############################################
##############   SIGNALS  ##################
############################################

signal_file = 'darkHiggs_short.py'
#signal_file_int = 'darkHiggs_interpolation.py'
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
    #'SingleMuon'     : 'Trigger_sngMu' ,
    #'SingleElectron' : '!Trigger_sngMu && Trigger_sngEl' ,
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

