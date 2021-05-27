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

###########################################
#############  BACKGROUNDS  ###############
###########################################


###### DY #######

files = nanoGetSampleFiles(mcDirectory, 'DYJetsToLL_M-50_ext1')


# files +=nanoGetSampleFiles(mcDirectory, 'DYJetsToLL_M-50_HT-70to100') + \
#         nanoGetSampleFiles(mcDirectory, 'DYJetsToLL_M-50_HT-100to200') + \
#         nanoGetSampleFiles(mcDirectory, 'DYJetsToLL_M-50_HT-200to400') + \
#         nanoGetSampleFiles(mcDirectory, 'DYJetsToLL_M-50_HT-400to600_ext1') + \
#         nanoGetSampleFiles(mcDirectory, 'DYJetsToLL_M-50_HT-600to800') + \
#         nanoGetSampleFiles(mcDirectory, 'DYJetsToLL_M-50_HT-800to1200') + \
#         nanoGetSampleFiles(mcDirectory, 'DYJetsToLL_M-50_HT-1200to2500') + \
#         nanoGetSampleFiles(mcDirectory, 'DYJetsToLL_M-50_HT-2500toInf')

samples['DY'] = {
    'name': files,
    'weight': mcCommonWeight + '*(Sum$(GenPart_pdgId == 22 && TMath::Odd(GenPart_statusFlags) && GenPart_pt > 20.) == 0)',
    'FilesPerJob': 3,
    #'FilesPerJob': 5,
    'suppressNegative' :['all'],
    'suppressNegativeNuisances' :['all'],
}

# from high mass (fully leptonic) 2017 config
ptllDYW_NLO = '(((0.623108 + 0.0722934*gen_ptll - 0.00364918*gen_ptll*gen_ptll + 6.97227e-05*gen_ptll*gen_ptll*gen_ptll - 4.52903e-07*gen_ptll*gen_ptll*gen_ptll*gen_ptll)*(gen_ptll<45)*(gen_ptll>0) + 1*(gen_ptll>=45))*(abs(gen_mll-90)<3) + (abs(gen_mll-90)>3))'
ptllDYW_LO = '((0.632927+0.0456956*gen_ptll-0.00154485*gen_ptll*gen_ptll+2.64397e-05*gen_ptll*gen_ptll*gen_ptll-2.19374e-07*gen_ptll*gen_ptll*gen_ptll*gen_ptll+6.99751e-10*gen_ptll*gen_ptll*gen_ptll*gen_ptll*gen_ptll)*(gen_ptll>0)*(gen_ptll<100)+(1.41713-0.00165342*gen_ptll)*(gen_ptll>=100)*(gen_ptll<300)+1*(gen_ptll>=300))'


#addSampleWeight(samples,'DY','DYJetsToLL_M-50',ptllDYW_NLO)
#addSampleWeight(samples,'DY','DYJetsToLL_M-50_ext1',ptllDYW_NLO)
addSampleWeight(samples,'DY','DYJetsToLL_M-50_ext1', 'DY_NLO_pTllrw')

files = nanoGetSampleFiles(mcDirectory, 'DYJetsToLL_M-4to50_HT-100to200_ext1')
#files+= nanoGetSampleFiles(mcDirectory, 'DYJetsToLL_M-4to50_HT-200to400') #FIXME: missing file
files+= nanoGetSampleFiles(mcDirectory, 'DYJetsToLL_M-4to50_HT-400to600')
files+= nanoGetSampleFiles(mcDirectory, 'DYJetsToLL_M-4to50_HT-600toInf')
files+= nanoGetSampleFiles(mcDirectory, 'DYJetsToLL_M-10to50-LO_ext1')

samples['DYlow'] = {
    'name': files,
    'weight': mcCommonWeight + '*(Sum$(GenPart_pdgId == 22 && TMath::Odd(GenPart_statusFlags) && GenPart_pt > 20.) == 0)',
    'FilesPerJob': 3,
    #'FilesPerJob': 5,
    'suppressNegative' :['all'],
    'suppressNegativeNuisances' :['all'],
}


