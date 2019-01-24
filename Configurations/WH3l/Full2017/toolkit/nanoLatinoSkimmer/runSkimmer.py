#!/usr/bin/env python
from __future__ import print_function

import os, sys
import argparse
import copy
import ROOT
ROOT.PyConfig.IgnoreCommandLineOptions = True

from PhysicsTools.NanoAODTools.postprocessing.framework.postprocessor import PostProcessor

# Global variables
ScriptDir       = "/".join(os.path.realpath(__file__).split('/')[:-1])

def createBatch(args):
    """Create batch jobs for mass production"""
    subTemplate = """
getenv      = True
output      = $(ClusterId).$(ProcId).out
error       = $(ClusterId).$(ProcId).err
log         = $(ClusterId).log
+JobFlavour = {0}

executable  = {1}/runSkimmer.py
""".format(args.queue, ScriptDir)

    # Prepare submission script
    with open(args.datacard) as handle:
        exec(handle)

    sub = customizeSub(subTemplate)
    with open("batch.sub",'w') as handle:
        handle.write(sub)

    if args.submit:
        os.system("condor_submit batch.sub")

    pass

def runOne(args):
    """Run one job. Modified from PhysicsTools/NanoAODTools/scripts/nano_postproc.py"""
    with open(args.datacard) as handle:
        exec(handle)

    p = copy.copy(TemplateSkimmer)

    for argName in ["outputDir", "postfix", "json", "branchsel", "outputbranchsel", "inputFiles"]:
        if not getattr(args, argName) in [None, ""]:
            setattr(p, argName, getattr(args, argName))

    if not args.dryrun:
        p.run()

    pass

if __name__ == "__main__":
    parser = argparse.ArgumentParser()

    subparsers = parser.add_subparsers(help='Functions')

    subparserCreate = subparsers.add_parser('create')
    subparserCreate.set_defaults(func=createBatch)
    subparserCreate.add_argument('datacard', type=str,
        help="Datacard to be processed")
    subparserCreate.add_argument("-q", "--queue", dest="queue",
        default="workday",
        help="JobFlavour of HTCondor")
    subparserCreate.add_argument("-s", dest="submit",
        action="store_true",
        help="Submit the jobs")

    subparserRun = subparsers.add_parser('run')
    subparserRun.set_defaults(func=runOne)
    subparserRun.add_argument('datacard', type=str,
        help="Datacard to be processed")
    subparserRun.add_argument("--outdir", dest="outputDir", type=str,
        default=".",
        help="Directory of output file (default: \".\")")
    subparserRun.add_argument("-s", "--postfix", dest="postfix", type=str,
        default=None,
        help="Postfix which will be appended to the file name (default: _Friend for friends, _Skim for skims)")
    subparserRun.add_argument("-J", "--json", dest="json", type=str,
        default=None,
        help="Select events using this JSON file")
    subparserRun.add_argument("-c", "--cut",  dest="cut", type=str,
        default=None,
        help="Cut string")
    subparserRun.add_argument("--bi", "--branch-selection-input",  dest="branchsel", type=str,
        default=None,
        help="Branch selection input")
    subparserRun.add_argument("--bo", "--branch-selection-output",  dest="outputbranchsel", type=str,
        default=None,
        help="Branch selection output")
    subparserRun.add_argument("--inputFiles", dest="inputFiles", nargs='+',
        default=None,
        help="Space separated input file list")
    subparserRun.add_argument("--dryrun", dest="dryrun",
        action="store_true",
        help="Print options only")

    args = parser.parse_args()
    args.func(args)

    sys.exit()

