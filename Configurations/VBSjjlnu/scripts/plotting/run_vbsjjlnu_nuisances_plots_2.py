import os
from multiprocessing import Pool 
from itertools import product


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

tag = "fit_v4"
years = ["2018"]
datacard_name = "fit_v4_2018"
#cuts = ["res_wjetcr_dnnhigh_ele","res_sig_dnnhigh_ele","res_topcr_dnnhigh_ele"]
# cuts = ["boost_topcr_ele","boost_wjetcr_ele","res_topcr_ele","res_wjetcr_ele",
#         "boost_sig_ele", "res_sig_ele","boost_topcr_mu","boost_wjetcr_mu","res_topcr_mu","res_wjetcr_mu",
#         "boost_sig_mu", "res_sig_mu"]
cuts = ["boost_sig_mu"]


vars = [  "DNNoutput_boost_bins2"]

joinsub =  0
samples =  ["Wjets_HT"]
#samples = ["DY", "VVV", "VV"]

outputdir = "/eos/user/d/dvalsecc/www/VBSPlots/FullRun2/fits_results/fit_v4_fullrun2/nuisances_effects"

jobs = []
for year,cut,var,sample in product(years,cuts,vars,samples):
    jobs.append((tag, year,cut,var, outputdir +"/"+year+ "_"+cut +"_"+var, sample, datacard_name, joinsub ))
    

print(jobs)
pool = Pool(6)

pool.map(run_jobs, jobs)