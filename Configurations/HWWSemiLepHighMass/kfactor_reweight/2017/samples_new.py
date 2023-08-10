import os
import copy
import inspect
import subprocess,string
import ROOT

configurations = os.path.realpath(inspect.getfile(inspect.currentframe())) # this file
configurations = os.path.dirname(configurations) # Full2018
configurations = os.path.dirname(configurations) # HWWSemiLepHighMass
configurations = os.path.dirname(configurations) # Configurations

from LatinoAnalysis.Tools.commonTools import getSampleFiles, getBaseW, addSampleWeight, xsectionDB

from LatinoAnalysis.Tools.HiggsXSection import HiggsXSection
HiggsXS = HiggsXSection()

def nanoGetSampleFiles(inputDir, sample):
  try:
      if _samples_noload:
          return []
  except NameError:
      pass

  return getSampleFiles(inputDir, sample, True, 'nanoLatino_')

def getFilesFromDAS(dataset,dasInstance='prod/global'):
   dasCmd='dasgoclient -query="instance='+dasInstance+' file dataset='+dataset+'"'
   print dasCmd
   proc=subprocess.Popen(dasCmd, stderr = subprocess.PIPE,stdout = subprocess.PIPE, shell = True)
   out, err = proc.communicate()
   if not proc.returncode == 0 :
     print out
     print err
     exit()
   FileList=string.split(out)
   return FileList

def getBaseWFromDAS(iProd, iSampleXS, samples=[], recomputeSumOfWeighsWithSign=False, prodCfg='LatinoAnalysis/NanoGardener/python/framework/Productions_cfg.py'):

  # Compute #evts
  genEventCount = 0
  genEventSumw  = 0.0
  genEventSumw2 = 0.0
  CMSSW=os.environ["CMSSW_BASE"]
  if os.path.exists(CMSSW+'/src/'+prodCfg) :
    handle = open(CMSSW+'/src/'+prodCfg)
    exec(handle)
    handle.close()
    prodList =  Productions.keys()
  else:
    print 'ERROR: Please specify the input data config'
    exit(1)
  if not iProd in prodList:
    print 'ERROR: iProd not in prodList: ',prodList
  # Load X-section
  xsDB = xsectionDB()
  xsDB.readPython(CMSSW+'/src/'+Productions[iProd]['xsFile'])
  xsDB.readYR(Productions[iProd]['YRver'][0],Productions[iProd]['YRver'][1])
  # Get x-sections + checks
  Xsec  = xsDB.get(iSampleXS) if isinstance(iSampleXS, str) else iSampleXS
  for iSample in samples :
    FileList = getFilesFromDAS(iSample)
    print 'file list for'+iSample, FileList
    for iFile in FileList:
      f = ROOT.TFile.Open('root://cms-xrd-global.cern.ch/'+iFile,'READ')
      if recomputeSumOfWeighsWithSign:
        Events = f.Get("Events")
        Events_np = rnp.tree2array(Events, branches=['genWeight'])
        Events_np_new = Events_np.astype(float)
        genEventSumw += np.sum(Events_np_new/np.abs(Events_np_new))
        print genEventSumw
        continue
      Runs = f.Get("Runs")
      for iRun in Runs :
          
        trailer = ""
        if hasattr(iRun, "genEventSumw_"): trailer = "_"
        thisgenEventCount = getattr(iRun, "genEventCount"+trailer)
        thisgenEventSumw  = getattr(iRun, "genEventSumw" +trailer)
        thisgenEventSumw2 = getattr(iRun, "genEventSumw2"+trailer)
        print(iFile.split("/")[-1],"{:e}".format(thisgenEventCount),"{:e}".format(thisgenEventSumw), "{:e}".format(thisgenEventSumw/thisgenEventCount))
        #protection for MiNNLO files with crazy weights
        #if thisgenEventSumw/thisgenEventCount > 2*Xsec:
        #  print "excluding file ",iFile.split("/")[-1]
        #  thisgenEventCount = 0
        #  thisgenEventSumw = 0
        #  thisgenEventSumw2 = 0
        genEventCount += thisgenEventCount
        genEventSumw  += thisgenEventSumw
        genEventSumw2 += thisgenEventSumw2
      f.Close()
  

  ### AND NOW: Compute new baseW
  nEvt = genEventSumw
  print Xsec
  baseW = float(Xsec)*1000./nEvt if nEvt>0 else 0.
  return str(baseW)

