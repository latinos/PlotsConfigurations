import os
import subprocess
import string
from LatinoAnalysis.Tools.commonTools import *

def nanoGetSampleFiles(inputDir, sample):
    return getSampleFiles(inputDir, sample, True, 'nanoLatino_')

samples={}

# Steps
mcSteps   = 'MCl1loose2016v6__MCCorr2016v6__VBSjjlnuSkim2016v5' 
mcSteps_signal   = 'MCl1loose2018v6__MCCorr2018v6__VBSjjlnuSkim2018v5' 
dataSteps = 'DATAl1loose2016v6__VBSjjlnuSkim2016v5_data'
fakeSteps = 'DATAl1loose2016v6__VBSjjlnuSkim2016v5_data'

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

directory_bkg    = treeBaseDir + 'Summer16_102X_nAODv5_Full2016v6/' + mcSteps
directory_signal = treeBaseDir + 'Autumn18_102X_nAODv6_Full2018v6/' + mcSteps_signal
directory_fakes  = treeBaseDir + 'Run2016_102X_nAODv5_Full2016v6/'  + fakeSteps
directory_data   = treeBaseDir + 'Run2016_102X_nAODv5_Full2016v6/'  + dataSteps

################################################
############ NUMBER OF LEPTONS #################
################################################

Nlep='1'
#Nlep='3'
#Nlep='4'

################################################
############### Lepton WP ######################
################################################
  
eleWP='mva_90p_Iso2016'
muWP='cut_Tight80x'


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
SFweight      = SFweight1l+'*'+LepWPWeight_1l+'*'+LepWPCut_1l+'* PrefireWeight * btagSF * PUJetIdSF'

SFweight_signal      = SFweight1l+'* btagSF' 
     
GenLepMatch   = 'Lepton_genmatched[0]'


####
# NVTX reweighting
#SFweight += '*nvtx_reweighting'

################################################
############   MET  FILTERS  ###################
################################################

METFilter_MC   = 'METFilter_MC'
METFilter_DATA = 'METFilter_DATA'

################################################
############ DATA DECLARATION ##################
################################################

DataRun = [
    ['B','Run2016B-Nano1June2019_ver2-v1'],
    ['C','Run2016C-Nano1June2019-v1'],
    ['D','Run2016D-Nano1June2019-v1'],
    ['E','Run2016E-Nano1June2019-v1'],
    ['F','Run2016F-Nano1June2019-v1'],
    ['G','Run2016G-Nano1June2019-v1'],
    ['H','Run2016H-Nano1June2019-v1']
]

DataSets = ['SingleMuon','SingleElectron']


DataTrig = {
    'SingleMuon'     : 'Trigger_sngMu' ,
    'SingleElectron' : '!Trigger_sngMu && Trigger_sngEl',
}


###########################################
#############  BACKGROUNDS  ###############
###########################################

############ DY ############

ptllDYW_NLO = '(0.876979+gen_ptll*(4.11598e-03)-(2.35520e-05)*gen_ptll*gen_ptll)*(1.10211 * (0.958512 - 0.131835*TMath::Erf((gen_ptll-14.1972)/10.1525)))*(gen_ptll<140)+0.891188*(gen_ptll>=140)'
ptllDYW_LO  = '(8.61313e-01+gen_ptll*4.46807e-03-1.52324e-05*gen_ptll*gen_ptll)*(1.08683 * (0.95 - 0.0657370*TMath::Erf((gen_ptll-11.)/5.51582)))*(gen_ptll<140)+1.141996*(gen_ptll>=140)'

#DY_photon_filter = '(Sum$(GenPart_pdgId == 22 && TMath::Odd(GenPart_statusFlags) && GenPart_pt > 20.) == 0)'

