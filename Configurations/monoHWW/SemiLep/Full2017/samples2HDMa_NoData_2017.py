import os
import inspect

configurations = os.path.realpath(inspect.getfile(inspect.currentframe())) # this file
configurations = os.path.dirname(configurations) # ggH2016
configurations = os.path.dirname(configurations) # Differential
configurations = os.path.dirname(configurations) # Configurations

from LatinoAnalysis.Tools.commonTools import getSampleFiles, getBaseW, addSampleWeight

def nanoGetSampleFiles(inputDir, sample):
    try:
        if _samples_noload:
            return [sample]
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

mcProduction = 'Fall2017_102X_nAODv4_Full2017v5'

dataReco = 'Run2017_102X_nAODv4_Full2017v5'

mcSteps = 'MCl1loose2017v5__MCCorr2017v5__Semilep2017__MHSemiLepVars__MHSemiLepBDT_2HDMa'

dataSteps = 'DATAl1loose2017v5__Semilep2017'

##############################################
###### Tree base directory for the site ######
##############################################

SITE=os.uname()[1]
if    'iihe' in SITE:
  #treeBaseDir = '/pnfs/iihe/cms/store/user/xjanssen/HWW2015'
  treeBaseDir = '/pnfs/iihe/cms/store/user/svanputt/HWWNano'
elif  'cern' in SITE:
  treeBaseDir = '/eos/cms/store/group/phys_higgs/cmshww/amassiro/HWWNano'
elif  'ifca' in SITE:
  treeBaseDir = '/gpfs/projects/cms/data/LatinosSkims/nanoAOD/'


def makeMCDirectory(var=''):
    if var:
        return os.path.join(treeBaseDir, mcProduction, mcSteps.format(var='__' + var))
        #return '/afs/cern.ch/user/y/yiiyama/public/hwwvirtual/Fall17/l2tightOR__{var}'.format(var=var)
    else:
        return os.path.join(treeBaseDir, mcProduction, mcSteps.format(var=''))
#        return '/afs/cern.ch/user/y/yiiyama/public/hwwvirtual/Fall17/l2tightOR'

mcDirectory = makeMCDirectory()
dataDirectory = os.path.join(treeBaseDir, dataReco, dataSteps)


################################################                                                                                             
############ DATA DECLARATION ##################                                                                                             
################################################ 
DataRun = [
  ['B','Run2017B-Nano14Dec2018-v1'] ,
  ['C','Run2017C-Nano14Dec2018-v1'],
  ['D','Run2017D-Nano14Dec2018-v1'],
  ['E','Run2017E-Nano14Dec2018-v1'],
  ['F','Run2017F-Nano14Dec2018-v1']
]

DataSets = ['SingleMuon',\
'SingleElectron'
]

DataTrig = {
            'SingleMuon'     : 'Trigger_sngMu' ,
            'SingleElectron' : 'Trigger_sngEl' ,
           }


mcCommonWeight = 'XSWeight*SFweight*PromptGenLepMatch1l*METFilter_MC'

###########################################
############### SIGNAL ####################
###########################################

#2HDM+a
mA_list = ['1200', '600', '500', '400', '300', '200']

for mA in mA_list:
    samples['2HDMa_mA_'+mA+'_ma_150'] = {  
                                         'name'  : 
                                         nanoGetSampleFiles(mcDirectory,'2HDMa_SemiLep_MH3_'+mA+'_MH4_150_neg')  
                                         +nanoGetSampleFiles(mcDirectory,'2HDMa_SemiLep_MH3_'+mA+'_MH4_150_pos') ,  
                                         'weight': mcCommonWeight,
                                        }

###########################################                                                                                                  
#############  BACKGROUNDS  ###############                                                                                                  
###########################################                                                                                                  

samples['Wjets'] = {    'name'   :   
                        nanoGetSampleFiles(mcDirectory,'WJetsToLNu-0J')
                        + nanoGetSampleFiles(mcDirectory,'WJetsToLNu-1J')
                        + nanoGetSampleFiles(mcDirectory,'WJetsToLNu-2J')
                        ,
                        'weight' : mcCommonWeight,
                        'FilesPerJob' : 5,
                 }


############ DY ############                                                                                                   

samples['DY'] = {    'name'   :   
                     # ADDME: 'name'   :   nanoGetSampleFiles(mcDirectory,'DYJetsToLL_M-50_ext1')
                     #+ nanoGetSampleFiles(mcDirectory,'DYJetsToLL_M-10to50-LO'),
                     nanoGetSampleFiles(mcDirectory,'DYJetsToLL_M-10to50-LO'),
                     'weight' : mcCommonWeight,
                     'FilesPerJob' : 5,
}

