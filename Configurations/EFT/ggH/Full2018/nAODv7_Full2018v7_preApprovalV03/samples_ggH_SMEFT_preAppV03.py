import os
import inspect

configurations = os.path.realpath(inspect.getfile(inspect.currentframe())) # this file
configurations = os.path.dirname(configurations) # nAODv7_Full2018v7
configurations = os.path.dirname(configurations) # Full2018
configurations = os.path.dirname(configurations) # ggH
configurations = os.path.dirname(configurations) # EFT
configurations = os.path.dirname(configurations) # Configurations

from LatinoAnalysis.Tools.commonTools import getSampleFiles, getBaseW, addSampleWeight, getBaseWnAOD

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

################################################
################# SKIMS ########################
################################################
mcProduction = 'Autumn18_102X_nAODv7_Full2018v7'
mcSteps = 'MCl1loose2018v7__MCCorr2018v7__l2loose__l2tightOR2018v7{var}'

##############################################
###### Tree base directory for the site ######
##############################################

SITE=os.uname()[1]
if    'iihe' in SITE:
  treeBaseDir = '/pnfs/iihe/cms/store/user/xjanssen/HWW2015'
elif  'cern' in SITE:
  treeBaseDir = '/eos/cms/store/group/phys_higgs/cmshww/amassiro/HWWNano'

def makeMCDirectory(var=''):
    if var:
        return os.path.join(treeBaseDir, mcProduction, mcSteps.format(var='__' + var))
    else:
        return os.path.join(treeBaseDir, mcProduction, mcSteps.format(var='__trigFix'))

mcDirectory = makeMCDirectory()


#########################################
############ MC COMMON ##################
#########################################

mcCommonWeight = 'XSWeight*SFweight*PromptGenLepMatch2l*METFilter_MC'
signals = []

#### AC/EFT Signals 
 
signals_rw = [] 

# VBF MC samples 
 
# Original VBF samples 
 
samples['VBF_H0PM'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'VBF_H0PM_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*VBF_H0PM_W',   'FilesPerJob': 4, } 
 
samples['VBF_H0PH'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'VBF_H0PH_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*VBF_H0PH_W',   'FilesPerJob': 4, } 
 
samples['VBF_H0PHf05'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'VBF_H0PHf05_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*VBF_H0PHf05_W',   'FilesPerJob': 4, } 
 
samples['VBF_H0M'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'VBF_H0M_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*VBF_H0M_W',   'FilesPerJob': 4, } 
 
samples['VBF_H0Mf05'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'VBF_H0Mf05_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*VBF_H0Mf05_W',   'FilesPerJob': 4, } 
 
samples['VBF_H0L1'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'VBF_H0L1_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*VBF_H0L1_W',   'FilesPerJob': 4, } 
 
samples['VBF_H0L1f05'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'VBF_H0L1f05_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*VBF_H0L1f05_W',   'FilesPerJob': 4, } 
 
# Reweighted VBF samples 
 
samples['VBF_H0PM_H1'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'VBF_H0PM_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*VBF_H0PM_W*(ME_H1/ME_H0PM)',   'FilesPerJob': 4, } 
signals_rw.append('VBF_H0PM_H1')  
 
samples['VBF_H0PM_H2'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'VBF_H0PM_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*VBF_H0PM_W*(ME_H2/ME_H0PM)',   'FilesPerJob': 4, } 
signals_rw.append('VBF_H0PM_H2')  
 
samples['VBF_H0PM_H3'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'VBF_H0PM_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*VBF_H0PM_W*(ME_H3/ME_H0PM)',   'FilesPerJob': 4, } 
signals_rw.append('VBF_H0PM_H3')  
 
samples['VBF_H0PM_H4'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'VBF_H0PM_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*VBF_H0PM_W*(ME_H4/ME_H0PM)',   'FilesPerJob': 4, } 
signals_rw.append('VBF_H0PM_H4')  
 
samples['VBF_H0PM_H5'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'VBF_H0PM_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*VBF_H0PM_W*(ME_H5/ME_H0PM)',   'FilesPerJob': 4, } 
signals_rw.append('VBF_H0PM_H5')  

samples['VBF_H0PM_H6'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'VBF_H0PM_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*VBF_H0PM_W*(ME_H6/ME_H0PM)',   'FilesPerJob': 4, } 
signals_rw.append('VBF_H0PM_H6')  
 
samples['VBF_H0PM_H7'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'VBF_H0PM_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*VBF_H0PM_W*(ME_H7/ME_H0PM)',   'FilesPerJob': 4, } 
signals_rw.append('VBF_H0PM_H7')  
 
samples['VBF_H0PM_H8'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'VBF_H0PM_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*VBF_H0PM_W*(ME_H8/ME_H0PM)',   'FilesPerJob': 4, } 
signals_rw.append('VBF_H0PM_H8')  
 
samples['VBF_H0PM_H9'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'VBF_H0PM_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*VBF_H0PM_W*(ME_H9/ME_H0PM)',   'FilesPerJob': 4, } 
signals_rw.append('VBF_H0PM_H9')  
 
samples['VBF_H0PM_H10'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'VBF_H0PM_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*VBF_H0PM_W*(ME_H10/ME_H0PM)',   'FilesPerJob': 4, } 
signals_rw.append('VBF_H0PM_H10')  
 
samples['VBF_H0PM_H11'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'VBF_H0PM_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*VBF_H0PM_W*(ME_H11/ME_H0PM)',   'FilesPerJob': 4, } 
signals_rw.append('VBF_H0PM_H11')  
 
samples['VBF_H0PM_H12'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'VBF_H0PM_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*VBF_H0PM_W*(ME_H12/ME_H0PM)',   'FilesPerJob': 4, } 
signals_rw.append('VBF_H0PM_H12')  
 
samples['VBF_H0PM_H13'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'VBF_H0PM_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*VBF_H0PM_W*(ME_H13/ME_H0PM)',   'FilesPerJob': 4, } 
signals_rw.append('VBF_H0PM_H13')  
 
samples['VBF_H0PM_H14'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'VBF_H0PM_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*VBF_H0PM_W*(ME_H14/ME_H0PM)',   'FilesPerJob': 4, } 
signals_rw.append('VBF_H0PM_H14')  

samples['VBF_H0PM_H15'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'VBF_H0PM_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*VBF_H0PM_W*(ME_H15/ME_H0PM)',   'FilesPerJob': 4, } 
signals_rw.append('VBF_H0PM_H15')  
 
samples['VBF_H0PM_H16'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'VBF_H0PM_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*VBF_H0PM_W*(ME_H16/ME_H0PM)',   'FilesPerJob': 4, } 
signals_rw.append('VBF_H0PM_H16')  
 
samples['VBF_H0PM_H17'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'VBF_H0PM_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*VBF_H0PM_W*(ME_H17/ME_H0PM)',   'FilesPerJob': 4, } 
signals_rw.append('VBF_H0PM_H17')  
 
samples['VBF_H0PM_H18'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'VBF_H0PM_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*VBF_H0PM_W*(ME_H18/ME_H0PM)',   'FilesPerJob': 4, } 
signals_rw.append('VBF_H0PM_H18')  
 
samples['VBF_H0PM_H19'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'VBF_H0PM_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*VBF_H0PM_W*(ME_H19/ME_H0PM)',   'FilesPerJob': 4, } 
signals_rw.append('VBF_H0PM_H19')  
 
samples['VBF_H0PM_H20'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'VBF_H0PM_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*VBF_H0PM_W*(ME_H20/ME_H0PM)',   'FilesPerJob': 4, } 
signals_rw.append('VBF_H0PM_H20')  
 
samples['VBF_H0PM_H21'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'VBF_H0PM_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*VBF_H0PM_W*(ME_H21/ME_H0PM)',   'FilesPerJob': 4, } 
signals_rw.append('VBF_H0PM_H21')  
 
samples['VBF_H0PM_H22'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'VBF_H0PM_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*VBF_H0PM_W*(ME_H22/ME_H0PM)',   'FilesPerJob': 4, } 
signals_rw.append('VBF_H0PM_H22')  
 
samples['VBF_H0PM_H23'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'VBF_H0PM_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*VBF_H0PM_W*(ME_H23/ME_H0PM)',   'FilesPerJob': 4, } 
signals_rw.append('VBF_H0PM_H23')  
 
samples['VBF_H0PM_H24'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'VBF_H0PM_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*VBF_H0PM_W*(ME_H24/ME_H0PM)',   'FilesPerJob': 4, } 
signals_rw.append('VBF_H0PM_H24')  
 
samples['VBF_H0PM_H25'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'VBF_H0PM_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*VBF_H0PM_W*(ME_H25/ME_H0PM)',   'FilesPerJob': 4, } 
signals_rw.append('VBF_H0PM_H25')  
 
samples['VBF_H0PM_H26'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'VBF_H0PM_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*VBF_H0PM_W*(ME_H26/ME_H0PM)',   'FilesPerJob': 4, } 
signals_rw.append('VBF_H0PM_H26')  
 
samples['VBF_H0PM_H27'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'VBF_H0PM_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*VBF_H0PM_W*(ME_H27/ME_H0PM)',   'FilesPerJob': 4, } 
signals_rw.append('VBF_H0PM_H27')  
 
samples['VBF_H0PM_H28'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'VBF_H0PM_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*VBF_H0PM_W*(ME_H28/ME_H0PM)',   'FilesPerJob': 4, } 
signals_rw.append('VBF_H0PM_H28')  
 
samples['VBF_H0PM_H29'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'VBF_H0PM_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*VBF_H0PM_W*(ME_H29/ME_H0PM)',   'FilesPerJob': 4, } 
signals_rw.append('VBF_H0PM_H29')  
 
samples['VBF_H0PM_H30'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'VBF_H0PM_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*VBF_H0PM_W*(ME_H30/ME_H0PM)',   'FilesPerJob': 4, } 
signals_rw.append('VBF_H0PM_H30')  
 
samples['VBF_H0PM_H31'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'VBF_H0PM_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*VBF_H0PM_W*(ME_H31/ME_H0PM)',   'FilesPerJob': 4, } 
signals_rw.append('VBF_H0PM_H31')  
 
samples['VBF_H0PM_H32'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'VBF_H0PM_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*VBF_H0PM_W*(ME_H32/ME_H0PM)',   'FilesPerJob': 4, } 
signals_rw.append('VBF_H0PM_H32')  
 
samples['VBF_H0PM_H33'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'VBF_H0PM_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*VBF_H0PM_W*(ME_H33/ME_H0PM)',   'FilesPerJob': 4, } 
signals_rw.append('VBF_H0PM_H33')  
 
samples['VBF_H0PM_H34'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'VBF_H0PM_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*VBF_H0PM_W*(ME_H34/ME_H0PM)',   'FilesPerJob': 4, } 
signals_rw.append('VBF_H0PM_H34')  
 
samples['VBF_H0PM_H35'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'VBF_H0PM_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*VBF_H0PM_W*(ME_H35/ME_H0PM)',   'FilesPerJob': 4, } 
signals_rw.append('VBF_H0PM_H35')  
 
samples['VBF_H0PH_H1'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'VBF_H0PH_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*VBF_H0PH_W*(ME_H1/ME_H0PH)',   'FilesPerJob': 4, } 
signals_rw.append('VBF_H0PH_H1')  
 
samples['VBF_H0PH_H2'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'VBF_H0PH_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*VBF_H0PH_W*(ME_H2/ME_H0PH)',   'FilesPerJob': 4, } 
signals_rw.append('VBF_H0PH_H2')  
 
samples['VBF_H0PH_H3'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'VBF_H0PH_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*VBF_H0PH_W*(ME_H3/ME_H0PH)',   'FilesPerJob': 4, } 
signals_rw.append('VBF_H0PH_H3')  
 
samples['VBF_H0PH_H4'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'VBF_H0PH_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*VBF_H0PH_W*(ME_H4/ME_H0PH)',   'FilesPerJob': 4, } 
signals_rw.append('VBF_H0PH_H4')  
 
samples['VBF_H0PH_H5'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'VBF_H0PH_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*VBF_H0PH_W*(ME_H5/ME_H0PH)',   'FilesPerJob': 4, } 
signals_rw.append('VBF_H0PH_H5')  
 
samples['VBF_H0PH_H6'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'VBF_H0PH_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*VBF_H0PH_W*(ME_H6/ME_H0PH)',   'FilesPerJob': 4, } 
signals_rw.append('VBF_H0PH_H6')  
 
samples['VBF_H0PH_H7'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'VBF_H0PH_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*VBF_H0PH_W*(ME_H7/ME_H0PH)',   'FilesPerJob': 4, } 
signals_rw.append('VBF_H0PH_H7')  
 
samples['VBF_H0PH_H8'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'VBF_H0PH_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*VBF_H0PH_W*(ME_H8/ME_H0PH)',   'FilesPerJob': 4, } 
signals_rw.append('VBF_H0PH_H8')  
 
samples['VBF_H0PH_H9'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'VBF_H0PH_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*VBF_H0PH_W*(ME_H9/ME_H0PH)',   'FilesPerJob': 4, } 
signals_rw.append('VBF_H0PH_H9')  
 
samples['VBF_H0PH_H10'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'VBF_H0PH_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*VBF_H0PH_W*(ME_H10/ME_H0PH)',   'FilesPerJob': 4, } 
signals_rw.append('VBF_H0PH_H10')  
 
samples['VBF_H0PH_H11'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'VBF_H0PH_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*VBF_H0PH_W*(ME_H11/ME_H0PH)',   'FilesPerJob': 4, } 
signals_rw.append('VBF_H0PH_H11')  
 
samples['VBF_H0PH_H12'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'VBF_H0PH_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*VBF_H0PH_W*(ME_H12/ME_H0PH)',   'FilesPerJob': 4, } 
signals_rw.append('VBF_H0PH_H12')  
 
samples['VBF_H0PH_H13'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'VBF_H0PH_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*VBF_H0PH_W*(ME_H13/ME_H0PH)',   'FilesPerJob': 4, } 
signals_rw.append('VBF_H0PH_H13')  
 
samples['VBF_H0PH_H14'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'VBF_H0PH_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*VBF_H0PH_W*(ME_H14/ME_H0PH)',   'FilesPerJob': 4, } 
signals_rw.append('VBF_H0PH_H14')  
 
samples['VBF_H0PH_H15'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'VBF_H0PH_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*VBF_H0PH_W*(ME_H15/ME_H0PH)',   'FilesPerJob': 4, } 
signals_rw.append('VBF_H0PH_H15')  
 
samples['VBF_H0PH_H16'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'VBF_H0PH_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*VBF_H0PH_W*(ME_H16/ME_H0PH)',   'FilesPerJob': 4, } 
signals_rw.append('VBF_H0PH_H16')  
 
samples['VBF_H0PH_H17'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'VBF_H0PH_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*VBF_H0PH_W*(ME_H17/ME_H0PH)',   'FilesPerJob': 4, } 
signals_rw.append('VBF_H0PH_H17')  
 
samples['VBF_H0PH_H18'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'VBF_H0PH_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*VBF_H0PH_W*(ME_H18/ME_H0PH)',   'FilesPerJob': 4, } 
signals_rw.append('VBF_H0PH_H18')  
 
samples['VBF_H0PH_H19'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'VBF_H0PH_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*VBF_H0PH_W*(ME_H19/ME_H0PH)',   'FilesPerJob': 4, } 
signals_rw.append('VBF_H0PH_H19')  
 
samples['VBF_H0PH_H20'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'VBF_H0PH_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*VBF_H0PH_W*(ME_H20/ME_H0PH)',   'FilesPerJob': 4, } 
signals_rw.append('VBF_H0PH_H20')  
 
samples['VBF_H0PH_H21'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'VBF_H0PH_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*VBF_H0PH_W*(ME_H21/ME_H0PH)',   'FilesPerJob': 4, } 
signals_rw.append('VBF_H0PH_H21')  
 
samples['VBF_H0PH_H22'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'VBF_H0PH_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*VBF_H0PH_W*(ME_H22/ME_H0PH)',   'FilesPerJob': 4, } 
signals_rw.append('VBF_H0PH_H22')  
 
samples['VBF_H0PH_H23'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'VBF_H0PH_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*VBF_H0PH_W*(ME_H23/ME_H0PH)',   'FilesPerJob': 4, } 
signals_rw.append('VBF_H0PH_H23')  
 
samples['VBF_H0PH_H24'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'VBF_H0PH_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*VBF_H0PH_W*(ME_H24/ME_H0PH)',   'FilesPerJob': 4, } 
signals_rw.append('VBF_H0PH_H24')  
 
samples['VBF_H0PH_H25'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'VBF_H0PH_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*VBF_H0PH_W*(ME_H25/ME_H0PH)',   'FilesPerJob': 4, } 
signals_rw.append('VBF_H0PH_H25')  
 
samples['VBF_H0PH_H26'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'VBF_H0PH_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*VBF_H0PH_W*(ME_H26/ME_H0PH)',   'FilesPerJob': 4, } 
signals_rw.append('VBF_H0PH_H26')  
 
samples['VBF_H0PH_H27'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'VBF_H0PH_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*VBF_H0PH_W*(ME_H27/ME_H0PH)',   'FilesPerJob': 4, } 
signals_rw.append('VBF_H0PH_H27')  
 
samples['VBF_H0PH_H28'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'VBF_H0PH_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*VBF_H0PH_W*(ME_H28/ME_H0PH)',   'FilesPerJob': 4, } 
signals_rw.append('VBF_H0PH_H28')  
 
samples['VBF_H0PH_H29'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'VBF_H0PH_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*VBF_H0PH_W*(ME_H29/ME_H0PH)',   'FilesPerJob': 4, } 
signals_rw.append('VBF_H0PH_H29')  
 
samples['VBF_H0PH_H30'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'VBF_H0PH_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*VBF_H0PH_W*(ME_H30/ME_H0PH)',   'FilesPerJob': 4, } 
signals_rw.append('VBF_H0PH_H30')  
 
samples['VBF_H0PH_H31'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'VBF_H0PH_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*VBF_H0PH_W*(ME_H31/ME_H0PH)',   'FilesPerJob': 4, } 
signals_rw.append('VBF_H0PH_H31')  
 
samples['VBF_H0PH_H32'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'VBF_H0PH_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*VBF_H0PH_W*(ME_H32/ME_H0PH)',   'FilesPerJob': 4, } 
signals_rw.append('VBF_H0PH_H32')  
 
samples['VBF_H0PH_H33'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'VBF_H0PH_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*VBF_H0PH_W*(ME_H33/ME_H0PH)',   'FilesPerJob': 4, } 
signals_rw.append('VBF_H0PH_H33')  
 
samples['VBF_H0PH_H34'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'VBF_H0PH_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*VBF_H0PH_W*(ME_H34/ME_H0PH)',   'FilesPerJob': 4, } 
signals_rw.append('VBF_H0PH_H34')  
 
samples['VBF_H0PH_H35'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'VBF_H0PH_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*VBF_H0PH_W*(ME_H35/ME_H0PH)',   'FilesPerJob': 4, } 
signals_rw.append('VBF_H0PH_H35')  
 
samples['VBF_H0PHf05_H1'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'VBF_H0PHf05_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*VBF_H0PHf05_W*(ME_H1/ME_H0PHf05)',   'FilesPerJob': 4, } 
signals_rw.append('VBF_H0PHf05_H1')  
 
samples['VBF_H0PHf05_H2'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'VBF_H0PHf05_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*VBF_H0PHf05_W*(ME_H2/ME_H0PHf05)',   'FilesPerJob': 4, } 
signals_rw.append('VBF_H0PHf05_H2')  
 
samples['VBF_H0PHf05_H3'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'VBF_H0PHf05_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*VBF_H0PHf05_W*(ME_H3/ME_H0PHf05)',   'FilesPerJob': 4, } 
signals_rw.append('VBF_H0PHf05_H3')  
 
samples['VBF_H0PHf05_H4'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'VBF_H0PHf05_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*VBF_H0PHf05_W*(ME_H4/ME_H0PHf05)',   'FilesPerJob': 4, } 
signals_rw.append('VBF_H0PHf05_H4')  
 
samples['VBF_H0PHf05_H5'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'VBF_H0PHf05_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*VBF_H0PHf05_W*(ME_H5/ME_H0PHf05)',   'FilesPerJob': 4, } 
signals_rw.append('VBF_H0PHf05_H5')  
 
samples['VBF_H0PHf05_H6'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'VBF_H0PHf05_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*VBF_H0PHf05_W*(ME_H6/ME_H0PHf05)',   'FilesPerJob': 4, } 
signals_rw.append('VBF_H0PHf05_H6')  
 
samples['VBF_H0PHf05_H7'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'VBF_H0PHf05_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*VBF_H0PHf05_W*(ME_H7/ME_H0PHf05)',   'FilesPerJob': 4, } 
signals_rw.append('VBF_H0PHf05_H7')  
 
samples['VBF_H0PHf05_H8'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'VBF_H0PHf05_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*VBF_H0PHf05_W*(ME_H8/ME_H0PHf05)',   'FilesPerJob': 4, } 
signals_rw.append('VBF_H0PHf05_H8')  
 
samples['VBF_H0PHf05_H9'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'VBF_H0PHf05_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*VBF_H0PHf05_W*(ME_H9/ME_H0PHf05)',   'FilesPerJob': 4, } 
signals_rw.append('VBF_H0PHf05_H9')  
 
samples['VBF_H0PHf05_H10'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'VBF_H0PHf05_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*VBF_H0PHf05_W*(ME_H10/ME_H0PHf05)',   'FilesPerJob': 4, } 
signals_rw.append('VBF_H0PHf05_H10')  
 
samples['VBF_H0PHf05_H11'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'VBF_H0PHf05_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*VBF_H0PHf05_W*(ME_H11/ME_H0PHf05)',   'FilesPerJob': 4, } 
signals_rw.append('VBF_H0PHf05_H11')  
 
samples['VBF_H0PHf05_H12'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'VBF_H0PHf05_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*VBF_H0PHf05_W*(ME_H12/ME_H0PHf05)',   'FilesPerJob': 4, } 
signals_rw.append('VBF_H0PHf05_H12')  
 
samples['VBF_H0PHf05_H13'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'VBF_H0PHf05_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*VBF_H0PHf05_W*(ME_H13/ME_H0PHf05)',   'FilesPerJob': 4, } 
signals_rw.append('VBF_H0PHf05_H13')  
 
samples['VBF_H0PHf05_H14'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'VBF_H0PHf05_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*VBF_H0PHf05_W*(ME_H14/ME_H0PHf05)',   'FilesPerJob': 4, } 
signals_rw.append('VBF_H0PHf05_H14')  
 
samples['VBF_H0PHf05_H15'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'VBF_H0PHf05_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*VBF_H0PHf05_W*(ME_H15/ME_H0PHf05)',   'FilesPerJob': 4, } 
signals_rw.append('VBF_H0PHf05_H15')  
 
samples['VBF_H0PHf05_H16'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'VBF_H0PHf05_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*VBF_H0PHf05_W*(ME_H16/ME_H0PHf05)',   'FilesPerJob': 4, } 
signals_rw.append('VBF_H0PHf05_H16')  
 
samples['VBF_H0PHf05_H17'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'VBF_H0PHf05_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*VBF_H0PHf05_W*(ME_H17/ME_H0PHf05)',   'FilesPerJob': 4, } 
signals_rw.append('VBF_H0PHf05_H17')  
 
samples['VBF_H0PHf05_H18'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'VBF_H0PHf05_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*VBF_H0PHf05_W*(ME_H18/ME_H0PHf05)',   'FilesPerJob': 4, } 
signals_rw.append('VBF_H0PHf05_H18')  
 
samples['VBF_H0PHf05_H19'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'VBF_H0PHf05_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*VBF_H0PHf05_W*(ME_H19/ME_H0PHf05)',   'FilesPerJob': 4, } 
signals_rw.append('VBF_H0PHf05_H19')  
 
samples['VBF_H0PHf05_H20'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'VBF_H0PHf05_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*VBF_H0PHf05_W*(ME_H20/ME_H0PHf05)',   'FilesPerJob': 4, } 
signals_rw.append('VBF_H0PHf05_H20')  
 
