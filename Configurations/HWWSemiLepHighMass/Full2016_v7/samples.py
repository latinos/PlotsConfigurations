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

mcDirectory = makeMCDirectory()
signalMCDirectory = makeMCDirectory("_BWReweight")

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
    'SingleElectron' : '!Trigger_sngMu && Trigger_sngEl' ,
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

mcCommonWeightNoMatch = 'XSWeight*SFweight*METFilter_MC*LepWPCut[0]*(nTightLep==1)'
mcCommonWeight = mcCommonWeightNoMatch+'*Lepton_promptgenmatched[0]'

###########################################
#############  BACKGROUNDS  ###############
###########################################

###### DY #######
print("DY")

# NLO
# prefer M-10to50 NLO and fill M-5to10 with HT-binned LO
files  = nanoGetSampleFiles(mcDirectory, 'DYJetsToLL_M-10to50')
files += nanoGetSampleFiles(mcDirectory, 'DYJetsToLL_M-10to50_ext1')
files += nanoGetSampleFiles(mcDirectory, 'DYJetsToLL_M-50_ext2')
# LO
files += nanoGetSampleFiles(mcDirectory, 'DYJetsToLL_M-5to50_HT-70to100')
files += nanoGetSampleFiles(mcDirectory, 'DYJetsToLL_M-5to50_HT-100to200')
files += nanoGetSampleFiles(mcDirectory, 'DYJetsToLL_M-5to50_HT-200to400')
files += nanoGetSampleFiles(mcDirectory, 'DYJetsToLL_M-5to50_HT-400to600')
files += nanoGetSampleFiles(mcDirectory, 'DYJetsToLL_M-5to50_HT-600toinf')
files += nanoGetSampleFiles(mcDirectory, 'DYJetsToLL_M-5to50_HT-200to400_ext1')
files += nanoGetSampleFiles(mcDirectory, 'DYJetsToLL_M-5to50_HT-400to600_ext1')
files += nanoGetSampleFiles(mcDirectory, 'DYJetsToLL_M-5to50_HT-600toinf_ext1')


samples['DY'] = {
    'name': files,
    'weight': mcCommonWeight + '*( !(Sum$(PhotonGen_isPrompt==1 && PhotonGen_pt>15 && abs(PhotonGen_eta)<2.6) > 0))',
    'FilesPerJob': 20,
}
CombineBaseW(mcDirectory, samples, 'DY',
            ['DYJetsToLL_M-10to50', 'DYJetsToLL_M-10to50_ext1'])
CombineBaseW(mcDirectory, samples, 'DY',
            ['DYJetsToLL_M-5to50_HT-200to400', 'DYJetsToLL_M-5to50_HT-200to400_ext1'])
CombineBaseW(mcDirectory, samples, 'DY',
            ['DYJetsToLL_M-5to50_HT-400to600', 'DYJetsToLL_M-5to50_HT-400to600_ext1'])
CombineBaseW(mcDirectory, samples, 'DY',
            ['DYJetsToLL_M-5to50_HT-600toinf', 'DYJetsToLL_M-5to50_HT-600toinf_ext1'])

addSampleWeight(samples,'DY','DYJetsToLL_M-10to50'     ,'DY_NLO_pTllrw')
addSampleWeight(samples,'DY','DYJetsToLL_M-10to50_ext1','DY_NLO_pTllrw')
addSampleWeight(samples,'DY','DYJetsToLL_M-50_ext2'    ,'DY_NLO_pTllrw')

