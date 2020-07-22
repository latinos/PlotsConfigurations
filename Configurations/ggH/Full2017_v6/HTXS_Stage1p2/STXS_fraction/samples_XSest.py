import os
import inspect

configurations = os.path.realpath(inspect.getfile(inspect.currentframe())) # this file
configurations = os.path.dirname(configurations) # HTXS
configurations = os.path.dirname(configurations) # ggH2017v6
configurations = os.path.dirname(configurations) # Differential
configurations = os.path.dirname(configurations) # Configurations

from LatinoAnalysis.Tools.commonTools import getSampleFiles, getBaseW, addSampleWeight

def getFilesFromDAS(dataset,dasInstance='prod/global'):
     dasCmd='dasgoclient -query="instance='+dasInstance+' file dataset='+dataset+'"'
     print dasCmd
     proc=subprocess.Popen(dasCmd, stderr = subprocess.PIPE,stdout = subprocess.PIPE, shell = True)
     out, err = proc.communicate()
     if not proc.returncode == 0 :
       print out
       print err
       exit()
     FileList=string.split(out)
     return FileList

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

###########################################
#############   SIGNALS  ##################
###########################################

## ggH HWW
samples['GluGluHToWWTo2L2Nu_Powheg_M125'] = {'name' :getFilesFromDAS('/GluGluHToWWTo2L2Nu_M125_TuneCP5_PSw_13TeV-powheg2-pythia8/RunIIFall17NanoAODv6-PU2017_12Apr2018_Nano25Oct2019_102X_mc2017_realistic_v7-v1/NANOAODSIM','prod/global'),
                                                  'weight' : '1',
                                                  'FilesPerJob': 1,
}
addSampleWeight(samples, 'GluGluHToWWTo2L2Nu_Powheg_M125', 'name', 'Weight2MINLO')

samples['VBFHToWWTo2L2Nu_M125'] = {'name' :getFilesFromDAS('/VBFHToWWTo2L2Nu_M125_13TeV_powheg2_JHUGenV714_pythia8/RunIIFall17NanoAODv6-PU2017_12Apr2018_Nano25Oct2019_102X_mc2017_realistic_v7-v1/NANOAODSIM','prod/global'),
                                                  'weight' : '1',
                                                  'FilesPerJob': 1,
}
samples['HZJ_HToWWTo2L2Nu_M125'] = {'name' :getFilesFromDAS('/HZJ_HToWWTo2L2Nu_M125_13TeV_powheg_jhugen714_pythia8_TuneCP5/RunIIFall17NanoAODv6-PU2017_12Apr2018_Nano25Oct2019_102X_mc2017_realistic_v7-v1/NANOAODSIM','prod/global'),
                                                  'weight' : '1',
                                                  'FilesPerJob': 1,
}
samples['GluGluZH_HToWWTo2L2Nu_M125'] = {'name' :getFilesFromDAS('/GluGluZH_HToWWTo2L2Nu_M125_13TeV_powheg_pythia8_TuneCP5/RunIIFall17NanoAODv6-PU2017_12Apr2018_Nano25Oct2019_102X_mc2017_realistic_v7-v1/NANOAODSIM','prod/global'),
                                                  'weight' : '1',
                                                  'FilesPerJob': 1,
}
samples['HWminusJ_HToWW_M125'] = {'name' :getFilesFromDAS('/HWminusJ_HToWW_M125_13TeV_powheg_pythia8_TuneCP5/RunIIFall17NanoAODv6-PU2017_12Apr2018_Nano25Oct2019_102X_mc2017_realistic_v7-v1/NANOAODSIM','prod/global'),
                                                  'weight' : '1',
                                                  'FilesPerJob': 1,
}

samples['HWplusJ_HToWW_M125'] = {'name' :getFilesFromDAS('/HWplusJ_HToWW_M125_13TeV_powheg_pythia8_TuneCP5/RunIIFall17NanoAODv6-PU2017_12Apr218_Nano25Oct2019_102X_mc2017_realistic_v7-v1/NANOAODSIM','prod/global'),
                                                  'weight' : '1',
                                                  'FilesPerJob': 1,
}
