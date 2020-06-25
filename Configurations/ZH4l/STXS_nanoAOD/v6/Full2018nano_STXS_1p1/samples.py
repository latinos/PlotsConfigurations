import os
import subprocess
import string
import inspect

global getSampleFiles
from LatinoAnalysis.Tools.commonTools import getSampleFiles, addSampleWeight, getBaseWnAOD

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

########################################
########################skims############
#########################################

mcProduction = 'Autumn18_102X_nAODv6_Full2018v6'

dataReco = 'Run2018_102X_nAODv6_Full2018v6'

mcSteps = 'MCl1loose2018v6__MCCorr2018v6__l2loose__l2tightOR2018v6{var}'


dataSteps = 'DATAl1loose2018v6__l2loose__l2tightOR2018v6'

###########################################
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

def makeMCDirectory(var=''):
    if var:
        return os.path.join(treeBaseDir, mcProduction, mcSteps.format(var='__' + var))
        #return '/afs/cern.ch/user/y/yiiyama/public/hwwvirtual/Summer16/l2tightOR__{var}'.format(var=var)
    else:
        return os.path.join(treeBaseDir, mcProduction, mcSteps.format(var=''))
        #return '/afs/cern.ch/user/y/yiiyama/public/hwwvirtual/Summer16/l2tightOR'

mcDirectory = makeMCDirectory()

dataDirectory = os.path.join(treeBaseDir, dataReco, dataSteps)

#directory = treeBaseDir+'Summer16_102X_nAODv5_Full2016v6/MCl1loose2016v6__MCCorr2016v6__l2loose__l2tightOR2016v6/'
#directory1= treeBaseDir+'Summer16_102X_nAODv5_SigOnly_Full2016v5/MCl1loose2016v5__MCCorr2016v5__l2loose__l2tightOR2016v5/'+skim
################################################
############ NUMBER OF LEPTONS #################
################################################

Nlep='4'
#Nlep='3'
#Nlep='4'

################################################
############### Lepton WP ######################
##############################################
eleWP='mvaFall17V1Iso_WP90'
muWP='cut_Tight_HWWW'

LepWPCut        = 'LepCut'+Nlep+'l__ele_'+eleWP+'__mu_'+muWP
LepWPweight     = 'LepSF'+Nlep+'l__ele_'+eleWP+'__mu_'+muWP


################################################
############ BASIC MC WEIGHTS ##################
################################################

XSWeight      = 'XSWeight'
SFweight      = 'SFweight'+Nlep+'l*'+LepWPweight+'*'+LepWPCut+'*PUJetIdSF'
PromptGenLepMatch   = 'PromptGenLepMatch'+Nlep+'l'
PromptGenLepMatch2l   = 'PromptGenLepMatch'+'2l'
PromptGenLepMatch3l   = 'PromptGenLepMatch'+'3l'


################################################
############## FAKE WEIGHTS ####################
################################################

if Nlep == '2' :
  fakeW = 'fakeW2l_ele_'+eleWP+'_mu_'+muWP
else:
  fakeW = 'fakeW_ele_'+eleWP+'_mu_'+muWP+'_'+Nlep+'l'


################################################
############### B-Tag  WP ######################
################################################

#FIXME b-tagging to be optimized
# Definitions in aliases.py


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
           ['A','Run2018A-Nano25Oct2019-v1'] ,
            ['B','Run2018B-Nano25Oct2019-v1'] ,
            ['C','Run2018C-Nano25Oct2019-v1'] ,
            ['D','Run2018D-Nano25Oct2019_ver2-v1'] ,
          ]

DataSets = ['MuonEG','DoubleMuon','SingleMuon','EGamma']

DataTrig = {
            'MuonEG'         : 'Trigger_ElMu' ,
            'DoubleMuon'     : '!Trigger_ElMu && Trigger_dblMu' ,
            'SingleMuon'     : '!Trigger_ElMu && !Trigger_dblMu && Trigger_sngMu' ,
            'EGamma'         : '!Trigger_ElMu && !Trigger_dblMu && !Trigger_sngMu && (Trigger_sngEl || Trigger_dblEl)' ,
           }

###########################################
#############  BACKGROUNDS  ###############
###########################################

