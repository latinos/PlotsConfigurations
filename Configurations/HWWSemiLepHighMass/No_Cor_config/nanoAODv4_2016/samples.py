import os
import glob
import copy
#samples={}

#/xrootd_user/jhchoi/xrootd/Latino/HWWNano/Summer16_102X_nAODv4_Full2016v4/MCl1loose2016
#nanoLatino_GluGluHToWWToLNuQQ_M700__part13
#----Make Sample List of MC ----#
DIR_NANO_LATINO="/xrootd_user/jhchoi/xrootd/Latino/HWWNano/"
CAMPAIGN='Summer16_102X_nAODv4_Full2016v4'
STEP="MCl1loose2016"



PROC_LIST=['GluGluHToWWToLNuQQ_M700', 'TT_TuneCUETP8M2T4', 'WJetsToLNu','DYJetsToLL_M-50_ext2', 'DYJetsToLL_M-50-LO','WW-LO','WZ_AMCNLO','_ZZ_']


for PROC in PROC_LIST:
#PROC="GluGluHToWWToLNuQQ_M700"
    FILES=glob.glob(DIR_NANO_LATINO+"/"+CAMPAIGN+"/"+STEP+"/"+"nanoLatino_"+PROC+"*.root") ##File List
#ggH_M700_LIST=list( b for a in FILES b = a.split(DIR_NANO_LATINO)[1])
    LIST=[]
    for a in FILES: LIST.append(a.split(DIR_NANO_LATINO)[1].strip('/'))
#for a in ggH_M700_LIST : print a
    
    
    samples[PROC] = {'name' : copy.deepcopy(LIST) , 'weight' : '1' }

#print samples['GluGluHToWWToLNuQQ_M700']
#print samples['DYJetsToLL_M-50-LO']
#print samples['_ZZ_']



CAMPAIGN='Run2016_102X_nAODv4_Full2016v4'
STEP="DATAl1loose2016"

PROC_LIST=['SingleMuon','SingleElectron']


for PROC in PROC_LIST:
    FILES=glob.glob(DIR_NANO_LATINO+"/"+CAMPAIGN+"/"+STEP+"/"+"nanoLatino_"+PROC+"*.root") ##File List
    LIST=[]
    for a in FILES: LIST.append(a.split(DIR_NANO_LATINO)[1].strip('/'))
    samples[PROC] = {'name' : copy.deepcopy(LIST) , 'weight' : '1' }

#samples['TT_semilep'] = { 'name' : ['Fall2017_102X_nAODv4_Full2017v4/MCl1loose2017v2/nanoLatino_TTToSemiLeptonic__part11.root',
#],
#'weight' : '1'

#}
#samples['ggHToLNuQQ'] = {'name' : ['Fall2017_102X_nAODv4_Full2017v4/MCl1loose2017v2/nanoLatino_GluGluHToWWToLNuQQ_M250__part0.root'],
#'weight' : '1'
#}



####DATA####

DataRun = [['B','Run2017B-Nano14Dec2018-v1'] ]
DataSet= ['SingleMuon']
DataTrig={
'SingleMuon' : 'trig_SnglMu'
}




#samples['DATA']  = {   'name': ['Run2017_102X_nAODv4_Full2017v4/DATAl1loose2017v2/nanoLatino_SingleMuon_Run2017B-Nano14Dec2018-v1__part0.root'] ,
#                       'weight' : '1',
#                       'weights' : ['trig_SnglMu' ],
#                       'isData': ['all'],
                       #'FilesPerJob' : 20,
#                  }

#for Run in DataRun :
#    directory = treeBaseDir+''
#    for DataSet in DataSets :
#        FileTarget = getSampleFiles(directory,DataSet+'_'+Run[1],True,'nanoLatino_')
#        for iFile in FileTarget:
#            print(iFile)
#            samples['DATA']['name'].append(iFile)
#            samples['DATA']['weights'].append(DataTrig[DataSet])