samples['DY'] = {    'name'   :   
     nanoGetSampleFiles(directory_bkg,'DYJetsToLL_M-5to50_HT-70to100')
  +  nanoGetSampleFiles(directory_bkg,'DYJetsToLL_M-5to50_HT-100to200_ext1')
  + nanoGetSampleFiles(directory_bkg,'DYJetsToLL_M-5to50_HT-200to400_ext1')
  + nanoGetSampleFiles(directory_bkg,'DYJetsToLL_M-5to50_HT-400to600_ext1')
  + nanoGetSampleFiles(directory_bkg,'DYJetsToLL_M-5to50_HT-600toinf_ext1')
  + nanoGetSampleFiles(directory_bkg,'DYJetsToLL_M-10to50')
  + nanoGetSampleFiles(directory_bkg,'DYJetsToLL_M-50')
  + nanoGetSampleFiles(directory_bkg,'DYJetsToLL_M-50_HT-70to100') 
  + nanoGetSampleFiles(directory_bkg,'DYJetsToLL_M-50_HT-100to200_ext1')
  + nanoGetSampleFiles(directory_bkg,'DYJetsToLL_M-50_HT-200to400_ext1')
  + nanoGetSampleFiles(directory_bkg,'DYJetsToLL_M-50_HT-400to600_ext1')
  + nanoGetSampleFiles(directory_bkg,'DYJetsToLL_M-50_HT-600to800')
  + nanoGetSampleFiles(directory_bkg,'DYJetsToLL_M-50_HT-800to1200')
  + nanoGetSampleFiles(directory_bkg,'DYJetsToLL_M-50_HT-1200to2500')
  + nanoGetSampleFiles(directory_bkg,'DYJetsToLL_M-50_HT-2500toinf')
                                ,
        'weight' : XSWeight+'*'+SFweight+'*'+METFilter_MC+'*'+GenLepMatch , # ewknloW ADD ME, admin
        # 'weight' : XSWeight+'*'+SFweight+'*'+METFilter_MC+'*'+GenLepMatch + '*' + DY_photon_filter, # ewknloW ADD ME, admin
        'FilesPerJob' : 4,
                  }

# addSampleWeight(samples,'DY','DYJetsToLL_M-5to50_HT-70to100', ptllDYW_LO  )
# addSampleWeight(samples,'DY','DYJetsToLL_M-5to50_HT-100to200_ext1', ptllDYW_LO  )
# addSampleWeight(samples,'DY','DYJetsToLL_M-5to50_HT-200to400_ext1', ptllDYW_LO  )
# addSampleWeight(samples,'DY','DYJetsToLL_M-5to50_HT-400to600_ext1', ptllDYW_LO  )
# addSampleWeight(samples,'DY','DYJetsToLL_M-5to50_HT-600toinf_ext1', ptllDYW_LO  )
# addSampleWeight(samples,'DY','DYJetsToLL_M-10to50',               ptllDYW_NLO  +'*(LHE_HT<70)') # ewknloW not yet processed
# addSampleWeight(samples,'DY','DYJetsToLL_M-50',                   ptllDYW_NLO +'*(LHE_HT<70)')
# addSampleWeight(samples,'DY','DYJetsToLL_M-50_HT-70to100',         ptllDYW_LO  )
# addSampleWeight(samples,'DY','DYJetsToLL_M-50_HT-100to200_ext1',         ptllDYW_LO  )
# addSampleWeight(samples,'DY','DYJetsToLL_M-50_HT-200to400_ext1',    ptllDYW_LO  )
# addSampleWeight(samples,'DY','DYJetsToLL_M-50_HT-400to600_ext1',    ptllDYW_LO  )
# addSampleWeight(samples,'DY','DYJetsToLL_M-50_HT-600to800',         ptllDYW_LO  )
# addSampleWeight(samples,'DY','DYJetsToLL_M-50_HT-800to1200',        ptllDYW_LO  )
# addSampleWeight(samples,'DY','DYJetsToLL_M-50_HT-1200to2500',       ptllDYW_LO  )
# addSampleWeight(samples,'DY','DYJetsToLL_M-50_HT-2500toinf',        ptllDYW_LO  )



############ Top ############
#Top_pTrw = '(topGenPt * antitopGenPt > 0.) * (TMath::Sqrt(TMath::Exp(0.0615 - 0.0005 * topGenPt) * TMath::Exp(0.0615 - 0.0005 * antitopGenPt))) + (topGenPt * antitopGenPt <= 0.)'