############ DY ############
'''
ptllDYW_NLO = '(0.876979+gen_ptll*(4.11598e-03)-(2.35520e-05)*gen_ptll*gen_ptll)*(1.10211 * (0.958512 - 0.131835*TMath::Erf((gen_ptll-14.1972)/10.1525)))*(gen_ptll<140)+0.891188*(gen_ptll>=140)'
ptllDYW_LO  = '(8.61313e-01+gen_ptll*4.46807e-03-1.52324e-05*gen_ptll*gen_ptll)*(1.08683 * (0.95 - 0.0657370*TMath::Erf((gen_ptll-11.)/5.51582)))*(gen_ptll<140)+1.141996*(gen_ptll>=140)'
Zgfilter    = '( !(Sum$(PhotonGen_isPrompt==1 && PhotonGen_pt>10 && abs(PhotonGen_eta)<2.6) > 0 && Sum$(LeptonGen_isPrompt==1)>=2) )' #Zg sample uses photon pt > 10

samples['DY'] = {    'name'   :   nanoGetSampleFiles(mcDirectory,'DYJetsToLL_M-10to50')
                                + nanoGetSampleFiles(mcDirectory,'DYJetsToLL_M-50-LO_ext2'),
 #                               + getSampleFiles(directory,'DYJetsToTT_MuEle_M-50',False,'nanoLatino_'),
                     'weight' : XSWeight+'*'+SFweight+'*'+PromptGenLepMatch2l+'*'+METFilter_MC+ '*( !(Sum$(PhotonGen_isPrompt==1 && PhotonGen_pt>15 && abs(PhotonGen_eta)<2.6) > 0))',
                     'FilesPerJob' : 5,
                 }

addSampleWeight(samples,'DY','DYJetsToLL_M-50-LO_ext2',ptllDYW_LO)
#addSampleWeight(samples,'DY','DYJetsToTT_MuEle_M-50',ptllDYW_NLO)
addSampleWeight(samples,'DY','DYJetsToLL_M-10to50',ptllDYW_LO)
'''
#######  ttV  ##################

samples['ttW'] =  {  'name'   :   nanoGetSampleFiles(mcDirectory,'TTWJetsToLNu'),
                      'weight' : XSWeight+'*'+SFweight+'*'+PromptGenLepMatch3l+'*'+METFilter_MC,
                 }

#samples['ttW']  = {    'name': getSampleFiles(directory2,'TTWJetsToLNu',False,'nanoLatino_'),
#                      'weight' : XSWeight+'*'+SFweight+'*'+GenLepMatch3l+'*'+METFilter_MC,
#                 }

samples['ttZ']  = {    'name': nanoGetSampleFiles(mcDirectory,'TTZjets'),
                      'weight' : XSWeight+'*'+SFweight+'*'+PromptGenLepMatch+'*'+METFilter_MC,
}
############ Top ############
'''
Top_pTrw = '(TMath::Sqrt( TMath::Exp(0.0615-0.0005*topGenPt) * TMath::Exp(0.0615-0.0005*antitopGenPt) ) )'

samples['top'] = {    'name'   :   nanoGetSampleFiles(mcDirectory,'TTTo2L2Nu') 
                                 + nanoGetSampleFiles(mcDirectory,'ST_s-channel_ext1') 
                                 + nanoGetSampleFiles(mcDirectory,'ST_t-channel_antitop') 
                                 + nanoGetSampleFiles(mcDirectory,'ST_t-channel_top') 
                                 + nanoGetSampleFiles(mcDirectory,'ST_tW_antitop_ext1') 
                                 + nanoGetSampleFiles(mcDirectory,'ST_tW_top_ext1') ,
                     'weight' : XSWeight+'*'+SFweight+'*'+PromptGenLepMatch2l+'*'+METFilter_MC ,
                     'FilesPerJob' : 1,
                 }

addSampleWeight(samples,'top','TTTo2L2Nu',Top_pTrw)
'''
############ WW ############

#FIXME Add nllW weight to WW
samples['WW'] = {    'name'   :  nanoGetSampleFiles(mcDirectory,'WWTo2L2Nu') ,
                     'weight' : XSWeight+'*'+SFweight+'*'+PromptGenLepMatch2l+'*'+METFilter_MC+'*nllW' ,
                 }


