import os
from multiprocessing import Pool 
from itertools import product


def run_jobs(conf):
    tag, year,cut,var,output,sample,datacard_name, joinsub = conf
    inputfile="/afs/cern.ch/work/d/dvalsecc/private/CMSSW_10_2_0/src/PlotsConfigurations/Configurations/VBSjjlnu/Full{0}v6s5/datacards_{3}/{1}/{2}/shapes/histos_{1}.root".format(year,cut,var, datacard_name)
    conf="/afs/cern.ch/work/d/dvalsecc/private/CMSSW_10_2_0/src/PlotsConfigurations/Configurations/VBSjjlnu/Full{0}v6s5/".format(year)

    cmd = """python  DrawNuisancesAll.py --outputDirPlots {0}  \
        --inputFile {1} \
        --nuisancesFile {2}/conf_{6}/nuisances_datacard.py  \
        --samplesFile  {2}/conf_{6}/samples.py  \
        --cutName  {3}  \
        --drawYields 1 \
        --onlySample {4} \
        --joinSubsamples {5}
        """.format(output,inputfile, conf,cut, sample, joinsub, tag)
    print(cmd)
    os.system(cmd)

tag = "fit_v2.2"
years = ["2018"]
datacard_name = "fit_v2.2_2018"
#cuts = ["res_wjetcr_dnnhigh_ele","res_sig_dnnhigh_ele","res_topcr_dnnhigh_ele"]
cuts = ["boost_topcr_dnnhigh_ele","boost_wjetcr_dnnhigh_ele","res_topcr_dnnhigh_ele","res_wjetcr_dnnhigh_ele",
        "boost_sig_dnnhigh_ele", "res_sig_dnnhigh_ele"]
vars = ["deltaeta_vbs", "DNNoutput_high_res", "DNNoutput_high_boost", "events", "vbs_1_pt"]
samples =  ["Wjets", "top", "VBS", "VBF-V", "DY"]
#samples = ["DY", "VVV", "VV"]

outputdir = "/eos/user/d/dvalsecc/www/VBSPlots/FullRun2/fits_results/fit_v2.2_tests/nuisances_effects"

jobs = []
for year,cut,var,sample in product(years,cuts,vars,samples):
    jobs.append((tag, year,cut,var, outputdir +"/"+year+ "_"+cut +"_"+var, sample, datacard_name, 1 ))
    

print(jobs)
pool = Pool(6)

pool.map(run_jobs, jobs)