import os
import subprocess
import string
from LatinoAnalysis.Tools.commonTools import *

def nanoGetSampleFiles(inputDir, sample):
    return getSampleFiles(inputDir, sample, True, 'nanoLatino_')

def CombineBaseW(samples, proc, samplelist):
  newbaseW = getBaseWnAOD(directory_bkg, 'Fall2017_102X_nAODv7_Full2017v7', samplelist)
  for s in samplelist:
    addSampleWeight(samples, proc, s, newbaseW+'/baseW')

samples={}

# Steps
mcSteps   = 'MCl1loose2017v7__MCCorr2017v7__MCCombJJLNu2017' 
dataSteps = 'DATAl1loose2017v7__DATACombJJLNu2017'
fakeSteps = 'DATAl1loose2017v7__DATACombJJLNu2017'

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
  treeBaseDir_SMP = '/eos/cms/store/group/phys_smp/VJets_NLO_VBSanalyses/'

directory_bkg    = treeBaseDir_SMP + 'Fall2017_102X_nAODv7_Full2017v7_skim/' + mcSteps
directory_mc    = treeBaseDir_SMP +  'Fall2017_102X_nAODv7_Full2017v7_skim/' + mcSteps
directory_signal = treeBaseDir_SMP + 'Fall2017_102X_nAODv7_Full2017v7_skim/' + mcSteps
directory_fakes  = treeBaseDir_SMP + 'Run2017_102X_nAODv7_Full2017v7_skim/'  + fakeSteps
directory_data   = treeBaseDir_SMP + 'Run2017_102X_nAODv7_Full2017v7_skim/'  + dataSteps

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

XSWeight   = 'XSWeight'

SFweight1l = [ 'puWeight_noeras[0]', 'SingleLepton_trigEff_corrected[0]',
              'Lepton_RecoSF[0]','EMTFbug_veto', LepWPWeight_1l, LepWPCut_1l,
              'PrefireWeight', 'PUJetIdSF',
              'btagSF',  'BoostedWtagSF_nominal']

SFweight = '*'.join(SFweight1l)
     
GenLepMatch   = 'Lepton_genmatched[0]'


################################################
############   MET  FILTERS  ###################
################################################

METFilter_MC   = 'METFilter_MC'
METFilter_DATA = 'METFilter_DATA'

################################################
############ DATA DECLARATION ##################
################################################

DataRun = [
            ['B','Run2017B-02Apr2020-v1'] ,
            ['C','Run2017C-02Apr2020-v1'] ,
            ['D','Run2017D-02Apr2020-v1'] ,
            ['E','Run2017E-02Apr2020-v1'] ,
            ['F','Run2017F-02Apr2020-v1']
          ]

DataSets = ['SingleMuon','SingleElectron']

DataTrig = {
            'SingleMuon'     : 'Trigger_sngMu' ,
            'SingleElectron' : '!Trigger_sngMu && Trigger_sngEl' 
}
###########################################
#############  BACKGROUNDS  ###############
###########################################

DY_photons_filter = '( !(Sum$(PhotonGen_isPrompt==1 && PhotonGen_pt>10 && abs(PhotonGen_eta)<2.6) > 0 && Sum$(LeptonGen_isPrompt==1 && LeptonGen_pt>15)>=2) )'

