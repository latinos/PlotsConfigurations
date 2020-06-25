import os
import subprocess
import string
from LatinoAnalysis.Tools.commonTools import *

def nanoGetSampleFiles(inputDir, sample):
    return getSampleFiles(inputDir, sample, True, 'nanoLatino_')

samples={}

# Steps
mcStep   = 'MCl1loose2017v5__MCCorr2017v5__VBSjjlnuSkim2017v3' 
dataStep = 'DATAl1loose2017v5__VBSjjlnuSkim2017v3'
fakeStep_old = 'DATAl1loose2017v5__VBSjjlnuSkim2017v3_fakes'
fakeStep =  'DATAl1loose2017v5__VBSjjlnuSkim2017v3_fakesv2'

##############################################
###### Tree Directory according to site ######
##############################################

SITE=os.uname()[1]
xrootdPath=''
if    'iihe' in SITE :
  xrootdPath  = 'dcap://maite.iihe.ac.be/'
  treeBaseDir = '/pnfs/iihe/cms/store/user/xjanssen/HWW2015/'
elif  'cern' in SITE :
  #xrootdPath='root://eoscms.cern.ch/'
  treeBaseDir = '/eos/cms/store/group/phys_higgs/cmshww/amassiro/HWWNano/'

directory_bkg = treeBaseDir+'Fall2017_102X_nAODv4_Full2017v5/'+ mcStep
directory_signal = treeBaseDir + 'Fall2017_102X_nAODv5_SigOnly_Full2017v5/' + mcStep
directory_data = treeBaseDir + 'Run2017_102X_nAODv4_Full2017v5/'+ dataStep
directory_fakes_old= treeBaseDir + 'Run2017_102X_nAODv4_Full2017v5/'+ fakeStep_old
directory_fakes = treeBaseDir + 'Run2017_102X_nAODv4_Full2017v5/'+ fakeStep

################################################
############ NUMBER OF LEPTONS #################
################################################

Nlep='1'
#Nlep='3'
#Nlep='4'

################################################
############### Lepton WP ######################
################################################

eleWP='mvaFall17V1Iso_WP90'
muWP='cut_Tight_HWWW'


LepWPCut_1l =  '(Lepton_isTightElectron_'+eleWP+'[0]>0.5 || Lepton_isTightMuon_'+muWP+'[0]>0.5)'
LepWPWeight_1l = 'Lepton_tightElectron_'+eleWP+'_IdIsoSF'+'[0]*\
                Lepton_tightMuon_'+muWP+'_IdIsoSF'+'[0]'

LepWPCut = LepWPCut_1l
LepWPWeight = LepWPWeight_1l
################################################
############ BASIC MC WEIGHTS ##################
################################################

XSWeight      = 'XSWeight'
SFweight1l =       'puWeight*\
                   TriggerEffWeight_1l*\
                   Lepton_RecoSF[0]*\
                   EMTFbug_veto'
SFweight      = SFweight1l+'*'+LepWPWeight_1l+'*'+LepWPCut_1l+'*PrefireWeight'
     
GenLepMatch   = 'Lepton_genmatched[0]'



###############################################
############# FAKE WEIGHTS ####################
###############################################
#fakeW = 'fakeW1l_ele_'+eleWP+'_mu_'+muWP


################################################
############### B-Tag  WP ######################
################################################

#FIXME b-tagging to be optimized
# Definitions in aliases.py

# Not using any btagging yet
SFweight += '*btagSF'

################################################
############   MET  FILTERS  ###################
################################################

METFilter_MC   = 'METFilter_MC'
METFilter_DATA = 'METFilter_DATA'

################################################
############ DATA DECLARATION ##################
################################################

DataRun = [
            ['B','Run2017B-Nano14Dec2018-v1'] ,
            ['C','Run2017C-Nano14Dec2018-v1'] ,
            ['D','Run2017D-Nano14Dec2018-v1'] ,
            ['E','Run2017E-Nano14Dec2018-v1'] ,
            ['F','Run2017F-Nano14Dec2018-v1']
          ]

#DataSets = ['MuonEG','DoubleMuon','SingleMuon','DoubleEG','SingleElectron']
DataSets = ['SingleMuon','SingleElectron']

# DataTrig = {
#             'MuonEG'         : 'Trigger_ElMu' ,
#             'DoubleMuon'     : '!Trigger_ElMu && Trigger_dblMu' ,
#             'SingleMuon'     : '!Trigger_ElMu && !Trigger_dblMu && Trigger_sngMu' ,
#             'DoubleEG'       : '!Trigger_ElMu && !Trigger_dblMu && !Trigger_sngMu && Trigger_dblEl' ,
#             'SingleElectron' : '!Trigger_ElMu && !Trigger_dblMu && !Trigger_sngMu && !Trigger_dblEl && Trigger_sngEl' ,
#            }

