import os
import inspect

configurations = os.path.realpath(inspect.getfile(inspect.currentframe())) # this file
configurations = os.path.dirname(configurations) # Full2016v7
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

mcProduction = 'Summer16_102X_nAODv7_Full2016v7'

dataReco = 'Run2016_102X_nAODv7_Full2016v7'

mcSteps = 'MCl1loose2016v7__MCCorr2016v7__MCCombJJLNu2016{var}'

dataSteps = 'DATAl1loose2016v7__DATACombJJLNu2016'
fakeSteps = 'DATAl1loose2016v7__DATACombJJLNu2016'

##############################################
###### Tree base directory for the site ######
##############################################

SITE=os.uname()[1]
if  'cern' in SITE:
  treeBaseDir = '/eos/cms/store/group/phys_higgs/cmshww/amassiro/HWWNano'
  myEOSDir    = '/eos/user/s/ssiebert/HWWNano'


def makeMCDirectory(var=''):
    if var:
        return os.path.join(treeBaseDir, mcProduction, mcSteps.format(var='_' + var))
    else:
        return os.path.join(treeBaseDir, mcProduction, mcSteps.format(var=''))

mcDirectory = '/eos/cms/store/group/phys_higgs/cmshww/amassiro/HWWNano/Summer16_102X_nAODv7_Full2016v7/MCl1loose2016v7__MCCorr2016v7__MCCombJJLNu2016__HMlnjjVarsGen' #makeMCDirectory()
signalMCDirectory = '/eos/cms/store/group/phys_higgs/cmshww/amassiro/HWWNano/Summer16_102X_nAODv7_Full2016v7/MCl1loose2016v7__MCCorr2016v7__MCCombJJLNu2016__HMlnjjVarsGen__BWReweight_test'#makeMCDirectory("_BWReweight")

dataDirectory = os.path.join(treeBaseDir, dataReco, dataSteps)
fakeDirectory = os.path.join(treeBaseDir, dataReco, fakeSteps)

myeosMC = os.path.join(myEOSDir, mcProduction, mcSteps.format(var=''))

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
    'SingleMuon'     : 'Trigger_sngMu' ,
    # 'SingleElectron' : '!Trigger_sngMu && Trigger_sngEl' ,
    'SingleElectron' : '!Trigger_sngMu && passSingleElectronHLT' ,
}


############################################
############ MORE MC STAT ##################
############################################

def CombineBaseW(directory, samples, proc, samplelist):
  newbaseW = getBaseWnAOD(directory, mcProduction, samplelist)
  for s in samplelist:
    addSampleWeight(samples, proc, s, newbaseW+'/baseW')


#########################################
############ MC COMMON ##################
#########################################

mcCommonWeight = 'XSWeight'
###########################################
#############  BACKGROUNDS  ###############
#############################################
###### WW ########

print("WW")

# LENZIP: I'll stick the WW SS QCD samples in here. They are WW in the end
# LENZIP: I also put here whatever is left of the WWLNuQQ that is not included in qqWWqq
files  = nanoGetSampleFiles(mcDirectory, 'WWToLNuQQ')
files += nanoGetSampleFiles(mcDirectory, 'WWToLNuQQ_ext1')
files += nanoGetSampleFiles(mcDirectory,'WmToLNu_WmTo2J_QCD')
files += nanoGetSampleFiles(mcDirectory,'WpToLNu_WpTo2J_QCD')

samples['WW'] = {
    'name': files,
    'weight': mcCommonWeight,
    'FilesPerJob': 2
}
CombineBaseW(mcDirectory, samples, 'WW',
            ['WWToLNuQQ', 'WWToLNuQQ_ext1'])
addSampleWeight(samples, 'WW', 'WWToLNuQQ',      '(!((mjjGen_max>150)*(GenLHE)))')
addSampleWeight(samples, 'WW', 'WWToLNuQQ_ext1', '(!((mjjGen_max>150)*(GenLHE)))')

