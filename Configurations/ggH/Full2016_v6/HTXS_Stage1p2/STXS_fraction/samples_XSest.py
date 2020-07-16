import os
import inspect

configurations = os.path.realpath(inspect.getfile(inspect.currentframe())) # this file
configurations = os.path.dirname(configurations) # HTXS
configurations = os.path.dirname(configurations) # ggH2018v6
configurations = os.path.dirname(configurations) # Differential
configurations = os.path.dirname(configurations) # Configurations

from LatinoAnalysis.Tools.commonTools import getSampleFiles, getBaseW, addSampleWeight

def getFilesFromDAS(dataset,dasInstance='prod/global'):
     dasCmd='dasgoclient -query="instance='+dasInstance+' file dataset='+dataset+'"'
     #print dasCmd
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
samples['GluGluHToWWTo2L2Nu_alternative_M125'] = {'name' :getFilesFromDAS('/GluGluHToWWTo2L2Nu_M125_13TeV_powheg_JHUgen_pythia8/RunIISummer16NanoAODv6-PUMoriond17_Nano25Oct2019_102X_mcRun2_asymptotic_v7-v1/NANOAODSIM','prod/global'),
                                                  'weight' : '1',
                                                  'FilesPerJob': 1,
}
addSampleWeight(samples, 'GluGluHToWWTo2L2Nu_alternative_M125', 'name', 'Weight2MINLO')
samples['VBFHToWWTo2L2Nu_M125'] = {'name' :getFilesFromDAS('/VBFHToWWTo2L2Nu_M125_13TeV_powheg_JHUgenv628_pythia8/RunIISummer16NanoAODv6-PUMoriond17_Nano25Oct2019_102X_mcRun2_asymptotic_v7-v1/NANOAODSIM','prod/global'),#
                                                  'weight' : '1',
                                                  'FilesPerJob': 1,
}
samples['ggZH_HToWW_M125'] = {'name' :getFilesFromDAS('/GluGluZH_HToWW_M125_13TeV_powheg_pythia8/RunIISummer16NanoAODv6-PUMoriond17_Nano25Oct2019_102X_mcRun2_asymptotic_v7-v1/NANOAODSIM','prod/global'),
                                                  'weight' : '1',
                                                  'FilesPerJob': 1,
}
samples['HWminusJ_HToWW_M125'] = {'name' :getFilesFromDAS('/HWminusJ_HToWW_M125_13TeV_powheg_pythia8/RunIISummer16NanoAODv6-PUMoriond17_Nano25Oct2019_102X_mcRun2_asymptotic_v7-v1/NANOAODSIM','prod/global'),
                                                  'weight' : '1',
                                                  'FilesPerJob': 1,
}
samples['HWplusJ_HToWW_M125'] = {'name' :getFilesFromDAS('/HWplusJ_HToWW_M125_13TeV_powheg_pythia8/RunIISummer16NanoAODv6-PUMoriond17_Nano25Oct2019_102X_mcRun2_asymptotic_v7-v1/NANOAODSIM','prod/global'),
                                                  'weight' : '1',
                                                  'FilesPerJob': 1,
}
samples['HZJ_HToWW_M125'] = {'name' :getFilesFromDAS('/HZJ_HToWW_M125_13TeV_powheg_pythia8/RunIISummer16NanoAODv6-PUMoriond17_Nano25Oct2019_102X_mcRun2_asymptotic_v7-v1/NANOAODSIM','prod/global'),
                                                  'weight' : '1',
                                                  'FilesPerJob': 1,
}
