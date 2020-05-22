from __future__ import print_function
import yaml
import json
import argparse
import sys
import os
import re
import subprocess
import condor_prep
import random
import logging
from copy import copy
from multiprocessing import Pool



parser = argparse.ArgumentParser()
parser.add_argument("-c","--config", help="configuration file", type=str)
parser.add_argument("-d","--datacards", help="Datacard names", nargs="+", type=str)
parser.add_argument("-b","--basedir", help="Baseline folder", type=str)
parser.add_argument("-o","--outputdir", help="Output folder", type=str)
parser.add_argument("-rw","--redo-workspace", help="Redo workspace", action="store_true")
parser.add_argument("-p","--process", help="Process to run", type=str)
parser.add_argument("--dry", help="Only printout commands", action="store_true", default=False)
parser.add_argument("--masks", help="File with list of channels to mask",  type=str)
parser.add_argument("-fo","--fit-options", help="Robust fit options", type=int, default=0)
parser.add_argument("--save-uncert", help="Save uncertainties for fit diagnostic", action="store_true", default=False, required=False)
args = parser.parse_args()

if args.config.endswith(".yaml"):
    config = yaml.load(open(args.config))
elif args.config.endswith(".json"):
    config = json.load(open(args.config))
else: 
    print("Error! No valid input file")
    exi(1)

fitter_options= { 
    0:  " ",
    1:  "--robustFit=1 --X-rtd FITTER_NEW_CROSSING_ALGO --X-rtd FITTER_NEVER_GIVE_UP --X-rtd FITTER_BOUND",
    2:  "--cminDefaultMinimizerStrategy 0  --cminFallbackAlgo Minuit2,Migrad,0:0.1",
    3:  "--cminDefaultMinimizerStrategy 0  --cminFallbackAlgo Minuit2,Migrad,0:0.1 --robustFit=1 --X-rtd FITTER_NEW_CROSSING_ALGO --X-rtd FITTER_NEVER_GIVE_UP --X-rtd FITTER_BOUND",
}



logging.basicConfig(level=logging.DEBUG, format = '%(asctime)s - %(levelname)s: %(message)s',\
                     datefmt = '%m/%d/%Y %I:%M:%S %p')

def create_logger(name, file):
    l = logging.getLogger(name)
    # Console logger to INFO
    # ch = logging.StreamHandler()
    # ch.setLevel(logging.INFO)
    # l.addHandler(ch)
    # File handler Debug
    logfile = logging.FileHandler(file, 'a')
    logfile.setLevel(logging.DEBUG)
    form = logging.Formatter(fmt = '%(asctime)s - %(levelname)s: %(message)s',
                                        datefmt = '%m/%d/%Y %I:%M:%S %p')
    logfile.setFormatter(form)
    l.addHandler(logfile)


##################################################

def prepare_workspace(datac, onlyDC=False):
    log = logging.getLogger(datac["datacard_name"])
    outdir = datac["outputdir"] 
    cards= []
    for folder in datac["folders"]:
        for card in datac["phase_spaces"] :
            cards.append("{0}_{1}={2}/{3}/{4}/datacard.txt".format(
                                card["name"], folder["name"],  args.basedir + "/" + folder["basedir"],
                                                                card["cut"], card["var"]))
    if args.masks:
        txt2wp = "text2workspace.py {0}/combined_{1}.txt -o {0}/combined_{1}.root --channel-masks".format(outdir, datac["datacard_name"])
    else:
        txt2wp = "text2workspace.py {0}/combined_{1}.txt -o {0}/combined_{1}.root".format(outdir, datac["datacard_name"])
    
    
    cmds = [
        "combineCards.py {} > {}/combined_{}.txt".format(" ".join(cards), outdir, datac["datacard_name"]),
        txt2wp
    ]
    for cmd in cmds:
        log.debug(cmd)

    if not args.dry:
        os.system(cmds[0])
        log.info("Preparing workspace")
        os.system(cmds[1])
        log.info("Workspace ready")
    


##########################################################
'''
Available functions to run on datacards
'''
def significance(datac):
    log = logging.getLogger(datac["datacard_name"])
    outdir = datac["outputdir"] 
    log.info("Running combine (Asimov + pre-fit nuisances)")
    cmd = """combine -M Significance -t -1  --expectSignal=1 {0}/combined_{1}.root {2} \\
            > {0}/logSignificance_MCasimov.txt""".format(outdir, datac["datacard_name"], fitter_options[args.fit_options])
    log.debug(cmd)

    if not args.dry:  
        os.system(cmd)
        with open("{0}/logSignificance_MCasimov.txt".format(outdir)) as f: 
            log.info(f.read())

    log.info("Running combine (Asimov + post-fit nuisances)")
    cmd = """combine -M Significance -t -1  --expectSignal=1 --toysFreq {0}/combined_{1}.root {2} \\
            > {0}/logSignificance_data_asimov.txt""".format(outdir, datac["datacard_name"], fitter_options[args.fit_options])
    log.debug(cmd)
    if not args.dry:  
        os.system(cmd)
        with open("{0}/logSignificance_data_asimov.txt".format(outdir)) as f: 
            log.info(f.read())
    
    log.info("Done")