samples['top'] = {    
            'name'   :  
                        nanoGetSampleFiles(directory_bkg,'ST_s-channel') 
                      + nanoGetSampleFiles(directory_bkg,'ST_t-channel_antitop') 
                      + nanoGetSampleFiles(directory_bkg,'ST_t-channel_top') 
                      + nanoGetSampleFiles(directory_bkg,'ST_tW_antitop') 
                      + nanoGetSampleFiles(directory_bkg,'ST_tW_top') 
                      + nanoGetSampleFiles(directory_bkg,'TTToSemiLeptonic') 
                      + nanoGetSampleFiles(directory_bkg,'TTTo2L2Nu') 
                      #+  nanoGetSampleFiles(directory_bkg,'TTWjetsToLNu_ext1')  ########## ADD ME BACK
                      + nanoGetSampleFiles(directory_bkg,'TTZjets'),  
            'weight' :  XSWeight+'*'+SFweight+'*'+METFilter_MC+'*'+GenLepMatch,
            'FilesPerJob' : 3,
                 }
# ACHTUNG! NO topGenPt in TTZjets!                 
# addSampleWeight(samples,'top','ST_s-channel', Top_pTrw )
# addSampleWeight(samples,'top','ST_t-channel_antitop', Top_pTrw )
# addSampleWeight(samples,'top','ST_t-channel_top', Top_pTrw )
# addSampleWeight(samples,'top','ST_tW_antitop', Top_pTrw )
# addSampleWeight(samples,'top','ST_tW_top', Top_pTrw )
# addSampleWeight(samples,'top','TTToSemiLeptonic', Top_pTrw )
# addSampleWeight(samples,'top','TTTo2L2Nu', Top_pTrw )


samples['Wjets'] = { 'name' :   
          # nanoGetSampleFiles(directory_bkg, 'WJetsToLNu-LO')
          nanoGetSampleFiles(directory_bkg, 'WJetsToLNu-LO_ext2')
          + nanoGetSampleFiles(directory_bkg, 'WJetsToLNu_HT70_100')
          + nanoGetSampleFiles(directory_bkg, 'WJetsToLNu_HT100_200_ext2')
          + nanoGetSampleFiles(directory_bkg, 'WJetsToLNu_HT200_400_ext2')
          + nanoGetSampleFiles(directory_bkg, 'WJetsToLNu_HT400_600_ext1')
          + nanoGetSampleFiles(directory_bkg, 'WJetsToLNu_HT600_800_ext1')
          + nanoGetSampleFiles(directory_bkg, 'WJetsToLNu_HT800_1200_ext1')
          + nanoGetSampleFiles(directory_bkg, 'WJetsToLNu_HT1200_2500_ext1')
          + nanoGetSampleFiles(directory_bkg, 'WJetsToLNu_HT2500_inf_ext1')
        ,
        'weight': XSWeight+'*'+SFweight+'*'+METFilter_MC+'*'+GenLepMatch,
        'FilesPerJob' : 2,
        'subsamples': {
          "boost1" : "(VBS_category==0) && (deltaeta_vbs < 5)",
          "boost2" : "(VBS_category==0) && (deltaeta_vbs >= 5)",
          "deta1_jpt1": "(VBS_category==1) && (deltaeta_vbs < 5 ) && vbs_1_pt < 75",
          "deta2_jpt1": "(VBS_category==1) && (deltaeta_vbs >= 5) && vbs_1_pt < 75",
          
          "deta1_jpt2": "(VBS_category==1) && (deltaeta_vbs < 4 ) &&  ( vbs_1_pt >= 75 && vbs_1_pt <150)",
          "deta2_jpt2": "(VBS_category==1) && (deltaeta_vbs >= 4) &&  ( vbs_1_pt >= 75 && vbs_1_pt <150)",

          "jpt3": "(VBS_category==1) && ( vbs_1_pt >= 150)",
                    
        }
       }
#
# Fix Wjets binned + LO 
addSampleWeight(samples,'Wjets', 'WJetsToLNu-LO_ext2', '(LHE_HT < 70)') # to be add ewknloW here!


