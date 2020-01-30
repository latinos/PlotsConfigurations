import os
import subprocess
import string
from LatinoAnalysis.Tools.commonTools import *

from LatinoAnalysis.Tools.commonTools import getSampleFiles, getBaseW, addSampleWeight

def nanoGetSampleFiles(inputDir, sample):
    try:
        if _samples_noload:
            return []
    except NameError:
        pass

    return getSampleFiles(inputDir, sample, True, 'nanoLatino_')

samples={}

skim=''
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

directory = treeBaseDir+'Fall2017_102X_nAODv4_Full2017v5/MCl1loose2017v5__MCCorr2017v5__l2loose__l2tightOR2017v5/'+skim

def makeMCDirectory(var=''):
    if var:
        #return os.path.join(treeBaseDir, mcProduction, mcSteps.format(var='__' + var))
        #return '/afs/cern.ch/user/d/ddicroce/public/Fall17/l2tightOR__{var}'.format(var=var)
        return '/afs/cern.ch/user/s/shoh/public/latino_STXS/WH2l/'+var+'/wwSel'
    else:
        #return os.path.join(treeBaseDir, mcProduction, mcSteps.format(var=''))
        return '/afs/cern.ch/user/d/ddicroce/public/Fall17/l2tightOR'

#mcDirectory   = makeMCDirectory()
mcStxs        = makeMCDirectory('2017')

################################################
############ NUMBER OF LEPTONS #################
################################################

Nlep='2'
#Nlep='3'
#Nlep='4'

################################################
############### Lepton WP ######################
################################################


#eleWP='mvaFall17V1Iso_WP90'
#eleWP='mvaFall17V2Iso_WP90'
eleWP='mvaFall17V1Iso_WP90_SS'
muWP='cut_Tight_HWWW'


LepWPCut        = 'LepCut'+Nlep+'l__ele_'+eleWP+'__mu_'+muWP
LepWPweight     = 'LepSF'+Nlep+'l__ele_'+eleWP+'__mu_'+muWP


################################################
############ BASIC MC WEIGHTS ##################
################################################

XSWeight      = 'XSWeight'
SFweight      = 'SFweight'+Nlep+'l*'+LepWPweight+'*'+LepWPCut+'*PrefireWeight'
GenLepMatch   = 'GenLepMatch'+Nlep+'l'


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
            ['B','Run2017B-Nano14Dec2018-v1'] ,
            ['C','Run2017C-Nano14Dec2018-v1'] ,
            ['D','Run2017D-Nano14Dec2018-v1'] ,
            ['E','Run2017E-Nano14Dec2018-v1'] ,
            ['F','Run2017F-Nano14Dec2018-v1']
          ]


DataSets = ['MuonEG','DoubleMuon','SingleMuon','DoubleEG','SingleElectron']

DataTrig = {
            'MuonEG'         : 'Trigger_ElMu' ,
            'DoubleMuon'     : '!Trigger_ElMu && Trigger_dblMu' ,
            'SingleMuon'     : '!Trigger_ElMu && !Trigger_dblMu && Trigger_sngMu' ,
            'DoubleEG'       : '!Trigger_ElMu && !Trigger_dblMu && !Trigger_sngMu && Trigger_dblEl' ,
            'SingleElectron' : '!Trigger_ElMu && !Trigger_dblMu && !Trigger_sngMu && !Trigger_dblEl && Trigger_sngEl' ,
           }


###########################################
#############  BACKGROUNDS  ###############
###########################################

############ DY ############

useDYtt = False
useDYHT = True

