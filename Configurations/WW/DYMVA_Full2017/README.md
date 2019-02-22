# WW plots


## Common tools for analysis:

   voms-proxy-init -voms cms -rfc --valid 168:0

   cmsenv

   mkShapesMulti.py --pycfg=configuration_DY.py  --inputDir=/eos/cms/store/group/phys_higgs/cmshww/amassiro/HWWNano/ --doBatch=True --batchQueue=workday --treeName=Events --batchSplit=Samples,Files

   mkShapesMulti.py --pycfg=configuration_DY.py  --inputDir=/eos/cms/store/group/phys_higgs/cmshww/amassiro/HWWNano/ --doHadd=True --batchSplit=Samples,Files --doNotCleanup


   mkPlot.py        --pycfg=configuration_DY.py  --inputFile=rootFile_DY/plots_DY.root --minLogC=0.01 --minLogCratio=0.01 --maxLogC=1000 --maxLogCratio=1000  --showIntegralLegend=1 




## Production of skimmed trees for BDT training


### Postprocessing script reminder:

The mkPostProc.py script is provided, that automates the submission of a full postprocessing campaing. The basic idea is that this script creates one python executable similar to the example https://github.com/latinos/LatinoAnalysis/blob/master/NanoGardener/test/postproc.py (an example script running the postprocessor), with automated definition of the input and output files and the list of modules to be run.

This script is based on three master configuration files:

   * Sites_cfg.py (https://github.com/latinos/LatinoAnalysis/blob/master/NanoGardener/python/framework/Sites_cfg.py) defines the sites on which one is willing to write the output. By default, if the postprocessing is run from one of these sites, the output will go to that site.
   * Productions_cfg.py (https://github.com/latinos/LatinoAnalysis/blob/master/NanoGardener/python/framework/Productions_cfg.py) Defines the path to the list of samples.
   * Steps_cfg.py (https://github.com/latinos/LatinoAnalysis/blob/master/NanoGardener/python/framework/Steps_cfg.py) defines the different steps and the chains of steps to be run.

In order to read more about it: LatinoAnalysis/NanoGardener/scripts/mkPostProc.py

### Examples:


*This will submit the MCl1loose2017v2 chain on all the samples defined in Fall2017_nAOD_v1_Full2017v2.

      mkPostProc.py -p Fall2017_nAOD_v1_Full2017v2 -s MCl1loose2017v2 -b --queue=workday


*This will submit the MCCorr2017 chain on all the samples defined in Fall2017_nAOD_v1_Full2017v2. It is done after the step shown in the example above.

      mkPostProc.py -p Fall2017_nAOD_v1_Full2017v2 -i MCl1loose2017v2 -s MCCorr2017 -b --queue=workday


*This will submit the btagPerEvent chain on all the samples defined in Fall2017_nAOD_v1_Full2017v2. It is done after the step shown in the example above.

      mkPostProc.py -p Fall2017_nAOD_v1_Full2017v2 -i MCl1loose2017v2__MCCorr2017 -s btagPerEvent -b --queue=workday


*This will submit the trainDYMVA_forWW chain on the samples defined in Fall2017_nAOD_v1_Full2017v2 that we specify by using the -T option. It is done after several previous steps (some of them shown in the examples above). The list of samples to run on is specified with the -T option and a comma separated list of sample short names.

      mkPostProc.py -p Fall2017_nAOD_v1_Full2017v2 -i MCl1loose2017v2__MCCorr2017__btagPerEvent__l2loose__l2tightOR2017 -s trainDYMVA_forWW -b --queue=workday -T DYJetsToLL_M-10to50-LO,DYJetsToLL_M-50,GluGluToWWToENEN,GluGluToWWToENMN,GluGluToWWToENTN,GluGluToWWToMNEN,GluGluToWWToMNMN,GluGluToWWToMNTN,GluGluToWWToTNEN,GluGluToWWToTNMN,GluGluToWWToTNTN,WWTo2L2Nu



### Options: 

	 -b (--batch) : submit to batch [default is interactive execution] 
         -c (--crab) : submit via crab  
         -n : dry-run  just produce script in job directory but di not submit  
         -T <sample1>, ... ,< sampleN > (--selTree) : run only on these samples. Select only some tree 
         -E <sample1>, ... ,< sampleN > (--excTree) : do not run on these samples. Exclude some tree 
         -R (--redo) : redo all jobs even if output file exist 
         -Q < queuename > (--queue) : specify queue like 8nh [default btw, see  Site_cfg.py ]
	 -p (--prods) : List of production to run on
	 -i (--iniStep) : Step to restart from
	 -s (--steps) : List of Steps to produce	 
         Not needed by default 
         -S <File> (--sitescfg) : alternative site cfg
         -m <File> (--modcfg) : alternative step/module  cfg
         -d <File> (--datacfg) : alternative production cfg
