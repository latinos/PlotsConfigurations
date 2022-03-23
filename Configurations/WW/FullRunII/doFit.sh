#!/bin/bash

#
# Commands to run needed differential fits. Uncomment desired commands.
# For combineTool.py commands with the --job-mode condor option, make sure all jobs have finished running before running the next command.
#

cd $COMBINE_DIR
eval `scramv1 runtime -sh`
cd -

ulimit -s unlimited

#########
# Njets #
#########

### Signal strengths
#combine -M MultiDimFit --algo singles -t -1 --setParameters r_0=1,r_1=1,r_2=1,r_3=1 -d Full2016_njet.root --X-rtd MINIMIZER_analytic --robustFit=1 > Full2016_njet.out
#combine -M MultiDimFit --algo singles -t -1 --setParameters r_0=1,r_1=1,r_2=1,r_3=1 -d Full2017_njet.root --X-rtd MINIMIZER_analytic --robustFit=1 > Full2017_njet.out
#combine -M MultiDimFit --algo singles -t -1 --setParameters r_0=1,r_1=1,r_2=1,r_3=1 -d Full2018_njet.root --X-rtd MINIMIZER_analytic --robustFit=1 > Full2018_njet.out
#combine -M MultiDimFit --algo singles -t -1 --setParameters r_0=1,r_1=1,r_2=1,r_3=1 -d FullRunII_njet.root --X-rtd MINIMIZER_analytic --robustFit=1 > FullRunII_njet.out

### Posterior nuisance parameters / correlations
#combine -M FitDiagnostics -t -1 --setParameters r_0=1,r_1=1,r_2=1,r_3=1 -d FullRunII_njet.root --X-rtd MINIMIZER_analytic --skipBOnlyFit

### Impacts
#combineTool.py -M Impacts -m 125 -t -1 --setParameters r_0=1,r_1=1,r_2=1,r_3=1 --setParameterRanges CMS_hww_Topnorm0j=-5,5:CMS_hww_Topnorm1j=-5,5:CMS_hww_Topnorm2j=-5,5:CMS_hww_Topnorm3j=-5,5 -d FullRunII_njet.root --X-rtd MINIMIZER_analytic --robustFit=1 -n njet --doInitialFit --saveFitResult                                                    
#combineTool.py -M Impacts -m 125 -t -1 --setParameters r_0=1,r_1=1,r_2=1,r_3=1 --setParameterRanges CMS_hww_Topnorm0j=-5,5:CMS_hww_Topnorm1j=-5,5:CMS_hww_Topnorm2j=-5,5:CMS_hww_Topnorm3j=-5,5 -d FullRunII_njet.root --X-rtd MINIMIZER_analytic --robustFit=1 -n njet --doFits --job-mode condor --sub-opts='+JobFlavour="microcentury"'
#combineTool.py -M Impacts -m 125 -t -1 --setParameters r_0=1,r_1=1,r_2=1,r_3=1 --setParameterRanges CMS_hww_Topnorm0j=-5,5:CMS_hww_Topnorm1j=-5,5:CMS_hww_Topnorm2j=-5,5:CMS_hww_Topnorm3j=-5,5 -d FullRunII_njet.root --X-rtd MINIMIZER_analytic --robustFit=1 -n njet -o impacts_njet.json 
#plotImpacts.py -i impacts_njet.json --POI r_0 -o impacts_nj0
#plotImpacts.py -i impacts_njet.json --POI r_1 -o impacts_nj1
#plotImpacts.py -i impacts_njet.json --POI r_2 -o impacts_nj2
#plotImpacts.py -i impacts_njet.json --POI r_3 -o impacts_nj3

##########
# dphijj #
##########

