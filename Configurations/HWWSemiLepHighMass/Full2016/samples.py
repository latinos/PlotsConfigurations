import os
import inspect

configurations = os.path.realpath(inspect.getfile(inspect.currentframe())) # this file
configurations = os.path.dirname(configurations) # Full2018
configurations = os.path.dirname(configurations) # HWWSemiLepHighMass
configurations = os.path.dirname(configurations) # Configurations

from LatinoAnalysis.Tools.commonTools import getSampleFiles, getBaseW, getBaseWnAOD, addSampleWeight

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

massesAndModelsFile = "massesAndModels.py"
if os.path.exists(massesAndModelsFile) :
    handle = open(massesAndModelsFile,'r')
    exec(handle)
    handle.close()
else:
    print "!!! ERROR file ", massesAndModelsFile, " does not exist."


################################################
################# SKIMS ########################
################################################

mcProduction = 'Summer16_102X_nAODv5_Full2016v6'

dataReco = 'Run2016_102X_nAODv5_Full2016v6'

mcSteps = 'MCl1loose2016v6__MCCorr2016v6__Semilep2016'

dataSteps = 'DATAl1loose2016v6__Semilep2016'

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
dataDirectory = os.path.join(treeBaseDir, dataReco, dataSteps)

################################################
############ DATA DECLARATION ##################
################################################

DataRun = [
    ['B','Run2016B-Nano1June2019_ver2-v1'] ,
    ['C','Run2016C-Nano1June2019-v1'] ,
    ['D','Run2016D-Nano1June2019-v1'] ,
    ['E','Run2016E-Nano1June2019-v1'] ,
    ['F','Run2016F-Nano1June2019-v1'] ,
    ['G','Run2016G-Nano1June2019-v1'] ,
    ['H','Run2016H-Nano1June2019-v1'] ,
]

DataSets = [
    'SingleMuon',
    'SingleElectron'
]

DataTrig = {
    'SingleMuon'     : 'Trigger_sngMu' ,
    'SingleElectron' : '!Trigger_sngMu && Trigger_sngEl' ,
}

#########################################
############ MC COMMON ##################
#########################################

# SFweight does not include btag weights
mcCommonWeightNoMatch = 'XSWeight*SFweight[0]*METFilter_MC'
mcCommonWeight = 'XSWeight*SFweight[0]*Lepton_promptgenmatched[0]*METFilter_MC'

###########################################
#############  BACKGROUNDS  ###############
###########################################

###### DY #######

# from HighMass (fully leptonic) 2016 config
ptllDYW_NLO = '((0.623108 + 0.0722934*gen_ptll - 0.00364918*gen_ptll*gen_ptll + 6.97227e-05*gen_ptll*gen_ptll*gen_ptll - 4.52903e-07*gen_ptll*gen_ptll*gen_ptll*gen_ptll)*(gen_ptll<45)*(gen_ptll>0) + 1*(gen_ptll>=45))'
ptllDYW_LO = '((0.632927+0.0456956*gen_ptll-0.00154485*gen_ptll*gen_ptll+2.64397e-05*gen_ptll*gen_ptll*gen_ptll-2.19374e-07*gen_ptll*gen_ptll*gen_ptll*gen_ptll+6.99751e-10*gen_ptll*gen_ptll*gen_ptll*gen_ptll*gen_ptll)*(gen_ptll>0)*(gen_ptll<100)+(1.41713-0.00165342*gen_ptll)*(gen_ptll>=100)*(gen_ptll<300)+1*(gen_ptll>=300))'


files = nanoGetSampleFiles(mcDirectory, 'DYJetsToLL_M-10to50-LO')

