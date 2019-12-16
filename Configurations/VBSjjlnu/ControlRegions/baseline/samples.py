import os
import subprocess
import string
from LatinoAnalysis.Tools.commonTools import *

samples={}

#skim='__wwSel'
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

directory = treeBaseDir+'Fall2017_102X_nAODv4_Full2017v5/MCl1loose2017v5__MCCorr2017v5'+skim
directory_signal = treeBaseDir + 'Fall2017_102X_nAODv5_SigOnly_Full2017v5/MCl1loose2017v5__MCCorr2017v5'+skim

################################################
############ NUMBER OF LEPTONS #################
################################################

Nlep='1'
#Nlep='3'
#Nlep='4'

################################################
############### Lepton WP ######################
################################################

eleWP='mvaFall17V2Iso_WP90'
muWP='cut_Tight_HWWW'

LepWPCut        = 'LepCut'+Nlep+'l__ele_'+eleWP+'__mu_'+muWP
LepWPweight     = 'LepSF'+Nlep+'l__ele_'+eleWP+'__mu_'+muWP

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
     
#GenLepMatch   = 'Lepton_genmatched[0]'



################################################
############## FAKE WEIGHTS ####################
################################################

# if Nlep == '2' :
#   fakeW = 'fakeW2l_ele_'+eleWP+'_mu_'+muWP
# else:
#   fakeW = 'fakeW_ele_'+eleWP+'_mu_'+muWP+'_'+Nlep+'l'


################################################
############### B-Tag  WP ######################
################################################

#FIXME b-tagging to be optimized
# Definitions in aliases.py

# Not using any btagging yet
#SFweight += '*btagSF'

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
useDYtt = False

embed_tautauveto = ''

samples['DY'] = {    'name'   :   getSampleFiles(directory,'DYJetsToLL_M-50',False,'nanoLatino_')
                                + getSampleFiles(directory,'DYJetsToLL_M-10to50-LO',False,'nanoLatino_'),
                      'weight' : XSWeight+'*'+SFweight+'*'+METFilter_MC ,
                      'FilesPerJob' : 5,
                  }
addSampleWeight(samples,'DY','DYJetsToLL_M-50',ptllDYW_NLO)
addSampleWeight(samples,'DY','DYJetsToLL_M-10to50-LO',ptllDYW_LO)



############ Top ############

Top_pTrw = '(TMath::Sqrt( TMath::Exp(0.0615-0.0005*topGenPt) * TMath::Exp(0.0615-0.0005*antitopGenPt) ) )'

samples['singleTop'] = {    
            'name'   :  getSampleFiles(directory,'ST_s-channel',False,'nanoLatino_') 
                      + getSampleFiles(directory,'ST_t-channel_antitop',False,'nanoLatino_') 
                      + getSampleFiles(directory,'ST_t-channel_top',False,'nanoLatino_') 
                      + getSampleFiles(directory,'ST_tW_antitop',False,'nanoLatino_') 
                      + getSampleFiles(directory,'ST_tW_top',False,'nanoLatino_') ,
            'weight' :  XSWeight+'*'+SFweight+'*'+METFilter_MC ,
            'FilesPerJob' : 1,
                 }

samples["ttbar"] =  {  'name': getSampleFiles(directory,'TTToSemiLeptonic',False,'nanoLatino_') 
                            +  getSampleFiles(directory,'TTTo2L2Nu',False,'nanoLatino_' ) 
                            +  getSampleFiles(directory,'TTWjets',False,'nanoLatino_' )
                            #+  getSampleFiles(directory,'TTWjets_ext1',False,'nanoLatino_' )
                            +  getSampleFiles(directory,'TTZjets',False,'nanoLatino_' ),
                           # +  getSampleFiles(directory,'TTZjets_ext1',False,'nanoLatino_' ),
                          #  +  getSampleFiles(directory,'TTWJetsToLNu',False,'nanoLatino_' ),
                        'weight': XSWeight+'*'+SFweight+'*'+METFilter_MC,
                        'FilesPerJob': 1,
}

addSampleWeight(samples,'ttbar','TTToSemiLeptonic',Top_pTrw)
addSampleWeight(samples,'ttbar','TTTo2L2Nu',Top_pTrw)
addSampleWeight(samples,'ttbar','TTWjets',Top_pTrw)
#addSampleWeight(samples,'ttbar','TTWjets_ext1',Top_pTrw)
addSampleWeight(samples,'ttbar','TTZjets',Top_pTrw)
#addSampleWeight(samples,'ttbar','TTZjets_ext1',Top_pTrw)


