from __future__ import print_function
import argparse
import sys
import os
import re
import logging

parser = argparse.ArgumentParser()
parser.add_argument("-w","--workspace", help="Workspace", type=str)
parser.add_argument("-o","--outputdir", help="Output folder", type=str)
parser.add_argument("--dry", help="Only printout commands", action="store_true", default=False)
parser.add_argument("-v","--verbosity", help="Verbosity level", type=int, default=0)
args = parser.parse_args()


cmd_initial_asimov ="""combine -M MultiDimFit --saveWorkspace -n .initialFit.asimov --robustFit=1 \
    -t -1 --expectSignal=1 \
    --X-rtd=MINIMIZER_analytic --X-rtd MINIMIZER_MaxCalls=9999999 \
    --cminFallbackAlgo Minuit2,Migrad,0:0.1 --stepSize=0.01 \
    --X-rtd FITTER_NEW_CROSSING_ALGO --X-rtd FITTER_NEVER_GIVE_UP --X-rtd FITTER_BOUND \
        -v 3 -d {0} --cminDefaultMinimizerStrategy=0 --setRobustFitTolerance=0.1"""

cmd_asimov = """combineTool.py -M MultiDimFit higgsCombine.initialFit.asimov.MultiDimFit.mH120.root -n .scan_all_data \
 --rMin=0 --rMax 1.5  --snapshotName MultiDimFit  \
 -t -1 --expectSignal=1 \
 --algo grid --point 200 --cminDefaultMinimizerStrategy 0 --cminFallbackAlgo Minuit2,Migrad,0:0.1\
 --robustFit=1 --setRobustFitTolerance=0.1 --X-rtd FITTER_NEW_CROSSING_ALGO --X-rtd FITTER_NEVER_GIVE_UP --X-rtd FITTER_BOUND \
 --X-rtd MINIMIZER_MaxCalls=9999999 -v 3 --stepSize=0.01 \
 --skipInitialFit --split-points=5 --job-mode=condor --task-name scan_data_1 --sub-opts='+JobFlavour="espresso"' """

#  --saveSpecifiedNuis all --trackParameters "rgx{.*_norm_.*}" \


cmd_initial_data ="""combine -M MultiDimFit --saveWorkspace -n .initialFit.data --robustFit=1 \
    --X-rtd=MINIMIZER_analytic --X-rtd MINIMIZER_MaxCalls=9999999 \
    --cminFallbackAlgo Minuit2,Migrad,0:0.1 --stepSize=0.01 \
    --X-rtd FITTER_NEW_CROSSING_ALGO --X-rtd FITTER_NEVER_GIVE_UP --X-rtd FITTER_BOUND \
        -v 3 -d {0} --cminDefaultMinimizerStrategy=0 --setRobustFitTolerance=0.1"""

cmd_data = """combineTool.py -M MultiDimFit higgsCombine.initialFit.data.MultiDimFit.mH120.root -n .scan_all_data \
 --rMin=0 --rMax 1.5  --snapshotName MultiDimFit  \
 --algo grid --point 200 --cminDefaultMinimizerStrategy 0 --cminFallbackAlgo Minuit2,Migrad,0:0.1\
 --robustFit=1 --setRobustFitTolerance=0.1 --X-rtd FITTER_NEW_CROSSING_ALGO --X-rtd FITTER_NEVER_GIVE_UP --X-rtd FITTER_BOUND \
 --X-rtd MINIMIZER_MaxCalls=9999999 -v 3 --stepSize=0.01 \
 --skipInitialFit --split-points=5 --job-mode=condor --task-name scan_data_1 --sub-opts='+JobFlavour="espresso"' """

#  --saveSpecifiedNuis all --trackParameters "rgx{.*_norm_.*}" \

if not os.path.exists("likelihood_scan_data"):
    os.makedirs("likelihood_scan_data")
if not os.path.exists("likelihood_scan_asimov"):   
    os.makedirs("likelihood_scan_asimov")

os.chdir("likelihood_scan_asimov")

with open("log.txt", "w") as o:
    o.write(cmd_initial_asimov.format("../"+ args.workspace)+"\n")
    o.write(cmd_asimov)

os.system(cmd_initial_asimov.format("../"+ args.workspace))
os.system(cmd_asimov)

os.chdir("../likelihood_scan_data")

with open("log.txt", "w") as o: 
    o.write(cmd_initial_data.format("../"+ args.workspace)+"\n")
    o.write(cmd_data)

os.system(cmd_initial_data.format("../"+ args.workspace))
os.system(cmd_data)