samples['VBF_H0PHf05_H21'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'VBF_H0PHf05_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*VBF_H0PHf05_W*(ME_H21/ME_H0PHf05)',   'FilesPerJob': 4, } 
signals_rw.append('VBF_H0PHf05_H21')  
 
samples['VBF_H0PHf05_H22'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'VBF_H0PHf05_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*VBF_H0PHf05_W*(ME_H22/ME_H0PHf05)',   'FilesPerJob': 4, } 
signals_rw.append('VBF_H0PHf05_H22')  
 
samples['VBF_H0PHf05_H23'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'VBF_H0PHf05_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*VBF_H0PHf05_W*(ME_H23/ME_H0PHf05)',   'FilesPerJob': 4, } 
signals_rw.append('VBF_H0PHf05_H23')  
 
samples['VBF_H0PHf05_H24'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'VBF_H0PHf05_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*VBF_H0PHf05_W*(ME_H24/ME_H0PHf05)',   'FilesPerJob': 4, } 
signals_rw.append('VBF_H0PHf05_H24')  
 
samples['VBF_H0PHf05_H25'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'VBF_H0PHf05_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*VBF_H0PHf05_W*(ME_H25/ME_H0PHf05)',   'FilesPerJob': 4, } 
signals_rw.append('VBF_H0PHf05_H25')  
 
samples['VBF_H0PHf05_H26'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'VBF_H0PHf05_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*VBF_H0PHf05_W*(ME_H26/ME_H0PHf05)',   'FilesPerJob': 4, } 
signals_rw.append('VBF_H0PHf05_H26')  
 
samples['VBF_H0PHf05_H27'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'VBF_H0PHf05_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*VBF_H0PHf05_W*(ME_H27/ME_H0PHf05)',   'FilesPerJob': 4, } 
signals_rw.append('VBF_H0PHf05_H27')  
 
samples['VBF_H0PHf05_H28'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'VBF_H0PHf05_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*VBF_H0PHf05_W*(ME_H28/ME_H0PHf05)',   'FilesPerJob': 4, } 
signals_rw.append('VBF_H0PHf05_H28')  
 
samples['VBF_H0PHf05_H29'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'VBF_H0PHf05_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*VBF_H0PHf05_W*(ME_H29/ME_H0PHf05)',   'FilesPerJob': 4, } 
signals_rw.append('VBF_H0PHf05_H29')  
 
samples['VBF_H0PHf05_H30'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'VBF_H0PHf05_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*VBF_H0PHf05_W*(ME_H30/ME_H0PHf05)',   'FilesPerJob': 4, } 
signals_rw.append('VBF_H0PHf05_H30')  
 
samples['VBF_H0PHf05_H31'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'VBF_H0PHf05_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*VBF_H0PHf05_W*(ME_H31/ME_H0PHf05)',   'FilesPerJob': 4, } 
signals_rw.append('VBF_H0PHf05_H31')  
 
samples['VBF_H0PHf05_H32'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'VBF_H0PHf05_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*VBF_H0PHf05_W*(ME_H32/ME_H0PHf05)',   'FilesPerJob': 4, } 
signals_rw.append('VBF_H0PHf05_H32')  
 
samples['VBF_H0PHf05_H33'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'VBF_H0PHf05_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*VBF_H0PHf05_W*(ME_H33/ME_H0PHf05)',   'FilesPerJob': 4, } 
signals_rw.append('VBF_H0PHf05_H33')  
 
samples['VBF_H0PHf05_H34'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'VBF_H0PHf05_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*VBF_H0PHf05_W*(ME_H34/ME_H0PHf05)',   'FilesPerJob': 4, } 
signals_rw.append('VBF_H0PHf05_H34')  
 
samples['VBF_H0PHf05_H35'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'VBF_H0PHf05_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*VBF_H0PHf05_W*(ME_H35/ME_H0PHf05)',   'FilesPerJob': 4, } 
signals_rw.append('VBF_H0PHf05_H35')  
 
samples['VBF_H0M_H1'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'VBF_H0M_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*VBF_H0M_W*(ME_H1/ME_H0M)',   'FilesPerJob': 4, } 
signals_rw.append('VBF_H0M_H1')  
 
samples['VBF_H0M_H2'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'VBF_H0M_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*VBF_H0M_W*(ME_H2/ME_H0M)',   'FilesPerJob': 4, } 
signals_rw.append('VBF_H0M_H2')  
 
samples['VBF_H0M_H3'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'VBF_H0M_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*VBF_H0M_W*(ME_H3/ME_H0M)',   'FilesPerJob': 4, } 
signals_rw.append('VBF_H0M_H3')  
 
samples['VBF_H0M_H4'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'VBF_H0M_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*VBF_H0M_W*(ME_H4/ME_H0M)',   'FilesPerJob': 4, } 
signals_rw.append('VBF_H0M_H4')  
 
samples['VBF_H0M_H5'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'VBF_H0M_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*VBF_H0M_W*(ME_H5/ME_H0M)',   'FilesPerJob': 4, } 
signals_rw.append('VBF_H0M_H5')  
 
samples['VBF_H0M_H6'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'VBF_H0M_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*VBF_H0M_W*(ME_H6/ME_H0M)',   'FilesPerJob': 4, } 
signals_rw.append('VBF_H0M_H6')  
 
samples['VBF_H0M_H7'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'VBF_H0M_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*VBF_H0M_W*(ME_H7/ME_H0M)',   'FilesPerJob': 4, } 
signals_rw.append('VBF_H0M_H7')  
 
samples['VBF_H0M_H8'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'VBF_H0M_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*VBF_H0M_W*(ME_H8/ME_H0M)',   'FilesPerJob': 4, } 
signals_rw.append('VBF_H0M_H8')  
 
samples['VBF_H0M_H9'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'VBF_H0M_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*VBF_H0M_W*(ME_H9/ME_H0M)',   'FilesPerJob': 4, } 
signals_rw.append('VBF_H0M_H9')  
 
samples['VBF_H0M_H10'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'VBF_H0M_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*VBF_H0M_W*(ME_H10/ME_H0M)',   'FilesPerJob': 4, } 
signals_rw.append('VBF_H0M_H10')  
 
samples['VBF_H0M_H11'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'VBF_H0M_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*VBF_H0M_W*(ME_H11/ME_H0M)',   'FilesPerJob': 4, } 
signals_rw.append('VBF_H0M_H11')  
 
samples['VBF_H0M_H12'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'VBF_H0M_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*VBF_H0M_W*(ME_H12/ME_H0M)',   'FilesPerJob': 4, } 
signals_rw.append('VBF_H0M_H12')  
 
samples['VBF_H0M_H13'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'VBF_H0M_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*VBF_H0M_W*(ME_H13/ME_H0M)',   'FilesPerJob': 4, } 
signals_rw.append('VBF_H0M_H13')  
 
samples['VBF_H0M_H14'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'VBF_H0M_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*VBF_H0M_W*(ME_H14/ME_H0M)',   'FilesPerJob': 4, } 
signals_rw.append('VBF_H0M_H14')  
 
samples['VBF_H0M_H15'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'VBF_H0M_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*VBF_H0M_W*(ME_H15/ME_H0M)',   'FilesPerJob': 4, } 
signals_rw.append('VBF_H0M_H15')  
 
samples['VBF_H0M_H16'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'VBF_H0M_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*VBF_H0M_W*(ME_H16/ME_H0M)',   'FilesPerJob': 4, } 
signals_rw.append('VBF_H0M_H16')  
 
samples['VBF_H0M_H17'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'VBF_H0M_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*VBF_H0M_W*(ME_H17/ME_H0M)',   'FilesPerJob': 4, } 
signals_rw.append('VBF_H0M_H17')  
 
samples['VBF_H0M_H18'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'VBF_H0M_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*VBF_H0M_W*(ME_H18/ME_H0M)',   'FilesPerJob': 4, } 
signals_rw.append('VBF_H0M_H18')  
 
samples['VBF_H0M_H19'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'VBF_H0M_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*VBF_H0M_W*(ME_H19/ME_H0M)',   'FilesPerJob': 4, } 
signals_rw.append('VBF_H0M_H19')  
 
samples['VBF_H0M_H20'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'VBF_H0M_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*VBF_H0M_W*(ME_H20/ME_H0M)',   'FilesPerJob': 4, } 
signals_rw.append('VBF_H0M_H20')  
 
samples['VBF_H0M_H21'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'VBF_H0M_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*VBF_H0M_W*(ME_H21/ME_H0M)',   'FilesPerJob': 4, } 
signals_rw.append('VBF_H0M_H21')  
 
samples['VBF_H0M_H22'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'VBF_H0M_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*VBF_H0M_W*(ME_H22/ME_H0M)',   'FilesPerJob': 4, } 
signals_rw.append('VBF_H0M_H22')  
 
samples['VBF_H0M_H23'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'VBF_H0M_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*VBF_H0M_W*(ME_H23/ME_H0M)',   'FilesPerJob': 4, } 
signals_rw.append('VBF_H0M_H23')  
 
samples['VBF_H0M_H24'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'VBF_H0M_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*VBF_H0M_W*(ME_H24/ME_H0M)',   'FilesPerJob': 4, } 
signals_rw.append('VBF_H0M_H24')  
 
samples['VBF_H0M_H25'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'VBF_H0M_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*VBF_H0M_W*(ME_H25/ME_H0M)',   'FilesPerJob': 4, } 
signals_rw.append('VBF_H0M_H25')  
 
samples['VBF_H0M_H26'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'VBF_H0M_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*VBF_H0M_W*(ME_H26/ME_H0M)',   'FilesPerJob': 4, } 
signals_rw.append('VBF_H0M_H26')  
 
samples['VBF_H0M_H27'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'VBF_H0M_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*VBF_H0M_W*(ME_H27/ME_H0M)',   'FilesPerJob': 4, } 
signals_rw.append('VBF_H0M_H27')  
 
samples['VBF_H0M_H28'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'VBF_H0M_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*VBF_H0M_W*(ME_H28/ME_H0M)',   'FilesPerJob': 4, } 
signals_rw.append('VBF_H0M_H28')  
 
samples['VBF_H0M_H29'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'VBF_H0M_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*VBF_H0M_W*(ME_H29/ME_H0M)',   'FilesPerJob': 4, } 
signals_rw.append('VBF_H0M_H29')  
 
samples['VBF_H0M_H30'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'VBF_H0M_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*VBF_H0M_W*(ME_H30/ME_H0M)',   'FilesPerJob': 4, } 
signals_rw.append('VBF_H0M_H30')  
 
samples['VBF_H0M_H31'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'VBF_H0M_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*VBF_H0M_W*(ME_H31/ME_H0M)',   'FilesPerJob': 4, } 
signals_rw.append('VBF_H0M_H31')  
 
samples['VBF_H0M_H32'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'VBF_H0M_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*VBF_H0M_W*(ME_H32/ME_H0M)',   'FilesPerJob': 4, } 
signals_rw.append('VBF_H0M_H32')  
 
samples['VBF_H0M_H33'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'VBF_H0M_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*VBF_H0M_W*(ME_H33/ME_H0M)',   'FilesPerJob': 4, } 
signals_rw.append('VBF_H0M_H33')  
 
samples['VBF_H0M_H34'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'VBF_H0M_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*VBF_H0M_W*(ME_H34/ME_H0M)',   'FilesPerJob': 4, } 
signals_rw.append('VBF_H0M_H34')  
 
samples['VBF_H0M_H35'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'VBF_H0M_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*VBF_H0M_W*(ME_H35/ME_H0M)',   'FilesPerJob': 4, } 
signals_rw.append('VBF_H0M_H35')  
 
samples['VBF_H0Mf05_H1'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'VBF_H0Mf05_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*VBF_H0Mf05_W*(ME_H1/ME_H0Mf05)',   'FilesPerJob': 4, } 
signals_rw.append('VBF_H0Mf05_H1')  
 
samples['VBF_H0Mf05_H2'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'VBF_H0Mf05_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*VBF_H0Mf05_W*(ME_H2/ME_H0Mf05)',   'FilesPerJob': 4, } 
signals_rw.append('VBF_H0Mf05_H2')  
 
samples['VBF_H0Mf05_H3'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'VBF_H0Mf05_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*VBF_H0Mf05_W*(ME_H3/ME_H0Mf05)',   'FilesPerJob': 4, } 
signals_rw.append('VBF_H0Mf05_H3')  
 
samples['VBF_H0Mf05_H4'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'VBF_H0Mf05_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*VBF_H0Mf05_W*(ME_H4/ME_H0Mf05)',   'FilesPerJob': 4, } 
signals_rw.append('VBF_H0Mf05_H4')  
 
samples['VBF_H0Mf05_H5'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'VBF_H0Mf05_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*VBF_H0Mf05_W*(ME_H5/ME_H0Mf05)',   'FilesPerJob': 4, } 
signals_rw.append('VBF_H0Mf05_H5')  
 
samples['VBF_H0Mf05_H6'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'VBF_H0Mf05_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*VBF_H0Mf05_W*(ME_H6/ME_H0Mf05)',   'FilesPerJob': 4, } 
signals_rw.append('VBF_H0Mf05_H6')  
 
samples['VBF_H0Mf05_H7'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'VBF_H0Mf05_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*VBF_H0Mf05_W*(ME_H7/ME_H0Mf05)',   'FilesPerJob': 4, } 
signals_rw.append('VBF_H0Mf05_H7')  
 
samples['VBF_H0Mf05_H8'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'VBF_H0Mf05_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*VBF_H0Mf05_W*(ME_H8/ME_H0Mf05)',   'FilesPerJob': 4, } 
signals_rw.append('VBF_H0Mf05_H8')  
 
samples['VBF_H0Mf05_H9'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'VBF_H0Mf05_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*VBF_H0Mf05_W*(ME_H9/ME_H0Mf05)',   'FilesPerJob': 4, } 
signals_rw.append('VBF_H0Mf05_H9')  
 
samples['VBF_H0Mf05_H10'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'VBF_H0Mf05_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*VBF_H0Mf05_W*(ME_H10/ME_H0Mf05)',   'FilesPerJob': 4, } 
signals_rw.append('VBF_H0Mf05_H10')  
 
samples['VBF_H0Mf05_H11'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'VBF_H0Mf05_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*VBF_H0Mf05_W*(ME_H11/ME_H0Mf05)',   'FilesPerJob': 4, } 
signals_rw.append('VBF_H0Mf05_H11')  
 
samples['VBF_H0Mf05_H12'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'VBF_H0Mf05_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*VBF_H0Mf05_W*(ME_H12/ME_H0Mf05)',   'FilesPerJob': 4, } 
signals_rw.append('VBF_H0Mf05_H12')  
 
samples['VBF_H0Mf05_H13'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'VBF_H0Mf05_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*VBF_H0Mf05_W*(ME_H13/ME_H0Mf05)',   'FilesPerJob': 4, } 
signals_rw.append('VBF_H0Mf05_H13')  
 
samples['VBF_H0Mf05_H14'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'VBF_H0Mf05_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*VBF_H0Mf05_W*(ME_H14/ME_H0Mf05)',   'FilesPerJob': 4, } 
signals_rw.append('VBF_H0Mf05_H14')  
 
samples['VBF_H0Mf05_H15'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'VBF_H0Mf05_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*VBF_H0Mf05_W*(ME_H15/ME_H0Mf05)',   'FilesPerJob': 4, } 
signals_rw.append('VBF_H0Mf05_H15')  
 
samples['VBF_H0Mf05_H16'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'VBF_H0Mf05_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*VBF_H0Mf05_W*(ME_H16/ME_H0Mf05)',   'FilesPerJob': 4, } 
signals_rw.append('VBF_H0Mf05_H16')  
 
samples['VBF_H0Mf05_H17'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'VBF_H0Mf05_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*VBF_H0Mf05_W*(ME_H17/ME_H0Mf05)',   'FilesPerJob': 4, } 
signals_rw.append('VBF_H0Mf05_H17')  
 
samples['VBF_H0Mf05_H18'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'VBF_H0Mf05_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*VBF_H0Mf05_W*(ME_H18/ME_H0Mf05)',   'FilesPerJob': 4, } 
signals_rw.append('VBF_H0Mf05_H18')  
 
samples['VBF_H0Mf05_H19'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'VBF_H0Mf05_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*VBF_H0Mf05_W*(ME_H19/ME_H0Mf05)',   'FilesPerJob': 4, } 
signals_rw.append('VBF_H0Mf05_H19')  
 
samples['VBF_H0Mf05_H20'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'VBF_H0Mf05_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*VBF_H0Mf05_W*(ME_H20/ME_H0Mf05)',   'FilesPerJob': 4, } 
signals_rw.append('VBF_H0Mf05_H20')  
 
samples['VBF_H0Mf05_H21'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'VBF_H0Mf05_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*VBF_H0Mf05_W*(ME_H21/ME_H0Mf05)',   'FilesPerJob': 4, } 
signals_rw.append('VBF_H0Mf05_H21')  
 
samples['VBF_H0Mf05_H22'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'VBF_H0Mf05_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*VBF_H0Mf05_W*(ME_H22/ME_H0Mf05)',   'FilesPerJob': 4, } 
signals_rw.append('VBF_H0Mf05_H22')  
 
samples['VBF_H0Mf05_H23'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'VBF_H0Mf05_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*VBF_H0Mf05_W*(ME_H23/ME_H0Mf05)',   'FilesPerJob': 4, } 
signals_rw.append('VBF_H0Mf05_H23')  
 
samples['VBF_H0Mf05_H24'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'VBF_H0Mf05_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*VBF_H0Mf05_W*(ME_H24/ME_H0Mf05)',   'FilesPerJob': 4, } 
signals_rw.append('VBF_H0Mf05_H24')  
 
samples['VBF_H0Mf05_H25'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'VBF_H0Mf05_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*VBF_H0Mf05_W*(ME_H25/ME_H0Mf05)',   'FilesPerJob': 4, } 
signals_rw.append('VBF_H0Mf05_H25')  
 
samples['VBF_H0Mf05_H26'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'VBF_H0Mf05_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*VBF_H0Mf05_W*(ME_H26/ME_H0Mf05)',   'FilesPerJob': 4, } 
signals_rw.append('VBF_H0Mf05_H26')  
 
samples['VBF_H0Mf05_H27'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'VBF_H0Mf05_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*VBF_H0Mf05_W*(ME_H27/ME_H0Mf05)',   'FilesPerJob': 4, } 
signals_rw.append('VBF_H0Mf05_H27')  
 
samples['VBF_H0Mf05_H28'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'VBF_H0Mf05_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*VBF_H0Mf05_W*(ME_H28/ME_H0Mf05)',   'FilesPerJob': 4, } 
signals_rw.append('VBF_H0Mf05_H28')  
 
samples['VBF_H0Mf05_H29'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'VBF_H0Mf05_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*VBF_H0Mf05_W*(ME_H29/ME_H0Mf05)',   'FilesPerJob': 4, } 
signals_rw.append('VBF_H0Mf05_H29')  
 
samples['VBF_H0Mf05_H30'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'VBF_H0Mf05_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*VBF_H0Mf05_W*(ME_H30/ME_H0Mf05)',   'FilesPerJob': 4, } 
signals_rw.append('VBF_H0Mf05_H30')  
 
samples['VBF_H0Mf05_H31'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'VBF_H0Mf05_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*VBF_H0Mf05_W*(ME_H31/ME_H0Mf05)',   'FilesPerJob': 4, } 
signals_rw.append('VBF_H0Mf05_H31')  
 
samples['VBF_H0Mf05_H32'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'VBF_H0Mf05_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*VBF_H0Mf05_W*(ME_H32/ME_H0Mf05)',   'FilesPerJob': 4, } 
signals_rw.append('VBF_H0Mf05_H32')  
 
samples['VBF_H0Mf05_H33'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'VBF_H0Mf05_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*VBF_H0Mf05_W*(ME_H33/ME_H0Mf05)',   'FilesPerJob': 4, } 
signals_rw.append('VBF_H0Mf05_H33')  
 
samples['VBF_H0Mf05_H34'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'VBF_H0Mf05_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*VBF_H0Mf05_W*(ME_H34/ME_H0Mf05)',   'FilesPerJob': 4, } 
signals_rw.append('VBF_H0Mf05_H34')  
 
samples['VBF_H0Mf05_H35'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'VBF_H0Mf05_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*VBF_H0Mf05_W*(ME_H35/ME_H0Mf05)',   'FilesPerJob': 4, } 
signals_rw.append('VBF_H0Mf05_H35')  
 
samples['VBF_H0L1_H1'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'VBF_H0L1_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*VBF_H0L1_W*(ME_H1/ME_H0L1)',   'FilesPerJob': 4, } 
signals_rw.append('VBF_H0L1_H1')  
 
samples['VBF_H0L1_H2'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'VBF_H0L1_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*VBF_H0L1_W*(ME_H2/ME_H0L1)',   'FilesPerJob': 4, } 
signals_rw.append('VBF_H0L1_H2')  
 
samples['VBF_H0L1_H3'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'VBF_H0L1_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*VBF_H0L1_W*(ME_H3/ME_H0L1)',   'FilesPerJob': 4, } 
signals_rw.append('VBF_H0L1_H3')  
 
samples['VBF_H0L1_H4'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'VBF_H0L1_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*VBF_H0L1_W*(ME_H4/ME_H0L1)',   'FilesPerJob': 4, } 
signals_rw.append('VBF_H0L1_H4')  
 
samples['VBF_H0L1_H5'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'VBF_H0L1_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*VBF_H0L1_W*(ME_H5/ME_H0L1)',   'FilesPerJob': 4, } 
signals_rw.append('VBF_H0L1_H5')  
 
samples['VBF_H0L1_H6'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'VBF_H0L1_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*VBF_H0L1_W*(ME_H6/ME_H0L1)',   'FilesPerJob': 4, } 
signals_rw.append('VBF_H0L1_H6')  
 
samples['VBF_H0L1_H7'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'VBF_H0L1_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*VBF_H0L1_W*(ME_H7/ME_H0L1)',   'FilesPerJob': 4, } 
signals_rw.append('VBF_H0L1_H7')  
 
samples['VBF_H0L1_H8'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'VBF_H0L1_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*VBF_H0L1_W*(ME_H8/ME_H0L1)',   'FilesPerJob': 4, } 
signals_rw.append('VBF_H0L1_H8')  
 
samples['VBF_H0L1_H9'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'VBF_H0L1_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*VBF_H0L1_W*(ME_H9/ME_H0L1)',   'FilesPerJob': 4, } 
signals_rw.append('VBF_H0L1_H9')  
 
samples['VBF_H0L1_H10'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'VBF_H0L1_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*VBF_H0L1_W*(ME_H10/ME_H0L1)',   'FilesPerJob': 4, } 
signals_rw.append('VBF_H0L1_H10')  
 
samples['VBF_H0L1_H11'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'VBF_H0L1_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*VBF_H0L1_W*(ME_H11/ME_H0L1)',   'FilesPerJob': 4, } 
signals_rw.append('VBF_H0L1_H11')  
 
samples['VBF_H0L1_H12'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'VBF_H0L1_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*VBF_H0L1_W*(ME_H12/ME_H0L1)',   'FilesPerJob': 4, } 
signals_rw.append('VBF_H0L1_H12')  
 
samples['VBF_H0L1_H13'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'VBF_H0L1_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*VBF_H0L1_W*(ME_H13/ME_H0L1)',   'FilesPerJob': 4, } 
signals_rw.append('VBF_H0L1_H13')  
 
samples['VBF_H0L1_H14'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'VBF_H0L1_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*VBF_H0L1_W*(ME_H14/ME_H0L1)',   'FilesPerJob': 4, } 
signals_rw.append('VBF_H0L1_H14')  
 
samples['VBF_H0L1_H15'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'VBF_H0L1_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*VBF_H0L1_W*(ME_H15/ME_H0L1)',   'FilesPerJob': 4, } 
signals_rw.append('VBF_H0L1_H15')  
 
samples['VBF_H0L1_H16'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'VBF_H0L1_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*VBF_H0L1_W*(ME_H16/ME_H0L1)',   'FilesPerJob': 4, } 
signals_rw.append('VBF_H0L1_H16')  
 
samples['VBF_H0L1_H17'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'VBF_H0L1_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*VBF_H0L1_W*(ME_H17/ME_H0L1)',   'FilesPerJob': 4, } 
signals_rw.append('VBF_H0L1_H17')  
 