def addSampleWeightFromNano(sampleDic,key,Sample,Weight):
  ### Add Weights in sampleDic if needed
  if not 'weights' in sampleDic[key] :
    sampleDic[key]['weights'] = []
  if len(sampleDic[key]['weights']) < len(sampleDic[key]['name']) :
    for iEntry in range(len(sampleDic[key]['name'])-len(sampleDic[key]['weights'])) : sampleDic[key]['weights'].append('(1.)')

  ### Now add the actual weight
  for iEntry in range(len(sampleDic[key]['name'])):
    name = sampleDic[key]['name'][iEntry]
    if Sample in name:
      sampleDic[key]['weights'][iEntry] += '*(' + Weight + ')'


# samples

try:
    len(samples)
except NameError:
    import collections
    samples = collections.OrderedDict()


################################################
################# SKIMS ########################
################################################

mcProduction = 'Fall2017_102X_nAODv7_Full2017v7'

dataReco     = 'Run2017_102X_nAODv7_Full2017v7'

mcSteps      = 'MCl1loose2017v7__MCCorr2017v7__MCCombJJLNu2017{var}'

dataSteps    = 'DATAl1loose2017v7__DATACombJJLNu2017'
fakeSteps    = 'DATAl1loose2017v7__DATACombJJLNu2017'

mcSteps_mcc  = 'MCl1loose2017v7__MCCorr2017v7'

##############################################
###### Tree base directory for the site ######
##############################################

SITE=os.uname()[1]
if  'cern' in SITE:
  treeBaseDir = '/eos/cms/store/group/phys_higgs/cmshww/amassiro/HWWNano'
  myEOSDir    = '/eos/user/g/gbardell/HWWNano'


def makeMCDirectory(var=''):
    if var:
        return os.path.join(treeBaseDir, mcProduction, mcSteps.format(var='_' + var))
    else:
        return os.path.join(treeBaseDir, mcProduction, mcSteps.format(var=''))

mcDirectory = makeMCDirectory()
signalMCDirectory = makeMCDirectory("_BWReweight")

dataDirectory = os.path.join(treeBaseDir, dataReco, dataSteps)
fakeDirectory = os.path.join(treeBaseDir, dataReco, fakeSteps)
mc_stepDirectory = os.path.join(treeBaseDir, mcProduction, mcSteps_mcc)
#
myeosMC = os.path.join(myEOSDir, mcProduction, mcSteps.format(var=''))

################################################
############ DATA DECLARATION ##################
################################################
############################################
############ MORE MC STAT ##################
############################################

def CombineBaseW(directory, samples, proc, samplelist):
  newbaseW = getBaseWnAOD(directory, mcProduction, samplelist)
  for s in samplelist:
    addSampleWeight(samples, proc, s, newbaseW+'/baseW')


def getFilesFromDAS(dataset,dasInstance='prod/global'):
     dasCmd='dasgoclient -query="instance='+dasInstance+' file dataset='+dataset+'"'
     proc=subprocess.Popen(dasCmd, stderr = subprocess.PIPE,stdout = subprocess.PIPE, shell = True)
     out, err = proc.communicate()
     if not proc.returncode == 0 :
       exit()
     FileList=string.split(out)
     return FileList




########## W+jets #########

## NLO samples

files = getFilesFromDAS('/WJetsToLNu_TuneCP5_13TeV-amcatnloFXFX-pythia8/RunIIFall17NanoAODv7-PU2017_12Apr2018_Nano02Apr2020_102X_mc2017_realistic_v8-v1/NANOAODSIM')
print files

samples['Wjets_NLO_inc'] = {
	'name' : files,
        'weight' : 'genWeight',
        'FilesPerJob': 1,
}
#files = getFilesFromDAS('/WJetsToLNu_TuneCP5_13TeV-amcatnloFXFX-pythia8/RunIIAutumn18NanoAODv7-Nano02Apr2020_102X_upgrade2018_realistic_v21-v1/NANOAODSIM')
#
#samples['Wjets_NLO_inc'] = {
#	'name' : files,
#        'weight' : 'genWeight',
#        'FilesPerJob': 1,
#}
addSampleWeightFromNano(samples, 'Wjets_NLO_inc', 'WJetsToLNu_TuneCP5_13TeV-amcatnloFXFX-pythia8', \
                        getBaseWFromDAS(mcProduction, 'WJetsToLNu', ['/WJetsToLNu_TuneCP5_13TeV-amcatnloFXFX-pythia8/RunIIFall17NanoAODv7-PU2017_12Apr2018_Nano02Apr2020_102X_mc2017_realistic_v8-v1/NANOAODSIM']))

