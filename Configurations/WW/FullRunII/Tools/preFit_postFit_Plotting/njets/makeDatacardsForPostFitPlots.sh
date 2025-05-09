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
#fitDatacardDir=/afs/cern.ch/work/s/ssaumya/private/Projects/HiggsCombine/CMSSW_14_1_0_pre4/src/HiggsAnalysis/CombinedLimit/macros/Datacards_13thFeb2025/datacards/input/differential_DF/njets/datacards
#combine -M MultiDimFit --algo singles --setParameters r_0=1,r_1=1,r_2=1,r_3=1 -d FullRunII_njet.root --saveFitResult --X-rtd MINIMIZER_analytic -n WW_FullRunII_njets | tee log_Fit_WW_DF_njets.out

# TODO edit -- this should be <file with fit result>:<fit result>
fit_result=multidimfitWW_FullRunII_njets.root:fit_mdf

# Define the datacards directory
datacardDir_2016_HIPM=datacards_2016_HIPM
datacardDir_2016_noHIPM=datacards_2016_noHIPM
datacardDir_2017=datacards_2017
datacardDir_2018=datacards_2018

####################################
### Make combined-year datacards ###
####################################

combineCards.py ww2l2v_13TeV_2016_HIPM_njets_sr_0j_B0=${datacardDir_2016_HIPM}/ww2l2v_13TeV_sr_0j_B0/BDTOutput_0j/datacard.txt > Full2016_HIPM_njets_sr_0j_B0.txt
combineCards.py ww2l2v_13TeV_2016_HIPM_njets_sr_1j_B0=${datacardDir_2016_HIPM}/ww2l2v_13TeV_sr_1j_B0/BDTOutput_1j/datacard.txt > Full2016_HIPM_njets_sr_1j_B0.txt
combineCards.py ww2l2v_13TeV_2016_HIPM_njets_sr_2j_B0=${datacardDir_2016_HIPM}/ww2l2v_13TeV_sr_2j_B0/BDTOutput_2j/datacard.txt > Full2016_HIPM_njets_sr_2j_B0.txt
combineCards.py ww2l2v_13TeV_2016_HIPM_njets_sr_3j_B0=${datacardDir_2016_HIPM}/ww2l2v_13TeV_sr_3j_B0/BDTOutput_2j/datacard.txt > Full2016_HIPM_njets_sr_3j_B0.txt

combineCards.py ww2l2v_13TeV_2016_noHIPM_njets_sr_0j_B0=${datacardDir_2016_noHIPM}/ww2l2v_13TeV_sr_0j_B0/BDTOutput_0j/datacard.txt > Full2016_noHIPM_njets_sr_0j_B0.txt
combineCards.py ww2l2v_13TeV_2016_noHIPM_njets_sr_1j_B0=${datacardDir_2016_noHIPM}/ww2l2v_13TeV_sr_1j_B0/BDTOutput_1j/datacard.txt > Full2016_noHIPM_njets_sr_1j_B0.txt
combineCards.py ww2l2v_13TeV_2016_noHIPM_njets_sr_2j_B0=${datacardDir_2016_noHIPM}/ww2l2v_13TeV_sr_2j_B0/BDTOutput_2j/datacard.txt > Full2016_noHIPM_njets_sr_2j_B0.txt
combineCards.py ww2l2v_13TeV_2016_noHIPM_njets_sr_3j_B0=${datacardDir_2016_noHIPM}/ww2l2v_13TeV_sr_3j_B0/BDTOutput_2j/datacard.txt > Full2016_noHIPM_njets_sr_3j_B0.txt

combineCards.py ww2l2v_13TeV_2017_njets_sr_0j_B0=${datacardDir_2017}/ww2l2v_13TeV_sr_0j_B0/BDTOutput_0j/datacard.txt > Full2017_njets_sr_0j_B0.txt
combineCards.py ww2l2v_13TeV_2017_njets_sr_1j_B0=${datacardDir_2017}/ww2l2v_13TeV_sr_1j_B0/BDTOutput_1j/datacard.txt > Full2017_njets_sr_1j_B0.txt
combineCards.py ww2l2v_13TeV_2017_njets_sr_2j_B0=${datacardDir_2017}/ww2l2v_13TeV_sr_2j_B0/BDTOutput_2j/datacard.txt > Full2017_njets_sr_2j_B0.txt
combineCards.py ww2l2v_13TeV_2017_njets_sr_3j_B0=${datacardDir_2017}/ww2l2v_13TeV_sr_3j_B0/BDTOutput_2j/datacard.txt > Full2017_njets_sr_3j_B0.txt