# LENZIP: do we need this? It is dileptonic
#samples['WWewk'] = {
#    'name': nanoGetSampleFiles(mcDirectory, 'WpWmJJ_EWK_noTop'),
#    'weight': mcCommonWeight + '*(Sum$(abs(GenPart_pdgId)==6 || GenPart_pdgId==25)==0)',
#    #filter tops and Higgs
#    'FilesPerJob': 10
#}


samples['ggWW'] = {
    'name'   : nanoGetSampleFiles(mcDirectory, 'GluGluWWToLNuQQ'),
    'weight' : mcCommonWeight,
    'FilesPerJob': 8
}

model_B='RelW10.0_B'

samples['ggWW_reweighted_from500'] = {
    'name'   : nanoGetSampleFiles(signalMCDirectory, 'GluGluHToWWToLNuQQ_M500'),
    'weight' : mcCommonWeight+"*( {0}*({0}<10000) )".format(model_B),
    'FilesPerJob': 8
}

samples['ggWW_reweighted_from2000'] = {
    'name'   : nanoGetSampleFiles(signalMCDirectory, 'GluGluHToWWToLNuQQ_M2000'),
    'weight' : mcCommonWeight+"*( {0}*({0}<1000) )".format(model_B),
    'FilesPerJob': 8
}



files  = nanoGetSampleFiles(mcDirectory,'WpTo2J_WmToLNu_QCD')
files += nanoGetSampleFiles(mcDirectory,'WpToLNu_WmTo2J_QCD')
samples['qqWWqq'] = {
    'name'   : files, 
    'weight' : mcCommonWeight + "*(mjjGen_max>150)*(GenLHE)", ##it needs to have qq' initial state 
    'FilesPerJob': 10
}

#LENZIP: included in WW
# nanoGetSampleFiles(signalMCDirectory,'WpWmJJ_QCD_noTop') ,
#'weight': XSWeight+'*'+SFweight+'*'+METFilter_MC+'*'+GenLepMatch,
#mcCommonWeight+'*(mjjGen_OTF>=100)'+'*(GenLHE)',
#samples['WW2J'] = {
#    'name'   :   nanoGetSampleFiles(mcDirectory,'WpWmJJ_QCD_noTop') ,
#    'weight' : mcCommonWeight+'*(mjjGen_OTF>=100)'+'*(!GenLHE)',
#    'FilesPerJob': 10
#}


############## SM Higgs ############
print("SM Higgs")

############ ggF H->WW ############
samples['ggH_hww'] = {
    'name': nanoGetSampleFiles('/eos/cms/store/group/phys_higgs/cmshww/amassiro/HWWNano/Summer16_102X_nAODv7_Full2016v7/MCl1loose2016v7__MCCorr2016v7__MCCombJJLNu2016__BWReweight__HMlnjjVarsGen', 'GluGluHToWWToLNuQQ_M125'),
    'weight': mcCommonWeight,
    'FilesPerJob': 10,
}

############ VBF H->WW ############
samples['qqH_hww'] = {
    'name': nanoGetSampleFiles('/eos/cms/store/group/phys_higgs/cmshww/amassiro/HWWNano/Summer16_102X_nAODv7_Full2016v7/MCl1loose2016v7__MCCorr2016v7__MCCombJJLNu2016__BWReweight__HMlnjjVarsGen', 'VBFHToWWToLNuQQ_M125'),
    'weight': mcCommonWeight,
    'FilesPerJob': 10
}

##########################################
############   SIGNALS  ##################
#########################################
print("Signals")