samples['Wjets'] = { 'name' :   
          getSampleFiles(directory, 'WJetsToLNu-LO', True, 'nanoLatino_')
          #+ getSampleFiles(directory, 'WJetsToLNu-LO_ext1', True, 'nanoLatino_')
          + getSampleFiles(directory, 'WJetsToLNu_HT100_200', True, 'nanoLatino_')
          #+ getSampleFiles(directory, 'WJetsToLNu_HT100_200_ext1', True, 'nanoLatino_')
          #+ getSampleFiles(directory, 'WJetsToLNu_HT100_200_ext2', True, 'nanoLatino_')
          + getSampleFiles(directory, 'WJetsToLNu_HT200_400', True, 'nanoLatino_')
          #+ getSampleFiles(directory, 'WJetsToLNu_HT200_400_ext1', True, 'nanoLatino_')
          #+ getSampleFiles(directory, 'WJetsToLNu_HT200_400_ext2', True, 'nanoLatino_')
          + getSampleFiles(directory, 'WJetsToLNu_HT400_600', True, 'nanoLatino_')
          #+ getSampleFiles(directory, 'WJetsToLNu_HT400_600_ext1', True, 'nanoLatino_')
          + getSampleFiles(directory, 'WJetsToLNu_HT600_800', True, 'nanoLatino_')
          #+ getSampleFiles(directory, 'WJetsToLNu_HT600_800_ext1', True, 'nanoLatino_')
          + getSampleFiles(directory, 'WJetsToLNu_HT800_1200', True, 'nanoLatino_')
          #+ getSampleFiles(directory, 'WJetsToLNu_HT800_1200_ext1', True, 'nanoLatino_')
          + getSampleFiles(directory, 'WJetsToLNu_HT1200_2500', True, 'nanoLatino_')
          #+ getSampleFiles(directory, 'WJetsToLNu_HT1200_2500_ext1', True, 'nanoLatino_')
          + getSampleFiles(directory, 'WJetsToLNu_HT2500_inf', True, 'nanoLatino_'),
          #+ getSampleFiles(directory, 'WJetsToLNu_HT2500_inf_ext1', True, 'nanoLatino_'),
				'weight': XSWeight+'*'+SFweight+'*'+METFilter_MC ,
				'FilesPerJob' : 1,
		   }

# Fix Wjets binned + LO 
addSampleWeight(samples,'Wjets', 'WJetsToLNu-LO', 'LHE_HT < 100')

#
samples['VV']  = { 'name' :  
               getSampleFiles(directory,'WmTo2J_ZTo2L_QCD',   True, 'nanoLatino_') +
               getSampleFiles(directory,'WmToLNu_WmTo2J_QCD', True, 'nanoLatino_') +
               getSampleFiles(directory,'WmToLNu_ZTo2J_QCD',  True, 'nanoLatino_') +
               getSampleFiles(directory,'WpTo2J_WmToLNu_QCD', True, 'nanoLatino_') +
               getSampleFiles(directory,'WpTo2J_ZTo2L_QCD',   True, 'nanoLatino_') +
               getSampleFiles(directory,'WpToLNu_WmTo2J_QCD', True, 'nanoLatino_') +
               getSampleFiles(directory,'WpToLNu_WpTo2J_QCD', True, 'nanoLatino_') +
               getSampleFiles(directory,'WpToLNu_ZTo2J_QCD',  True, 'nanoLatino_') +
               getSampleFiles(directory,'ZTo2L_ZTo2J_QCD',    True, 'nanoLatino_') ,
        'weight': XSWeight+'*'+SFweight+'*'+METFilter_MC,
        'FilesPerJob' : 2,
}

samples["FakeQCD"] = { 'name':
        getSampleFiles(directory, 'QCD_Pt-15to20_MuEnrichedPt5', True, 'nanoLatino_') + 
        getSampleFiles(directory, 'QCD_Pt-20to30_MuEnrichedPt5', True, 'nanoLatino_') +
        getSampleFiles(directory, 'QCD_Pt-30to50_MuEnrichedPt5', True, 'nanoLatino_') +
        getSampleFiles(directory, 'QCD_Pt-50to80_MuEnrichedPt5', True, 'nanoLatino_') +
        getSampleFiles(directory, 'QCD_Pt-80to120_MuEnrichedPt5', True, 'nanoLatino_') +
        getSampleFiles(directory, 'QCD_Pt-120to170_MuEnrichedPt5', True, 'nanoLatino_') +
        getSampleFiles(directory, 'QCD_Pt-170to300_MuEnrichedPt5', True, 'nanoLatino_') +
        #getSampleFiles(directory, 'QCD_Pt-15to20_EMEnriched', True, 'nanoLatino_') + # missing sample (don't need this)
        getSampleFiles(directory, 'QCD_Pt-20to30_EMEnriched', True, 'nanoLatino_') +
        getSampleFiles(directory, 'QCD_Pt-30to50_EMEnriched', True, 'nanoLatino_') +
        getSampleFiles(directory, 'QCD_Pt-50to80_EMEnriched', True, 'nanoLatino_'),
        'weight': XSWeight+'*'+SFweight+'*'+METFilter_MC,
        'FilesPerJob' :10,
}

