import os
import inspect

configurations = os.path.realpath(inspect.getfile(inspect.currentframe())) # this file
configurations = os.path.dirname(configurations) # Full2018
configurations = os.path.dirname(configurations) # HWWSemiLepHighMass
configurations = os.path.dirname(configurations) # Configurations

from LatinoAnalysis.Tools.commonTools import getSampleFiles, getBaseW, addSampleWeight

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
################# SKIMS ########################
################################################

mcProduction = 'Autumn18_102X_nAODv5_Full2018v5'

dataReco = 'Run2018_102X_nAODv5_Full2018v5'

mcSteps = 'MCl1loose2018v5__MCCorr2018v5'

dataSteps = 'DATAl1loose2018v5'

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
            ['A','Run2018A-Nano1June2019-v1'] ,
            ['B','Run2018B-Nano1June2019-v1'] ,
            ['C','Run2018C-Nano1June2019-v1'] ,
            ['D','Run2018D-Nano1June2019_ver2-v1'] ,
          ]

DataSets = ['MuonEG','DoubleMuon','SingleMuon','EGamma']

DataTrig = {
            'MuonEG'         : 'Trigger_ElMu' ,
            'DoubleMuon'     : '!Trigger_ElMu && Trigger_dblMu' ,
            'SingleMuon'     : '!Trigger_ElMu && !Trigger_dblMu && Trigger_sngMu' ,
            'EGamma'         : '!Trigger_ElMu && !Trigger_dblMu && !Trigger_sngMu && (Trigger_sngEl || Trigger_dblEl)' ,
           }


#########################################
############ MC COMMON ##################
#########################################

# SFweight does not include btag weights
mcCommonWeightNoMatch = 'XSWeight*SFweight*METFilter_MC'
mcCommonWeight = 'XSWeight*SFweight*GenLepMatch*METFilter_MC'

###########################################
#############  BACKGROUNDS  ###############
###########################################

###### DY #######

ptllDYW_NLO = '(0.87*(gen_ptll<10)+(0.379119+0.099744*gen_ptll-0.00487351*gen_ptll**2+9.19509e-05*gen_ptll**3-6.0212e-07*gen_ptll**4)*(gen_ptll>=10 && gen_ptll<45)+(9.12137e-01+1.11957e-04*gen_ptll-3.15325e-06*gen_ptll**2-4.29708e-09*gen_ptll**3+3.35791e-11*gen_ptll**4)*(gen_ptll>=45 && gen_ptll<200) + 1*(gen_ptll>200))'
ptllDYW_LO = '((0.632927+0.0456956*gen_ptll-0.00154485*gen_ptll*gen_ptll+2.64397e-05*gen_ptll*gen_ptll*gen_ptll-2.19374e-07*gen_ptll*gen_ptll*gen_ptll*gen_ptll+6.99751e-10*gen_ptll*gen_ptll*gen_ptll*gen_ptll*gen_ptll)*(gen_ptll>0)*(gen_ptll<100)+(1.41713-0.00165342*gen_ptll)*(gen_ptll>=100)*(gen_ptll<300)+1*(gen_ptll>=300))'

files = nanoGetSampleFiles(mcDirectory, 'DYJetsToLL_M-50_ext') + \
    nanoGetSampleFiles(mcDirectory, 'DYJetsToLL_M-10to50-LO')

samples['DY'] = {
    'name': files,
    'weight': mcCommonWeight + '*(Sum$(GenPart_pdgId == 22 && TMath::Odd(GenPart_statusFlags) && GenPart_pt > 20.) == 0)',
    'FilesPerJob': 6,
}
addSampleWeight(samples,'DY','DYJetsToLL_M-50_ext',ptllDYW_NLO)
addSampleWeight(samples,'DY','DYJetsToLL_M-10to50-LO',ptllDYW_LO)

###### Top #######

files = nanoGetSampleFiles(mcDirectory, 'TTTo2L2Nu') + \
    nanoGetSampleFiles(mcDirectory, 'ST_s-channel_ext1') + \
    nanoGetSampleFiles(mcDirectory, 'ST_t-channel_antitop') + \
    nanoGetSampleFiles(mcDirectory, 'ST_t-channel_top') + \
    nanoGetSampleFiles(mcDirectory, 'ST_tW_antitop_ext1') + \
    nanoGetSampleFiles(mcDirectory, 'ST_tW_top_ext1')

