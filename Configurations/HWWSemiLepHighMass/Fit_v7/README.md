Create a singularity following [this guide](https://gitlab.cern.ch/cms-cat/cmssw-lxplus/-/blob/master/README.md#usage) and then start the singularity 

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

Two Configs available: Test_Debug with lots of variables, electrons and muons split and inclusive the two leptons type / _v7_BTagSF with the configuration ready for the fit 

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
Then Redo stat to correlate GGHSBI (QQHSBI) and GGH (QQH)  bin-by-bin nuisances. It's relevant for the fit but it can be avoided for plotting purposes. This has to be done for each variable and for each cut, because otherwise this will be done for every entry of the variable and cut files. Specifically, this has to be done for the [Boosted Cuts](https://github.com/latinos/PlotsConfigurations/blob/HWWSemi/Configurations/HWWSemiLepHighMass/Fit_v7/2017_v7_BTagSF/cuts_medmass.py#L95-L100) the variable is the [mass_HIGGS](https://github.com/latinos/PlotsConfigurations/blob/HWWSemi/Configurations/HWWSemiLepHighMass/Fit_v7/2017_v7_BTagSF/variables_fit.py#L503-L511), for the [CRs](https://github.com/latinos/PlotsConfigurations/blob/HWWSemi/Configurations/HWWSemiLepHighMass/Fit_v7/2017_v7_BTagSF/cuts_medmass.py#L114-L117) the variables are the [events](https://github.com/latinos/PlotsConfigurations/blob/HWWSemi/Configurations/HWWSemiLepHighMass/Fit_v7/2017_v7_BTagSF/variables_fit.py#L24-L30) for the [Boosted High Mass VBF](https://github.com/latinos/PlotsConfigurations/blob/HWWSemi/Configurations/HWWSemiLepHighMass/Fit_v7/2017_v7_BTagSF/cuts_medmass.py#L31) [here](https://github.com/latinos/PlotsConfigurations/blob/HWWSemi/Configurations/HWWSemiLepHighMass/Fit_v7/2017_v7_BTagSF/cuts_medmass.py#L101-L106) the variable is the [Higgs Mass Boosted VBF](https://github.com/latinos/PlotsConfigurations/blob/HWWSemi/Configurations/HWWSemiLepHighMass/Fit_v7/2017_v7_BTagSF/variables_fit.py#L522-L530). This applies also for the [Boosted GGH High SR](https://github.com/latinos/PlotsConfigurations/blob/HWWSemi/Configurations/HWWSemiLepHighMass/Fit_v7/2017_v7_BTagSF/cuts_medmass.py#L32) [here](https://github.com/latinos/PlotsConfigurations/blob/HWWSemi/Configurations/HWWSemiLepHighMass/Fit_v7/2017_v7_BTagSF/cuts_medmass.py#L101-L106) with the [Higgs GGH mass](https://github.com/latinos/PlotsConfigurations/blob/HWWSemi/Configurations/HWWSemiLepHighMass/Fit_v7/2017_v7_BTagSF/variables_fit.py#L512-L521) and the [Boosted BKG High SR](https://github.com/latinos/PlotsConfigurations/blob/HWWSemi/Configurations/HWWSemiLepHighMass/Fit_v7/2017_v7_BTagSF/cuts_medmass.py#L33) [here](https://github.com/latinos/PlotsConfigurations/blob/HWWSemi/Configurations/HWWSemiLepHighMass/Fit_v7/2017_v7_BTagSF/cuts_medmass.py#L101-L106) [the BKG Higgs mass](https://github.com/latinos/PlotsConfigurations/blob/HWWSemi/Configurations/HWWSemiLepHighMass/Fit_v7/2017_v7_BTagSF/variables_fit.py#L531-L539). For the resolved SR cases: [Resolved VBF](https://github.com/latinos/PlotsConfigurations/blob/HWWSemi/Configurations/HWWSemiLepHighMass/Fit_v7/2017_v7_BTagSF/cuts_medmass.py#L37) [here](https://github.com/latinos/PlotsConfigurations/blob/HWWSemi/Configurations/HWWSemiLepHighMass/Fit_v7/2017_v7_BTagSF/cuts_medmass.py#L108-L113) the variable is the [Higgs Mass Resolved VBF](https://github.com/latinos/PlotsConfigurations/blob/HWWSemi/Configurations/HWWSemiLepHighMass/Fit_v7/2017_v7_BTagSF/variables_fit.py#L550-L557). This applies also for the [Resolved GGH](https://github.com/latinos/PlotsConfigurations/blob/HWWSemi/Configurations/HWWSemiLepHighMass/Fit_v7/2017_v7_BTagSF/cuts_medmass.py#L38) [here](https://github.com/latinos/PlotsConfigurations/blob/HWWSemi/Configurations/HWWSemiLepHighMass/Fit_v7/2017_v7_BTagSF/cuts_medmass.py#L108-L113) with the [Resolved GGH mass](https://github.com/latinos/PlotsConfigurations/blob/HWWSemi/Configurations/HWWSemiLepHighMass/Fit_v7/2017_v7_BTagSF/variables_fit.py#L558-L565) and the [Resolved BKG](https://github.com/latinos/PlotsConfigurations/blob/HWWSemi/Configurations/HWWSemiLepHighMass/Fit_v7/2017_v7_BTagSF/cuts_medmass.py#L39) [here](https://github.com/latinos/PlotsConfigurations/blob/HWWSemi/Configurations/HWWSemiLepHighMass/Fit_v7/2017_v7_BTagSF/cuts_medmass.py#L108-L113) with the [resolved BKG mass](https://github.com/latinos/PlotsConfigurations/blob/HWWSemi/Configurations/HWWSemiLepHighMass/Fit_v7/2017_v7_BTagSF/variables_fit.py#L566-L573). The one highlighted has to be uncommented while the rest must be commented out otherwise it will be processed by the redoStat

```
mkShapesMulti.py --pycfg=config_medmass.py --redoStat=True --batchSplit=Samples,File
```
To be compliant with the nuisance format also run the script available in the 201X_v7_btagSF directory
```
python FixNegativeBins.py "directory/rootfile name"
```

To combine the cards, to morph and to do the workspaces:
```
export SCRAM_ARCH=slc7_amd64_gcc900
scram project CMSSW CMSSW_11_3_4
cd CMSSW_11_3_4/src
cmsenv
git clone https://github.com/cms-analysis/HiggsAnalysis-CombinedLimit.git HiggsAnalysis/CombinedLimit
# IMPORTANT: Checkout the recommended tag on the link above
git clone https://github.com/cms-analysis/CombineHarvester.git CombineHarvester
git checkout v2.0.0
scram b -j 4
```
There are few modifications for the files that are committed to this directory and need to be copied in the right path, the files are XWWInterference.py that will replace 'CMSSW_11_3_4/src/CombineHarvester/CombinePdfs/python/XWWInterference.py', 'MorphingMSSMFullRun2_HWW.cpp' to replace the same file in 'CMSSW_11_3_4/src/CombineHarvester/HWW/bin/MorphingMSSMFullRun2_HWW.cpp' and HwwSystematics_MSSMFullSemi_201X_FakeUnc.cc in 'CMSSW_11_3_4/src/CombineHarvester/HWW/bin/HwwSystematics_MSSMFullSemi.cc' 
There is a configuration file for every year, which is committed to this directory directly, and has to be copied in  the abovementioned path and then compile with the usual 'scram b -j 4'

In the HWW directory copy also the bash file doSemilep_201X.sh that is here and then doWorkspace.sh

The different width needs to be specified in [this line](https://github.com/latinos/PlotsConfigurations/blob/HWWSemi/Configurations/HWWSemiLepHighMass/Fit_v7/MorphingMSSMFullRun2_HWW.cpp#L61) 
From a combine suitable version such as CMSSW_11_3_4 with the latest package of Combine compliant submit the limits with the combine options. 
```
combineTool.py -m "300, 350, 400, 450, 500, 550, 600, 650, 700, 750" -M AsymptoticLimits --rAbsAcc 0 --rRelAcc 0.0005 --setParameters r=0 --run both -d WSRun2_semilep_unblind.indepSM_RW002.root --cminDefaultMinimizerStrategy 0 --cminApproxPreFitTolerance=100 --cminFallbackAlgo Minuit2,Migrad,0:0.1 --X-rtd MINIMIZER_MaxCalls=9999999 --X-rtd MINIMIZER_analytic --X-rtd FAST_VERTICAL_MORPH --X-rtd MINIMIZER_freezeDisassociatedParams --X-rtd MINIMIZER_multiMin_hideConstants --X-rtd MINIMIZER_multiMin_maskConstraints --X-rtd MINIMIZER_multiMin_maskChannels=2 --X-rtd OPTIMIZE_BOUNDS=0 -n relwidth_2per_All --job-mode condor --task-name condor-lowmassSMALL --sub-opts='+JobFlavour="tomorrow"'

combineTool.py -m "800, 850, 900, 950, 1000, 1050, 1100, 1150, 1200, 1250, 1300, 1350, 1400, 1450, 1500, 1600, 1700, 1800, 1900, 2000, 2100, 2200, 2300, 2400, 2500, 2600, 2700, 2800, 2900, 3000, 3200, 3400, 3600, 3800, 4000, 4200, 4400, 4600, 4800, 5000" -M AsymptoticLimits --rAbsAcc 0 --rRelAcc 0.0005 --setParameters r=0 --run both -d WSRun2_semilep_unblind.indepSMhigh_RW002.root --cminDefaultMinimizerStrategy 0 --cminApproxPreFitTolerance=100 --cminFallbackAlgo Minuit2,Migrad,0:0.1 --X-rtd MINIMIZER_MaxCalls=9999999 --X-rtd MINIMIZER_analytic --X-rtd FAST_VERTICAL_MORPH --X-rtd MINIMIZER_freezeDisassociatedParams --X-rtd MINIMIZER_multiMin_hideConstants --X-rtd MINIMIZER_multiMin_maskConstraints --X-rtd MINIMIZER_multiMin_maskChannels=2 --X-rtd OPTIMIZE_BOUNDS=0 -n relwidth_2per_All --job-mode condor --task-name condor-HighmassSMALL --sub-opts='+JobFlavour="tomorrow"'
```
or the significance with
```
combineTool.py -m  "1000, 1050, 1100, 1150, 1200, 1250, 1300, 1350" -M Significance --expectSignal=1  -d WSRun2_semilep_unblind.indepSMhigh_RW002.root --cminDefaultMinimizerStrategy 0 --cminApproxPreFitTolerance=100 --cminFallbackAlgo Minuit2,Migrad,0:0.1 --X-rtd MINIMIZER_MaxCalls=9999999 --X-rtd MINIMIZER_analytic --X-rtd FAST_VERTICAL_MORPH --X-rtd MINIMIZER_freezeDisassociatedParams --X-rtd MINIMIZER_multiMin_hideConstants --X-rtd MINIMIZER_multiMin_maskConstraints --X-rtd MINIMIZER_multiMin_maskChannels=2  --X-rtd OPTIMIZE_BOUNDS=0 -n relwidth_2per_significance_PV --job-mode condor --task-name condor-HighmassSM_Significance_newPV  --sub-opts='+JobFlavour="tomorrow"'
combineTool.py -m  "350, 400, 450, 500, 550, 600" -M Significance --expectSignal=1  -d WSRun2_semilep_unblind.indepSM_RW002.root --cminDefaultMinimizerStrategy 0 --cminApproxPreFitTolerance=100 --cminFallbackAlgo Minuit2,Migrad,0:0.1 --X-rtd MINIMIZER_MaxCalls=9999999 --X-rtd MINIMIZER_analytic --X-rtd FAST_VERTICAL_MORPH --X-rtd MINIMIZER_freezeDisassociatedParams --X-rtd MINIMIZER_multiMin_hideConstants --X-rtd MINIMIZER_multiMin_maskConstraints --X-rtd MINIMIZER_multiMin_maskChannels=2 --X-rtd OPTIMIZE_BOUNDS=0 -n relwidth_2per_significance_noPV --job-mode condor --task-name condor-LowmassSM_Significance_new_NoPV --sub-opts='+JobFlavour="tomorrow"'
```
