import os
from multiprocessing import Pool 
from itertools import product
import argparse

parser = argparse.ArgumentParser()
parser.add_argument("-c","--cuts",help="Cut", type=str, nargs="+")
parser.add_argument("-d","--datacard", help="Datacard", type=str)
parser.add_argument("-s","--samples",help="Samples", type=str, nargs="+")
parser.add_argument("-v","--variables",help="Variables", type=str, nargs="+")
parser.add_argument("-o","--output",help="Outputdir",type=str)
args = parser.parse_args()


def run_jobs(conf):
    tag, year,cut,var,output,sample,datacard_name, joinsub = conf
    inputfile="/afs/cern.ch/work/d/dvalsecc/private/CMSSW_11_1_4/src/PlotsConfigurations/Configurations/VBSjjlnu/Full{0}v7/datacards_{3}/{1}/{2}/shapes/histos_{1}.root".format(year,cut,var, datacard_name)
    conf="/afs/cern.ch/work/d/dvalsecc/private/CMSSW_11_1_4/src/PlotsConfigurations/Configurations/VBSjjlnu/Full{0}v7/".format(year)

    cmd = """python  DrawNuisancesAll.py --outputDirPlots {0}  \
        --inputFile {1} \
        --nuisancesFile {2}/conf_{6}/nuisances_datacard.py  \
        --samplesFile  {2}/conf_{6}/samples_quick.py  \
        --cutName  {3}  \
        --drawYields 1 \
        --onlySample {4} \
        --joinSubsamples {5}
        """.format(output,inputfile, conf,cut, sample, joinsub, tag)
    print(cmd)
    os.system(cmd)

tag = "fit_v4.5"
years = ["2017"]
datacard_name = args.datacard
#cuts = ["res_wjetcr_dnnhigh_ele","res_sig_dnnhigh_ele","res_topcr_dnnhigh_ele"]
# cuts = ["boost_topcr_ele","boost_wjetcr_ele","res_topcr_ele","res_wjetcr_ele",
#         "boost_sig_ele", "res_sig_ele","boost_topcr_mu","boost_wjetcr_mu","res_topcr_mu","res_wjetcr_mu",
#         "boost_sig_mu", "res_sig_mu"]
cuts = args.cuts
vars = args.variables

joinsub =  0
samples =  args.samples
#samples = ["DY", "VVV", "VV"]

outputdir = "/eos/user/d/dvalsecc/www/VBSPlots/FullRun2/fits_results/" + args.output #fit_v4.2_fullrun2/nuisances_effects"

if not os.path.exists(outputdir):
    os.makedirs(outputdir)

jobs = []
for year,cut,var,sample in product(years,cuts,vars,samples):
    jobs.append((tag, year,cut,var, outputdir +"/"+year+ "_"+cut +"_"+var, sample, datacard_name, joinsub ))
    

print(jobs)
pool = Pool(8)

pool.map(run_jobs, jobs)