samples['WWewk'] = {   'name'  : nanoGetSampleFiles(mcDirectory,'WpWmJJ_EWK'),
                       'weight': XSWeight+'*'+SFweight+'*'+PromptGenLepMatch2l+'*'+METFilter_MC+ '*(Sum$(abs(GenPart_pdgId)==6 || GenPart_pdgId==25)==0)', #filter tops limit w mass
                   }
'''
samples['ggWW']  = {  'name'   : nanoGetSampleFiles(mcDirectory, 'GluGluToWWToENEN') 
                            +    nanoGetSampleFiles(mcDirectory, 'GluGluToWWToENMN') 
                            +    nanoGetSampleFiles(mcDirectory, 'GluGluToWWToENTN') 
                            +    nanoGetSampleFiles(mcDirectory, 'GluGluToWWToMNEN') 
                            +    nanoGetSampleFiles(mcDirectory, 'GluGluToWWToMNMN') 
                            +    nanoGetSampleFiles(mcDirectory, 'GluGluToWWToMNTN') 
                            +    nanoGetSampleFiles(mcDirectory, 'GluGluToWWToTNEN') 
                            +    nanoGetSampleFiles(mcDirectory, 'GluGluToWWToTNMN') 
                            +    nanoGetSampleFiles(mcDirectory, 'GluGluToWWToTNTN'),     
                      'weight' : XSWeight+'*'+SFweight+'*'+PromptGenLepMatch2l+'*'+METFilter_MC,# updating k-factor ,  
                      'isData': ['0'],                            
                   }
'''

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
    'weight': XSWeight+'*'+SFweight+'*'+PromptGenLepMatch2l+'*'+METFilter_MC + '*1.53/1.4', # updating k-factor
    'FilesPerJob': 4
}

############ Vg ############

samples['Wg']  =  {     'name'   :   nanoGetSampleFiles(mcDirectory,'Wg_MADGRAPHMLM'),
                        'weight' : XSWeight+'*'+SFweight+'*'+METFilter_MC+'* (!(Gen_ZGstar_mass > 0 ))',
                        'FilesPerJob' : 5 ,
                  }

samples['Zg']  =  {     'name'   : nanoGetSampleFiles(mcDirectory,'Zg'),
                        'weight' : XSWeight+'*'+SFweight+'*'+METFilter_MC+'* (!(Gen_ZGstar_mass > 0))',
                        'FilesPerJob' : 5 ,
                  }

######## VgS ########
#FIXME: k-factor?
#samples['VgS']  = {    'name':   getSampleFiles(directory,'Wg_MADGRAPHMLM',False,'nanoLatino_')
#                               + getSampleFiles(directory,'Zg',False,'nanoLatino_'),
#                         #      + getSampleFiles(directory,'WZTo3LNu_mllmin01',False,'nanoLatino_') ,
#                       'weight' : XSWeight+'*'+SFweight+'*'+GenLepMatch3l+'*'+METFilter_MC ,
#                       'FilesPerJob' : 2 ,
#                  }
#addSampleWeight(samples,'VgS','Wg_MADGRAPHMLM',    '(Gen_ZGstar_mass >0 && Gen_ZGstar_mass < 0.1)')
#addSampleWeight(samples,'VgS','Zg',                '(Gen_ZGstar_mass >0)')
##addSampleWeight(samples,'VgS','WZTo3LNu_mllmin01', '(Gen_ZGstar_mass>=0.1 || Gen_ZGstar_mass<0)')

#################### ZZ ##############

samples['ZZ']  = {  'name'   : nanoGetSampleFiles(mcDirectory,'ZZTo4L_ext1')
                             +nanoGetSampleFiles(mcDirectory,'ggZZ2m2t')
                             +nanoGetSampleFiles(mcDirectory,'ggZZ2e2t')
                             +nanoGetSampleFiles(mcDirectory,'ggZZ2e2m')
                             +nanoGetSampleFiles(mcDirectory,'ggZZ4t')
                  #            +nanoGetSampleFiles(mcDirectory,'ggZZ4e')
                             +nanoGetSampleFiles(mcDirectory,'ggZZ4m_ext1'),
                    'weight' : XSWeight+'*'+SFweight+'*'+PromptGenLepMatch+'*'+METFilter_MC ,
                    'FilesPerJob' : 5,
                 }
                            