files +=nanoGetSampleFiles(mcDirectory, 'DYJetsToLL_M-50_HT-70to100')
files +=nanoGetSampleFiles(mcDirectory, 'DYJetsToLL_M-50_HT-100to200_ext1') + \
        nanoGetSampleFiles(mcDirectory, 'DYJetsToLL_M-50_HT-200to400_ext1') + \
        nanoGetSampleFiles(mcDirectory, 'DYJetsToLL_M-50_HT-400to600_ext1') + \
        nanoGetSampleFiles(mcDirectory, 'DYJetsToLL_M-50_HT-600to800') + \
        nanoGetSampleFiles(mcDirectory, 'DYJetsToLL_M-50_HT-800to1200') + \
        nanoGetSampleFiles(mcDirectory, 'DYJetsToLL_M-50_HT-1200to2500') + \
        nanoGetSampleFiles(mcDirectory, 'DYJetsToLL_M-50_HT-2500toinf')


samples['DY'] = {
    'name': files,
    'weight': mcCommonWeight + '*(Sum$(GenPart_pdgId == 22 && TMath::Odd(GenPart_statusFlags) && GenPart_pt > 20.) == 0)',
    'FilesPerJob': 3,
}

addSampleWeight(samples,'DY','DYJetsToLL_M-10to50',ptllDYW_LO)


addSampleWeight(samples,'DY','DYJetsToLL_M-50_HT-70to100'      ,ptllDYW_NLO)
addSampleWeight(samples,'DY','DYJetsToLL_M-50_HT-100to200_ext1',ptllDYW_NLO)
addSampleWeight(samples,'DY','DYJetsToLL_M-50_HT-200to400_ext1',ptllDYW_NLO)
addSampleWeight(samples,'DY','DYJetsToLL_M-50_HT-400to600_ext1',ptllDYW_NLO)
addSampleWeight(samples,'DY','DYJetsToLL_M-50_HT-600to800'     ,ptllDYW_NLO)
addSampleWeight(samples,'DY','DYJetsToLL_M-50_HT-800to1200'    ,ptllDYW_NLO)
addSampleWeight(samples,'DY','DYJetsToLL_M-50_HT-1200to2500'   ,ptllDYW_NLO)
addSampleWeight(samples,'DY','DYJetsToLL_M-50_HT-2500toinf'    ,ptllDYW_NLO)



###### Top #######

# nanoGetSampleFiles(mcDirectory, 'TTWJetsToLNu_ext1') + \
files = nanoGetSampleFiles(mcDirectory, 'TTToSemiLeptonic') + \
        nanoGetSampleFiles(mcDirectory, 'ST_s-channel') + \
        nanoGetSampleFiles(mcDirectory, 'ST_t-channel_antitop') + \
        nanoGetSampleFiles(mcDirectory, 'ST_t-channel_top') + \
        nanoGetSampleFiles(mcDirectory, 'ST_tW_antitop') + \
        nanoGetSampleFiles(mcDirectory, 'ST_tW_top')

samples['top'] = {
    'name': files,
    'weight': mcCommonWeight,
    'FilesPerJob': 2,
}
# FIXME: ???
addSampleWeight(samples,'top','TTToSemiLeptonic','Top_pTrw')


###### WW ########

files = nanoGetSampleFiles(mcDirectory, 'WWToLNuQQ_ext1')

samples['WW'] = {
    'name': files,
    'weight': mcCommonWeight, # + '*nllW', #FIXME: what is this weight
    'FilesPerJob': 3
}

samples['WWewk'] = {
    'name': nanoGetSampleFiles(mcDirectory, 'WpWmJJ_EWK'),
    'weight': mcCommonWeight + '*(Sum$(abs(GenPart_pdgId)==6 || GenPart_pdgId==25)==0)',
    #FIXME there are other samples that dont contain top/higgs to begin with
    #filter tops and Higgs
    'FilesPerJob': 3
}