combineCards.py ww2l2v_13TeV_2018_njets_sr_0j_B0=${datacardDir_2018}/ww2l2v_13TeV_sr_0j_B0/BDTOutput_0j/datacard.txt > Full2018_njets_sr_0j_B0.txt
combineCards.py ww2l2v_13TeV_2018_njets_sr_1j_B0=${datacardDir_2018}/ww2l2v_13TeV_sr_1j_B0/BDTOutput_1j/datacard.txt > Full2018_njets_sr_1j_B0.txt
combineCards.py ww2l2v_13TeV_2018_njets_sr_2j_B0=${datacardDir_2018}/ww2l2v_13TeV_sr_2j_B0/BDTOutput_2j/datacard.txt > Full2018_njets_sr_2j_B0.txt
combineCards.py ww2l2v_13TeV_2018_njets_sr_3j_B0=${datacardDir_2018}/ww2l2v_13TeV_sr_3j_B0/BDTOutput_2j/datacard.txt > Full2018_njets_sr_3j_B0.txt

combineCards.py ww2l2v_13TeV_2016_HIPM_njets_sr_0j_B0=${datacardDir_2016_HIPM}/ww2l2v_13TeV_sr_0j_B0/BDTOutput_0j/datacard.txt \
                ww2l2v_13TeV_2016_noHIPM_njets_sr_0j_B0=${datacardDir_2016_noHIPM}/ww2l2v_13TeV_sr_0j_B0/BDTOutput_0j/datacard.txt \
                ww2l2v_13TeV_2017_njets_sr_0j_B0=${datacardDir_2017}/ww2l2v_13TeV_sr_0j_B0/BDTOutput_0j/datacard.txt \
                ww2l2v_13TeV_2018_njets_sr_0j_B0=${datacardDir_2018}/ww2l2v_13TeV_sr_0j_B0/BDTOutput_0j/datacard.txt \
                > FullRunII_njets_sr_0j_B0.txt

combineCards.py ww2l2v_13TeV_2016_HIPM_njets_sr_1j_B0=${datacardDir_2016_HIPM}/ww2l2v_13TeV_sr_1j_B0/BDTOutput_1j/datacard.txt \
                ww2l2v_13TeV_2016_noHIPM_njets_sr_1j_B0=${datacardDir_2016_noHIPM}/ww2l2v_13TeV_sr_1j_B0/BDTOutput_1j/datacard.txt \
                ww2l2v_13TeV_2017_njets_sr_1j_B0=${datacardDir_2017}/ww2l2v_13TeV_sr_1j_B0/BDTOutput_1j/datacard.txt \
                ww2l2v_13TeV_2018_njets_sr_1j_B0=${datacardDir_2018}/ww2l2v_13TeV_sr_1j_B0/BDTOutput_1j/datacard.txt \
                > FullRunII_njets_sr_1j_B0.txt

combineCards.py ww2l2v_13TeV_2016_HIPM_njets_sr_2j_B0=${datacardDir_2016_HIPM}/ww2l2v_13TeV_sr_2j_B0/BDTOutput_2j/datacard.txt \
                ww2l2v_13TeV_2016_noHIPM_njets_sr_2j_B0=${datacardDir_2016_noHIPM}/ww2l2v_13TeV_sr_2j_B0/BDTOutput_2j/datacard.txt \
                ww2l2v_13TeV_2017_njets_sr_2j_B0=${datacardDir_2017}/ww2l2v_13TeV_sr_2j_B0/BDTOutput_2j/datacard.txt \
                ww2l2v_13TeV_2018_njets_sr_2j_B0=${datacardDir_2018}/ww2l2v_13TeV_sr_2j_B0/BDTOutput_2j/datacard.txt \
                > FullRunII_njets_sr_2j_B0.txt

combineCards.py ww2l2v_13TeV_2016_HIPM_njets_sr_3j_B0=${datacardDir_2016_HIPM}/ww2l2v_13TeV_sr_3j_B0/BDTOutput_2j/datacard.txt \
                ww2l2v_13TeV_2016_noHIPM_njets_sr_3j_B0=${datacardDir_2016_noHIPM}/ww2l2v_13TeV_sr_3j_B0/BDTOutput_2j/datacard.txt \
                ww2l2v_13TeV_2017_njets_sr_3j_B0=${datacardDir_2017}/ww2l2v_13TeV_sr_3j_B0/BDTOutput_2j/datacard.txt \
                ww2l2v_13TeV_2018_njets_sr_3j_B0=${datacardDir_2018}/ww2l2v_13TeV_sr_3j_B0/BDTOutput_2j/datacard.txt \
                > FullRunII_njets_sr_3j_B0.txt

