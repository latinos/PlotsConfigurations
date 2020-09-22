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

dataReco = 'Run2017_102X_nAODv5_Full2017v6'
#dataSteps = 'DATAl1loose2017v6__Semilep2017'
#dataSteps = 'DATAl1loose2017v6__Semilep2017__MHSemiLepVars'
dataSteps = 'DATAl1loose2017v6__Semilep2017__MHSemiLepVarsMVA'
fakeSteps = 'DATAl1loose2017v6__Semilep2017__MHSemiLepVarsMVA'


mcProduction = 'Fall2017_102X_nAODv5_Full2017v6'
#mcSteps = 'MCl1loose2017v6__MCCorr2017v6__Semilep2017'
#mcSteps = 'MCl1loose2017v6__MCCorr2017v6__Semilep2017__MHSemiLepVars'
mcSteps = 'MCl1loose2017v6__MCCorr2017v6__Semilep2017__MHSemiLepVarsMVA'
mcSteps_per = 'MCl1loose2017v6__MCCorr2017v6__Semilep2017__MHSemiLepVarsMVA_wpermission'


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
        return os.path.join(treeBaseDir, mcProduction, mcSteps.format(var='__' + var))
    else:
        return os.path.join(treeBaseDir, mcProduction, mcSteps.format(var=''))

mcDirectory = makeMCDirectory()
mcDirectory_per = os.path.join(treeBaseDir, mcProduction, mcSteps_per)
dataDirectory = os.path.join(treeBaseDir, dataReco, dataSteps)
fakeDirectory = os.path.join(treeBaseDir, dataReco, fakeSteps)


#########################################
############ MC COMMON ##################
#########################################

# SFweight does not include btag weights
mcCommonWeightNoMatch = 'XSWeight*SFweight[0]*METFilter_MC*btagSF[0]*PUJetIdSF[0]*LepWPCut[0]*1tlVeto[0]'
mcCommonWeight        = 'XSWeight*SFweight[0]*METFilter_MC*btagSF[0]*PUJetIdSF[0]*LepWPCut[0]*1tlVeto[0]*PromptGenLepMatch1l'

###########################################
#############  BACKGROUNDS  ###############
###########################################


###### DY #######

files = nanoGetSampleFiles(mcDirectory, 'DYJetsToLL_M-50_ext1') + \
        nanoGetSampleFiles(mcDirectory, 'DYJetsToLL_M-10to50-LO')

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
}

# FIXME: to add or not to add
# from high mass (fully leptonic) 2017 config
ptllDYW_NLO = '(((0.623108 + 0.0722934*gen_ptll - 0.00364918*gen_ptll*gen_ptll + 6.97227e-05*gen_ptll*gen_ptll*gen_ptll - 4.52903e-07*gen_ptll*gen_ptll*gen_ptll*gen_ptll)*(gen_ptll<45)*(gen_ptll>0) + 1*(gen_ptll>=45))*(abs(gen_mll-90)<3) + (abs(gen_mll-90)>3))'
ptllDYW_LO = '((0.632927+0.0456956*gen_ptll-0.00154485*gen_ptll*gen_ptll+2.64397e-05*gen_ptll*gen_ptll*gen_ptll-2.19374e-07*gen_ptll*gen_ptll*gen_ptll*gen_ptll+6.99751e-10*gen_ptll*gen_ptll*gen_ptll*gen_ptll*gen_ptll)*(gen_ptll>0)*(gen_ptll<100)+(1.41713-0.00165342*gen_ptll)*(gen_ptll>=100)*(gen_ptll<300)+1*(gen_ptll>=300))'


#addSampleWeight(samples,'DY','DYJetsToLL_M-50',ptllDYW_NLO)
addSampleWeight(samples,'DY','DYJetsToLL_M-50_ext1',ptllDYW_NLO)
addSampleWeight(samples,'DY','DYJetsToLL_M-10to50-LO',ptllDYW_LO)

# addSampleWeight(samples,'DY','DYJetsToLL_M-50_HT-100to200'     ,ptllDYW_NLO)
# addSampleWeight(samples,'DY','DYJetsToLL_M-50_HT-200to400'     ,ptllDYW_NLO)
# addSampleWeight(samples,'DY','DYJetsToLL_M-50_HT-400to600_ext1',ptllDYW_NLO)
# addSampleWeight(samples,'DY','DYJetsToLL_M-50_HT-600to800'     ,ptllDYW_NLO)
# addSampleWeight(samples,'DY','DYJetsToLL_M-50_HT-800to1200'    ,ptllDYW_NLO)
# addSampleWeight(samples,'DY','DYJetsToLL_M-50_HT-1200to2500'   ,ptllDYW_NLO)
# addSampleWeight(samples,'DY','DYJetsToLL_M-50_HT-2500toInf'    ,ptllDYW_NLO)