# # k-factor 1.4 already taken into account in XSWeight
# files = nanoGetSampleFiles(mcDirectory, 'GluGluToWWToENEN') + \
#     nanoGetSampleFiles(mcDirectory, 'GluGluToWWToENMN') + \
#     nanoGetSampleFiles(mcDirectory, 'GluGluToWWToENTN') + \
#     nanoGetSampleFiles(mcDirectory, 'GluGluToWWToMNEN') + \
#     nanoGetSampleFiles(mcDirectory, 'GluGluToWWToMNMN') + \
#     nanoGetSampleFiles(mcDirectory, 'GluGluToWWToMNTN') + \
#     nanoGetSampleFiles(mcDirectory, 'GluGluToWWToTNEN') + \
#     nanoGetSampleFiles(mcDirectory, 'GluGluToWWToTNMN') + \
#     nanoGetSampleFiles(mcDirectory, 'GluGluToWWToTNTN')
#
# samples['ggWW'] = {
#     'name': files,
#     'weight': mcCommonWeight + '*1.53/1.4', # updating k-factor
#     'FilesPerJob': 4
# }
############# ggWW semileptonic ##############
#FIXME: samples for this are being produced
#FIXME: in the meantime use interference weights?
samples['ggWW'] = {
    'name'   : nanoGetSampleFiles(mcDirectory, 'GluGluHToWWToLNuQQ_M400'),
    'weight' : mcCommonWeight +'*'+model_B+' * ('+model_B+' < 500)',
    'FilesPerJob': 4
}


samples['qqWWqq'] = {
    'name'   :   nanoGetSampleFiles(mcDirectory,'WpWmJJ_QCD_noTop') ,
    'weight' : mcCommonWeight+'*(GenLHE)',
    'FilesPerJob': 4
}

samples['WW2J'] = {
    'name'   :   nanoGetSampleFiles(mcDirectory,'WpWmJJ_QCD_noTop') ,
    'weight' : mcCommonWeight +'*(!GenLHE)',
    'FilesPerJob': 4
}



########## W+jets #########

files = nanoGetSampleFiles(mcDirectory, 'WJetsToLNu_ext2')

samples['Wjets'] = {
    'name'   : files,
    'weight' : mcCommonWeight,
    'FilesPerJob' : 2,
}

# these samples seem to be not great (too few events in plots)
# samples['Wjets'] = {
#     'name':   nanoGetSampleFiles(mcDirectory,'WJetsToLNu_HT70_100',False,'nanoLatino_')
#             + nanoGetSampleFiles(mcDirectory,'WJetsToLNu_HT100_200_ext1',False,'nanoLatino_')
#             + nanoGetSampleFiles(mcDirectory,'WJetsToLNu_HT200_400_ext1',False,'nanoLatino_')
#             + nanoGetSampleFiles(mcDirectory,'WJetsToLNu_HT400_600_ext1',False,'nanoLatino_')
#             + nanoGetSampleFiles(mcDirectory,'WJetsToLNu_HT600_800_ext1',False,'nanoLatino_')
#             + nanoGetSampleFiles(mcDirectory,'WJetsToLNu_HT800_1200_ext1',False,'nanoLatino_')
#             + nanoGetSampleFiles(mcDirectory,'WJetsToLNu_HT1200_2500_ext1',False,'nanoLatino_')
#             + nanoGetSampleFiles(mcDirectory,'WJetsToLNu_HT2500_inf_ext1',False,'nanoLatino_'),
#     'weight': mcCommonWeight,
#     'FilesPerJob': 4,
# }



####### Vg ########
files = nanoGetSampleFiles(mcDirectory, 'Wg_MADGRAPHMLM') + \
    nanoGetSampleFiles(mcDirectory, 'Zg')

samples['Vg'] = {
    'name': files,
    'weight': mcCommonWeightNoMatch + '*(!(Gen_ZGstar_mass > 0))',
    'FilesPerJob': 4
}


####### VgS ########
files = nanoGetSampleFiles(mcDirectory, 'Wg_MADGRAPHMLM') + \
    nanoGetSampleFiles(mcDirectory, 'Zg') + \
    nanoGetSampleFiles(mcDirectory, 'WZTo3LNu_mllmin01') # FIXME should this be 3L?