### Signal strengths
#combine -M MultiDimFit --algo singles -t -1 --setParameters r_0=1,r_1=1,r_2=1,r_3=1,r_4=1,r_5=1,r_6=1,r_7=1,r_8=1,r_9=1,r_10=1,r_11=1,r_12=1,r_13=1 -d Full2016_dphijj.root --X-rtd MINIMIZER_analytic > Full2016_dphijj.out
#combine -M MultiDimFit --algo singles -t -1 --setParameters r_0=1,r_1=1,r_2=1,r_3=1,r_4=1,r_5=1,r_6=1,r_7=1,r_8=1,r_9=1,r_10=1,r_11=1,r_12=1,r_13=1 -d Full2017_dphijj.root --X-rtd MINIMIZER_analytic > Full2017_dphijj.out
#combine -M MultiDimFit --algo singles -t -1 --setParameters r_0=1,r_1=1,r_2=1,r_3=1,r_4=1,r_5=1,r_6=1,r_7=1,r_8=1,r_9=1,r_10=1,r_11=1,r_12=1,r_13=1 -d Full2018_dphijj.root --X-rtd MINIMIZER_analytic > Full2018_dphijj.out
#combine -M MultiDimFit --algo singles -t -1 --setParameters r_0=1,r_1=1,r_2=1,r_3=1,r_4=1,r_5=1,r_6=1,r_7=1,r_8=1,r_9=1,r_10=1,r_11=1,r_12=1,r_13=1 -d FullRunII_WW_dphijj.root --X-rtd MINIMIZER_analytic > FullRunII_dphijj.out

### Posterior nuisance parameters / correlations
#combine -M FitDiagnostics -t -1 --setParameters r_0=1,r_1=1,r_2=1,r_3=1,r_4=1,r_5=1,r_6=1,r_7=1,r_8=1,r_9=1,r_10=1,r_11=1,r_12=1,r_13=1 -d FullRunII_WW_dphijj.root --X-rtd MINIMIZER_analytic --skipBOnlyFit

### Impacts
#combineTool.py -M Impacts -m 125 -t -1 --setParameters r_0=1,r_1=1,r_2=1,r_3=1,r_4=1,r_5=1,r_6=1,r_7=1,r_8=1,r_9=1,r_10=1,r_11=1,r_12=1,r_13=1 --setParameterRanges CMS_hww_Topnorm=-5,5 -d FullRunII_WW_dphijj.root --X-rtd MINIMIZER_analytic --robustFit=1 -n dphijj --doInitialFit --saveFitResult                                                    
#combineTool.py -M Impacts -m 125 -t -1 --setParameters r_0=1,r_1=1,r_2=1,r_3=1,r_4=1,r_5=1,r_6=1,r_7=1,r_8=1,r_9=1,r_10=1,r_11=1,r_12=1,r_13=1 --setParameterRanges CMS_hww_Topnorm=-5,5 -d FullRunII_WW_dphijj.root --X-rtd MINIMIZER_analytic --robustFit=1 -n dphijj --doFits --job-mode condor
#combineTool.py -M Impacts -m 125 -t -1 --setParameters r_0=1,r_1=1,r_2=1,r_3=1,r_4=1,r_5=1,r_6=1,r_7=1,r_8=1,r_9=1,r_10=1,r_11=1,r_12=1,r_13=1 --setParameterRanges CMS_hww_Topnorm=-5,5 -d FullRunII_WW_dphijj.root --X-rtd MINIMIZER_analytic --robustFit=1 -n dphijj -o impacts_dphijj.json 
#plotImpacts.py -i impacts_dphijj.json --POI r_0 -o impacts_r0
#plotImpacts.py -i impacts_dphijj.json --POI r_1 -o impacts_r1
#plotImpacts.py -i impacts_dphijj.json --POI r_2 -o impacts_r2
#plotImpacts.py -i impacts_dphijj.json --POI r_3 -o impacts_r3
#plotImpacts.py -i impacts_dphijj.json --POI r_4 -o impacts_r4
#plotImpacts.py -i impacts_dphijj.json --POI r_5 -o impacts_r5
#plotImpacts.py -i impacts_dphijj.json --POI r_6 -o impacts_r6
#plotImpacts.py -i impacts_dphijj.json --POI r_7 -o impacts_r7
#plotImpacts.py -i impacts_dphijj.json --POI r_8 -o impacts_r8
#plotImpacts.py -i impacts_dphijj.json --POI r_9 -o impacts_r9
#plotImpacts.py -i impacts_dphijj.json --POI r_10 -o impacts_r10
#plotImpacts.py -i impacts_dphijj.json --POI r_11 -o impacts_r11
#plotImpacts.py -i impacts_dphijj.json --POI r_12 -o impacts_r12
#plotImpacts.py -i impacts_dphijj.json --POI r_13 -o impacts_r13