ptllDYW_NLO = '(((0.623108 + 0.0722934*gen_ptll - 0.00364918*gen_ptll*gen_ptll + 6.97227e-05*gen_ptll*gen_ptll*gen_ptll - 4.52903e-07*gen_ptll*gen_ptll*gen_ptll*gen_ptll)*(gen_ptll<45)*(gen_ptll>0) + 1*(gen_ptll>=45))*(abs(gen_mll-90)<3) + (abs(gen_mll-90)>3))'
ptllDYW_LO = '((0.632927+0.0456956*gen_ptll-0.00154485*gen_ptll*gen_ptll+2.64397e-05*gen_ptll*gen_ptll*gen_ptll-2.19374e-07*gen_ptll*gen_ptll*gen_ptll*gen_ptll+6.99751e-10*gen_ptll*gen_ptll*gen_ptll*gen_ptll*gen_ptll)*(gen_ptll>0)*(gen_ptll<100)+(1.41713-0.00165342*gen_ptll)*(gen_ptll>=100)*(gen_ptll<300)+1*(gen_ptll>=300))'

if useDYtt:
    files = nanoGetSampleFiles(mcDirectory, 'DYJetsToTT_MuEle_M-50') + \
            nanoGetSampleFiles(mcDirectory, 'DYJetsToLL_M-10to50-LO')

    samples['DY'] = {
        'name': files,
        'weight': XSWeight+'*'+SFweight+'*'+GenLepMatch+'*'+METFilter_MC,
        'FilesPerJob': 2,
        'suppressNegative' :['all'],
        'suppressNegativeNuisances' :['all'],
    }
    addSampleWeight(samples,'DY','DYJetsToTT_MuEle_M-50',ptllDYW_NLO,True,'nanoLatino_')
    addSampleWeight(samples,'DY','DYJetsToLL_M-10to50-LO',ptllDYW_LO,True,'nanoLatino_')

else:
    files = getSampleFiles(mcStxs, 'DYJetsToLL_M-50',True,'nanoLatino_') + \
            getSampleFiles(mcStxs, 'DYJetsToLL_M-10to50-LO',True,'nanoLatino_')

    samples['DY'] = {
        'name': files,
        'weight': XSWeight+'*'+SFweight+'*'+GenLepMatch+'*'+METFilter_MC,
        'FilesPerJob': 2,
        'suppressNegative' :['all'],
        'suppressNegativeNuisances' :['all'],

    }

    # Add DY HT Samples
    if useDYHT :
        samples['DY']['name'] +=     getSampleFiles(mcStxs, 'DYJetsToLL_M-4to50_HT-100to200',True,'nanoLatino_') \
                                   + getSampleFiles(mcStxs, 'DYJetsToLL_M-4to50_HT-200to400',True,'nanoLatino_') \
                                   + getSampleFiles(mcStxs, 'DYJetsToLL_M-4to50_HT-400to600',True,'nanoLatino_') \
                                   + getSampleFiles(mcStxs, 'DYJetsToLL_M-4to50_HT-600toInf',True,'nanoLatino_') \
                                   + getSampleFiles(mcStxs, 'DYJetsToLL_M-50_HT-100to200',True,'nanoLatino_') \
                                   + getSampleFiles(mcStxs, 'DYJetsToLL_M-50_HT-200to400',True,'nanoLatino_') \
                                   + getSampleFiles(mcStxs, 'DYJetsToLL_M-50_HT-400to600_ext1',True,'nanoLatino_') \
                                   + getSampleFiles(mcStxs, 'DYJetsToLL_M-50_HT-600to800',True,'nanoLatino_') \
                                   + getSampleFiles(mcStxs, 'DYJetsToLL_M-50_HT-800to1200',True,'nanoLatino_') \
                                   + getSampleFiles(mcStxs, 'DYJetsToLL_M-50_HT-1200to2500',True,'nanoLatino_') \
                                   + getSampleFiles(mcStxs, 'DYJetsToLL_M-50_HT-2500toInf',True,'nanoLatino_')

    addSampleWeight(samples,'DY','DYJetsToLL_M-50',ptllDYW_NLO)
    addSampleWeight(samples,'DY','DYJetsToLL_M-10to50-LO',ptllDYW_LO)

    if useDYHT :
        # Remove high HT from inclusive samples
        addSampleWeight(samples,'DY','DYJetsToLL_M-50'       , 'LHE_HT<100.0')
        addSampleWeight(samples,'DY','DYJetsToLL_M-10to50-LO', 'LHE_HT<100.0')
        # pt_ll weight
        addSampleWeight(samples,'DY','DYJetsToLL_M-4to50_HT-100to200'  ,ptllDYW_LO)
        addSampleWeight(samples,'DY','DYJetsToLL_M-4to50_HT-200to400'  ,ptllDYW_LO)
        addSampleWeight(samples,'DY','DYJetsToLL_M-4to50_HT-400to600'  ,ptllDYW_LO)
        addSampleWeight(samples,'DY','DYJetsToLL_M-4to50_HT-600toInf'  ,ptllDYW_LO)
        addSampleWeight(samples,'DY','DYJetsToLL_M-50_HT-100to200'     ,ptllDYW_LO)
        addSampleWeight(samples,'DY','DYJetsToLL_M-50_HT-200to400'     ,ptllDYW_LO)
        addSampleWeight(samples,'DY','DYJetsToLL_M-50_HT-400to600_ext1',ptllDYW_LO)
        addSampleWeight(samples,'DY','DYJetsToLL_M-50_HT-600to800'     ,ptllDYW_LO)
        addSampleWeight(samples,'DY','DYJetsToLL_M-50_HT-800to1200'    ,ptllDYW_LO)
        addSampleWeight(samples,'DY','DYJetsToLL_M-50_HT-1200to2500'   ,ptllDYW_LO)
        addSampleWeight(samples,'DY','DYJetsToLL_M-50_HT-2500toInf'    ,ptllDYW_LO)