samples['VgS'] = {
    'name': files,
    'weight': mcCommonWeight + ' * (gstarLow * 0.94 + gstarHigh * 1.14)',
    'FilesPerJob': 4,
    'subsamples': {
      'L': 'gstarLow',
      'H': 'gstarHigh'
    }
}
addSampleWeight(samples, 'VgS', 'Wg_MADGRAPHMLM', '(Gen_ZGstar_mass > 0 && Gen_ZGstar_mass < 0.1)')
addSampleWeight(samples, 'VgS', 'Zg', '(Gen_ZGstar_mass > 0)*(Sum$(GenPart_pdgId == 22 && TMath::Odd(GenPart_statusFlags) && GenPart_pt < 20.) == 0)')
addSampleWeight(samples, 'VgS', 'WZTo3LNu_mllmin01', '(Gen_ZGstar_mass > 0.1)')


############ VZ ############

files = nanoGetSampleFiles(mcDirectory, 'ZZ') +\
    nanoGetSampleFiles(mcDirectory, 'WZTo1L1Nu2Q') +\
    nanoGetSampleFiles(mcDirectory, 'WZTo2L2Q')

samples['VZ'] = {
    'name': files,
    'weight': mcCommonWeight + '*1.11',
    'FilesPerJob': 4
}

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

########### QCD ###########

# files = nanoGetSampleFiles(mcDirectory,'QCD_Pt-15to20_MuEnrichedPt5') + \
#     nanoGetSampleFiles(mcDirectory,'QCD_Pt-20to30_MuEnrichedPt5') + \
#     nanoGetSampleFiles(mcDirectory,'QCD_Pt-30to50_MuEnrichedPt5') + \
#     nanoGetSampleFiles(mcDirectory,'QCD_Pt-50to80_MuEnrichedPt5') + \
#     nanoGetSampleFiles(mcDirectory,'QCD_Pt-80to120_MuEnrichedPt5') + \
#     nanoGetSampleFiles(mcDirectory,'QCD_Pt-120to170_MuEnrichedPt5') + \
#     nanoGetSampleFiles(mcDirectory,'QCD_Pt-170to300_MuEnrichedPt5') + \
#     nanoGetSampleFiles(mcDirectory,'QCD_Pt-15to20_EMEnriched') + \
#     nanoGetSampleFiles(mcDirectory,'QCD_Pt-20to30_EMEnriched') + \
#     nanoGetSampleFiles(mcDirectory,'QCD_Pt-30to50_EMEnriched') + \
#     nanoGetSampleFiles(mcDirectory,'QCD_Pt-50to80_EMEnriched')

    # nanoGetSampleFiles(mcDirectory,'QCD_Pt-300to470_MuEnrichedPt5') + \
    # nanoGetSampleFiles(mcDirectory,'QCD_Pt-470to600_MuEnrichedPt5') + \
    # nanoGetSampleFiles(mcDirectory,'QCD_Pt-600to800_MuEnrichedPt5') + \
    # nanoGetSampleFiles(mcDirectory,'QCD_Pt-800to1000_MuEnrichedPt5') + \
    # nanoGetSampleFiles(mcDirectory,'QCD_Pt-1000toInf_MuEnrichedPt5') + \
    # nanoGetSampleFiles(mcDirectory,'QCD_Pt-80to120_EMEnriched') + \
    # nanoGetSampleFiles(mcDirectory,'QCD_Pt-120to170_EMEnriched') + \
    # nanoGetSampleFiles(mcDirectory,'QCD_Pt-170to300_EMEnriched') + \
    # nanoGetSampleFiles(mcDirectory,'QCD_Pt-300toInf_EMEnriched')
files = nanoGetSampleFiles(mcDirectory,'QCD_Pt-15to20_MuEnrichedPt5') + \
       nanoGetSampleFiles(mcDirectory,'QCD_Pt-20toInf_MuEnrichedPt15') + \
       nanoGetSampleFiles(mcDirectory,'QCD_Pt-20to30_EMEnriched') + \
       nanoGetSampleFiles(mcDirectory,'QCD_Pt-30to50_EMEnriched') + \
       nanoGetSampleFiles(mcDirectory,'QCD_Pt-50to80_EMEnriched')