DataTrig = {
            'SingleMuon'     : 'Trigger_sngMu' ,
            'SingleElectron' : '!Trigger_sngMu && Trigger_sngEl' 
}
###########################################
#############  BACKGROUNDS  ###############
###########################################

############ DY ############
ptllDYW_NLO = '((0.623108 + 0.0722934*gen_ptll - 0.00364918*gen_ptll*gen_ptll + 6.97227e-05*gen_ptll*gen_ptll*gen_ptll - 4.52903e-07*gen_ptll*gen_ptll*gen_ptll*gen_ptll)*(gen_ptll<45)*(gen_ptll>0) + 1*(gen_ptll>=45))'
ptllDYW_LO = '((0.632927+0.0456956*gen_ptll-0.00154485*gen_ptll*gen_ptll+2.64397e-05*gen_ptll*gen_ptll*gen_ptll-2.19374e-07*gen_ptll*gen_ptll*gen_ptll*gen_ptll+6.99751e-10*gen_ptll*gen_ptll*gen_ptll*gen_ptll*gen_ptll)*(gen_ptll>0)*(gen_ptll<100)+(1.41713-0.00165342*gen_ptll)*(gen_ptll>=100)*(gen_ptll<300)+1*(gen_ptll>=300))'

useEmbeddedDY = False

samples['DY'] = {    'name'   :   nanoGetSampleFiles(directory_bkg,'DYJetsToLL_M-5to50-LO')
                                + nanoGetSampleFiles(directory_bkg,'DYJetsToLL_M-50')
                                + nanoGetSampleFiles(directory_bkg,'DYJetsToLL_M-4to50_HT-100to200')
                                + nanoGetSampleFiles(directory_bkg,'DYJetsToLL_M-4to50_HT-200to400')
                                + nanoGetSampleFiles(directory_bkg,'DYJetsToLL_M-4to50_HT-400to600')
                                + nanoGetSampleFiles(directory_bkg,'DYJetsToLL_M-4to50_HT-600toInf')
                                + nanoGetSampleFiles(directory_bkg,'DYJetsToLL_M-50_HT-100to200')
                                + nanoGetSampleFiles(directory_bkg,'DYJetsToLL_M-50_HT-200to400')
                                + nanoGetSampleFiles(directory_bkg,'DYJetsToLL_M-50_HT-400to600_ext1')
                                + nanoGetSampleFiles(directory_bkg,'DYJetsToLL_M-50_HT-600to800')
                                + nanoGetSampleFiles(directory_bkg,'DYJetsToLL_M-50_HT-800to1200')
                                + nanoGetSampleFiles(directory_bkg,'DYJetsToLL_M-50_HT-1200to2500')
                                + nanoGetSampleFiles(directory_bkg,'DYJetsToLL_M-50_HT-2500toInf')
                                ,
                      'weight' : XSWeight+'*'+SFweight+'*'+METFilter_MC+'*'+GenLepMatch,
                      'FilesPerJob' : 6,
                  }

addSampleWeight(samples,'DY','DYJetsToLL_M-50',ptllDYW_NLO +'*(LHE_HT<100)')
addSampleWeight(samples,'DY','DYJetsToLL_M-5to50-LO',ptllDYW_LO +'*(LHE_HT<100)')
addSampleWeight(samples,'DY','DYJetsToLL_M-4to50_HT-100to200',ptllDYW_LO)
addSampleWeight(samples,'DY','DYJetsToLL_M-4to50_HT-200to400',ptllDYW_LO)
addSampleWeight(samples,'DY','DYJetsToLL_M-4to50_HT-400to600',ptllDYW_LO)
addSampleWeight(samples,'DY','DYJetsToLL_M-4to50_HT-600toInf',ptllDYW_LO)
addSampleWeight(samples,'DY','DYJetsToLL_M-50_HT-100to200',ptllDYW_LO)
addSampleWeight(samples,'DY','DYJetsToLL_M-50_HT-200to400',ptllDYW_LO)
addSampleWeight(samples,'DY','DYJetsToLL_M-50_HT-400to600_ext1',ptllDYW_LO)
addSampleWeight(samples,'DY','DYJetsToLL_M-50_HT-600to800',ptllDYW_LO)
addSampleWeight(samples,'DY','DYJetsToLL_M-50_HT-800to1200',ptllDYW_LO)
addSampleWeight(samples,'DY','DYJetsToLL_M-50_HT-1200to2500',ptllDYW_LO)
addSampleWeight(samples,'DY','DYJetsToLL_M-50_HT-2500toInf',ptllDYW_LO)



############ Top ############

Top_pTrw = '(TMath::Sqrt( TMath::Exp(0.0615-0.0005*topGenPt) * TMath::Exp(0.0615-0.0005*antitopGenPt) ) )'

