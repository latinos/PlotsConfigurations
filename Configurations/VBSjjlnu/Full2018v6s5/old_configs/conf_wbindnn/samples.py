import os
import subprocess
import string
from LatinoAnalysis.Tools.commonTools import *

def nanoGetSampleFiles(inputDir, sample):
    return getSampleFiles(inputDir, sample, True, 'nanoLatino_')

samples={}

##############################################
###### Tree Directory according to site ######
##############################################

# Steps
mcSteps   = 'MCl1loose2018v6__MCCorr2018v6__VBSjjlnuSkim2018v5' 
dataSteps = 'DATAl1loose2018v6__VBSjjlnuSkim2018v5_data'

SITE=os.uname()[1]
xrootdPath=''
if  'cern' in SITE :
  #xrootdPath='root://eoscms.cern.ch/'
  treeBaseDir = '/eos/cms/store/group/phys_higgs/cmshww/amassiro/HWWNano/'

directory_bkg    = treeBaseDir + 'Autumn18_102X_nAODv6_Full2018v6/' + mcSteps
directory_signal = treeBaseDir + 'Autumn18_102X_nAODv6_Full2018v6/' + mcSteps
directory_data   = treeBaseDir + 'Run2018_102X_nAODv6_Full2018v6/'  + dataSteps

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
SFweight1l = 'puWeight*\
              TriggerEffWeight_1l*\
              Lepton_RecoSF[0]*\
              EMTFbug_veto'
SFweight  = SFweight1l+'*'+LepWPWeight_1l+'*'+LepWPCut_1l
SFweight += '* btagSF * PUJetIdSF'

GenLepMatch   = 'Lepton_genmatched[0]'

####
# NVTX reweighting
# SFweight += '*nvtx_reweighting'


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

DataSets = ['SingleMuon','EGamma']

DataTrig = {
            'SingleMuon' :  'Trigger_sngMu' ,
            'EGamma'     : '!Trigger_sngMu && Trigger_sngEl' 
}
###########################################
#############  BACKGROUNDS  ###############
###########################################

############ DY ############
# Different weights from 2017
ptllDYW_NLO = '(0.87*(gen_ptll<10)+(0.379119+0.099744*gen_ptll-0.00487351*gen_ptll**2+9.19509e-05*gen_ptll**3-6.0212e-07*gen_ptll**4)*(gen_ptll>=10 && gen_ptll<45)+(9.12137e-01+1.11957e-04*gen_ptll-3.15325e-06*gen_ptll**2-4.29708e-09*gen_ptll**3+3.35791e-11*gen_ptll**4)*(gen_ptll>=45 && gen_ptll<200) + 1*(gen_ptll>200))'
ptllDYW_LO = '((0.632927+0.0456956*gen_ptll-0.00154485*gen_ptll*gen_ptll+2.64397e-05*gen_ptll*gen_ptll*gen_ptll-2.19374e-07*gen_ptll*gen_ptll*gen_ptll*gen_ptll+6.99751e-10*gen_ptll*gen_ptll*gen_ptll*gen_ptll*gen_ptll)*(gen_ptll>0)*(gen_ptll<100)+(1.41713-0.00165342*gen_ptll)*(gen_ptll>=100)*(gen_ptll<300)+1*(gen_ptll>=300))'

useEmbeddedDY = False
DY_photon_filter = '(Sum$(GenPart_pdgId == 22 && TMath::Odd(GenPart_statusFlags) && GenPart_pt > 20.) == 0)'

