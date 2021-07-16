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
parser.add_argument("-c","--config", help="configuration file", type=str,required=True)
parser.add_argument("-d","--datacards", help="Datacard names", nargs="+", type=str)
parser.add_argument("-b","--basedir", help="Baseline folder", type=str,required=True)
parser.add_argument("-o","--outputdir", help="Output folder", type=str,required=True)
parser.add_argument("-t","--toys", help="N. toys", type=str,default=500)
parser.add_argument("-p","--process", help="Process to run", type=str,required=True)
parser.add_argument("-i","--input-params", help="File with fit parameters to use", type=str, required=True)
parser.add_argument("--dry", help="Only printout commands", action="store_true", default=False)
parser.add_argument("-op","--outputdir-plots", help="Output folder for plots", type=str,required=True)
parser.add_argument("-rw","--redo-workspace", help="Redo workspace", action="store_true")
parser.add_argument("--do-prefit", help="Do also prefit shapes", action="store_true")
parser.add_argument("--bkg-fit", help="Use bkg only fit for postfit", action="store_true")
parser.add_argument("--add-mcstat", help="Add MCstat uncertainty", action="store_true")
args = parser.parse_args()

if args.config.endswith(".yaml"):
    config = yaml.load(open(args.config))
elif args.config.endswith(".json"):
    config = json.load(open(args.config))
else: 
    print("Error! No valid input file")
    exi(1)