#((0.623108 + 0.0722934*gen_ptll - 0.00364918*gen_ptll*gen_ptll + 6.97227e-05*gen_ptll*gen_ptll*gen_ptll - 4.52903e-07*gen_ptll*gen_ptll*gen_ptll*gen_ptll)*(gen_ptll<45)*(gen_ptll>0) + 1*(gen_ptll>=45))'
#(0.632927+0.0456956*gen_ptll-0.00154485*gen_ptll*gen_ptll+2.64397e-05*gen_ptll*gen_ptll*gen_ptll-2.19374e-07*gen_ptll*gen_ptll*gen_ptll*gen_ptll+6.99751e-10*gen_ptll*gen_ptll*gen_ptll*gen_ptll*gen_ptll)*(gen_ptll>0)*(gen_ptll<100)+(1.41713-0.00165342*gen_ptll)*(gen_ptll>=100)*(gen_ptll<300)+1*(gen_ptll>=300))'
#
# {    'name'   :   getSampleFiles(directory,'DYJetsToLL_M-50',True,'nanoLatino_')
#                 + getSampleFiles(directory,'DYJetsToLL_M-10to50-LO',True,'nanoLatino_'),
#                  + getSampleFiles(directory,'DYJetsToTT_MuEle_M-50',True,'nanoLatino_'),
#      'weight' : XSWeight+'*'+SFweight+'*'+GenLepMatch+'*'+METFilter_MC ,
#      'FilesPerJob' : 5,
#  }
#
#(samples,'DY','DYJetsToLL_M-50',ptllDYW_NLO)
#t(samples,'DY','DYJetsToTT_MuEle_M-50',ptllDYW_NLO)
#(samples,'DY','DYJetsToLL_M-10to50-LO',ptllDYW_LO)
#
#

############ Top ############

Top_pTrw = '(TMath::Sqrt( TMath::Exp(0.0615-0.0005*topGenPt) * TMath::Exp(0.0615-0.0005*antitopGenPt) ) )'