samples['DY'] = {    
  'name':   nanoGetSampleFiles(directory_bkg,'DYJetsToLL_M-4to50_HT-100to200') 
          + nanoGetSampleFiles(directory_bkg,'DYJetsToLL_M-4to50_HT-200to400')
          + nanoGetSampleFiles(directory_bkg,'DYJetsToLL_M-4to50_HT-400to600')
          + nanoGetSampleFiles(directory_bkg,'DYJetsToLL_M-4to50_HT-600toInf')
          # + nanoGetSampleFiles(directory_bkg,'DYJetsToLL_M-5to50-LO')
          + nanoGetSampleFiles(directory_bkg,'DYJetsToLL_M-10to50-LO_ext1') # covered by: DYJetsToLL_M-5to50-LO
          + nanoGetSampleFiles(directory_bkg,'DYJetsToLL_M-50_ext2')
          + nanoGetSampleFiles(directory_bkg,'DYJetsToLL_M-50_HT-70to100')  
          + nanoGetSampleFiles(directory_bkg,'DYJetsToLL_M-50_HT-100to200')
          + nanoGetSampleFiles(directory_bkg,'DYJetsToLL_M-50_HT-200to400')
          + nanoGetSampleFiles(directory_bkg,'DYJetsToLL_M-50_HT-400to600')
          + nanoGetSampleFiles(directory_bkg,'DYJetsToLL_M-50_HT-600to800')
          + nanoGetSampleFiles(directory_bkg,'DYJetsToLL_M-50_HT-800to1200')
          + nanoGetSampleFiles(directory_bkg,'DYJetsToLL_M-50_HT-1200to2500')
          + nanoGetSampleFiles(directory_bkg,'DYJetsToLL_M-50_HT-2500toInf')
          ,
    'weight' : XSWeight+'*'+SFweight+'*'+METFilter_MC+'*'+GenLepMatch + '*' + DY_photon_filter , ###### ADD ewkNLO!!!
    'FilesPerJob' : 2,
}

addSampleWeight(samples,'DY','DYJetsToLL_M-4to50_HT-100to200',ptllDYW_LO) 
addSampleWeight(samples,'DY','DYJetsToLL_M-4to50_HT-200to400',ptllDYW_LO)
addSampleWeight(samples,'DY','DYJetsToLL_M-4to50_HT-400to600',ptllDYW_LO)
addSampleWeight(samples,'DY','DYJetsToLL_M-4to50_HT-600toInf',ptllDYW_LO)
# addSampleWeight(samples,'DY','DYJetsToLL_M-5to50-LO',ptllDYW_LO +'*(LHE_HT<100)')
addSampleWeight(samples,'DY','DYJetsToLL_M-10to50-LO_ext1',ptllDYW_LO +'*(LHE_HT<100)')
addSampleWeight(samples,'DY','DYJetsToLL_M-50_ext2',ptllDYW_NLO +'*(LHE_HT<70)')
addSampleWeight(samples,'DY','DYJetsToLL_M-50_HT-70to100',    ptllDYW_LO)
addSampleWeight(samples,'DY','DYJetsToLL_M-50_HT-100to200',   ptllDYW_LO)
addSampleWeight(samples,'DY','DYJetsToLL_M-50_HT-200to400',   ptllDYW_LO)
addSampleWeight(samples,'DY','DYJetsToLL_M-50_HT-400to600',   ptllDYW_LO)
addSampleWeight(samples,'DY','DYJetsToLL_M-50_HT-600to800',   ptllDYW_LO)
addSampleWeight(samples,'DY','DYJetsToLL_M-50_HT-800to1200',  ptllDYW_LO)
addSampleWeight(samples,'DY','DYJetsToLL_M-50_HT-1200to2500', ptllDYW_LO)
addSampleWeight(samples,'DY','DYJetsToLL_M-50_HT-2500toInf',  ptllDYW_LO)



############ Top ############