addSampleWeight(samples,'DY','DYJetsToLL_M-5to50_HT-70to100'      ,'(gen_mll<10)*DY_LO_pTllrw')
addSampleWeight(samples,'DY','DYJetsToLL_M-5to50_HT-100to200'     ,'(gen_mll<10)*DY_LO_pTllrw')
addSampleWeight(samples,'DY','DYJetsToLL_M-5to50_HT-200to400'     ,'(gen_mll<10)*DY_LO_pTllrw')
addSampleWeight(samples,'DY','DYJetsToLL_M-5to50_HT-400to600'     ,'(gen_mll<10)*DY_LO_pTllrw')
addSampleWeight(samples,'DY','DYJetsToLL_M-5to50_HT-600toinf'     ,'(gen_mll<10)*DY_LO_pTllrw')
addSampleWeight(samples,'DY','DYJetsToLL_M-5to50_HT-200to400_ext1','(gen_mll<10)*DY_LO_pTllrw')
addSampleWeight(samples,'DY','DYJetsToLL_M-5to50_HT-400to600_ext1','(gen_mll<10)*DY_LO_pTllrw')
addSampleWeight(samples,'DY','DYJetsToLL_M-5to50_HT-600toinf_ext1','(gen_mll<10)*DY_LO_pTllrw')



###### Top #######
print("top")

files  = nanoGetSampleFiles(mcDirectory, 'TTToSemiLeptonic')
files += nanoGetSampleFiles(mcDirectory, 'TTTo2L2Nu')
files += nanoGetSampleFiles(mcDirectory, 'TTWJetsToLNu_ext1')
files += nanoGetSampleFiles(mcDirectory, 'TTWJetsToLNu_ext2')
files += nanoGetSampleFiles(mcDirectory, 'TTZjets')
files += nanoGetSampleFiles(mcDirectory, 'ST_s-channel')
files += nanoGetSampleFiles(mcDirectory, 'ST_t-channel_antitop')
files += nanoGetSampleFiles(mcDirectory, 'ST_t-channel_top')
files += nanoGetSampleFiles(mcDirectory, 'ST_tW_antitop')
files += nanoGetSampleFiles(mcDirectory, 'ST_tW_top')

samples['top'] = {
    'name': files,
    'weight': mcCommonWeight,
    'FilesPerJob': 15,
}
CombineBaseW(mcDirectory, samples, 'top',
['TTWJetsToLNu_ext1', 'TTWJetsToLNu_ext2'])

addSampleWeight(samples,'top','TTToSemiLeptonic','Top_pTrw')
addSampleWeight(samples,'top','TTTo2L2Nu'       ,'Top_pTrw')

# Xsec correction single top t channel: xsec in tree is leptonDecays, but sample is inclusiveDecays
lepD_to_incD = '(100./(10.75 + 10.57 + 11.25))'
addSampleWeight(samples,'top','ST_t-channel_antitop', lepD_to_incD)
addSampleWeight(samples,'top','ST_t-channel_top',     lepD_to_incD)


###### WW ########
print("WW")

files  = nanoGetSampleFiles(mcDirectory, 'WWToLNuQQ')
files += nanoGetSampleFiles(mcDirectory, 'WWToLNuQQ_ext1')

samples['WW'] = {
    'name': files,
    'weight': mcCommonWeight+'*(mjjGen_OTF<100)',
    'FilesPerJob': 15
}
CombineBaseW(mcDirectory, samples, 'WW',
            ['WWToLNuQQ', 'WWToLNuQQ_ext1'])

samples['WWewk'] = {
    'name': nanoGetSampleFiles(mcDirectory, 'WpWmJJ_EWK_noTop'),
    'weight': mcCommonWeight + '*(Sum$(abs(GenPart_pdgId)==6 || GenPart_pdgId==25)==0)',
    #filter tops and Higgs
    'FilesPerJob': 15
}

############# ggWW semileptonic ##############
#FIXME: samples for this are being produced
#FIXME: in the meantime use interference weights?
samples['ggWW'] = {
    'name'   : nanoGetSampleFiles(signalMCDirectory, 'GluGluHToWWToLNuQQ_M125'),
    'weight' : mcCommonWeight,
    'FilesPerJob': 20
}
addSampleWeight(samples,'ggWW','GluGluHToWWToLNuQQ_M125', "{0} * ({0} < 50)".format(model_B))

samples['qqWWqq'] = {
    'name'   :   nanoGetSampleFiles(mcDirectory,'WpWmJJ_QCD_noTop') ,
    'weight' : mcCommonWeight+'*(mjjGen_OTF>=100)'+'*(GenLHE)',
    'FilesPerJob': 20
}