samples['singleTop'] = {    
            'name'   :  nanoGetSampleFiles(directory_bkg,'ST_s-channel') 
                      + nanoGetSampleFiles(directory_bkg,'ST_t-channel_antitop') 
                      + nanoGetSampleFiles(directory_bkg,'ST_t-channel_top') 
                      + nanoGetSampleFiles(directory_bkg,'ST_tW_antitop') 
                      + nanoGetSampleFiles(directory_bkg,'ST_tW_top') ,
            'weight' :  XSWeight+'*'+SFweight+'*'+METFilter_MC+'*'+GenLepMatch ,
            'FilesPerJob' : 3,
                 }

samples["ttbar"] =  {  'name': nanoGetSampleFiles(directory_bkg,'TTToSemiLeptonic') 
                            +  nanoGetSampleFiles(directory_bkg,'TTTo2L2Nu') 
                            +  nanoGetSampleFiles(directory_bkg,'TTWjets')
                            #+  nanoGetSampleFiles(directory_bkg,'TTWjets_ext1')
                            +  nanoGetSampleFiles(directory_bkg,'TTZjets'),
                           # +  nanoGetSampleFiles(directory_bkg,'TTZjets_ext1'),
                          #  +  nanoGetSampleFiles(directory_bkg,'TTWJetsToLNu'),
                        'weight': XSWeight+'*'+SFweight+'*'+METFilter_MC+'*'+GenLepMatch,
                        'FilesPerJob': 2,
}

addSampleWeight(samples,'ttbar','TTToSemiLeptonic',Top_pTrw)
addSampleWeight(samples,'ttbar','TTTo2L2Nu',Top_pTrw)
addSampleWeight(samples,'ttbar','TTWjets',Top_pTrw)
#addSampleWeight(samples,'ttbar','TTWjets_ext1',Top_pTrw)
addSampleWeight(samples,'ttbar','TTZjets',Top_pTrw)
#addSampleWeight(samples,'ttbar','TTZjets_ext1',Top_pTrw)


samples['Wjets'] = { 'name' :   
          nanoGetSampleFiles(directory_bkg, 'WJetsToLNu-LO')
          #+ nanoGetSampleFiles(directory_bkg, 'WJetsToLNu-LO_ext1')
          + nanoGetSampleFiles(directory_bkg, 'WJetsToLNu_HT100_200')
          #+ nanoGetSampleFiles(directory_bkg, 'WJetsToLNu_HT100_200_ext1')
          #+ nanoGetSampleFiles(directory_bkg, 'WJetsToLNu_HT100_200_ext2')
          + nanoGetSampleFiles(directory_bkg, 'WJetsToLNu_HT200_400')
          #+ nanoGetSampleFiles(directory_bkg, 'WJetsToLNu_HT200_400_ext1')
          #+ nanoGetSampleFiles(directory_bkg, 'WJetsToLNu_HT200_400_ext2')
          + nanoGetSampleFiles(directory_bkg, 'WJetsToLNu_HT400_600')
          #+ nanoGetSampleFiles(directory_bkg, 'WJetsToLNu_HT400_600_ext1')
          + nanoGetSampleFiles(directory_bkg, 'WJetsToLNu_HT600_800')
          #+ nanoGetSampleFiles(directory_bkg, 'WJetsToLNu_HT600_800_ext1')
          + nanoGetSampleFiles(directory_bkg, 'WJetsToLNu_HT800_1200')
          #+ nanoGetSampleFiles(directory_bkg, 'WJetsToLNu_HT800_1200_ext1')
          + nanoGetSampleFiles(directory_bkg, 'WJetsToLNu_HT1200_2500')
          #+ nanoGetSampleFiles(directory_bkg, 'WJetsToLNu_HT1200_2500_ext1')
          + nanoGetSampleFiles(directory_bkg, 'WJetsToLNu_HT2500_inf'),
          #+ nanoGetSampleFiles(directory_bkg, 'WJetsToLNu_HT2500_inf_ext1'),
				'weight': XSWeight+'*'+SFweight+'*'+METFilter_MC+'*'+GenLepMatch ,
				'FilesPerJob' : 2,
		   }

# Fix Wjets binned + LO 
addSampleWeight(samples,'Wjets', 'WJetsToLNu-LO', 'LHE_HT < 100')