samples['top'] = {
    'name': files,
    'weight': mcCommonWeight,
    'FilesPerJob': 1,
}

addSampleWeight(samples,'top','TTTo2L2Nu','Top_pTrw')

###### WW ########

samples['WW'] = {
    'name': nanoGetSampleFiles(mcDirectory, 'WWTo2L2Nu'),
    'weight': mcCommonWeight + '*nllW',
    'FilesPerJob': 3
}

samples['WWewk'] = {
    'name': nanoGetSampleFiles(mcDirectory, 'WpWmJJ_EWK'),
    'weight': mcCommonWeight + '*(Sum$(abs(GenPart_pdgId)==6 || GenPart_pdgId==25)==0)', #filter tops and Higgs
    'FilesPerJob': 5
}

# k-factor 1.4 already taken into account in XSWeight
files = nanoGetSampleFiles(mcDirectory, 'GluGluToWWToENEN') + \
    nanoGetSampleFiles(mcDirectory, 'GluGluToWWToENMN') + \
    nanoGetSampleFiles(mcDirectory, 'GluGluToWWToENTN') + \
    nanoGetSampleFiles(mcDirectory, 'GluGluToWWToMNEN') + \
    nanoGetSampleFiles(mcDirectory, 'GluGluToWWToMNMN') + \
    nanoGetSampleFiles(mcDirectory, 'GluGluToWWToMNTN') + \
    nanoGetSampleFiles(mcDirectory, 'GluGluToWWToTNEN') + \
    nanoGetSampleFiles(mcDirectory, 'GluGluToWWToTNMN') + \
    nanoGetSampleFiles(mcDirectory, 'GluGluToWWToTNTN')

samples['ggWW'] = {
    'name': files,
    'weight': mcCommonWeight + '*1.53/1.4', # updating k-factor
    'FilesPerJob': 5
}

######## Vg ########

files = nanoGetSampleFiles(mcDirectory, 'Wg_MADGRAPHMLM') + \
    nanoGetSampleFiles(mcDirectory, 'Zg')

samples['Vg'] = {
    'name': files,
    'weight': mcCommonWeightNoMatch + '*(Gen_ZGstar_mass <= 0)',
    'FilesPerJob': 5
}
addSampleWeight(samples, 'Vg', 'Zg', '(Sum$(GenPart_pdgId == 22 && TMath::Odd(GenPart_statusFlags) && GenPart_pt < 20.) == 0)')

######## VgS ########

files = nanoGetSampleFiles(mcDirectory, 'Wg_MADGRAPHMLM') + \
    nanoGetSampleFiles(mcDirectory, 'Zg') + \
    nanoGetSampleFiles(mcDirectory, 'WZTo3LNu_mllmin01')

samples['VgS'] = {
    'name': files,
    'weight': mcCommonWeight + ' * (gstarLow * 0.94 + gstarHigh * 1.14)',
    'FilesPerJob': 5,
    'subsamples': {
      'L': 'gstarLow',
      'H': 'gstarHigh'
    }
}
addSampleWeight(samples, 'VgS', 'Wg_MADGRAPHMLM', '(Gen_ZGstar_mass > 0 && Gen_ZGstar_mass < 0.1)')
addSampleWeight(samples, 'VgS', 'Zg', '(Gen_ZGstar_mass > 0)*(Sum$(GenPart_pdgId == 22 && TMath::Odd(GenPart_statusFlags) && GenPart_pt < 20.) == 0)')
addSampleWeight(samples, 'VgS', 'WZTo3LNu_mllmin01', '(Gen_ZGstar_mass > 0.1)')

############ VZ ############

files = nanoGetSampleFiles(mcDirectory, 'ZZTo2L2Nu_ext1') + \
    nanoGetSampleFiles(mcDirectory, 'ZZTo2L2Q') + \
    nanoGetSampleFiles(mcDirectory, 'ZZTo4L_ext1') + \
    nanoGetSampleFiles(mcDirectory, 'WZTo2L2Q')

