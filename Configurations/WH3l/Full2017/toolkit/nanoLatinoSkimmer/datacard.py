#!/usr/bin/env python

from __future__ import print_function

import os
import ROOT
ROOT.PyConfig.IgnoreCommandLineOptions = True

from PhysicsTools.NanoAODTools.postprocessing.framework.postprocessor import PostProcessor

# Import needed modules compatible with NanoAOD framework
from LatinoAnalysis.NanoGardener.modules.l3KinProducer import *

# Define template skimmer
#   See https://github.com/cms-nanoAOD/nanoAOD-tools/blob/master/python/postprocessing/framework/postprocessor.py

TemplateSkimmer = PostProcessor(
    outputDir = "{0}/src/PlotsConfigurations/Configurations/WH3l/Full2017/toolkit/nanoLatinoSkimmer".format(os.getenv("CMSSW_BASE")),
    inputFiles = "./tmp/1CEF9BDB-BC44-E811-996F-801844DF001C.root",
    # jsonInput = "{0}/src/LatinoAnalysis/NanoGardener/python/data/certification/Cert_294927-306462_13TeV_EOY2017ReReco_Collisions17_JSON.txt".format(os.getenv("CMSSW_BASE")),
    jsonInput = None,
    cut = "nLepton>2",
    branchsel = None,
    outputbranchsel = "{0}/src/PlotsConfigurations/Configurations/WH3l/Full2017/toolkit/nanoLatinoSkimmer/outputBranchSel.txt".format(os.getenv("CMSSW_BASE")),
    modules = [
        l3KinProducer(),
    ],
    provenance = True,
    fwkJobReport = False,
)

# Prepare datacard and customize submit macro
def customizeSub(subTemplate):
    with open("../../configuration.py") as handle:
        exec(handle)

    samples = {}
    with open(samplesFile) as handle:
        exec(handle)

    with open("INPUTFILE.data",'w') as handle:
        for sampleName, sample in samples.items():
            for f in sample['name']:
                handle.write("{0}\n".format(f))

    sub = subTemplate
    sub += """
arguments   = run {0} {1}
queue inputFiles from INPUTFILE.data
""".format(
        os.path.abspath(args.datacard),
        "--inputFiles $(inputFiles) ")
    return sub


