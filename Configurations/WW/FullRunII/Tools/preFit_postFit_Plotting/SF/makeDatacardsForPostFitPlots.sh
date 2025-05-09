#!/bin/bash

# Define your CMSSW release area
export COMBINE_DIR=/afs/cern.ch/work/s/ssaumya/private/Projects/HiggsCombine/CMSSW_10_2_13/src/HiggsAnalysis/CombinedLimit/

# Move to Combine directory and set up the environment
cd $COMBINE_DIR
eval `scramv1 runtime -sh`  # or use: source $(scramv1 runtime -sh)
cd -  # go back to the original directory

# Remove stack size limits
ulimit -s unlimited

# Now run Combine
fitDatacardDir=/afs/cern.ch/work/s/ssaumya/private/Projects/HiggsCombine/CMSSW_10_2_13/src/HiggsAnalysis/CombinedLimit/PreFit_PostFit/17thApril2025/inclusive_SF/
combine -M FitDiagnostics ${fitDatacardDir}/FullRunII_incl_SF.txt -m 125 --rMin=-10 --rMax=10 -n WW_SF_incl | tee log_Fit_WW_SF_incl.out
#combine -M MultiDimFit ${fitDatacardDir}/FullRunII_incl_SF.txt -m 125 --rMin=-10 --rMax=10 --algo singles -n WW_MSF

# TODO edit -- this should be <file with fit result>:<fit result>
fit_result=fitDiagnosticsWW_SF_incl.root:fit_s

# Define the datacards directory
datacardDir_2016_HIPM=/afs/cern.ch/work/s/ssaumya/private/Projects/HiggsCombine/CMSSW_10_2_13/src/HiggsAnalysis/CombinedLimit/PreFit_PostFit/17thApril2025/inclusive_SF/datacards_2016_HIPM
datacardDir_2016_noHIPM=/afs/cern.ch/work/s/ssaumya/private/Projects/HiggsCombine/CMSSW_10_2_13/src/HiggsAnalysis/CombinedLimit/PreFit_PostFit/17thApril2025/inclusive_SF/datacards_2016_noHIPM
datacardDir_2017=/afs/cern.ch/work/s/ssaumya/private/Projects/HiggsCombine/CMSSW_10_2_13/src/HiggsAnalysis/CombinedLimit/PreFit_PostFit/17thApril2025/inclusive_SF/datacards_2017
datacardDir_2018=/afs/cern.ch/work/s/ssaumya/private/Projects/HiggsCombine/CMSSW_10_2_13/src/HiggsAnalysis/CombinedLimit/PreFit_PostFit/17thApril2025/inclusive_SF/datacards_2018

####################################
### Make combined-year datacards ###
####################################
combineCards.py ww2l2v_13TeV_2016_HIPM_SF_sr_0j=${datacardDir_2016_HIPM}/ww2l2v_13TeV_sr_0j_B0/events/datacard.txt > Full2016_HIPM_SF_sr_0j_incl.txt
combineCards.py ww2l2v_13TeV_2016_HIPM_SF_sr_1j=${datacardDir_2016_HIPM}/ww2l2v_13TeV_sr_1j_B0/events/datacard.txt > Full2016_HIPM_SF_sr_1j_incl.txt
combineCards.py ww2l2v_13TeV_2016_HIPM_SF_sr_2j=${datacardDir_2016_HIPM}/ww2l2v_13TeV_sr_2j_B0/events/datacard.txt > Full2016_HIPM_SF_sr_2j_incl.txt

combineCards.py ww2l2v_13TeV_2016_noHIPM_SF_sr_0j=${datacardDir_2016_noHIPM}/ww2l2v_13TeV_sr_0j_B0/events/datacard.txt > Full2016_noHIPM_SF_sr_0j_incl.txt
combineCards.py ww2l2v_13TeV_2016_noHIPM_SF_sr_1j=${datacardDir_2016_noHIPM}/ww2l2v_13TeV_sr_1j_B0/events/datacard.txt > Full2016_noHIPM_SF_sr_1j_incl.txt
combineCards.py ww2l2v_13TeV_2016_noHIPM_SF_sr_2j=${datacardDir_2016_noHIPM}/ww2l2v_13TeV_sr_2j_B0/events/datacard.txt > Full2016_noHIPM_SF_sr_2j_incl.txt