samples['VZ'] = {
    'name': files,
    'weight': mcCommonWeight + '*1.11',
    'FilesPerJob': 5
}

########## VVV #########

files = nanoGetSampleFiles(mcDirectory, 'ZZZ') + \
    nanoGetSampleFiles(mcDirectory, 'WZZ') + \
    nanoGetSampleFiles(mcDirectory, 'WWZ') + \
    nanoGetSampleFiles(mcDirectory, 'WWW')
#+ nanoGetSampleFiles(mcDirectory, 'WWG'), #should this be included? or is it already taken into account in the WW sample?

samples['VVV'] = {
    'name': files,
    'weight': mcCommonWeight,
    'FilesPerJob': 5
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

###########################################
#############   SIGNALS  ##################
###########################################

#List_MX=[125,200,210,230,250,300,350,400,500,550,600,650,700,750,800,900,1500,2000,2500,3000,4000,5000]
List_MX=[125,200,500,900,2500,4000,5000]

signals = []

#### ggH -> WW
for MX in List_MX:
    samples['ggHWWlnuqq_M'+str(MX)] = {
        'name': nanoGetSampleFiles(mcDirectory, 'GluGluHToWWToLNuQQ_M'+str(MX)),
        'weight': mcCommonWeight,
        'FilesPerJob': 5
    }
    signals.append('ggHWWlnuqq_M'+str(MX))

############ VBF H->WW ############
for MX in List_MX:
    samples['qqHWWlnuqq_M'+str(MX)] = {
        'name': nanoGetSampleFiles(mcDirectory, 'VBFHToWWToLNuQQ_M'+str(MX)),
        'weight': mcCommonWeight,
        'FilesPerJob': 5
    }
    signals.append('qqHWWlnuqq_M'+str(MX))

############ ZH H->WW ############
# FIXME: does (will) this exist for semileptonic?
for MX in List_MX:
    samples['ZH_HWWlnuqq_M'+str(MX)] = {
        'name':   nanoGetSampleFiles(mcDirectory, 'HZJ_HToWWToLNuQQ_M'+str(MX)),
        'weight': mcCommonWeight,
        'FilesPerJob': 5
    }
    signals.append('ZH_HWWlnuqq'+str(MX))

    samples['ggZH_HWWlnuqq_M'+str(MX)] = {
        'name':   nanoGetSampleFiles(mcDirectory, 'GluGluZH_HToWWToLNuQQ_M'+str(MX)),
        'weight': mcCommonWeight,
        'FilesPerJob': 5
    }
    signals.append('ggZH_hww')

############ WH H->WW ############
# FIXME: does (will) this exist for HM semileptonic?
for MX in List_MX:
    samples['WH_HWWlnuqq_M'+str(MX)] = {
        'name':   nanoGetSampleFiles(mcDirectory, 'HWplusJ_HToWWToLNuQQ_M'+str(MX)) +\
                  nanoGetSampleFiles(mcDirectory, 'HWminusJ_HToWWToLNuQQ_M'+str(MX)),
        'weight': mcCommonWeight,
        'FilesPerJob': 5
    }
    signals.append('WH_HWWlnuqq_M'+str(MX))

############ ttH H->WW ############
# FIXME: same as above
for MX in List_MX:
    samples['ttH_HWWlnuqq_M'+str(MX)] = {
        'name':   nanoGetSampleFiles(mcDirectory, 'ttH_HToWWToLNuQQ_M'+str(MX)),
        'weight': mcCommonWeight,
        'FilesPerJob': 1
    }
    signals.append('ttH_HWWlnuqq_M'+str(MX))


###########################################
################## DATA ###################
###########################################

samples['DATA'] = {
  'name': [],
  'weight': 'METFilter_DATA*LepWPCut',
  'weights': [],
  'isData': ['all'],
  'FilesPerJob': 100
}

for _, sd in DataRun:
  for pd in DataSets:
    files = nanoGetSampleFiles(dataDirectory, pd + '_' + sd)
    samples['DATA']['name'].extend(files)
    samples['DATA']['weights'].extend([DataTrig[pd]] * len(files))
