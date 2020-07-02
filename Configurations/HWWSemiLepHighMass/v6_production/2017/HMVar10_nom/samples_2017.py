TESTRUN=False
#-----Variable Deinition-----#
from WPandCut2017 import *
from GetXsecInNtuple import GetXsecInNtuple
#------End of Variable Definition-----#


import os
import glob
import copy
import subprocess
import string
from LatinoAnalysis.Tools.commonTools import *



#samples={}


xrootdPath = 'root://cms-xrdr.private.lo:2094'
treeBaseDir = "/xrootd/store/user/jhchoi/Latino/HWWNano/"


##--Set Campaign and Step--##
CAMPAIGN='Fall2017_102X_nAODv5_Full2017v6'
STEP="MCl1loose2017v6__MCCorr2017v6__HMSemilepSKIMv6_10__HMFull_jhchoi10_nom"
CAMPAIGN_DATA='Run2017_102X_nAODv5_Full2017v6'
STEP_DATA="DATAl1loose2017v6__HMSemilepSKIMv6_10_data__HMFull_jhchoi10_data"


directory=treeBaseDir+CAMPAIGN+'/'+STEP

################################################                                                                                             
############ DATA DECLARATION ##################                                                                                             
################################################ 
DataRun = [
    ['B','Run2017B-Nano1June2019-v1'],
    ['C','Run2017C-Nano1June2019-v1'],
    ['D','Run2017D-Nano1June2019-v1'],
    ['E','Run2017E-Nano1June2019-v1'],
    ['F','Run2017F-Nano1June2019-v1']
]


DataSets = ['SingleMuon',\
'SingleElectron'
]

DataTrig = {
            'SingleMuon'     : 'Trigger_sngMu' ,
            'SingleElectron' : '!Trigger_sngMu && Trigger_sngEl' ,
           }


import sys
sys.path.insert(0, "MassPoints")
from List_MX import *
from List_MX_VBF import *


for MX in List_MX:

  samples['ggHWWlnuqq_M'+str(MX)] = { 'name'   :   getSampleFiles(directory,'GluGluHToWWToLNuQQ_M'+str(MX),False,'nanoLatino_'),
                                                 'weight' : 'XSWeight*SFweight*METFilter_MC',
                                                 'FilesPerJob' : 10,
                                               }
    
for MX in List_MX_VBF:

  samples['vbfHWWlnuqq_M'+str(MX)] = { 'name'   :   getSampleFiles(directory,'VBFHToWWToLNuQQ_M'+str(MX),False,'nanoLatino_'),
                                                 'weight' : 'XSWeight*SFweight*METFilter_MC',
                                                 'FilesPerJob' : 10,
                                               }




###########################################                                                                                                  
#############  BACKGROUNDS  ###############                                                                                                  
###########################################                                                                                                  

samples['Wjets0j'] = {    'name'   :   
                        getSampleFiles(directory,'WJetsToLNu-0J',False,'nanoLatino_')
                        #getSampleFiles(directory,'WJetsToLNu_HT100_200',False,'nanoLatino_')
                        #+ getSampleFiles(directory,'WJetsToLNu_HT200_400',False,'nanoLatino_')
                        #+ getSampleFiles(directory,'WJetsToLNu_HT400_600',False,'nanoLatino_')
                        #+ getSampleFiles(directory,'WJetsToLNu_HT600_800',False,'nanoLatino_')
                        #+ getSampleFiles(directory,'WJetsToLNu_HT800_1200',False,'nanoLatino_')
                        #+ getSampleFiles(directory,'WJetsToLNu_HT1200_2500',False,'nanoLatino_')
                        #+ getSampleFiles(directory,'WJetsToLNu_HT2500_inf',False,'nanoLatino_')
                        ,
                          'weight' : 'XSWeight*SFweight*METFilter_MC',
                        #'FilesPerJob' : 4,
                          'FilesPerJob' : 1,
                 }