##################################################################################

def fit_and_pulls(datac):
    log = logging.getLogger(datac["datacard_name"])
    outdir = datac["outputdir"] 
    log.info("Running maximum likelihood fit")
    
    toys_opts = datac["toys_opts"]
    result_name = datac["datacard_name"]+"_"+datac["result_name"]

    if args.masks:
        mask = "--setParameters "+ ",".join([ "mask_"+ l.strip()+"=1" for l  in open(args.masks).readlines()])
    else:
        mask = ""

   
    cmd = """combineTool.py -M FitDiagnostics -d {0}/combined_{1}.root {2} -n .{3}  \\
         --saveShapes --saveNormalizations {6} {4} {5} > {0}/logFit_{3}.txt; \\
             mv fitDiagnostics.{3}.root {0}/ """.format(
             outdir, datac["datacard_name"], toys_opts, result_name, mask, fitter_options[args.fit_options],
                        "--saveWithUncertainties" if args.save_uncert else "")
    log.debug(cmd)
    if not args.dry:
        try:
            os.system(cmd)
            with open("{0}/logFit_{1}.txt".format(outdir, result_name)) as f: 
                log.info(f.read())
        except e:
            log.error(e)
            

    log.info("Printing Pulls and fit diagnostic")
    cmd = """python {0}/src/HiggsAnalysis/CombinedLimit/test/diffNuisances.py --all --abs --format html \\
             {2}/fitDiagnostics.{1}.root > {2}/fit_diagnostic_{1}.html""".format(
                os.environ["CMSSW_BASE"], result_name, outdir)
    log.debug(cmd)
    try: 
        if not args.dry: os.system(cmd)
    except e:
        log.error(e)
    log.info("DONE!")

################################################################################## 

def compatibility(datac):
    log = logging.getLogger(datac["datacard_name"])
    outdir = datac["outputdir"] 
    log.info("Running Compatibility test")
    log.info("> GoodnessOfFit on data")
    cmd = "combine -M GoodnessOfFit {0}/combined_{1}.root --algo=saturated > {0}/gof_data.txt".format(
                outdir, datac["datacard_name"])
    log.debug(cmd)
    if not args.dry: 
        os.system(cmd)
        with open("{0}/gof_data.txt".format(outdir)) as f: 
            log.info(f.read())
            log.info(">>>>>")

    log.info(">> GoodnessOfFit on toys")
    script = "{0}/gof_script.sh".format(outdir)
    with open(script, "w") as ws:
        ws.write(condor_prep.cmssw_template(os.environ["USER"],os.environ["CMSSW_BASE"]))
        ws.write("\ncombine -M GoodnessOfFit {0}/combined_{1}.root --algo=saturated --toysFreq -t 200 -s $1 > {0}/gof_toys_$1.txt".format(
                    os.getcwd() +"/"+outdir, datac["datacard_name"]))
        ws.write("\n cp higgsCombineTest.GoodnessOfFit.mH120.$1.root {0}/higgsCombineTest.GoodnessOfFit.mH120.$1.root".format(os.getcwd() +"/"+outdir))

    if not args.dry:
        jds = condor_prep.jds_template(script, outdir, 10)
        proc = subprocess.Popen(['condor_submit'], stdout=subprocess.PIPE, stderr=subprocess.PIPE, stdin=subprocess.PIPE)
        out, err = proc.communicate(jds)
        print(">>>", out)
        if len(err):
            log.info(">>> ERROR: ", err)
        log.info(">Submitted condor jobs")

################################################################################## 



for datac in config:
    if args.datacards and not any([re.match(d,datac["datacard_name"])!=None for d in args.datacards]): continue

    outdir = args.outputdir + "/" + datac["datacard_name"]
    datac["outputdir"] = outdir 

    if not os.path.exists(outdir):
        os.makedirs(outdir)

    create_logger(datac["datacard_name"], outdir+"/log.txt")
    log = logging.getLogger(datac["datacard_name"])
    if args.dry: log.info("Working in dry mode, no commands executed")
    
    log.info(">>>>>>>>>>>>>>>>>> Starting new run")

    if os.path.exists("{0}/combined_{1}.root".format(outdir, datac["datacard_name"])):
        if args.redo_workspace:
            log.info("Recreate workspace...")
            prepare_workspace(datac)
    else:
        log.info("Creating workspace")            
        prepare_workspace(datac)

    log.info("Preparing datacard: "+ datac["datacard_name"])

   
    if args.process == "workspace":
        print("DONE")
    elif args.process == "significance":
        significance(datac)    
    elif args.process == "fit_and_pulls_mcasimov":
        datac["toys_opts"] = "-t -1 --expectSignal 1"
        datac["result_name"] = "MC_asimov"
        fit_and_pulls(datac)
    elif args.process == "fit_and_pulls_dataasimov":
        datac["toys_opts"] = "-t -1 --expectSignal 1 --toysFreq"
        datac["result_name"] = "data_asimov"
        fit_and_pulls(datac)
    elif args.process == "compatibility":
        compatibility(datac)    
    else: 
        log.info("Please specify something to do with the datacard")