samples['DY'] = {    'name'   :   nanoGetSampleFiles(directory_bkg,'DYJetsToLL_M-50') 
                                  + nanoGetSampleFiles(directory_bkg,'DYJetsToLL_M-50_ext1')
                                  + nanoGetSampleFiles(directory_bkg,'DYJetsToLL_M-10to50-LO_ext1')
                                  #+ nanoGetSampleFiles(directory_bkg,'DYJetsToLL_M-50_HT-100to200_newpmx') 
                                  + nanoGetSampleFiles(directory_bkg,'DYJetsToLL_M-50_HT-200to400')
                                  + nanoGetSampleFiles(directory_bkg,'DYJetsToLL_M-50_HT-200to400_ext1')
                                  + nanoGetSampleFiles(directory_bkg,'DYJetsToLL_M-50_HT-400to600_newpmx') 
                                  + nanoGetSampleFiles(directory_bkg,'DYJetsToLL_M-50_HT-600to800')
                                  + nanoGetSampleFiles(directory_bkg,'DYJetsToLL_M-50_HT-800to1200')
                                  + nanoGetSampleFiles(directory_bkg,'DYJetsToLL_M-50_HT-1200to2500')
                                  + nanoGetSampleFiles(directory_bkg,'DYJetsToLL_M-50_HT-2500toInf')
                                  + nanoGetSampleFiles(directory_bkg,'DYJetsToLL_M-4to50_HT-100to200_newpmx')
                                  + nanoGetSampleFiles(directory_bkg,'DYJetsToLL_M-4to50_HT-200to400_newpmx')
                                  + nanoGetSampleFiles(directory_bkg,'DYJetsToLL_M-4to50_HT-400to600')
                                  + nanoGetSampleFiles(directory_bkg,'DYJetsToLL_M-4to50_HT-400to600_ext1')
                                  + nanoGetSampleFiles(directory_bkg,'DYJetsToLL_M-4to50_HT-600toInf')
                                  + nanoGetSampleFiles(directory_bkg,'DYJetsToLL_M-4to50_HT-600toInf_ext1') ,
                       'weight' : (XSWeight+'*'+SFweight+'*'+GenLepMatch+'*'+METFilter_MC+"*"+DY_photons_filter).replace('PUJetIdSF','1.'),
                       'FilesPerJob' : 8,
                       'EventsPerJob' : 80000,
                      #  'suppressNegative' :['all'],
                      #  'suppressNegativeNuisances' :['all'],
                   }
                   
# CombineBaseW(samples, 'DY', ['DYJetsToLL_M-50', 'DYJetsToLL_M-50_ext1'])
addSampleWeight(samples,'DY','DYJetsToLL_M-50','DY_NLO_pTllrw')
addSampleWeight(samples,'DY','DYJetsToLL_M-50_ext1','DY_NLO_pTllrw')
addSampleWeight(samples,'DY','DYJetsToLL_M-10to50-LO_ext1','DY_LO_pTllrw')

# CombineBaseW(samples, 'DY', ['DYJetsToLL_M-50_HT-200to400', 'DYJetsToLL_M-50_HT-200to400_ext1'])
# CombineBaseW(samples, 'DY', ['DYJetsToLL_M-4to50_HT-400to600', 'DYJetsToLL_M-4to50_HT-400to600_ext1'])
# CombineBaseW(samples, 'DY', ['DYJetsToLL_M-4to50_HT-600toInf', 'DYJetsToLL_M-4to50_HT-600toInf_ext1'])
addSampleWeight(samples,'DY','DYJetsToLL_M-50',                      '(LHE_HT < 200)')  # To put 100 when HT100to200 is back
addSampleWeight(samples,'DY','DYJetsToLL_M-50_ext1',                 '(LHE_HT < 200)') # To put 100 when HT100to200 is back
addSampleWeight(samples,'DY','DYJetsToLL_M-10to50-LO_ext1',               '(LHE_HT < 100)')
#addSampleWeight(samples,'DY','DYJetsToLL_M-50_HT-100to200_newpmx',   'DY_LO_pTllrw * 1.00') # Added HT stitching  ##TO be added back
addSampleWeight(samples,'DY','DYJetsToLL_M-50_HT-200to400',          'DY_LO_pTllrw * 0.999')
addSampleWeight(samples,'DY','DYJetsToLL_M-50_HT-200to400_ext1',     'DY_LO_pTllrw * 0.999')
addSampleWeight(samples,'DY','DYJetsToLL_M-50_HT-400to600_newpmx',   'DY_LO_pTllrw * 0.990')
addSampleWeight(samples,'DY','DYJetsToLL_M-50_HT-600to800',          'DY_LO_pTllrw * 0.975')
addSampleWeight(samples,'DY','DYJetsToLL_M-50_HT-800to1200',         'DY_LO_pTllrw * 0.907')
addSampleWeight(samples,'DY','DYJetsToLL_M-50_HT-1200to2500',        'DY_LO_pTllrw * 0.833')
addSampleWeight(samples,'DY','DYJetsToLL_M-50_HT-2500toInf',         'DY_LO_pTllrw * 1.015')
addSampleWeight(samples,'DY','DYJetsToLL_M-4to50_HT-100to200_newpmx',       'DY_LO_pTllrw')
addSampleWeight(samples,'DY','DYJetsToLL_M-4to50_HT-200to400_newpmx',       'DY_LO_pTllrw')
addSampleWeight(samples,'DY','DYJetsToLL_M-4to50_HT-400to600',       'DY_LO_pTllrw')
addSampleWeight(samples,'DY','DYJetsToLL_M-4to50_HT-400to600_ext1',  'DY_LO_pTllrw')
addSampleWeight(samples,'DY','DYJetsToLL_M-4to50_HT-600toInf',       'DY_LO_pTllrw')
addSampleWeight(samples,'DY','DYJetsToLL_M-4to50_HT-600toInf_ext1',  'DY_LO_pTllrw')