###############################################
## Convert to workspaces, you will need both ##
###############################################

text2workspace.py Full2016_HIPM_njets_sr_0j_B0.txt -o Full2016_HIPM_njets_sr_0j_B0.root -m 125
text2workspace.py Full2016_HIPM_njets_sr_1j_B0.txt -o Full2016_HIPM_njets_sr_1j_B0.root -m 125
text2workspace.py Full2016_HIPM_njets_sr_2j_B0.txt -o Full2016_HIPM_njets_sr_2j_B0.root -m 125
text2workspace.py Full2016_HIPM_njets_sr_3j_B0.txt -o Full2016_HIPM_njets_sr_3j_B0.root -m 125

text2workspace.py Full2016_noHIPM_njets_sr_0j_B0.txt -o Full2016_noHIPM_njets_sr_0j_B0.root -m 125
text2workspace.py Full2016_noHIPM_njets_sr_1j_B0.txt -o Full2016_noHIPM_njets_sr_1j_B0.root -m 125
text2workspace.py Full2016_noHIPM_njets_sr_2j_B0.txt -o Full2016_noHIPM_njets_sr_2j_B0.root -m 125
text2workspace.py Full2016_noHIPM_njets_sr_3j_B0.txt -o Full2016_noHIPM_njets_sr_3j_B0.root -m 125

text2workspace.py Full2017_njets_sr_0j_B0.txt -o Full2017_njets_sr_0j_B0.root -m 125
text2workspace.py Full2017_njets_sr_1j_B0.txt -o Full2017_njets_sr_1j_B0.root -m 125
text2workspace.py Full2017_njets_sr_2j_B0.txt -o Full2017_njets_sr_2j_B0.root -m 125
text2workspace.py Full2017_njets_sr_3j_B0.txt -o Full2017_njets_sr_3j_B0.root -m 125

text2workspace.py Full2018_njets_sr_0j_B0.txt -o Full2018_njets_sr_0j_B0.root -m 125
text2workspace.py Full2018_njets_sr_1j_B0.txt -o Full2018_njets_sr_1j_B0.root -m 125
text2workspace.py Full2018_njets_sr_2j_B0.txt -o Full2018_njets_sr_2j_B0.root -m 125
text2workspace.py Full2018_njets_sr_3j_B0.txt -o Full2018_njets_sr_3j_B0.root -m 125

text2workspace.py FullRunII_njets_sr_0j_B0.txt -o FullRunII_njets_sr_0j_B0.root -m 125
text2workspace.py FullRunII_njets_sr_1j_B0.txt -o FullRunII_njets_sr_1j_B0.root -m 125
text2workspace.py FullRunII_njets_sr_2j_B0.txt -o FullRunII_njets_sr_2j_B0.root -m 125
text2workspace.py FullRunII_njets_sr_3j_B0.txt -o FullRunII_njets_sr_3j_B0.root -m 125

###############################################################
## Generate postfit total shape from combined-year workspace ##
###############################################################

# This takes the input shapes from the above workspace, morphs them according to the nuisance parameters sampled from the covariance matrix in the fit result, and adds everything together

PostFitShapesFromWorkspace -w Full2016_HIPM_njets_sr_0j_B0.root -d Full2016_HIPM_njets_sr_0j_B0.txt -o output_2016_HIPM_njets_sr_0j_B0.root --sampling -f ${fit_result} --total-shapes
PostFitShapesFromWorkspace -w Full2016_HIPM_njets_sr_1j_B0.root -d Full2016_HIPM_njets_sr_1j_B0.txt -o output_2016_HIPM_njets_sr_1j_B0.root --sampling -f ${fit_result} --total-shapes
PostFitShapesFromWorkspace -w Full2016_HIPM_njets_sr_2j_B0.root -d Full2016_HIPM_njets_sr_2j_B0.txt -o output_2016_HIPM_njets_sr_2j_B0.root --sampling -f ${fit_result} --total-shapes
PostFitShapesFromWorkspace -w Full2016_HIPM_njets_sr_3j_B0.root -d Full2016_HIPM_njets_sr_3j_B0.txt -o output_2016_HIPM_njets_sr_3j_B0.root --sampling -f ${fit_result} --total-shapes

