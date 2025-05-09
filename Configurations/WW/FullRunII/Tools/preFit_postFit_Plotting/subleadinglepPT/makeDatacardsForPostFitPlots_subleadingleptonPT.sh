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
#combine -M MultiDimFit --algo singles --setParameters r_0=1,r_1=1,r_2=1,r_3=1,r_4=1,r_5=1,r_6=1 -d FullRunII_subleadinglepPT.root --saveFitResult --X-rtd MINIMIZER_analytic -n WW_FullRunII_subleadinglepPT | tee log_Fit_WW_FullRunII_subleadinglepPT.out

# TODO edit -- this should be <file with fit result>:<fit result>
fit_result=multidimfitWW_FullRunII_subleadinglepPT.root:fit_mdf

# Define the datacards directory
datacardDir_2016_HIPM=datacards_2016_HIPM
datacardDir_2016_noHIPM=datacards_2016_noHIPM
datacardDir_2017=datacards_2017
datacardDir_2018=datacards_2018

YEARS=("2016_HIPM" "2016_noHIPM" "2017" "2018")
JETS=("0j" "1j" "2j")
BINS=("B0" "B1" "B2" "B3" "B4" "B5" "B6")

####################################
### Make combined-year datacards ###
####################################

#combineCards.py ww2l2v_13TeV_2016_HIPM_subleadinglepPT_sr_0j_B0=${datacardDir_2016_HIPM}/ww2l2v_13TeV_sr_0j_B0/BDTOutput_0j/datacard.txt > Full2016_HIPM_subleadinglepPT_sr_0j_B0.txt

for year in "${YEARS[@]}"; do
    for jet in "${JETS[@]}"; do
        for bin in "${BINS[@]}"; do
			echo "Running for Year=${year}, Jet=${jet}, Bin=${bin}"
            combineCards.py ww2l2v_13TeV_${year}_subleadinglepPT_sr_${jet}_${bin}=datacards_${year}/ww2l2v_13TeV_sr_${jet}_${bin}/BDTOutput_${jet}/datacard.txt > Full${year}_subleadinglepPT_sr_${jet}_${bin}.txt

            text2workspace.py Full${year}_subleadinglepPT_sr_${jet}_${bin}.txt -o Full${year}_subleadinglepPT_sr_${jet}_${bin}.root -m 125
        done
    done
done

#combineCards.py ww2l2v_13TeV_2016_HIPM_subleadinglepPT_sr_0j_B0=${datacardDir_2016_HIPM}/ww2l2v_13TeV_sr_0j_B0/BDTOutput_0j/datacard.txt \
#                ww2l2v_13TeV_2016_noHIPM_subleadinglepPT_sr_0j_B0=${datacardDir_2016_noHIPM}/ww2l2v_13TeV_sr_0j_B0/BDTOutput_0j/datacard.txt \
#                ww2l2v_13TeV_2017_subleadinglepPT_sr_0j_B0=${datacardDir_2017}/ww2l2v_13TeV_sr_0j_B0/BDTOutput_0j/datacard.txt \
#                ww2l2v_13TeV_2018_subleadinglepPT_sr_0j_B0=${datacardDir_2018}/ww2l2v_13TeV_sr_0j_B0/BDTOutput_0j/datacard.txt \
#                > FullRunII_subleadinglepPT_sr_0j_B0.txt

for jet in "${JETS[@]}"; do
    for bin in "${BINS[@]}"; do
        combineCards.py ww2l2v_13TeV_2016_HIPM_subleadinglepPT_sr_${jet}_${bin}=datacards_2016_HIPM/ww2l2v_13TeV_sr_${jet}_${bin}/BDTOutput_${jet}/datacard.txt \
        ww2l2v_13TeV_2016_noHIPM_subleadinglepPT_sr_${jet}_${bin}=datacards_2016_noHIPM/ww2l2v_13TeV_sr_${jet}_${bin}/BDTOutput_${jet}/datacard.txt \
        ww2l2v_13TeV_2017_subleadinglepPT_sr_${jet}_${bin}=datacards_2017/ww2l2v_13TeV_sr_${jet}_${bin}/BDTOutput_${jet}/datacard.txt \
        ww2l2v_13TeV_2018_subleadinglepPT_sr_${jet}_${bin}=datacards_2018/ww2l2v_13TeV_sr_${jet}_${bin}/BDTOutput_${jet}/datacard.txt \
        > FullRunII_subleadinglepPT_sr_${jet}_${bin}.txt

       text2workspace.py FullRunII_subleadinglepPT_sr_${jet}_${bin}.txt -o FullRunII_subleadinglepPT_sr_${jet}_${bin}.root -m 125
    done
done	

###############################################################
## Generate postfit total shape from combined-year workspace ##
###############################################################

# This takes the input shapes from the above workspace, morphs them according to the nuisance parameters sampled from the covariance matrix in the fit result, and adds everything together

YEARS+=("FullRunII")

#PostFitShapesFromWorkspace -w FullRunII_subleadinglepPT_sr_0j_B0.root -d FullRunII_subleadinglepPT_sr_0j_B0.txt -o output_FullRunII_subleadinglepPT_sr_0j_B0.root --sampling -f ${fit_result} --total-shapes

for year in "${YEARS[@]}"; do
    for jet in "${JETS[@]}"; do
        for bin in "${BINS[@]}"; do
            echo "Running for Year=${year}, Jet=${jet}, Bin=${bin}"
            if [ "$year" == "FullRunII" ]; then
                PostFitShapesFromWorkspace -w ${year}_subleadinglepPT_sr_${jet}_${bin}.root -d ${year}_subleadinglepPT_sr_${jet}_${bin}.txt -o output_${year}_subleadinglepPT_sr_${jet}_${bin}.root --sampling -f ${fit_result} --total-shapes    
            else
                PostFitShapesFromWorkspace -w Full${year}_subleadinglepPT_sr_${jet}_${bin}.root -d Full${year}_subleadinglepPT_sr_${jet}_${bin}.txt -o output_${year}_subleadinglepPT_sr_${jet}_${bin}.root --sampling -f ${fit_result} --total-shapes
            fi
        done
    done
done

############################################
## To include postfit, add --postfit flag ##
############################################

#PostFitShapesFromWorkspace -w FullRunII_subleadinglepPT_sr_2j_B7.root -d FullRunII_subleadinglepPT_sr_2j_B7.txt -o output_FullRunII_subleadinglepPT_sr_2j_B7_postFit.root --sampling -f ${fit_result} --total-shapes --postfit

for year in "${YEARS[@]}"; do
    for jet in "${JETS[@]}"; do
        for bin in "${BINS[@]}"; do
            echo "Running for Year=${year}, Jet=${jet}, Bin=${bin}"
            if [ "$year" == "FullRunII" ]; then
                PostFitShapesFromWorkspace -w ${year}_subleadinglepPT_sr_${jet}_${bin}.root -d ${year}_subleadinglepPT_sr_${jet}_${bin}.txt -o output_${year}_subleadinglepPT_sr_${jet}_${bin}_postFit.root --sampling -f ${fit_result} --total-shapes --postfit
            else
                PostFitShapesFromWorkspace -w Full${year}_subleadinglepPT_sr_${jet}_${bin}.root -d Full${year}_subleadinglepPT_sr_${jet}_${bin}.txt -o output_${year}_subleadinglepPT_sr_${jet}_${bin}_postFit.root --sampling -f ${fit_result} --total-shapes --postfit
            fi
        done
    done
done