fitter_options= { 
    '0':  " ",
    'sig1' : "--X-rtd=MINIMIZER_analytic --X-rtd MINIMIZER_MaxCalls=9999999 --X-rtd FITTER_NEW_CROSSING_ALGO --X-rtd FITTER_NEVER_GIVE_UP --X-rtd FITTER_BOUND",
    '1':  "--robustFit=1 --X-rtd FITTER_NEW_CROSSING_ALGO --X-rtd FITTER_NEVER_GIVE_UP --X-rtd FITTER_BOUND",
    '2':  "--robustFit=1 --cminDefaultMinimizerStrategy 0  --cminFallbackAlgo Minuit2,Migrad,0:0.1 ",
    '3':  "--robustFit=1 --cminDefaultMinimizerStrategy 0  --cminFallbackAlgo Minuit2,Migrad,0:0.1  --X-rtd FITTER_NEW_CROSSING_ALGO --X-rtd FITTER_NEVER_GIVE_UP --X-rtd FITTER_BOUND",
    '4':  "--robustFit=1 --robustHesse=1--cminDefaultMinimizerStrategy 0  --cminFallbackAlgo Minuit2,Migrad,0:0.1  --X-rtd FITTER_NEW_CROSSING_ALGO --X-rtd FITTER_NEVER_GIVE_UP --X-rtd FITTER_BOUND",
    '5':  "--robustFit=1 --robustHesse=1 --cminDefaultMinimizerStrategy 0 --X-rtd=MINIMIZER_analytic --X-rtd MINIMIZER_MaxCalls=9999999 --cminFallbackAlgo Minuit2,Migrad,0:0.1  --X-rtd FITTER_NEW_CROSSING_ALGO --X-rtd FITTER_NEVER_GIVE_UP --X-rtd FITTER_BOUND",
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
    txt2wp = "text2workspace.py combined_{0}.txt -o combined_{0}.root --X-pack-asympows".format(datac["datacard_name"])
    
    cmds = [
        "combineCards.py {} > combined_{}.txt".format(" ".join(cards), datac["datacard_name"]),
        txt2wp
    ]
    for cmd in cmds:
        log.debug(cmd)

    current_path = os.getcwd()

    if not args.dry:
        os.chdir(outdir)
        os.system(cmds[0])
        log.info("Preparing workspace")
        os.system(cmds[1])
        log.info("Workspace ready")
        os.chdir(current_path)
    

##########################################################
'''
Available functions to run on datacards
'''
def postfit_shape(datac):
    log = logging.getLogger(datac["datacard_name"])
    outdir = datac["outputdir"] 
    log.info("Running combine")
    cmd = """PostFitShapesFromWorkspace -w combined_{0}.root -d combined_{0}.txt -o output_postfit.root  \\
         -f {1}:{4} --samples {2} \\
         --postfit --sampling --total-shapes --print --covariance {3} > logPostFitShape.txt""".format(datac["datacard_name"], 
                args.input_params, args.toys, "--skip-prefit" if not args.do_prefit else "", "fit_b" if args.bkg_fit else "fit_s")
    log.debug(cmd)

    current_path = os.getcwd()
    if not args.dry:  
        os.chdir(outdir)
        os.system(cmd)
        with open("logPostFitShape.txt".format(outdir)) as f: 
            log.info(f.read())
        os.chdir(current_path)    
    log.info("Done")

###########################################################################

def postfit_plot(datac):
    log = logging.getLogger(datac["datacard_name"])
    outdir = datac["outputdir"] 

    if not os.path.exists(args.outputdir_plots):
        os.makedirs(args.outputdir_plots)
    os.chdir(args.outputdir_plots)
    current_path = os.getcwd()
    log.debug("current path " + current_path )

    if not os.path.exists(datac["datacard_name"]):
        os.makedirs(datac["datacard_name"])
    os.chdir(datac["datacard_name"])

    log.info("Plotting")
    year = datac["datacard_name"].split("_")[-1]
    plotFile = ""
    if "top" in datac["datacard_name"] and "res" in datac["datacard_name"]:
        plotFile = "plot_top_res.py"
    if "top" in datac["datacard_name"] and "boost" in datac["datacard_name"]:
        plotFile = "plot_top_boost.py"
    if "wjet" in datac["datacard_name"] and "res" in datac["datacard_name"]:
        plotFile = "plot_wjets_res.py"
    if "wjet" in datac["datacard_name"] and "boost" in datac["datacard_name"]:
        plotFile = "plot_wjets_boost.py"
    if plotFile == "" and "res" in datac["datacard_name"]:
        plotFile = "plot_wjets_res.py"
    if plotFile == "" and "boost" in datac["datacard_name"]:
        plotFile = "plot_wjets_boost.py"

    
    if "bin1" in datac["datacard_name"]: plotFile = "plot_wjets_wlepbin1.py"
    if "bin2" in datac["datacard_name"]: plotFile = "plot_wjets_wlepbin2.py"
    if "bin3" in datac["datacard_name"]: plotFile = "plot_wjets_wlepbin3.py"
    if "bin4" in datac["datacard_name"]: plotFile = "plot_wjets_wlepbin4.py"
    if "bin5" in datac["datacard_name"]: plotFile = "plot_wjets_wlepbin5.py"
    if "bin6" in datac["datacard_name"]: plotFile = "plot_wjets_wlepbin6.py"


    cmd = [ """mkPostFitCombinedPlot.py --inputFilePostFitShapesFromWorkspace  ../../../datacards/{0}/output_postfit.root \\
           --outputFile postfit_shapes.root --kind P --cutName combined  \\
           --variable {1} --structureFile ../../../Full2018v7/conf_fit_v4.5/structure_split.py \\
           --plotFile ../../{2} --lumiText "137/fb" """.format(datac["outputdir"], datac["phase_spaces"][0]["var"], plotFile),

           """mkPlot.py --pycfg=configuration_combined.py --inputFile=postfit_shapes.root  --showRelativeRatio \\
            --minLogC 1 --maxLogC 1e2 --minLogCratio 1 --maxLogCratio 1e2 --plotNormalizedDistributions """ #--showIntegralLegend=1 
    ]

    # Check if need to add MC stat uncertainty 
    if args.add_mcstat:
        cards= []
        for folder in datac["folders"]:
            for card in datac["phase_spaces"] :
                cards.append("{0}/{1}/{2}/shapes/histos_{1}.root".format( "../../../" + folder["basedir"],card["cut"], card["var"]))
        cmd[0] += " --nonFitVariable --listOfFilesOriginal {}".format(",".join(cards))

    for c in cmd:  log.debug(cmd)

    if not args.dry:  
        for cm in cmd:
            os.system(cm)
        os.chdir(current_path)    
    log.info("Done")


def postfit_plot_onlyplot(datac):
    log = logging.getLogger(datac["datacard_name"])
    outdir = datac["outputdir"] 

    os.chdir(args.outputdir_plots)
    current_path = os.getcwd()
    log.debug("current path " + current_path )

    os.chdir(datac["datacard_name"])

    log.info("Plotting")
    cmd = [ 

           """mkPlot.py --pycfg=configuration_combined.py --inputFile=postfit_shapes_new.root  --showRelativeRatio \\
            --minLogC 10 --maxLogC 1e2 --minLogCratio 10 --maxLogCratio 1e2  --plotNormalizedDistributions """ #--showIntegralLegend=1
    ]

    for c in cmd:  log.debug(cmd)

    if not args.dry:  
        for cm in cmd:
            os.system(cm)
        os.chdir(current_path)    
    log.info("Done")

################################################################################## 

datacards_to_run = [ ]

for datac in config:
    if args.datacards and not any([re.match(d,datac["datacard_name"])!=None for d in args.datacards]): continue

    outdir = args.outputdir + "/" + datac["datacard_name"]
    datac["outputdir"] = outdir 
    datacards_to_run.append(datac)

    if not os.path.exists(outdir):
        os.makedirs(outdir)

    create_logger(datac["datacard_name"], outdir+"/log.txt")
    log = logging.getLogger(datac["datacard_name"])
    if args.dry: log.info("Working in dry mode, no commands executed")

    log.info("Preparing datacard: "+ datac["datacard_name"])

poll = Pool()

if args.process == "workspace":
    poll.map(prepare_workspace, datacards_to_run)
elif args.process == "postfit_shapes":
    poll.map(postfit_shape, datacards_to_run)  
elif args.process == "plot":
    poll.map(postfit_plot, datacards_to_run)
elif args.process == "only-plot":
    poll.map(postfit_plot_onlyplot, datacards_to_run)
elif args.process == "all":
    poll.map(prepare_workspace, datacards_to_run)
    poll.map(postfit_shape, datacards_to_run)  
    poll.map(postfit_plot, datacards_to_run)