samples['VBF_H0L1_H18'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'VBF_H0L1_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*VBF_H0L1_W*(ME_H18/ME_H0L1)',   'FilesPerJob': 4, } 
signals_rw.append('VBF_H0L1_H18')  
 
samples['VBF_H0L1_H19'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'VBF_H0L1_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*VBF_H0L1_W*(ME_H19/ME_H0L1)',   'FilesPerJob': 4, } 
signals_rw.append('VBF_H0L1_H19')  
 
samples['VBF_H0L1_H20'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'VBF_H0L1_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*VBF_H0L1_W*(ME_H20/ME_H0L1)',   'FilesPerJob': 4, } 
signals_rw.append('VBF_H0L1_H20')  
 
samples['VBF_H0L1_H21'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'VBF_H0L1_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*VBF_H0L1_W*(ME_H21/ME_H0L1)',   'FilesPerJob': 4, } 
signals_rw.append('VBF_H0L1_H21')  
 
samples['VBF_H0L1_H22'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'VBF_H0L1_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*VBF_H0L1_W*(ME_H22/ME_H0L1)',   'FilesPerJob': 4, } 
signals_rw.append('VBF_H0L1_H22')  
 
samples['VBF_H0L1_H23'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'VBF_H0L1_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*VBF_H0L1_W*(ME_H23/ME_H0L1)',   'FilesPerJob': 4, } 
signals_rw.append('VBF_H0L1_H23')  
 
samples['VBF_H0L1_H24'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'VBF_H0L1_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*VBF_H0L1_W*(ME_H24/ME_H0L1)',   'FilesPerJob': 4, } 
signals_rw.append('VBF_H0L1_H24')  
 
samples['VBF_H0L1_H25'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'VBF_H0L1_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*VBF_H0L1_W*(ME_H25/ME_H0L1)',   'FilesPerJob': 4, } 
signals_rw.append('VBF_H0L1_H25')  
 
samples['VBF_H0L1_H26'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'VBF_H0L1_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*VBF_H0L1_W*(ME_H26/ME_H0L1)',   'FilesPerJob': 4, } 
signals_rw.append('VBF_H0L1_H26')  
 
samples['VBF_H0L1_H27'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'VBF_H0L1_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*VBF_H0L1_W*(ME_H27/ME_H0L1)',   'FilesPerJob': 4, } 
signals_rw.append('VBF_H0L1_H27')  
 
samples['VBF_H0L1_H28'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'VBF_H0L1_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*VBF_H0L1_W*(ME_H28/ME_H0L1)',   'FilesPerJob': 4, } 
signals_rw.append('VBF_H0L1_H28')  
 
samples['VBF_H0L1_H29'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'VBF_H0L1_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*VBF_H0L1_W*(ME_H29/ME_H0L1)',   'FilesPerJob': 4, } 
signals_rw.append('VBF_H0L1_H29')  
 
samples['VBF_H0L1_H30'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'VBF_H0L1_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*VBF_H0L1_W*(ME_H30/ME_H0L1)',   'FilesPerJob': 4, } 
signals_rw.append('VBF_H0L1_H30')  
 
samples['VBF_H0L1_H31'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'VBF_H0L1_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*VBF_H0L1_W*(ME_H31/ME_H0L1)',   'FilesPerJob': 4, } 
signals_rw.append('VBF_H0L1_H31')  
 
samples['VBF_H0L1_H32'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'VBF_H0L1_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*VBF_H0L1_W*(ME_H32/ME_H0L1)',   'FilesPerJob': 4, } 
signals_rw.append('VBF_H0L1_H32')  
 
samples['VBF_H0L1_H33'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'VBF_H0L1_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*VBF_H0L1_W*(ME_H33/ME_H0L1)',   'FilesPerJob': 4, } 
signals_rw.append('VBF_H0L1_H33')  
 
samples['VBF_H0L1_H34'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'VBF_H0L1_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*VBF_H0L1_W*(ME_H34/ME_H0L1)',   'FilesPerJob': 4, } 
signals_rw.append('VBF_H0L1_H34')  
 
samples['VBF_H0L1_H35'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'VBF_H0L1_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*VBF_H0L1_W*(ME_H35/ME_H0L1)',   'FilesPerJob': 4, } 
signals_rw.append('VBF_H0L1_H35')  
 
samples['VBF_H0L1f05_H1'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'VBF_H0L1f05_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*VBF_H0L1f05_W*(ME_H1/ME_H0L1f05)',   'FilesPerJob': 4, } 
signals_rw.append('VBF_H0L1f05_H1')  
 
samples['VBF_H0L1f05_H2'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'VBF_H0L1f05_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*VBF_H0L1f05_W*(ME_H2/ME_H0L1f05)',   'FilesPerJob': 4, } 
signals_rw.append('VBF_H0L1f05_H2')  
 
samples['VBF_H0L1f05_H3'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'VBF_H0L1f05_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*VBF_H0L1f05_W*(ME_H3/ME_H0L1f05)',   'FilesPerJob': 4, } 
signals_rw.append('VBF_H0L1f05_H3')  
 
samples['VBF_H0L1f05_H4'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'VBF_H0L1f05_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*VBF_H0L1f05_W*(ME_H4/ME_H0L1f05)',   'FilesPerJob': 4, } 
signals_rw.append('VBF_H0L1f05_H4')  
 
samples['VBF_H0L1f05_H5'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'VBF_H0L1f05_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*VBF_H0L1f05_W*(ME_H5/ME_H0L1f05)',   'FilesPerJob': 4, } 
signals_rw.append('VBF_H0L1f05_H5')  
 
samples['VBF_H0L1f05_H6'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'VBF_H0L1f05_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*VBF_H0L1f05_W*(ME_H6/ME_H0L1f05)',   'FilesPerJob': 4, } 
signals_rw.append('VBF_H0L1f05_H6')  
 
samples['VBF_H0L1f05_H7'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'VBF_H0L1f05_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*VBF_H0L1f05_W*(ME_H7/ME_H0L1f05)',   'FilesPerJob': 4, } 
signals_rw.append('VBF_H0L1f05_H7')  
 
samples['VBF_H0L1f05_H8'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'VBF_H0L1f05_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*VBF_H0L1f05_W*(ME_H8/ME_H0L1f05)',   'FilesPerJob': 4, } 
signals_rw.append('VBF_H0L1f05_H8')  
 
samples['VBF_H0L1f05_H9'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'VBF_H0L1f05_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*VBF_H0L1f05_W*(ME_H9/ME_H0L1f05)',   'FilesPerJob': 4, } 
signals_rw.append('VBF_H0L1f05_H9')  
 
samples['VBF_H0L1f05_H10'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'VBF_H0L1f05_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*VBF_H0L1f05_W*(ME_H10/ME_H0L1f05)',   'FilesPerJob': 4, } 
signals_rw.append('VBF_H0L1f05_H10')  
 
samples['VBF_H0L1f05_H11'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'VBF_H0L1f05_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*VBF_H0L1f05_W*(ME_H11/ME_H0L1f05)',   'FilesPerJob': 4, } 
signals_rw.append('VBF_H0L1f05_H11')  
 
samples['VBF_H0L1f05_H12'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'VBF_H0L1f05_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*VBF_H0L1f05_W*(ME_H12/ME_H0L1f05)',   'FilesPerJob': 4, } 
signals_rw.append('VBF_H0L1f05_H12')  
 
samples['VBF_H0L1f05_H13'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'VBF_H0L1f05_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*VBF_H0L1f05_W*(ME_H13/ME_H0L1f05)',   'FilesPerJob': 4, } 
signals_rw.append('VBF_H0L1f05_H13')  
 
samples['VBF_H0L1f05_H14'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'VBF_H0L1f05_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*VBF_H0L1f05_W*(ME_H14/ME_H0L1f05)',   'FilesPerJob': 4, } 
signals_rw.append('VBF_H0L1f05_H14')  
 
samples['VBF_H0L1f05_H15'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'VBF_H0L1f05_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*VBF_H0L1f05_W*(ME_H15/ME_H0L1f05)',   'FilesPerJob': 4, } 
signals_rw.append('VBF_H0L1f05_H15')  
 
samples['VBF_H0L1f05_H16'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'VBF_H0L1f05_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*VBF_H0L1f05_W*(ME_H16/ME_H0L1f05)',   'FilesPerJob': 4, } 
signals_rw.append('VBF_H0L1f05_H16')  
 
samples['VBF_H0L1f05_H17'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'VBF_H0L1f05_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*VBF_H0L1f05_W*(ME_H17/ME_H0L1f05)',   'FilesPerJob': 4, } 
signals_rw.append('VBF_H0L1f05_H17')  
 
samples['VBF_H0L1f05_H18'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'VBF_H0L1f05_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*VBF_H0L1f05_W*(ME_H18/ME_H0L1f05)',   'FilesPerJob': 4, } 
signals_rw.append('VBF_H0L1f05_H18')  
 
samples['VBF_H0L1f05_H19'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'VBF_H0L1f05_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*VBF_H0L1f05_W*(ME_H19/ME_H0L1f05)',   'FilesPerJob': 4, } 
signals_rw.append('VBF_H0L1f05_H19')  
 
samples['VBF_H0L1f05_H20'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'VBF_H0L1f05_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*VBF_H0L1f05_W*(ME_H20/ME_H0L1f05)',   'FilesPerJob': 4, } 
signals_rw.append('VBF_H0L1f05_H20')  
 
samples['VBF_H0L1f05_H21'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'VBF_H0L1f05_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*VBF_H0L1f05_W*(ME_H21/ME_H0L1f05)',   'FilesPerJob': 4, } 
signals_rw.append('VBF_H0L1f05_H21')  
 
samples['VBF_H0L1f05_H22'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'VBF_H0L1f05_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*VBF_H0L1f05_W*(ME_H22/ME_H0L1f05)',   'FilesPerJob': 4, } 
signals_rw.append('VBF_H0L1f05_H22')  
 
samples['VBF_H0L1f05_H23'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'VBF_H0L1f05_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*VBF_H0L1f05_W*(ME_H23/ME_H0L1f05)',   'FilesPerJob': 4, } 
signals_rw.append('VBF_H0L1f05_H23')  
 
samples['VBF_H0L1f05_H24'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'VBF_H0L1f05_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*VBF_H0L1f05_W*(ME_H24/ME_H0L1f05)',   'FilesPerJob': 4, } 
signals_rw.append('VBF_H0L1f05_H24')  
 
samples['VBF_H0L1f05_H25'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'VBF_H0L1f05_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*VBF_H0L1f05_W*(ME_H25/ME_H0L1f05)',   'FilesPerJob': 4, } 
signals_rw.append('VBF_H0L1f05_H25')  
 
samples['VBF_H0L1f05_H26'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'VBF_H0L1f05_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*VBF_H0L1f05_W*(ME_H26/ME_H0L1f05)',   'FilesPerJob': 4, } 
signals_rw.append('VBF_H0L1f05_H26')  
 
samples['VBF_H0L1f05_H27'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'VBF_H0L1f05_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*VBF_H0L1f05_W*(ME_H27/ME_H0L1f05)',   'FilesPerJob': 4, } 
signals_rw.append('VBF_H0L1f05_H27')  
 
samples['VBF_H0L1f05_H28'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'VBF_H0L1f05_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*VBF_H0L1f05_W*(ME_H28/ME_H0L1f05)',   'FilesPerJob': 4, } 
signals_rw.append('VBF_H0L1f05_H28')  
 
samples['VBF_H0L1f05_H29'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'VBF_H0L1f05_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*VBF_H0L1f05_W*(ME_H29/ME_H0L1f05)',   'FilesPerJob': 4, } 
signals_rw.append('VBF_H0L1f05_H29')  
 
samples['VBF_H0L1f05_H30'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'VBF_H0L1f05_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*VBF_H0L1f05_W*(ME_H30/ME_H0L1f05)',   'FilesPerJob': 4, } 
signals_rw.append('VBF_H0L1f05_H30')  
 
samples['VBF_H0L1f05_H31'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'VBF_H0L1f05_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*VBF_H0L1f05_W*(ME_H31/ME_H0L1f05)',   'FilesPerJob': 4, } 
signals_rw.append('VBF_H0L1f05_H31')  
 
samples['VBF_H0L1f05_H32'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'VBF_H0L1f05_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*VBF_H0L1f05_W*(ME_H32/ME_H0L1f05)',   'FilesPerJob': 4, } 
signals_rw.append('VBF_H0L1f05_H32')  
 
samples['VBF_H0L1f05_H33'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'VBF_H0L1f05_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*VBF_H0L1f05_W*(ME_H33/ME_H0L1f05)',   'FilesPerJob': 4, } 
signals_rw.append('VBF_H0L1f05_H33')  
 
samples['VBF_H0L1f05_H34'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'VBF_H0L1f05_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*VBF_H0L1f05_W*(ME_H34/ME_H0L1f05)',   'FilesPerJob': 4, } 
signals_rw.append('VBF_H0L1f05_H34')  
 
samples['VBF_H0L1f05_H35'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'VBF_H0L1f05_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*VBF_H0L1f05_W*(ME_H35/ME_H0L1f05)',   'FilesPerJob': 4, } 
signals_rw.append('VBF_H0L1f05_H35')  
 
# WH MC samples 
 
# Original WH samples 
 
samples['WH_H0PM'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'WH_H0PM_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*WH_H0PM_W',   'FilesPerJob': 4, } 
 
samples['WH_H0PH'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'WH_H0PH_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*WH_H0PH_W',   'FilesPerJob': 4, } 
 
samples['WH_H0PHf05'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'WH_H0PHf05_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*WH_H0PHf05_W',   'FilesPerJob': 4, } 
 
samples['WH_H0M'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'WH_H0M_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*WH_H0M_W',   'FilesPerJob': 4, } 
 
samples['WH_H0Mf05'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'WH_H0Mf05_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*WH_H0Mf05_W',   'FilesPerJob': 4, } 
 
samples['WH_H0L1'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'WH_H0L1_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*WH_H0L1_W',   'FilesPerJob': 4, } 
 
samples['WH_H0L1f05'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'WH_H0L1f05_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*WH_H0L1f05_W',   'FilesPerJob': 4, } 
 
# Reweighted WH samples 
 
samples['WH_H0PM_H1'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'WH_H0PM_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*WH_H0PM_W*(ME_H1/ME_H0PM)',   'FilesPerJob': 4, } 
signals_rw.append('WH_H0PM_H1')  
 
samples['WH_H0PM_H2'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'WH_H0PM_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*WH_H0PM_W*(ME_H2/ME_H0PM)',   'FilesPerJob': 4, } 
signals_rw.append('WH_H0PM_H2')  
 
samples['WH_H0PM_H3'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'WH_H0PM_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*WH_H0PM_W*(ME_H3/ME_H0PM)',   'FilesPerJob': 4, } 
signals_rw.append('WH_H0PM_H3')  
 
samples['WH_H0PM_H4'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'WH_H0PM_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*WH_H0PM_W*(ME_H4/ME_H0PM)',   'FilesPerJob': 4, } 
signals_rw.append('WH_H0PM_H4')  
 
samples['WH_H0PM_H5'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'WH_H0PM_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*WH_H0PM_W*(ME_H5/ME_H0PM)',   'FilesPerJob': 4, } 
signals_rw.append('WH_H0PM_H5')  
 
samples['WH_H0PM_H6'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'WH_H0PM_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*WH_H0PM_W*(ME_H6/ME_H0PM)',   'FilesPerJob': 4, } 
signals_rw.append('WH_H0PM_H6')  
 
samples['WH_H0PM_H7'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'WH_H0PM_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*WH_H0PM_W*(ME_H7/ME_H0PM)',   'FilesPerJob': 4, } 
signals_rw.append('WH_H0PM_H7')  
 
samples['WH_H0PM_H8'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'WH_H0PM_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*WH_H0PM_W*(ME_H8/ME_H0PM)',   'FilesPerJob': 4, } 
signals_rw.append('WH_H0PM_H8')  
 
samples['WH_H0PM_H9'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'WH_H0PM_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*WH_H0PM_W*(ME_H9/ME_H0PM)',   'FilesPerJob': 4, } 
signals_rw.append('WH_H0PM_H9')  
 
samples['WH_H0PM_H10'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'WH_H0PM_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*WH_H0PM_W*(ME_H10/ME_H0PM)',   'FilesPerJob': 4, } 
signals_rw.append('WH_H0PM_H10')  
 
samples['WH_H0PM_H11'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'WH_H0PM_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*WH_H0PM_W*(ME_H11/ME_H0PM)',   'FilesPerJob': 4, } 
signals_rw.append('WH_H0PM_H11')  
 
samples['WH_H0PM_H12'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'WH_H0PM_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*WH_H0PM_W*(ME_H12/ME_H0PM)',   'FilesPerJob': 4, } 
signals_rw.append('WH_H0PM_H12')  
 
samples['WH_H0PM_H13'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'WH_H0PM_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*WH_H0PM_W*(ME_H13/ME_H0PM)',   'FilesPerJob': 4, } 
signals_rw.append('WH_H0PM_H13')  
 
samples['WH_H0PM_H14'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'WH_H0PM_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*WH_H0PM_W*(ME_H14/ME_H0PM)',   'FilesPerJob': 4, } 
signals_rw.append('WH_H0PM_H14')  
 
samples['WH_H0PM_H15'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'WH_H0PM_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*WH_H0PM_W*(ME_H15/ME_H0PM)',   'FilesPerJob': 4, } 
signals_rw.append('WH_H0PM_H15')  
 
samples['WH_H0PM_H16'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'WH_H0PM_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*WH_H0PM_W*(ME_H16/ME_H0PM)',   'FilesPerJob': 4, } 
signals_rw.append('WH_H0PM_H16')  
 
samples['WH_H0PM_H17'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'WH_H0PM_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*WH_H0PM_W*(ME_H17/ME_H0PM)',   'FilesPerJob': 4, } 
signals_rw.append('WH_H0PM_H17')  
 
samples['WH_H0PM_H18'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'WH_H0PM_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*WH_H0PM_W*(ME_H18/ME_H0PM)',   'FilesPerJob': 4, } 
signals_rw.append('WH_H0PM_H18')  
 
samples['WH_H0PM_H19'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'WH_H0PM_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*WH_H0PM_W*(ME_H19/ME_H0PM)',   'FilesPerJob': 4, } 
signals_rw.append('WH_H0PM_H19')  
 
samples['WH_H0PM_H20'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'WH_H0PM_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*WH_H0PM_W*(ME_H20/ME_H0PM)',   'FilesPerJob': 4, } 
signals_rw.append('WH_H0PM_H20')  
 
samples['WH_H0PM_H21'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'WH_H0PM_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*WH_H0PM_W*(ME_H21/ME_H0PM)',   'FilesPerJob': 4, } 
signals_rw.append('WH_H0PM_H21')  
 
samples['WH_H0PM_H22'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'WH_H0PM_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*WH_H0PM_W*(ME_H22/ME_H0PM)',   'FilesPerJob': 4, } 
signals_rw.append('WH_H0PM_H22')  
 
samples['WH_H0PM_H23'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'WH_H0PM_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*WH_H0PM_W*(ME_H23/ME_H0PM)',   'FilesPerJob': 4, } 
signals_rw.append('WH_H0PM_H23')  
 
samples['WH_H0PM_H24'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'WH_H0PM_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*WH_H0PM_W*(ME_H24/ME_H0PM)',   'FilesPerJob': 4, } 
signals_rw.append('WH_H0PM_H24')  
 
samples['WH_H0PM_H25'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'WH_H0PM_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*WH_H0PM_W*(ME_H25/ME_H0PM)',   'FilesPerJob': 4, } 
signals_rw.append('WH_H0PM_H25')  
 
samples['WH_H0PM_H26'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'WH_H0PM_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*WH_H0PM_W*(ME_H26/ME_H0PM)',   'FilesPerJob': 4, } 
signals_rw.append('WH_H0PM_H26')  
 
samples['WH_H0PM_H27'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'WH_H0PM_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*WH_H0PM_W*(ME_H27/ME_H0PM)',   'FilesPerJob': 4, } 
signals_rw.append('WH_H0PM_H27')  
 
samples['WH_H0PM_H28'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'WH_H0PM_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*WH_H0PM_W*(ME_H28/ME_H0PM)',   'FilesPerJob': 4, } 
signals_rw.append('WH_H0PM_H28')  
 
samples['WH_H0PM_H29'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'WH_H0PM_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*WH_H0PM_W*(ME_H29/ME_H0PM)',   'FilesPerJob': 4, } 
signals_rw.append('WH_H0PM_H29')  
 
samples['WH_H0PM_H30'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'WH_H0PM_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*WH_H0PM_W*(ME_H30/ME_H0PM)',   'FilesPerJob': 4, } 
signals_rw.append('WH_H0PM_H30')  
 
samples['WH_H0PM_H31'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'WH_H0PM_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*WH_H0PM_W*(ME_H31/ME_H0PM)',   'FilesPerJob': 4, } 
signals_rw.append('WH_H0PM_H31')  
 
samples['WH_H0PM_H32'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'WH_H0PM_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*WH_H0PM_W*(ME_H32/ME_H0PM)',   'FilesPerJob': 4, } 
signals_rw.append('WH_H0PM_H32')  
 
samples['WH_H0PM_H33'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'WH_H0PM_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*WH_H0PM_W*(ME_H33/ME_H0PM)',   'FilesPerJob': 4, } 
signals_rw.append('WH_H0PM_H33')  
 
samples['WH_H0PM_H34'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'WH_H0PM_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*WH_H0PM_W*(ME_H34/ME_H0PM)',   'FilesPerJob': 4, } 
signals_rw.append('WH_H0PM_H34')  
 
samples['WH_H0PM_H35'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'WH_H0PM_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*WH_H0PM_W*(ME_H35/ME_H0PM)',   'FilesPerJob': 4, } 
signals_rw.append('WH_H0PM_H35')  
 
samples['WH_H0PH_H1'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'WH_H0PH_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*WH_H0PH_W*(ME_H1/ME_H0PH)',   'FilesPerJob': 4, } 
signals_rw.append('WH_H0PH_H1')  
 
samples['WH_H0PH_H2'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'WH_H0PH_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*WH_H0PH_W*(ME_H2/ME_H0PH)',   'FilesPerJob': 4, } 
signals_rw.append('WH_H0PH_H2')  
 
samples['WH_H0PH_H3'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'WH_H0PH_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*WH_H0PH_W*(ME_H3/ME_H0PH)',   'FilesPerJob': 4, } 
signals_rw.append('WH_H0PH_H3')  
 
samples['WH_H0PH_H4'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'WH_H0PH_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*WH_H0PH_W*(ME_H4/ME_H0PH)',   'FilesPerJob': 4, } 
signals_rw.append('WH_H0PH_H4')  
 
samples['WH_H0PH_H5'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'WH_H0PH_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*WH_H0PH_W*(ME_H5/ME_H0PH)',   'FilesPerJob': 4, } 
signals_rw.append('WH_H0PH_H5')  
 
samples['WH_H0PH_H6'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'WH_H0PH_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*WH_H0PH_W*(ME_H6/ME_H0PH)',   'FilesPerJob': 4, } 
signals_rw.append('WH_H0PH_H6')  
 
samples['WH_H0PH_H7'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'WH_H0PH_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*WH_H0PH_W*(ME_H7/ME_H0PH)',   'FilesPerJob': 4, } 
signals_rw.append('WH_H0PH_H7')  
 
samples['WH_H0PH_H8'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'WH_H0PH_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*WH_H0PH_W*(ME_H8/ME_H0PH)',   'FilesPerJob': 4, } 
signals_rw.append('WH_H0PH_H8')  
 
samples['WH_H0PH_H9'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'WH_H0PH_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*WH_H0PH_W*(ME_H9/ME_H0PH)',   'FilesPerJob': 4, } 
signals_rw.append('WH_H0PH_H9')  
 
samples['WH_H0PH_H10'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'WH_H0PH_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*WH_H0PH_W*(ME_H10/ME_H0PH)',   'FilesPerJob': 4, } 
signals_rw.append('WH_H0PH_H10')  
 
samples['WH_H0PH_H11'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'WH_H0PH_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*WH_H0PH_W*(ME_H11/ME_H0PH)',   'FilesPerJob': 4, } 
signals_rw.append('WH_H0PH_H11')  
 