samples['top'] = {    
            'name'   :  
                        nanoGetSampleFiles(directory_bkg,'ST_s-channel_ext1') 
                      + nanoGetSampleFiles(directory_bkg,'ST_t-channel_top')
                      + nanoGetSampleFiles(directory_bkg,'ST_t-channel_antitop') 
                      + nanoGetSampleFiles(directory_bkg,'ST_tW_antitop_ext1') 
                      + nanoGetSampleFiles(directory_bkg,'ST_tW_top_ext1') 
                      + nanoGetSampleFiles(directory_bkg,'TTToSemiLeptonic') 
                       +  nanoGetSampleFiles(directory_bkg,'TTTo2L2Nu') 
                       # +  nanoGetSampleFiles(directory_bkg,'TTWjets_ext1')
                       +  nanoGetSampleFiles(directory_bkg,'TTWjets')
                       # +  nanoGetSampleFiles(directory_bkg,'TTZjets_ext1') 
                       + nanoGetSampleFiles(directory_bkg,'TTZjets') 
                       +  nanoGetSampleFiles(directory_bkg,'TTWJetsToLNu'),
            'weight' :  XSWeight+'*'+SFweight+'*'+METFilter_MC+'*'+GenLepMatch +"* Top_pTrw" ,
            'FilesPerJob' : 2,
}

samples['Wjets'] = { 'name' :   
          # nanoGetSampleFiles(directory_bkg, 'WJetsToLNu-LO_ext1')
          nanoGetSampleFiles(directory_bkg, 'WJetsToLNu-LO')
          + nanoGetSampleFiles(directory_bkg, 'WJetsToLNu_HT70_100')
          + nanoGetSampleFiles(directory_bkg, 'WJetsToLNu_HT100_200')
          + nanoGetSampleFiles(directory_bkg, 'WJetsToLNu_HT200_400')
          + nanoGetSampleFiles(directory_bkg, 'WJetsToLNu_HT400_600')
          + nanoGetSampleFiles(directory_bkg, 'WJetsToLNu_HT600_800')
          + nanoGetSampleFiles(directory_bkg, 'WJetsToLNu_HT800_1200')
          + nanoGetSampleFiles(directory_bkg, 'WJetsToLNu_HT1200_2500')
          + nanoGetSampleFiles(directory_bkg, 'WJetsToLNu_HT2500_inf'),
				'weight': XSWeight+'*'+SFweight+'*'+METFilter_MC+'*'+GenLepMatch,
                  #+'*( (VBS_category==1)*(deltaetavbs_reweight*leptonpt_reweight) + (VBS_category==0) )', # reweight lowenergy
				'FilesPerJob' : 2,
        'subsamples': {
        }
		   }

DNNbins = [0.1,0.2,0.3,0.4,0.5,0.6,0.64,0.68,0.72,0.76,0.8,0.84,0.88,0.92,0.96,1]
Wbins_names = []
for ib in range(len(DNNbins)-1):
  binname = "Wjets_dnn{}".format(ib+1)
  Wbins_names.append(binname)
  samples["Wjets"]["subsamples"][binname] = "(DNNoutput >= {} && DNNoutput < {})".format(DNNbins[ib], DNNbins[ib+1])

# Fix Wjets binned + LO 
addSampleWeight(samples,'Wjets', 'WJetsToLNu-LO', 'LHE_HT < 100')
#addSampleWeight(samples,'Wjets', 'WJetsToLNu-HT70_100', 'ewknloW') #######ADD ME
addSampleWeight(samples,'Wjets', 'WJetsToLNu-HT100_200', 'ewknloW')
addSampleWeight(samples,'Wjets', 'WJetsToLNu-HT200_400', 'ewknloW')
addSampleWeight(samples,'Wjets', 'WJetsToLNu-HT400_600', 'ewknloW')
addSampleWeight(samples,'Wjets', 'WJetsToLNu-HT600_800', 'ewknloW')
addSampleWeight(samples,'Wjets', 'WJetsToLNu-HT800_1200', 'ewknloW')
addSampleWeight(samples,'Wjets', 'WJetsToLNu-HT1200_2500', 'ewknloW')
addSampleWeight(samples,'Wjets', 'WJetsToLNu-HT2500_inf', 'ewknloW')