###### Top #######

files = nanoGetSampleFiles(mcDirectory, 'TTToSemiLeptonic_PSweights') + \
        nanoGetSampleFiles(mcDirectory, 'TTWjets') + \
        nanoGetSampleFiles(mcDirectory, 'ST_s-channel') + \
        nanoGetSampleFiles(mcDirectory, 'ST_t-channel_antitop') + \
        nanoGetSampleFiles(mcDirectory, 'ST_t-channel_top') + \
        nanoGetSampleFiles(mcDirectory, 'ST_tW_antitop') + \
        nanoGetSampleFiles(mcDirectory, 'ST_tW_top')

samples['top'] = {
    'name': files,
    'weight': mcCommonWeight,
    'FilesPerJob': 3,
}

# ttbar pT re-weighting
# https://twiki.cern.ch/twiki/bin/viewauth/CMS/TopPtReweighting
# https://indico.cern.ch/event/904971/contributions/3857701/attachments/2036949/3410728/TopPt_20.05.12.pdf
addSampleWeight(samples,'top','TTToSemiLeptonic_PSweights','Top_pTrw')  # https://indico.cern.ch/event/904971/contributions/3857701/attachments/2036949/3410728/TopPt_20.05.12.pdf


# Xsec correction single top s and t channel: xsec in tree is leptonDecays, but sample is inclusiveDecays
lepD_to_incD = '(100./(10.75 + 10.57 + 11.25))'
addSampleWeight(samples,'top','ST_s-channel',         lepD_to_incD)
addSampleWeight(samples,'top','ST_t-channel_antitop', lepD_to_incD)
addSampleWeight(samples,'top','ST_t-channel_top',     lepD_to_incD)

###### VBF V ######

files = nanoGetSampleFiles(mcDirectory,'WLNuJJ_EWK') + \
        nanoGetSampleFiles(mcDirectory,'EWKZ2Jets_ZToLL_M-50')

samples['VBF-V']  = {
    'name' : files,
    'weight': mcCommonWeight, 
    'FilesPerJob' : 6,
}



#-------------------------- inspired by ggH

###### WW ########

files = nanoGetSampleFiles(mcDirectory_per, 'WWToLNuQQ')

samples['WW'] = {
    'name': files,
    'weight': mcCommonWeight + '*nllW', # NLL PS correction on WW pT for qq>WW
    'FilesPerJob': 3
}

# Taking ewk samples from semi-lep VBS (from Davide Valsecchi) is this correct?
# Name indicates for example WpTo2J_WmToLNu -> WplusTo2JWminusToLNuJJ_EWK_LO_SM_MJJ100PTJ10
# Usually WpWmJJ_EWK but this is WWJJToLNuLNu_EWK
files = nanoGetSampleFiles(mcDirectory_per,'WpTo2J_WmToLNu') + \
        nanoGetSampleFiles(mcDirectory_per,'WpToLNu_WmTo2J') + \
        nanoGetSampleFiles(mcDirectory_per,'WpToLNu_WpTo2J') + \
        nanoGetSampleFiles(mcDirectory_per,'WmToLNu_WmTo2J')

samples['WWewk'] = {
    'name': files,
    'weight': mcCommonWeight + '*(Sum$(abs(GenPart_pdgId)==6 || GenPart_pdgId==25)==0)',
    'FilesPerJob': 6
}

# FIXME
# Missing semi-lep MC, using HM signal sample calulating back to bkg with interference term
samples['ggWW'] = {
    'name'   : nanoGetSampleFiles(mcDirectory, 'GluGluHToWWToLNuQQ_M125'),
    'weight' : mcCommonWeight + '*(RelW0.02_B)*(RelW0.02_B < 1000)', 
    'FilesPerJob': 4
}

###### WZ ########

# Taking samples from semi-lep VBS (from Davide Valsecchi) is this correct?
# Name indicates for example WmTo2J_ZTo2L_QCD -> WminusTo2JZTo2LJJ_QCD_LO_SM_MJJ100PTJ10
# Also available: WZ (inclusive), WZTo2L2Q, WZTo3LNu 
# Not available : WZToLNu3Q