samples['WH_H0PH_H12'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'WH_H0PH_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*WH_H0PH_W*(ME_H12/ME_H0PH)',   'FilesPerJob': 4, } 
signals_rw.append('WH_H0PH_H12')  
 
samples['WH_H0PH_H13'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'WH_H0PH_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*WH_H0PH_W*(ME_H13/ME_H0PH)',   'FilesPerJob': 4, } 
signals_rw.append('WH_H0PH_H13')  
 
samples['WH_H0PH_H14'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'WH_H0PH_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*WH_H0PH_W*(ME_H14/ME_H0PH)',   'FilesPerJob': 4, } 
signals_rw.append('WH_H0PH_H14')  
 
samples['WH_H0PH_H15'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'WH_H0PH_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*WH_H0PH_W*(ME_H15/ME_H0PH)',   'FilesPerJob': 4, } 
signals_rw.append('WH_H0PH_H15')  
 
samples['WH_H0PH_H16'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'WH_H0PH_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*WH_H0PH_W*(ME_H16/ME_H0PH)',   'FilesPerJob': 4, } 
signals_rw.append('WH_H0PH_H16')  
 
samples['WH_H0PH_H17'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'WH_H0PH_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*WH_H0PH_W*(ME_H17/ME_H0PH)',   'FilesPerJob': 4, } 
signals_rw.append('WH_H0PH_H17')  
 
samples['WH_H0PH_H18'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'WH_H0PH_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*WH_H0PH_W*(ME_H18/ME_H0PH)',   'FilesPerJob': 4, } 
signals_rw.append('WH_H0PH_H18')  
 
samples['WH_H0PH_H19'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'WH_H0PH_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*WH_H0PH_W*(ME_H19/ME_H0PH)',   'FilesPerJob': 4, } 
signals_rw.append('WH_H0PH_H19')  
 
samples['WH_H0PH_H20'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'WH_H0PH_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*WH_H0PH_W*(ME_H20/ME_H0PH)',   'FilesPerJob': 4, } 
signals_rw.append('WH_H0PH_H20')  
 
samples['WH_H0PH_H21'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'WH_H0PH_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*WH_H0PH_W*(ME_H21/ME_H0PH)',   'FilesPerJob': 4, } 
signals_rw.append('WH_H0PH_H21')  
 
samples['WH_H0PH_H22'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'WH_H0PH_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*WH_H0PH_W*(ME_H22/ME_H0PH)',   'FilesPerJob': 4, } 
signals_rw.append('WH_H0PH_H22')  
 
samples['WH_H0PH_H23'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'WH_H0PH_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*WH_H0PH_W*(ME_H23/ME_H0PH)',   'FilesPerJob': 4, } 
signals_rw.append('WH_H0PH_H23')  
 
samples['WH_H0PH_H24'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'WH_H0PH_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*WH_H0PH_W*(ME_H24/ME_H0PH)',   'FilesPerJob': 4, } 
signals_rw.append('WH_H0PH_H24')  
 
samples['WH_H0PH_H25'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'WH_H0PH_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*WH_H0PH_W*(ME_H25/ME_H0PH)',   'FilesPerJob': 4, } 
signals_rw.append('WH_H0PH_H25')  
 
samples['WH_H0PH_H26'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'WH_H0PH_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*WH_H0PH_W*(ME_H26/ME_H0PH)',   'FilesPerJob': 4, } 
signals_rw.append('WH_H0PH_H26')  
 
samples['WH_H0PH_H27'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'WH_H0PH_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*WH_H0PH_W*(ME_H27/ME_H0PH)',   'FilesPerJob': 4, } 
signals_rw.append('WH_H0PH_H27')  
 
samples['WH_H0PH_H28'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'WH_H0PH_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*WH_H0PH_W*(ME_H28/ME_H0PH)',   'FilesPerJob': 4, } 
signals_rw.append('WH_H0PH_H28')  
 
samples['WH_H0PH_H29'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'WH_H0PH_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*WH_H0PH_W*(ME_H29/ME_H0PH)',   'FilesPerJob': 4, } 
signals_rw.append('WH_H0PH_H29')  
 
samples['WH_H0PH_H30'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'WH_H0PH_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*WH_H0PH_W*(ME_H30/ME_H0PH)',   'FilesPerJob': 4, } 
signals_rw.append('WH_H0PH_H30')  
 
samples['WH_H0PH_H31'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'WH_H0PH_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*WH_H0PH_W*(ME_H31/ME_H0PH)',   'FilesPerJob': 4, } 
signals_rw.append('WH_H0PH_H31')  
 
samples['WH_H0PH_H32'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'WH_H0PH_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*WH_H0PH_W*(ME_H32/ME_H0PH)',   'FilesPerJob': 4, } 
signals_rw.append('WH_H0PH_H32')  
 
samples['WH_H0PH_H33'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'WH_H0PH_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*WH_H0PH_W*(ME_H33/ME_H0PH)',   'FilesPerJob': 4, } 
signals_rw.append('WH_H0PH_H33')  
 
samples['WH_H0PH_H34'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'WH_H0PH_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*WH_H0PH_W*(ME_H34/ME_H0PH)',   'FilesPerJob': 4, } 
signals_rw.append('WH_H0PH_H34')  
 
samples['WH_H0PH_H35'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'WH_H0PH_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*WH_H0PH_W*(ME_H35/ME_H0PH)',   'FilesPerJob': 4, } 
signals_rw.append('WH_H0PH_H35')  
 
samples['WH_H0PHf05_H1'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'WH_H0PHf05_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*WH_H0PHf05_W*(ME_H1/ME_H0PHf05)',   'FilesPerJob': 4, } 
signals_rw.append('WH_H0PHf05_H1')  
 
samples['WH_H0PHf05_H2'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'WH_H0PHf05_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*WH_H0PHf05_W*(ME_H2/ME_H0PHf05)',   'FilesPerJob': 4, } 
signals_rw.append('WH_H0PHf05_H2')  
 
samples['WH_H0PHf05_H3'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'WH_H0PHf05_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*WH_H0PHf05_W*(ME_H3/ME_H0PHf05)',   'FilesPerJob': 4, } 
signals_rw.append('WH_H0PHf05_H3')  
 
samples['WH_H0PHf05_H4'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'WH_H0PHf05_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*WH_H0PHf05_W*(ME_H4/ME_H0PHf05)',   'FilesPerJob': 4, } 
signals_rw.append('WH_H0PHf05_H4')  
 
samples['WH_H0PHf05_H5'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'WH_H0PHf05_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*WH_H0PHf05_W*(ME_H5/ME_H0PHf05)',   'FilesPerJob': 4, } 
signals_rw.append('WH_H0PHf05_H5')  
 
samples['WH_H0PHf05_H6'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'WH_H0PHf05_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*WH_H0PHf05_W*(ME_H6/ME_H0PHf05)',   'FilesPerJob': 4, } 
signals_rw.append('WH_H0PHf05_H6')  
 
samples['WH_H0PHf05_H7'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'WH_H0PHf05_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*WH_H0PHf05_W*(ME_H7/ME_H0PHf05)',   'FilesPerJob': 4, } 
signals_rw.append('WH_H0PHf05_H7')  
 
samples['WH_H0PHf05_H8'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'WH_H0PHf05_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*WH_H0PHf05_W*(ME_H8/ME_H0PHf05)',   'FilesPerJob': 4, } 
signals_rw.append('WH_H0PHf05_H8')  
 
samples['WH_H0PHf05_H9'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'WH_H0PHf05_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*WH_H0PHf05_W*(ME_H9/ME_H0PHf05)',   'FilesPerJob': 4, } 
signals_rw.append('WH_H0PHf05_H9')  
 
samples['WH_H0PHf05_H10'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'WH_H0PHf05_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*WH_H0PHf05_W*(ME_H10/ME_H0PHf05)',   'FilesPerJob': 4, } 
signals_rw.append('WH_H0PHf05_H10')  
 
samples['WH_H0PHf05_H11'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'WH_H0PHf05_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*WH_H0PHf05_W*(ME_H11/ME_H0PHf05)',   'FilesPerJob': 4, } 
signals_rw.append('WH_H0PHf05_H11')  
 
samples['WH_H0PHf05_H12'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'WH_H0PHf05_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*WH_H0PHf05_W*(ME_H12/ME_H0PHf05)',   'FilesPerJob': 4, } 
signals_rw.append('WH_H0PHf05_H12')  
 
samples['WH_H0PHf05_H13'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'WH_H0PHf05_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*WH_H0PHf05_W*(ME_H13/ME_H0PHf05)',   'FilesPerJob': 4, } 
signals_rw.append('WH_H0PHf05_H13')  
 
samples['WH_H0PHf05_H14'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'WH_H0PHf05_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*WH_H0PHf05_W*(ME_H14/ME_H0PHf05)',   'FilesPerJob': 4, } 
signals_rw.append('WH_H0PHf05_H14')  
 
samples['WH_H0PHf05_H15'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'WH_H0PHf05_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*WH_H0PHf05_W*(ME_H15/ME_H0PHf05)',   'FilesPerJob': 4, } 
signals_rw.append('WH_H0PHf05_H15')  
 
samples['WH_H0PHf05_H16'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'WH_H0PHf05_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*WH_H0PHf05_W*(ME_H16/ME_H0PHf05)',   'FilesPerJob': 4, } 
signals_rw.append('WH_H0PHf05_H16')  
 
samples['WH_H0PHf05_H17'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'WH_H0PHf05_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*WH_H0PHf05_W*(ME_H17/ME_H0PHf05)',   'FilesPerJob': 4, } 
signals_rw.append('WH_H0PHf05_H17')  
 
samples['WH_H0PHf05_H18'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'WH_H0PHf05_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*WH_H0PHf05_W*(ME_H18/ME_H0PHf05)',   'FilesPerJob': 4, } 
signals_rw.append('WH_H0PHf05_H18')  
 
samples['WH_H0PHf05_H19'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'WH_H0PHf05_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*WH_H0PHf05_W*(ME_H19/ME_H0PHf05)',   'FilesPerJob': 4, } 
signals_rw.append('WH_H0PHf05_H19')  
 
samples['WH_H0PHf05_H20'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'WH_H0PHf05_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*WH_H0PHf05_W*(ME_H20/ME_H0PHf05)',   'FilesPerJob': 4, } 
signals_rw.append('WH_H0PHf05_H20')  
 
samples['WH_H0PHf05_H21'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'WH_H0PHf05_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*WH_H0PHf05_W*(ME_H21/ME_H0PHf05)',   'FilesPerJob': 4, } 
signals_rw.append('WH_H0PHf05_H21')  
 
samples['WH_H0PHf05_H22'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'WH_H0PHf05_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*WH_H0PHf05_W*(ME_H22/ME_H0PHf05)',   'FilesPerJob': 4, } 
signals_rw.append('WH_H0PHf05_H22')  
 
samples['WH_H0PHf05_H23'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'WH_H0PHf05_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*WH_H0PHf05_W*(ME_H23/ME_H0PHf05)',   'FilesPerJob': 4, } 
signals_rw.append('WH_H0PHf05_H23')  
 
samples['WH_H0PHf05_H24'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'WH_H0PHf05_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*WH_H0PHf05_W*(ME_H24/ME_H0PHf05)',   'FilesPerJob': 4, } 
signals_rw.append('WH_H0PHf05_H24')  
 
samples['WH_H0PHf05_H25'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'WH_H0PHf05_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*WH_H0PHf05_W*(ME_H25/ME_H0PHf05)',   'FilesPerJob': 4, } 
signals_rw.append('WH_H0PHf05_H25')  
 
samples['WH_H0PHf05_H26'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'WH_H0PHf05_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*WH_H0PHf05_W*(ME_H26/ME_H0PHf05)',   'FilesPerJob': 4, } 
signals_rw.append('WH_H0PHf05_H26')  
 
samples['WH_H0PHf05_H27'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'WH_H0PHf05_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*WH_H0PHf05_W*(ME_H27/ME_H0PHf05)',   'FilesPerJob': 4, } 
signals_rw.append('WH_H0PHf05_H27')  
 
samples['WH_H0PHf05_H28'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'WH_H0PHf05_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*WH_H0PHf05_W*(ME_H28/ME_H0PHf05)',   'FilesPerJob': 4, } 
signals_rw.append('WH_H0PHf05_H28')  
 
samples['WH_H0PHf05_H29'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'WH_H0PHf05_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*WH_H0PHf05_W*(ME_H29/ME_H0PHf05)',   'FilesPerJob': 4, } 
signals_rw.append('WH_H0PHf05_H29')  
 
samples['WH_H0PHf05_H30'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'WH_H0PHf05_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*WH_H0PHf05_W*(ME_H30/ME_H0PHf05)',   'FilesPerJob': 4, } 
signals_rw.append('WH_H0PHf05_H30')  
 
samples['WH_H0PHf05_H31'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'WH_H0PHf05_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*WH_H0PHf05_W*(ME_H31/ME_H0PHf05)',   'FilesPerJob': 4, } 
signals_rw.append('WH_H0PHf05_H31')  
 
samples['WH_H0PHf05_H32'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'WH_H0PHf05_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*WH_H0PHf05_W*(ME_H32/ME_H0PHf05)',   'FilesPerJob': 4, } 
signals_rw.append('WH_H0PHf05_H32')  
 
samples['WH_H0PHf05_H33'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'WH_H0PHf05_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*WH_H0PHf05_W*(ME_H33/ME_H0PHf05)',   'FilesPerJob': 4, } 
signals_rw.append('WH_H0PHf05_H33')  
 
samples['WH_H0PHf05_H34'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'WH_H0PHf05_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*WH_H0PHf05_W*(ME_H34/ME_H0PHf05)',   'FilesPerJob': 4, } 
signals_rw.append('WH_H0PHf05_H34')  
 
samples['WH_H0PHf05_H35'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'WH_H0PHf05_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*WH_H0PHf05_W*(ME_H35/ME_H0PHf05)',   'FilesPerJob': 4, } 
signals_rw.append('WH_H0PHf05_H35')  
 
samples['WH_H0M_H1'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'WH_H0M_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*WH_H0M_W*(ME_H1/ME_H0M)',   'FilesPerJob': 4, } 
signals_rw.append('WH_H0M_H1')  
 
samples['WH_H0M_H2'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'WH_H0M_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*WH_H0M_W*(ME_H2/ME_H0M)',   'FilesPerJob': 4, } 
signals_rw.append('WH_H0M_H2')  
 
samples['WH_H0M_H3'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'WH_H0M_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*WH_H0M_W*(ME_H3/ME_H0M)',   'FilesPerJob': 4, } 
signals_rw.append('WH_H0M_H3')  
 
samples['WH_H0M_H4'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'WH_H0M_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*WH_H0M_W*(ME_H4/ME_H0M)',   'FilesPerJob': 4, } 
signals_rw.append('WH_H0M_H4')  
 
samples['WH_H0M_H5'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'WH_H0M_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*WH_H0M_W*(ME_H5/ME_H0M)',   'FilesPerJob': 4, } 
signals_rw.append('WH_H0M_H5')  
 
samples['WH_H0M_H6'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'WH_H0M_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*WH_H0M_W*(ME_H6/ME_H0M)',   'FilesPerJob': 4, } 
signals_rw.append('WH_H0M_H6')  
 
samples['WH_H0M_H7'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'WH_H0M_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*WH_H0M_W*(ME_H7/ME_H0M)',   'FilesPerJob': 4, } 
signals_rw.append('WH_H0M_H7')  
 
samples['WH_H0M_H8'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'WH_H0M_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*WH_H0M_W*(ME_H8/ME_H0M)',   'FilesPerJob': 4, } 
signals_rw.append('WH_H0M_H8')  
 
samples['WH_H0M_H9'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'WH_H0M_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*WH_H0M_W*(ME_H9/ME_H0M)',   'FilesPerJob': 4, } 
signals_rw.append('WH_H0M_H9')  
 
samples['WH_H0M_H10'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'WH_H0M_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*WH_H0M_W*(ME_H10/ME_H0M)',   'FilesPerJob': 4, } 
signals_rw.append('WH_H0M_H10')  
 
samples['WH_H0M_H11'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'WH_H0M_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*WH_H0M_W*(ME_H11/ME_H0M)',   'FilesPerJob': 4, } 
signals_rw.append('WH_H0M_H11')  
 
samples['WH_H0M_H12'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'WH_H0M_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*WH_H0M_W*(ME_H12/ME_H0M)',   'FilesPerJob': 4, } 
signals_rw.append('WH_H0M_H12')  
 
samples['WH_H0M_H13'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'WH_H0M_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*WH_H0M_W*(ME_H13/ME_H0M)',   'FilesPerJob': 4, } 
signals_rw.append('WH_H0M_H13')  
 
samples['WH_H0M_H14'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'WH_H0M_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*WH_H0M_W*(ME_H14/ME_H0M)',   'FilesPerJob': 4, } 
signals_rw.append('WH_H0M_H14')  
 
samples['WH_H0M_H15'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'WH_H0M_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*WH_H0M_W*(ME_H15/ME_H0M)',   'FilesPerJob': 4, } 
signals_rw.append('WH_H0M_H15')  
 
samples['WH_H0M_H16'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'WH_H0M_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*WH_H0M_W*(ME_H16/ME_H0M)',   'FilesPerJob': 4, } 
signals_rw.append('WH_H0M_H16')  
 
samples['WH_H0M_H17'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'WH_H0M_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*WH_H0M_W*(ME_H17/ME_H0M)',   'FilesPerJob': 4, } 
signals_rw.append('WH_H0M_H17')  
 
samples['WH_H0M_H18'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'WH_H0M_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*WH_H0M_W*(ME_H18/ME_H0M)',   'FilesPerJob': 4, } 
signals_rw.append('WH_H0M_H18')  
 
samples['WH_H0M_H19'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'WH_H0M_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*WH_H0M_W*(ME_H19/ME_H0M)',   'FilesPerJob': 4, } 
signals_rw.append('WH_H0M_H19')  
 
samples['WH_H0M_H20'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'WH_H0M_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*WH_H0M_W*(ME_H20/ME_H0M)',   'FilesPerJob': 4, } 
signals_rw.append('WH_H0M_H20')  
 
samples['WH_H0M_H21'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'WH_H0M_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*WH_H0M_W*(ME_H21/ME_H0M)',   'FilesPerJob': 4, } 
signals_rw.append('WH_H0M_H21')  
 
samples['WH_H0M_H22'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'WH_H0M_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*WH_H0M_W*(ME_H22/ME_H0M)',   'FilesPerJob': 4, } 
signals_rw.append('WH_H0M_H22')  
 
samples['WH_H0M_H23'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'WH_H0M_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*WH_H0M_W*(ME_H23/ME_H0M)',   'FilesPerJob': 4, } 
signals_rw.append('WH_H0M_H23')  
 
samples['WH_H0M_H24'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'WH_H0M_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*WH_H0M_W*(ME_H24/ME_H0M)',   'FilesPerJob': 4, } 
signals_rw.append('WH_H0M_H24')  
 
samples['WH_H0M_H25'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'WH_H0M_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*WH_H0M_W*(ME_H25/ME_H0M)',   'FilesPerJob': 4, } 
signals_rw.append('WH_H0M_H25')  
 
samples['WH_H0M_H26'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'WH_H0M_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*WH_H0M_W*(ME_H26/ME_H0M)',   'FilesPerJob': 4, } 
signals_rw.append('WH_H0M_H26')  
 
samples['WH_H0M_H27'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'WH_H0M_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*WH_H0M_W*(ME_H27/ME_H0M)',   'FilesPerJob': 4, } 
signals_rw.append('WH_H0M_H27')  
 
samples['WH_H0M_H28'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'WH_H0M_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*WH_H0M_W*(ME_H28/ME_H0M)',   'FilesPerJob': 4, } 
signals_rw.append('WH_H0M_H28')  
 
samples['WH_H0M_H29'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'WH_H0M_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*WH_H0M_W*(ME_H29/ME_H0M)',   'FilesPerJob': 4, } 
signals_rw.append('WH_H0M_H29')  
 
samples['WH_H0M_H30'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'WH_H0M_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*WH_H0M_W*(ME_H30/ME_H0M)',   'FilesPerJob': 4, } 
signals_rw.append('WH_H0M_H30')  
 
samples['WH_H0M_H31'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'WH_H0M_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*WH_H0M_W*(ME_H31/ME_H0M)',   'FilesPerJob': 4, } 
signals_rw.append('WH_H0M_H31')  
 
samples['WH_H0M_H32'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'WH_H0M_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*WH_H0M_W*(ME_H32/ME_H0M)',   'FilesPerJob': 4, } 
signals_rw.append('WH_H0M_H32')  
 
samples['WH_H0M_H33'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'WH_H0M_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*WH_H0M_W*(ME_H33/ME_H0M)',   'FilesPerJob': 4, } 
signals_rw.append('WH_H0M_H33')  
 
samples['WH_H0M_H34'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'WH_H0M_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*WH_H0M_W*(ME_H34/ME_H0M)',   'FilesPerJob': 4, } 
signals_rw.append('WH_H0M_H34')  
 
samples['WH_H0M_H35'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'WH_H0M_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*WH_H0M_W*(ME_H35/ME_H0M)',   'FilesPerJob': 4, } 
signals_rw.append('WH_H0M_H35')  
 
samples['WH_H0Mf05_H1'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'WH_H0Mf05_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*WH_H0Mf05_W*(ME_H1/ME_H0Mf05)',   'FilesPerJob': 4, } 
signals_rw.append('WH_H0Mf05_H1')  
 
samples['WH_H0Mf05_H2'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'WH_H0Mf05_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*WH_H0Mf05_W*(ME_H2/ME_H0Mf05)',   'FilesPerJob': 4, } 
signals_rw.append('WH_H0Mf05_H2')  
 
samples['WH_H0Mf05_H3'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'WH_H0Mf05_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*WH_H0Mf05_W*(ME_H3/ME_H0Mf05)',   'FilesPerJob': 4, } 
signals_rw.append('WH_H0Mf05_H3')  
 
samples['WH_H0Mf05_H4'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'WH_H0Mf05_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*WH_H0Mf05_W*(ME_H4/ME_H0Mf05)',   'FilesPerJob': 4, } 
signals_rw.append('WH_H0Mf05_H4')  
 
samples['WH_H0Mf05_H5'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'WH_H0Mf05_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*WH_H0Mf05_W*(ME_H5/ME_H0Mf05)',   'FilesPerJob': 4, } 
signals_rw.append('WH_H0Mf05_H5')  
 
samples['WH_H0Mf05_H6'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'WH_H0Mf05_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*WH_H0Mf05_W*(ME_H6/ME_H0Mf05)',   'FilesPerJob': 4, } 
signals_rw.append('WH_H0Mf05_H6')  
 
samples['WH_H0Mf05_H7'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'WH_H0Mf05_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*WH_H0Mf05_W*(ME_H7/ME_H0Mf05)',   'FilesPerJob': 4, } 
signals_rw.append('WH_H0Mf05_H7')  
 
samples['WH_H0Mf05_H8'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'WH_H0Mf05_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*WH_H0Mf05_W*(ME_H8/ME_H0Mf05)',   'FilesPerJob': 4, } 
signals_rw.append('WH_H0Mf05_H8')  
 
samples['WH_H0Mf05_H9'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'WH_H0Mf05_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*WH_H0Mf05_W*(ME_H9/ME_H0Mf05)',   'FilesPerJob': 4, } 
signals_rw.append('WH_H0Mf05_H9')  
 
samples['WH_H0Mf05_H10'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'WH_H0Mf05_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*WH_H0Mf05_W*(ME_H10/ME_H0Mf05)',   'FilesPerJob': 4, } 
signals_rw.append('WH_H0Mf05_H10')  
 
samples['WH_H0Mf05_H11'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'WH_H0Mf05_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*WH_H0Mf05_W*(ME_H11/ME_H0Mf05)',   'FilesPerJob': 4, } 
signals_rw.append('WH_H0Mf05_H11')  
 
samples['WH_H0Mf05_H12'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'WH_H0Mf05_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*WH_H0Mf05_W*(ME_H12/ME_H0Mf05)',   'FilesPerJob': 4, } 
signals_rw.append('WH_H0Mf05_H12')  
 
