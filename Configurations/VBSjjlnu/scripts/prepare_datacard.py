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
parser.add_argument("-rw","--redo-workspace", help="Redo workspace", action="store_true")
parser.add_argument("-p","--process", help="Process to run", type=str)
args = parser.parse_args()

if args.config.endswith(".yaml"):
    config = yaml.load(open(args.config))
elif args.config.endswith(".json"):
    config = json.load(open(args.config))
else: 
    print("Error! No valid input file")
    exi(1)

FIT_OPTIONS = "--robustFit=1 --X-rtd FITTER_NEW_CROSSING_ALGO --X-rtd FITTER_NEVER_GIVE_UP --X-rtd FITTER_BOUND"

def prepare_workspace(datac):
    outdir = datac["outputdir"] 
    if not os.path.exists(outdir):
        os.makedirs(outdir)
    else:
        if os.path.exists("{0}/combined_{1}.root".format(outdir, datac["datacard_name"])):
            if not args.redo_workspace:
                print(">Workspace already exists!")
                return
            else:
                print(">Recreate workspace...")

    cards= []
    for folder in datac["folders"]:
        for card in datac["phase_spaces"] :
            cards.append("{0}_{1}={2}/{3}/{4}/datacard.txt".format(
                                card["name"], folder["name"],  args.basedir + "/" + folder["basedir"],
                                                                card["cut"], card["var"]))
   
    os.system("combineCards.py {} > {}/combined_{}.txt".format(" ".join(cards), outdir, datac["datacard_name"])) 
    print(">Preparing workspace")
    os.system("text2workspace.py {0}/combined_{1}.txt -o {0}/combined_{1}.root".format(outdir, datac["datacard_name"]))
    print(">Workspace ready")

'''
Available functions to run on datacards
'''
def significance(datac):
    outdir = datac["outputdir"] 
    print(">Running combine (Asimov + pre-fit nuisances)")
    os.system("combine -M Significance -t -1  --expectSignal=1 {0}/combined_{1}.root > {0}/logSignificance_MCasimov.txt".format(outdir, datac["datacard_name"]))

    with open("{0}/logSignificance_MCasimov.txt".format(outdir)) as f: 
        print(f.read())
        print(">>>>>")

    print(">Running combine (Asimov + post-fit nuisances)")
    os.system("combine -M Significance -t -1  --expectSignal=1 --toysFreq {0}/combined_{1}.root > {0}/logSignificance_data_asimov.txt".format(outdir, datac["datacard_name"]))
    print(">Done")

    with open("{0}/logSignificance_data_asimov.txt".format(outdir)) as f: 
        print(f.read())
        print(">>>>>")

##################################################################################

def fit_and_pulls(datac):
    outdir = datac["outputdir"] 
    print(">Running maximum likelihood fit")
    os.system("""combineTool.py -M FitDiagnostics -d {0}/combined_{1}.root -n .{1}  \\
         --saveShapes --saveNormalizations --saveWithUncertainties {2} > {0}/logFit.txt; \\
             mv fitDiagnostics.{1}.root {0}/""".format(
             outdir, datac["datacard_name"], FIT_OPTIONS))
    with open("{0}/logFit.txt".format(outdir)) as f: 
        print(f.read())
        print(">>>>>")

    print(">Printing Pulls and fit diagnostic")
    os.system("""python {0}/src/HiggsAnalysis/CombinedLimit/test/diffNuisances.py --all --abs --format html \\
             {2}/fitDiagnostics.{1}.root > {2}/fit_diagnostic.html""".format(
                os.environ["CMSSW_BASE"], datac["datacard_name"], outdir))

    print(">>> DONE!")

################################################################################## 

def compatibility(datac):
    outdir = datac["outputdir"] 
    print(">Running Compatibility test")
    print(">> GoodnessOfFit on data")
    os.system("combine -M GoodnessOfFit {0}/combined_{1}.root --algo=saturated > {0}/gof_data.txt".format(
        outdir, datac["datacard_name"]))

    print(">> GoodnessOfFit on toys")
    script = "{0}/gof_script.sh".format(outdir)
    with open(script, "w") as ws:
        ws.write(condor_prep.cmssw_template(os.environ["USER"],os.environ["CMSSW_BASE"]))
        ws.write("\ncombine -M GoodnessOfFit {0}/combined_{1}.root --algo=saturated --toysFreq -t 200 -s $1 > {0}/gof_data_$1.txt".format(
                    os.chdir() +"/"+outdir, datac["datacard_name"]))

    jds = condor_prep.jds_template(script, outdir, 10, ["transfer_output_files = higgsCombineTest.GoodnessOfFit..$(ProcId).mH120.root"])
    proc = subprocess.Popen(['condor_submit'], stdout=subprocess.PIPE, stderr=subprocess.PIPE, stdin=subprocess.PIPE)
    out, err = proc.communicate(jds)
    print(">>>", out)
    if len(err):
        print(">>> ERROR: ", err)
    print(">Submitted condor jobs")

################################################################################## 

for datac in config:
    if args.datacards and datac["datacard_name"] not in args.datacards: continue
    outdir = args.outputdir + "/" + datac["datacard_name"]
    datac["outputdir"] = outdir 

    print("Preparing datacard: "+ datac["datacard_name"])

    prepare_workspace(datac)

    if args.process == "significance":
        significance(datac)    
    elif args.process == "fit_and_pulls":
        fit_and_pulls(datac)
    elif args.process == "compatibility":
        compatibility(datac)    
    else: 
        print("Please specify something to do with the datacard")