combineCards.py ww2l2v_13TeV_2017_SF_sr_0j=${datacardDir_2017}/ww2l2v_13TeV_sr_0j_B0/events/datacard.txt > Full2017_SF_sr_0j_incl.txt
combineCards.py ww2l2v_13TeV_2017_SF_sr_1j=${datacardDir_2017}/ww2l2v_13TeV_sr_1j_B0/events/datacard.txt > Full2017_SF_sr_1j_incl.txt
combineCards.py ww2l2v_13TeV_2017_SF_sr_2j=${datacardDir_2017}/ww2l2v_13TeV_sr_2j_B0/events/datacard.txt > Full2017_SF_sr_2j_incl.txt

combineCards.py ww2l2v_13TeV_2018_SF_sr_0j=${datacardDir_2018}/ww2l2v_13TeV_sr_0j_B0/events/datacard.txt > Full2018_SF_sr_0j_incl.txt
combineCards.py ww2l2v_13TeV_2018_SF_sr_1j=${datacardDir_2018}/ww2l2v_13TeV_sr_1j_B0/events/datacard.txt > Full2018_SF_sr_1j_incl.txt
combineCards.py ww2l2v_13TeV_2018_SF_sr_2j=${datacardDir_2018}/ww2l2v_13TeV_sr_2j_B0/events/datacard.txt > Full2018_SF_sr_2j_incl.txt

combineCards.py ww2l2v_13TeV_2016_HIPM_SF_sr_0j=${datacardDir_2016_HIPM}/ww2l2v_13TeV_sr_0j_B0/events/datacard.txt \
		ww2l2v_13TeV_2016_noHIPM_SF_sr_0j=${datacardDir_2016_noHIPM}/ww2l2v_13TeV_sr_0j_B0/events/datacard.txt \
		ww2l2v_13TeV_2017_SF_sr_0j=${datacardDir_2017}/ww2l2v_13TeV_sr_0j_B0/events/datacard.txt \
		ww2l2v_13TeV_2018_SF_sr_0j=${datacardDir_2018}/ww2l2v_13TeV_sr_0j_B0/events/datacard.txt \
		> FullRunII_SF_sr_0j_incl.txt

combineCards.py ww2l2v_13TeV_2016_HIPM_SF_sr_1j=${datacardDir_2016_HIPM}/ww2l2v_13TeV_sr_1j_B0/events/datacard.txt \
		ww2l2v_13TeV_2016_noHIPM_SF_sr_1j=${datacardDir_2016_noHIPM}/ww2l2v_13TeV_sr_1j_B0/events/datacard.txt \
		ww2l2v_13TeV_2017_SF_sr_1j=${datacardDir_2017}/ww2l2v_13TeV_sr_1j_B0/events/datacard.txt \
		ww2l2v_13TeV_2018_SF_sr_1j=${datacardDir_2018}/ww2l2v_13TeV_sr_1j_B0/events/datacard.txt \
		> FullRunII_SF_sr_1j_incl.txt

combineCards.py ww2l2v_13TeV_2016_HIPM_SF_sr_2j=${datacardDir_2016_HIPM}/ww2l2v_13TeV_sr_2j_B0/events/datacard.txt \
		ww2l2v_13TeV_2016_noHIPM_SF_sr_2j=${datacardDir_2016_noHIPM}/ww2l2v_13TeV_sr_2j_B0/events/datacard.txt \
		ww2l2v_13TeV_2017_SF_sr_2j=${datacardDir_2017}/ww2l2v_13TeV_sr_2j_B0/events/datacard.txt \
		ww2l2v_13TeV_2018_SF_sr_2j=${datacardDir_2018}/ww2l2v_13TeV_sr_2j_B0/events/datacard.txt \
		> FullRunII_SF_sr_2j_incl.txt

###############################################
## Convert to workspaces, you will need both ##
###############################################
text2workspace.py Full2016_HIPM_SF_sr_0j_incl.txt -o Full2016_HIPM_SF_sr_0j_incl.root -m 125
text2workspace.py Full2016_HIPM_SF_sr_1j_incl.txt -o Full2016_HIPM_SF_sr_1j_incl.root -m 125
text2workspace.py Full2016_HIPM_SF_sr_2j_incl.txt -o Full2016_HIPM_SF_sr_2j_incl.root -m 125

text2workspace.py Full2016_noHIPM_SF_sr_0j_incl.txt -o Full2016_noHIPM_SF_sr_0j_incl.root -m 125
text2workspace.py Full2016_noHIPM_SF_sr_1j_incl.txt -o Full2016_noHIPM_SF_sr_1j_incl.root -m 125
text2workspace.py Full2016_noHIPM_SF_sr_2j_incl.txt -o Full2016_noHIPM_SF_sr_2j_incl.root -m 125

text2workspace.py Full2017_SF_sr_0j_incl.txt -o Full2017_SF_sr_0j_incl.root -m 125
text2workspace.py Full2017_SF_sr_1j_incl.txt -o Full2017_SF_sr_1j_incl.root -m 125
text2workspace.py Full2017_SF_sr_2j_incl.txt -o Full2017_SF_sr_2j_incl.root -m 125