samples['WH_H0Mf05_H13'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'WH_H0Mf05_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*WH_H0Mf05_W*(ME_H13/ME_H0Mf05)',   'FilesPerJob': 4, } 
signals_rw.append('WH_H0Mf05_H13')  
 
samples['WH_H0Mf05_H14'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'WH_H0Mf05_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*WH_H0Mf05_W*(ME_H14/ME_H0Mf05)',   'FilesPerJob': 4, } 
signals_rw.append('WH_H0Mf05_H14')  
 
samples['WH_H0Mf05_H15'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'WH_H0Mf05_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*WH_H0Mf05_W*(ME_H15/ME_H0Mf05)',   'FilesPerJob': 4, } 
signals_rw.append('WH_H0Mf05_H15')  
 
samples['WH_H0Mf05_H16'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'WH_H0Mf05_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*WH_H0Mf05_W*(ME_H16/ME_H0Mf05)',   'FilesPerJob': 4, } 
signals_rw.append('WH_H0Mf05_H16')  
 
samples['WH_H0Mf05_H17'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'WH_H0Mf05_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*WH_H0Mf05_W*(ME_H17/ME_H0Mf05)',   'FilesPerJob': 4, } 
signals_rw.append('WH_H0Mf05_H17')  
 
samples['WH_H0Mf05_H18'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'WH_H0Mf05_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*WH_H0Mf05_W*(ME_H18/ME_H0Mf05)',   'FilesPerJob': 4, } 
signals_rw.append('WH_H0Mf05_H18')  
 
samples['WH_H0Mf05_H19'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'WH_H0Mf05_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*WH_H0Mf05_W*(ME_H19/ME_H0Mf05)',   'FilesPerJob': 4, } 
signals_rw.append('WH_H0Mf05_H19')  
 
samples['WH_H0Mf05_H20'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'WH_H0Mf05_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*WH_H0Mf05_W*(ME_H20/ME_H0Mf05)',   'FilesPerJob': 4, } 
signals_rw.append('WH_H0Mf05_H20')  
 
samples['WH_H0Mf05_H21'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'WH_H0Mf05_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*WH_H0Mf05_W*(ME_H21/ME_H0Mf05)',   'FilesPerJob': 4, } 
signals_rw.append('WH_H0Mf05_H21')  
 
samples['WH_H0Mf05_H22'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'WH_H0Mf05_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*WH_H0Mf05_W*(ME_H22/ME_H0Mf05)',   'FilesPerJob': 4, } 
signals_rw.append('WH_H0Mf05_H22')  
 
samples['WH_H0Mf05_H23'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'WH_H0Mf05_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*WH_H0Mf05_W*(ME_H23/ME_H0Mf05)',   'FilesPerJob': 4, } 
signals_rw.append('WH_H0Mf05_H23')  
 
samples['WH_H0Mf05_H24'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'WH_H0Mf05_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*WH_H0Mf05_W*(ME_H24/ME_H0Mf05)',   'FilesPerJob': 4, } 
signals_rw.append('WH_H0Mf05_H24')  
 
samples['WH_H0Mf05_H25'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'WH_H0Mf05_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*WH_H0Mf05_W*(ME_H25/ME_H0Mf05)',   'FilesPerJob': 4, } 
signals_rw.append('WH_H0Mf05_H25')  
 
samples['WH_H0Mf05_H26'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'WH_H0Mf05_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*WH_H0Mf05_W*(ME_H26/ME_H0Mf05)',   'FilesPerJob': 4, } 
signals_rw.append('WH_H0Mf05_H26')  
 
samples['WH_H0Mf05_H27'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'WH_H0Mf05_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*WH_H0Mf05_W*(ME_H27/ME_H0Mf05)',   'FilesPerJob': 4, } 
signals_rw.append('WH_H0Mf05_H27')  
 
samples['WH_H0Mf05_H28'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'WH_H0Mf05_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*WH_H0Mf05_W*(ME_H28/ME_H0Mf05)',   'FilesPerJob': 4, } 
signals_rw.append('WH_H0Mf05_H28')  
 
samples['WH_H0Mf05_H29'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'WH_H0Mf05_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*WH_H0Mf05_W*(ME_H29/ME_H0Mf05)',   'FilesPerJob': 4, } 
signals_rw.append('WH_H0Mf05_H29')  
 
samples['WH_H0Mf05_H30'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'WH_H0Mf05_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*WH_H0Mf05_W*(ME_H30/ME_H0Mf05)',   'FilesPerJob': 4, } 
signals_rw.append('WH_H0Mf05_H30')  
 
samples['WH_H0Mf05_H31'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'WH_H0Mf05_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*WH_H0Mf05_W*(ME_H31/ME_H0Mf05)',   'FilesPerJob': 4, } 
signals_rw.append('WH_H0Mf05_H31')  
 
samples['WH_H0Mf05_H32'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'WH_H0Mf05_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*WH_H0Mf05_W*(ME_H32/ME_H0Mf05)',   'FilesPerJob': 4, } 
signals_rw.append('WH_H0Mf05_H32')  
 
samples['WH_H0Mf05_H33'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'WH_H0Mf05_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*WH_H0Mf05_W*(ME_H33/ME_H0Mf05)',   'FilesPerJob': 4, } 
signals_rw.append('WH_H0Mf05_H33')  
 
samples['WH_H0Mf05_H34'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'WH_H0Mf05_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*WH_H0Mf05_W*(ME_H34/ME_H0Mf05)',   'FilesPerJob': 4, } 
signals_rw.append('WH_H0Mf05_H34')  
 
samples['WH_H0Mf05_H35'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'WH_H0Mf05_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*WH_H0Mf05_W*(ME_H35/ME_H0Mf05)',   'FilesPerJob': 4, } 
signals_rw.append('WH_H0Mf05_H35')  
 
samples['WH_H0L1_H1'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'WH_H0L1_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*WH_H0L1_W*(ME_H1/ME_H0L1)',   'FilesPerJob': 4, } 
signals_rw.append('WH_H0L1_H1')  
 
samples['WH_H0L1_H2'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'WH_H0L1_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*WH_H0L1_W*(ME_H2/ME_H0L1)',   'FilesPerJob': 4, } 
signals_rw.append('WH_H0L1_H2')  
 
samples['WH_H0L1_H3'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'WH_H0L1_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*WH_H0L1_W*(ME_H3/ME_H0L1)',   'FilesPerJob': 4, } 
signals_rw.append('WH_H0L1_H3')  
 
samples['WH_H0L1_H4'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'WH_H0L1_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*WH_H0L1_W*(ME_H4/ME_H0L1)',   'FilesPerJob': 4, } 
signals_rw.append('WH_H0L1_H4')  
 
samples['WH_H0L1_H5'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'WH_H0L1_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*WH_H0L1_W*(ME_H5/ME_H0L1)',   'FilesPerJob': 4, } 
signals_rw.append('WH_H0L1_H5')  
 
samples['WH_H0L1_H6'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'WH_H0L1_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*WH_H0L1_W*(ME_H6/ME_H0L1)',   'FilesPerJob': 4, } 
signals_rw.append('WH_H0L1_H6')  
 
samples['WH_H0L1_H7'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'WH_H0L1_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*WH_H0L1_W*(ME_H7/ME_H0L1)',   'FilesPerJob': 4, } 
signals_rw.append('WH_H0L1_H7')  
 
samples['WH_H0L1_H8'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'WH_H0L1_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*WH_H0L1_W*(ME_H8/ME_H0L1)',   'FilesPerJob': 4, } 
signals_rw.append('WH_H0L1_H8')  
 
samples['WH_H0L1_H9'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'WH_H0L1_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*WH_H0L1_W*(ME_H9/ME_H0L1)',   'FilesPerJob': 4, } 
signals_rw.append('WH_H0L1_H9')  
 
samples['WH_H0L1_H10'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'WH_H0L1_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*WH_H0L1_W*(ME_H10/ME_H0L1)',   'FilesPerJob': 4, } 
signals_rw.append('WH_H0L1_H10')  
 
samples['WH_H0L1_H11'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'WH_H0L1_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*WH_H0L1_W*(ME_H11/ME_H0L1)',   'FilesPerJob': 4, } 
signals_rw.append('WH_H0L1_H11')  
 
samples['WH_H0L1_H12'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'WH_H0L1_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*WH_H0L1_W*(ME_H12/ME_H0L1)',   'FilesPerJob': 4, } 
signals_rw.append('WH_H0L1_H12')  
 
samples['WH_H0L1_H13'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'WH_H0L1_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*WH_H0L1_W*(ME_H13/ME_H0L1)',   'FilesPerJob': 4, } 
signals_rw.append('WH_H0L1_H13')  
 
samples['WH_H0L1_H14'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'WH_H0L1_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*WH_H0L1_W*(ME_H14/ME_H0L1)',   'FilesPerJob': 4, } 
signals_rw.append('WH_H0L1_H14')  
 
samples['WH_H0L1_H15'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'WH_H0L1_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*WH_H0L1_W*(ME_H15/ME_H0L1)',   'FilesPerJob': 4, } 
signals_rw.append('WH_H0L1_H15')  
 
samples['WH_H0L1_H16'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'WH_H0L1_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*WH_H0L1_W*(ME_H16/ME_H0L1)',   'FilesPerJob': 4, } 
signals_rw.append('WH_H0L1_H16')  
 
samples['WH_H0L1_H17'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'WH_H0L1_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*WH_H0L1_W*(ME_H17/ME_H0L1)',   'FilesPerJob': 4, } 
signals_rw.append('WH_H0L1_H17')  
 
samples['WH_H0L1_H18'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'WH_H0L1_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*WH_H0L1_W*(ME_H18/ME_H0L1)',   'FilesPerJob': 4, } 
signals_rw.append('WH_H0L1_H18')  
 
samples['WH_H0L1_H19'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'WH_H0L1_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*WH_H0L1_W*(ME_H19/ME_H0L1)',   'FilesPerJob': 4, } 
signals_rw.append('WH_H0L1_H19')  
 
samples['WH_H0L1_H20'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'WH_H0L1_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*WH_H0L1_W*(ME_H20/ME_H0L1)',   'FilesPerJob': 4, } 
signals_rw.append('WH_H0L1_H20')  
 
samples['WH_H0L1_H21'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'WH_H0L1_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*WH_H0L1_W*(ME_H21/ME_H0L1)',   'FilesPerJob': 4, } 
signals_rw.append('WH_H0L1_H21')  
 
samples['WH_H0L1_H22'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'WH_H0L1_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*WH_H0L1_W*(ME_H22/ME_H0L1)',   'FilesPerJob': 4, } 
signals_rw.append('WH_H0L1_H22')  
 
samples['WH_H0L1_H23'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'WH_H0L1_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*WH_H0L1_W*(ME_H23/ME_H0L1)',   'FilesPerJob': 4, } 
signals_rw.append('WH_H0L1_H23')  
 
samples['WH_H0L1_H24'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'WH_H0L1_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*WH_H0L1_W*(ME_H24/ME_H0L1)',   'FilesPerJob': 4, } 
signals_rw.append('WH_H0L1_H24')  
 
samples['WH_H0L1_H25'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'WH_H0L1_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*WH_H0L1_W*(ME_H25/ME_H0L1)',   'FilesPerJob': 4, } 
signals_rw.append('WH_H0L1_H25')  
 
samples['WH_H0L1_H26'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'WH_H0L1_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*WH_H0L1_W*(ME_H26/ME_H0L1)',   'FilesPerJob': 4, } 
signals_rw.append('WH_H0L1_H26')  
 
samples['WH_H0L1_H27'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'WH_H0L1_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*WH_H0L1_W*(ME_H27/ME_H0L1)',   'FilesPerJob': 4, } 
signals_rw.append('WH_H0L1_H27')  
 
samples['WH_H0L1_H28'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'WH_H0L1_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*WH_H0L1_W*(ME_H28/ME_H0L1)',   'FilesPerJob': 4, } 
signals_rw.append('WH_H0L1_H28')  
 
samples['WH_H0L1_H29'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'WH_H0L1_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*WH_H0L1_W*(ME_H29/ME_H0L1)',   'FilesPerJob': 4, } 
signals_rw.append('WH_H0L1_H29')  
 
samples['WH_H0L1_H30'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'WH_H0L1_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*WH_H0L1_W*(ME_H30/ME_H0L1)',   'FilesPerJob': 4, } 
signals_rw.append('WH_H0L1_H30')  
 
samples['WH_H0L1_H31'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'WH_H0L1_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*WH_H0L1_W*(ME_H31/ME_H0L1)',   'FilesPerJob': 4, } 
signals_rw.append('WH_H0L1_H31')  
 
samples['WH_H0L1_H32'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'WH_H0L1_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*WH_H0L1_W*(ME_H32/ME_H0L1)',   'FilesPerJob': 4, } 
signals_rw.append('WH_H0L1_H32')  
 
samples['WH_H0L1_H33'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'WH_H0L1_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*WH_H0L1_W*(ME_H33/ME_H0L1)',   'FilesPerJob': 4, } 
signals_rw.append('WH_H0L1_H33')  
 
samples['WH_H0L1_H34'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'WH_H0L1_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*WH_H0L1_W*(ME_H34/ME_H0L1)',   'FilesPerJob': 4, } 
signals_rw.append('WH_H0L1_H34')  
 
samples['WH_H0L1_H35'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'WH_H0L1_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*WH_H0L1_W*(ME_H35/ME_H0L1)',   'FilesPerJob': 4, } 
signals_rw.append('WH_H0L1_H35')  
 
samples['WH_H0L1f05_H1'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'WH_H0L1f05_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*WH_H0L1f05_W*(ME_H1/ME_H0L1f05)',   'FilesPerJob': 4, } 
signals_rw.append('WH_H0L1f05_H1')  
 
samples['WH_H0L1f05_H2'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'WH_H0L1f05_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*WH_H0L1f05_W*(ME_H2/ME_H0L1f05)',   'FilesPerJob': 4, } 
signals_rw.append('WH_H0L1f05_H2')  
 
samples['WH_H0L1f05_H3'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'WH_H0L1f05_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*WH_H0L1f05_W*(ME_H3/ME_H0L1f05)',   'FilesPerJob': 4, } 
signals_rw.append('WH_H0L1f05_H3')  
 
samples['WH_H0L1f05_H4'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'WH_H0L1f05_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*WH_H0L1f05_W*(ME_H4/ME_H0L1f05)',   'FilesPerJob': 4, } 
signals_rw.append('WH_H0L1f05_H4')  
 
samples['WH_H0L1f05_H5'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'WH_H0L1f05_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*WH_H0L1f05_W*(ME_H5/ME_H0L1f05)',   'FilesPerJob': 4, } 
signals_rw.append('WH_H0L1f05_H5')  
 
samples['WH_H0L1f05_H6'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'WH_H0L1f05_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*WH_H0L1f05_W*(ME_H6/ME_H0L1f05)',   'FilesPerJob': 4, } 
signals_rw.append('WH_H0L1f05_H6')  
 
samples['WH_H0L1f05_H7'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'WH_H0L1f05_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*WH_H0L1f05_W*(ME_H7/ME_H0L1f05)',   'FilesPerJob': 4, } 
signals_rw.append('WH_H0L1f05_H7')  
 
samples['WH_H0L1f05_H8'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'WH_H0L1f05_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*WH_H0L1f05_W*(ME_H8/ME_H0L1f05)',   'FilesPerJob': 4, } 
signals_rw.append('WH_H0L1f05_H8')  
 
samples['WH_H0L1f05_H9'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'WH_H0L1f05_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*WH_H0L1f05_W*(ME_H9/ME_H0L1f05)',   'FilesPerJob': 4, } 
signals_rw.append('WH_H0L1f05_H9')  
 
samples['WH_H0L1f05_H10'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'WH_H0L1f05_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*WH_H0L1f05_W*(ME_H10/ME_H0L1f05)',   'FilesPerJob': 4, } 
signals_rw.append('WH_H0L1f05_H10')  
 
samples['WH_H0L1f05_H11'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'WH_H0L1f05_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*WH_H0L1f05_W*(ME_H11/ME_H0L1f05)',   'FilesPerJob': 4, } 
signals_rw.append('WH_H0L1f05_H11')  
 
samples['WH_H0L1f05_H12'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'WH_H0L1f05_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*WH_H0L1f05_W*(ME_H12/ME_H0L1f05)',   'FilesPerJob': 4, } 
signals_rw.append('WH_H0L1f05_H12')  
 
samples['WH_H0L1f05_H13'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'WH_H0L1f05_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*WH_H0L1f05_W*(ME_H13/ME_H0L1f05)',   'FilesPerJob': 4, } 
signals_rw.append('WH_H0L1f05_H13')  
 
samples['WH_H0L1f05_H14'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'WH_H0L1f05_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*WH_H0L1f05_W*(ME_H14/ME_H0L1f05)',   'FilesPerJob': 4, } 
signals_rw.append('WH_H0L1f05_H14')  
 
samples['WH_H0L1f05_H15'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'WH_H0L1f05_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*WH_H0L1f05_W*(ME_H15/ME_H0L1f05)',   'FilesPerJob': 4, } 
signals_rw.append('WH_H0L1f05_H15')  
 
samples['WH_H0L1f05_H16'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'WH_H0L1f05_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*WH_H0L1f05_W*(ME_H16/ME_H0L1f05)',   'FilesPerJob': 4, } 
signals_rw.append('WH_H0L1f05_H16')  
 
samples['WH_H0L1f05_H17'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'WH_H0L1f05_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*WH_H0L1f05_W*(ME_H17/ME_H0L1f05)',   'FilesPerJob': 4, } 
signals_rw.append('WH_H0L1f05_H17')  
 
samples['WH_H0L1f05_H18'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'WH_H0L1f05_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*WH_H0L1f05_W*(ME_H18/ME_H0L1f05)',   'FilesPerJob': 4, } 
signals_rw.append('WH_H0L1f05_H18')  
 
samples['WH_H0L1f05_H19'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'WH_H0L1f05_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*WH_H0L1f05_W*(ME_H19/ME_H0L1f05)',   'FilesPerJob': 4, } 
signals_rw.append('WH_H0L1f05_H19')  
 
samples['WH_H0L1f05_H20'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'WH_H0L1f05_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*WH_H0L1f05_W*(ME_H20/ME_H0L1f05)',   'FilesPerJob': 4, } 
signals_rw.append('WH_H0L1f05_H20')  
 
samples['WH_H0L1f05_H21'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'WH_H0L1f05_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*WH_H0L1f05_W*(ME_H21/ME_H0L1f05)',   'FilesPerJob': 4, } 
signals_rw.append('WH_H0L1f05_H21')  
 
samples['WH_H0L1f05_H22'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'WH_H0L1f05_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*WH_H0L1f05_W*(ME_H22/ME_H0L1f05)',   'FilesPerJob': 4, } 
signals_rw.append('WH_H0L1f05_H22')  
 
samples['WH_H0L1f05_H23'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'WH_H0L1f05_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*WH_H0L1f05_W*(ME_H23/ME_H0L1f05)',   'FilesPerJob': 4, } 
signals_rw.append('WH_H0L1f05_H23')  
 
samples['WH_H0L1f05_H24'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'WH_H0L1f05_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*WH_H0L1f05_W*(ME_H24/ME_H0L1f05)',   'FilesPerJob': 4, } 
signals_rw.append('WH_H0L1f05_H24')  
 
samples['WH_H0L1f05_H25'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'WH_H0L1f05_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*WH_H0L1f05_W*(ME_H25/ME_H0L1f05)',   'FilesPerJob': 4, } 
signals_rw.append('WH_H0L1f05_H25')  
 
samples['WH_H0L1f05_H26'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'WH_H0L1f05_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*WH_H0L1f05_W*(ME_H26/ME_H0L1f05)',   'FilesPerJob': 4, } 
signals_rw.append('WH_H0L1f05_H26')  
 
samples['WH_H0L1f05_H27'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'WH_H0L1f05_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*WH_H0L1f05_W*(ME_H27/ME_H0L1f05)',   'FilesPerJob': 4, } 
signals_rw.append('WH_H0L1f05_H27')  
 
samples['WH_H0L1f05_H28'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'WH_H0L1f05_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*WH_H0L1f05_W*(ME_H28/ME_H0L1f05)',   'FilesPerJob': 4, } 
signals_rw.append('WH_H0L1f05_H28')  
 
samples['WH_H0L1f05_H29'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'WH_H0L1f05_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*WH_H0L1f05_W*(ME_H29/ME_H0L1f05)',   'FilesPerJob': 4, } 
signals_rw.append('WH_H0L1f05_H29')  
 
samples['WH_H0L1f05_H30'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'WH_H0L1f05_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*WH_H0L1f05_W*(ME_H30/ME_H0L1f05)',   'FilesPerJob': 4, } 
signals_rw.append('WH_H0L1f05_H30')  
 
samples['WH_H0L1f05_H31'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'WH_H0L1f05_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*WH_H0L1f05_W*(ME_H31/ME_H0L1f05)',   'FilesPerJob': 4, } 
signals_rw.append('WH_H0L1f05_H31')  
 
samples['WH_H0L1f05_H32'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'WH_H0L1f05_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*WH_H0L1f05_W*(ME_H32/ME_H0L1f05)',   'FilesPerJob': 4, } 
signals_rw.append('WH_H0L1f05_H32')  
 
samples['WH_H0L1f05_H33'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'WH_H0L1f05_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*WH_H0L1f05_W*(ME_H33/ME_H0L1f05)',   'FilesPerJob': 4, } 
signals_rw.append('WH_H0L1f05_H33')  
 
samples['WH_H0L1f05_H34'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'WH_H0L1f05_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*WH_H0L1f05_W*(ME_H34/ME_H0L1f05)',   'FilesPerJob': 4, } 
signals_rw.append('WH_H0L1f05_H34')  
 
samples['WH_H0L1f05_H35'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'WH_H0L1f05_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*WH_H0L1f05_W*(ME_H35/ME_H0L1f05)',   'FilesPerJob': 4, } 
signals_rw.append('WH_H0L1f05_H35')  
 
# ZH MC samples 
 
# Original ZH samples 
 
samples['ZH_H0PM'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'ZH_H0PM_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*ZH_H0PM_W',   'FilesPerJob': 4, } 
 
samples['ZH_H0PH'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'ZH_H0PH_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*ZH_H0PH_W',   'FilesPerJob': 4, } 
 
samples['ZH_H0PHf05'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'ZH_H0PHf05_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*ZH_H0PHf05_W',   'FilesPerJob': 4, } 
 
samples['ZH_H0M'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'ZH_H0M_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*ZH_H0M_W',   'FilesPerJob': 4, } 
 
samples['ZH_H0Mf05'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'ZH_H0Mf05_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*ZH_H0Mf05_W',   'FilesPerJob': 4, } 
 
samples['ZH_H0L1'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'ZH_H0L1_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*ZH_H0L1_W',   'FilesPerJob': 4, } 
 
samples['ZH_H0L1f05'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'ZH_H0L1f05_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*ZH_H0L1f05_W',   'FilesPerJob': 4, } 
 
# Reweighted ZH samples 
 
samples['ZH_H0PM_H1'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'ZH_H0PM_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*ZH_H0PM_W*(ME_H1/ME_H0PM)',   'FilesPerJob': 4, } 
signals_rw.append('ZH_H0PM_H1')  
 
samples['ZH_H0PM_H2'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'ZH_H0PM_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*ZH_H0PM_W*(ME_H2/ME_H0PM)',   'FilesPerJob': 4, } 
signals_rw.append('ZH_H0PM_H2')  
 
samples['ZH_H0PM_H3'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'ZH_H0PM_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*ZH_H0PM_W*(ME_H3/ME_H0PM)',   'FilesPerJob': 4, } 
signals_rw.append('ZH_H0PM_H3')  
 
samples['ZH_H0PM_H4'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'ZH_H0PM_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*ZH_H0PM_W*(ME_H4/ME_H0PM)',   'FilesPerJob': 4, } 
signals_rw.append('ZH_H0PM_H4')  
 
samples['ZH_H0PM_H5'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'ZH_H0PM_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*ZH_H0PM_W*(ME_H5/ME_H0PM)',   'FilesPerJob': 4, } 
signals_rw.append('ZH_H0PM_H5')  
 