########### Top ############

samples['top'] = {    'name'   :   nanoGetSampleFiles(directory_bkg,'TTTo2L2Nu')
                                 + nanoGetSampleFiles(directory_bkg,'ST_s-channel') 
                                 + nanoGetSampleFiles(directory_bkg,'ST_t-channel_antitop') 
                                 + nanoGetSampleFiles(directory_bkg,'ST_t-channel_top') 
                                 + nanoGetSampleFiles(directory_bkg,'ST_tW_antitop') 
                                 + nanoGetSampleFiles(directory_bkg,'ST_tW_top') 
                                 + nanoGetSampleFiles(directory_bkg,'TTToSemiLeptonic') 
                                 + nanoGetSampleFiles(directory_bkg,'TTZjets')
                                 + nanoGetSampleFiles(directory_bkg,'TTZjets_ext1')
                                 + nanoGetSampleFiles(directory_bkg,'TTWjets')
                                 + nanoGetSampleFiles(directory_bkg,'TTWjets_ext1'),
                     'weight' : XSWeight+'*'+SFweight+'*'+GenLepMatch+'*'+METFilter_MC ,
                     'FilesPerJob' : 4,
                     'EventsPerJob' : 70000,
                     'suppressNegative' :['all'],
                     'suppressNegativeNuisances' :['all'],
                 }

# CombineBaseW(samples, 'top', ['TTZjets', 'TTZjets_ext1'])
# CombineBaseW(samples, 'top', ['TTWjets', 'TTWjets_ext1'])

addSampleWeight(samples,'top','TTTo2L2Nu','Top_pTrw')
addSampleWeight(samples,'top','TTToSemiLeptonic','Top_pTrw')

addSampleWeight(samples,'top','ST_t-channel_top',  "100. / 32.4 ") # N.B We are using inclusive sample with leptonic-only XS
addSampleWeight(samples,'top','ST_t-channel_antitop',  "100. / 32.4")

###############################################################################

samples['Wjets_HT'] = { 'name' :   
            nanoGetSampleFiles(directory_bkg, 'WJetsToLNu-LO')
          + nanoGetSampleFiles(directory_bkg, 'WJetsToLNu-LO_ext1')
          + nanoGetSampleFiles(directory_bkg, 'WJetsToLNu_HT70_100') 
          + nanoGetSampleFiles(directory_bkg, 'WJetsToLNu_HT100_200')
          + nanoGetSampleFiles(directory_bkg, 'WJetsToLNu_HT200_400')
          + nanoGetSampleFiles(directory_bkg, 'WJetsToLNu_HT400_600')
          + nanoGetSampleFiles(directory_bkg, 'WJetsToLNu_HT600_800')
          + nanoGetSampleFiles(directory_bkg, 'WJetsToLNu_HT800_1200')
          + nanoGetSampleFiles(directory_bkg, 'WJetsToLNu_HT1200_2500')
          + nanoGetSampleFiles(directory_bkg, 'WJetsToLNu_HT2500_inf'),
        'weight': XSWeight+'*'+SFweight+'*'+METFilter_MC+'*'+GenLepMatch + '* ewknloW' ,
        'FilesPerJob' : 5,
        'subsamples': {
            "res_1": '(VBS_category==1) && (w_lep_pt < 100)',
            "res_2": '(VBS_category==1) && (w_lep_pt >= 100 && w_lep_pt < 200)',
            "res_3": '(VBS_category==1) && (w_lep_pt >= 200 && w_lep_pt < 300)',
            "res_4": '(VBS_category==1) && (w_lep_pt >= 300 && w_lep_pt < 400)',
            "res_5": '(VBS_category==1) && (w_lep_pt >= 400 && w_lep_pt < 500)',
            "res_6": '(VBS_category==1) && (w_lep_pt >= 500)',
            "boost_1": '(VBS_category==0) && (w_lep_pt < 75)',
            "boost_2": '(VBS_category==0) && (w_lep_pt >= 75 && w_lep_pt < 150)',
            "boost_3": '(VBS_category==0) && (w_lep_pt >= 150 && w_lep_pt < 250)',
            "boost_4": '(VBS_category==0) && (w_lep_pt >= 250 && w_lep_pt < 400)',
            "boost_5": '(VBS_category==0) && (w_lep_pt >= 400)',
        }
       }