samples['Wjets1j'] = {    'name'   :   
                          getSampleFiles(directory,'WJetsToLNu-1J',False,'nanoLatino_')
                          #getSampleFiles(directory,'WJetsToLNu_HT100_200',False,'nanoLatino_')
                        #+ getSampleFiles(directory,'WJetsToLNu_HT200_400',False,'nanoLatino_')
                        #+ getSampleFiles(directory,'WJetsToLNu_HT400_600',False,'nanoLatino_')
                        #+ getSampleFiles(directory,'WJetsToLNu_HT600_800',False,'nanoLatino_')
                        #+ getSampleFiles(directory,'WJetsToLNu_HT800_1200',False,'nanoLatino_')
                        #+ getSampleFiles(directory,'WJetsToLNu_HT1200_2500',False,'nanoLatino_')
                        #+ getSampleFiles(directory,'WJetsToLNu_HT2500_inf',False,'nanoLatino_')
                        ,
                          'weight' : 'XSWeight*SFweight*METFilter_MC',
                        #'FilesPerJob' : 4,
                          'FilesPerJob' : 1,
                 }
samples['Wjets2j'] = {    'name'   :   
                        getSampleFiles(directory,'WJetsToLNu-2J',False,'nanoLatino_')
                          #getSampleFiles(directory,'WJetsToLNu_HT100_200',False,'nanoLatino_')
                        #+ getSampleFiles(directory,'WJetsToLNu_HT200_400',False,'nanoLatino_')
                        #+ getSampleFiles(directory,'WJetsToLNu_HT400_600',False,'nanoLatino_')
                        #+ getSampleFiles(directory,'WJetsToLNu_HT600_800',False,'nanoLatino_')
                        #+ getSampleFiles(directory,'WJetsToLNu_HT800_1200',False,'nanoLatino_')
                        #+ getSampleFiles(directory,'WJetsToLNu_HT1200_2500',False,'nanoLatino_')
                        #+ getSampleFiles(directory,'WJetsToLNu_HT2500_inf',False,'nanoLatino_')
                        ,
                          'weight' : 'XSWeight*SFweight*METFilter_MC',
                        #'FilesPerJob' : 4,
                          'FilesPerJob' : 1,
                 }
##https://indico.cern.ch/event/673253/contributions/2756806/attachments/1541203/2416962/20171016_VJetsXsecsUpdate_PH-GEN.pdf
###normalize using kfactors
addSampleWeight(samples, 'Wjets0j', 'WJetsToLNu-0J', '50131.98/'+str(GetXsecInNtuple(samples['Wjets0j']['name'][0].replace("###","")))  )
kfactor='50131.98/'+str(GetXsecInNtuple(samples['Wjets0j']['name'][0].replace("###","")))
a=eval(kfactor)
print a
addSampleWeight(samples, 'Wjets1j', 'WJetsToLNu-1J', '8426.09/'+str(GetXsecInNtuple(samples['Wjets1j']['name'][0].replace("###","")))  )
addSampleWeight(samples, 'Wjets2j', 'WJetsToLNu-2J', '3172.96/'+str(GetXsecInNtuple(samples['Wjets2j']['name'][0].replace("###","")))  )




############ DY ############                                                                                                   
ptllDYW_NLO = '((0.623108 + 0.0722934*gen_ptll - 0.00364918*gen_ptll*gen_ptll + 6.97227e-05*gen_ptll*gen_ptll*gen_ptll - 4.52903e-07*gen_ptll*gen_ptll*gen_ptll*gen_ptll)*(gen_ptll<45)*(gen_ptll>0) + 1*(gen_ptll>=45))'
ptllDYW_LO = '((0.632927+0.0456956*gen_ptll-0.00154485*gen_ptll*gen_ptll+2.64397e-05*gen_ptll*gen_ptll*gen_ptll-2.19374e-07*gen_ptll*gen_ptll*gen_ptll*gen_ptll+6.99751e-10*gen_ptll*gen_ptll*gen_ptll*gen_ptll*gen_ptll)*(gen_ptll>0)*(gen_ptll<100)+(1.41713-0.00165342*gen_ptll)*(gen_ptll>=100)*(gen_ptll<300)+1*(gen_ptll>=300))'