samples['ZH_H0PM_H6'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'ZH_H0PM_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*ZH_H0PM_W*(ME_H6/ME_H0PM)',   'FilesPerJob': 4, } 
signals_rw.append('ZH_H0PM_H6')  
 
samples['ZH_H0PM_H7'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'ZH_H0PM_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*ZH_H0PM_W*(ME_H7/ME_H0PM)',   'FilesPerJob': 4, } 
signals_rw.append('ZH_H0PM_H7')  
 
samples['ZH_H0PM_H8'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'ZH_H0PM_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*ZH_H0PM_W*(ME_H8/ME_H0PM)',   'FilesPerJob': 4, } 
signals_rw.append('ZH_H0PM_H8')  
 
samples['ZH_H0PM_H9'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'ZH_H0PM_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*ZH_H0PM_W*(ME_H9/ME_H0PM)',   'FilesPerJob': 4, } 
signals_rw.append('ZH_H0PM_H9')  
 
samples['ZH_H0PM_H10'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'ZH_H0PM_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*ZH_H0PM_W*(ME_H10/ME_H0PM)',   'FilesPerJob': 4, } 
signals_rw.append('ZH_H0PM_H10')  
 
samples['ZH_H0PM_H11'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'ZH_H0PM_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*ZH_H0PM_W*(ME_H11/ME_H0PM)',   'FilesPerJob': 4, } 
signals_rw.append('ZH_H0PM_H11')  
 
samples['ZH_H0PM_H12'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'ZH_H0PM_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*ZH_H0PM_W*(ME_H12/ME_H0PM)',   'FilesPerJob': 4, } 
signals_rw.append('ZH_H0PM_H12')  
 
samples['ZH_H0PM_H13'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'ZH_H0PM_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*ZH_H0PM_W*(ME_H13/ME_H0PM)',   'FilesPerJob': 4, } 
signals_rw.append('ZH_H0PM_H13')  
 
samples['ZH_H0PM_H14'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'ZH_H0PM_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*ZH_H0PM_W*(ME_H14/ME_H0PM)',   'FilesPerJob': 4, } 
signals_rw.append('ZH_H0PM_H14')  
 
samples['ZH_H0PM_H15'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'ZH_H0PM_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*ZH_H0PM_W*(ME_H15/ME_H0PM)',   'FilesPerJob': 4, } 
signals_rw.append('ZH_H0PM_H15')  
 
samples['ZH_H0PM_H16'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'ZH_H0PM_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*ZH_H0PM_W*(ME_H16/ME_H0PM)',   'FilesPerJob': 4, } 
signals_rw.append('ZH_H0PM_H16')  
 
samples['ZH_H0PM_H17'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'ZH_H0PM_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*ZH_H0PM_W*(ME_H17/ME_H0PM)',   'FilesPerJob': 4, } 
signals_rw.append('ZH_H0PM_H17')  
 
samples['ZH_H0PM_H18'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'ZH_H0PM_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*ZH_H0PM_W*(ME_H18/ME_H0PM)',   'FilesPerJob': 4, } 
signals_rw.append('ZH_H0PM_H18')  
 
samples['ZH_H0PM_H19'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'ZH_H0PM_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*ZH_H0PM_W*(ME_H19/ME_H0PM)',   'FilesPerJob': 4, } 
signals_rw.append('ZH_H0PM_H19')  
 
samples['ZH_H0PM_H20'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'ZH_H0PM_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*ZH_H0PM_W*(ME_H20/ME_H0PM)',   'FilesPerJob': 4, } 
signals_rw.append('ZH_H0PM_H20')  
 
samples['ZH_H0PM_H21'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'ZH_H0PM_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*ZH_H0PM_W*(ME_H21/ME_H0PM)',   'FilesPerJob': 4, } 
signals_rw.append('ZH_H0PM_H21')  
 
samples['ZH_H0PM_H22'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'ZH_H0PM_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*ZH_H0PM_W*(ME_H22/ME_H0PM)',   'FilesPerJob': 4, } 
signals_rw.append('ZH_H0PM_H22')  
 
samples['ZH_H0PM_H23'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'ZH_H0PM_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*ZH_H0PM_W*(ME_H23/ME_H0PM)',   'FilesPerJob': 4, } 
signals_rw.append('ZH_H0PM_H23')  
 
samples['ZH_H0PM_H24'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'ZH_H0PM_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*ZH_H0PM_W*(ME_H24/ME_H0PM)',   'FilesPerJob': 4, } 
signals_rw.append('ZH_H0PM_H24')  
 
samples['ZH_H0PM_H25'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'ZH_H0PM_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*ZH_H0PM_W*(ME_H25/ME_H0PM)',   'FilesPerJob': 4, } 
signals_rw.append('ZH_H0PM_H25')  
 
samples['ZH_H0PM_H26'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'ZH_H0PM_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*ZH_H0PM_W*(ME_H26/ME_H0PM)',   'FilesPerJob': 4, } 
signals_rw.append('ZH_H0PM_H26')  
 
samples['ZH_H0PM_H27'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'ZH_H0PM_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*ZH_H0PM_W*(ME_H27/ME_H0PM)',   'FilesPerJob': 4, } 
signals_rw.append('ZH_H0PM_H27')  
 
samples['ZH_H0PM_H28'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'ZH_H0PM_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*ZH_H0PM_W*(ME_H28/ME_H0PM)',   'FilesPerJob': 4, } 
signals_rw.append('ZH_H0PM_H28')  
 
samples['ZH_H0PM_H29'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'ZH_H0PM_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*ZH_H0PM_W*(ME_H29/ME_H0PM)',   'FilesPerJob': 4, } 
signals_rw.append('ZH_H0PM_H29')  
 
samples['ZH_H0PM_H30'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'ZH_H0PM_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*ZH_H0PM_W*(ME_H30/ME_H0PM)',   'FilesPerJob': 4, } 
signals_rw.append('ZH_H0PM_H30')  
 
samples['ZH_H0PM_H31'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'ZH_H0PM_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*ZH_H0PM_W*(ME_H31/ME_H0PM)',   'FilesPerJob': 4, } 
signals_rw.append('ZH_H0PM_H31')  
 
samples['ZH_H0PM_H32'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'ZH_H0PM_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*ZH_H0PM_W*(ME_H32/ME_H0PM)',   'FilesPerJob': 4, } 
signals_rw.append('ZH_H0PM_H32')  
 
samples['ZH_H0PM_H33'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'ZH_H0PM_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*ZH_H0PM_W*(ME_H33/ME_H0PM)',   'FilesPerJob': 4, } 
signals_rw.append('ZH_H0PM_H33')  
 
samples['ZH_H0PM_H34'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'ZH_H0PM_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*ZH_H0PM_W*(ME_H34/ME_H0PM)',   'FilesPerJob': 4, } 
signals_rw.append('ZH_H0PM_H34')  
 
samples['ZH_H0PM_H35'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'ZH_H0PM_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*ZH_H0PM_W*(ME_H35/ME_H0PM)',   'FilesPerJob': 4, } 
signals_rw.append('ZH_H0PM_H35')  
 
samples['ZH_H0PH_H1'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'ZH_H0PH_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*ZH_H0PH_W*(ME_H1/ME_H0PH)',   'FilesPerJob': 4, } 
signals_rw.append('ZH_H0PH_H1')  
 
samples['ZH_H0PH_H2'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'ZH_H0PH_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*ZH_H0PH_W*(ME_H2/ME_H0PH)',   'FilesPerJob': 4, } 
signals_rw.append('ZH_H0PH_H2')  
 
samples['ZH_H0PH_H3'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'ZH_H0PH_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*ZH_H0PH_W*(ME_H3/ME_H0PH)',   'FilesPerJob': 4, } 
signals_rw.append('ZH_H0PH_H3')  
 
samples['ZH_H0PH_H4'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'ZH_H0PH_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*ZH_H0PH_W*(ME_H4/ME_H0PH)',   'FilesPerJob': 4, } 
signals_rw.append('ZH_H0PH_H4')  
 
samples['ZH_H0PH_H5'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'ZH_H0PH_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*ZH_H0PH_W*(ME_H5/ME_H0PH)',   'FilesPerJob': 4, } 
signals_rw.append('ZH_H0PH_H5')  
 
samples['ZH_H0PH_H6'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'ZH_H0PH_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*ZH_H0PH_W*(ME_H6/ME_H0PH)',   'FilesPerJob': 4, } 
signals_rw.append('ZH_H0PH_H6')  
 
samples['ZH_H0PH_H7'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'ZH_H0PH_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*ZH_H0PH_W*(ME_H7/ME_H0PH)',   'FilesPerJob': 4, } 
signals_rw.append('ZH_H0PH_H7')  
 
samples['ZH_H0PH_H8'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'ZH_H0PH_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*ZH_H0PH_W*(ME_H8/ME_H0PH)',   'FilesPerJob': 4, } 
signals_rw.append('ZH_H0PH_H8')  
 
samples['ZH_H0PH_H9'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'ZH_H0PH_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*ZH_H0PH_W*(ME_H9/ME_H0PH)',   'FilesPerJob': 4, } 
signals_rw.append('ZH_H0PH_H9')  
 
samples['ZH_H0PH_H10'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'ZH_H0PH_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*ZH_H0PH_W*(ME_H10/ME_H0PH)',   'FilesPerJob': 4, } 
signals_rw.append('ZH_H0PH_H10')  
 
samples['ZH_H0PH_H11'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'ZH_H0PH_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*ZH_H0PH_W*(ME_H11/ME_H0PH)',   'FilesPerJob': 4, } 
signals_rw.append('ZH_H0PH_H11')  
 
samples['ZH_H0PH_H12'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'ZH_H0PH_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*ZH_H0PH_W*(ME_H12/ME_H0PH)',   'FilesPerJob': 4, } 
signals_rw.append('ZH_H0PH_H12')  
 
samples['ZH_H0PH_H13'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'ZH_H0PH_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*ZH_H0PH_W*(ME_H13/ME_H0PH)',   'FilesPerJob': 4, } 
signals_rw.append('ZH_H0PH_H13')  
 
samples['ZH_H0PH_H14'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'ZH_H0PH_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*ZH_H0PH_W*(ME_H14/ME_H0PH)',   'FilesPerJob': 4, } 
signals_rw.append('ZH_H0PH_H14')  
 
samples['ZH_H0PH_H15'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'ZH_H0PH_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*ZH_H0PH_W*(ME_H15/ME_H0PH)',   'FilesPerJob': 4, } 
signals_rw.append('ZH_H0PH_H15')  
 
samples['ZH_H0PH_H16'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'ZH_H0PH_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*ZH_H0PH_W*(ME_H16/ME_H0PH)',   'FilesPerJob': 4, } 
signals_rw.append('ZH_H0PH_H16')  
 
samples['ZH_H0PH_H17'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'ZH_H0PH_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*ZH_H0PH_W*(ME_H17/ME_H0PH)',   'FilesPerJob': 4, } 
signals_rw.append('ZH_H0PH_H17')  
 
samples['ZH_H0PH_H18'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'ZH_H0PH_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*ZH_H0PH_W*(ME_H18/ME_H0PH)',   'FilesPerJob': 4, } 
signals_rw.append('ZH_H0PH_H18')  
 
samples['ZH_H0PH_H19'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'ZH_H0PH_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*ZH_H0PH_W*(ME_H19/ME_H0PH)',   'FilesPerJob': 4, } 
signals_rw.append('ZH_H0PH_H19')  
 
samples['ZH_H0PH_H20'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'ZH_H0PH_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*ZH_H0PH_W*(ME_H20/ME_H0PH)',   'FilesPerJob': 4, } 
signals_rw.append('ZH_H0PH_H20')  
 
samples['ZH_H0PH_H21'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'ZH_H0PH_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*ZH_H0PH_W*(ME_H21/ME_H0PH)',   'FilesPerJob': 4, } 
signals_rw.append('ZH_H0PH_H21')  
 
samples['ZH_H0PH_H22'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'ZH_H0PH_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*ZH_H0PH_W*(ME_H22/ME_H0PH)',   'FilesPerJob': 4, } 
signals_rw.append('ZH_H0PH_H22')  
 
samples['ZH_H0PH_H23'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'ZH_H0PH_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*ZH_H0PH_W*(ME_H23/ME_H0PH)',   'FilesPerJob': 4, } 
signals_rw.append('ZH_H0PH_H23')  
 
samples['ZH_H0PH_H24'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'ZH_H0PH_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*ZH_H0PH_W*(ME_H24/ME_H0PH)',   'FilesPerJob': 4, } 
signals_rw.append('ZH_H0PH_H24')  
 
samples['ZH_H0PH_H25'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'ZH_H0PH_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*ZH_H0PH_W*(ME_H25/ME_H0PH)',   'FilesPerJob': 4, } 
signals_rw.append('ZH_H0PH_H25')  
 
samples['ZH_H0PH_H26'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'ZH_H0PH_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*ZH_H0PH_W*(ME_H26/ME_H0PH)',   'FilesPerJob': 4, } 
signals_rw.append('ZH_H0PH_H26')  
 
samples['ZH_H0PH_H27'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'ZH_H0PH_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*ZH_H0PH_W*(ME_H27/ME_H0PH)',   'FilesPerJob': 4, } 
signals_rw.append('ZH_H0PH_H27')  
 
samples['ZH_H0PH_H28'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'ZH_H0PH_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*ZH_H0PH_W*(ME_H28/ME_H0PH)',   'FilesPerJob': 4, } 
signals_rw.append('ZH_H0PH_H28')  
 
samples['ZH_H0PH_H29'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'ZH_H0PH_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*ZH_H0PH_W*(ME_H29/ME_H0PH)',   'FilesPerJob': 4, } 
signals_rw.append('ZH_H0PH_H29')  
 
samples['ZH_H0PH_H30'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'ZH_H0PH_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*ZH_H0PH_W*(ME_H30/ME_H0PH)',   'FilesPerJob': 4, } 
signals_rw.append('ZH_H0PH_H30')  
 
samples['ZH_H0PH_H31'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'ZH_H0PH_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*ZH_H0PH_W*(ME_H31/ME_H0PH)',   'FilesPerJob': 4, } 
signals_rw.append('ZH_H0PH_H31')  
 
samples['ZH_H0PH_H32'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'ZH_H0PH_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*ZH_H0PH_W*(ME_H32/ME_H0PH)',   'FilesPerJob': 4, } 
signals_rw.append('ZH_H0PH_H32')  
 
samples['ZH_H0PH_H33'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'ZH_H0PH_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*ZH_H0PH_W*(ME_H33/ME_H0PH)',   'FilesPerJob': 4, } 
signals_rw.append('ZH_H0PH_H33')  
 
samples['ZH_H0PH_H34'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'ZH_H0PH_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*ZH_H0PH_W*(ME_H34/ME_H0PH)',   'FilesPerJob': 4, } 
signals_rw.append('ZH_H0PH_H34')  
 
samples['ZH_H0PH_H35'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'ZH_H0PH_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*ZH_H0PH_W*(ME_H35/ME_H0PH)',   'FilesPerJob': 4, } 
signals_rw.append('ZH_H0PH_H35')  
 
samples['ZH_H0PHf05_H1'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'ZH_H0PHf05_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*ZH_H0PHf05_W*(ME_H1/ME_H0PHf05)',   'FilesPerJob': 4, } 
signals_rw.append('ZH_H0PHf05_H1')  
 
samples['ZH_H0PHf05_H2'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'ZH_H0PHf05_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*ZH_H0PHf05_W*(ME_H2/ME_H0PHf05)',   'FilesPerJob': 4, } 
signals_rw.append('ZH_H0PHf05_H2')  
 
samples['ZH_H0PHf05_H3'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'ZH_H0PHf05_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*ZH_H0PHf05_W*(ME_H3/ME_H0PHf05)',   'FilesPerJob': 4, } 
signals_rw.append('ZH_H0PHf05_H3')  
 
samples['ZH_H0PHf05_H4'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'ZH_H0PHf05_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*ZH_H0PHf05_W*(ME_H4/ME_H0PHf05)',   'FilesPerJob': 4, } 
signals_rw.append('ZH_H0PHf05_H4')  
 
samples['ZH_H0PHf05_H5'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'ZH_H0PHf05_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*ZH_H0PHf05_W*(ME_H5/ME_H0PHf05)',   'FilesPerJob': 4, } 
signals_rw.append('ZH_H0PHf05_H5')  
 
samples['ZH_H0PHf05_H6'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'ZH_H0PHf05_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*ZH_H0PHf05_W*(ME_H6/ME_H0PHf05)',   'FilesPerJob': 4, } 
signals_rw.append('ZH_H0PHf05_H6')  
 
samples['ZH_H0PHf05_H7'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'ZH_H0PHf05_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*ZH_H0PHf05_W*(ME_H7/ME_H0PHf05)',   'FilesPerJob': 4, } 
signals_rw.append('ZH_H0PHf05_H7')  
 
samples['ZH_H0PHf05_H8'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'ZH_H0PHf05_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*ZH_H0PHf05_W*(ME_H8/ME_H0PHf05)',   'FilesPerJob': 4, } 
signals_rw.append('ZH_H0PHf05_H8')  
 
samples['ZH_H0PHf05_H9'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'ZH_H0PHf05_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*ZH_H0PHf05_W*(ME_H9/ME_H0PHf05)',   'FilesPerJob': 4, } 
signals_rw.append('ZH_H0PHf05_H9')  
 
samples['ZH_H0PHf05_H10'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'ZH_H0PHf05_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*ZH_H0PHf05_W*(ME_H10/ME_H0PHf05)',   'FilesPerJob': 4, } 
signals_rw.append('ZH_H0PHf05_H10')  
 
samples['ZH_H0PHf05_H11'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'ZH_H0PHf05_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*ZH_H0PHf05_W*(ME_H11/ME_H0PHf05)',   'FilesPerJob': 4, } 
signals_rw.append('ZH_H0PHf05_H11')  
 
samples['ZH_H0PHf05_H12'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'ZH_H0PHf05_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*ZH_H0PHf05_W*(ME_H12/ME_H0PHf05)',   'FilesPerJob': 4, } 
signals_rw.append('ZH_H0PHf05_H12')  
 
samples['ZH_H0PHf05_H13'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'ZH_H0PHf05_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*ZH_H0PHf05_W*(ME_H13/ME_H0PHf05)',   'FilesPerJob': 4, } 
signals_rw.append('ZH_H0PHf05_H13')  
 
samples['ZH_H0PHf05_H14'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'ZH_H0PHf05_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*ZH_H0PHf05_W*(ME_H14/ME_H0PHf05)',   'FilesPerJob': 4, } 
signals_rw.append('ZH_H0PHf05_H14')  
 
samples['ZH_H0PHf05_H15'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'ZH_H0PHf05_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*ZH_H0PHf05_W*(ME_H15/ME_H0PHf05)',   'FilesPerJob': 4, } 
signals_rw.append('ZH_H0PHf05_H15')  
 
samples['ZH_H0PHf05_H16'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'ZH_H0PHf05_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*ZH_H0PHf05_W*(ME_H16/ME_H0PHf05)',   'FilesPerJob': 4, } 
signals_rw.append('ZH_H0PHf05_H16')  
 
samples['ZH_H0PHf05_H17'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'ZH_H0PHf05_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*ZH_H0PHf05_W*(ME_H17/ME_H0PHf05)',   'FilesPerJob': 4, } 
signals_rw.append('ZH_H0PHf05_H17')  
 
samples['ZH_H0PHf05_H18'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'ZH_H0PHf05_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*ZH_H0PHf05_W*(ME_H18/ME_H0PHf05)',   'FilesPerJob': 4, } 
signals_rw.append('ZH_H0PHf05_H18')  
 
samples['ZH_H0PHf05_H19'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'ZH_H0PHf05_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*ZH_H0PHf05_W*(ME_H19/ME_H0PHf05)',   'FilesPerJob': 4, } 
signals_rw.append('ZH_H0PHf05_H19')  
 
samples['ZH_H0PHf05_H20'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'ZH_H0PHf05_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*ZH_H0PHf05_W*(ME_H20/ME_H0PHf05)',   'FilesPerJob': 4, } 
signals_rw.append('ZH_H0PHf05_H20')  
 
samples['ZH_H0PHf05_H21'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'ZH_H0PHf05_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*ZH_H0PHf05_W*(ME_H21/ME_H0PHf05)',   'FilesPerJob': 4, } 
signals_rw.append('ZH_H0PHf05_H21')  
 
samples['ZH_H0PHf05_H22'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'ZH_H0PHf05_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*ZH_H0PHf05_W*(ME_H22/ME_H0PHf05)',   'FilesPerJob': 4, } 
signals_rw.append('ZH_H0PHf05_H22')  
 
samples['ZH_H0PHf05_H23'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'ZH_H0PHf05_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*ZH_H0PHf05_W*(ME_H23/ME_H0PHf05)',   'FilesPerJob': 4, } 
signals_rw.append('ZH_H0PHf05_H23')  
 
samples['ZH_H0PHf05_H24'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'ZH_H0PHf05_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*ZH_H0PHf05_W*(ME_H24/ME_H0PHf05)',   'FilesPerJob': 4, } 
signals_rw.append('ZH_H0PHf05_H24')  
 
samples['ZH_H0PHf05_H25'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'ZH_H0PHf05_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*ZH_H0PHf05_W*(ME_H25/ME_H0PHf05)',   'FilesPerJob': 4, } 
signals_rw.append('ZH_H0PHf05_H25')  
 
samples['ZH_H0PHf05_H26'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'ZH_H0PHf05_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*ZH_H0PHf05_W*(ME_H26/ME_H0PHf05)',   'FilesPerJob': 4, } 
signals_rw.append('ZH_H0PHf05_H26')  
 
samples['ZH_H0PHf05_H27'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'ZH_H0PHf05_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*ZH_H0PHf05_W*(ME_H27/ME_H0PHf05)',   'FilesPerJob': 4, } 
signals_rw.append('ZH_H0PHf05_H27')  
 
samples['ZH_H0PHf05_H28'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'ZH_H0PHf05_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*ZH_H0PHf05_W*(ME_H28/ME_H0PHf05)',   'FilesPerJob': 4, } 
signals_rw.append('ZH_H0PHf05_H28')  
 
samples['ZH_H0PHf05_H29'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'ZH_H0PHf05_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*ZH_H0PHf05_W*(ME_H29/ME_H0PHf05)',   'FilesPerJob': 4, } 
signals_rw.append('ZH_H0PHf05_H29')  
 
samples['ZH_H0PHf05_H30'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'ZH_H0PHf05_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*ZH_H0PHf05_W*(ME_H30/ME_H0PHf05)',   'FilesPerJob': 4, } 
signals_rw.append('ZH_H0PHf05_H30')  
 
samples['ZH_H0PHf05_H31'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'ZH_H0PHf05_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*ZH_H0PHf05_W*(ME_H31/ME_H0PHf05)',   'FilesPerJob': 4, } 
signals_rw.append('ZH_H0PHf05_H31')  
 
samples['ZH_H0PHf05_H32'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'ZH_H0PHf05_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*ZH_H0PHf05_W*(ME_H32/ME_H0PHf05)',   'FilesPerJob': 4, } 
signals_rw.append('ZH_H0PHf05_H32')  
 
samples['ZH_H0PHf05_H33'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'ZH_H0PHf05_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*ZH_H0PHf05_W*(ME_H33/ME_H0PHf05)',   'FilesPerJob': 4, } 
signals_rw.append('ZH_H0PHf05_H33')  
 
samples['ZH_H0PHf05_H34'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'ZH_H0PHf05_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*ZH_H0PHf05_W*(ME_H34/ME_H0PHf05)',   'FilesPerJob': 4, } 
signals_rw.append('ZH_H0PHf05_H34')  
 
samples['ZH_H0PHf05_H35'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'ZH_H0PHf05_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*ZH_H0PHf05_W*(ME_H35/ME_H0PHf05)',   'FilesPerJob': 4, } 
signals_rw.append('ZH_H0PHf05_H35')  
 
samples['ZH_H0M_H1'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'ZH_H0M_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*ZH_H0M_W*(ME_H1/ME_H0M)',   'FilesPerJob': 4, } 
signals_rw.append('ZH_H0M_H1')  
 