#files = nanoGetSampleFiles(mcDirectory_per,'ZTo2L_ZTo2J_QCD'  ) + \
files = nanoGetSampleFiles(mcDirectory_per,'WmTo2J_ZTo2L_QCD' ) + \
        nanoGetSampleFiles(mcDirectory_per,'WpTo2J_ZTo2L_QCD' ) + \
        nanoGetSampleFiles(mcDirectory_per,'WmToLNu_ZTo2J_QCD') + \
        nanoGetSampleFiles(mcDirectory_per,'WpToLNu_ZTo2J_QCD')
samples['WZqcd'] = {
    'name': files,
    'weight': mcCommonWeight,
    'FilesPerJob': 4
}
files = nanoGetSampleFiles(mcDirectory,'WmTo2J_ZTo2L' ) + \
        nanoGetSampleFiles(mcDirectory,'WpTo2J_ZTo2L' ) + \
        nanoGetSampleFiles(mcDirectory,'WmToLNu_ZTo2J') + \
        nanoGetSampleFiles(mcDirectory,'WpToLNu_ZTo2J')
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

#files = nanoGetSampleFiles(mcDirectory,'ZTo2L_ZTo2J_QCD'  ) + \
files = nanoGetSampleFiles(mcDirectory,'ZTo2L_ZTo2J'  )

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

files = nanoGetSampleFiles(mcDirectory, 'WJetsToLNu-0J') +\
        nanoGetSampleFiles(mcDirectory, 'WJetsToLNu-1J') +\
        nanoGetSampleFiles(mcDirectory, 'WJetsToLNu-2J')

samples['Wjets'] = {
    'name'   : files,
    'weight' : mcCommonWeight +'*EWKnloW[0]', # ewk nlo correction https://arxiv.org/pdf/1705.04664v2.pdf 
    'FilesPerJob' : 4,
}
#WJets_0J_xsFix
#addSampleWeight(samples, 'Wjets', 'WJetsToLNu-0J', 'WJets_0J_xsFix[0]')
#addSampleWeight(samples, 'Wjets', 'WJetsToLNu-1J', 'WJets_1J_xsFix[0]')
#addSampleWeight(samples, 'Wjets', 'WJetsToLNu-2J', 'WJets_2J_xsFix[0]')

# Xsec*k-factor correction https://indico.cern.ch/event/673253/contributions/2756806/attachments/1541203/2416962/20171016_VJetsXsecsUpdate_PH-GEN.pdf
#addSampleWeight(samples, 'Wjets', 'WJetsToLNu-0J', '0.90209625793*1.0176') # 49264.92/54611.6 = 0.90209625793
#addSampleWeight(samples, 'Wjets', 'WJetsToLNu-1J', '0.92350828667*1.0176') # 8280.36/8966.2   = 0.92350828667 
#addSampleWeight(samples, 'Wjets', 'WJetsToLNu-2J', '0.85588177166*1.0176') # 3118.08/3643.12  = 0.85588177166

# samples['Wjets'] = {
#     'name':   nanoGetSampleFiles(mcDirectory,'WJetsToLNu_HT70_100',False,'nanoLatino_')
#             + nanoGetSampleFiles(mcDirectory,'WJetsToLNu_HT100_200',False,'nanoLatino_')
#             + nanoGetSampleFiles(mcDirectory,'WJetsToLNu_HT200_400',False,'nanoLatino_')
#             + nanoGetSampleFiles(mcDirectory,'WJetsToLNu_HT400_600',False,'nanoLatino_')
#             + nanoGetSampleFiles(mcDirectory,'WJetsToLNu_HT600_800',False,'nanoLatino_')
#             + nanoGetSampleFiles(mcDirectory,'WJetsToLNu_HT800_1200',False,'nanoLatino_')
#             + nanoGetSampleFiles(mcDirectory,'WJetsToLNu_HT1200_2500',False,'nanoLatino_')
#             + nanoGetSampleFiles(mcDirectory,'WJetsToLNu_HT2500_inf',False,'nanoLatino_'),
#     'weight': mcCommonWeight,
#     'FilesPerJob': 4,
# }


####### Vg ########
files = nanoGetSampleFiles(mcDirectory, 'Wg_MADGRAPHMLM')
files += nanoGetSampleFiles(mcDirectory, 'ZGToLLG')

samples['Vg'] = {
    'name': files,
    'weight': mcCommonWeightNoMatch + '*(!(Gen_ZGstar_mass > 0))', # FIXME: weight fine?
    'FilesPerJob': 4
}
#the following is needed in v5 and should be removed in v6
# addSampleWeight(samples, 'Vg', 'ZGToLLG', '0.448')

####### VgS ########

files = nanoGetSampleFiles(mcDirectory, 'Wg_MADGRAPHMLM') + \
    nanoGetSampleFiles(mcDirectory, 'WZTo3LNu_mllmin01') + \
    nanoGetSampleFiles(mcDirectory, 'ZGToLLG')