samples['QCD'] = {
    'name'   :   files,
    'weight' : mcCommonWeight,
    'FilesPerJob' : 2,
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
    'name': nanoGetSampleFiles(mcDirectory, 'VBFHToWWToLNuQQ_M125'),
    'weight': mcCommonWeight,
    'FilesPerJob': 10
}

############ ZH H->WW ############

samples['ZH_hww'] = {
    'name':   nanoGetSampleFiles(mcDirectory, 'HZJ_HToWW_M125'),
    'weight': mcCommonWeight,
    'FilesPerJob': 10
}

samples['ggZH_hww'] = {
    'name':   nanoGetSampleFiles(mcDirectory, 'ggZH_HToWW_M125'),
    'weight': mcCommonWeight,
    'FilesPerJob': 10
}

############ WH H->WW ############

samples['WH_hww'] = {
    'name':   nanoGetSampleFiles(mcDirectory, 'HWplusJ_HToWW_M125') + nanoGetSampleFiles(mcDirectory, 'HWminusJ_HToWW_M125'),
    'weight': mcCommonWeight,
    'FilesPerJob': 10
}

############ ttH ############

# samples['ttH_hww'] = {
#     'name':   nanoGetSampleFiles(mcDirectory, 'ttHToNonbb_M125'),
#     'weight': mcCommonWeight,
#     'FilesPerJob': 10
# }

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

samples['WH_htt'] = {
   'name':  nanoGetSampleFiles(mcDirectory, 'HWplusJ_HToTauTau_M125') + nanoGetSampleFiles(mcDirectory, 'HWminusJ_HToTauTau_M125'),
   'weight': mcCommonWeight,
   'FilesPerJob': 10
}




###########################################
#############   SIGNALS  ##################
###########################################


signals = []

####### ggH -> WW #################
for MX in massggh:
    samples['GGH_'+MX+model_name] = {
        'name': nanoGetSampleFiles(mcDirectory, 'GluGluHToWWToLNuQQ_M'+MX),
        'weight': mcCommonWeight+'*('+model+' + '+model+'_I)* (abs('+model_I+') < 500)',
        'FilesPerJob': 5
    }
    signals.append('GGH_'+MX+model_name)


    samples['GGHSBI_'+MX+model_name] = {
        'name': nanoGetSampleFiles(mcDirectory, 'GluGluHToWWToLNuQQ_M'+MX)
              + nanoGetSampleFiles(mcDirectory, 'GluGluHToWWToLNuQQ_M125'),
        'weight': mcCommonWeight,
        'FilesPerJob': 5
    }
    addSampleWeight(samples, 'GGHSBI_'+MX+model_name, 'GluGluHToWWToLNuQQ_M'+MX,
                    '('+model+' + '+model_I+' + '+model_B+') \
                    * (abs('+model_I+') < 500) * (abs('+model_B+') < 500)')


    samples['GGH_H_'+MX+model_name] = {
        'name': nanoGetSampleFiles(mcDirectory, 'GluGluHToWWToLNuQQ_M'+MX),
        'weight': mcCommonWeight+'*('+model+'_H)* (abs('+model_H+') < 5000)',
        'FilesPerJob': 5
    }



    # Model dependent -> Xsec*BR is applied in later step, so remove "SM"-Xsec*BR
    SMxsec = HiggsXS.GetHiggsXS4Sample('YR4','13TeV','GluGluHToWWToLNuQQ_M'+MX)['xs']
    noSMxsec = '(1.0/'+str(SMxsec)+')'

    samples['MSSMGGH_'+MX]  = {
        'name': nanoGetSampleFiles(mcDirectory, 'GluGluHToWWToLNuQQ_M'+MX),
        'weight': mcCommonWeight+'* RelW0.02 *'+noSMxsec,
    }

    samples['MSSMGGHSBI_'+MX]  = {
        'name': nanoGetSampleFiles(mcDirectory, 'GluGluHToWWToLNuQQ_M'+MX)
              + nanoGetSampleFiles(mcDirectory, 'GluGluHToWWToLNuQQ_M125'),
        'weight': mcCommonWeight,
    }
    addSampleWeight(samples, 'MSSMGGHSBI_'+MX, 'GluGluHToWWToLNuQQ_M'+MX, '(RelW0.02 + RelW0.02_I + RelW0.02_B) * (abs(RelW0.02_I) < 500) * (abs(RelW0.02_B) < 500) *'+noSMxsec)