PostFitShapesFromWorkspace -w Full2016_noHIPM_njets_sr_0j_B0.root -d Full2016_noHIPM_njets_sr_0j_B0.txt -o output_2016_noHIPM_njets_sr_0j_B0.root --sampling -f ${fit_result} --total-shapes
PostFitShapesFromWorkspace -w Full2016_noHIPM_njets_sr_1j_B0.root -d Full2016_noHIPM_njets_sr_1j_B0.txt -o output_2016_noHIPM_njets_sr_1j_B0.root --sampling -f ${fit_result} --total-shapes
PostFitShapesFromWorkspace -w Full2016_noHIPM_njets_sr_2j_B0.root -d Full2016_noHIPM_njets_sr_2j_B0.txt -o output_2016_noHIPM_njets_sr_2j_B0.root --sampling -f ${fit_result} --total-shapes
PostFitShapesFromWorkspace -w Full2016_noHIPM_njets_sr_3j_B0.root -d Full2016_noHIPM_njets_sr_3j_B0.txt -o output_2016_noHIPM_njets_sr_3j_B0.root --sampling -f ${fit_result} --total-shapes

PostFitShapesFromWorkspace -w Full2017_njets_sr_0j_B0.root -d Full2017_njets_sr_0j_B0.txt -o output_2017_njets_sr_0j_B0.root --sampling -f ${fit_result} --total-shapes
PostFitShapesFromWorkspace -w Full2017_njets_sr_1j_B0.root -d Full2017_njets_sr_1j_B0.txt -o output_2017_njets_sr_1j_B0.root --sampling -f ${fit_result} --total-shapes
PostFitShapesFromWorkspace -w Full2017_njets_sr_2j_B0.root -d Full2017_njets_sr_2j_B0.txt -o output_2017_njets_sr_2j_B0.root --sampling -f ${fit_result} --total-shapes
PostFitShapesFromWorkspace -w Full2017_njets_sr_3j_B0.root -d Full2017_njets_sr_3j_B0.txt -o output_2017_njets_sr_3j_B0.root --sampling -f ${fit_result} --total-shapes

PostFitShapesFromWorkspace -w Full2018_njets_sr_0j_B0.root -d Full2018_njets_sr_0j_B0.txt -o output_2018_njets_sr_0j_B0.root --sampling -f ${fit_result} --total-shapes
PostFitShapesFromWorkspace -w Full2018_njets_sr_1j_B0.root -d Full2018_njets_sr_1j_B0.txt -o output_2018_njets_sr_1j_B0.root --sampling -f ${fit_result} --total-shapes
PostFitShapesFromWorkspace -w Full2018_njets_sr_2j_B0.root -d Full2018_njets_sr_2j_B0.txt -o output_2018_njets_sr_2j_B0.root --sampling -f ${fit_result} --total-shapes
PostFitShapesFromWorkspace -w Full2018_njets_sr_3j_B0.root -d Full2018_njets_sr_3j_B0.txt -o output_2018_njets_sr_3j_B0.root --sampling -f ${fit_result} --total-shapes

PostFitShapesFromWorkspace -w FullRunII_njets_sr_0j_B0.root -d FullRunII_njets_sr_0j_B0.txt -o output_FullRunII_njets_sr_0j_B0.root --sampling -f ${fit_result} --total-shapes
PostFitShapesFromWorkspace -w FullRunII_njets_sr_1j_B0.root -d FullRunII_njets_sr_1j_B0.txt -o output_FullRunII_njets_sr_1j_B0.root --sampling -f ${fit_result} --total-shapes
PostFitShapesFromWorkspace -w FullRunII_njets_sr_2j_B0.root -d FullRunII_njets_sr_2j_B0.txt -o output_FullRunII_njets_sr_2j_B0.root --sampling -f ${fit_result} --total-shapes
PostFitShapesFromWorkspace -w FullRunII_njets_sr_3j_B0.root -d FullRunII_njets_sr_3j_B0.txt -o output_FullRunII_njets_sr_3j_B0.root --sampling -f ${fit_result} --total-shapes

############################################
## To include postfit, add --postfit flag ##
############################################

PostFitShapesFromWorkspace -w Full2016_HIPM_njets_sr_0j_B0.root -d Full2016_HIPM_njets_sr_0j_B0.txt -o output_2016_HIPM_njets_sr_0j_B0_postFit.root --sampling -f ${fit_result} --total-shapes --postfit
PostFitShapesFromWorkspace -w Full2016_HIPM_njets_sr_1j_B0.root -d Full2016_HIPM_njets_sr_1j_B0.txt -o output_2016_HIPM_njets_sr_1j_B0_postFit.root --sampling -f ${fit_result} --total-shapes --postfit
PostFitShapesFromWorkspace -w Full2016_HIPM_njets_sr_2j_B0.root -d Full2016_HIPM_njets_sr_2j_B0.txt -o output_2016_HIPM_njets_sr_2j_B0_postFit.root --sampling -f ${fit_result} --total-shapes --postfit
PostFitShapesFromWorkspace -w Full2016_HIPM_njets_sr_3j_B0.root -d Full2016_HIPM_njets_sr_3j_B0.txt -o output_2016_HIPM_njets_sr_3j_B0_postFit.root --sampling -f ${fit_result} --total-shapes --postfit