samples['top'] = {    'name'   :   nanoGetSampleFiles(mcDirectory,'TTToSemiLeptonic')
                      + nanoGetSampleFiles(mcDirectory,'TTTo2L2Nu')
                      + nanoGetSampleFiles(mcDirectory,'ST_t-channel_top')
                      + nanoGetSampleFiles(mcDirectory,'ST_t-channel_antitop')
                      + nanoGetSampleFiles(mcDirectory,'ST_tW_antitop')
                      + nanoGetSampleFiles(mcDirectory,'ST_tW_top') 
                      ,
                      'weight' : mcCommonWeight,
                      'FilesPerJob' : 2,
                    }

addSampleWeight(samples,'top','TTToSemiLeptonic','Top_pTrw')
addSampleWeight(samples,'top','TTTo2L2Nu','Top_pTrw')

# MISSING: WWToLNuQQ

samples['VV'] = {    'name'   :   nanoGetSampleFiles(mcDirectory,'WZ')
                     + nanoGetSampleFiles(mcDirectory,'ZZTo2L2Q')
                     + nanoGetSampleFiles(mcDirectory,'WW-LO')
                    ,
                    'weight' : mcCommonWeight,
                    'FilesPerJob' : 2,
                   }

#Was commented out
samples['QCD'] = {    'name'   :   nanoGetSampleFiles(mcDirectory,'QCD_Pt-15to20_MuEnrichedPt5')
                      +nanoGetSampleFiles(mcDirectory,'QCD_Pt-20to30_MuEnrichedPt5')
                      +nanoGetSampleFiles(mcDirectory,'QCD_Pt-30to50_MuEnrichedPt5')
                      +nanoGetSampleFiles(mcDirectory,'QCD_Pt-50to80_MuEnrichedPt5')
                      +nanoGetSampleFiles(mcDirectory,'QCD_Pt-80to120_MuEnrichedPt5')
                      +nanoGetSampleFiles(mcDirectory,'QCD_Pt-120to170_MuEnrichedPt5')
                      +nanoGetSampleFiles(mcDirectory,'QCD_Pt-170to300_MuEnrichedPt5')
                      +nanoGetSampleFiles(mcDirectory,'QCD_Pt-300to470_MuEnrichedPt5')
                      +nanoGetSampleFiles(mcDirectory,'QCD_Pt-470to600_MuEnrichedPt5')
                      #+nanoGetSampleFiles(mcDirectory,'QCD_Pt-600to800_MuEnrichedPt5')
                      #+nanoGetSampleFiles(mcDirectory,'QCD_Pt-800to1000_MuEnrichedPt5')
                      +nanoGetSampleFiles(mcDirectory,'QCD_Pt-1000toInf_MuEnrichedPt5')
                      +nanoGetSampleFiles(mcDirectory,'QCD_Pt-15to20_EMEnriched')
                      +nanoGetSampleFiles(mcDirectory,'QCD_Pt-20to30_EMEnriched')
                      +nanoGetSampleFiles(mcDirectory,'QCD_Pt-30to50_EMEnriched')
                      +nanoGetSampleFiles(mcDirectory,'QCD_Pt-50to80_EMEnriched')
                      +nanoGetSampleFiles(mcDirectory,'QCD_Pt-80to120_EMEnriched')
                      +nanoGetSampleFiles(mcDirectory,'QCD_Pt-120to170_EMEnriched')
                      #+nanoGetSampleFiles(mcDirectory,'QCD_Pt-170to300_EMEnriched')
                      +nanoGetSampleFiles(mcDirectory,'QCD_Pt-300toInf_EMEnriched')
                      ,
                     'weight' : mcCommonWeight,
                     'FilesPerJob' : 10,
                    }




################### DATA ###################


#samples['DATA'] = {
#  'name': [],
#  'weight': 'METFilter_DATA*LepWPCut',
#  'weights': [],
#  'isData': ['all'],
#  'FilesPerJob': 1
#}
#
#for _, sd in DataRun:
#  for pd in DataSets:
#    files = nanoGetSampleFiles(dataDirectory, pd + '_' + sd)
#    samples['DATA']['name'].extend(files)
#    samples['DATA']['weights'].extend([DataTrig[pd]] * len(files))
                        