####### ggH -> WW #################
for MX in massggh:
  for model in models:
    model_name = '_'+model.replace('.','')
    model_I = model+'_I'
    model_I_H = model+'_I_Honly'
    model_I_B = model+'_I_Bonly'
    model_B = model+'_B'
    model_H = model+'_H'
    # Model dependent -> Xsec*BR is applied in later step, so remove "SM"-Xsec*BR
    # SMxsec = HiggsXS.GetHiggsXS4Sample('YR4','13TeV','GluGluHToWWToLNuQQ_M'+MX)['xs']

    samples['GGH_'+MX+model_name]  = {
        'name': nanoGetSampleFiles(signalMCDirectory, 'GluGluHToWWToLNuQQ_M'+MX),
        'weight': mcCommonWeight + '*( {0}*(abs({0})<50) )'.format(model),
        'FilesPerJob': 15,
    }
    
    samples['GGHINT_'+MX+model_name]  = {
        'name': nanoGetSampleFiles(signalMCDirectory, 'GluGluHToWWToLNuQQ_M'+MX),
        'weight': mcCommonWeight + '*( {0}*(abs({0})<50) )'.format(model_I),
        'FilesPerJob': 15,
    }

    files  = nanoGetSampleFiles(signalMCDirectory, 'GluGluHToWWToLNuQQ_M'+MX) # will be weighted to S+I
    files += nanoGetSampleFiles(signalMCDirectory, 'GluGluHToWWToLNuQQ_M500') # just any mass, reweighted to HSM. But not the nominal 125 because that one has no off shell part
                                                                              # CAUTION when processing the 500 GeV signal.  We cannot have a sample with the same name weighted in two different ways
                                                                              # One solution is to symlink the 500 GeV signal with a different name in the directory (e.g. appending _copybgk to the name)
                                                                              # and weight the copy as the background.
    files += nanoGetSampleFiles(mcDirectory, 'GluGluWWToLNuQQ')               # no further weighting, is directly part of B
    samples['GGHSBI_'+MX+model_name]  = {
        'name': files,
        'weight': mcCommonWeight,
        'FilesPerJob': 10,
    }
    addSampleWeight(samples, 'GGHSBI_'+MX+model_name, 'GluGluHToWWToLNuQQ_M'+MX,
                    '( ({0}+{1})*(abs({0}+{1})<50) )'.format(model, model_I))
    addSampleWeight(samples, 'GGHSBI_'+MX+model_name, 'GluGluHToWWToLNuQQ_M500',
                    '( {0} )'.format(model_H))
    
    samples['GGHINT_H_'+MX+model_name]  = {
        'name': nanoGetSampleFiles(signalMCDirectory, 'GluGluHToWWToLNuQQ_M'+MX),
        'weight': mcCommonWeight + '*( {0}*(abs({0})<50) )'.format(model_I_H),
        'FilesPerJob': 15,
    }
    samples['GGHINT_B_'+MX+model_name]  = {
        'name': nanoGetSampleFiles(signalMCDirectory, 'GluGluHToWWToLNuQQ_M'+MX),
        'weight': mcCommonWeight + '*( {0}*(abs({0})<50) )'.format(model_I_B),
        'FilesPerJob': 15,
    }
    samples['GGH_HSM_'+MX+model_name]  = {
        'name': nanoGetSampleFiles(signalMCDirectory, 'GluGluHToWWToLNuQQ_M'+MX),
        'weight': mcCommonWeight + '*( {0} )'.format(model_H),
        'FilesPerJob': 15,
    }
    samples['GGH_B_'+MX+model_name]  = {
        'name': nanoGetSampleFiles(signalMCDirectory, 'GluGluHToWWToLNuQQ_M'+MX),
        'weight': mcCommonWeight + '*( {0} )'.format(model_B),
        'FilesPerJob': 15,
    }