samples['WW2J'] = {
    'name'   :   nanoGetSampleFiles(mcDirectory,'WpWmJJ_QCD_noTop') ,
    'weight' : mcCommonWeight+'*(mjjGen_OTF>=100)'+'*(!GenLHE)',
    'FilesPerJob': 20
}



########## W+jets #########
print("W+jets")

files  = nanoGetSampleFiles(mcDirectory, 'WJetsToLNu')
files += nanoGetSampleFiles(mcDirectory, 'WJetsToLNu_ext2')

samples['Wjets'] = {
    'name'   : files,
    'weight' : mcCommonWeight +"*EWK_W_correction[0]",
    'FilesPerJob' : 15,
}
CombineBaseW(mcDirectory, samples, 'Wjets',
            ['WJetsToLNu', 'WJetsToLNu_ext2'])



####### Vg ########
print("Vg")

files  = nanoGetSampleFiles(mcDirectory, 'Wg_MADGRAPHMLM')
files += nanoGetSampleFiles(mcDirectory, 'Zg')

samples['Vg'] = {
    'name': files,
    'weight': mcCommonWeight + '*(!(Gen_ZGstar_mass > 0))',
    'FilesPerJob': 20
}

####### VgS ########
files  = nanoGetSampleFiles(mcDirectory, 'Wg_MADGRAPHMLM')
files += nanoGetSampleFiles(mcDirectory, 'Zg')

samples['VgS'] = {
    'name': files,
    'weight': mcCommonWeight + ' * (gstarLow * 0.94 + gstarHigh * 1.14)',
    'FilesPerJob': 20,
    'subsamples': {
      'L': 'gstarLow',
      'H': 'gstarHigh'
    }
}
addSampleWeight(samples, 'VgS', 'Wg_MADGRAPHMLM', '(Gen_ZGstar_mass > 0 && Gen_ZGstar_mass < 0.1)')
addSampleWeight(samples, 'VgS', 'Zg', '(Gen_ZGstar_mass > 0)')



############ VZ ############
print("VZ")
files  = nanoGetSampleFiles(mcDirectory, 'ZZ')
files += nanoGetSampleFiles(mcDirectory, 'WZ')

samples['VZ'] = {
    'name': files,
    'weight': mcCommonWeight + '*1.11',
    'FilesPerJob': 20
}

########## VVV #########
print("VVV")
files  = nanoGetSampleFiles(mcDirectory, 'ZZZ')
files += nanoGetSampleFiles(mcDirectory, 'WZZ')
files += nanoGetSampleFiles(mcDirectory, 'WWZ')
files += nanoGetSampleFiles(mcDirectory, 'WWW')
files += nanoGetSampleFiles(mcDirectory, 'WWG')
    #FIXME: should WWG be included? or is it already taken into account in the WW sample?

samples['VVV'] = {
    'name': files,
    'weight': mcCommonWeight,
    'FilesPerJob': 20
}

########### QCD ###########
print("QCD")

files  = nanoGetSampleFiles(mcDirectory,'QCD_Pt-15to20_MuEnrichedPt5')
files += nanoGetSampleFiles(mcDirectory,'QCD_Pt-20toInf_MuEnrichedPt15')

# files += nanoGetSampleFiles(mcDirectory,'QCD_Pt-15to20_EMEnriched')
files += nanoGetSampleFiles(mcDirectory,'QCD_Pt-20to30_EMEnriched')
files += nanoGetSampleFiles(mcDirectory,'QCD_Pt-30to50_EMEnriched')
files += nanoGetSampleFiles(mcDirectory,'QCD_Pt-50to80_EMEnriched')
files += nanoGetSampleFiles(mcDirectory,'QCD_Pt-80to120_EMEnriched')
files += nanoGetSampleFiles(mcDirectory,'QCD_Pt-120to170_EMEnriched')
files += nanoGetSampleFiles(mcDirectory,'QCD_Pt-170to300_EMEnriched')
files += nanoGetSampleFiles(mcDirectory,'QCD_Pt-300toInf_EMEnriched')