samples['DY'] = {    'name'   :   getSampleFiles(directory,'DYJetsToLL_M-50',False,'nanoLatino_')
                     + getSampleFiles(directory,'DYJetsToLL_M-10to50-LO',False,'nanoLatino_'),
                     'weight' : 'XSWeight*SFweight*METFilter_MC',
                     #'FilesPerJob' : 10,
                     'FilesPerJob' : 2,
}
addSampleWeight(samples,'DY','DYJetsToLL_M-50',ptllDYW_NLO)
addSampleWeight(samples,'DY','DYJetsToLL_M-10to50-LO',ptllDYW_LO)

                 

samples['top'] = {    'name'   :   getSampleFiles(directory,'TTToSemiLeptonic',False,'nanoLatino_')
                      + getSampleFiles(directory,'ST_t-channel_top',False,'nanoLatino_')
                      + getSampleFiles(directory,'ST_t-channel_antitop',False,'nanoLatino_')
                      + getSampleFiles(directory,'ST_s-channel',False,'nanoLatino_')
                      + getSampleFiles(directory,'ST_tW_antitop',False,'nanoLatino_')
                      + getSampleFiles(directory,'ST_tW_top',False,'nanoLatino_')
                      #+ getSampleFiles(directory,'TTTo2L2Nu_PSWeights',False,'nanoLatino_') 
                      ,
                      'weight' : 'XSWeight*SFweight*METFilter_MC',
                      #'FilesPerJob' : 3,
                      'FilesPerJob' : 1,
                      #'FilesPerJob' : 40,
                    }

##--QCD

QCD_MU=['QCD_Pt-15to20_MuEnrichedPt5',
        'QCD_Pt-20to30_MuEnrichedPt5',
        'QCD_Pt-30to50_MuEnrichedPt5',
        'QCD_Pt-50to80_MuEnrichedPt5',
        'QCD_Pt-80to120_MuEnrichedPt5',
        'QCD_Pt-120to170_MuEnrichedPt5',
        'QCD_Pt-170to300_MuEnrichedPt5',
        'QCD_Pt-300to470_MuEnrichedPt5',
        'QCD_Pt-470to600_MuEnrichedPt5',
        'QCD_Pt-600to800_MuEnrichedPt5',
        'QCD_Pt-800to1000_MuEnrichedPt5',
        'QCD_Pt-1000toInf_MuEnrichedPt5',
]
QCD_EM=[
  'QCD_Pt-20to30_EMEnriched',
  'QCD_Pt-30to50_EMEnriched',
  'QCD_Pt-50to80_EMEnriched',
  'QCD_Pt-80to120_EMEnriched',
  'QCD_Pt-120to170_EMEnriched',
  'QCD_Pt-170to300_EMEnriched',
  'QCD_Pt-300toInf_EMEnriched'
]
QCD_bcToE=[
  'QCD_Pt_20to30_bcToE',
  'QCD_Pt_30to80_bcToE',
  'QCD_Pt_80to170_bcToE',
  'QCD_Pt_170to250_bcToE',
  'QCD_Pt_250toInf_bcToE',
]
samples['QCD_MU'] = { 'name':[],
                 'weight' : 'XSWeight*SFweight*METFilter_MC', 
                 'FilesPerJob' : 5,
}
samples['QCD_EM'] = { 'name':[],
                 'weight' : 'XSWeight*SFweight*METFilter_MC', 
                 'FilesPerJob' : 5,
}
samples['QCD_bcToE'] = { 'name':[],
                 'weight' : 'XSWeight*SFweight*METFilter_MC', 
                 'FilesPerJob' : 5,
}
for QCD in QCD_MU:
  samples['QCD_MU']['name'] += getSampleFiles(directory,QCD,False,'nanoLatino_')
for QCD in QCD_EM:
  samples['QCD_EM']['name'] += getSampleFiles(directory,QCD,False,'nanoLatino_')
