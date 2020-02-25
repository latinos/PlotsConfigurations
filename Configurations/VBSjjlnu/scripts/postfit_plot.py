from __future__ import print_function
import yaml
import json
import argparse
import sys
import os
import subprocess
import condor_prep
import random

parser = argparse.ArgumentParser()
parser.add_argument("-c","--config", help="configuration file", type=str)
parser.add_argument("-d","--datacards", help="Datacard names", type=str)
parser.add_argument("-b","--basedir", help="Baseline folder", type=str)
parser.add_argument("-o","--outputdir", help="Output folder", type=str)
parser.add_argument("--plot-config", help="Path of plot configuration.py", required=True, type=str)
parser.add_argument("--plot-var", help="Path of plot configuration.py", required=True, type=str)
parser.add_argument("--year", help="Year", required=True, type=str)
args = parser.parse_args()

#Loading plot configuration
exec(open(args.plot_config))

if args.config.endswith(".yaml"):
    config = yaml.load(open(args.config))
elif args.config.endswith(".json"):
    config = json.load(open(args.config))
else: 
    print("Error! No valid input file")
    exi(1)

################################################################################## 
def post_fit_plots(datac):
    print(">Running post fit plots")
    if args.plot_config == None: 
        print("> ERROR: Missing --plot-config!")
        return
    plotbasedir = os.path.dirname(args.plot_config)
    outdir = os.getcwd() +"/"+ datac["outputdir"] 
    cmds = ["cd "+ plotbasedir]

    combconf = None
    for var in datac["phase_spaces"]:
        if var["var"] == args.plot_var:
            combconf = var 
    if not combconf:
        print("> Error! Requested variable not found in datacard")
        return 
    
    cmds.append("""mkPostFitPlot.py --inputFileCombine={} \\
        --outputFile={}/postfit_latino_{}.root --variable {} \\
        --cutNameInOriginal={} --cut={} \\
        --inputFile={}/{} --kind b --pycfg={}""".format(
            outdir+"/fitDiagnostics."+datac["datacard_name"]+".root",
            outputDir,
            datac["datacard_name"],
            args.plot_var,
            combconf["cut"],
            combconf["name"] + "_"+args.year, #cut name in the datacard
            outputDir, "plots_{}.root".format(tag),
            args.plot_config.split("/")[-1]
        ))
    cmds.append("""mkPlot.py  --pycfg={} \\
        --inputFile={}/postfit_latino_{}.root \\
        --showIntegralLegend=1 --showRelativeRatio --plotNormalizedDistributions=True --minLogC 0.3 --maxLogC 1e2 \\
        --minLogCratio 0.3 --maxLogCratio 1e2 --postFit=0 --outputDirPlots={} \\
        --onlyVariable={} --onlyCut={}""".format(
            args.plot_config.split("/")[-1],
            outputDir, 
            datac["datacard_name"],
            outputDirPlots,
            combconf["var"], combconf["cut"]
        ))

    os.system("\n".join(cmds))
    print("DONE!")



for datac in config:
    if args.datacards and datac["datacard_name"] not in args.datacards: continue
    outdir = args.outputdir + "/" + datac["datacard_name"]
    datac["outputdir"] = outdir
    print("Preparing datacard: "+ datac["datacard_name"])

    post_fit_plots(datac)