#addSampleWeight(samples,'DYlow','DYJetsToLL_M-4to50_HT-100to200',ptllDYW_LO)
#addSampleWeight(samples,'DYlow','DYJetsToLL_M-4to50_HT-200to400',ptllDYW_LO)
#addSampleWeight(samples,'DYlow','DYJetsToLL_M-4to50_HT-400to600',ptllDYW_LO)
#addSampleWeight(samples,'DYlow','DYJetsToLL_M-4to50_HT-600toInf',ptllDYW_LO)
#addSampleWeight(samples,'DYlow','DYJetsToLL_M-10to50-LO',ptllDYW_LO+'*(LHE_HT<100)')

addSampleWeight(samples,'DYlow','DYJetsToLL_M-4to50_HT-100to200', 'DY_LO_pTllrw')
addSampleWeight(samples,'DYlow','DYJetsToLL_M-4to50_HT-200to400', 'DY_LO_pTllrw')
addSampleWeight(samples,'DYlow','DYJetsToLL_M-4to50_HT-400to600', 'DY_LO_pTllrw')
addSampleWeight(samples,'DYlow','DYJetsToLL_M-4to50_HT-600toInf', 'DY_LO_pTllrw')
addSampleWeight(samples,'DYlow','DYJetsToLL_M-10to50-LO',         'DY_LO_pTllrw*(LHE_HT<100)')

# addSampleWeight(samples,'DY','DYJetsToLL_M-50_HT-100to200'     ,ptllDYW_NLO)
# addSampleWeight(samples,'DY','DYJetsToLL_M-50_HT-200to400'     ,ptllDYW_NLO)
# addSampleWeight(samples,'DY','DYJetsToLL_M-50_HT-400to600_ext1',ptllDYW_NLO)
# addSampleWeight(samples,'DY','DYJetsToLL_M-50_HT-600to800'     ,ptllDYW_NLO)
# addSampleWeight(samples,'DY','DYJetsToLL_M-50_HT-800to1200'    ,ptllDYW_NLO)
# addSampleWeight(samples,'DY','DYJetsToLL_M-50_HT-1200to2500'   ,ptllDYW_NLO)
# addSampleWeight(samples,'DY','DYJetsToLL_M-50_HT-2500toInf'    ,ptllDYW_NLO)



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


## Missing TTTo2L2Nu, TTZjets(_ext1)
#files = nanoGetSampleFiles(mcDirectory, 'TTToSemiLeptonic')
#files+= nanoGetSampleFiles(mcDirectory, 'TTTo2L2Nu')
#files+= nanoGetSampleFiles(mcDirectory, 'TTWjets')
#files+= nanoGetSampleFiles(mcDirectory, 'TTZjets_ext1')
#
#samples['ttop'] = {
#    'name': files,
#    'weight': mcCommonWeight,
#    'FilesPerJob': 3,
#}
#
## ttbar pT re-weighting
## https://twiki.cern.ch/twiki/bin/viewauth/CMS/TopPtReweighting
## https://indico.cern.ch/event/904971/contributions/3857701/attachments/2036949/3410728/TopPt_20.05.12.pdf
#addSampleWeight(samples,'ttop','TTToSemiLeptonic','Top_pTrw')  
#addSampleWeight(samples,'ttop','TTTo2L2Nu','Top_pTrw')
#addSampleWeight(samples,'ttop','TTWjets','Top_pTrw')
#addSampleWeight(samples,'ttop','TTZjets_ext1','Top_pTrw')
#
#files = nanoGetSampleFiles(mcDirectory, 'ST_s-channel')
#files+= nanoGetSampleFiles(mcDirectory, 'ST_t-channel_antitop')
#files+= nanoGetSampleFiles(mcDirectory, 'ST_t-channel_top')
#files+= nanoGetSampleFiles(mcDirectory, 'ST_tW_antitop')
#files+= nanoGetSampleFiles(mcDirectory, 'ST_tW_top')
#
#samples['stop'] = {
#    'name': files,
#    'weight': mcCommonWeight,
#    'FilesPerJob': 3,
#}
#
## Xsec correction single top s and t channel: xsec in tree is leptonDecays, but sample is inclusiveDecays
#lepD_to_incD = '(100./(10.75 + 10.57 + 11.25))'
##addSampleWeight(samples,'top','ST_s-channel',         lepD_to_incD)
#addSampleWeight(samples,'stop','ST_t-channel_antitop', lepD_to_incD)
#addSampleWeight(samples,'stop','ST_t-channel_top',     lepD_to_incD)

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
    #'weight': mcCommonWeight + '*nllW', # NLL PS correction on WW pT for qq>WW
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
    #'name'   : nanoGetSampleFiles(mcDirectoryBR, 'GluGluHToWWToLNuQQ_M125'),
    #'weight' : mcCommonWeight + '*(RelW0.02_B)*(RelW0.02_B < 50)', 
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