samples['VV']  = { 'name' :  
               nanoGetSampleFiles(directory_bkg,'WmToLNu_WmTo2J_QCD') +
               nanoGetSampleFiles(directory_bkg,'WmToLNu_ZTo2J_QCD',) +
               nanoGetSampleFiles(directory_bkg,'WmTo2J_ZTo2L_QCD', ) +
               nanoGetSampleFiles(directory_bkg,'WpTo2J_WmToLNu_QCD') +
               nanoGetSampleFiles(directory_bkg,'WpTo2J_ZTo2L_QCD', ) +
               nanoGetSampleFiles(directory_bkg,'WpToLNu_WpTo2J_QCD') +
               nanoGetSampleFiles(directory_bkg,'WpToLNu_WmTo2J_QCD') +
               nanoGetSampleFiles(directory_bkg,'WpToLNu_ZTo2J_QCD',) +
               nanoGetSampleFiles(directory_bkg,'ZTo2L_ZTo2J_QCD',  ) ,
        'weight': XSWeight+'*'+SFweight+'*'+METFilter_MC+'*'+GenLepMatch, # TO BE CORRECTED: + '* ewknloW',
        'FilesPerJob' : 6,
}

############ VVV ############
  
samples['VVV']  = {  'name'   :   nanoGetSampleFiles(directory_bkg,'ZZZ')
                                + nanoGetSampleFiles(directory_bkg,'WZZ')
                                + nanoGetSampleFiles(directory_bkg,'WWZ')
                                + nanoGetSampleFiles(directory_bkg,'WWW'),
                                #+ nanoGetSampleFiles(directory,'WWG'), #should this be included? or is it already taken into account in the WW sample?
                    'weight' : XSWeight+'*'+SFweight+'*'+METFilter_MC+'*'+GenLepMatch  ,
                    'FilesPerJob' : 4,
                  }

 ############## VBF-V ########

samples['VBF-V']  = {  'name'   :  nanoGetSampleFiles(directory_bkg,'WLNuJJ_EWK') +
                                  nanoGetSampleFiles(directory_bkg,'EWKZ2Jets_ZToLL_M-50'),
                    'weight' : XSWeight+'*'+SFweight+'*'+METFilter_MC+'*'+GenLepMatch ,
                    'FilesPerJob' : 6
                  }


##########################################
################ SIGNALS #################
##########################################

#
samples['VBS']  = { 'name' :  
               nanoGetSampleFiles(directory_signal,'WmToLNu_WmTo2J') +
               nanoGetSampleFiles(directory_signal,'WmToLNu_ZTo2J',) +
               nanoGetSampleFiles(directory_signal,'WmTo2J_ZTo2L', ) +
               nanoGetSampleFiles(directory_signal,'WpTo2J_WmToLNu') +
               nanoGetSampleFiles(directory_signal,'WpTo2J_ZTo2L', ) +
               nanoGetSampleFiles(directory_signal,'WpToLNu_WpTo2J') +
               nanoGetSampleFiles(directory_signal,'WpToLNu_WmTo2J') +
               nanoGetSampleFiles(directory_signal,'WpToLNu_ZTo2J',) +
               nanoGetSampleFiles(directory_signal,'ZTo2L_ZTo2J',  ) ,
       'weight': XSWeight+'*'+SFweight+'*'+METFilter_MC+'*'+GenLepMatch,
       'FilesPerJob' :4,
}

#fakeW = 'fakeW_ele_'+eleWP+'_mu_'+muWP + '_mu10_ele35'
# from alias
fakeW = 'fakeW_ele_mvaFall17V1Iso_WP90_mu_cut_Tight_HWWW_mu10_ele35'

#### Fakes
samples['Fake'] = {
  'name': [],
  'weight': METFilter_DATA+'*'+fakeW,
  'weights': [],
  'isData': ['all'],
  'FilesPerJob': 20
}

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
                       'FilesPerJob' : 20,
                  }

for Run in DataRun :
        for DataSet in DataSets :
                FileTarget = nanoGetSampleFiles(directory_data,DataSet+'_'+Run[1])
                for iFile in FileTarget:
                        samples['DATA']['name'].append(iFile)
                        samples['DATA']['weights'].append(DataTrig[DataSet])


# samples = {
#   "Wjets": samples["Wjets"]
# }