text2workspace.py Full2018_SF_sr_0j_incl.txt -o Full2018_SF_sr_0j_incl.root -m 125
text2workspace.py Full2018_SF_sr_1j_incl.txt -o Full2018_SF_sr_1j_incl.root -m 125
text2workspace.py Full2018_SF_sr_2j_incl.txt -o Full2018_SF_sr_2j_incl.root -m 125

text2workspace.py FullRunII_SF_sr_0j_incl.txt -o FullRunII_SF_sr_0j_incl.root -m 125
text2workspace.py FullRunII_SF_sr_1j_incl.txt -o FullRunII_SF_sr_1j_incl.root -m 125
text2workspace.py FullRunII_SF_sr_2j_incl.txt -o FullRunII_SF_sr_2j_incl.root -m 125

###############################################################
## Generate postfit total shape from combined-year workspace ##
###############################################################

# This takes the input shapes from the above workspace, morphs them according to the nuisance parameters sampled from the covariance matrix in the fit result, and adds everything together

PostFitShapesFromWorkspace -w Full2016_HIPM_SF_sr_0j_incl.root -d Full2016_HIPM_SF_sr_0j_incl.txt -o output_2016_HIPM_SF_sr_0j_incl.root --sampling -f ${fit_result} --total-shapes
PostFitShapesFromWorkspace -w Full2016_HIPM_SF_sr_1j_incl.root -d Full2016_HIPM_SF_sr_1j_incl.txt -o output_2016_HIPM_SF_sr_1j_incl.root --sampling -f ${fit_result} --total-shapes
PostFitShapesFromWorkspace -w Full2016_HIPM_SF_sr_2j_incl.root -d Full2016_HIPM_SF_sr_2j_incl.txt -o output_2016_HIPM_SF_sr_2j_incl.root --sampling -f ${fit_result} --total-shapes

PostFitShapesFromWorkspace -w Full2016_noHIPM_SF_sr_0j_incl.root -d Full2016_noHIPM_SF_sr_0j_incl.txt -o output_2016_noHIPM_SF_sr_0j_incl.root --sampling -f ${fit_result} --total-shapes
PostFitShapesFromWorkspace -w Full2016_noHIPM_SF_sr_1j_incl.root -d Full2016_noHIPM_SF_sr_1j_incl.txt -o output_2016_noHIPM_SF_sr_1j_incl.root --sampling -f ${fit_result} --total-shapes
PostFitShapesFromWorkspace -w Full2016_noHIPM_SF_sr_2j_incl.root -d Full2016_noHIPM_SF_sr_2j_incl.txt -o output_2016_noHIPM_SF_sr_2j_incl.root --sampling -f ${fit_result} --total-shapes

PostFitShapesFromWorkspace -w Full2017_SF_sr_0j_incl.root -d Full2017_SF_sr_0j_incl.txt -o output_2017_SF_sr_0j_incl.root --sampling -f ${fit_result} --total-shapes
PostFitShapesFromWorkspace -w Full2017_SF_sr_1j_incl.root -d Full2017_SF_sr_1j_incl.txt -o output_2017_SF_sr_1j_incl.root --sampling -f ${fit_result} --total-shapes
PostFitShapesFromWorkspace -w Full2017_SF_sr_2j_incl.root -d Full2017_SF_sr_2j_incl.txt -o output_2017_SF_sr_2j_incl.root --sampling -f ${fit_result} --total-shapes

PostFitShapesFromWorkspace -w Full2018_SF_sr_0j_incl.root -d Full2018_SF_sr_0j_incl.txt -o output_2018_SF_sr_0j_incl.root --sampling -f ${fit_result} --total-shapes
PostFitShapesFromWorkspace -w Full2018_SF_sr_1j_incl.root -d Full2018_SF_sr_1j_incl.txt -o output_2018_SF_sr_1j_incl.root --sampling -f ${fit_result} --total-shapes
PostFitShapesFromWorkspace -w Full2018_SF_sr_2j_incl.root -d Full2018_SF_sr_2j_incl.txt -o output_2018_SF_sr_2j_incl.root --sampling -f ${fit_result} --total-shapes