files += nanoGetSampleFiles(mcDirectory, 'QCD_Pt_20to30_bcToE')
files += nanoGetSampleFiles(mcDirectory, 'QCD_Pt_30to80_bcToE')
files += nanoGetSampleFiles(mcDirectory, 'QCD_Pt_80to170_bcToE')
files += nanoGetSampleFiles(mcDirectory, 'QCD_Pt_170to250_bcToE')
files += nanoGetSampleFiles(mcDirectory, 'QCD_Pt_250toInf_bcToE')

samples['QCD'] = {
    'name'   :   files,
    'weight' : mcCommonWeight + '*(abs(' + mcCommonWeight + ') < 50)',
    'FilesPerJob' : 18,
}

addSampleWeight(samples, 'QCD', 'QCD_Pt-15to20_MuEnrichedPt5'   , '(abs(Lepton_pdgId[0]) == 13)')
addSampleWeight(samples, 'QCD', 'QCD_Pt-20toInf_MuEnrichedPt15' , '(abs(Lepton_pdgId[0]) == 13)')
# addSampleWeight(samples, 'QCD', 'QCD_Pt-15to20_EMEnriched'      , '(abs(Lepton_pdgId[0]) == 11)')
addSampleWeight(samples, 'QCD', 'QCD_Pt-20to30_EMEnriched'      , '(abs(Lepton_pdgId[0]) == 11)')
addSampleWeight(samples, 'QCD', 'QCD_Pt-30to50_EMEnriched'      , '(abs(Lepton_pdgId[0]) == 11)')
addSampleWeight(samples, 'QCD', 'QCD_Pt-50to80_EMEnriched'      , '(abs(Lepton_pdgId[0]) == 11)')
addSampleWeight(samples, 'QCD', 'QCD_Pt-80to120_EMEnriched'     , '(abs(Lepton_pdgId[0]) == 11)')
addSampleWeight(samples, 'QCD', 'QCD_Pt-120to170_EMEnriched'    , '(abs(Lepton_pdgId[0]) == 11)')
addSampleWeight(samples, 'QCD', 'QCD_Pt-170to300_EMEnriched'    , '(abs(Lepton_pdgId[0]) == 11)')
addSampleWeight(samples, 'QCD', 'QCD_Pt-300toInf_EMEnriched'    , '(abs(Lepton_pdgId[0]) == 11)')
addSampleWeight(samples, 'QCD', 'QCD_Pt_20to30_bcToE'           , '(abs(Lepton_pdgId[0]) == 11)')
addSampleWeight(samples, 'QCD', 'QCD_Pt_30to80_bcToE'           , '(abs(Lepton_pdgId[0]) == 11)')
addSampleWeight(samples, 'QCD', 'QCD_Pt_80to170_bcToE'          , '(abs(Lepton_pdgId[0]) == 11)')
addSampleWeight(samples, 'QCD', 'QCD_Pt_170to250_bcToE'         , '(abs(Lepton_pdgId[0]) == 11)')
addSampleWeight(samples, 'QCD', 'QCD_Pt_250toInf_bcToE'         , '(abs(Lepton_pdgId[0]) == 11)')



############## SM Higgs ############
print("SM Higgs")

############ ggF H->WW ############
samples['ggH_hww'] = {
    'name': nanoGetSampleFiles(mcDirectory, 'GluGluHToWWToLNuQQ_M125'),
    'weight': mcCommonWeight,
    'FilesPerJob': 30,
}

############ VBF H->WW ############
samples['qqH_hww'] = {
    'name': nanoGetSampleFiles(mcDirectory, 'VBFHToWWToLNuQQ_M125'),
    'weight': mcCommonWeight,
    'FilesPerJob': 30
}

############ ZH H->WW ############
samples['ZH_hww'] = {
    'name':   nanoGetSampleFiles(mcDirectory, 'HZJ_HToWW_M125'),
    'weight': mcCommonWeight,
    'FilesPerJob': 30
}