##############
# Fix Wjets binned + LO 
addSampleWeight(samples,'Wjets_HT', 'WJetsToLNu-LO', '(LHE_HT < 70)')
addSampleWeight(samples,'Wjets_HT', 'WJetsToLNu-LO_ext1', '(LHE_HT < 70)')
# CombineBaseW(samples, 'Wjets_HT', ['WJetsToLNu-LO', 'WJetsToLNu-LO_ext1'])

addSampleWeight(samples,'Wjets_HT', 'WJetsToLNu_HT70_100', '1.21 * 0.9582') 
addSampleWeight(samples,'Wjets_HT', 'WJetsToLNu_HT100_200',    '0.9525') 
addSampleWeight(samples,'Wjets_HT', 'WJetsToLNu_HT200_400',    '0.9577') 
addSampleWeight(samples,'Wjets_HT', 'WJetsToLNu_HT400_600',    '0.9613') 
addSampleWeight(samples,'Wjets_HT', 'WJetsToLNu_HT600_800',    '1.0742') 
addSampleWeight(samples,'Wjets_HT', 'WJetsToLNu_HT800_1200',   '1.1698') 
addSampleWeight(samples,'Wjets_HT', 'WJetsToLNu_HT1200_2500',  '1.3046') 
addSampleWeight(samples,'Wjets_HT', 'WJetsToLNu_HT2500_inf',   '2.1910') 
 

###################################

samples['VV']  = { 'name' :  
               nanoGetSampleFiles(directory_signal,'WmToLNu_WmTo2J_QCD') +
               nanoGetSampleFiles(directory_signal,'WmToLNu_ZTo2J_QCD',) +
               nanoGetSampleFiles(directory_signal,'WmTo2J_ZTo2L_QCD', ) +
               nanoGetSampleFiles(directory_signal,'WpTo2J_WmToLNu_QCD') +
               nanoGetSampleFiles(directory_signal,'WpTo2J_ZTo2L_QCD', ) +
               nanoGetSampleFiles(directory_signal,'WpToLNu_WpTo2J_QCD') +
               nanoGetSampleFiles(directory_signal,'WpToLNu_WmTo2J_QCD') +
               nanoGetSampleFiles(directory_signal,'WpToLNu_ZTo2J_QCD' ) +
               nanoGetSampleFiles(directory_signal,'ZTo2L_ZTo2J_QCD' ) , 
        'weight': XSWeight+'*'+SFweight+'*'+METFilter_MC+'*'+GenLepMatch , # add back ewknlOW
        'FilesPerJob' : 12,
        'EventsPerJob' : 70000,
}

############ VVV ############

samples['VVV']  = {  'name'   :   nanoGetSampleFiles(directory_bkg,'ZZZ')
                                + nanoGetSampleFiles(directory_bkg,'WZZ')
                                + nanoGetSampleFiles(directory_bkg,'WWZ')
                                + nanoGetSampleFiles(directory_bkg,'WWW'),
                                #+ nanoGetSampleFiles(directory,'WWG'), #should this be included? or is it already taken into account in the WW sample?
                    'weight' : XSWeight+'*'+SFweight+'*'+METFilter_MC+'*'+GenLepMatch,
                    'FilesPerJob' : 15,
                    'EventsPerJob' : 70000,
                  }

############## VBF-V ########


###
samples['VBF-V']  = {  'name'   : 
                                  nanoGetSampleFiles(directory_bkg,'WLNuJJ_EWK')
                                + nanoGetSampleFiles(directory_bkg,'EWKZ2Jets_ZToLL_M-50_newpmx'),
                    'weight' : XSWeight+'*'+SFweight+'*'+METFilter_MC+'*'+GenLepMatch,
                    'FilesPerJob' : 15,
                    'EventsPerJob' : 70000,
                  }

################# Vg ####################