PostFitShapesFromWorkspace -w FullRunII_SF_sr_0j_incl.root -d FullRunII_SF_sr_0j_incl.txt -o output_FullRunII_SF_sr_0j_incl.root --sampling -f ${fit_result} --total-shapes
PostFitShapesFromWorkspace -w FullRunII_SF_sr_1j_incl.root -d FullRunII_SF_sr_1j_incl.txt -o output_FullRunII_SF_sr_1j_incl.root --sampling -f ${fit_result} --total-shapes
PostFitShapesFromWorkspace -w FullRunII_SF_sr_2j_incl.root -d FullRunII_SF_sr_2j_incl.txt -o output_FullRunII_SF_sr_2j_incl.root --sampling -f ${fit_result} --total-shapes

############################################
## To include postfit, add --postfit flag ##
############################################

PostFitShapesFromWorkspace -w Full2016_HIPM_SF_sr_0j_incl.root -d Full2016_HIPM_SF_sr_0j_incl.txt -o output_2016_HIPM_SF_sr_0j_incl_postFit.root --sampling -f ${fit_result} --total-shapes --postfit
PostFitShapesFromWorkspace -w Full2016_HIPM_SF_sr_1j_incl.root -d Full2016_HIPM_SF_sr_1j_incl.txt -o output_2016_HIPM_SF_sr_1j_incl_postFit.root --sampling -f ${fit_result} --total-shapes --postfit
PostFitShapesFromWorkspace -w Full2016_HIPM_SF_sr_2j_incl.root -d Full2016_HIPM_SF_sr_2j_incl.txt -o output_2016_HIPM_SF_sr_2j_incl_postFit.root --sampling -f ${fit_result} --total-shapes --postfit

PostFitShapesFromWorkspace -w Full2016_noHIPM_SF_sr_0j_incl.root -d Full2016_noHIPM_SF_sr_0j_incl.txt -o output_2016_noHIPM_SF_sr_0j_incl_postFit.root --sampling -f ${fit_result} --total-shapes --postfit
PostFitShapesFromWorkspace -w Full2016_noHIPM_SF_sr_1j_incl.root -d Full2016_noHIPM_SF_sr_1j_incl.txt -o output_2016_noHIPM_SF_sr_1j_incl_postFit.root --sampling -f ${fit_result} --total-shapes --postfit
PostFitShapesFromWorkspace -w Full2016_noHIPM_SF_sr_2j_incl.root -d Full2016_noHIPM_SF_sr_2j_incl.txt -o output_2016_noHIPM_SF_sr_2j_incl_postFit.root --sampling -f ${fit_result} --total-shapes --postfit

PostFitShapesFromWorkspace -w Full2017_SF_sr_0j_incl.root -d Full2017_SF_sr_0j_incl.txt -o output_2017_SF_sr_0j_incl_postFit.root --sampling -f ${fit_result} --total-shapes --postfit
PostFitShapesFromWorkspace -w Full2017_SF_sr_1j_incl.root -d Full2017_SF_sr_1j_incl.txt -o output_2017_SF_sr_1j_incl_postFit.root --sampling -f ${fit_result} --total-shapes --postfit
PostFitShapesFromWorkspace -w Full2017_SF_sr_2j_incl.root -d Full2017_SF_sr_2j_incl.txt -o output_2017_SF_sr_2j_incl_postFit.root --sampling -f ${fit_result} --total-shapes --postfit

PostFitShapesFromWorkspace -w Full2018_SF_sr_0j_incl.root -d Full2018_SF_sr_0j_incl.txt -o output_2018_SF_sr_0j_incl_postFit.root --sampling -f ${fit_result} --total-shapes --postfit
PostFitShapesFromWorkspace -w Full2018_SF_sr_1j_incl.root -d Full2018_SF_sr_1j_incl.txt -o output_2018_SF_sr_1j_incl_postFit.root --sampling -f ${fit_result} --total-shapes --postfit
PostFitShapesFromWorkspace -w Full2018_SF_sr_2j_incl.root -d Full2018_SF_sr_2j_incl.txt -o output_2018_SF_sr_2j_incl_postFit.root --sampling -f ${fit_result} --total-shapes --postfit

PostFitShapesFromWorkspace -w FullRunII_SF_sr_0j_incl.root -d FullRunII_SF_sr_0j_incl.txt -o output_FullRunII_SF_sr_0j_incl_postFit.root --sampling -f ${fit_result} --total-shapes --postfit
PostFitShapesFromWorkspace -w FullRunII_SF_sr_1j_incl.root -d FullRunII_SF_sr_1j_incl.txt -o output_FullRunII_SF_sr_1j_incl_postFit.root --sampling -f ${fit_result} --total-shapes --postfit
PostFitShapesFromWorkspace -w FullRunII_SF_sr_2j_incl.root -d FullRunII_SF_sr_2j_incl.txt -o output_FullRunII_SF_sr_2j_incl_postFit.root --sampling -f ${fit_result} --total-shapes --postfit