#MiNNLO from 2018, but we care only about GEN so it does not matter
files  = getFilesFromDAS('/WminusJetsToMuNu_H2ErratumFix_TuneCP5_13TeV-powhegMiNNLO-pythia8-photos/RunIISummer20UL18NanoAODv9-106X_upgrade2018_realistic_v16_L1v1-v1/NANOAODSIM')
files += getFilesFromDAS('/WplusJetsToMuNu_H2ErratumFix_TuneCP5_13TeV-powhegMiNNLO-pythia8-photos/RunIISummer20UL18NanoAODv9-106X_upgrade2018_realistic_v16_L1v1-v1/NANOAODSIM')
samples['Wjets_MiNNLO_inc'] = {
        'name' : files,
        'weight' : 'genWeight/abs(genWeight)',
        'FilesPerJob': 1,
}
addSampleWeightFromNano(samples, 'Wjets_MiNNLO_inc', 'WminusJetsToMuNu_H2ErratumFix_TuneCP5_13TeV-powhegMiNNLO-pythia8-photos', \
                        getBaseWFromDAS(mcProduction, 8704., ['/WminusJetsToMuNu_H2ErratumFix_TuneCP5_13TeV-powhegMiNNLO-pythia8-photos/RunIISummer20UL18NanoAODv9-106X_upgrade2018_realistic_v16_L1v1-v1/NANOAODSIM'], recomputeSumOfWeighsWithSign=True))
addSampleWeightFromNano(samples, 'Wjets_MiNNLO_inc', 'WplusJetsToMuNu_H2ErratumFix_TuneCP5_13TeV-powhegMiNNLO-pythia8-photos', \
                        getBaseWFromDAS(mcProduction, 11770., ['/WplusJetsToMuNu_H2ErratumFix_TuneCP5_13TeV-powhegMiNNLO-pythia8-photos/RunIISummer20UL18NanoAODv9-106X_upgrade2018_realistic_v16_L1v1-v1/NANOAODSIM'], recomputeSumOfWeighsWithSign=True))


## LO samples

# HT binned
files = getFilesFromDAS('/WJetsToLNu_HT-70To100_TuneCP5_13TeV-madgraphMLM-pythia8/RunIIFall17NanoAODv7-PU2017_12Apr2018_Nano02Apr2020_102X_mc2017_realistic_v8-v1/NANOAODSIM')
files+= getFilesFromDAS('/WJetsToLNu_HT-100To200_TuneCP5_13TeV-madgraphMLM-pythia8/RunIIFall17NanoAODv7-PU2017_12Apr2018_Nano02Apr2020_102X_mc2017_realistic_v8-v1/NANOAODSIM')
files+= getFilesFromDAS('/WJetsToLNu_HT-200To400_TuneCP5_13TeV-madgraphMLM-pythia8/RunIIFall17NanoAODv7-PU2017_12Apr2018_Nano02Apr2020_102X_mc2017_realistic_v8-v1/NANOAODSIM')
files+= getFilesFromDAS('/WJetsToLNu_HT-400To600_TuneCP5_13TeV-madgraphMLM-pythia8/RunIIFall17NanoAODv7-PU2017_12Apr2018_Nano02Apr2020_102X_mc2017_realistic_v8-v1/NANOAODSIM')
files+= getFilesFromDAS('/WJetsToLNu_HT-600To800_TuneCP5_13TeV-madgraphMLM-pythia8/RunIIFall17NanoAODv7-PU2017_12Apr2018_Nano02Apr2020_102X_mc2017_realistic_v8-v1/NANOAODSIM')
files+= getFilesFromDAS('/WJetsToLNu_HT-800To1200_TuneCP5_13TeV-madgraphMLM-pythia8/RunIIFall17NanoAODv7-PU2017_12Apr2018_Nano02Apr2020_102X_mc2017_realistic_v8-v1/NANOAODSIM')
files+= getFilesFromDAS('/WJetsToLNu_HT-1200To2500_TuneCP5_13TeV-madgraphMLM-pythia8/RunIIFall17NanoAODv7-PU2017_12Apr2018_Nano02Apr2020_102X_mc2017_realistic_v8-v1/NANOAODSIM')
files+= getFilesFromDAS('/WJetsToLNu_HT-2500ToInf_TuneCP5_13TeV-madgraphMLM-pythia8/RunIIFall17NanoAODv7-PU2017_12Apr2018_Nano02Apr2020_102X_mc2017_realistic_v8-v1/NANOAODSIM')
#files+= getFilesFromDAS('/WJetsToLNu_TuneCP5_13TeV-madgraphMLM-pythia8/RunIIFall17NanoAODv7-PU2017_12Apr2018_Nano02Apr2020_102X_mc2017_realistic_v8-v1/NANOAODSIM')
files+= getFilesFromDAS('/WJetsToLNu_TuneCP5_13TeV-madgraphMLM-pythia8/RunIIFall17NanoAODv7-PU2017_12Apr2018_Nano02Apr2020_102X_mc2017_realistic_v8_ext1-v1/NANOAODSIM')