samples['VgS'] = {
    'name': files,
    'weight': mcCommonWeight + ' * (gstarLow * 0.94 + gstarHigh * 1.14)', # FIXME: weight fine?
    'FilesPerJob': 4,
    'subsamples': {
      'L': 'gstarLow',
      'H': 'gstarHigh'
    }
}
# FIXME: weights fine?
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
#### ggH -> WW

samples['ggH_hww'] = {
    'name': nanoGetSampleFiles(mcDirectory, 'GluGluHToWWToLNuQQ_M125'),
    'weight': mcCommonWeight,
    'FilesPerJob': 10,
}

############ VBF H->WW ############
samples['qqH_hww'] = {
    'name': nanoGetSampleFiles(mcDirectory, 'VBFHToWWToLNuQQ_M126'),
    'weight': mcCommonWeight,
    'FilesPerJob': 10
}

############ ZH H->WW ############

samples['ZH_hww'] = {
    'name':   nanoGetSampleFiles(mcDirectory, 'HZJ_HToWW_M125'),
    'weight': mcCommonWeight,
    'FilesPerJob': 10
}

# samples['ggZH_hww'] = {
#     'name':   nanoGetSampleFiles(mcDirectory, 'GluGluZH_HToWWTo2L2Nu_M125'),
#     'weight': mcCommonWeight,
#     'FilesPerJob': 10
# }

############ WH H->WW ############

samples['WH_hww'] = {
    'name':   nanoGetSampleFiles(mcDirectory, 'HWplusJ_HToWW_M125') + nanoGetSampleFiles(mcDirectory, 'HWminusJ_HToWW_M125'),
    'weight': mcCommonWeight,
    'FilesPerJob': 10
}

############ ttH ############

samples['ttH_hww'] = {
    'name':   nanoGetSampleFiles(mcDirectory, 'ttHToNonbb_M125'),
    'weight': mcCommonWeight,
    'FilesPerJob': 10
}

# ############ H->TauTau ############
#
samples['ggH_htt'] = {
    'name': nanoGetSampleFiles(mcDirectory, 'GluGluHToTauTau_M125'),
    'weight': mcCommonWeight,
    'FilesPerJob': 10
}

samples['qqH_htt'] = {
    'name': nanoGetSampleFiles(mcDirectory, 'VBFHToTauTau_M125'),
    'weight': mcCommonWeight,
    'FilesPerJob': 10
}

samples['ZH_htt'] = {
   'name': nanoGetSampleFiles(mcDirectory, 'HZJ_HToTauTau_M125'),
   'weight': mcCommonWeight,
   'FilesPerJob': 10
}

# samples['ggZH_htt'] = {
#     'name':   nanoGetSampleFiles(mcDirectory, 'GluGluZH_HToTauTau_ZTo2L_M125'),
#     'weight': mcCommonWeight,
#     'FilesPerJob': 4
# }

# samples['WH_htt'] = {
#    'name':  nanoGetSampleFiles(mcDirectory, 'HWplusJ_HToTauTau_M125') + nanoGetSampleFiles(mcDirectory, 'HWminusJ_HToTauTau_M125'),
#    'weight': mcCommonWeight,
#    'FilesPerJob': 4
# }


###########################################
#############   SIGNALS  ##################
###########################################

signal_file = '2HDMa_signal.py'
if os.path.exists(signal_file) :
    handle = open(signal_file,'r')
    exec(handle)
    handle.close()
else:
    raise IOError('FILE NOT FOUND: '+signal_file+'does not exist.')

for mp in signal:
    samples[mp] = copy.deepcopy(signal[mp])

################################################
############ DATA DECLARATION ##################
################################################

DataRun = [
  ['B','Run2017B-Nano1June2019-v1'] ,
  ['C','Run2017C-Nano1June2019-v1'],
  ['D','Run2017D-Nano1June2019-v1'],
  ['E','Run2017E-Nano1June2019-v1'],
  ['F','Run2017F-Nano1June2019-v1']
]

DataSets = [
    'SingleMuon',
    'SingleElectron'
]

DataTrig = {
    'SingleMuon'     : 'Trigger_sngMu' ,
    'SingleElectron' : '!Trigger_sngMu && Trigger_sngEl' ,
}

###########################################
################## DATA ###################
###########################################

########### FAKE ###########

fakeW_mu20 = 'FW_mu20_el35[0]'
samples['FAKE'] = {
  'name': [],
  'weight': 'METFilter_DATA*'+fakeW_mu20,
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

