
# WW analysis



## Common tools for analysis


### Plots configuration for mkShapes and mkPlot:

* mkShapesMulti: creates a root file with a lot of histograms
* mkPlot: merge the histograms into canvases and saves images


      voms-proxy-init -voms cms -rfc --valid 168:0
       
      cmsenv
       
      mkShapesMulti.py --pycfg=configuration_DY.py  --inputDir=/eos/cms/store/group/phys_higgs/cmshww/amassiro/HWWNano/ --doBatch=True --batchQueue=workday --treeName=Events --batchSplit=Samples,Files
       
      mkShapesMulti.py --pycfg=configuration_DY.py  --inputDir=/eos/cms/store/group/phys_higgs/cmshww/amassiro/HWWNano/ --doHadd=True --batchSplit=Samples,Files --doNotCleanup
       
      mkPlot.py        --pycfg=configuration_DY.py  --inputFile=rootFile_DY/plots_DY.root --minLogC=0.01 --minLogCratio=0.01 --maxLogC=1000 --maxLogCratio=1000  --showIntegralLegend=1 




## Production of skimmed samples for BDT training


### Postprocessing script reminder:

The mkPostProc.py script is provided, that automates the submission of a full postprocessing campaing. The basic idea is that this script creates one python executable similar to the example https://github.com/latinos/LatinoAnalysis/blob/master/NanoGardener/test/postproc.py (an example script running the postprocessor), with automated definition of the input and output files and the list of modules to be run.

This script is based on three master configuration files:

   * Sites_cfg.py (https://github.com/latinos/LatinoAnalysis/blob/master/NanoGardener/python/framework/Sites_cfg.py) defines the sites on which one is willing to write the output. By default, if the postprocessing is run from one of these sites, the output will go to that site.
   * Productions_cfg.py (https://github.com/latinos/LatinoAnalysis/blob/master/NanoGardener/python/framework/Productions_cfg.py) Defines the path to the list of samples.
   * Steps_cfg.py (https://github.com/latinos/LatinoAnalysis/blob/master/NanoGardener/python/framework/Steps_cfg.py) defines the different steps and the chains of steps to be run.

In order to read more about it: LatinoAnalysis/NanoGardener/scripts/mkPostProc.py


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


### Examples of use:

* This will submit the MCl1loose2017v2 chain on all the samples defined in Fall2017_nAOD_v1_Full2017v2.

      mkPostProc.py -p Fall2017_nAOD_v1_Full2017v2 -s MCl1loose2017v2 -b --queue=workday


* This will submit the MCCorr2017 chain on all the samples defined in Fall2017_nAOD_v1_Full2017v2. It is done after the step shown in the example above.

      mkPostProc.py -p Fall2017_nAOD_v1_Full2017v2 -i MCl1loose2017v2 -s MCCorr2017 -b --queue=workday


* This will submit the btagPerEvent chain on all the samples defined in Fall2017_nAOD_v1_Full2017v2. It is done after the step shown in the example above.

      mkPostProc.py -p Fall2017_nAOD_v1_Full2017v2 -i MCl1loose2017v2__MCCorr2017 -s btagPerEvent -b --queue=workday


* This will submit the trainDYMVA_forWW chain on the samples defined in Fall2017_nAOD_v1_Full2017v2 that we specify by using the -T option. It is done after several previous steps (some of them shown in the examples above). The list of samples to run on is specified with the -T option and a comma separated list of sample short names.

      mkPostProc.py -p Fall2017_nAOD_v1_Full2017v2 -i MCl1loose2017v2__MCCorr2017__btagPerEvent__l2loose__l2tightOR2017 -s trainDYMVA_forWW -b --queue=workday -T DYJetsToLL_M-10to50-LO,DYJetsToLL_M-50,GluGluToWWToENEN,GluGluToWWToENMN,GluGluToWWToENTN,GluGluToWWToMNEN,GluGluToWWToMNMN,GluGluToWWToMNTN,GluGluToWWToTNEN,GluGluToWWToTNMN,GluGluToWWToTNTN,WWTo2L2Nu

* In order to merge the different parts of a sample, the hadd step is used. For example after applying the step shown in the example above:
      
      mkPostProc.py -p Fall2017_nAOD_v1_Full2017v2 -i MCl1loose2017v2__MCCorr2017__btagPerEvent__l2loose__l2tightOR2017__trainDYMVA_forWW -s hadd -b --queue=workday -T DYJetsToLL_M-10to50-LO,DYJetsToLL_M-50,GluGluToWWToENEN,GluGluToWWToENMN,GluGluToWWToENTN,GluGluToWWToMNEN,GluGluToWWToMNMN,GluGluToWWToMNTN,GluGluToWWToTNEN,GluGluToWWToTNMN,GluGluToWWToTNTN,WWTo2L2Nu


## Another way of producing skimmed samples for BDT training


### SkimTree script:

This program is used to skim ROOT files by applying cuts on an input tree and copy the result to an output ROOT file. As well, you can remove specific branches from the tree. The main purpose of the script is reducing the file size to speed up the processing during analysis.


### Options:

* filenamesInput -> Path to the input ROOT files. Multiple files are given as string separated with blanks.

* filenameOutput -> Path to the output ROOT file.


      -t (--tree) : Name of the tree holding the variables
      -c (--cut) : Cut string which is used on input tree 
      -r (--remove) : List of branches, which are removed from tree
      -k (--keep) : List of branches, which are explicitly kept in tree. This option deactivates the 'remove' argument for the specified branches.
      -v (--verbosity) : Increase or decrease output verbosity for input/output tree properties


### Examples:

This reduces the number of variables (branches from the tree) to those you want to keep:

     ./skimTree_forClara input.root output.root -r "all" -k "list of variables separated with blanks"

This reduces the number of variables and applies a pre-selection to the variables we want to keep:

     ./skimTree_forClara input.root output.root -r "all" -k "list of variables separated with blanks" -c "pre-selections"
