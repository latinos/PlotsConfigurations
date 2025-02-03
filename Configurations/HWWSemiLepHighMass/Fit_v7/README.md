Crete a singularity following this guide:
https://gitlab.cern.ch/cms-cat/cmssw-lxplus/-/blob/master/README.md#usage

and thens start the singularity 

Download a CMS-SW version compatible with:
```
cmsrel CMSSW_10_6_4
cd CMSSW_10_6_4/src/
cmsenv
```
Clone after also the needed repositories for LatinoAnalysis  

To submit jobs in the singularity modify the submitter in /Tools/python/batchTools.py adding after "jdsFile.write('request_cpus = '+str(REQUEST_CPUS)+'\n')"
```
jdsFile.write('MY.SingularityImage = "/cvmfs/unpacked.cern.ch/gitlab-registry.cern.ch/cms-cat/cmssw-lxplus/cmssw-el7-lxplus:latest/"\n')
```
and after "jds += 'request_cpus = '+str(REQUEST_CPUS)+'\n'"
```
jds += 'MY.SingularityImage = "/cvmfs/unpacked.cern.ch/gitlab-registry.cern.ch/cms-cat/cmssw-lxplus/cmssw-el7-lxplus:latest/"\n' 
```
To run the High mass WW with lnuqq final state search :
```
git clone https://github.com/latinos/PlotsConfigurations.git -b HWWSemi
```

in a latino-suitable environment.

Two Configs available: Test_Debug with lots of variables, electrons and muons splitted and inclusive the two leptons type / _v7_BTagSF with the configuration ready for the fit 

Run them with:
```
mkShapesMulti.py --pycfg=config_medmass.py --doBatch=1 --batchSplit=Samples,Files  --batchQueue=workday    
```

If the jobs fail you can resubmit them with 
```
 for i in `find -name *jid`; do sed -i "s/workday/tomorrow/g" ${i/jid/jds}; condor_submit ${i/jid/jds}; done
```

Once they are finished hadd the file:
```
mkShapesMulti.py --pycfg=config_medmass.py --doHadd=1 --batchSplit=Samples,Files  --doNotCleanup --nThreads=10
```