# Pt binned + LO
#files = nanoGetSampleFiles(mcDirectory, 'WJetsToLNu_Pt50to100')
#files+= nanoGetSampleFiles(mcDirectory, 'WJetsToLNu_Pt100to250')
#files+= nanoGetSampleFiles(mcDirectory, 'WJetsToLNu_Pt250to400')
#files+= nanoGetSampleFiles(mcDirectory, 'WJetsToLNu_Pt400to600')
#files+= nanoGetSampleFiles(mcDirectory, 'WJetsToLNu_Pt600toInf')
#files+= nanoGetSampleFiles(mcDirectory, 'WJetsToLNu-LO')

# statistical merge
#oldbW1J = getBaseWnAOD(mcDirectory, mcProduction, ['WJetsToLNu-1J'])
newbW1J = getBaseWnAOD(mcDirectory, mcProduction, ['WJetsToLNu-1J', 'WJetsToLNu-1J_ext1'])
newbW1Jw = newbW1J+'/baseW'

#oldbW2J = getBaseWnAOD(mcDirectory, mcProduction, ['WJetsToLNu-2J'])
newbW2J = getBaseWnAOD(mcDirectory, mcProduction, ['WJetsToLNu-2J', 'WJetsToLNu-2J_ext1'])
newbW2Jw = newbW2J+'/baseW'

files = nanoGetSampleFiles(mcDirectory, 'WJetsToLNu_Pt100to250')
files+= nanoGetSampleFiles(mcDirectory, 'WJetsToLNu_Pt250to400')
files+= nanoGetSampleFiles(mcDirectory, 'WJetsToLNu_Pt400to600')
files+= nanoGetSampleFiles(mcDirectory, 'WJetsToLNu_Pt600toInf')
files+= nanoGetSampleFiles(mcDirectory, 'WJetsToLNu-0J')
files+= nanoGetSampleFiles(mcDirectory, 'WJetsToLNu-1J')
files+= nanoGetSampleFiles(mcDirectory, 'WJetsToLNu-1J_ext1')
files+= nanoGetSampleFiles(mcDirectory, 'WJetsToLNu-2J')
files+= nanoGetSampleFiles(mcDirectory, 'WJetsToLNu-2J_ext1')

samples['Wjets'] = {
    'name'   : files,
    'weight' : mcCommonWeight +'*EWKnloW[0]', # ewk nlo correction https://arxiv.org/pdf/1705.04664v2.pdf 
    'FilesPerJob' : 4,
}

# fix baseW for ext
addSampleWeight(samples, 'Wjets', 'WJetsToLNu-1J'     , newbW1Jw)
addSampleWeight(samples, 'Wjets', 'WJetsToLNu-1J_ext1', newbW1Jw)
addSampleWeight(samples, 'Wjets', 'WJetsToLNu-2J'     , newbW2Jw)
addSampleWeight(samples, 'Wjets', 'WJetsToLNu-2J_ext1', newbW2Jw)

