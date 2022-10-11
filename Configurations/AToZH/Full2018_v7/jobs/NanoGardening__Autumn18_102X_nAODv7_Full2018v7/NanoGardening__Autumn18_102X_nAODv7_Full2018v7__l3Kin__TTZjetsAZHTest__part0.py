#!/usr/bin/env python 
import os, sys 
import subprocess
import shutil
import ROOT 
ROOT.PyConfig.IgnoreCommandLineOptions = True 
 
from PhysicsTools.NanoAODTools.postprocessing.framework.postprocessor import PostProcessor 
from LatinoAnalysis.NanoGardener.modules.Dummy import *
import LatinoAnalysis.Tools.userConfig as userConfig
 
from LatinoAnalysis.NanoGardener.modules.l3KinProducer import *
 

 
sourceFiles=[
    "root://xrootd-cms.infn.it/root://eosuser.cern.ch//eos/user/s/srudrabh/AZH/samples/nanoLatino_TTZjets__part72.root"
]

files=[]

for source in sourceFiles:
    fname = os.path.basename(source).replace(".root", "_input.root")
    for att in range(5):
        if source.startswith("root://"):
            proc = subprocess.Popen(["xrdcp", "-f", source, "./" + fname])
            proc.communicate()
            if proc.returncode == 0:
                out, err = subprocess.Popen(["xrdfs", source[:source.find("/", 7)], "stat", source[source.find("/", 7) + 1:]], stdout=subprocess.PIPE, stderr=subprocess.PIPE).communicate()
                try:
                    size = int(out.split("\n")[2].split()[1])
                except:
                    if hasattr(userConfig, "postProcSkipSizeValidation") and userConfig.postProcSkipSizeValidation:
                        sys.stderr.write("Failed to obtain original file size but skipping validation as requested by user\n")
                        break
                    raise
            else:
                continue
        else:
            shutil.copyfile(source, "./" + fname)
            size = os.stat(source).st_size

        try:
            if os.stat(os.path.basename(fname)).st_size == size:
                break
        except:
            try:
                os.unlink(os.path.basename(fname))
            except:
                pass
    else:
        raise RuntimeError("Failed to download " + source)

    files.append(fname)

p = PostProcessor(  "."   ,          
                    files ,          
                    cut=None ,       
                    branchsel=None , 
                    outputbranchsel=None , 
                    modules=[        
                          l3KinProducer(),
                            ],      
                    provenance=True, 
                    fwkJobReport=False, 
                    haddFileName="nanoLatino_TTZjetsAZHTest__part0__l3Kin.root", 
                 ) 
 
p.run() 
 
for fname in files:
    try:
        os.unlink(fname)
        os.rename(fname.replace("_input.root", "_input_Skim.root"), fname.replace("_input.root", "_Skim.root"))
    except:
        pass
