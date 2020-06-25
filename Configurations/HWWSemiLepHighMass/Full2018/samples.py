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

mcProduction = 'Autumn18_102X_nAODv6_Full2018v6'

dataReco = 'Run2018_102X_nAODv6_Full2018v6'

mcSteps = 'MCl1loose2018v6__MCCorr2018v6__MCCombJJLNu2018'

dataSteps = 'DATAl1loose2018v6__MCCombJJLNu2018'

##############################################
###### Tree base directory for the site ######
##############################################

SITE=os.uname()[1]
if    'iihe' in SITE:
  treeBaseDir = '/pnfs/iihe/cms/store/user/xjanssen/HWW2015'
elif  'cern' in SITE:
  treeBaseDir = '/eos/cms/store/group/phys_higgs/cmshww/amassiro/HWWNano'

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
            ['A','Run2018A-Nano25Oct2019-v1'] ,
            ['B','Run2018B-Nano25Oct2019-v1'] ,
            ['C','Run2018C-Nano25Oct2019-v1'] ,
            ['D','Run2018D-Nano25Oct2019_ver2-v1'] ,
          ]

DataSets = [
    'SingleMuon',
    'EGamma'
]

DataTrig = {
    'SingleMuon' : 'Trigger_sngMu' ,
    'EGamma'     : '!Trigger_sngMu && Trigger_sngEl' ,
}


#########################################
############ MC COMMON ##################
#########################################

# SFweight does not include btag weights
mcCommonWeightNoMatch = 'XSWeight*SFweight*METFilter_MC'
mcCommonWeight = 'XSWeight*SFweight*Lepton_promptgenmatched[0]*METFilter_MC'

###########################################
#############  BACKGROUNDS  ###############
###########################################


###### DY #######

ptllDYW_NLO = '(0.87*(gen_ptll<10)+(0.379119+0.099744*gen_ptll-0.00487351*gen_ptll**2+9.19509e-05*gen_ptll**3-6.0212e-07*gen_ptll**4)*(gen_ptll>=10 && gen_ptll<45)+(9.12137e-01+1.11957e-04*gen_ptll-3.15325e-06*gen_ptll**2-4.29708e-09*gen_ptll**3+3.35791e-11*gen_ptll**4)*(gen_ptll>=45 && gen_ptll<200) + 1*(gen_ptll>200))'
ptllDYW_LO = '((0.632927+0.0456956*gen_ptll-0.00154485*gen_ptll*gen_ptll+2.64397e-05*gen_ptll*gen_ptll*gen_ptll-2.19374e-07*gen_ptll*gen_ptll*gen_ptll*gen_ptll+6.99751e-10*gen_ptll*gen_ptll*gen_ptll*gen_ptll*gen_ptll)*(gen_ptll>0)*(gen_ptll<100)+(1.41713-0.00165342*gen_ptll)*(gen_ptll>=100)*(gen_ptll<300)+1*(gen_ptll>=300))'

files = nanoGetSampleFiles(mcDirectory, 'DYJetsToLL_M-50_ext2') + \
        nanoGetSampleFiles(mcDirectory, 'DYJetsToLL_M-10to50-LO_ext1')

samples['DY'] = {
    'name': files,
    'weight': mcCommonWeight + '*(Sum$(GenPart_pdgId == 22 && TMath::Odd(GenPart_statusFlags) && GenPart_pt > 20.) == 0)',
    'FilesPerJob': 5,
}
addSampleWeight(samples,'DY','DYJetsToLL_M-50_ext2',ptllDYW_NLO)
addSampleWeight(samples,'DY','DYJetsToLL_M-10to50-LO',ptllDYW_LO)




###### Top #######

files = nanoGetSampleFiles(mcDirectory, 'TTToSemiLeptonic_ext3') + \
        nanoGetSampleFiles(mcDirectory, 'TTWjets') + \
        nanoGetSampleFiles(mcDirectory, 'ST_s-channel_ext1') + \
        nanoGetSampleFiles(mcDirectory, 'ST_t-channel_antitop') + \
        nanoGetSampleFiles(mcDirectory, 'ST_t-channel_top') + \
        nanoGetSampleFiles(mcDirectory, 'ST_tW_antitop_ext1') + \
        nanoGetSampleFiles(mcDirectory, 'ST_tW_top_ext1')