# avoid overlap
addSampleWeight(samples, 'Wjets', 'WJetsToLNu-0J'     , '(LHE_Vpt < 120)')
addSampleWeight(samples, 'Wjets', 'WJetsToLNu-1J'     , '(LHE_Vpt < 120)')
addSampleWeight(samples, 'Wjets', 'WJetsToLNu-1J_ext1', '(LHE_Vpt < 120)')
addSampleWeight(samples, 'Wjets', 'WJetsToLNu-2J'     , '(LHE_Vpt < 120)')
addSampleWeight(samples, 'Wjets', 'WJetsToLNu-2J_ext1', '(LHE_Vpt < 120)')
addSampleWeight(samples, 'Wjets', 'WJetsToLNu_Pt100to250', '(LHE_Vpt > 120)')
addSampleWeight(samples, 'Wjets', 'WJetsToLNu_Pt250to400', '(LHE_Vpt > 120)')
addSampleWeight(samples, 'Wjets', 'WJetsToLNu_Pt400to600', '(LHE_Vpt > 120)')
addSampleWeight(samples, 'Wjets', 'WJetsToLNu_Pt600toInf', '(LHE_Vpt > 120)')
#addSampleWeight(samples, 'Wjets', 'WJetsToLNu-0J'     , '((LHE_Vpt < 100) + (LHE_Vpt > 100 && LHE_Vpt < 250)*0.3 + (LHE_Vpt > 250)*0.1)')
#addSampleWeight(samples, 'Wjets', 'WJetsToLNu-1J'     , '((LHE_Vpt < 100) + (LHE_Vpt > 100 && LHE_Vpt < 250)*0.3 + (LHE_Vpt > 250)*0.1)')
#addSampleWeight(samples, 'Wjets', 'WJetsToLNu-1J_ext1', '((LHE_Vpt < 100) + (LHE_Vpt > 100 && LHE_Vpt < 250)*0.3 + (LHE_Vpt > 250)*0.1)')
#addSampleWeight(samples, 'Wjets', 'WJetsToLNu-2J'     , '((LHE_Vpt < 100) + (LHE_Vpt > 100 && LHE_Vpt < 250)*0.3 + (LHE_Vpt > 250)*0.1)')
#addSampleWeight(samples, 'Wjets', 'WJetsToLNu-2J_ext1', '((LHE_Vpt < 100) + (LHE_Vpt > 100 && LHE_Vpt < 250)*0.3 + (LHE_Vpt > 250)*0.1)')
#addSampleWeight(samples, 'Wjets', 'WJetsToLNu_Pt100to250', '0.7')
#addSampleWeight(samples, 'Wjets', 'WJetsToLNu_Pt250to400', '0.9')
#addSampleWeight(samples, 'Wjets', 'WJetsToLNu_Pt400to600', '0.9')
#addSampleWeight(samples, 'Wjets', 'WJetsToLNu_Pt600toInf', '0.9')


#samples['Wjets_PuppiRW'] = {
#    'name'   : files,
#    'weight' : mcCommonWeight +'*EWKnloW[0]*Wjets_puppirw[0]', # ewk nlo correction https://arxiv.org/pdf/1705.04664v2.pdf 
#    #'weight' : mcCommonWeight + '*ewknloW', 
#    #'weight' : mcCommonWeight, 
#    'FilesPerJob' : 4,
#}
#
## HT binned
#files = nanoGetSampleFiles(mcDirectory, 'WJetsToLNu_HT70_100')
#files+= nanoGetSampleFiles(mcDirectory, 'WJetsToLNu_HT100_200')
#files+= nanoGetSampleFiles(mcDirectory, 'WJetsToLNu_HT200_400')
#files+= nanoGetSampleFiles(mcDirectory, 'WJetsToLNu_HT400_600')
#files+= nanoGetSampleFiles(mcDirectory, 'WJetsToLNu_HT600_800')
#files+= nanoGetSampleFiles(mcDirectory, 'WJetsToLNu_HT800_1200')
#files+= nanoGetSampleFiles(mcDirectory, 'WJetsToLNu_HT1200_2500')
#files+= nanoGetSampleFiles(mcDirectory, 'WJetsToLNu_HT2500_inf')
#files+= nanoGetSampleFiles(mcDirectory, 'WJetsToLNu-LO')
#
#samples['Wjets_HTsf'] = {
#    'name'   : files,
#    'weight' : mcCommonWeight +'*EWKnloW[0]*VptSF[0]', # ewk nlo correction https://arxiv.org/pdf/1705.04664v2.pdf 
#    #'weight' : mcCommonWeight + '*ewknloW', 
#    #'weight' : mcCommonWeight, 
#    'FilesPerJob' : 4,
#}
#
#addSampleWeight(samples, 'Wjets_HTsf', 'WJetsToLNu-LO', '(LHE_HT < 70)') 
#
## HT stitching from Davide (derived by comparing HT to inclusive LO with only lep pt cuts)
#addSampleWeight(samples, 'Wjets_HTsf', 'WJetsToLNu_HT70_100', '1.21 * 0.9582') 
#addSampleWeight(samples, 'Wjets_HTsf', 'WJetsToLNu_HT100_200',    '0.9525') 
#addSampleWeight(samples, 'Wjets_HTsf', 'WJetsToLNu_HT200_400',    '0.9577') 
#addSampleWeight(samples, 'Wjets_HTsf', 'WJetsToLNu_HT400_600',    '0.9613') 
#addSampleWeight(samples, 'Wjets_HTsf', 'WJetsToLNu_HT600_800',    '1.0742') 
#addSampleWeight(samples, 'Wjets_HTsf', 'WJetsToLNu_HT800_1200',   '1.1698') 
#addSampleWeight(samples, 'Wjets_HTsf', 'WJetsToLNu_HT1200_2500',  '1.3046') 
#addSampleWeight(samples, 'Wjets_HTsf', 'WJetsToLNu_HT2500_inf',   '2.1910')

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
#    'name': nanoGetSampleFiles(mcDirectory, 'VBFHToWWToLNuQQ_M126'),
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