## FIND AND ADD THESE! FIXME
samples['VV']  = { 'name' :  
               nanoGetSampleFiles(directory_signal,'WmTo2J_ZTo2L_QCD', ) +
               nanoGetSampleFiles(directory_signal,'WmToLNu_WmTo2J_QCD') +
               nanoGetSampleFiles(directory_signal,'WmToLNu_ZTo2J_QCD',) +
               nanoGetSampleFiles(directory_signal,'WpTo2J_WmToLNu_QCD') +
               nanoGetSampleFiles(directory_signal,'WpTo2J_ZTo2L_QCD', ) +
               nanoGetSampleFiles(directory_signal,'WpToLNu_WmTo2J_QCD') +
               nanoGetSampleFiles(directory_signal,'WpToLNu_WpTo2J_QCD') +
               nanoGetSampleFiles(directory_signal,'WpToLNu_ZTo2J_QCD',) ,
              #  nanoGetSampleFiles(directory_bkg,'ZTo2L_ZTo2J_QCD',  ) , #admin, ADD ME
        'weight': XSWeight+'*'+SFweight_signal+'*'+METFilter_MC+'*'+GenLepMatch,
        'FilesPerJob' : 6,
}

############ VVV ############

samples['VVV']  = {  'name'   :   nanoGetSampleFiles(directory_bkg,'ZZZ')
                                + nanoGetSampleFiles(directory_bkg,'WZZ')
                                + nanoGetSampleFiles(directory_bkg,'WWZ')
                                + nanoGetSampleFiles(directory_bkg,'WWW'),
                                #+ nanoGetSampleFiles(directory,'WWG'), #should this be included? or is it already taken into account in the WW sample?
                    'weight' : XSWeight+'*'+SFweight+'*'+METFilter_MC+'*'+GenLepMatch  ,
                    'FilesPerJob' : 6,
                  }

############## VBF-V ########


###
samples['VBF-V']  = {  'name'   : nanoGetSampleFiles(directory_signal,'WLNuJJ_EWK')
                                  + nanoGetSampleFiles(directory_signal,'EWKZ2Jets_ZToLL_M-50'),
                    'weight' : XSWeight+'*'+SFweight_signal+'*'+METFilter_MC+'*'+GenLepMatch ,
                    'FilesPerJob' : 6
                  }


##########################################
################ SIGNALS #################
##########################################

# NO Lepton Is/ido scale factors

#
samples['VBS']  = { 'name' :  
               nanoGetSampleFiles(directory_signal,'WmTo2J_ZTo2L') +
               nanoGetSampleFiles(directory_signal,'WmToLNu_WmTo2J') +
               nanoGetSampleFiles(directory_signal,'WmToLNu_ZTo2J') +
               nanoGetSampleFiles(directory_signal,'WpTo2J_WmToLNu') +
               nanoGetSampleFiles(directory_signal,'WpTo2J_ZTo2L') +
               nanoGetSampleFiles(directory_signal,'WpToLNu_WmTo2J') +
               nanoGetSampleFiles(directory_signal,'WpToLNu_WpTo2J') +
               nanoGetSampleFiles(directory_signal,'WpToLNu_ZTo2J'),
               #nanoGetSampleFiles(directory_signal,'ZTo2L_ZTo2J' ),
       'weight': XSWeight+'*'+SFweight_signal+'*'+METFilter_MC+'*'+GenLepMatch,
       'FilesPerJob' : 5,
}


fakeW = 'fakeW_ele_'+eleWP+'_mu_'+muWP + '_mu10_ele35'
# from alias
#fakeW = 'fake_weight_corrected'

#### Fakes
samples['Fake'] = {
  'name': [],
  'weight': METFilter_DATA+'*'+fakeW,
  'weights': [],
  'isData': ['all'],
  'FilesPerJob': 30
}

for _, sd in DataRun:
  for pd in DataSets:
    files = nanoGetSampleFiles(directory_fakes, pd + '_' + sd)
    samples['Fake']['name'].extend(files)
    samples['Fake']['weights'].extend([DataTrig[pd]] * len(files))


##########################################
################# DATA ###################
##########################################

samples['DATA']  = {   'name': [ ] ,
                       'weight' : METFilter_DATA+'*'+LepWPCut,
                       'weights' : [ ],
                       'isData': ['all'],
                       'FilesPerJob' : 30,
                  }

for Run in DataRun :
        for DataSet in DataSets :
                FileTarget = nanoGetSampleFiles(directory_data,DataSet+'_'+Run[1])
                for iFile in FileTarget:
                        samples['DATA']['name'].append(iFile)
                        samples['DATA']['weights'].append(DataTrig[DataSet])