samples['top'] = {    'name'   :   getSampleFiles(mcStxs,'TTTo2L2Nu',True,'nanoLatino_')
                                 + getSampleFiles(mcStxs,'ST_s-channel',True,'nanoLatino_')
                                 + getSampleFiles(mcStxs,'ST_t-channel_antitop',True,'nanoLatino_')
                                 + getSampleFiles(mcStxs,'ST_t-channel_top',True,'nanoLatino_')
                                 + getSampleFiles(mcStxs,'ST_tW_antitop',True,'nanoLatino_')
                                 + getSampleFiles(mcStxs,'ST_tW_top',True,'nanoLatino_') ,
                     'weight' : XSWeight+'*'+SFweight+'*'+GenLepMatch+'*'+METFilter_MC ,
                     'FilesPerJob' : 1,
                 }

addSampleWeight(samples,'top','TTTo2L2Nu',Top_pTrw)

############ WW ############

#FIXME Add nllW weight to WW
samples['WW'] = {    'name'   :   getSampleFiles(mcStxs,'WWTo2L2Nu',True,'nanoLatino_') ,
                     'weight' : XSWeight+'*'+SFweight+'*'+GenLepMatch+'*'+METFilter_MC+'*nllW' ,
                 }


samples['WWewk'] = {   'name'  : getSampleFiles(mcStxs, 'WpWmJJ_EWK',True,'nanoLatino_'),
                       'weight': XSWeight+'*'+SFweight+'*'+GenLepMatch+'*'+METFilter_MC+ '*(Sum$(abs(GenPart_pdgId)==6)==0)' #filter tops
                   }


samples['ggWW']  = {  'name'   :   getSampleFiles(mcStxs,'GluGluToWWToENEN',True,'nanoLatino_')
                                 + getSampleFiles(mcStxs,'GluGluToWWToENMN',True,'nanoLatino_')
                                 + getSampleFiles(mcStxs,'GluGluToWWToENTN',True,'nanoLatino_')
                                 + getSampleFiles(mcStxs,'GluGluToWWToMNEN',True,'nanoLatino_')
                                 + getSampleFiles(mcStxs,'GluGluToWWToMNMN',True,'nanoLatino_')
                                 + getSampleFiles(mcStxs,'GluGluToWWToMNTN',True,'nanoLatino_')
                                 + getSampleFiles(mcStxs,'GluGluToWWToTNEN',True,'nanoLatino_')
                                 + getSampleFiles(mcStxs,'GluGluToWWToTNMN',True,'nanoLatino_')
                                 + getSampleFiles(mcStxs,'GluGluToWWToTNTN',True,'nanoLatino_'),
                      'weight' : XSWeight+'*'+SFweight+'*'+GenLepMatch+'*'+METFilter_MC ,
                   }

############ Vg ############

samples['Vg']  =  {     'name'   :   getSampleFiles(mcStxs,'Wg_MADGRAPHMLM',True,'nanoLatino_')
                                   + getSampleFiles(mcStxs,'ZGToLLG',True,'nanoLatino_'),
                        'weight' : XSWeight+'*'+SFweight+'*'+METFilter_MC + '* !(Gen_ZGstar_mass > 0 && Gen_ZGstar_MomId == 22 )',
                        'FilesPerJob' : 5 ,
                  }
addSampleWeight(samples, 'Vg', 'ZGToLLG', '(Sum$(GenPart_pdgId == 22 && TMath::Odd(GenPart_statusFlags) && GenPart_pt < 20.) == 0)*(55.5 * 1.06 / 131.3)')

######## VgS ########
#FIXME: k-factor?
samples['VgS']  = {    'name':   getSampleFiles(mcStxs,'Wg_MADGRAPHMLM',True,'nanoLatino_')
                               + getSampleFiles(mcStxs,'ZGToLLG',True,'nanoLatino_')
                               + getSampleFiles(mcStxs,'WZTo3LNu_mllmin01',True,'nanoLatino_') ,
                       'weight' : XSWeight+'*'+SFweight+'*'+GenLepMatch+'*'+METFilter_MC ,
                       'FilesPerJob' : 15 ,
                  }