samples['Vg']  = {  'name'   :   nanoGetSampleFiles(directory_bkg,'Wg_MADGRAPHMLM')
                               + nanoGetSampleFiles(directory_bkg,'ZGToLLG'),
                    'weight' : XSWeight+'*'+SFweight+'*'+METFilter_MC+'*(Gen_ZGstar_mass <= 0)',
                    'FilesPerJob' : 15,
                    'EventsPerJob' : 70000,
                    'suppressNegative' :['all'],
                    'suppressNegativeNuisances' :['all'],
                  }

#the following baseW correction is needed in v5 and should be removed in v6
#addSampleWeight(samples,'Vg','ZGToLLG','0.448')


############ VgS ############

samples['VgS']  =  {  'name'   :   nanoGetSampleFiles(directory_bkg,'Wg_MADGRAPHMLM')
                                 + nanoGetSampleFiles(directory_bkg,'ZGToLLG')
                                 + nanoGetSampleFiles(directory_bkg,'WZTo3LNu_mllmin01'),
                      'weight' : XSWeight+'*'+SFweight+'*'+GenLepMatch+'*'+METFilter_MC + ' * (gstarLow * 0.94 + gstarHigh * 1.14)',
                      'FilesPerJob' : 15,
                      'EventsPerJob' : 70000,
                      'suppressNegative' :['all'],
                      'suppressNegativeNuisances' :['all'],
                   }

addSampleWeight(samples,'VgS','Wg_MADGRAPHMLM', '(Gen_ZGstar_mass > 0 && Gen_ZGstar_mass < 0.1)')
#0.448 needed in v5 and should be removed in v6
addSampleWeight(samples,'VgS','ZGToLLG', '(Gen_ZGstar_mass > 0)') #*0.448
addSampleWeight(samples,'VgS','WZTo3LNu_mllmin01', '(Gen_ZGstar_mass > 0.1)')


##########################################
################ SIGNALS #################
##########################################

#
samples['VBS']  = { 'name' :  
                nanoGetSampleFiles(directory_signal,'WmToLNu_ZTo2J',) +
               nanoGetSampleFiles(directory_signal,'WmTo2J_ZTo2L', ) +
               nanoGetSampleFiles(directory_signal,'WpTo2J_ZTo2L', ) +
               nanoGetSampleFiles(directory_signal,'WpToLNu_ZTo2J',) +
               nanoGetSampleFiles(directory_signal,'WpToLNu_WpTo2J') +
               nanoGetSampleFiles(directory_signal,'WmToLNu_WmTo2J') +
               nanoGetSampleFiles(directory_signal,'WpToLNu_WmTo2J') +
               nanoGetSampleFiles(directory_signal,'WpTo2J_WmToLNu') +
               nanoGetSampleFiles(directory_signal,'ZTo2L_ZTo2J',  ),
       'weight': XSWeight+'*'+SFweight+'*'+METFilter_MC+'*'+GenLepMatch,
       'FilesPerJob' : 12,
        'EventsPerJob' : 70000,
}

fake_weight_corrected = "fakeWeight_35"
#### Fakes
samples['Fake'] = {
  'name': [],
  'weight': METFilter_DATA+'*'+ fake_weight_corrected,
  'weights': [],
  'isData': ['all'],
  'FilesPerJob' : 35
}

#
for _, sd in DataRun:
  for pd in DataSets:
    # BE Careful --> we use directory_data because the Lepton tight cut was not applied in post-processing
    files = nanoGetSampleFiles(directory_data, pd + '_' + sd)
    samples['Fake']['name'].extend(files)
    samples['Fake']['weights'].extend([DataTrig[pd]] * len(files))


##########################################
################# DATA ###################
##########################################

samples['DATA']  = {   'name': [ ] ,
                       'weight' : METFilter_DATA+'*'+LepWPCut,
                       'weights' : [ ],
                       'isData': ['all'],
                       'FilesPerJob' : 35,
                  }

for Run in DataRun :
        for DataSet in DataSets :
                FileTarget = nanoGetSampleFiles(directory_data,DataSet+'_'+Run[1])
                for iFile in FileTarget:
                        samples['DATA']['name'].append(iFile)
                        samples['DATA']['weights'].append(DataTrig[DataSet])

#samples = {k:v for k,v in samples.items() if k not in ['top', 'Wjets_HT']}
#samples = {k:v for k,v in samples.items() if k  in ['DY']}