#
samples['VV']  = { 'name' :  
               nanoGetSampleFiles(directory_bkg,'WmTo2J_ZTo2L_QCD', ) +
               nanoGetSampleFiles(directory_bkg,'WmToLNu_WmTo2J_QCD') +
               nanoGetSampleFiles(directory_bkg,'WmToLNu_ZTo2J_QCD',) +
               nanoGetSampleFiles(directory_bkg,'WpTo2J_WmToLNu_QCD') +
               nanoGetSampleFiles(directory_bkg,'WpTo2J_ZTo2L_QCD', ) +
               nanoGetSampleFiles(directory_bkg,'WpToLNu_WmTo2J_QCD') +
               nanoGetSampleFiles(directory_bkg,'WpToLNu_WpTo2J_QCD') +
               nanoGetSampleFiles(directory_bkg,'WpToLNu_ZTo2J_QCD',) +
               nanoGetSampleFiles(directory_bkg,'ZTo2L_ZTo2J_QCD',  ) ,
        'weight': XSWeight+'*'+SFweight+'*'+METFilter_MC+'*'+GenLepMatch,
        'FilesPerJob' : 3,
}

############ VVV ############

samples['VVV']  = {  'name'   :   nanoGetSampleFiles(directory_bkg,'ZZZ')
                                + nanoGetSampleFiles(directory_bkg,'WZZ')
                                + nanoGetSampleFiles(directory_bkg,'WWZ')
                                + nanoGetSampleFiles(directory_bkg,'WWW'),
                                #+ nanoGetSampleFiles(directory,'WWG'), #should this be included? or is it already taken into account in the WW sample?
                    'weight' : XSWeight+'*'+SFweight+'*'+METFilter_MC+'*'+GenLepMatch ,
                    'FilesPerJob' : 5,
                  }

############## VBF-V ########
samples['VBF-V']  = {  'name'   :   nanoGetSampleFiles(directory_bkg,'WLNuJJ_EWK')
                                  + nanoGetSampleFiles(directory_bkg,'EWKZ2Jets_ZToLL_M-50'),
                    'weight' : XSWeight+'*'+SFweight+'*'+METFilter_MC+'*'+GenLepMatch ,
                    'FilesPerJob' : 6
                  }


##########################################
################ SIGNALS #################
##########################################

#
samples['VBS']  = { 'name' :  
               nanoGetSampleFiles(directory_signal,'WmTo2J_ZTo2L', ) +
               nanoGetSampleFiles(directory_signal,'WmToLNu_WmTo2J') +
               nanoGetSampleFiles(directory_signal,'WmToLNu_ZTo2J',) +
               nanoGetSampleFiles(directory_signal,'WpTo2J_WmToLNu') +
               nanoGetSampleFiles(directory_signal,'WpTo2J_ZTo2L', ) +
               nanoGetSampleFiles(directory_signal,'WpToLNu_WmTo2J') +
               nanoGetSampleFiles(directory_signal,'WpToLNu_WpTo2J') +
               nanoGetSampleFiles(directory_signal,'WpToLNu_ZTo2J',) +
               nanoGetSampleFiles(directory_signal,'ZTo2L_ZTo2J',  ) ,
       'weight': XSWeight+'*'+SFweight+'*'+METFilter_MC+'*'+GenLepMatch,
       'suppressNegative' :['all'],
       'suppressNegativeNuisances' :['all'],
       'FilesPerJob' : 4,
}


###############
# Fakes
# Prepare different Fakes with different samples
fake_files = []
fake_weights = []
for _, sd in DataRun:
  for pd in DataSets:
    files = nanoGetSampleFiles(directory_fakes, pd + '_' + sd)
    fake_files.extend(files)
    fake_weights.extend([DataTrig[pd]] * len(files))

for mupt in [10]:
#for mupt in [45]:
  fakeW = 'fakeW_ele_'+eleWP+'_mu_'+muWP + '_mu{}_ele{}'.format(mupt, 25)
  
  samples['Fake_mu{}'.format(mupt)] = {
    'name': fake_files,
    'weight': METFilter_DATA+'*'+fakeW+"*(4.97)",
    'weights': fake_weights,
    'isData': ['all'],
    'FilesPerJob': 10
  }


for elept in [35]:
#for elept in [45]:
  fakeW = 'fakeW_ele_'+eleWP+'_mu_'+muWP + '_mu{}_ele{}'.format(25, elept)
  
  samples['Fake_ele{}'.format(elept)] = {
    'name': fake_files,
    'weight': METFilter_DATA+'*'+fakeW+"*(3.12)",
    'weights': fake_weights,
    'isData': ['all'],
    'FilesPerJob': 10
  }


##########################################
################# DATA ###################
##########################################

samples['DATA']  = {   'name': [ ] ,
                       'weight' : METFilter_DATA+'*'+LepWPCut,
                       'weights' : [ ],
                       'isData': ['all'],
                       'FilesPerJob' : 10,
                  }

for Run in DataRun :
        for DataSet in DataSets :
                FileTarget = nanoGetSampleFiles(directory_data,DataSet+'_'+Run[1])
                for iFile in FileTarget:
                        print(iFile)
                        samples['DATA']['name'].append(iFile)
                        samples['DATA']['weights'].append(DataTrig[DataSet])