addSampleWeight(samples,'VgS','Wg_MADGRAPHMLM',    '(Gen_ZGstar_mass >0 && Gen_ZGstar_mass < 0.1)')
addSampleWeight(samples,'VgS','ZGToLLG',                '(Gen_ZGstar_mass >0)*(Sum$(GenPart_pdgId == 22 && TMath::Odd(GenPart_statusFlags) && GenPart_pt < 20.) == 0)')
addSampleWeight(samples,'VgS','WZTo3LNu_mllmin01', '(Gen_ZGstar_mass>=0.1)')

############ VZ ############

#FIXME Add normalization k-factor
samples['VZ']  = {  'name'   :   getSampleFiles(mcStxs,'ZZTo2L2Nu',True,'nanoLatino_')
                               + getSampleFiles(mcStxs,'ZZTo2L2Q',True,'nanoLatino_')
                               + getSampleFiles(mcStxs,'ZZTo4L',True,'nanoLatino_')
                               + getSampleFiles(mcStxs,'WZTo2L2Q',True,'nanoLatino_'),
                    'weight' : XSWeight+'*'+SFweight+'*'+GenLepMatch+'*'+METFilter_MC+ '*1.11',
                    'FilesPerJob' : 2,
                 }


############ VVV ############

samples['VVV']  = {  'name'   :   getSampleFiles(mcStxs,'ZZZ',True,'nanoLatino_')
                                + getSampleFiles(mcStxs,'WZZ',True,'nanoLatino_')
                                + getSampleFiles(mcStxs,'WWZ',True,'nanoLatino_')
                                + getSampleFiles(mcStxs,'WWW',True,'nanoLatino_'),
                                #+ getSampleFiles(mcStxs,'WWG',True,'nanoLatino_'), #should this be included? or is it already taken into account in the WW sample?
                    'weight' : XSWeight+'*'+SFweight+'*'+GenLepMatch+'*'+METFilter_MC ,
                  }



##########################################
################ SIGNALS #################
##########################################

############ ggH H->WW ############
#FIXME Add reweighting to MiNLO NNLOPS or use NNLOPS sample when available
samples['ggH_hww']  = {  'name'   :   getSampleFiles(mcStxs,'GluGluHToWWTo2L2NuPowheg_M125',True,'nanoLatino_'),
                        'weight' : XSWeight+'*'+SFweight+'*'+GenLepMatch+'*'+METFilter_MC ,
                     }

############ VBF H->WW ############
samples['qqH_hww']  = {  'name'   :   getSampleFiles(mcStxs,'VBFHToWWTo2L2NuPowheg_M125',True,'nanoLatino_'),
                        'weight' : XSWeight+'*'+SFweight+'*'+GenLepMatch+'*'+METFilter_MC ,
                     }

############ ZH H->WW ############

samples['ZH_hww']  = {  'name'   :   getSampleFiles(mcStxs,'HZJ_HToWWTo2L2Nu_M125',True,'nanoLatino_'), #FIXME replace with 125 GeV sample when available
                        'weight' : XSWeight+'*'+SFweight+'*'+GenLepMatch+'*'+METFilter_MC ,
                     }

samples['ggZH_hww']  = {  'name'   :   getSampleFiles(mcStxs,'GluGluZH_HToWW_M125',True,'nanoLatino_'),
                        'weight' : XSWeight+'*'+SFweight+'*'+GenLepMatch+'*'+METFilter_MC ,
                     }

############ WH H->WW ############

#samples['WH_hww']  = {  'name'   :   getSampleFiles(mcStxs,'HWplusJ_HToWW_M125',True,'nanoLatino_')
#                                   + getSampleFiles(mcStxs,'HWminusJ_HToWW_M125',True,'nanoLatino_'),
#                        'weight' : XSWeight+'*'+SFweight+'*'+GenLepMatch+'*'+METFilter_MC ,
#                     }