samples['top'] = {
    'name': files,
    'weight': mcCommonWeight,
    'FilesPerJob': 2,
}
# FIXME: ???
addSampleWeight(samples,'top','TTToSemiLeptonic','Top_pTrw')


###### WW ########

# files = nanoGetSampleFiles(mcDirectory, 'WW-LO') #+ \
#    nanoGetSampleFiles(mcDirectory, 'WWTo2L2Nu')
files = nanoGetSampleFiles(mcDirectory, 'WWToLNuQQ')

samples['WW'] = {
    'name': files,
    'weight': mcCommonWeight, # + '*nllW', #FIXME: what is this weight
    'FilesPerJob': 5
}

samples['WWewk'] = {
    'name': nanoGetSampleFiles(mcDirectory, 'WpWmJJ_EWK'),
    'weight': mcCommonWeight + '*(Sum$(abs(GenPart_pdgId)==6 || GenPart_pdgId==25)==0)',
    #FIXME there are other samples that dont contain top/higgs to begin with
    #filter tops and Higgs
    'FilesPerJob': 5
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
# ############# ggWW semileptonic ##############
# #FIXME: samples for this are being produced
# #FIXME: in the meantime use interference weights?

# samples['ggWW'] = {
#     'name'   : nanoGetSampleFiles(mcDirectory, 'GluGluHToWWToLNuQQ_M400'),
#     'weight' : mcCommonWeight +'* '+model+'_B * ('+model+'_B<100)',
#     'FilesPerJob': 10
# }


samples['qqWWqq'] = {
    'name'   :   nanoGetSampleFiles(mcDirectory,'WpWmJJ_QCD_noTop_ext1') ,
    'weight' : mcCommonWeight+'*(GenLHE)',
    'FilesPerJob': 10
}

samples['WW2J'] = {
    'name'   :   nanoGetSampleFiles(mcDirectory,'WpWmJJ_QCD_noTop_ext1') ,
    'weight' : mcCommonWeight +'*(!GenLHE)',
    'FilesPerJob': 10
}




########## W+jets #########

# files = nanoGetSampleFiles(mcDirectory, 'WJetsToLNu-0J') +\
#         nanoGetSampleFiles(mcDirectory, 'WJetsToLNu-1J') +\
#         nanoGetSampleFiles(mcDirectory, 'WJetsToLNu-2J')
#
# samples['Wjets'] = {
#     'name'   : files,
#     'weight' : mcCommonWeight,
#     'FilesPerJob' : 4,
# }

# samples['Wjets'] = {
#     'name':   nanoGetSampleFiles(mcDirectory,'WJetsToLNu_HT70_100' )
#             + nanoGetSampleFiles(mcDirectory,'WJetsToLNu_HT100_200')
#             + nanoGetSampleFiles(mcDirectory,'WJetsToLNu_HT200_400')
#             + nanoGetSampleFiles(mcDirectory,'WJetsToLNu_HT400_600')
#             + nanoGetSampleFiles(mcDirectory,'WJetsToLNu_HT600_800')
#             + nanoGetSampleFiles(mcDirectory,'WJetsToLNu_HT800_1200')
#             + nanoGetSampleFiles(mcDirectory,'WJetsToLNu_HT1200_2500')
#             + nanoGetSampleFiles(mcDirectory,'WJetsToLNu_HT2500_inf'),
#     'weight': mcCommonWeight,
#     'FilesPerJob': 5,
# }
samples['Wjets'] = {
    'name':   nanoGetSampleFiles(mcDirectory,'WJetsToLNu_Pt50to100' )
            + nanoGetSampleFiles(mcDirectory,'WJetsToLNu_Pt100to250')
            + nanoGetSampleFiles(mcDirectory,'WJetsToLNu_Pt250to400')
            + nanoGetSampleFiles(mcDirectory,'WJetsToLNu_Pt400to600')
            + nanoGetSampleFiles(mcDirectory,'WJetsToLNu_Pt600toInf'),
    'weight': mcCommonWeight,
    'FilesPerJob': 5,
}
# include all in samples.py then choose in plot.py



####### Vg ########
files = nanoGetSampleFiles(mcDirectory, 'Wg_MADGRAPHMLM')
files += nanoGetSampleFiles(mcDirectory, 'Zg')

samples['Vg'] = {
    'name': files,
    'weight': mcCommonWeightNoMatch + '*(Gen_ZGstar_mass <= 0)',
    'FilesPerJob': 1
}

# the following is needed in both v5 and v6
addSampleWeight(samples, 'Vg', 'Zg', '0.448')

####### VgS ########
files = nanoGetSampleFiles(mcDirectory, 'Wg_MADGRAPHMLM') + \
        nanoGetSampleFiles(mcDirectory, 'WZTo3LNu_mllmin01') +\
        nanoGetSampleFiles(mcDirectory, 'ZGToLLG')

samples['VgS'] = {
    'name': files,
    'weight': mcCommonWeight + ' * (gstarLow * 0.94 + gstarHigh * 1.14)',
    'FilesPerJob': 1,
    'subsamples': {
      'L': 'gstarLow',
      'H': 'gstarHigh'
    }
}
addSampleWeight(samples, 'VgS', 'Wg_MADGRAPHMLM', '(Gen_ZGstar_mass > 0 && Gen_ZGstar_mass < 0.1)')
addSampleWeight(samples, 'VgS', 'ZGToLLG', '(Gen_ZGstar_mass > 0)*0.448')
addSampleWeight(samples, 'VgS', 'WZTo3LNu_mllmin01', '(Gen_ZGstar_mass > 0.1)')


############ VZ ############

files = nanoGetSampleFiles(mcDirectory, 'ZZ') +\
        nanoGetSampleFiles(mcDirectory, 'WZ') #FIXME double counting of WZTo3LNu

samples['VZ'] = {
    'name': files,
    'weight': mcCommonWeight + '*1.11',
    'FilesPerJob': 1
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
    'FilesPerJob': 1
}






########### QCD ###########

files = nanoGetSampleFiles(mcDirectory,'QCD_Pt-15to20_MuEnrichedPt5') + \
        nanoGetSampleFiles(mcDirectory,'QCD_Pt-20to30_MuEnrichedPt5') + \
        nanoGetSampleFiles(mcDirectory,'QCD_Pt-30to50_MuEnrichedPt5') + \
        nanoGetSampleFiles(mcDirectory,'QCD_Pt-50to80_MuEnrichedPt5') + \
        nanoGetSampleFiles(mcDirectory,'QCD_Pt-80to120_MuEnrichedPt5') + \
        nanoGetSampleFiles(mcDirectory,'QCD_Pt-120to170_MuEnrichedPt5') + \
        nanoGetSampleFiles(mcDirectory,'QCD_Pt-170to300_MuEnrichedPt5') + \
        nanoGetSampleFiles(mcDirectory,'QCD_Pt-300to470_MuEnrichedPt5') + \
        nanoGetSampleFiles(mcDirectory,'QCD_Pt-470to600_MuEnrichedPt5') + \
        nanoGetSampleFiles(mcDirectory,'QCD_Pt-600to800_MuEnrichedPt5') + \
        nanoGetSampleFiles(mcDirectory,'QCD_Pt-800to1000_MuEnrichedPt5') + \
        nanoGetSampleFiles(mcDirectory,'QCD_Pt-1000toInf_MuEnrichedPt5') + \
        nanoGetSampleFiles(mcDirectory,'QCD_Pt-15to20_EMEnriched') + \
        nanoGetSampleFiles(mcDirectory,'QCD_Pt-20to30_EMEnriched') + \
        nanoGetSampleFiles(mcDirectory,'QCD_Pt-30to50_EMEnriched') + \
        nanoGetSampleFiles(mcDirectory,'QCD_Pt-50to80_EMEnriched') + \
        nanoGetSampleFiles(mcDirectory,'QCD_Pt-80to120_EMEnriched') + \
        nanoGetSampleFiles(mcDirectory,'QCD_Pt-120to170_EMEnriched') + \
        nanoGetSampleFiles(mcDirectory,'QCD_Pt-170to300_EMEnriched') + \
        nanoGetSampleFiles(mcDirectory,'QCD_Pt-300toInf_EMEnriched')


samples['QCD'] = {
    'name'   :   files,
    'weight' : mcCommonWeight,
    'FilesPerJob' : 5,
}



############## SM Higgs ############
#### ggH -> WW

samples['ggH_hww'] = {
    'name': nanoGetSampleFiles(mcDirectory, 'GluGluHToWWToLNuQQ_M125'),
    'weight': mcCommonWeight,
    'FilesPerJob': 5,
}

############ VBF H->WW ############
samples['qqH_hww'] = {
    'name': nanoGetSampleFiles(mcDirectory, 'VBFHToWWToLNuQQ_M126'),
    'weight': mcCommonWeight,
    'FilesPerJob': 5
}

############ ZH H->WW ############

samples['ZH_hww'] = {
    'name':   nanoGetSampleFiles(mcDirectory, 'HZJ_HToWW_M125'),
    'weight': mcCommonWeight,
    'FilesPerJob': 5
}

samples['ggZH_hww'] = {
    'name':   nanoGetSampleFiles(mcDirectory, 'GluGluZH_HToWWTo2L2Nu_M125'),
    'weight': mcCommonWeight,
    'FilesPerJob': 5
}

############ WH H->WW ############

samples['WH_hww'] = {
    'name':   nanoGetSampleFiles(mcDirectory, 'HWplusJ_HToWW_M125') + nanoGetSampleFiles(mcDirectory, 'HWminusJ_HToWW_M125'),
    'weight': mcCommonWeight,
    'FilesPerJob': 5
}

############ ttH ############

samples['ttH_hww'] = {
    'name':   nanoGetSampleFiles(mcDirectory, 'ttHToNonbb_M125'),
    'weight': mcCommonWeight,
    'FilesPerJob': 5
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
   'FilesPerJob': 5
}

# samples['ggZH_htt'] = {
#     'name':   nanoGetSampleFiles(mcDirectory, 'GluGluZH_HToTauTau_ZTo2L_M125'),
#     'weight': mcCommonWeight,
#     'FilesPerJob': 5
# }

samples['WH_htt'] = {
   'name':  nanoGetSampleFiles(mcDirectory, 'HWplusJ_HToTauTau_M125') + nanoGetSampleFiles(mcDirectory, 'HWminusJ_HToTauTau_M125'),
   'weight': mcCommonWeight,
   'FilesPerJob': 5
}





###########################################
#############   SIGNALS  ##################
###########################################


signals = []

####### ggH -> WW #################
for MX in massggh:
    samples['GGH_'+MX+model_name] = {
        'name': nanoGetSampleFiles(mcDirectory, 'GluGluHToWWToLNuQQ_M'+MX),
        'weight': mcCommonWeight,#+'*('+model+' + '+model+'_I)* (abs('+model_I+') < 500)',
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
        'weight': mcCommonWeight+'*('+model+'_H)* (abs('+model_H+') < 500) / XSWeight',
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
        'weight': mcCommonWeight,#+'*('+model+' + '+model+'_I)* (abs('+model_I+') < 500)',
        'FilesPerJob': 5
    }
    signals.append('qqHWWlnuqq_M'+MX)


    samples['QQHSBI_'+MX+model_name] = {
        'name': nanoGetSampleFiles(mcDirectory, 'VBFHToWWToLNuQQ_M'+MX)
              + nanoGetSampleFiles(mcDirectory, 'VBFHToWWToLNuQQ_M125')
              + nanoGetSampleFiles(mcDirectory, 'WpWmJJ_QCD_noTop_ext1'),
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
        'weight': mcCommonWeight+'*('+model+'_H)* (abs('+model_H+') < 500) / XSWeight',
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
              + nanoGetSampleFiles(mcDirectory, 'WpWmJJ_QCD_noTop_ext1'),
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
  'FilesPerJob': 20
}

for _, sd in DataRun:
  for pd in DataSets:
    files = nanoGetSampleFiles(dataDirectory, pd + '_' + sd)
    samples['DATA']['name'].extend(files)
    samples['DATA']['weights'].extend([DataTrig[pd]] * len(files))