samples['ZH_H0M_H2'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'ZH_H0M_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*ZH_H0M_W*(ME_H2/ME_H0M)',   'FilesPerJob': 4, } 
signals_rw.append('ZH_H0M_H2')  
 
samples['ZH_H0M_H3'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'ZH_H0M_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*ZH_H0M_W*(ME_H3/ME_H0M)',   'FilesPerJob': 4, } 
signals_rw.append('ZH_H0M_H3')  
 
samples['ZH_H0M_H4'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'ZH_H0M_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*ZH_H0M_W*(ME_H4/ME_H0M)',   'FilesPerJob': 4, } 
signals_rw.append('ZH_H0M_H4')  
 
samples['ZH_H0M_H5'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'ZH_H0M_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*ZH_H0M_W*(ME_H5/ME_H0M)',   'FilesPerJob': 4, } 
signals_rw.append('ZH_H0M_H5')  
 
samples['ZH_H0M_H6'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'ZH_H0M_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*ZH_H0M_W*(ME_H6/ME_H0M)',   'FilesPerJob': 4, } 
signals_rw.append('ZH_H0M_H6')  
 
samples['ZH_H0M_H7'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'ZH_H0M_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*ZH_H0M_W*(ME_H7/ME_H0M)',   'FilesPerJob': 4, } 
signals_rw.append('ZH_H0M_H7')  
 
samples['ZH_H0M_H8'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'ZH_H0M_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*ZH_H0M_W*(ME_H8/ME_H0M)',   'FilesPerJob': 4, } 
signals_rw.append('ZH_H0M_H8')  
 
samples['ZH_H0M_H9'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'ZH_H0M_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*ZH_H0M_W*(ME_H9/ME_H0M)',   'FilesPerJob': 4, } 
signals_rw.append('ZH_H0M_H9')  
 
samples['ZH_H0M_H10'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'ZH_H0M_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*ZH_H0M_W*(ME_H10/ME_H0M)',   'FilesPerJob': 4, } 
signals_rw.append('ZH_H0M_H10')  
 
samples['ZH_H0M_H11'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'ZH_H0M_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*ZH_H0M_W*(ME_H11/ME_H0M)',   'FilesPerJob': 4, } 
signals_rw.append('ZH_H0M_H11')  
 
samples['ZH_H0M_H12'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'ZH_H0M_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*ZH_H0M_W*(ME_H12/ME_H0M)',   'FilesPerJob': 4, } 
signals_rw.append('ZH_H0M_H12')  
 
samples['ZH_H0M_H13'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'ZH_H0M_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*ZH_H0M_W*(ME_H13/ME_H0M)',   'FilesPerJob': 4, } 
signals_rw.append('ZH_H0M_H13')  
 
samples['ZH_H0M_H14'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'ZH_H0M_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*ZH_H0M_W*(ME_H14/ME_H0M)',   'FilesPerJob': 4, } 
signals_rw.append('ZH_H0M_H14')  
 
samples['ZH_H0M_H15'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'ZH_H0M_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*ZH_H0M_W*(ME_H15/ME_H0M)',   'FilesPerJob': 4, } 
signals_rw.append('ZH_H0M_H15')  
 
samples['ZH_H0M_H16'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'ZH_H0M_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*ZH_H0M_W*(ME_H16/ME_H0M)',   'FilesPerJob': 4, } 
signals_rw.append('ZH_H0M_H16')  
 
samples['ZH_H0M_H17'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'ZH_H0M_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*ZH_H0M_W*(ME_H17/ME_H0M)',   'FilesPerJob': 4, } 
signals_rw.append('ZH_H0M_H17')  
 
samples['ZH_H0M_H18'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'ZH_H0M_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*ZH_H0M_W*(ME_H18/ME_H0M)',   'FilesPerJob': 4, } 
signals_rw.append('ZH_H0M_H18')  
 
samples['ZH_H0M_H19'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'ZH_H0M_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*ZH_H0M_W*(ME_H19/ME_H0M)',   'FilesPerJob': 4, } 
signals_rw.append('ZH_H0M_H19')  
 
samples['ZH_H0M_H20'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'ZH_H0M_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*ZH_H0M_W*(ME_H20/ME_H0M)',   'FilesPerJob': 4, } 
signals_rw.append('ZH_H0M_H20')  
 
samples['ZH_H0M_H21'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'ZH_H0M_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*ZH_H0M_W*(ME_H21/ME_H0M)',   'FilesPerJob': 4, } 
signals_rw.append('ZH_H0M_H21')  
 
samples['ZH_H0M_H22'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'ZH_H0M_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*ZH_H0M_W*(ME_H22/ME_H0M)',   'FilesPerJob': 4, } 
signals_rw.append('ZH_H0M_H22')  
 
samples['ZH_H0M_H23'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'ZH_H0M_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*ZH_H0M_W*(ME_H23/ME_H0M)',   'FilesPerJob': 4, } 
signals_rw.append('ZH_H0M_H23')  
 
samples['ZH_H0M_H24'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'ZH_H0M_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*ZH_H0M_W*(ME_H24/ME_H0M)',   'FilesPerJob': 4, } 
signals_rw.append('ZH_H0M_H24')  
 
samples['ZH_H0M_H25'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'ZH_H0M_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*ZH_H0M_W*(ME_H25/ME_H0M)',   'FilesPerJob': 4, } 
signals_rw.append('ZH_H0M_H25')  
 
samples['ZH_H0M_H26'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'ZH_H0M_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*ZH_H0M_W*(ME_H26/ME_H0M)',   'FilesPerJob': 4, } 
signals_rw.append('ZH_H0M_H26')  
 
samples['ZH_H0M_H27'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'ZH_H0M_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*ZH_H0M_W*(ME_H27/ME_H0M)',   'FilesPerJob': 4, } 
signals_rw.append('ZH_H0M_H27')  
 
samples['ZH_H0M_H28'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'ZH_H0M_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*ZH_H0M_W*(ME_H28/ME_H0M)',   'FilesPerJob': 4, } 
signals_rw.append('ZH_H0M_H28')  
 
samples['ZH_H0M_H29'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'ZH_H0M_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*ZH_H0M_W*(ME_H29/ME_H0M)',   'FilesPerJob': 4, } 
signals_rw.append('ZH_H0M_H29')  
 
samples['ZH_H0M_H30'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'ZH_H0M_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*ZH_H0M_W*(ME_H30/ME_H0M)',   'FilesPerJob': 4, } 
signals_rw.append('ZH_H0M_H30')  
 
samples['ZH_H0M_H31'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'ZH_H0M_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*ZH_H0M_W*(ME_H31/ME_H0M)',   'FilesPerJob': 4, } 
signals_rw.append('ZH_H0M_H31')  
 
samples['ZH_H0M_H32'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'ZH_H0M_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*ZH_H0M_W*(ME_H32/ME_H0M)',   'FilesPerJob': 4, } 
signals_rw.append('ZH_H0M_H32')  
 
samples['ZH_H0M_H33'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'ZH_H0M_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*ZH_H0M_W*(ME_H33/ME_H0M)',   'FilesPerJob': 4, } 
signals_rw.append('ZH_H0M_H33')  
 
samples['ZH_H0M_H34'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'ZH_H0M_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*ZH_H0M_W*(ME_H34/ME_H0M)',   'FilesPerJob': 4, } 
signals_rw.append('ZH_H0M_H34')  
 
samples['ZH_H0M_H35'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'ZH_H0M_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*ZH_H0M_W*(ME_H35/ME_H0M)',   'FilesPerJob': 4, } 
signals_rw.append('ZH_H0M_H35')  
 
samples['ZH_H0Mf05_H1'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'ZH_H0Mf05_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*ZH_H0Mf05_W*(ME_H1/ME_H0Mf05)',   'FilesPerJob': 4, } 
signals_rw.append('ZH_H0Mf05_H1')  
 
samples['ZH_H0Mf05_H2'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'ZH_H0Mf05_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*ZH_H0Mf05_W*(ME_H2/ME_H0Mf05)',   'FilesPerJob': 4, } 
signals_rw.append('ZH_H0Mf05_H2')  
 
samples['ZH_H0Mf05_H3'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'ZH_H0Mf05_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*ZH_H0Mf05_W*(ME_H3/ME_H0Mf05)',   'FilesPerJob': 4, } 
signals_rw.append('ZH_H0Mf05_H3')  
 
samples['ZH_H0Mf05_H4'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'ZH_H0Mf05_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*ZH_H0Mf05_W*(ME_H4/ME_H0Mf05)',   'FilesPerJob': 4, } 
signals_rw.append('ZH_H0Mf05_H4')  
 
samples['ZH_H0Mf05_H5'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'ZH_H0Mf05_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*ZH_H0Mf05_W*(ME_H5/ME_H0Mf05)',   'FilesPerJob': 4, } 
signals_rw.append('ZH_H0Mf05_H5')  
 
samples['ZH_H0Mf05_H6'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'ZH_H0Mf05_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*ZH_H0Mf05_W*(ME_H6/ME_H0Mf05)',   'FilesPerJob': 4, } 
signals_rw.append('ZH_H0Mf05_H6')  
 
samples['ZH_H0Mf05_H7'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'ZH_H0Mf05_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*ZH_H0Mf05_W*(ME_H7/ME_H0Mf05)',   'FilesPerJob': 4, } 
signals_rw.append('ZH_H0Mf05_H7')  
 
samples['ZH_H0Mf05_H8'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'ZH_H0Mf05_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*ZH_H0Mf05_W*(ME_H8/ME_H0Mf05)',   'FilesPerJob': 4, } 
signals_rw.append('ZH_H0Mf05_H8')  
 
samples['ZH_H0Mf05_H9'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'ZH_H0Mf05_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*ZH_H0Mf05_W*(ME_H9/ME_H0Mf05)',   'FilesPerJob': 4, } 
signals_rw.append('ZH_H0Mf05_H9')  
 
samples['ZH_H0Mf05_H10'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'ZH_H0Mf05_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*ZH_H0Mf05_W*(ME_H10/ME_H0Mf05)',   'FilesPerJob': 4, } 
signals_rw.append('ZH_H0Mf05_H10')  
 
samples['ZH_H0Mf05_H11'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'ZH_H0Mf05_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*ZH_H0Mf05_W*(ME_H11/ME_H0Mf05)',   'FilesPerJob': 4, } 
signals_rw.append('ZH_H0Mf05_H11')  
 
samples['ZH_H0Mf05_H12'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'ZH_H0Mf05_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*ZH_H0Mf05_W*(ME_H12/ME_H0Mf05)',   'FilesPerJob': 4, } 
signals_rw.append('ZH_H0Mf05_H12')  
 
samples['ZH_H0Mf05_H13'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'ZH_H0Mf05_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*ZH_H0Mf05_W*(ME_H13/ME_H0Mf05)',   'FilesPerJob': 4, } 
signals_rw.append('ZH_H0Mf05_H13')  
 
samples['ZH_H0Mf05_H14'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'ZH_H0Mf05_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*ZH_H0Mf05_W*(ME_H14/ME_H0Mf05)',   'FilesPerJob': 4, } 
signals_rw.append('ZH_H0Mf05_H14')  
 
samples['ZH_H0Mf05_H15'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'ZH_H0Mf05_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*ZH_H0Mf05_W*(ME_H15/ME_H0Mf05)',   'FilesPerJob': 4, } 
signals_rw.append('ZH_H0Mf05_H15')  
 
samples['ZH_H0Mf05_H16'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'ZH_H0Mf05_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*ZH_H0Mf05_W*(ME_H16/ME_H0Mf05)',   'FilesPerJob': 4, } 
signals_rw.append('ZH_H0Mf05_H16')  
 
samples['ZH_H0Mf05_H17'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'ZH_H0Mf05_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*ZH_H0Mf05_W*(ME_H17/ME_H0Mf05)',   'FilesPerJob': 4, } 
signals_rw.append('ZH_H0Mf05_H17')  
 
samples['ZH_H0Mf05_H18'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'ZH_H0Mf05_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*ZH_H0Mf05_W*(ME_H18/ME_H0Mf05)',   'FilesPerJob': 4, } 
signals_rw.append('ZH_H0Mf05_H18')  
 
samples['ZH_H0Mf05_H19'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'ZH_H0Mf05_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*ZH_H0Mf05_W*(ME_H19/ME_H0Mf05)',   'FilesPerJob': 4, } 
signals_rw.append('ZH_H0Mf05_H19')  
 
samples['ZH_H0Mf05_H20'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'ZH_H0Mf05_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*ZH_H0Mf05_W*(ME_H20/ME_H0Mf05)',   'FilesPerJob': 4, } 
signals_rw.append('ZH_H0Mf05_H20')  
 
samples['ZH_H0Mf05_H21'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'ZH_H0Mf05_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*ZH_H0Mf05_W*(ME_H21/ME_H0Mf05)',   'FilesPerJob': 4, } 
signals_rw.append('ZH_H0Mf05_H21')  
 
samples['ZH_H0Mf05_H22'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'ZH_H0Mf05_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*ZH_H0Mf05_W*(ME_H22/ME_H0Mf05)',   'FilesPerJob': 4, } 
signals_rw.append('ZH_H0Mf05_H22')  
 
samples['ZH_H0Mf05_H23'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'ZH_H0Mf05_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*ZH_H0Mf05_W*(ME_H23/ME_H0Mf05)',   'FilesPerJob': 4, } 
signals_rw.append('ZH_H0Mf05_H23')  
 
samples['ZH_H0Mf05_H24'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'ZH_H0Mf05_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*ZH_H0Mf05_W*(ME_H24/ME_H0Mf05)',   'FilesPerJob': 4, } 
signals_rw.append('ZH_H0Mf05_H24')  
 
samples['ZH_H0Mf05_H25'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'ZH_H0Mf05_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*ZH_H0Mf05_W*(ME_H25/ME_H0Mf05)',   'FilesPerJob': 4, } 
signals_rw.append('ZH_H0Mf05_H25')  
 
samples['ZH_H0Mf05_H26'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'ZH_H0Mf05_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*ZH_H0Mf05_W*(ME_H26/ME_H0Mf05)',   'FilesPerJob': 4, } 
signals_rw.append('ZH_H0Mf05_H26')  
 
samples['ZH_H0Mf05_H27'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'ZH_H0Mf05_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*ZH_H0Mf05_W*(ME_H27/ME_H0Mf05)',   'FilesPerJob': 4, } 
signals_rw.append('ZH_H0Mf05_H27')  
 
samples['ZH_H0Mf05_H28'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'ZH_H0Mf05_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*ZH_H0Mf05_W*(ME_H28/ME_H0Mf05)',   'FilesPerJob': 4, } 
signals_rw.append('ZH_H0Mf05_H28')  
 
samples['ZH_H0Mf05_H29'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'ZH_H0Mf05_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*ZH_H0Mf05_W*(ME_H29/ME_H0Mf05)',   'FilesPerJob': 4, } 
signals_rw.append('ZH_H0Mf05_H29')  
 
samples['ZH_H0Mf05_H30'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'ZH_H0Mf05_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*ZH_H0Mf05_W*(ME_H30/ME_H0Mf05)',   'FilesPerJob': 4, } 
signals_rw.append('ZH_H0Mf05_H30')  
 
samples['ZH_H0Mf05_H31'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'ZH_H0Mf05_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*ZH_H0Mf05_W*(ME_H31/ME_H0Mf05)',   'FilesPerJob': 4, } 
signals_rw.append('ZH_H0Mf05_H31')  
 
samples['ZH_H0Mf05_H32'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'ZH_H0Mf05_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*ZH_H0Mf05_W*(ME_H32/ME_H0Mf05)',   'FilesPerJob': 4, } 
signals_rw.append('ZH_H0Mf05_H32')  
 
samples['ZH_H0Mf05_H33'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'ZH_H0Mf05_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*ZH_H0Mf05_W*(ME_H33/ME_H0Mf05)',   'FilesPerJob': 4, } 
signals_rw.append('ZH_H0Mf05_H33')  
 
samples['ZH_H0Mf05_H34'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'ZH_H0Mf05_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*ZH_H0Mf05_W*(ME_H34/ME_H0Mf05)',   'FilesPerJob': 4, } 
signals_rw.append('ZH_H0Mf05_H34')  
 
samples['ZH_H0Mf05_H35'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'ZH_H0Mf05_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*ZH_H0Mf05_W*(ME_H35/ME_H0Mf05)',   'FilesPerJob': 4, } 
signals_rw.append('ZH_H0Mf05_H35')  
 
samples['ZH_H0L1_H1'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'ZH_H0L1_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*ZH_H0L1_W*(ME_H1/ME_H0L1)',   'FilesPerJob': 4, } 
signals_rw.append('ZH_H0L1_H1')  
 
samples['ZH_H0L1_H2'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'ZH_H0L1_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*ZH_H0L1_W*(ME_H2/ME_H0L1)',   'FilesPerJob': 4, } 
signals_rw.append('ZH_H0L1_H2')  
 
samples['ZH_H0L1_H3'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'ZH_H0L1_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*ZH_H0L1_W*(ME_H3/ME_H0L1)',   'FilesPerJob': 4, } 
signals_rw.append('ZH_H0L1_H3')  
 
samples['ZH_H0L1_H4'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'ZH_H0L1_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*ZH_H0L1_W*(ME_H4/ME_H0L1)',   'FilesPerJob': 4, } 
signals_rw.append('ZH_H0L1_H4')  
 
samples['ZH_H0L1_H5'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'ZH_H0L1_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*ZH_H0L1_W*(ME_H5/ME_H0L1)',   'FilesPerJob': 4, } 
signals_rw.append('ZH_H0L1_H5')  
 
samples['ZH_H0L1_H6'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'ZH_H0L1_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*ZH_H0L1_W*(ME_H6/ME_H0L1)',   'FilesPerJob': 4, } 
signals_rw.append('ZH_H0L1_H6')  
 
samples['ZH_H0L1_H7'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'ZH_H0L1_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*ZH_H0L1_W*(ME_H7/ME_H0L1)',   'FilesPerJob': 4, } 
signals_rw.append('ZH_H0L1_H7')  
 
samples['ZH_H0L1_H8'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'ZH_H0L1_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*ZH_H0L1_W*(ME_H8/ME_H0L1)',   'FilesPerJob': 4, } 
signals_rw.append('ZH_H0L1_H8')  
 
samples['ZH_H0L1_H9'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'ZH_H0L1_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*ZH_H0L1_W*(ME_H9/ME_H0L1)',   'FilesPerJob': 4, } 
signals_rw.append('ZH_H0L1_H9')  
 
samples['ZH_H0L1_H10'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'ZH_H0L1_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*ZH_H0L1_W*(ME_H10/ME_H0L1)',   'FilesPerJob': 4, } 
signals_rw.append('ZH_H0L1_H10')  
 
samples['ZH_H0L1_H11'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'ZH_H0L1_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*ZH_H0L1_W*(ME_H11/ME_H0L1)',   'FilesPerJob': 4, } 
signals_rw.append('ZH_H0L1_H11')  
 
samples['ZH_H0L1_H12'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'ZH_H0L1_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*ZH_H0L1_W*(ME_H12/ME_H0L1)',   'FilesPerJob': 4, } 
signals_rw.append('ZH_H0L1_H12')  
 
samples['ZH_H0L1_H13'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'ZH_H0L1_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*ZH_H0L1_W*(ME_H13/ME_H0L1)',   'FilesPerJob': 4, } 
signals_rw.append('ZH_H0L1_H13')  
 
samples['ZH_H0L1_H14'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'ZH_H0L1_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*ZH_H0L1_W*(ME_H14/ME_H0L1)',   'FilesPerJob': 4, } 
signals_rw.append('ZH_H0L1_H14')  
 
samples['ZH_H0L1_H15'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'ZH_H0L1_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*ZH_H0L1_W*(ME_H15/ME_H0L1)',   'FilesPerJob': 4, } 
signals_rw.append('ZH_H0L1_H15')  
 
samples['ZH_H0L1_H16'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'ZH_H0L1_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*ZH_H0L1_W*(ME_H16/ME_H0L1)',   'FilesPerJob': 4, } 
signals_rw.append('ZH_H0L1_H16')  
 
samples['ZH_H0L1_H17'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'ZH_H0L1_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*ZH_H0L1_W*(ME_H17/ME_H0L1)',   'FilesPerJob': 4, } 
signals_rw.append('ZH_H0L1_H17')  
 
samples['ZH_H0L1_H18'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'ZH_H0L1_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*ZH_H0L1_W*(ME_H18/ME_H0L1)',   'FilesPerJob': 4, } 
signals_rw.append('ZH_H0L1_H18')  
 
samples['ZH_H0L1_H19'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'ZH_H0L1_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*ZH_H0L1_W*(ME_H19/ME_H0L1)',   'FilesPerJob': 4, } 
signals_rw.append('ZH_H0L1_H19')  
 
samples['ZH_H0L1_H20'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'ZH_H0L1_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*ZH_H0L1_W*(ME_H20/ME_H0L1)',   'FilesPerJob': 4, } 
signals_rw.append('ZH_H0L1_H20')  
 
samples['ZH_H0L1_H21'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'ZH_H0L1_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*ZH_H0L1_W*(ME_H21/ME_H0L1)',   'FilesPerJob': 4, } 
signals_rw.append('ZH_H0L1_H21')  
 
samples['ZH_H0L1_H22'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'ZH_H0L1_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*ZH_H0L1_W*(ME_H22/ME_H0L1)',   'FilesPerJob': 4, } 
signals_rw.append('ZH_H0L1_H22')  
 
samples['ZH_H0L1_H23'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'ZH_H0L1_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*ZH_H0L1_W*(ME_H23/ME_H0L1)',   'FilesPerJob': 4, } 
signals_rw.append('ZH_H0L1_H23')  
 
samples['ZH_H0L1_H24'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'ZH_H0L1_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*ZH_H0L1_W*(ME_H24/ME_H0L1)',   'FilesPerJob': 4, } 
signals_rw.append('ZH_H0L1_H24')  
 
samples['ZH_H0L1_H25'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'ZH_H0L1_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*ZH_H0L1_W*(ME_H25/ME_H0L1)',   'FilesPerJob': 4, } 
signals_rw.append('ZH_H0L1_H25')  
 
samples['ZH_H0L1_H26'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'ZH_H0L1_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*ZH_H0L1_W*(ME_H26/ME_H0L1)',   'FilesPerJob': 4, } 
signals_rw.append('ZH_H0L1_H26')  
 
samples['ZH_H0L1_H27'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'ZH_H0L1_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*ZH_H0L1_W*(ME_H27/ME_H0L1)',   'FilesPerJob': 4, } 
signals_rw.append('ZH_H0L1_H27')  
 
samples['ZH_H0L1_H28'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'ZH_H0L1_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*ZH_H0L1_W*(ME_H28/ME_H0L1)',   'FilesPerJob': 4, } 
signals_rw.append('ZH_H0L1_H28')  
 
samples['ZH_H0L1_H29'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'ZH_H0L1_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*ZH_H0L1_W*(ME_H29/ME_H0L1)',   'FilesPerJob': 4, } 
signals_rw.append('ZH_H0L1_H29')  
 
samples['ZH_H0L1_H30'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'ZH_H0L1_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*ZH_H0L1_W*(ME_H30/ME_H0L1)',   'FilesPerJob': 4, } 
signals_rw.append('ZH_H0L1_H30')  
 
samples['ZH_H0L1_H31'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'ZH_H0L1_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*ZH_H0L1_W*(ME_H31/ME_H0L1)',   'FilesPerJob': 4, } 
signals_rw.append('ZH_H0L1_H31')  
 
samples['ZH_H0L1_H32'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'ZH_H0L1_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*ZH_H0L1_W*(ME_H32/ME_H0L1)',   'FilesPerJob': 4, } 
signals_rw.append('ZH_H0L1_H32')  
 
samples['ZH_H0L1_H33'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'ZH_H0L1_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*ZH_H0L1_W*(ME_H33/ME_H0L1)',   'FilesPerJob': 4, } 
signals_rw.append('ZH_H0L1_H33')  
 
samples['ZH_H0L1_H34'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'ZH_H0L1_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*ZH_H0L1_W*(ME_H34/ME_H0L1)',   'FilesPerJob': 4, } 
signals_rw.append('ZH_H0L1_H34')  
 