PostFitShapesFromWorkspace -w Full2016_noHIPM_njets_sr_0j_B0.root -d Full2016_noHIPM_njets_sr_0j_B0.txt -o output_2016_noHIPM_njets_sr_0j_B0_postFit.root --sampling -f ${fit_result} --total-shapes --postfit
PostFitShapesFromWorkspace -w Full2016_noHIPM_njets_sr_1j_B0.root -d Full2016_noHIPM_njets_sr_1j_B0.txt -o output_2016_noHIPM_njets_sr_1j_B0_postFit.root --sampling -f ${fit_result} --total-shapes --postfit
PostFitShapesFromWorkspace -w Full2016_noHIPM_njets_sr_2j_B0.root -d Full2016_noHIPM_njets_sr_2j_B0.txt -o output_2016_noHIPM_njets_sr_2j_B0_postFit.root --sampling -f ${fit_result} --total-shapes --postfit
PostFitShapesFromWorkspace -w Full2016_noHIPM_njets_sr_3j_B0.root -d Full2016_noHIPM_njets_sr_3j_B0.txt -o output_2016_noHIPM_njets_sr_3j_B0_postFit.root --sampling -f ${fit_result} --total-shapes --postfit

PostFitShapesFromWorkspace -w Full2017_njets_sr_0j_B0.root -d Full2017_njets_sr_0j_B0.txt -o output_2017_njets_sr_0j_B0_postFit.root --sampling -f ${fit_result} --total-shapes --postfit
PostFitShapesFromWorkspace -w Full2017_njets_sr_1j_B0.root -d Full2017_njets_sr_1j_B0.txt -o output_2017_njets_sr_1j_B0_postFit.root --sampling -f ${fit_result} --total-shapes --postfit
PostFitShapesFromWorkspace -w Full2017_njets_sr_2j_B0.root -d Full2017_njets_sr_2j_B0.txt -o output_2017_njets_sr_2j_B0_postFit.root --sampling -f ${fit_result} --total-shapes --postfit
PostFitShapesFromWorkspace -w Full2017_njets_sr_3j_B0.root -d Full2017_njets_sr_3j_B0.txt -o output_2017_njets_sr_3j_B0_postFit.root --sampling -f ${fit_result} --total-shapes --postfit

PostFitShapesFromWorkspace -w Full2018_njets_sr_0j_B0.root -d Full2018_njets_sr_0j_B0.txt -o output_2018_njets_sr_0j_B0_postFit.root --sampling -f ${fit_result} --total-shapes --postfit
PostFitShapesFromWorkspace -w Full2018_njets_sr_1j_B0.root -d Full2018_njets_sr_1j_B0.txt -o output_2018_njets_sr_1j_B0_postFit.root --sampling -f ${fit_result} --total-shapes --postfit
PostFitShapesFromWorkspace -w Full2018_njets_sr_2j_B0.root -d Full2018_njets_sr_2j_B0.txt -o output_2018_njets_sr_2j_B0_postFit.root --sampling -f ${fit_result} --total-shapes --postfit
PostFitShapesFromWorkspace -w Full2018_njets_sr_3j_B0.root -d Full2018_njets_sr_3j_B0.txt -o output_2018_njets_sr_3j_B0_postFit.root --sampling -f ${fit_result} --total-shapes --postfit

PostFitShapesFromWorkspace -w FullRunII_njets_sr_0j_B0.root -d FullRunII_njets_sr_0j_B0.txt -o output_FullRunII_njets_sr_0j_B0_postFit.root --sampling -f ${fit_result} --total-shapes --postfit
PostFitShapesFromWorkspace -w FullRunII_njets_sr_1j_B0.root -d FullRunII_njets_sr_1j_B0.txt -o output_FullRunII_njets_sr_1j_B0_postFit.root --sampling -f ${fit_result} --total-shapes --postfit
PostFitShapesFromWorkspace -w FullRunII_njets_sr_2j_B0.root -d FullRunII_njets_sr_2j_B0.txt -o output_FullRunII_njets_sr_2j_B0_postFit.root --sampling -f ${fit_result} --total-shapes --postfit
PostFitShapesFromWorkspace -w FullRunII_njets_sr_3j_B0.root -d FullRunII_njets_sr_3j_B0.txt -o output_FullRunII_njets_sr_3j_B0_postFit.root --sampling -f ${fit_result} --total-shapes --postfit