samples['WH_hww'] = { 'name'   :
                      getSampleFiles(mcStxs,'HWplusJ_HToWW_M125',True,'nanoLatino_')
                      + getSampleFiles(mcStxs,'HWminusJ_HToWW_M125',True,'nanoLatino_'),
                      'weight' : XSWeight+'*'+SFweight+'*'+GenLepMatch+'*'+METFilter_MC,
                      'suppressNegativeNuisances' :['all'],
                      'subsamples' : {
                          'PTV_LT150' : 'HTXS_stage1_1_cat_pTjet30GeV==301 || HTXS_stage1_1_cat_pTjet30GeV==302',
                          'PTV_GT150' : 'HTXS_stage1_1_cat_pTjet30GeV==303 || HTXS_stage1_1_cat_pTjet30GeV==304 || HTXS_stage1_1_cat_pTjet30GeV==305',
                          'FWDH'      : 'HTXS_stage1_1_cat_pTjet30GeV==300'
                      }
                  }

############ ttH ############

samples['ttH_hww']  = {  'name'   :   getSampleFiles(mcStxs,'ttHToNonbb_M125',True,'nanoLatino_'),
                         'weight' : XSWeight+'*'+SFweight+'*'+GenLepMatch+'*'+METFilter_MC ,
                     }

############ bbH ############
#FIXME Missing samples


############ H->TauTau ############

splitHtt=False
if not splitHtt:

  samples['H_htt'] = {  'name'   :   getSampleFiles(mcStxs,'GluGluHToTauTau_M125',True,'nanoLatino_')
                                   + getSampleFiles(mcStxs,'VBFHToTauTau_M125',True,'nanoLatino_')
                                   + getSampleFiles(mcStxs,'HZJ_HToTauTau_M125',True,'nanoLatino_')
                                   + getSampleFiles(mcStxs,'HWplusJ_HToTauTau_M125',True,'nanoLatino_')
                                   + getSampleFiles(mcStxs,'HWminusJ_HToTauTau_M125',True,'nanoLatino_'),
                         'weight' : XSWeight+'*'+SFweight+'*'+GenLepMatch+'*'+METFilter_MC ,
                         'suppressNegative' :['all'],
                         'suppressNegativeNuisances' :['all'],
                     }
else:

  samples['ggH_htt']  = {  'name'   : getSampleFiles(mcStxs,'GluGluHToTauTau_M125',True,'nanoLatino_'),
                           'weight' : XSWeight+'*'+SFweight+'*'+GenLepMatch+'*'+METFilter_MC ,
                           'suppressNegative' :['all'],
                           'suppressNegativeNuisances' :['all'],
                        }

  samples['qqH_htt']  = {  'name'   : getSampleFiles(mcStxs,'VBFHToTauTau_M125',True,'nanoLatino_'),
                           'weight' : XSWeight+'*'+SFweight+'*'+GenLepMatch+'*'+METFilter_MC ,
                           'suppressNegative' :['all'],
                           'suppressNegativeNuisances' :['all'],
                        }

  samples['ZH_htt']  = {  'name'   : getSampleFiles(mcStxs,'HZJ_HToTauTau_M125',True,'nanoLatino_'),
                           'weight' : XSWeight+'*'+SFweight+'*'+GenLepMatch+'*'+METFilter_MC ,
                           'suppressNegative' :['all'],
                           'suppressNegativeNuisances' :['all'],
                        }

  samples['WH_htt']  = {  'name'   :  getSampleFiles(mcStxs,'HWplusJ_HToTauTau_M125',True,'nanoLatino_')
                                    + getSampleFiles(mcStxs,'HWminusJ_HToTauTau_M125',True,'nanoLatino_'),
                           'weight' : XSWeight+'*'+SFweight+'*'+GenLepMatch+'*'+METFilter_MC ,
                           'suppressNegative' :['all'],
                           'suppressNegativeNuisances' :['all'],
                        }