############ WH H->WW ############
samples['WH_hww'] = {
    'name':   nanoGetSampleFiles(mcDirectory, 'HWplusJ_HToWW_M125') + nanoGetSampleFiles(mcDirectory, 'HWminusJ_HToWW_M125'),
    'weight': mcCommonWeight,
    'FilesPerJob': 30
}

# ############ H->TauTau ############
#
samples['ggH_htt'] = {
    'name': nanoGetSampleFiles(mcDirectory, 'GluGluHToTauTau_M125'),
    'weight': mcCommonWeight,
    'FilesPerJob': 30
}

samples['qqH_htt'] = {
    'name': nanoGetSampleFiles(mcDirectory, 'VBFHToTauTau_M125'),
    'weight': mcCommonWeight,
    'FilesPerJob': 30
}

samples['ZH_htt'] = {
   'name': nanoGetSampleFiles(mcDirectory, 'HZJ_HToTauTau_M125'),
   'weight': mcCommonWeight,
   'FilesPerJob': 30
}

samples['WH_htt'] = {
   'name':  nanoGetSampleFiles(mcDirectory, 'HWplusJ_HToTauTau_M125') + nanoGetSampleFiles(mcDirectory, 'HWminusJ_HToTauTau_M125'),
   'weight': mcCommonWeight,
   'FilesPerJob': 30
}



###########################################
#############   SIGNALS  ##################
###########################################
print("Signals")

####### ggH -> WW #################
for MX in massggh:
    # Model dependent -> Xsec*BR is applied in later step, so remove "SM"-Xsec*BR
    SMxsec = HiggsXS.GetHiggsXS4Sample('YR4','13TeV','GluGluHToWWToLNuQQ_M'+MX)['xs']
    noSMxsec = '(1.0/{})'.format(SMxsec)

    samples['GGH_'+MX+model_name]  = {
        'name': nanoGetSampleFiles(signalMCDirectory, 'GluGluHToWWToLNuQQ_M'+MX),
        'weight': mcCommonWeight+'*'+noSMxsec+'*( {0} * (abs({0}) < 50) )'.format(model),
    }

    samples['GGHINT_'+MX+model_name]  = {
        'name': nanoGetSampleFiles(signalMCDirectory, 'GluGluHToWWToLNuQQ_M'+MX),
        'weight': mcCommonWeight+'*'+noSMxsec+'*( {0} * (abs({0}) < 50) )'.format(model_I),
    }

    files  = nanoGetSampleFiles(signalMCDirectory, 'GluGluHToWWToLNuQQ_M'+MX)
    files += nanoGetSampleFiles(signalMCDirectory, 'GluGluHToWWToLNuQQ_M125')
    samples['GGHSBI_'+MX+model_name]  = {
        'name': files,
        'weight': mcCommonWeight+'*'+noSMxsec,
    }
    addSampleWeight(samples, 'GGHSBI_'+MX+model_name, 'GluGluHToWWToLNuQQ_M'+MX,
                    '( ({0}+{1}) * (abs({0}+{1}) < 50) )'.format(model, model_I))

    if MX in ['4000', '5000']: # Just to be sure, recalculate baseW with new cross sections
        newbasew = getBaseWnAOD(signalMCDirectory, mcProduction, ['GluGluHToWWToLNuQQ_M'+MX])
        addSampleWeight(samples, 'GGH_'+MX+model_name, 'GluGluHToWWToLNuQQ_M'+MX, newbasew+'/baseW')
        # addSampleWeight(samples, 'GGHINT_'+MX+model_name, 'GluGluHToWWToLNuQQ_M'+MX, newbasew+'/baseW')
        addSampleWeight(samples, 'GGHSBI_'+MX+model_name, 'GluGluHToWWToLNuQQ_M'+MX, newbasew+'/baseW')