samples['ZH_H0L1_H35'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'ZH_H0L1_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*ZH_H0L1_W*(ME_H35/ME_H0L1)',   'FilesPerJob': 4, } 
signals_rw.append('ZH_H0L1_H35')  
 
samples['ZH_H0L1f05_H1'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'ZH_H0L1f05_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*ZH_H0L1f05_W*(ME_H1/ME_H0L1f05)',   'FilesPerJob': 4, } 
signals_rw.append('ZH_H0L1f05_H1')  
 
samples['ZH_H0L1f05_H2'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'ZH_H0L1f05_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*ZH_H0L1f05_W*(ME_H2/ME_H0L1f05)',   'FilesPerJob': 4, } 
signals_rw.append('ZH_H0L1f05_H2')  
 
samples['ZH_H0L1f05_H3'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'ZH_H0L1f05_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*ZH_H0L1f05_W*(ME_H3/ME_H0L1f05)',   'FilesPerJob': 4, } 
signals_rw.append('ZH_H0L1f05_H3')  
 
samples['ZH_H0L1f05_H4'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'ZH_H0L1f05_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*ZH_H0L1f05_W*(ME_H4/ME_H0L1f05)',   'FilesPerJob': 4, } 
signals_rw.append('ZH_H0L1f05_H4')  
 
samples['ZH_H0L1f05_H5'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'ZH_H0L1f05_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*ZH_H0L1f05_W*(ME_H5/ME_H0L1f05)',   'FilesPerJob': 4, } 
signals_rw.append('ZH_H0L1f05_H5')  
 
samples['ZH_H0L1f05_H6'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'ZH_H0L1f05_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*ZH_H0L1f05_W*(ME_H6/ME_H0L1f05)',   'FilesPerJob': 4, } 
signals_rw.append('ZH_H0L1f05_H6')  
 
samples['ZH_H0L1f05_H7'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'ZH_H0L1f05_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*ZH_H0L1f05_W*(ME_H7/ME_H0L1f05)',   'FilesPerJob': 4, } 
signals_rw.append('ZH_H0L1f05_H7')  
 
samples['ZH_H0L1f05_H8'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'ZH_H0L1f05_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*ZH_H0L1f05_W*(ME_H8/ME_H0L1f05)',   'FilesPerJob': 4, } 
signals_rw.append('ZH_H0L1f05_H8')  
 
samples['ZH_H0L1f05_H9'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'ZH_H0L1f05_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*ZH_H0L1f05_W*(ME_H9/ME_H0L1f05)',   'FilesPerJob': 4, } 
signals_rw.append('ZH_H0L1f05_H9')  
 
samples['ZH_H0L1f05_H10'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'ZH_H0L1f05_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*ZH_H0L1f05_W*(ME_H10/ME_H0L1f05)',   'FilesPerJob': 4, } 
signals_rw.append('ZH_H0L1f05_H10')  
 
samples['ZH_H0L1f05_H11'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'ZH_H0L1f05_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*ZH_H0L1f05_W*(ME_H11/ME_H0L1f05)',   'FilesPerJob': 4, } 
signals_rw.append('ZH_H0L1f05_H11')  
 
samples['ZH_H0L1f05_H12'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'ZH_H0L1f05_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*ZH_H0L1f05_W*(ME_H12/ME_H0L1f05)',   'FilesPerJob': 4, } 
signals_rw.append('ZH_H0L1f05_H12')  
 
samples['ZH_H0L1f05_H13'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'ZH_H0L1f05_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*ZH_H0L1f05_W*(ME_H13/ME_H0L1f05)',   'FilesPerJob': 4, } 
signals_rw.append('ZH_H0L1f05_H13')  
 
samples['ZH_H0L1f05_H14'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'ZH_H0L1f05_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*ZH_H0L1f05_W*(ME_H14/ME_H0L1f05)',   'FilesPerJob': 4, } 
signals_rw.append('ZH_H0L1f05_H14')  
 
samples['ZH_H0L1f05_H15'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'ZH_H0L1f05_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*ZH_H0L1f05_W*(ME_H15/ME_H0L1f05)',   'FilesPerJob': 4, } 
signals_rw.append('ZH_H0L1f05_H15')  
 
samples['ZH_H0L1f05_H16'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'ZH_H0L1f05_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*ZH_H0L1f05_W*(ME_H16/ME_H0L1f05)',   'FilesPerJob': 4, } 
signals_rw.append('ZH_H0L1f05_H16')  
 
samples['ZH_H0L1f05_H17'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'ZH_H0L1f05_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*ZH_H0L1f05_W*(ME_H17/ME_H0L1f05)',   'FilesPerJob': 4, } 
signals_rw.append('ZH_H0L1f05_H17')  
 
samples['ZH_H0L1f05_H18'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'ZH_H0L1f05_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*ZH_H0L1f05_W*(ME_H18/ME_H0L1f05)',   'FilesPerJob': 4, } 
signals_rw.append('ZH_H0L1f05_H18')  
 
samples['ZH_H0L1f05_H19'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'ZH_H0L1f05_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*ZH_H0L1f05_W*(ME_H19/ME_H0L1f05)',   'FilesPerJob': 4, } 
signals_rw.append('ZH_H0L1f05_H19')  
 
samples['ZH_H0L1f05_H20'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'ZH_H0L1f05_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*ZH_H0L1f05_W*(ME_H20/ME_H0L1f05)',   'FilesPerJob': 4, } 
signals_rw.append('ZH_H0L1f05_H20')  
 
samples['ZH_H0L1f05_H21'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'ZH_H0L1f05_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*ZH_H0L1f05_W*(ME_H21/ME_H0L1f05)',   'FilesPerJob': 4, } 
signals_rw.append('ZH_H0L1f05_H21')  
 
samples['ZH_H0L1f05_H22'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'ZH_H0L1f05_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*ZH_H0L1f05_W*(ME_H22/ME_H0L1f05)',   'FilesPerJob': 4, } 
signals_rw.append('ZH_H0L1f05_H22')  
 
samples['ZH_H0L1f05_H23'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'ZH_H0L1f05_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*ZH_H0L1f05_W*(ME_H23/ME_H0L1f05)',   'FilesPerJob': 4, } 
signals_rw.append('ZH_H0L1f05_H23')  
 
samples['ZH_H0L1f05_H24'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'ZH_H0L1f05_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*ZH_H0L1f05_W*(ME_H24/ME_H0L1f05)',   'FilesPerJob': 4, } 
signals_rw.append('ZH_H0L1f05_H24')  
 
samples['ZH_H0L1f05_H25'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'ZH_H0L1f05_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*ZH_H0L1f05_W*(ME_H25/ME_H0L1f05)',   'FilesPerJob': 4, } 
signals_rw.append('ZH_H0L1f05_H25')  
 
samples['ZH_H0L1f05_H26'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'ZH_H0L1f05_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*ZH_H0L1f05_W*(ME_H26/ME_H0L1f05)',   'FilesPerJob': 4, } 
signals_rw.append('ZH_H0L1f05_H26')  
 
samples['ZH_H0L1f05_H27'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'ZH_H0L1f05_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*ZH_H0L1f05_W*(ME_H27/ME_H0L1f05)',   'FilesPerJob': 4, } 
signals_rw.append('ZH_H0L1f05_H27')  
 
samples['ZH_H0L1f05_H28'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'ZH_H0L1f05_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*ZH_H0L1f05_W*(ME_H28/ME_H0L1f05)',   'FilesPerJob': 4, } 
signals_rw.append('ZH_H0L1f05_H28')  
 
samples['ZH_H0L1f05_H29'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'ZH_H0L1f05_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*ZH_H0L1f05_W*(ME_H29/ME_H0L1f05)',   'FilesPerJob': 4, } 
signals_rw.append('ZH_H0L1f05_H29')  
 
samples['ZH_H0L1f05_H30'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'ZH_H0L1f05_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*ZH_H0L1f05_W*(ME_H30/ME_H0L1f05)',   'FilesPerJob': 4, } 
signals_rw.append('ZH_H0L1f05_H30')  
 
samples['ZH_H0L1f05_H31'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'ZH_H0L1f05_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*ZH_H0L1f05_W*(ME_H31/ME_H0L1f05)',   'FilesPerJob': 4, } 
signals_rw.append('ZH_H0L1f05_H31')  
 
samples['ZH_H0L1f05_H32'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'ZH_H0L1f05_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*ZH_H0L1f05_W*(ME_H32/ME_H0L1f05)',   'FilesPerJob': 4, } 
signals_rw.append('ZH_H0L1f05_H32')  
 
samples['ZH_H0L1f05_H33'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'ZH_H0L1f05_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*ZH_H0L1f05_W*(ME_H33/ME_H0L1f05)',   'FilesPerJob': 4, } 
signals_rw.append('ZH_H0L1f05_H33')  
 
samples['ZH_H0L1f05_H34'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'ZH_H0L1f05_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*ZH_H0L1f05_W*(ME_H34/ME_H0L1f05)',   'FilesPerJob': 4, } 
signals_rw.append('ZH_H0L1f05_H34')  
 
samples['ZH_H0L1f05_H35'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'ZH_H0L1f05_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*ZH_H0L1f05_W*(ME_H35/ME_H0L1f05)',   'FilesPerJob': 4, } 
signals_rw.append('ZH_H0L1f05_H35')  
 
# GGH MC samples 
 
# Original GGH samples 
 
samples['H0PM'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'H0PM_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*H0PM_W',   'FilesPerJob': 4, } 
 
samples['H0PH'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'H0PH_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*H0PH_W',   'FilesPerJob': 4, } 
 
samples['H0PHf05'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'H0PHf05_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*H0PHf05_W',   'FilesPerJob': 4, } 
 
samples['H0M'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'H0M_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*H0M_W',   'FilesPerJob': 4, } 
 
samples['H0Mf05'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'H0Mf05_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*H0Mf05_W',   'FilesPerJob': 4, } 
 
samples['H0L1'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'H0L1_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*H0L1_W',   'FilesPerJob': 4, } 
 
samples['H0L1f05'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'H0L1f05_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*H0L1f05_W',   'FilesPerJob': 4, } 
 
# Reweighted GGH samples 
 
samples['H0PM_H1'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'H0PM_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*H0PM_W*(ME_H1/ME_H0PM)',   'FilesPerJob': 4, } 
signals_rw.append('H0PM_H1')  
 
samples['H0PM_H2'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'H0PM_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*H0PM_W*(ME_H2/ME_H0PM)',   'FilesPerJob': 4, } 
signals_rw.append('H0PM_H2')  
 
samples['H0PM_H3'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'H0PM_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*H0PM_W*(ME_H3/ME_H0PM)',   'FilesPerJob': 4, } 
signals_rw.append('H0PM_H3')  
 
samples['H0PM_H4'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'H0PM_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*H0PM_W*(ME_H4/ME_H0PM)',   'FilesPerJob': 4, } 
signals_rw.append('H0PM_H4')  
 
samples['H0PM_H5'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'H0PM_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*H0PM_W*(ME_H5/ME_H0PM)',   'FilesPerJob': 4, } 
signals_rw.append('H0PM_H5')  
 
samples['H0PM_H6'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'H0PM_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*H0PM_W*(ME_H6/ME_H0PM)',   'FilesPerJob': 4, } 
signals_rw.append('H0PM_H6')  
 
samples['H0PM_H7'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'H0PM_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*H0PM_W*(ME_H7/ME_H0PM)',   'FilesPerJob': 4, } 
signals_rw.append('H0PM_H7')  
 
samples['H0PM_H8'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'H0PM_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*H0PM_W*(ME_H8/ME_H0PM)',   'FilesPerJob': 4, } 
signals_rw.append('H0PM_H8')  
 
samples['H0PM_H9'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'H0PM_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*H0PM_W*(ME_H9/ME_H0PM)',   'FilesPerJob': 4, } 
signals_rw.append('H0PM_H9')  
 
samples['H0PM_H10'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'H0PM_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*H0PM_W*(ME_H10/ME_H0PM)',   'FilesPerJob': 4, } 
signals_rw.append('H0PM_H10')  
 
samples['H0PH_H1'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'H0PH_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*H0PH_W*(ME_H1/ME_H0PH)',   'FilesPerJob': 4, } 
signals_rw.append('H0PH_H1')  
 
samples['H0PH_H2'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'H0PH_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*H0PH_W*(ME_H2/ME_H0PH)',   'FilesPerJob': 4, } 
signals_rw.append('H0PH_H2')  
 
samples['H0PH_H3'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'H0PH_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*H0PH_W*(ME_H3/ME_H0PH)',   'FilesPerJob': 4, } 
signals_rw.append('H0PH_H3')  
 
samples['H0PH_H4'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'H0PH_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*H0PH_W*(ME_H4/ME_H0PH)',   'FilesPerJob': 4, } 
signals_rw.append('H0PH_H4')  
 
samples['H0PH_H5'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'H0PH_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*H0PH_W*(ME_H5/ME_H0PH)',   'FilesPerJob': 4, } 
signals_rw.append('H0PH_H5')  
 
samples['H0PH_H6'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'H0PH_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*H0PH_W*(ME_H6/ME_H0PH)',   'FilesPerJob': 4, } 
signals_rw.append('H0PH_H6')  
 
samples['H0PH_H7'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'H0PH_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*H0PH_W*(ME_H7/ME_H0PH)',   'FilesPerJob': 4, } 
signals_rw.append('H0PH_H7')  
 
samples['H0PH_H8'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'H0PH_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*H0PH_W*(ME_H8/ME_H0PH)',   'FilesPerJob': 4, } 
signals_rw.append('H0PH_H8')  
 
samples['H0PH_H9'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'H0PH_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*H0PH_W*(ME_H9/ME_H0PH)',   'FilesPerJob': 4, } 
signals_rw.append('H0PH_H9')  
 
samples['H0PH_H10'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'H0PH_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*H0PH_W*(ME_H10/ME_H0PH)',   'FilesPerJob': 4, } 
signals_rw.append('H0PH_H10')  
 
samples['H0PHf05_H1'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'H0PHf05_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*H0PHf05_W*(ME_H1/ME_H0PHf05)',   'FilesPerJob': 4, } 
signals_rw.append('H0PHf05_H1')  
 
samples['H0PHf05_H2'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'H0PHf05_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*H0PHf05_W*(ME_H2/ME_H0PHf05)',   'FilesPerJob': 4, } 
signals_rw.append('H0PHf05_H2')  
 
samples['H0PHf05_H3'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'H0PHf05_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*H0PHf05_W*(ME_H3/ME_H0PHf05)',   'FilesPerJob': 4, } 
signals_rw.append('H0PHf05_H3')  
 
samples['H0PHf05_H4'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'H0PHf05_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*H0PHf05_W*(ME_H4/ME_H0PHf05)',   'FilesPerJob': 4, } 
signals_rw.append('H0PHf05_H4')  
 
samples['H0PHf05_H5'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'H0PHf05_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*H0PHf05_W*(ME_H5/ME_H0PHf05)',   'FilesPerJob': 4, } 
signals_rw.append('H0PHf05_H5')  
 
samples['H0PHf05_H6'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'H0PHf05_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*H0PHf05_W*(ME_H6/ME_H0PHf05)',   'FilesPerJob': 4, } 
signals_rw.append('H0PHf05_H6')  
 
samples['H0PHf05_H7'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'H0PHf05_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*H0PHf05_W*(ME_H7/ME_H0PHf05)',   'FilesPerJob': 4, } 
signals_rw.append('H0PHf05_H7')  
 
samples['H0PHf05_H8'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'H0PHf05_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*H0PHf05_W*(ME_H8/ME_H0PHf05)',   'FilesPerJob': 4, } 
signals_rw.append('H0PHf05_H8')  
 
samples['H0PHf05_H9'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'H0PHf05_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*H0PHf05_W*(ME_H9/ME_H0PHf05)',   'FilesPerJob': 4, } 
signals_rw.append('H0PHf05_H9')  
 
samples['H0PHf05_H10'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'H0PHf05_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*H0PHf05_W*(ME_H10/ME_H0PHf05)',   'FilesPerJob': 4, } 
signals_rw.append('H0PHf05_H10')  
 
samples['H0M_H1'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'H0M_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*H0M_W*(ME_H1/ME_H0M)',   'FilesPerJob': 4, } 
signals_rw.append('H0M_H1')  
 
samples['H0M_H2'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'H0M_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*H0M_W*(ME_H2/ME_H0M)',   'FilesPerJob': 4, } 
signals_rw.append('H0M_H2')  
 
samples['H0M_H3'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'H0M_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*H0M_W*(ME_H3/ME_H0M)',   'FilesPerJob': 4, } 
signals_rw.append('H0M_H3')  
 
samples['H0M_H4'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'H0M_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*H0M_W*(ME_H4/ME_H0M)',   'FilesPerJob': 4, } 
signals_rw.append('H0M_H4')  
 
samples['H0M_H5'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'H0M_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*H0M_W*(ME_H5/ME_H0M)',   'FilesPerJob': 4, } 
signals_rw.append('H0M_H5')  
 
samples['H0M_H6'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'H0M_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*H0M_W*(ME_H6/ME_H0M)',   'FilesPerJob': 4, } 
signals_rw.append('H0M_H6')  
 
samples['H0M_H7'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'H0M_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*H0M_W*(ME_H7/ME_H0M)',   'FilesPerJob': 4, } 
signals_rw.append('H0M_H7')  
 
samples['H0M_H8'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'H0M_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*H0M_W*(ME_H8/ME_H0M)',   'FilesPerJob': 4, } 
signals_rw.append('H0M_H8')  
 
samples['H0M_H9'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'H0M_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*H0M_W*(ME_H9/ME_H0M)',   'FilesPerJob': 4, } 
signals_rw.append('H0M_H9')  
 
samples['H0M_H10'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'H0M_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*H0M_W*(ME_H10/ME_H0M)',   'FilesPerJob': 4, } 
signals_rw.append('H0M_H10')  
 
samples['H0Mf05_H1'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'H0Mf05_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*H0Mf05_W*(ME_H1/ME_H0Mf05)',   'FilesPerJob': 4, } 
signals_rw.append('H0Mf05_H1')  
 
samples['H0Mf05_H2'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'H0Mf05_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*H0Mf05_W*(ME_H2/ME_H0Mf05)',   'FilesPerJob': 4, } 
signals_rw.append('H0Mf05_H2')  
 
samples['H0Mf05_H3'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'H0Mf05_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*H0Mf05_W*(ME_H3/ME_H0Mf05)',   'FilesPerJob': 4, } 
signals_rw.append('H0Mf05_H3')  
 
samples['H0Mf05_H4'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'H0Mf05_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*H0Mf05_W*(ME_H4/ME_H0Mf05)',   'FilesPerJob': 4, } 
signals_rw.append('H0Mf05_H4')  
 
samples['H0Mf05_H5'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'H0Mf05_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*H0Mf05_W*(ME_H5/ME_H0Mf05)',   'FilesPerJob': 4, } 
signals_rw.append('H0Mf05_H5')  
 
samples['H0Mf05_H6'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'H0Mf05_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*H0Mf05_W*(ME_H6/ME_H0Mf05)',   'FilesPerJob': 4, } 
signals_rw.append('H0Mf05_H6')  
 
samples['H0Mf05_H7'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'H0Mf05_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*H0Mf05_W*(ME_H7/ME_H0Mf05)',   'FilesPerJob': 4, } 
signals_rw.append('H0Mf05_H7')  
 
samples['H0Mf05_H8'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'H0Mf05_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*H0Mf05_W*(ME_H8/ME_H0Mf05)',   'FilesPerJob': 4, } 
signals_rw.append('H0Mf05_H8')  
 
samples['H0Mf05_H9'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'H0Mf05_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*H0Mf05_W*(ME_H9/ME_H0Mf05)',   'FilesPerJob': 4, } 
signals_rw.append('H0Mf05_H9')  
 
samples['H0Mf05_H10'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'H0Mf05_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*H0Mf05_W*(ME_H10/ME_H0Mf05)',   'FilesPerJob': 4, } 
signals_rw.append('H0Mf05_H10')  
 
samples['H0L1_H1'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'H0L1_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*H0L1_W*(ME_H1/ME_H0L1)',   'FilesPerJob': 4, } 
signals_rw.append('H0L1_H1')  
 
samples['H0L1_H2'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'H0L1_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*H0L1_W*(ME_H2/ME_H0L1)',   'FilesPerJob': 4, } 
signals_rw.append('H0L1_H2')  
 
samples['H0L1_H3'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'H0L1_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*H0L1_W*(ME_H3/ME_H0L1)',   'FilesPerJob': 4, } 
signals_rw.append('H0L1_H3')  
 
samples['H0L1_H4'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'H0L1_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*H0L1_W*(ME_H4/ME_H0L1)',   'FilesPerJob': 4, } 
signals_rw.append('H0L1_H4')  
 
samples['H0L1_H5'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'H0L1_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*H0L1_W*(ME_H5/ME_H0L1)',   'FilesPerJob': 4, } 
signals_rw.append('H0L1_H5')  
 
samples['H0L1_H6'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'H0L1_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*H0L1_W*(ME_H6/ME_H0L1)',   'FilesPerJob': 4, } 
signals_rw.append('H0L1_H6')  
 
samples['H0L1_H7'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'H0L1_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*H0L1_W*(ME_H7/ME_H0L1)',   'FilesPerJob': 4, } 
signals_rw.append('H0L1_H7')  
 
samples['H0L1_H8'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'H0L1_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*H0L1_W*(ME_H8/ME_H0L1)',   'FilesPerJob': 4, } 
signals_rw.append('H0L1_H8')  
 
samples['H0L1_H9'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'H0L1_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*H0L1_W*(ME_H9/ME_H0L1)',   'FilesPerJob': 4, } 
signals_rw.append('H0L1_H9')  
 
samples['H0L1_H10'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'H0L1_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*H0L1_W*(ME_H10/ME_H0L1)',   'FilesPerJob': 4, } 
signals_rw.append('H0L1_H10')  
 
samples['H0L1f05_H1'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'H0L1f05_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*H0L1f05_W*(ME_H1/ME_H0L1f05)',   'FilesPerJob': 4, } 
signals_rw.append('H0L1f05_H1')  
 
samples['H0L1f05_H2'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'H0L1f05_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*H0L1f05_W*(ME_H2/ME_H0L1f05)',   'FilesPerJob': 4, } 
signals_rw.append('H0L1f05_H2')  
 
samples['H0L1f05_H3'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'H0L1f05_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*H0L1f05_W*(ME_H3/ME_H0L1f05)',   'FilesPerJob': 4, } 
signals_rw.append('H0L1f05_H3')  
 
samples['H0L1f05_H4'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'H0L1f05_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*H0L1f05_W*(ME_H4/ME_H0L1f05)',   'FilesPerJob': 4, } 
signals_rw.append('H0L1f05_H4')  
 
samples['H0L1f05_H5'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'H0L1f05_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*H0L1f05_W*(ME_H5/ME_H0L1f05)',   'FilesPerJob': 4, } 
signals_rw.append('H0L1f05_H5')  
 
samples['H0L1f05_H6'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'H0L1f05_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*H0L1f05_W*(ME_H6/ME_H0L1f05)',   'FilesPerJob': 4, } 
signals_rw.append('H0L1f05_H6')  
 
samples['H0L1f05_H7'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'H0L1f05_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*H0L1f05_W*(ME_H7/ME_H0L1f05)',   'FilesPerJob': 4, } 
signals_rw.append('H0L1f05_H7')  
 
samples['H0L1f05_H8'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'H0L1f05_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*H0L1f05_W*(ME_H8/ME_H0L1f05)',   'FilesPerJob': 4, } 
signals_rw.append('H0L1f05_H8')  
 
samples['H0L1f05_H9'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'H0L1f05_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*H0L1f05_W*(ME_H9/ME_H0L1f05)',   'FilesPerJob': 4, } 
signals_rw.append('H0L1f05_H9')  
 
samples['H0L1f05_H10'] = { 
   'name':   nanoGetSampleFiles(mcDirectory, 'H0L1f05_ToWWTo2L2Nu'), 
   'weight': mcCommonWeight+ '*H0L1f05_W*(ME_H10/ME_H0L1f05)',   'FilesPerJob': 4, } 
signals_rw.append('H0L1f05_H10')  
 

