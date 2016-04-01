import os
import sys

samples = {}
SamplesFile = '../samples.py'#sys.argv[1]
print " SamplesFile =", SamplesFile

if os.path.exists(SamplesFile) :                                                                                                                                             
    handle = open(SamplesFile,'r')                                                                                                                                           
    exec(handle)                                                                                                                                                             
    handle.close()                                                                                                                                                           

    for key, value in samples.iteritems():
        chiave = key
        stringa = str(value)
        print stringa

        #splitting samples.py
        oFileName = "samples" + key + ".py"
        oFile = open (oFileName, 'w')
        oFile.write("samples['" + key + "'] = ") 
        oFile.write(stringa)
        oFile.close()

        #creating one config file per sample
        configFileName = "configuration" + key + ".py"
        configFile = open (configFileName, 'w')
        configFile.write("tag = '" + key + "'")
        configFile.write("\n")
        configFile.write("outputDir = 'rootFile'")
        configFile.write("\n")
        configFile.write("variablesFile = '../variables.py'")
        configFile.write("\n")
        configFile.write("cutsFile = '../cuts.py'")
        configFile.write("\n")
        configFile.write("samplesFile = 'samples" + key + ".py'")
        configFile.write("\n")
        configFile.write("plotFile = '../plot.py'")
        configFile.write("\n")
        configFile.write("lumi = 2.318")
        configFile.write("\n")
        configFile.write("outputDirPlots = '/afs/cern.ch/user/n/ntrevisa/www/figuresLxplus/01Apr2016'")
        configFile.write("\n")
        configFile.write("outputDirDatacard = 'datacards'")
        configFile.write("\n")
        configFile.write("structureFile = '../structure.py'")
        configFile.write("\n")
        configFile.write("nuisancesFile = '../nuisances.py'")
        configFile.close()

        #creating one script per sample
        scriptFileName = "script" + key + ".py"
        scriptFile = open (scriptFileName, 'w')
        scriptFile.write("#!/bin/bash")
        scriptFile.write("\n")
        scriptFile.write("cd /afs/cern.ch/user/n/ntrevisa/work/CMSSW_7_6_3/src/")
        scriptFile.write("\n")
        scriptFile.write("eval `scramv1 runtime -sh`")
        scriptFile.write("\n")
        scriptFile.write("cd /afs/cern.ch/user/n/ntrevisa/work/CMSSW_7_6_3/src/PlotsConfigurations/Configurations/WW/python")
        scriptFile.write("\n")
        scriptFile.write("source /afs/cern.ch/project/eos/installation/user/etc/setup.sh")
        scriptFile.write("\n")
        scriptFile.write("/afs/cern.ch/project/eos/installation/0.3.84-aquamarine.user/bin/eos.select -b fuse mount eosuser")
        scriptFile.write("\n")
        scriptFile.write("mkShapes.py      --pycfg=configuration" + key + ".py  --inputDir=eosuser/user/r/rebeca/HWW2015/22Jan_25ns_mAODv2_MC/MCl2loose__hadd__bSFL2pTEff__l2tight__wwSel")
        scriptFile.close()

        #launch scripts
        os.system("chmod +x " + scriptFileName)
        os.system("bsub -q 8nh " + scriptFileName)

    os.system("bjobs")

