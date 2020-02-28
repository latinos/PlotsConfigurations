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
parser.add_argument("--region-name", help="Combine region in the datacard to plot", required=False, type=str)
parser.add_argument("--year", help="Year", required=True, type=str)
parser.add_argument("--debug", help="Debug", required=False, action="store_true")
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
    basedircomb = os.getcwd() +"/"+ args.basedir + "/" + datac["datacard_name"]
    cmds = []

    combconf = None
    for combconf in datac["phase_spaces"]:
        # The baseline is to plot all regions and variables
        # If not specified
        if args.region_name != None and var["name"] != args.region_name: continue 

        print("Post fit of variable {}, cut {}".format(combconf["var"], combconf["cut"]))
        
        cmdpost1 = """cd {9};\\
            mkPostFitPlot.py --inputFileCombine={0} \\
            --outputFile={1}/postfit_latino_{2}.root --variable {3} \\
            --cutNameInOriginal={4} --cut={5} \\
            --inputFile={6}/{7} --kind=b --pycfg={8}""".format(
                basedircomb+"/fitDiagnostics."+datac["datacard_name"]+".root",
                outputDir,
                datac["datacard_name"],
                combconf["var"],
                combconf["cut"],
                combconf["name"] + "_"+args.year, #cut name in the datacard
                outputDir, "plots_{}.root".format(tag),
                args.plot_config.split("/")[-1],
                plotbasedir
            )

        os.makedirs(datac["outputdir"]+"/"+combconf["name"])
        cmdpost2 = """mkPlot.py  --pycfg={0} \\
            --inputFile={1}/postfit_latino_{2}.root \\
            --showIntegralLegend=1 --showRelativeRatio --plotNormalizedDistributions=True --minLogC 0.3 --maxLogC 1e2 \\
            --minLogCratio 0.3 --maxLogCratio 1e2 --postFit=p --outputDirPlots={3} \\
            --onlyVariable={4} --onlyCut={5}""".format(
                args.plot_config.split("/")[-1],
                outputDir, 
                datac["datacard_name"],
                datac["outputdir"]+"/"+combconf["name"],
                combconf["var"], combconf["cut"]
            )
        cmds.append(cmdpost1)
        cmds.append(cmdpost2)
        if args.debug: 
            print(cmdpost1)
            print(cmdpost2)
        os.system("\n".join([cmdpost1, cmdpost2]))

    with open("{}/log_postfit_plots.txt".format(basedircomb), "w") as wf:
        wf.write("\n".join(cmds))
    print("DONE!")



for datac in config:
    if args.datacards and datac["datacard_name"] not in args.datacards: continue
    outdir = args.outputdir + "/" + datac["datacard_name"]
    datac["outputdir"] = outdir
    print("Preparing datacard: "+ datac["datacard_name"])

    post_fit_plots(datac)