samples['Wjets_HT'] = {
    'name'   : files,
    'weight' : 'genWeight', 
    'FilesPerJob' : 1,
}

#addSampleWeightNano(samples, 'Wjets_HT', '/WJetsToLNu_TuneCP5_13TeV-madgraphMLM-pythia8/RunIIFall17NanoAODv7-PU2017_12Apr2018_Nano02Apr2020_102X_mc2017_realistic_v8-v1/NANOAODSIM', '(LHE_HT < 70)*genWeight*1.8619779') 
#addSampleWeightNano(samples, 'Wjets_HT', '/WJetsToLNu_TuneCP5_13TeV-madgraphMLM-pythia8/RunIIFall17NanoAODv7-PU2017_12Apr2018_Nano02Apr2020_102X_mc2017_realistic_v8-v1/NANOAODSIM', '(LHE_HT < 70)*genWeight*0.792') 
#addSampleWeightNano(samples, 'Wjets_HT', '/WJetsToLNu_HT-100To200_TuneCP5_13TeV-madgraphMLM-pythia8/RunIIFall17NanoAODv7-PU2017_12Apr2018_Nano02Apr2020_102X_mc2017_realistic_v8-v1/NANOAODSIM', 'genWeight*0.0471433*0.993')
#addSampleWeightNano(samples, 'Wjets_HT', '/WJetsToLNu_HT-200To400_TuneCP5_13TeV-madgraphMLM-pythia8/RunIIFall17NanoAODv7-PU2017_12Apr2018_Nano02Apr2020_102X_mc2017_realistic_v8-v1/NANOAODSIM', 'genWeight*0.0232896*1.002')
#addSampleWeightNano(samples, 'Wjets_HT', '/WJetsToLNu_HT-400To600_TuneCP5_13TeV-madgraphMLM-pythia8/RunIIFall17NanoAODv7-PU2017_12Apr2018_Nano02Apr2020_102X_mc2017_realistic_v8-v1/NANOAODSIM',  'genWeight*0.0048807*1.009')
#addSampleWeightNano(samples, 'Wjets_HT', '/WJetsToLNu_HT-600To800_TuneCP5_13TeV-madgraphMLM-pythia8/RunIIFall17NanoAODv7-PU2017_12Apr2018_Nano02Apr2020_102X_mc2017_realistic_v8-v1/NANOAODSIM',  'genWeight*0.0007215*1.120')
#addSampleWeightNano(samples, 'Wjets_HT', '/WJetsToLNu_HT-800To1200_TuneCP5_13TeV-madgraphMLM-pythia8/RunIIFall17NanoAODv7-PU2017_12Apr2018_Nano02Apr2020_102X_mc2017_realistic_v8-v1/NANOAODSIM',  'genWeight*0.0003202*1.202')
#addSampleWeightNano(samples, 'Wjets_HT', '/WJetsToLNu_HT-1200To2500_TuneCP5_13TeV-madgraphMLM-pythia8/RunIIFall17NanoAODv7-PU2017_12Apr2018_Nano02Apr2020_102X_mc2017_realistic_v8-v1/NANOAODSIM',  'genWeight*6.500e-05*1.332')
#addSampleWeightNano(samples, 'Wjets_HT', '/WJetsToLNu_HT-2500ToInf_TuneCP5_13TeV-madgraphMLM-pythia8/RunIIFall17NanoAODv7-PU2017_12Apr2018_Nano02Apr2020_102X_mc2017_realistic_v8-v1/NANOAODSIM',    'genWeight*4.692e-07*4.2')


# HT binned
addSampleWeightFromNano(samples, 'Wjets_HT', 'WJetsToLNu_TuneCP5_13TeV-madgraphMLM-pythia8', \
                        getBaseWFromDAS(mcProduction, 'WJetsToLNu-LO', ['/WJetsToLNu_TuneCP5_13TeV-madgraphMLM-pythia8/RunIIFall17NanoAODv7-PU2017_12Apr2018_Nano02Apr2020_102X_mc2017_realistic_v8_ext1-v1/NANOAODSIM'])+'*(LHE_HT < 70)')