addSampleWeight(samples,'ZZ','ZZTo4L_ext1',"1.07") ## The NNLO/NLO k-factor, cited from https://arxiv.org/abs/1405.2219v1
addSampleWeight(samples,'ZZ','ggZZ2e2t',"1.68") ## The NLO/LO k-factor, cited from https://arxiv.org/abs/1509.06734v1
addSampleWeight(samples,'ZZ','ggZZ2m2t',"1.68") 
addSampleWeight(samples,'ZZ','ggZZ2e2m',"1.68")
#addSampleWeight(samples,'ggZZ','ggZZ4e',"1.68")
addSampleWeight(samples,'ZZ','ggZZ4m_ext1',"1.68")
addSampleWeight(samples,'ZZ','ggZZ4t',"1.68")

############ VZ ############

#FIXME Add normalization k-factor
samples['ZZhad']  = {  'name'   :   nanoGetSampleFiles(mcDirectory,'ZZTo2L2Nu_ext1')
                               + nanoGetSampleFiles(mcDirectory,'ZZTo2L2Q'),
                    'weight' : XSWeight+'*'+SFweight+'*'+PromptGenLepMatch2l+'*'+METFilter_MC,
                    'FilesPerJob' : 2,
                 }
                             
samples['WZhad']  = {  'name'   : nanoGetSampleFiles(mcDirectory,'WZTo2L2Q'),
                    'weight' : XSWeight+'*'+SFweight+'*'+PromptGenLepMatch2l+'*'+METFilter_MC,
                    'FilesPerJob' : 2,
                 }

samples['WZ'] = {'name'   :nanoGetSampleFiles(mcDirectory,'WZTo3LNu_mllmin01'),
                    'weight' : XSWeight+'*'+SFweight+'*'+PromptGenLepMatch3l+'*'+METFilter_MC+'*(Gen_ZGstar_mass > 0.1)' ,
                    'FilesPerJob' : 5,
}

############ VVV ############

samples['VVV']  = {  'name'   :   nanoGetSampleFiles(mcDirectory,'ZZZ')
                                + nanoGetSampleFiles(mcDirectory,'WZZ')
                                + nanoGetSampleFiles(mcDirectory,'WWZ'),
                              #  + getSampleFiles(directory,'WWW',Fals,'nanoLatino_'),
                                #+ getSampleFiles(directory,'WWG',False,'nanoLatino_'), #should this be included? or is it already taken into account in the WW sample?
                    'weight' : XSWeight+'*'+SFweight+'*'+PromptGenLepMatch+'*'+METFilter_MC ,
                  }


samples['WWW'] = {'name'   :nanoGetSampleFiles(mcDirectory,'WWW'),
                    'weight' : XSWeight+'*'+SFweight+'*'+PromptGenLepMatch3l+'*'+METFilter_MC ,
                   
}

##########################################
################ SIGNALS #################
##########################################

############ ggH H->WW ############
#FIXME Add reweighting to MiNLO NNLOPS or use NNLOPS sample when available
samples['ggH_hww']  = {  'name'   :   nanoGetSampleFiles(mcDirectory,'GluGluHToWWTo2L2NuPowheg_M125'),
                        'weight' : XSWeight+'*'+SFweight+'*'+PromptGenLepMatch+'*'+METFilter_MC ,
                     }

############ VBF H->WW ############
samples['qqH_hww']  = {  'name'   :   nanoGetSampleFiles(mcDirectory,'VBFHToWWTo2L2Nu_M125'),
                        'weight' : XSWeight+'*'+SFweight+'*'+PromptGenLepMatch+'*'+METFilter_MC ,
                     }

############ ZH H->WW ############

#samples['ZH_hww']  = {  'name'   :   nanoGetSampleFiles(mcDirectory,'HZJ_HToWW_M125'), #FIXME replace with 125 GeV sample when available
#                        'weight' : XSWeight+'*'+SFweight+'*'+PromptGenLepMatch+'*'+METFilter_MC ,
#                     }