############ VBF H->WW ############
for MX in massvbf:
    # Model dependent -> Xsec*BR is applied in later step, so remove "SM"-Xsec*BR
    SMxsec = HiggsXS.GetHiggsXS4Sample('YR4','13TeV','VBFHToWWToLNuQQ_M'+MX)['xs']
    noSMxsec = '(1.0/{})'.format(SMxsec)

    samples['QQH_'+MX+model_name]  = {
        'name': nanoGetSampleFiles(signalMCDirectory, 'VBFHToWWToLNuQQ_M'+MX),
        'weight': mcCommonWeight+'*'+noSMxsec+'*( {0} * (abs({0}) < 50) )'.format(model),
    }

    samples['QQHINT_'+MX+model_name]  = {
        'name': nanoGetSampleFiles(signalMCDirectory, 'VBFHToWWToLNuQQ_M'+MX),
        'weight': mcCommonWeight+'*'+noSMxsec+'*( {0} * (abs({0}) < 50) )'.format(model_I),
    }

    files  = nanoGetSampleFiles(signalMCDirectory, 'VBFHToWWToLNuQQ_M'+MX)
    files += nanoGetSampleFiles(signalMCDirectory, 'VBFHToWWToLNuQQ_M125')
    files += nanoGetSampleFiles(mcDirectory, 'WpWmJJ_QCD_noTop')
    samples['QQHSBI_'+MX+model_name]  = {
        'name': files,
        'weight': mcCommonWeight+'*'+noSMxsec
    }
    addSampleWeight(samples, 'QQHSBI_'+MX+model_name, 'VBFHToWWToLNuQQ_M'+MX,
                    '( ({0}+{1}) * (abs({0}+{1}) < 50) )'.format(model, model_I))
    addSampleWeight(samples, 'QQHSBI_'+MX+model_name, 'WpWmJJ_QCD_noTop',
                    '(mjjGen_OTF>=100)*(GenLHE)')

    if MX in ['4000', '5000']: # Just to be sure, recalculate baseW with new cross sections
        newbasew = getBaseWnAOD(signalMCDirectory, mcProduction, ['VBFHToWWToLNuQQ_M'+MX])
        addSampleWeight(samples, 'QQH_'+MX+model_name, 'VBFHToWWToLNuQQ_M'+MX, newbasew+'/baseW')
        # addSampleWeight(samples, 'QQHINT_'+MX+model_name, 'VBFHToWWToLNuQQ_M'+MX, newbasew+'/baseW')
        addSampleWeight(samples, 'QQHSBI_'+MX+model_name, 'VBFHToWWToLNuQQ_M'+MX, newbasew+'/baseW')




for key in samples:
    if key in ['DATA','FAKE']: continue
    if 'QQHINT' in key or 'GGHINT' in key: continue
    samples[key]['suppressNegative'] = ['all']
    samples[key]['suppressNegativeNuisances'] =['all']



###########################################
################## DATA ###################
###########################################
print("FAKE")
########### FAKE ###########
eleWP    = 'mva_90p_Iso2016'
muWP     = 'cut_Tight80x'

fakeW = 'fakeW_ele_'+eleWP+'_mu_'+muWP+'_1l_mu25_ele35'
samples['FAKE'] = {
  'name': [],
  'weight': 'METFilter_DATA*'+fakeW,
  'weights': [],
  'isData': ['all'],
  'FilesPerJob': 29,
  'suppressNegative': ['all'],
  'suppressNegativeNuisances' :['all'],
}

for _, sd in DataRun:
  for pd in DataSets:
    files = nanoGetSampleFiles(fakeDirectory, pd + '_' + sd)
    samples['FAKE']['name'].extend(files)
    samples['FAKE']['weights'].extend([DataTrig[pd]] * len(files))

print("DATA")
samples['DATA'] = {
  'name': [],
  'weight': 'METFilter_DATA*LepWPCut[0]*(nTightLep==1)',
  'weights': [],
  'isData': ['all'],
  'FilesPerJob': 30
}

for _, sd in DataRun:
  for pd in DataSets:
    files = nanoGetSampleFiles(dataDirectory, pd + '_' + sd)
    samples['DATA']['name'].extend(files)
    samples['DATA']['weights'].extend([DataTrig[pd]] * len(files))