addSampleWeightFromNano(samples, 'Wjets_HT', 'WJetsToLNu_HT-70To100_TuneCP5_13TeV-madgraphMLM-pythia8', \
                        getBaseWFromDAS(mcProduction, 'WJetsToLNu_HT70_100', ['/WJetsToLNu_HT-70To100_TuneCP5_13TeV-madgraphMLM-pythia8/RunIIFall17NanoAODv7-PU2017_12Apr2018_Nano02Apr2020_102X_mc2017_realistic_v8-v1/NANOAODSIM'])+"*1.21")

addSampleWeightFromNano(samples, 'Wjets_HT', 'WJetsToLNu_HT-100To200_TuneCP5_13TeV-madgraphMLM-pythia8', \
                        getBaseWFromDAS(mcProduction, 'WJetsToLNu_HT100_200', ['/WJetsToLNu_HT-100To200_TuneCP5_13TeV-madgraphMLM-pythia8/RunIIFall17NanoAODv7-PU2017_12Apr2018_Nano02Apr2020_102X_mc2017_realistic_v8-v1/NANOAODSIM'])+"*0.993")

addSampleWeightFromNano(samples, 'Wjets_HT', 'WJetsToLNu_HT-200To400_TuneCP5_13TeV-madgraphMLM-pythia8', \
                        getBaseWFromDAS(mcProduction, 'WJetsToLNu_HT200_400', ['/WJetsToLNu_HT-200To400_TuneCP5_13TeV-madgraphMLM-pythia8/RunIIFall17NanoAODv7-PU2017_12Apr2018_Nano02Apr2020_102X_mc2017_realistic_v8-v1/NANOAODSIM'])+"*1.002")

addSampleWeightFromNano(samples, 'Wjets_HT', 'WJetsToLNu_HT-400To600_TuneCP5_13TeV-madgraphMLM-pythia8', \
                        getBaseWFromDAS(mcProduction, 'WJetsToLNu_HT400_600', ['/WJetsToLNu_HT-400To600_TuneCP5_13TeV-madgraphMLM-pythia8/RunIIFall17NanoAODv7-PU2017_12Apr2018_Nano02Apr2020_102X_mc2017_realistic_v8-v1/NANOAODSIM'])+"*1.009")

addSampleWeightFromNano(samples, 'Wjets_HT', 'WJetsToLNu_HT-600To800_TuneCP5_13TeV-madgraphMLM-pythia8', \
                        getBaseWFromDAS(mcProduction, 'WJetsToLNu_HT600_800', ['/WJetsToLNu_HT-600To800_TuneCP5_13TeV-madgraphMLM-pythia8/RunIIFall17NanoAODv7-PU2017_12Apr2018_Nano02Apr2020_102X_mc2017_realistic_v8-v1/NANOAODSIM'])+"*1.120")

addSampleWeightFromNano(samples, 'Wjets_HT', 'WJetsToLNu_HT-800To1200_TuneCP5_13TeV-madgraphMLM-pythia8', \
                        getBaseWFromDAS(mcProduction, 'WJetsToLNu_HT800_1200', ['/WJetsToLNu_HT-800To1200_TuneCP5_13TeV-madgraphMLM-pythia8/RunIIFall17NanoAODv7-PU2017_12Apr2018_Nano02Apr2020_102X_mc2017_realistic_v8-v1/NANOAODSIM'])+"*1.202")    

addSampleWeightFromNano(samples, 'Wjets_HT', 'WJetsToLNu_HT-1200To2500_TuneCP5_13TeV-madgraphMLM-pythia8', \
                        getBaseWFromDAS(mcProduction, 'WJetsToLNu_HT1200_2500', ['/WJetsToLNu_HT-1200To2500_TuneCP5_13TeV-madgraphMLM-pythia8/RunIIFall17NanoAODv7-PU2017_12Apr2018_Nano02Apr2020_102X_mc2017_realistic_v8-v1/NANOAODSIM'])+"*1.332") 

addSampleWeightFromNano(samples, 'Wjets_HT', 'WJetsToLNu_HT-2500ToInf_TuneCP5_13TeV-madgraphMLM-pythia8', \
                        getBaseWFromDAS(mcProduction, 'WJetsToLNu_HT2500_inf', ['/WJetsToLNu_HT-2500ToInf_TuneCP5_13TeV-madgraphMLM-pythia8/RunIIFall17NanoAODv7-PU2017_12Apr2018_Nano02Apr2020_102X_mc2017_realistic_v8-v1/NANOAODSIM'])+"*4.2")     