#samples['ggZH_hww']  = {  'name'   :   nanoGetSampleFiles(mcDirectory,'GluGluZH_HToWWTo2L2Nu_M125'),
#                        'weight' : XSWeight+'*'+SFweight+'*'+PromptGenLepMatch+'*'+METFilter_MC ,
#                     }

samples['ZH_hww']  = {  'name': nanoGetSampleFiles(mcDirectory,'HZJ_HToWWTo2L2Nu_M125'),
                        'weight' : XSWeight+'*'+SFweight+'*'+PromptGenLepMatch+'*'+METFilter_MC,
                        'suppressNegativeNuisances' :['all'],
                        'FilesPerJob' : 3,
                        'subsamples' : { 'PTV_LT150' : 'HTXS_stage1_1_cat_pTjet30GeV==401 || HTXS_stage1_1_cat_pTjet30GeV==402',
                                         'PTV_GT150' : 'HTXS_stage1_1_cat_pTjet30GeV==403 || HTXS_stage1_1_cat_pTjet30GeV==404 || HTXS_stage1_1_cat_pTjet30GeV==405',
                                         'FWDH'      : 'HTXS_stage1_1_cat_pTjet30GeV==400'
                                       }
                    }

samples['ggZH_hww'] = {  'name': nanoGetSampleFiles(mcDirectory,'GluGluZH_HToWWTo2L2Nu_M125'),
                         'weight' : XSWeight+'*'+SFweight+'*'+PromptGenLepMatch+'*'+METFilter_MC,
                         'suppressNegativeNuisances' :['all'],
                         'FilesPerJob' : 3,
                        'subsamples' : { 'PTV_LT150' : 'HTXS_stage1_1_cat_pTjet30GeV==501 || HTXS_stage1_1_cat_pTjet30GeV==502',
                                         'PTV_GT150' : 'HTXS_stage1_1_cat_pTjet30GeV==503 || HTXS_stage1_1_cat_pTjet30GeV==504 || HTXS_stage1_1_cat_pTjet30GeV==505',
                                         'FWDH'      : 'HTXS_stage1_1_cat_pTjet30GeV==500'
                                       }
                     }


############ WH H->WW ############

samples['WH_hww']  = {  'name'   :   nanoGetSampleFiles(mcDirectory,'HWplusJ_HToWW_M125')
                                   + nanoGetSampleFiles(mcDirectory,'HWminusJ_HToWW_M125'),
                        'weight' : XSWeight+'*'+SFweight+'*'+PromptGenLepMatch+'*'+METFilter_MC ,
                     }

############ ttH ############

#samples['ttH_hww']  = {  'name'   :   getSampleFiles(directory,'ttHToNonbb_M125',False,'nanoLatino_'),
#                         'weight' : XSWeight+'*'+SFweight+'*'+GenLepMatch+'*'+METFilter_MC ,
#                     }

############ bbH ############
#FIXME Missing samples


############ H->TauTau ############
'''
splitHtt=False
if not splitHtt:

  samples['H_htt'] = {  'name'   :   nanoGetSampleFiles(mcDirectory,'GluGluHToTauTau_M125')
                                   + nanoGetSampleFiles(mcDirectory,'VBFHToTauTau_M125')
                                   + nanoGetSampleFiles(mcDirectory,'HZJ_HToTauTau_M125')
                                   + nanoGetSampleFiles(mcDirectory,'HWplusJ_HToTauTau_M125')
                                   + nanoGetSampleFiles(mcDirectory,'HWminusJ_HToTauTau_M125'),
                         'weight' : XSWeight+'*'+SFweight+'*'+PromptGenLepMatch+'*'+METFilter_MC ,
                         'suppressNegative' :['all'],
                         'suppressNegativeNuisances' :['all'],
                     }
else:
'''  
samples['ggH_htt']  = {  'name'   : nanoGetSampleFiles(mcDirectory,'GluGluHToTauTau_M125'),
                           'weight' : XSWeight+'*'+SFweight+'*'+PromptGenLepMatch+'*'+METFilter_MC ,
                           'suppressNegative' :['all'],
                           'suppressNegativeNuisances' :['all'],
                        } 

