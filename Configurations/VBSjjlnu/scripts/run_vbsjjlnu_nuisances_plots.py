import os
from multiprocessing import Pool 
from itertools import product


def run_jobs(conf):
    year,cut,var,output,sample, joinsub = conf
    inputfile="/afs/cern.ch/work/d/dvalsecc/private/CMSSW_10_2_0/src/PlotsConfigurations/Configurations/VBSjjlnu/Full{0}v6s5/datacards_fit_detajetpt_{0}/{1}/{2}/shapes/histos_{1}.root".format(year,cut,var)
    conf="/afs/cern.ch/work/d/dvalsecc/private/CMSSW_10_2_0/src/PlotsConfigurations/Configurations/VBSjjlnu/Full{0}v6s5/".format(year)


    os.system("""python  DrawNuisancesAll.py --outputDirPlots {0}  \
        --inputFile {1} \
        --nuisancesFile {2}/conf_fit_detajetpt/nuisances.py  \
        --samplesFile  {2}/conf_fit_detajetpt/samples.py  \
        --cutName  {3}  \
        --drawYields 1 \
        --onlySample {4} \
        --joinSubsamples {5}
        """.format(output,inputfile, conf,cut, sample, joinsub))


years = ["2016","2017","2018"]
cuts = ["res_wjetcr_mjjincl_dnnhigh_ele","res_wjetcr_mjjincl_dnnhigh_mu","boost_wjetcr_mjjincl_dnnhigh_ele","boost_wjetcr_mjjincl_dnnhigh_mu"]
vars = ["deta_jetpt_CR"]
samples =  ["Wjets"]

jobs = []
for year,cut,var,sample in product(years,cuts,vars, samples):
    jobs.append((year,cut,var, year+ "_"+cut +"_"+var, sample, 1 ))
    

print(jobs)
pool = Pool(6)

pool.map(run_jobs, jobs)