# Filter efficiency for FakeQCD (https://twiki.cern.ch/twiki/bin/viewauth/CMS/SummaryTable1G25ns)
addSampleWeight(samples, 'FakeQCD', 'QCD_Pt-15to20_MuEnrichedPt5', '0.0022')
addSampleWeight(samples, 'FakeQCD', 'QCD_Pt-20to30_MuEnrichedPt5', '0.0045')
addSampleWeight(samples, 'FakeQCD', 'QCD_Pt-30to50_MuEnrichedPt5', '0.00974')
addSampleWeight(samples, 'FakeQCD', 'QCD_Pt-50to80_MuEnrichedPt5', '0.0196')
addSampleWeight(samples, 'FakeQCD', 'QCD_Pt-80to120_MuEnrichedPt5', '0.0322')
addSampleWeight(samples, 'FakeQCD', 'QCD_Pt-120to170_MuEnrichedPt5', '0.04518')
addSampleWeight(samples, 'FakeQCD', 'QCD_Pt-170to300_MuEnrichedPt5', '0.0598')
#addSampleWeight(samples, 'FakeQCD', 'QCD_Pt-15to20_EMEnriched', '0.0096')  #missing sample
addSampleWeight(samples, 'FakeQCD', 'QCD_Pt-20to30_EMEnriched', '0.0088')
addSampleWeight(samples, 'FakeQCD', 'QCD_Pt-30to50_EMEnriched', '0.0470')
addSampleWeight(samples, 'FakeQCD', 'QCD_Pt-50to80_EMEnriched', '0.100')
############ VVV ############

samples['VVV']  = {  'name'   :   getSampleFiles(directory,'ZZZ',False,'nanoLatino_')
                                + getSampleFiles(directory,'WZZ',False,'nanoLatino_')
                                + getSampleFiles(directory,'WWZ',False,'nanoLatino_')
                                + getSampleFiles(directory,'WWW',False,'nanoLatino_'),
                                #+ getSampleFiles(directory,'WWG',False,'nanoLatino_'), #should this be included? or is it already taken into account in the WW sample?
                    'weight' : XSWeight+'*'+SFweight+'*'+METFilter_MC ,
                  }

############## VBF-V ########
samples['VBF-V']  = {  'name'   :   getSampleFiles(directory,'WLNuJJ_EWK',False,'nanoLatino_'),
                    'weight' : XSWeight+'*'+SFweight+'*'+METFilter_MC ,
                    'FilesPerJob' : 5
                  }

##########################################
################ SIGNALS #################
##########################################

#
samples['VBS']  = { 'name' :  
               getSampleFiles(directory_signal,'WmTo2J_ZTo2L',   True, 'nanoLatino_') +
               getSampleFiles(directory_signal,'WmToLNu_WmTo2J', True, 'nanoLatino_') +
               getSampleFiles(directory_signal,'WmToLNu_ZTo2J',  True, 'nanoLatino_') +
               getSampleFiles(directory_signal,'WpTo2J_WmToLNu', True, 'nanoLatino_') +
               getSampleFiles(directory_signal,'WpTo2J_ZTo2L',   True, 'nanoLatino_') +
               getSampleFiles(directory_signal,'WpToLNu_WmTo2J', True, 'nanoLatino_') +
               getSampleFiles(directory_signal,'WpToLNu_WpTo2J', True, 'nanoLatino_') +
               getSampleFiles(directory_signal,'WpToLNu_ZTo2J',  True, 'nanoLatino_') +
               getSampleFiles(directory_signal,'ZTo2L_ZTo2J',    True, 'nanoLatino_') ,
       'weight': XSWeight+'*'+SFweight+'*'+METFilter_MC,
       'suppressNegative' :['all'],
       'suppressNegativeNuisances' :['all'],
       'FilesPerJob' : 2,
}


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
        directory = treeBaseDir+'Run2017_102X_nAODv4_Full2017v5/DATAl1loose2017v5' + skim
        for DataSet in DataSets :
                FileTarget = getSampleFiles(directory,DataSet+'_'+Run[1],True,'nanoLatino_')
                for iFile in FileTarget:
                        print(iFile)
                        samples['DATA']['name'].append(iFile)
                        samples['DATA']['weights'].append(DataTrig[DataSet])