for QCD in QCD_bcToE:
  samples['QCD_bcToE']['name'] += getSampleFiles(directory,QCD,False,'nanoLatino_')



##--MultiBoson
'''
samples['MultiBoson']={
  'name':[],
  'weight' : 'XSWeight*SFweight*METFilter_MC',
  'FilesPerJob' : 1,
}
for V in ['WWToLNuQQ','WpWmJJ_EWK_QCD_noHiggs','WZ','ZZ','WWW','WWZ','WZZ','ZZZ']:
  samples['MultiBoson']['name']+=getSampleFiles(directory,V,False,'nanoLatino_')

'''


samples['WW'] = {    'name'   :   getSampleFiles(directory,'WWToLNuQQ',False,'nanoLatino_') ,
                     'weight' : 'XSWeight*SFweight*METFilter_MC',
                     'FilesPerJob' : 1,                 
}
samples['WpWmJJ_EWK_QCD_noHiggs'] = {    'name'   :   getSampleFiles(directory,'WpWmJJ_EWK_QCD_noHiggs',False,'nanoLatino_') ,
                                         'weight' : 'XSWeight*SFweight*METFilter_MC',
                                         'FilesPerJob' : 1,                 
                                       }


samples['WZ'] = {    'name'   :   getSampleFiles(directory,'WZ',False,'nanoLatino_') ,
                     'weight' : 'XSWeight*SFweight*METFilter_MC',
                   }

samples['ZZ'] = {    'name'   :   getSampleFiles(directory,'ZZ',False,'nanoLatino_') ,
                     'weight' : 'XSWeight*SFweight*METFilter_MC',
                   }


samples['WWW'] = {    'name'   :   getSampleFiles(directory,'WWW',False,'nanoLatino_') ,
                      'weight' : 'XSWeight*SFweight*METFilter_MC',
                    }

samples['WZZ'] = {    'name'   :   getSampleFiles(directory,'WZZ',False,'nanoLatino_') ,
                      'weight' : 'XSWeight*SFweight*METFilter_MC',
                    }
samples['ZZZ'] = {    'name'   :   getSampleFiles(directory,'ZZZ',False,'nanoLatino_') ,
                      'weight' : 'XSWeight*SFweight*METFilter_MC',
                 }

samples['WWZ'] = {    'name'   :   getSampleFiles(directory,'WWZ',False,'nanoLatino_') ,
                      'weight' : 'XSWeight*SFweight*METFilter_MC',
                 }


samples['ggHWWlnuqq_M125'] = { 'name'   :   getSampleFiles(directory,'GluGluHToWWToLNuQQ_M125',False,'nanoLatino_'),
                               'weight' : 'XSWeight*SFweight*METFilter_MC',
                               'FilesPerJob' : 10,
                             }

samples['vbfHWWlnuqq_M125'] = { 'name'   :   getSampleFiles(directory,'VBFHToWWToLNuQQ_M125',False,'nanoLatino_'),
                                'weight' : 'XSWeight*SFweight*METFilter_MC',
                                'FilesPerJob' : 10,
                              }
samples['DATA']  = {   'name': [ ] ,
                       'weight' : 'METFilter_DATA*LepWPCut' ,
                       'weights' : [ ],
                       'isData': ['all'],
                       'FilesPerJob' : 10,
                  }


#print samples['DATA']


_directory=directory
for Run in DataRun :
        directory = treeBaseDir+CAMPAIGN_DATA+'/'+STEP_DATA
        for DataSet in DataSets :
                FileTarget = getSampleFiles(directory,DataSet+'_'+Run[1],True,'nanoLatino_')
                for iFile in FileTarget:

                        #print(iFile)
                        
                        samples['DATA']['name'].append(iFile)
                        samples['DATA']['weights'].append(DataTrig[DataSet])
                        

if TESTRUN:

  directory=_directory
  samples={}
  samples['ZZZ'] = {    'name'   :   getSampleFiles(directory,'ZZZ',False,'nanoLatino_') ,
                        'weight' : 'XSWeight*SFweight*METFilter_MC' ,
  }