###########################################
################## FAKE ###################
###########################################



#samples['Fakes']  = {  'name'   :   getSampleFiles(mcStxs,'WJetsToLNu-LO',True,'nanoLatino_')
#                                  + getSampleFiles(mcStxs,'TTToSemiLeptonic',True,'nanoLatino_'),
#                       'weight' : XSWeight+'*'+SFweight+'*'+METFilter_MC,
#                       'FilesPerJob': 3,
#                    }
#
'''
samples['Fakes']  = {   'name': [ ] ,
                       'weight' : fakeW+'*'+METFilter_DATA+'*((Lepton_pdgId[0]*Lepton_pdgId[1]==11*13) || (Lepton_pdgId[0]*Lepton_pdgId[1]==11*11) || (Lepton_pdgId[0]*Lepton_pdgId[1]==13*13))',              #   weight/cut
                       'weights' : [ ] ,
                       'isData': ['all'],
                       'FilesPerJob' : 15 ,
                     }
'''
#samples['Fakes_ee']  = {   'name': [ ] ,
#                       'weight' : fakeW+'*'+METFilter_DATA+'*(Lepton_pdgId[0]*Lepton_pdgId[1]==11*11)',              #   weight/cut
#                       'weights' : [ ] ,
#                       'isData': ['all'],
#                       'FilesPerJob' : 15 ,
#                     }

samples['Fakes_mm']  = {   'name': [ ] ,
                       'weight' : fakeW+'*'+METFilter_DATA+'*(Lepton_pdgId[0]*Lepton_pdgId[1]==13*13)',              #   weight/cut
                       'weights' : [ ] ,
                       'isData': ['all'],
                       'FilesPerJob' : 15 ,
                     }


samples['Fakes_em']  = {   'name': [ ] ,
                       'weight' : fakeW+'*'+METFilter_DATA+'*(Lepton_pdgId[0]*Lepton_pdgId[1]==11*13)',              #   weight/cut
                       'weights' : [ ] ,
                       'isData': ['all'],
                       'FilesPerJob' : 15 ,
                     }



for Run in DataRun :
  directory = treeBaseDir+'Run2017_102X_nAODv4_Full2017v5/DATAl1loose2017v5__l2loose__fakeW/'
#  directory = treeBaseDir+'Run2017_102X_nAODv4_Full2017v5/DATAl1loose2017v5__l2loose__fakeW_CutBasedTest/'
  for DataSet in DataSets :
    FileTarget = getSampleFiles(directory,DataSet+'_'+Run[1],True,'nanoLatino_')
    for iFile in FileTarget:
    #  samples['Fakes']['name'].append(iFile)
    #  samples['Fakes']['weights'].append(DataTrig[DataSet])
      samples['Fakes_mm']['name'].append(iFile)
      samples['Fakes_mm']['weights'].append(DataTrig[DataSet])
      samples['Fakes_em']['name'].append(iFile)
      samples['Fakes_em']['weights'].append(DataTrig[DataSet])


###########################################
################## DATA ###################
###########################################

samples['DATA']  = {   'name': [ ] ,
                       'weight' : METFilter_DATA+'*'+LepWPCut,
                       'weights' : [ ],
                       'isData': ['all'],
                       'FilesPerJob' : 20 ,
                  }

for Run in DataRun :
  directory = treeBaseDir+'Run2017_102X_nAODv4_Full2017v5/DATAl1loose2017v5__l2loose__l2tightOR2017v5/'
  for DataSet in DataSets :
    FileTarget = getSampleFiles(directory,DataSet+'_'+Run[1],True,'nanoLatino_')
    for iFile in FileTarget:
      samples['DATA']['name'].append(iFile)
      samples['DATA']['weights'].append(DataTrig[DataSet])