samples['qqH_htt']  = {  'name'   : nanoGetSampleFiles(mcDirectory,'VBFHToTauTau_M125'),
                           'weight' : XSWeight+'*'+SFweight+'*'+PromptGenLepMatch+'*'+METFilter_MC ,
                           'suppressNegative' :['all'],
                           'suppressNegativeNuisances' :['all'],
                        }

samples['ZH_htt']  = {  'name'   : nanoGetSampleFiles(mcDirectory,'HZJ_HToTauTau_M125'),
                           'weight' : XSWeight+'*'+SFweight+'*'+PromptGenLepMatch+'*'+METFilter_MC ,
                           'suppressNegative' :['all'],
                           'suppressNegativeNuisances' :['all'],
                        }

samples['WH_htt']  = {  'name'   :  nanoGetSampleFiles(mcDirectory,'HWplusJ_HToTauTau_M125')
                                    + nanoGetSampleFiles(mcDirectory,'HWminusJ_HToTauTau_M125'),
                           'weight' : XSWeight+'*'+SFweight+'*'+PromptGenLepMatch+'*'+METFilter_MC ,
                           'suppressNegative' :['all'],
                           'suppressNegativeNuisances' :['all'],
                        }


###########################################
################## FAKE ###################
###########################################



#samples['Fakes']  = {  'name'   :   getSampleFiles(directory,'WJetsToLNu-LO',False,'nanoLatino_')
#                                  + getSampleFiles(directory,'TTToSemiLeptonic',False,'nanoLatino_'),
#                       'weight' : XSWeight+'*'+SFweight+'*'+METFilter_MC,
#                       'FilesPerJob': 3,
#                    }
#
#
#samples['Fakes']  = {   'name': [ ] ,
#                       'weight' : fakeW+'*'+METFilter_DATA+'*((Lepton_pdgId[0]*Lepton_pdgId[1]==11*13) || (Lepton_pdgId[0]*Lepton_pdgId[1]==11*11) || (Lepton_pdgId[0]*Lepton_pdgId[1]==13*13))',              #   weight/cut 
#                       'weights' : [ ] ,
#                       'isData': ['all'],
#                       'FilesPerJob' : 6 ,
#                     }
#
#
#for Run in DataRun :
#  directory = treeBaseDir+'Run2016_102X_nAODv4_Full2016v5/DATAl1loose2016v5__l2loose__fakeW/'
#  for DataSet in DataSets :
#    FileTarget = getSampleFiles(directory,DataSet+'_'+Run[1],True,'nanoLatino_')
#    for iFile in FileTarget:
#      samples['Fakes']['name'].append(iFile)
#      samples['Fakes']['weights'].append(DataTrig[DataSet])

###########################################
################## DATA ###################
###########################################


samples['DATA'] = {
  'name': [],
  'weight': METFilter_DATA+'*'+LepWPCut,
  'weights': [],
  'isData': ['all'],
  'FilesPerJob': 120
}

for _, sd in DataRun:
  for pd in DataSets:
    files = nanoGetSampleFiles(dataDirectory, pd + '_' + sd)
    samples['DATA']['name'].extend(files)
    samples['DATA']['weights'].extend([DataTrig[pd]] * len(files))


'''
samples['DATA']  = {   'name': [ ] ,
                       'weight' : METFilter_DATA+'*'+LepWPCut,
                       'weights' : [ ],
                       'isData': ['all'],
                       'FilesPerJob' : 10 ,
                  }

for Run in DataRun :
  directory = treeBaseDir+'/Run2016_102X_nAODv5_Full2016v6/DATAl1loose2016v6__l2loose__l2tightOR2016v6/'
  for DataSet in DataSets :
    tmpname = Run[1].replace('v1','v3') if ('Run2016E' in Run[1] and DataSet is 'MuonEG') else Run[1]
    FileTarget = getSampleFiles(directory,DataSet+'_'+tmpname,True,'nanoLatino_')
    for iFile in FileTarget:
      samples['DATA']['name'].append(iFile)
      samples['DATA']['weights'].append(DataTrig[DataSet])
'''