#
#
#
#
############ VBF H->WW ############
for MX in massvbf:
  for model in models:
    model_name = '_'+model.replace('.','')
    model_I = model+'_I'
    model_I_H = model+'_I_Honly'
    model_I_B = model+'_I_Bonly'
    model_B = model+'_B'
    model_H = model+'_H' 
    # Model dependent -> Xsec*BR is applied in later step, so remove "SM"-Xsec*BR
    # SMxsec = HiggsXS.GetHiggsXS4Sample('YR4','13TeV','VBFHToWWToLNuQQ_M'+MX)['xs']
    # noSMxsec = '(1.0/{})'.format(SMxsec)

    samples['QQH_'+MX+model_name]  = {
        'name': nanoGetSampleFiles(signalMCDirectory, 'VBFHToWWToLNuQQ_M'+MX),
        'weight': mcCommonWeight + '*( {0}*(abs({0})<50) )'.format(model),
        'FilesPerJob': 15,
    }

    samples['QQHINT_'+MX+model_name]  = {
        'name': nanoGetSampleFiles(signalMCDirectory, 'VBFHToWWToLNuQQ_M'+MX),
        'weight': mcCommonWeight + '*( {0}*(abs({0})<50) )'.format(model_I),
        'FilesPerJob': 15,
    }

    files  = nanoGetSampleFiles(signalMCDirectory, 'VBFHToWWToLNuQQ_M'+MX)
    files += nanoGetSampleFiles(signalMCDirectory, 'VBFHToWWToLNuQQ_M500') # just any mass, reweighted to HSM. But not the nominal 125 because that one has no off shell part
                                                                           # CAUTION when processing the 500 GeV signal.  We cannot have a sample with the same name weighted in two different ways
                                                                           # One solution is to symlink the 500 GeV signal with a different name in the directory (e.g. appending _copybgk to the name)                                                                               # and weight the copy as the background.
    files += nanoGetSampleFiles(mcDirectory, 'WpTo2J_WmToLNu_QCD') # this is part of b with the same gen level selection as in qqWWqq
    files += nanoGetSampleFiles(mcDirectory, 'WpToLNu_WmTo2J_QCD') # this is part of b with the same gen level selection as in qqWWqq

    samples['QQHSBI_'+MX+model_name]  = {
        'name': files,
        'weight': mcCommonWeight,
        'FilesPerJob': 10,
    }
    addSampleWeight(samples, 'QQHSBI_'+MX+model_name, 'VBFHToWWToLNuQQ_M'+MX,
                    '( ({0}+{1})*(abs({0}+{1})<50) )'.format(model, model_I))                
    addSampleWeight(samples, 'QQHSBI_'+MX+model_name, 'VBFHToWWToLNuQQ_M500',
                    '(  {0} )'.format(model_H))                
    addSampleWeight(samples, 'QQHSBI_'+MX+model_name, 'WpTo2J_WmToLNu_QCD',
                    '(mjjGen_max>=150)*(GenLHE)')
    addSampleWeight(samples, 'QQHSBI_'+MX+model_name, 'WpToLNu_WmTo2J_QCD',
                    '(mjjGen_max>=150)*(GenLHE)')
    
    samples['QQHINT_H_'+MX+model_name]  = {
        'name': nanoGetSampleFiles(signalMCDirectory, 'VBFHToWWToLNuQQ_M'+MX),
        'weight': mcCommonWeight+'*( {0}* (abs({0})<50) )'.format(model_I_H),
        'FilesPerJob': 15,
    }

    samples['QQHINT_B_'+MX+model_name]  = {
        'name': nanoGetSampleFiles(signalMCDirectory, 'VBFHToWWToLNuQQ_M'+MX),
        'weight': mcCommonWeight+'*( {0}* (abs({0})<50) )'.format(model_I_B),
        'FilesPerJob': 15,
    }

    samples['QQH_HSM_'+MX+model_name]  = {
        'name': nanoGetSampleFiles(signalMCDirectory, 'VBFHToWWToLNuQQ_M'+MX),
        'weight': mcCommonWeight +'*( {0} )'.format(model_H),
        'FilesPerJob': 15,
    }
    samples['QQH_B_'+MX+model_name]  = {
        'name': nanoGetSampleFiles(signalMCDirectory, 'VBFHToWWToLNuQQ_M'+MX),
        'weight': mcCommonWeight +'*( {0} )'.format(model_B),
        'FilesPerJob': 15,
    }

#
#
#
#

Mu_jetEt = 35
El_jetEt = 35
fakeW = 'FW_mu'+str(Mu_jetEt)+ '_el'+str(El_jetEt)+'[0]'