############ VBF H->WW ############
for MX in massvbf:
    samples['QQH_'+MX+model_name] = {
        'name': nanoGetSampleFiles(mcDirectory, 'VBFHToWWToLNuQQ_M'+MX),
        'weight': mcCommonWeight+'*('+model+' + '+model+'_I)* (abs('+model_I+') < 500)',
        'FilesPerJob': 5
    }
    signals.append('qqHWWlnuqq_M'+MX)


    samples['QQHSBI_'+MX+model_name] = {
        'name': nanoGetSampleFiles(mcDirectory, 'VBFHToWWToLNuQQ_M'+MX)
              + nanoGetSampleFiles(mcDirectory, 'VBFHToWWToLNuQQ_M125')
              + nanoGetSampleFiles(mcDirectory, 'WpWmJJ_QCD_noTop'),
        'weight': mcCommonWeight,
        'FilesPerJob': 5
    }
    addSampleWeight(samples, 'QQHSBI_'+MX+model_name, 'VBFHToWWToLNuQQ_M'+MX,
                    '('+model+' + '+model_I+') * (abs('+model_I+') < 500)')


    if MX in ['4000', '5000']: # Just to be sure, recalculate baseW with new cross sections
        newbasew = getBaseWnAOD(mcDirectory, mcProduction, ['VBFHToWWToLNuQQ_M'+MX])
        addSampleWeight(samples, 'QQH_'+MX+model_name, 'VBFHToWWToLNuQQ_M'+MX, newbasew+'/baseW')
        addSampleWeight(samples, 'QQHSBI_'+MX+model_name, 'VBFHToWWToLNuQQ_M'+MX, newbasew+'/baseW')


    samples['QQH_H_'+MX+model_name] = {
        'name': nanoGetSampleFiles(mcDirectory, 'VBFHToWWToLNuQQ_M'+MX),
        'weight': mcCommonWeight+'*('+model+'_H)* (abs('+model_H+') < 5000)',
        'FilesPerJob': 5
    }

    # Model dependent -> Xsec*BR is applied in later step, so remove "SM"-Xsec*BR
    SMxsec = HiggsXS.GetHiggsXS4Sample('YR4','13TeV','VBFHToWWToLNuQQ_M'+MX)['xs']
    noSMxsec = '(1.0/'+str(SMxsec)+')'

    samples['MSSMQQH_'+MX]  = {
        'name': nanoGetSampleFiles(mcDirectory, 'VBFHToWWToLNuQQ_M'+MX),
        'weight': mcCommonWeight+'* RelW0.02 *'+noSMxsec,
    }

    samples['MSSMQQHSBI_'+MX]  = {
        'name': nanoGetSampleFiles(mcDirectory, 'VBFHToWWToLNuQQ_M'+MX)
              + nanoGetSampleFiles(mcDirectory, 'VBFHToWWToLNuQQ_M125')
              + nanoGetSampleFiles(mcDirectory, 'WpWmJJ_QCD_noTop'),
        'weight': mcCommonWeight,
    }
    addSampleWeight(samples, 'MSSMQQHSBI_'+MX, 'VBFHToWWToLNuQQ_M'+MX, '(RelW0.02 + RelW0.02_I) * (abs(RelW0.02_I) < 500) *'+noSMxsec)




###########################################
################## DATA ###################
###########################################

samples['DATA'] = {
  'name': [],
  'weight': 'METFilter_DATA*LepWPCut',
  'weights': [],
  'isData': ['all'],
  'FilesPerJob': 25
}

for _, sd in DataRun:
  for pd in DataSets:
    files = nanoGetSampleFiles(dataDirectory, pd + '_' + sd)
    samples['DATA']['name'].extend(files)
    samples['DATA']['weights'].extend([DataTrig[pd]] * len(files))