##signal_file = 'darkHiggs_private.py'
#signal_file = 'darkHiggs_central.py'
#if os.path.exists(signal_file) :
#    handle = open(signal_file,'r')
#    exec(handle)
#    handle.close()
#else:
#    raise IOError('FILE NOT FOUND: '+signal_file+'does not exist.')
#
#for mp in signal:
#    samples[mp] = copy.deepcopy(signal[mp])

################################################
############ DATA DECLARATION ##################
################################################

#DataRun = [
#  ['B','Run2017B-02Apr2020-v1'] ,
#  ['C','Run2017C-02Apr2020-v1'],
#  ['D','Run2017D-02Apr2020-v1'],
#  ['E','Run2017E-02Apr2020-v1'],
#  ['F','Run2017F-02Apr2020-v1']
#]
#
#DataSets = [
#    'SingleMuon',
#    'SingleElectron'
#]
#
#DataTrig = {
#    #'SingleMuon'     : 'Trigger_sngMu' ,
#    #'SingleElectron' : '!Trigger_sngMu && Trigger_sngEl' ,
#    'SingleMuon'     : '!Trigger_sngEl && Trigger_sngMu' ,
#    'SingleElectron' : 'Trigger_sngEl' ,
#}

###########################################
################## DATA ###################
###########################################

############ FAKE ###########
#
#Mu_jetEt = 35
#El_jetEt = 35
#fakeW = 'FW_mu'+str(Mu_jetEt)+ '_el'+str(El_jetEt)+'[0]'
#
#samples['FAKE'] = {
#  'name': [],
#  'weight': 'METFilter_DATA*'+fakeW,
#  'weights': [],
#  'isData': ['all'],
#  'FilesPerJob': 15,
#  #'FilesPerJob': 25
#}
#
#for _, sd in DataRun:
#  for pd in DataSets:
#    files = nanoGetSampleFiles(fakeDirectory, pd + '_' + sd)
#    samples['FAKE']['name'].extend(files)
#    samples['FAKE']['weights'].extend([DataTrig[pd]] * len(files))
#
#
############ DATA ###########
#
#samples['DATA'] = {
#  'name': [],
#  'weight': 'METFilter_DATA*LepWPCut[0]*1tlVeto[0]',
#  'weights': [],
#  'isData': ['all'],
#  'FilesPerJob': 25
#}
#
#for _, sd in DataRun:
#  for pd in DataSets:
#    files = nanoGetSampleFiles(dataDirectory, pd + '_' + sd)
#    samples['DATA']['name'].extend(files)
#    samples['DATA']['weights'].extend([DataTrig[pd]] * len(files))
#

curr_samps = samples.keys()
for samp in curr_samps:
    if not 'weight' in samples[samp]: continue
    samples[samp+'_Up'] = copy.deepcopy(samples[samp])
    samples[samp+'_Up']['weight'] += ' * (puWeightUp/puWeight)'
    samples[samp+'_Down'] = copy.deepcopy(samples[samp])
    samples[samp+'_Down']['weight'] += ' * (puWeightDown/puWeight)'
