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
#combine -M MultiDimFit --algo singles --setParameters r_0=1,r_1=1,r_2=1,r_3=1 -d FullRunII_njet.root --saveFitResult --X-rtd MINIMIZER_analytic -n WW_FullRunII_leadinglepPT | tee log_Fit_WW_DF_leadinglepPT.out

# TODO edit -- this should be <file with fit result>:<fit result>
fit_result=multidimfitWW_FullRunII_leadinglepPT.root:fit_mdf

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

#combineCards.py ww2l2v_13TeV_2016_HIPM_leadinglepPT_sr_0j_B0=${datacardDir_2016_HIPM}/ww2l2v_13TeV_sr_0j_B0/BDTOutput_0j/datacard.txt > Full2016_HIPM_leadinglepPT_sr_0j_B0.txt

for year in "${YEARS[@]}"; do
    for jet in "${JETS[@]}"; do
        for bin in "${BINS[@]}"; do
            echo "Running for Year=${year}, Jet=${jet}, Bin=${bin}"
            combineCards.py ww2l2v_13TeV_${year}_leadinglepPT_sr_${jet}_${bin}=datacards_${year}/ww2l2v_13TeV_sr_${jet}_${bin}/BDTOutput_${jet}/datacard.txt > Full${year}_subleadinglepPT_sr_${jet}_${bin}.txt
            text2workspace.py Full${year}_subleadinglepPT_sr_${jet}_${bin}.txt -o Full{$year}_subleadinglepPT_sr_${jet}_${bin}.root -m 125
        done
    done
done


combineCards.py ww2l2v_13TeV_2016_HIPM_leadinglepPT_sr_0j_B0=${datacardDir_2016_HIPM}/ww2l2v_13TeV_sr_0j_B0/BDTOutput_0j/datacard.txt \
                ww2l2v_13TeV_2016_noHIPM_leadinglepPT_sr_0j_B0=${datacardDir_2016_noHIPM}/ww2l2v_13TeV_sr_0j_B0/BDTOutput_0j/datacard.txt \
                ww2l2v_13TeV_2017_leadinglepPT_sr_0j_B0=${datacardDir_2017}/ww2l2v_13TeV_sr_0j_B0/BDTOutput_0j/datacard.txt \
                ww2l2v_13TeV_2018_bjets_sr_0j_B0=${datacardDir_2018}/ww2l2v_13TeV_sr_0j_B0/BDTOutput_0j/datacard.txt \
                > FullRunII_leadinglepPT_sr_0j_B0.txt

combineCards.py ww2l2v_13TeV_2016_HIPM_leadinglepPT_sr_0j_B1=${datacardDir_2016_HIPM}/ww2l2v_13TeV_sr_0j_B1/BDTOutput_0j/datacard.txt \
                ww2l2v_13TeV_2016_noHIPM_leadinglepPT_sr_0j_B1=${datacardDir_2016_noHIPM}/ww2l2v_13TeV_sr_0j_B1/BDTOutput_0j/datacard.txt \
                ww2l2v_13TeV_2017_leadinglepPT_sr_0j_B1=${datacardDir_2017}/ww2l2v_13TeV_sr_0j_B1/BDTOutput_0j/datacard.txt \
                ww2l2v_13TeV_2018_bjets_sr_0j_B1=${datacardDir_2018}/ww2l2v_13TeV_sr_0j_B1/BDTOutput_0j/datacard.txt \
                > FullRunII_leadinglepPT_sr_0j_B1.txt

combineCards.py ww2l2v_13TeV_2016_HIPM_leadinglepPT_sr_0j_B2=${datacardDir_2016_HIPM}/ww2l2v_13TeV_sr_0j_B2/BDTOutput_0j/datacard.txt \
                ww2l2v_13TeV_2016_noHIPM_leadinglepPT_sr_0j_B2=${datacardDir_2016_noHIPM}/ww2l2v_13TeV_sr_0j_B2/BDTOutput_0j/datacard.txt \
                ww2l2v_13TeV_2017_leadinglepPT_sr_0j_B2=${datacardDir_2017}/ww2l2v_13TeV_sr_0j_B2/BDTOutput_0j/datacard.txt \
                ww2l2v_13TeV_2018_bjets_sr_0j_B2=${datacardDir_2018}/ww2l2v_13TeV_sr_0j_B2/BDTOutput_0j/datacard.txt \
                > FullRunII_leadinglepPT_sr_0j_B2.txt

combineCards.py ww2l2v_13TeV_2016_HIPM_leadinglepPT_sr_0j_B3=${datacardDir_2016_HIPM}/ww2l2v_13TeV_sr_0j_B3/BDTOutput_0j/datacard.txt \
                ww2l2v_13TeV_2016_noHIPM_leadinglepPT_sr_0j_B3=${datacardDir_2016_noHIPM}/ww2l2v_13TeV_sr_0j_B3/BDTOutput_0j/datacard.txt \
                ww2l2v_13TeV_2017_leadinglepPT_sr_0j_B3=${datacardDir_2017}/ww2l2v_13TeV_sr_0j_B3/BDTOutput_0j/datacard.txt \
                ww2l2v_13TeV_2018_bjets_sr_0j_B3=${datacardDir_2018}/ww2l2v_13TeV_sr_0j_B3/BDTOutput_0j/datacard.txt \
                > FullRunII_leadinglepPT_sr_0j_B3.txt

combineCards.py ww2l2v_13TeV_2016_HIPM_leadinglepPT_sr_0j_B4=${datacardDir_2016_HIPM}/ww2l2v_13TeV_sr_0j_B4/BDTOutput_0j/datacard.txt \
                ww2l2v_13TeV_2016_noHIPM_leadinglepPT_sr_0j_B4=${datacardDir_2016_noHIPM}/ww2l2v_13TeV_sr_0j_B4/BDTOutput_0j/datacard.txt \
                ww2l2v_13TeV_2017_leadinglepPT_sr_0j_B4=${datacardDir_2017}/ww2l2v_13TeV_sr_0j_B4/BDTOutput_0j/datacard.txt \
                ww2l2v_13TeV_2018_bjets_sr_0j_B4=${datacardDir_2018}/ww2l2v_13TeV_sr_0j_B4/BDTOutput_0j/datacard.txt \
                > FullRunII_leadinglepPT_sr_0j_B4.txt

combineCards.py ww2l2v_13TeV_2016_HIPM_leadinglepPT_sr_0j_B5=${datacardDir_2016_HIPM}/ww2l2v_13TeV_sr_0j_B5/BDTOutput_0j/datacard.txt \
                ww2l2v_13TeV_2016_noHIPM_leadinglepPT_sr_0j_B5=${datacardDir_2016_noHIPM}/ww2l2v_13TeV_sr_0j_B5/BDTOutput_0j/datacard.txt \
                ww2l2v_13TeV_2017_leadinglepPT_sr_0j_B5=${datacardDir_2017}/ww2l2v_13TeV_sr_0j_B5/BDTOutput_0j/datacard.txt \
                ww2l2v_13TeV_2018_bjets_sr_0j_B5=${datacardDir_2018}/ww2l2v_13TeV_sr_0j_B5/BDTOutput_0j/datacard.txt \
                > FullRunII_leadinglepPT_sr_0j_B5.txt

combineCards.py ww2l2v_13TeV_2016_HIPM_leadinglepPT_sr_0j_B6=${datacardDir_2016_HIPM}/ww2l2v_13TeV_sr_0j_B6/BDTOutput_0j/datacard.txt \
                ww2l2v_13TeV_2016_noHIPM_leadinglepPT_sr_0j_B6=${datacardDir_2016_noHIPM}/ww2l2v_13TeV_sr_0j_B6/BDTOutput_0j/datacard.txt \
                ww2l2v_13TeV_2017_leadinglepPT_sr_0j_B6=${datacardDir_2017}/ww2l2v_13TeV_sr_0j_B6/BDTOutput_0j/datacard.txt \
                ww2l2v_13TeV_2018_bjets_sr_0j_B6=${datacardDir_2018}/ww2l2v_13TeV_sr_0j_B6/BDTOutput_0j/datacard.txt \
                > FullRunII_leadinglepPT_sr_0j_B6.txt

combineCards.py ww2l2v_13TeV_2016_HIPM_leadinglepPT_sr_0j_B7=${datacardDir_2016_HIPM}/ww2l2v_13TeV_sr_0j_B7/BDTOutput_0j/datacard.txt \
                ww2l2v_13TeV_2016_noHIPM_leadinglepPT_sr_0j_B7=${datacardDir_2016_noHIPM}/ww2l2v_13TeV_sr_0j_B7/BDTOutput_0j/datacard.txt \
                ww2l2v_13TeV_2017_leadinglepPT_sr_0j_B7=${datacardDir_2017}/ww2l2v_13TeV_sr_0j_B7/BDTOutput_0j/datacard.txt \
                ww2l2v_13TeV_2018_bjets_sr_0j_B7=${datacardDir_2018}/ww2l2v_13TeV_sr_0j_B7/BDTOutput_0j/datacard.txt \
                > FullRunII_leadinglepPT_sr_0j_B7.txt

combineCards.py ww2l2v_13TeV_2016_HIPM_leadinglepPT_sr_1j_B0=${datacardDir_2016_HIPM}/ww2l2v_13TeV_sr_1j_B0/BDTOutput_1j/datacard.txt \
                ww2l2v_13TeV_2016_noHIPM_leadinglepPT_sr_1j_B0=${datacardDir_2016_noHIPM}/ww2l2v_13TeV_sr_1j_B0/BDTOutput_1j/datacard.txt \
                ww2l2v_13TeV_2017_leadinglepPT_sr_1j_B0=${datacardDir_2017}/ww2l2v_13TeV_sr_1j_B0/BDTOutput_1j/datacard.txt \
                ww2l2v_13TeV_2018_bjets_sr_1j_B0=${datacardDir_2018}/ww2l2v_13TeV_sr_1j_B0/BDTOutput_1j/datacard.txt \
                > FullRunII_leadinglepPT_sr_1j_B0.txt

combineCards.py ww2l2v_13TeV_2016_HIPM_leadinglepPT_sr_1j_B1=${datacardDir_2016_HIPM}/ww2l2v_13TeV_sr_1j_B1/BDTOutput_1j/datacard.txt \
                ww2l2v_13TeV_2016_noHIPM_leadinglepPT_sr_1j_B1=${datacardDir_2016_noHIPM}/ww2l2v_13TeV_sr_1j_B1/BDTOutput_1j/datacard.txt \
                ww2l2v_13TeV_2017_leadinglepPT_sr_1j_B1=${datacardDir_2017}/ww2l2v_13TeV_sr_1j_B1/BDTOutput_1j/datacard.txt \
                ww2l2v_13TeV_2018_bjets_sr_1j_B1=${datacardDir_2018}/ww2l2v_13TeV_sr_1j_B1/BDTOutput_1j/datacard.txt \
                > FullRunII_leadinglepPT_sr_1j_B1.txt

combineCards.py ww2l2v_13TeV_2016_HIPM_leadinglepPT_sr_1j_B2=${datacardDir_2016_HIPM}/ww2l2v_13TeV_sr_1j_B2/BDTOutput_1j/datacard.txt \
                ww2l2v_13TeV_2016_noHIPM_leadinglepPT_sr_1j_B2=${datacardDir_2016_noHIPM}/ww2l2v_13TeV_sr_1j_B2/BDTOutput_1j/datacard.txt \
                ww2l2v_13TeV_2017_leadinglepPT_sr_1j_B2=${datacardDir_2017}/ww2l2v_13TeV_sr_1j_B2/BDTOutput_1j/datacard.txt \
                ww2l2v_13TeV_2018_bjets_sr_1j_B2=${datacardDir_2018}/ww2l2v_13TeV_sr_1j_B2/BDTOutput_1j/datacard.txt \
                > FullRunII_leadinglepPT_sr_1j_B2.txt

combineCards.py ww2l2v_13TeV_2016_HIPM_leadinglepPT_sr_1j_B3=${datacardDir_2016_HIPM}/ww2l2v_13TeV_sr_1j_B3/BDTOutput_1j/datacard.txt \
                ww2l2v_13TeV_2016_noHIPM_leadinglepPT_sr_1j_B3=${datacardDir_2016_noHIPM}/ww2l2v_13TeV_sr_1j_B3/BDTOutput_1j/datacard.txt \
                ww2l2v_13TeV_2017_leadinglepPT_sr_1j_B3=${datacardDir_2017}/ww2l2v_13TeV_sr_1j_B3/BDTOutput_1j/datacard.txt \
                ww2l2v_13TeV_2018_bjets_sr_1j_B3=${datacardDir_2018}/ww2l2v_13TeV_sr_1j_B3/BDTOutput_1j/datacard.txt \
                > FullRunII_leadinglepPT_sr_1j_B3.txt

combineCards.py ww2l2v_13TeV_2016_HIPM_leadinglepPT_sr_1j_B4=${datacardDir_2016_HIPM}/ww2l2v_13TeV_sr_1j_B4/BDTOutput_1j/datacard.txt \
                ww2l2v_13TeV_2016_noHIPM_leadinglepPT_sr_1j_B4=${datacardDir_2016_noHIPM}/ww2l2v_13TeV_sr_1j_B4/BDTOutput_1j/datacard.txt \
                ww2l2v_13TeV_2017_leadinglepPT_sr_1j_B4=${datacardDir_2017}/ww2l2v_13TeV_sr_1j_B4/BDTOutput_1j/datacard.txt \
                ww2l2v_13TeV_2018_bjets_sr_1j_B4=${datacardDir_2018}/ww2l2v_13TeV_sr_1j_B4/BDTOutput_1j/datacard.txt \
                > FullRunII_leadinglepPT_sr_1j_B4.txt

combineCards.py ww2l2v_13TeV_2016_HIPM_leadinglepPT_sr_1j_B5=${datacardDir_2016_HIPM}/ww2l2v_13TeV_sr_1j_B5/BDTOutput_1j/datacard.txt \
                ww2l2v_13TeV_2016_noHIPM_leadinglepPT_sr_1j_B5=${datacardDir_2016_noHIPM}/ww2l2v_13TeV_sr_1j_B5/BDTOutput_1j/datacard.txt \
                ww2l2v_13TeV_2017_leadinglepPT_sr_1j_B5=${datacardDir_2017}/ww2l2v_13TeV_sr_1j_B5/BDTOutput_1j/datacard.txt \
                ww2l2v_13TeV_2018_bjets_sr_1j_B5=${datacardDir_2018}/ww2l2v_13TeV_sr_1j_B5/BDTOutput_1j/datacard.txt \
                > FullRunII_leadinglepPT_sr_1j_B5.txt

combineCards.py ww2l2v_13TeV_2016_HIPM_leadinglepPT_sr_1j_B6=${datacardDir_2016_HIPM}/ww2l2v_13TeV_sr_1j_B6/BDTOutput_1j/datacard.txt \
                ww2l2v_13TeV_2016_noHIPM_leadinglepPT_sr_1j_B6=${datacardDir_2016_noHIPM}/ww2l2v_13TeV_sr_1j_B6/BDTOutput_1j/datacard.txt \
                ww2l2v_13TeV_2017_leadinglepPT_sr_1j_B6=${datacardDir_2017}/ww2l2v_13TeV_sr_1j_B6/BDTOutput_1j/datacard.txt \
                ww2l2v_13TeV_2018_bjets_sr_1j_B6=${datacardDir_2018}/ww2l2v_13TeV_sr_1j_B6/BDTOutput_1j/datacard.txt \
                > FullRunII_leadinglepPT_sr_1j_B6.txt

combineCards.py ww2l2v_13TeV_2016_HIPM_leadinglepPT_sr_1j_B7=${datacardDir_2016_HIPM}/ww2l2v_13TeV_sr_1j_B7/BDTOutput_1j/datacard.txt \
                ww2l2v_13TeV_2016_noHIPM_leadinglepPT_sr_1j_B7=${datacardDir_2016_noHIPM}/ww2l2v_13TeV_sr_1j_B7/BDTOutput_1j/datacard.txt \
                ww2l2v_13TeV_2017_leadinglepPT_sr_1j_B7=${datacardDir_2017}/ww2l2v_13TeV_sr_1j_B7/BDTOutput_1j/datacard.txt \
                ww2l2v_13TeV_2018_bjets_sr_1j_B7=${datacardDir_2018}/ww2l2v_13TeV_sr_1j_B7/BDTOutput_1j/datacard.txt \
                > FullRunII_leadinglepPT_sr_1j_B7.txt

combineCards.py ww2l2v_13TeV_2016_HIPM_leadinglepPT_sr_2j_B0=${datacardDir_2016_HIPM}/ww2l2v_13TeV_sr_2j_B0/BDTOutput_2j/datacard.txt \
                ww2l2v_13TeV_2016_noHIPM_leadinglepPT_sr_2j_B0=${datacardDir_2016_noHIPM}/ww2l2v_13TeV_sr_2j_B0/BDTOutput_2j/datacard.txt \
                ww2l2v_13TeV_2017_leadinglepPT_sr_2j_B0=${datacardDir_2017}/ww2l2v_13TeV_sr_2j_B0/BDTOutput_2j/datacard.txt \
                ww2l2v_13TeV_2018_bjets_sr_2j_B0=${datacardDir_2018}/ww2l2v_13TeV_sr_2j_B0/BDTOutput_2j/datacard.txt \
                > FullRunII_leadinglepPT_sr_2j_B0.txt

combineCards.py ww2l2v_13TeV_2016_HIPM_leadinglepPT_sr_2j_B1=${datacardDir_2016_HIPM}/ww2l2v_13TeV_sr_2j_B1/BDTOutput_2j/datacard.txt \
                ww2l2v_13TeV_2016_noHIPM_leadinglepPT_sr_2j_B1=${datacardDir_2016_noHIPM}/ww2l2v_13TeV_sr_2j_B1/BDTOutput_2j/datacard.txt \
                ww2l2v_13TeV_2017_leadinglepPT_sr_2j_B1=${datacardDir_2017}/ww2l2v_13TeV_sr_2j_B1/BDTOutput_2j/datacard.txt \
                ww2l2v_13TeV_2018_bjets_sr_2j_B1=${datacardDir_2018}/ww2l2v_13TeV_sr_2j_B1/BDTOutput_2j/datacard.txt \
                > FullRunII_leadinglepPT_sr_2j_B1.txt

combineCards.py ww2l2v_13TeV_2016_HIPM_leadinglepPT_sr_2j_B2=${datacardDir_2016_HIPM}/ww2l2v_13TeV_sr_2j_B2/BDTOutput_2j/datacard.txt \
                ww2l2v_13TeV_2016_noHIPM_leadinglepPT_sr_2j_B2=${datacardDir_2016_noHIPM}/ww2l2v_13TeV_sr_2j_B2/BDTOutput_2j/datacard.txt \
                ww2l2v_13TeV_2017_leadinglepPT_sr_2j_B2=${datacardDir_2017}/ww2l2v_13TeV_sr_2j_B2/BDTOutput_2j/datacard.txt \
                ww2l2v_13TeV_2018_bjets_sr_2j_B2=${datacardDir_2018}/ww2l2v_13TeV_sr_2j_B2/BDTOutput_2j/datacard.txt \
                > FullRunII_leadinglepPT_sr_2j_B2.txt

combineCards.py ww2l2v_13TeV_2016_HIPM_leadinglepPT_sr_2j_B3=${datacardDir_2016_HIPM}/ww2l2v_13TeV_sr_2j_B3/BDTOutput_2j/datacard.txt \
                ww2l2v_13TeV_2016_noHIPM_leadinglepPT_sr_2j_B3=${datacardDir_2016_noHIPM}/ww2l2v_13TeV_sr_2j_B3/BDTOutput_2j/datacard.txt \
                ww2l2v_13TeV_2017_leadinglepPT_sr_2j_B3=${datacardDir_2017}/ww2l2v_13TeV_sr_2j_B3/BDTOutput_2j/datacard.txt \
                ww2l2v_13TeV_2018_bjets_sr_2j_B3=${datacardDir_2018}/ww2l2v_13TeV_sr_2j_B3/BDTOutput_2j/datacard.txt \
                > FullRunII_leadinglepPT_sr_2j_B3.txt

combineCards.py ww2l2v_13TeV_2016_HIPM_leadinglepPT_sr_2j_B4=${datacardDir_2016_HIPM}/ww2l2v_13TeV_sr_2j_B4/BDTOutput_2j/datacard.txt \
                ww2l2v_13TeV_2016_noHIPM_leadinglepPT_sr_2j_B4=${datacardDir_2016_noHIPM}/ww2l2v_13TeV_sr_2j_B4/BDTOutput_2j/datacard.txt \
                ww2l2v_13TeV_2017_leadinglepPT_sr_2j_B4=${datacardDir_2017}/ww2l2v_13TeV_sr_2j_B4/BDTOutput_2j/datacard.txt \
                ww2l2v_13TeV_2018_bjets_sr_2j_B4=${datacardDir_2018}/ww2l2v_13TeV_sr_2j_B4/BDTOutput_2j/datacard.txt \
                > FullRunII_leadinglepPT_sr_2j_B4.txt

combineCards.py ww2l2v_13TeV_2016_HIPM_leadinglepPT_sr_2j_B5=${datacardDir_2016_HIPM}/ww2l2v_13TeV_sr_2j_B5/BDTOutput_2j/datacard.txt \
                ww2l2v_13TeV_2016_noHIPM_leadinglepPT_sr_2j_B5=${datacardDir_2016_noHIPM}/ww2l2v_13TeV_sr_2j_B5/BDTOutput_2j/datacard.txt \
                ww2l2v_13TeV_2017_leadinglepPT_sr_2j_B5=${datacardDir_2017}/ww2l2v_13TeV_sr_2j_B5/BDTOutput_2j/datacard.txt \
                ww2l2v_13TeV_2018_bjets_sr_2j_B5=${datacardDir_2018}/ww2l2v_13TeV_sr_2j_B5/BDTOutput_2j/datacard.txt \
                > FullRunII_leadinglepPT_sr_2j_B5.txt

combineCards.py ww2l2v_13TeV_2016_HIPM_leadinglepPT_sr_2j_B6=${datacardDir_2016_HIPM}/ww2l2v_13TeV_sr_2j_B6/BDTOutput_2j/datacard.txt \
                ww2l2v_13TeV_2016_noHIPM_leadinglepPT_sr_2j_B6=${datacardDir_2016_noHIPM}/ww2l2v_13TeV_sr_2j_B6/BDTOutput_2j/datacard.txt \
                ww2l2v_13TeV_2017_leadinglepPT_sr_2j_B6=${datacardDir_2017}/ww2l2v_13TeV_sr_2j_B6/BDTOutput_2j/datacard.txt \
                ww2l2v_13TeV_2018_bjets_sr_2j_B6=${datacardDir_2018}/ww2l2v_13TeV_sr_2j_B6/BDTOutput_2j/datacard.txt \
                > FullRunII_leadinglepPT_sr_2j_B6.txt

combineCards.py ww2l2v_13TeV_2016_HIPM_leadinglepPT_sr_2j_B7=${datacardDir_2016_HIPM}/ww2l2v_13TeV_sr_2j_B7/BDTOutput_2j/datacard.txt \
                ww2l2v_13TeV_2016_noHIPM_leadinglepPT_sr_2j_B7=${datacardDir_2016_noHIPM}/ww2l2v_13TeV_sr_2j_B7/BDTOutput_2j/datacard.txt \
                ww2l2v_13TeV_2017_leadinglepPT_sr_2j_B7=${datacardDir_2017}/ww2l2v_13TeV_sr_2j_B7/BDTOutput_2j/datacard.txt \
                ww2l2v_13TeV_2018_bjets_sr_2j_B7=${datacardDir_2018}/ww2l2v_13TeV_sr_2j_B7/BDTOutput_2j/datacard.txt \
                > FullRunII_leadinglepPT_sr_2j_B7.txt

###############################################
## Convert to workspaces, you will need both ##
###############################################

text2workspace.py Full2016_HIPM_leadinglepPT_sr_0j_B0.txt -o Full2016_HIPM_leadinglepPT_sr_0j_B0.root -m 125
text2workspace.py Full2016_HIPM_leadinglepPT_sr_0j_B1.txt -o Full2016_HIPM_leadinglepPT_sr_0j_B1.root -m 125
text2workspace.py Full2016_HIPM_leadinglepPT_sr_0j_B2.txt -o Full2016_HIPM_leadinglepPT_sr_0j_B2.root -m 125
text2workspace.py Full2016_HIPM_leadinglepPT_sr_0j_B3.txt -o Full2016_HIPM_leadinglepPT_sr_0j_B3.root -m 125
text2workspace.py Full2016_HIPM_leadinglepPT_sr_0j_B4.txt -o Full2016_HIPM_leadinglepPT_sr_0j_B4.root -m 125
text2workspace.py Full2016_HIPM_leadinglepPT_sr_0j_B5.txt -o Full2016_HIPM_leadinglepPT_sr_0j_B5.root -m 125
text2workspace.py Full2016_HIPM_leadinglepPT_sr_0j_B6.txt -o Full2016_HIPM_leadinglepPT_sr_0j_B6.root -m 125
text2workspace.py Full2016_HIPM_leadinglepPT_sr_0j_B7.txt -o Full2016_HIPM_leadinglepPT_sr_0j_B7.root -m 125

text2workspace.py Full2016_HIPM_leadinglepPT_sr_1j_B0.txt -o Full2016_HIPM_leadinglepPT_sr_1j_B0.root -m 125
text2workspace.py Full2016_HIPM_leadinglepPT_sr_1j_B1.txt -o Full2016_HIPM_leadinglepPT_sr_1j_B1.root -m 125
text2workspace.py Full2016_HIPM_leadinglepPT_sr_1j_B2.txt -o Full2016_HIPM_leadinglepPT_sr_1j_B2.root -m 125
text2workspace.py Full2016_HIPM_leadinglepPT_sr_1j_B3.txt -o Full2016_HIPM_leadinglepPT_sr_1j_B3.root -m 125
text2workspace.py Full2016_HIPM_leadinglepPT_sr_1j_B4.txt -o Full2016_HIPM_leadinglepPT_sr_1j_B4.root -m 125
text2workspace.py Full2016_HIPM_leadinglepPT_sr_1j_B5.txt -o Full2016_HIPM_leadinglepPT_sr_1j_B5.root -m 125
text2workspace.py Full2016_HIPM_leadinglepPT_sr_1j_B6.txt -o Full2016_HIPM_leadinglepPT_sr_1j_B6.root -m 125
text2workspace.py Full2016_HIPM_leadinglepPT_sr_1j_B7.txt -o Full2016_HIPM_leadinglepPT_sr_1j_B7.root -m 125

text2workspace.py Full2016_HIPM_leadinglepPT_sr_2j_B0.txt -o Full2016_HIPM_leadinglepPT_sr_2j_B0.root -m 125
text2workspace.py Full2016_HIPM_leadinglepPT_sr_2j_B1.txt -o Full2016_HIPM_leadinglepPT_sr_2j_B1.root -m 125
text2workspace.py Full2016_HIPM_leadinglepPT_sr_2j_B2.txt -o Full2016_HIPM_leadinglepPT_sr_2j_B2.root -m 125
text2workspace.py Full2016_HIPM_leadinglepPT_sr_2j_B3.txt -o Full2016_HIPM_leadinglepPT_sr_2j_B3.root -m 125
text2workspace.py Full2016_HIPM_leadinglepPT_sr_2j_B4.txt -o Full2016_HIPM_leadinglepPT_sr_2j_B4.root -m 125
text2workspace.py Full2016_HIPM_leadinglepPT_sr_2j_B5.txt -o Full2016_HIPM_leadinglepPT_sr_2j_B5.root -m 125
text2workspace.py Full2016_HIPM_leadinglepPT_sr_2j_B6.txt -o Full2016_HIPM_leadinglepPT_sr_2j_B6.root -m 125
text2workspace.py Full2016_HIPM_leadinglepPT_sr_2j_B7.txt -o Full2016_HIPM_leadinglepPT_sr_2j_B7.root -m 125


text2workspace.py Full2016_noHIPM_leadinglepPT_sr_0j_B0.txt -o Full2016_noHIPM_leadinglepPT_sr_0j_B0.root -m 125
text2workspace.py Full2016_noHIPM_leadinglepPT_sr_0j_B1.txt -o Full2016_noHIPM_leadinglepPT_sr_0j_B1.root -m 125
text2workspace.py Full2016_noHIPM_leadinglepPT_sr_0j_B2.txt -o Full2016_noHIPM_leadinglepPT_sr_0j_B2.root -m 125
text2workspace.py Full2016_noHIPM_leadinglepPT_sr_0j_B3.txt -o Full2016_noHIPM_leadinglepPT_sr_0j_B3.root -m 125
text2workspace.py Full2016_noHIPM_leadinglepPT_sr_0j_B4.txt -o Full2016_noHIPM_leadinglepPT_sr_0j_B4.root -m 125
text2workspace.py Full2016_noHIPM_leadinglepPT_sr_0j_B5.txt -o Full2016_noHIPM_leadinglepPT_sr_0j_B5.root -m 125
text2workspace.py Full2016_noHIPM_leadinglepPT_sr_0j_B6.txt -o Full2016_noHIPM_leadinglepPT_sr_0j_B6.root -m 125
text2workspace.py Full2016_noHIPM_leadinglepPT_sr_0j_B7.txt -o Full2016_noHIPM_leadinglepPT_sr_0j_B7.root -m 125

text2workspace.py Full2016_noHIPM_leadinglepPT_sr_1j_B0.txt -o Full2016_noHIPM_leadinglepPT_sr_1j_B0.root -m 125
text2workspace.py Full2016_noHIPM_leadinglepPT_sr_1j_B1.txt -o Full2016_noHIPM_leadinglepPT_sr_1j_B1.root -m 125
text2workspace.py Full2016_noHIPM_leadinglepPT_sr_1j_B2.txt -o Full2016_noHIPM_leadinglepPT_sr_1j_B2.root -m 125
text2workspace.py Full2016_noHIPM_leadinglepPT_sr_1j_B3.txt -o Full2016_noHIPM_leadinglepPT_sr_1j_B3.root -m 125
text2workspace.py Full2016_noHIPM_leadinglepPT_sr_1j_B4.txt -o Full2016_noHIPM_leadinglepPT_sr_1j_B4.root -m 125
text2workspace.py Full2016_noHIPM_leadinglepPT_sr_1j_B5.txt -o Full2016_noHIPM_leadinglepPT_sr_1j_B5.root -m 125
text2workspace.py Full2016_noHIPM_leadinglepPT_sr_1j_B6.txt -o Full2016_noHIPM_leadinglepPT_sr_1j_B6.root -m 125
text2workspace.py Full2016_noHIPM_leadinglepPT_sr_1j_B7.txt -o Full2016_noHIPM_leadinglepPT_sr_1j_B7.root -m 125

text2workspace.py Full2016_noHIPM_leadinglepPT_sr_2j_B0.txt -o Full2016_noHIPM_leadinglepPT_sr_2j_B0.root -m 125
text2workspace.py Full2016_noHIPM_leadinglepPT_sr_2j_B1.txt -o Full2016_noHIPM_leadinglepPT_sr_2j_B1.root -m 125
text2workspace.py Full2016_noHIPM_leadinglepPT_sr_2j_B2.txt -o Full2016_noHIPM_leadinglepPT_sr_2j_B2.root -m 125
text2workspace.py Full2016_noHIPM_leadinglepPT_sr_2j_B3.txt -o Full2016_noHIPM_leadinglepPT_sr_2j_B3.root -m 125
text2workspace.py Full2016_noHIPM_leadinglepPT_sr_2j_B4.txt -o Full2016_noHIPM_leadinglepPT_sr_2j_B4.root -m 125
text2workspace.py Full2016_noHIPM_leadinglepPT_sr_2j_B5.txt -o Full2016_noHIPM_leadinglepPT_sr_2j_B5.root -m 125
text2workspace.py Full2016_noHIPM_leadinglepPT_sr_2j_B6.txt -o Full2016_noHIPM_leadinglepPT_sr_2j_B6.root -m 125
text2workspace.py Full2016_noHIPM_leadinglepPT_sr_2j_B7.txt -o Full2016_noHIPM_leadinglepPT_sr_2j_B7.root -m 125


text2workspace.py Full2017_leadinglepPT_sr_0j_B0.txt -o Full2017_leadinglepPT_sr_0j_B0.root -m 125
text2workspace.py Full2017_leadinglepPT_sr_0j_B1.txt -o Full2017_leadinglepPT_sr_0j_B1.root -m 125
text2workspace.py Full2017_leadinglepPT_sr_0j_B2.txt -o Full2017_leadinglepPT_sr_0j_B2.root -m 125
text2workspace.py Full2017_leadinglepPT_sr_0j_B3.txt -o Full2017_leadinglepPT_sr_0j_B3.root -m 125
text2workspace.py Full2017_leadinglepPT_sr_0j_B4.txt -o Full2017_leadinglepPT_sr_0j_B4.root -m 125
text2workspace.py Full2017_leadinglepPT_sr_0j_B5.txt -o Full2017_leadinglepPT_sr_0j_B5.root -m 125
text2workspace.py Full2017_leadinglepPT_sr_0j_B6.txt -o Full2017_leadinglepPT_sr_0j_B6.root -m 125
text2workspace.py Full2017_leadinglepPT_sr_0j_B7.txt -o Full2017_leadinglepPT_sr_0j_B7.root -m 125

text2workspace.py Full2017_leadinglepPT_sr_1j_B0.txt -o Full2017_leadinglepPT_sr_1j_B0.root -m 125
text2workspace.py Full2017_leadinglepPT_sr_1j_B1.txt -o Full2017_leadinglepPT_sr_1j_B1.root -m 125
text2workspace.py Full2017_leadinglepPT_sr_1j_B2.txt -o Full2017_leadinglepPT_sr_1j_B2.root -m 125
text2workspace.py Full2017_leadinglepPT_sr_1j_B3.txt -o Full2017_leadinglepPT_sr_1j_B3.root -m 125
text2workspace.py Full2017_leadinglepPT_sr_1j_B4.txt -o Full2017_leadinglepPT_sr_1j_B4.root -m 125
text2workspace.py Full2017_leadinglepPT_sr_1j_B5.txt -o Full2017_leadinglepPT_sr_1j_B5.root -m 125
text2workspace.py Full2017_leadinglepPT_sr_1j_B6.txt -o Full2017_leadinglepPT_sr_1j_B6.root -m 125
text2workspace.py Full2017_leadinglepPT_sr_1j_B7.txt -o Full2017_leadinglepPT_sr_1j_B7.root -m 125

text2workspace.py Full2017_leadinglepPT_sr_2j_B0.txt -o Full2017_leadinglepPT_sr_2j_B0.root -m 125
text2workspace.py Full2017_leadinglepPT_sr_2j_B1.txt -o Full2017_leadinglepPT_sr_2j_B1.root -m 125
text2workspace.py Full2017_leadinglepPT_sr_2j_B2.txt -o Full2017_leadinglepPT_sr_2j_B2.root -m 125
text2workspace.py Full2017_leadinglepPT_sr_2j_B3.txt -o Full2017_leadinglepPT_sr_2j_B3.root -m 125
text2workspace.py Full2017_leadinglepPT_sr_2j_B4.txt -o Full2017_leadinglepPT_sr_2j_B4.root -m 125
text2workspace.py Full2017_leadinglepPT_sr_2j_B5.txt -o Full2017_leadinglepPT_sr_2j_B5.root -m 125
text2workspace.py Full2017_leadinglepPT_sr_2j_B6.txt -o Full2017_leadinglepPT_sr_2j_B6.root -m 125
text2workspace.py Full2017_leadinglepPT_sr_2j_B7.txt -o Full2017_leadinglepPT_sr_2j_B7.root -m 125


text2workspace.py Full2018_leadinglepPT_sr_0j_B0.txt -o Full2018_leadinglepPT_sr_0j_B0.root -m 125
text2workspace.py Full2018_leadinglepPT_sr_0j_B1.txt -o Full2018_leadinglepPT_sr_0j_B1.root -m 125
text2workspace.py Full2018_leadinglepPT_sr_0j_B2.txt -o Full2018_leadinglepPT_sr_0j_B2.root -m 125
text2workspace.py Full2018_leadinglepPT_sr_0j_B3.txt -o Full2018_leadinglepPT_sr_0j_B3.root -m 125
text2workspace.py Full2018_leadinglepPT_sr_0j_B4.txt -o Full2018_leadinglepPT_sr_0j_B4.root -m 125
text2workspace.py Full2018_leadinglepPT_sr_0j_B5.txt -o Full2018_leadinglepPT_sr_0j_B5.root -m 125
text2workspace.py Full2018_leadinglepPT_sr_0j_B6.txt -o Full2018_leadinglepPT_sr_0j_B6.root -m 125
text2workspace.py Full2018_leadinglepPT_sr_0j_B7.txt -o Full2018_leadinglepPT_sr_0j_B7.root -m 125

text2workspace.py Full2018_leadinglepPT_sr_1j_B0.txt -o Full2018_leadinglepPT_sr_1j_B0.root -m 125
text2workspace.py Full2018_leadinglepPT_sr_1j_B1.txt -o Full2018_leadinglepPT_sr_1j_B1.root -m 125
text2workspace.py Full2018_leadinglepPT_sr_1j_B2.txt -o Full2018_leadinglepPT_sr_1j_B2.root -m 125
text2workspace.py Full2018_leadinglepPT_sr_1j_B3.txt -o Full2018_leadinglepPT_sr_1j_B3.root -m 125
text2workspace.py Full2018_leadinglepPT_sr_1j_B4.txt -o Full2018_leadinglepPT_sr_1j_B4.root -m 125
text2workspace.py Full2018_leadinglepPT_sr_1j_B5.txt -o Full2018_leadinglepPT_sr_1j_B5.root -m 125
text2workspace.py Full2018_leadinglepPT_sr_1j_B6.txt -o Full2018_leadinglepPT_sr_1j_B6.root -m 125
text2workspace.py Full2018_leadinglepPT_sr_1j_B7.txt -o Full2018_leadinglepPT_sr_1j_B7.root -m 125

text2workspace.py Full2018_leadinglepPT_sr_2j_B0.txt -o Full2018_leadinglepPT_sr_2j_B0.root -m 125
text2workspace.py Full2018_leadinglepPT_sr_2j_B1.txt -o Full2018_leadinglepPT_sr_2j_B1.root -m 125
text2workspace.py Full2018_leadinglepPT_sr_2j_B2.txt -o Full2018_leadinglepPT_sr_2j_B2.root -m 125
text2workspace.py Full2018_leadinglepPT_sr_2j_B3.txt -o Full2018_leadinglepPT_sr_2j_B3.root -m 125
text2workspace.py Full2018_leadinglepPT_sr_2j_B4.txt -o Full2018_leadinglepPT_sr_2j_B4.root -m 125
text2workspace.py Full2018_leadinglepPT_sr_2j_B5.txt -o Full2018_leadinglepPT_sr_2j_B5.root -m 125
text2workspace.py Full2018_leadinglepPT_sr_2j_B6.txt -o Full2018_leadinglepPT_sr_2j_B6.root -m 125
text2workspace.py Full2018_leadinglepPT_sr_2j_B7.txt -o Full2018_leadinglepPT_sr_2j_B7.root -m 125


text2workspace.py FullRunII_leadinglepPT_sr_0j_B0.txt -o FullRunII_leadinglepPT_sr_0j_B0.root -m 125
text2workspace.py FullRunII_leadinglepPT_sr_0j_B1.txt -o FullRunII_leadinglepPT_sr_0j_B1.root -m 125
text2workspace.py FullRunII_leadinglepPT_sr_0j_B2.txt -o FullRunII_leadinglepPT_sr_0j_B2.root -m 125
text2workspace.py FullRunII_leadinglepPT_sr_0j_B3.txt -o FullRunII_leadinglepPT_sr_0j_B3.root -m 125
text2workspace.py FullRunII_leadinglepPT_sr_0j_B4.txt -o FullRunII_leadinglepPT_sr_0j_B4.root -m 125
text2workspace.py FullRunII_leadinglepPT_sr_0j_B5.txt -o FullRunII_leadinglepPT_sr_0j_B5.root -m 125
text2workspace.py FullRunII_leadinglepPT_sr_0j_B6.txt -o FullRunII_leadinglepPT_sr_0j_B6.root -m 125
text2workspace.py FullRunII_leadinglepPT_sr_0j_B7.txt -o FullRunII_leadinglepPT_sr_0j_B7.root -m 125

text2workspace.py FullRunII_leadinglepPT_sr_1j_B0.txt -o FullRunII_leadinglepPT_sr_1j_B0.root -m 125
text2workspace.py FullRunII_leadinglepPT_sr_1j_B1.txt -o FullRunII_leadinglepPT_sr_1j_B1.root -m 125
text2workspace.py FullRunII_leadinglepPT_sr_1j_B2.txt -o FullRunII_leadinglepPT_sr_1j_B2.root -m 125
text2workspace.py FullRunII_leadinglepPT_sr_1j_B3.txt -o FullRunII_leadinglepPT_sr_1j_B3.root -m 125
text2workspace.py FullRunII_leadinglepPT_sr_1j_B4.txt -o FullRunII_leadinglepPT_sr_1j_B4.root -m 125
text2workspace.py FullRunII_leadinglepPT_sr_1j_B5.txt -o FullRunII_leadinglepPT_sr_1j_B5.root -m 125
text2workspace.py FullRunII_leadinglepPT_sr_1j_B6.txt -o FullRunII_leadinglepPT_sr_1j_B6.root -m 125
text2workspace.py FullRunII_leadinglepPT_sr_1j_B7.txt -o FullRunII_leadinglepPT_sr_1j_B7.root -m 125

text2workspace.py FullRunII_leadinglepPT_sr_2j_B0.txt -o FullRunII_leadinglepPT_sr_2j_B0.root -m 125
text2workspace.py FullRunII_leadinglepPT_sr_2j_B1.txt -o FullRunII_leadinglepPT_sr_2j_B1.root -m 125
text2workspace.py FullRunII_leadinglepPT_sr_2j_B2.txt -o FullRunII_leadinglepPT_sr_2j_B2.root -m 125
text2workspace.py FullRunII_leadinglepPT_sr_2j_B3.txt -o FullRunII_leadinglepPT_sr_2j_B3.root -m 125
text2workspace.py FullRunII_leadinglepPT_sr_2j_B4.txt -o FullRunII_leadinglepPT_sr_2j_B4.root -m 125
text2workspace.py FullRunII_leadinglepPT_sr_2j_B5.txt -o FullRunII_leadinglepPT_sr_2j_B5.root -m 125
text2workspace.py FullRunII_leadinglepPT_sr_2j_B6.txt -o FullRunII_leadinglepPT_sr_2j_B6.root -m 125
text2workspace.py FullRunII_leadinglepPT_sr_2j_B7.txt -o FullRunII_leadinglepPT_sr_2j_B7.root -m 125

###############################################################
## Generate postfit total shape from combined-year workspace ##
###############################################################

# This takes the input shapes from the above workspace, morphs them according to the nuisance parameters sampled from the covariance matrix in the fit result, and adds everything together

PostFitShapesFromWorkspace -w Full2016_HIPM_leadinglepPT_sr_0j_B0.root -d Full2016_HIPM_leadinglepPT_sr_0j_B0.txt -o output_2016_HIPM_leadinglepPT_sr_0j_B0.root --sampling -f ${fit_result} --total-shapes
PostFitShapesFromWorkspace -w Full2016_HIPM_leadinglepPT_sr_0j_B0.root -d Full2016_HIPM_leadinglepPT_sr_0j_B1.txt -o output_2016_HIPM_leadinglepPT_sr_0j_B1.root --sampling -f ${fit_result} --total-shapes
PostFitShapesFromWorkspace -w Full2016_HIPM_leadinglepPT_sr_0j_B0.root -d Full2016_HIPM_leadinglepPT_sr_0j_B2.txt -o output_2016_HIPM_leadinglepPT_sr_0j_B2.root --sampling -f ${fit_result} --total-shapes
PostFitShapesFromWorkspace -w Full2016_HIPM_leadinglepPT_sr_0j_B0.root -d Full2016_HIPM_leadinglepPT_sr_0j_B3.txt -o output_2016_HIPM_leadinglepPT_sr_0j_B3.root --sampling -f ${fit_result} --total-shapes
PostFitShapesFromWorkspace -w Full2016_HIPM_leadinglepPT_sr_0j_B0.root -d Full2016_HIPM_leadinglepPT_sr_0j_B4.txt -o output_2016_HIPM_leadinglepPT_sr_0j_B4.root --sampling -f ${fit_result} --total-shapes
PostFitShapesFromWorkspace -w Full2016_HIPM_leadinglepPT_sr_0j_B0.root -d Full2016_HIPM_leadinglepPT_sr_0j_B5.txt -o output_2016_HIPM_leadinglepPT_sr_0j_B5.root --sampling -f ${fit_result} --total-shapes
PostFitShapesFromWorkspace -w Full2016_HIPM_leadinglepPT_sr_0j_B0.root -d Full2016_HIPM_leadinglepPT_sr_0j_B6.txt -o output_2016_HIPM_leadinglepPT_sr_0j_B6.root --sampling -f ${fit_result} --total-shapes
PostFitShapesFromWorkspace -w Full2016_HIPM_leadinglepPT_sr_0j_B0.root -d Full2016_HIPM_leadinglepPT_sr_0j_B7.txt -o output_2016_HIPM_leadinglepPT_sr_0j_B7.root --sampling -f ${fit_result} --total-shapes

PostFitShapesFromWorkspace -w Full2016_HIPM_leadinglepPT_sr_1j_B0.root -d Full2016_HIPM_leadinglepPT_sr_1j_B0.txt -o output_2016_HIPM_leadinglepPT_sr_1j_B0.root --sampling -f ${fit_result} --total-shapes
PostFitShapesFromWorkspace -w Full2016_HIPM_leadinglepPT_sr_1j_B0.root -d Full2016_HIPM_leadinglepPT_sr_1j_B1.txt -o output_2016_HIPM_leadinglepPT_sr_1j_B1.root --sampling -f ${fit_result} --total-shapes
PostFitShapesFromWorkspace -w Full2016_HIPM_leadinglepPT_sr_1j_B0.root -d Full2016_HIPM_leadinglepPT_sr_1j_B2.txt -o output_2016_HIPM_leadinglepPT_sr_1j_B2.root --sampling -f ${fit_result} --total-shapes
PostFitShapesFromWorkspace -w Full2016_HIPM_leadinglepPT_sr_1j_B0.root -d Full2016_HIPM_leadinglepPT_sr_1j_B3.txt -o output_2016_HIPM_leadinglepPT_sr_1j_B3.root --sampling -f ${fit_result} --total-shapes
PostFitShapesFromWorkspace -w Full2016_HIPM_leadinglepPT_sr_1j_B0.root -d Full2016_HIPM_leadinglepPT_sr_1j_B4.txt -o output_2016_HIPM_leadinglepPT_sr_1j_B4.root --sampling -f ${fit_result} --total-shapes
PostFitShapesFromWorkspace -w Full2016_HIPM_leadinglepPT_sr_1j_B0.root -d Full2016_HIPM_leadinglepPT_sr_1j_B5.txt -o output_2016_HIPM_leadinglepPT_sr_1j_B5.root --sampling -f ${fit_result} --total-shapes
PostFitShapesFromWorkspace -w Full2016_HIPM_leadinglepPT_sr_1j_B0.root -d Full2016_HIPM_leadinglepPT_sr_1j_B6.txt -o output_2016_HIPM_leadinglepPT_sr_1j_B6.root --sampling -f ${fit_result} --total-shapes
PostFitShapesFromWorkspace -w Full2016_HIPM_leadinglepPT_sr_1j_B0.root -d Full2016_HIPM_leadinglepPT_sr_1j_B7.txt -o output_2016_HIPM_leadinglepPT_sr_1j_B7.root --sampling -f ${fit_result} --total-shapes

PostFitShapesFromWorkspace -w Full2016_HIPM_leadinglepPT_sr_2j_B0.root -d Full2016_HIPM_leadinglepPT_sr_2j_B0.txt -o output_2016_HIPM_leadinglepPT_sr_2j_B0.root --sampling -f ${fit_result} --total-shapes
PostFitShapesFromWorkspace -w Full2016_HIPM_leadinglepPT_sr_2j_B0.root -d Full2016_HIPM_leadinglepPT_sr_2j_B1.txt -o output_2016_HIPM_leadinglepPT_sr_2j_B1.root --sampling -f ${fit_result} --total-shapes
PostFitShapesFromWorkspace -w Full2016_HIPM_leadinglepPT_sr_2j_B0.root -d Full2016_HIPM_leadinglepPT_sr_2j_B2.txt -o output_2016_HIPM_leadinglepPT_sr_2j_B2.root --sampling -f ${fit_result} --total-shapes
PostFitShapesFromWorkspace -w Full2016_HIPM_leadinglepPT_sr_2j_B0.root -d Full2016_HIPM_leadinglepPT_sr_2j_B3.txt -o output_2016_HIPM_leadinglepPT_sr_2j_B3.root --sampling -f ${fit_result} --total-shapes
PostFitShapesFromWorkspace -w Full2016_HIPM_leadinglepPT_sr_2j_B0.root -d Full2016_HIPM_leadinglepPT_sr_2j_B4.txt -o output_2016_HIPM_leadinglepPT_sr_2j_B4.root --sampling -f ${fit_result} --total-shapes
PostFitShapesFromWorkspace -w Full2016_HIPM_leadinglepPT_sr_2j_B0.root -d Full2016_HIPM_leadinglepPT_sr_2j_B5.txt -o output_2016_HIPM_leadinglepPT_sr_2j_B5.root --sampling -f ${fit_result} --total-shapes
PostFitShapesFromWorkspace -w Full2016_HIPM_leadinglepPT_sr_2j_B0.root -d Full2016_HIPM_leadinglepPT_sr_2j_B6.txt -o output_2016_HIPM_leadinglepPT_sr_2j_B6.root --sampling -f ${fit_result} --total-shapes
PostFitShapesFromWorkspace -w Full2016_HIPM_leadinglepPT_sr_2j_B0.root -d Full2016_HIPM_leadinglepPT_sr_2j_B7.txt -o output_2016_HIPM_leadinglepPT_sr_2j_B7.root --sampling -f ${fit_result} --total-shapes


PostFitShapesFromWorkspace -w Full2016_noHIPM_leadinglepPT_sr_0j_B0.root -d Full2016_noHIPM_leadinglepPT_sr_0j_B0.txt -o output_2016_noHIPM_leadinglepPT_sr_0j_B0.root --sampling -f ${fit_result} --total-shapes
PostFitShapesFromWorkspace -w Full2016_noHIPM_leadinglepPT_sr_0j_B0.root -d Full2016_noHIPM_leadinglepPT_sr_0j_B1.txt -o output_2016_noHIPM_leadinglepPT_sr_0j_B1.root --sampling -f ${fit_result} --total-shapes
PostFitShapesFromWorkspace -w Full2016_noHIPM_leadinglepPT_sr_0j_B0.root -d Full2016_noHIPM_leadinglepPT_sr_0j_B2.txt -o output_2016_noHIPM_leadinglepPT_sr_0j_B2.root --sampling -f ${fit_result} --total-shapes
PostFitShapesFromWorkspace -w Full2016_noHIPM_leadinglepPT_sr_0j_B0.root -d Full2016_noHIPM_leadinglepPT_sr_0j_B3.txt -o output_2016_noHIPM_leadinglepPT_sr_0j_B3.root --sampling -f ${fit_result} --total-shapes
PostFitShapesFromWorkspace -w Full2016_noHIPM_leadinglepPT_sr_0j_B0.root -d Full2016_noHIPM_leadinglepPT_sr_0j_B4.txt -o output_2016_noHIPM_leadinglepPT_sr_0j_B4.root --sampling -f ${fit_result} --total-shapes
PostFitShapesFromWorkspace -w Full2016_noHIPM_leadinglepPT_sr_0j_B0.root -d Full2016_noHIPM_leadinglepPT_sr_0j_B5.txt -o output_2016_noHIPM_leadinglepPT_sr_0j_B5.root --sampling -f ${fit_result} --total-shapes
PostFitShapesFromWorkspace -w Full2016_noHIPM_leadinglepPT_sr_0j_B0.root -d Full2016_noHIPM_leadinglepPT_sr_0j_B6.txt -o output_2016_noHIPM_leadinglepPT_sr_0j_B6.root --sampling -f ${fit_result} --total-shapes
PostFitShapesFromWorkspace -w Full2016_noHIPM_leadinglepPT_sr_0j_B0.root -d Full2016_noHIPM_leadinglepPT_sr_0j_B7.txt -o output_2016_noHIPM_leadinglepPT_sr_0j_B7.root --sampling -f ${fit_result} --total-shapes

PostFitShapesFromWorkspace -w Full2016_noHIPM_leadinglepPT_sr_1j_B0.root -d Full2016_noHIPM_leadinglepPT_sr_1j_B0.txt -o output_2016_noHIPM_leadinglepPT_sr_1j_B0.root --sampling -f ${fit_result} --total-shapes
PostFitShapesFromWorkspace -w Full2016_noHIPM_leadinglepPT_sr_1j_B0.root -d Full2016_noHIPM_leadinglepPT_sr_1j_B1.txt -o output_2016_noHIPM_leadinglepPT_sr_1j_B1.root --sampling -f ${fit_result} --total-shapes
PostFitShapesFromWorkspace -w Full2016_noHIPM_leadinglepPT_sr_1j_B0.root -d Full2016_noHIPM_leadinglepPT_sr_1j_B2.txt -o output_2016_noHIPM_leadinglepPT_sr_1j_B2.root --sampling -f ${fit_result} --total-shapes
PostFitShapesFromWorkspace -w Full2016_noHIPM_leadinglepPT_sr_1j_B0.root -d Full2016_noHIPM_leadinglepPT_sr_1j_B3.txt -o output_2016_noHIPM_leadinglepPT_sr_1j_B3.root --sampling -f ${fit_result} --total-shapes
PostFitShapesFromWorkspace -w Full2016_noHIPM_leadinglepPT_sr_1j_B0.root -d Full2016_noHIPM_leadinglepPT_sr_1j_B4.txt -o output_2016_noHIPM_leadinglepPT_sr_1j_B4.root --sampling -f ${fit_result} --total-shapes
PostFitShapesFromWorkspace -w Full2016_noHIPM_leadinglepPT_sr_1j_B0.root -d Full2016_noHIPM_leadinglepPT_sr_1j_B5.txt -o output_2016_noHIPM_leadinglepPT_sr_1j_B5.root --sampling -f ${fit_result} --total-shapes
PostFitShapesFromWorkspace -w Full2016_noHIPM_leadinglepPT_sr_1j_B0.root -d Full2016_noHIPM_leadinglepPT_sr_1j_B6.txt -o output_2016_noHIPM_leadinglepPT_sr_1j_B6.root --sampling -f ${fit_result} --total-shapes
PostFitShapesFromWorkspace -w Full2016_noHIPM_leadinglepPT_sr_1j_B0.root -d Full2016_noHIPM_leadinglepPT_sr_1j_B7.txt -o output_2016_noHIPM_leadinglepPT_sr_1j_B7.root --sampling -f ${fit_result} --total-shapes

PostFitShapesFromWorkspace -w Full2016_noHIPM_leadinglepPT_sr_2j_B0.root -d Full2016_noHIPM_leadinglepPT_sr_2j_B0.txt -o output_2016_noHIPM_leadinglepPT_sr_2j_B0.root --sampling -f ${fit_result} --total-shapes
PostFitShapesFromWorkspace -w Full2016_noHIPM_leadinglepPT_sr_2j_B0.root -d Full2016_noHIPM_leadinglepPT_sr_2j_B1.txt -o output_2016_noHIPM_leadinglepPT_sr_2j_B1.root --sampling -f ${fit_result} --total-shapes
PostFitShapesFromWorkspace -w Full2016_noHIPM_leadinglepPT_sr_2j_B0.root -d Full2016_noHIPM_leadinglepPT_sr_2j_B2.txt -o output_2016_noHIPM_leadinglepPT_sr_2j_B2.root --sampling -f ${fit_result} --total-shapes
PostFitShapesFromWorkspace -w Full2016_noHIPM_leadinglepPT_sr_2j_B0.root -d Full2016_noHIPM_leadinglepPT_sr_2j_B3.txt -o output_2016_noHIPM_leadinglepPT_sr_2j_B3.root --sampling -f ${fit_result} --total-shapes
PostFitShapesFromWorkspace -w Full2016_noHIPM_leadinglepPT_sr_2j_B0.root -d Full2016_noHIPM_leadinglepPT_sr_2j_B4.txt -o output_2016_noHIPM_leadinglepPT_sr_2j_B4.root --sampling -f ${fit_result} --total-shapes
PostFitShapesFromWorkspace -w Full2016_noHIPM_leadinglepPT_sr_2j_B0.root -d Full2016_noHIPM_leadinglepPT_sr_2j_B5.txt -o output_2016_noHIPM_leadinglepPT_sr_2j_B5.root --sampling -f ${fit_result} --total-shapes
PostFitShapesFromWorkspace -w Full2016_noHIPM_leadinglepPT_sr_2j_B0.root -d Full2016_noHIPM_leadinglepPT_sr_2j_B6.txt -o output_2016_noHIPM_leadinglepPT_sr_2j_B6.root --sampling -f ${fit_result} --total-shapes
PostFitShapesFromWorkspace -w Full2016_noHIPM_leadinglepPT_sr_2j_B0.root -d Full2016_noHIPM_leadinglepPT_sr_2j_B7.txt -o output_2016_noHIPM_leadinglepPT_sr_2j_B7.root --sampling -f ${fit_result} --total-shapes


PostFitShapesFromWorkspace -w Full2017_leadinglepPT_sr_0j_B0.root -d Full2017_leadinglepPT_sr_0j_B0.txt -o output_2017_leadinglepPT_sr_0j_B0.root --sampling -f ${fit_result} --total-shapes
PostFitShapesFromWorkspace -w Full2017_leadinglepPT_sr_0j_B0.root -d Full2017_leadinglepPT_sr_0j_B1.txt -o output_2017_leadinglepPT_sr_0j_B1.root --sampling -f ${fit_result} --total-shapes
PostFitShapesFromWorkspace -w Full2017_leadinglepPT_sr_0j_B0.root -d Full2017_leadinglepPT_sr_0j_B2.txt -o output_2017_leadinglepPT_sr_0j_B2.root --sampling -f ${fit_result} --total-shapes
PostFitShapesFromWorkspace -w Full2017_leadinglepPT_sr_0j_B0.root -d Full2017_leadinglepPT_sr_0j_B3.txt -o output_2017_leadinglepPT_sr_0j_B3.root --sampling -f ${fit_result} --total-shapes
PostFitShapesFromWorkspace -w Full2017_leadinglepPT_sr_0j_B0.root -d Full2017_leadinglepPT_sr_0j_B4.txt -o output_2017_leadinglepPT_sr_0j_B4.root --sampling -f ${fit_result} --total-shapes
PostFitShapesFromWorkspace -w Full2017_leadinglepPT_sr_0j_B0.root -d Full2017_leadinglepPT_sr_0j_B5.txt -o output_2017_leadinglepPT_sr_0j_B5.root --sampling -f ${fit_result} --total-shapes
PostFitShapesFromWorkspace -w Full2017_leadinglepPT_sr_0j_B0.root -d Full2017_leadinglepPT_sr_0j_B6.txt -o output_2017_leadinglepPT_sr_0j_B6.root --sampling -f ${fit_result} --total-shapes
PostFitShapesFromWorkspace -w Full2017_leadinglepPT_sr_0j_B0.root -d Full2017_leadinglepPT_sr_0j_B7.txt -o output_2017_leadinglepPT_sr_0j_B7.root --sampling -f ${fit_result} --total-shapes

PostFitShapesFromWorkspace -w Full2017_leadinglepPT_sr_1j_B0.root -d Full2017_leadinglepPT_sr_1j_B0.txt -o output_2017_leadinglepPT_sr_1j_B0.root --sampling -f ${fit_result} --total-shapes
PostFitShapesFromWorkspace -w Full2017_leadinglepPT_sr_1j_B0.root -d Full2017_leadinglepPT_sr_1j_B1.txt -o output_2017_leadinglepPT_sr_1j_B1.root --sampling -f ${fit_result} --total-shapes
PostFitShapesFromWorkspace -w Full2017_leadinglepPT_sr_1j_B0.root -d Full2017_leadinglepPT_sr_1j_B2.txt -o output_2017_leadinglepPT_sr_1j_B2.root --sampling -f ${fit_result} --total-shapes
PostFitShapesFromWorkspace -w Full2017_leadinglepPT_sr_1j_B0.root -d Full2017_leadinglepPT_sr_1j_B3.txt -o output_2017_leadinglepPT_sr_1j_B3.root --sampling -f ${fit_result} --total-shapes
PostFitShapesFromWorkspace -w Full2017_leadinglepPT_sr_1j_B0.root -d Full2017_leadinglepPT_sr_1j_B4.txt -o output_2017_leadinglepPT_sr_1j_B4.root --sampling -f ${fit_result} --total-shapes
PostFitShapesFromWorkspace -w Full2017_leadinglepPT_sr_1j_B0.root -d Full2017_leadinglepPT_sr_1j_B5.txt -o output_2017_leadinglepPT_sr_1j_B5.root --sampling -f ${fit_result} --total-shapes
PostFitShapesFromWorkspace -w Full2017_leadinglepPT_sr_1j_B0.root -d Full2017_leadinglepPT_sr_1j_B6.txt -o output_2017_leadinglepPT_sr_1j_B6.root --sampling -f ${fit_result} --total-shapes
PostFitShapesFromWorkspace -w Full2017_leadinglepPT_sr_1j_B0.root -d Full2017_leadinglepPT_sr_1j_B7.txt -o output_2017_leadinglepPT_sr_1j_B7.root --sampling -f ${fit_result} --total-shapes

PostFitShapesFromWorkspace -w Full2017_leadinglepPT_sr_2j_B0.root -d Full2017_leadinglepPT_sr_2j_B0.txt -o output_2017_leadinglepPT_sr_2j_B0.root --sampling -f ${fit_result} --total-shapes
PostFitShapesFromWorkspace -w Full2017_leadinglepPT_sr_2j_B0.root -d Full2017_leadinglepPT_sr_2j_B1.txt -o output_2017_leadinglepPT_sr_2j_B1.root --sampling -f ${fit_result} --total-shapes
PostFitShapesFromWorkspace -w Full2017_leadinglepPT_sr_2j_B0.root -d Full2017_leadinglepPT_sr_2j_B2.txt -o output_2017_leadinglepPT_sr_2j_B2.root --sampling -f ${fit_result} --total-shapes
PostFitShapesFromWorkspace -w Full2017_leadinglepPT_sr_2j_B0.root -d Full2017_leadinglepPT_sr_2j_B3.txt -o output_2017_leadinglepPT_sr_2j_B3.root --sampling -f ${fit_result} --total-shapes
PostFitShapesFromWorkspace -w Full2017_leadinglepPT_sr_2j_B0.root -d Full2017_leadinglepPT_sr_2j_B4.txt -o output_2017_leadinglepPT_sr_2j_B4.root --sampling -f ${fit_result} --total-shapes
PostFitShapesFromWorkspace -w Full2017_leadinglepPT_sr_2j_B0.root -d Full2017_leadinglepPT_sr_2j_B5.txt -o output_2017_leadinglepPT_sr_2j_B5.root --sampling -f ${fit_result} --total-shapes
PostFitShapesFromWorkspace -w Full2017_leadinglepPT_sr_2j_B0.root -d Full2017_leadinglepPT_sr_2j_B6.txt -o output_2017_leadinglepPT_sr_2j_B6.root --sampling -f ${fit_result} --total-shapes
PostFitShapesFromWorkspace -w Full2017_leadinglepPT_sr_2j_B0.root -d Full2017_leadinglepPT_sr_2j_B7.txt -o output_2017_leadinglepPT_sr_2j_B7.root --sampling -f ${fit_result} --total-shapes


PostFitShapesFromWorkspace -w Full2018_leadinglepPT_sr_0j_B0.root -d Full2018_leadinglepPT_sr_0j_B0.txt -o output_2018_leadinglepPT_sr_0j_B0.root --sampling -f ${fit_result} --total-shapes
PostFitShapesFromWorkspace -w Full2018_leadinglepPT_sr_0j_B0.root -d Full2018_leadinglepPT_sr_0j_B1.txt -o output_2018_leadinglepPT_sr_0j_B1.root --sampling -f ${fit_result} --total-shapes
PostFitShapesFromWorkspace -w Full2018_leadinglepPT_sr_0j_B0.root -d Full2018_leadinglepPT_sr_0j_B2.txt -o output_2018_leadinglepPT_sr_0j_B2.root --sampling -f ${fit_result} --total-shapes
PostFitShapesFromWorkspace -w Full2018_leadinglepPT_sr_0j_B0.root -d Full2018_leadinglepPT_sr_0j_B3.txt -o output_2018_leadinglepPT_sr_0j_B3.root --sampling -f ${fit_result} --total-shapes
PostFitShapesFromWorkspace -w Full2018_leadinglepPT_sr_0j_B0.root -d Full2018_leadinglepPT_sr_0j_B4.txt -o output_2018_leadinglepPT_sr_0j_B4.root --sampling -f ${fit_result} --total-shapes
PostFitShapesFromWorkspace -w Full2018_leadinglepPT_sr_0j_B0.root -d Full2018_leadinglepPT_sr_0j_B5.txt -o output_2018_leadinglepPT_sr_0j_B5.root --sampling -f ${fit_result} --total-shapes
PostFitShapesFromWorkspace -w Full2018_leadinglepPT_sr_0j_B0.root -d Full2018_leadinglepPT_sr_0j_B6.txt -o output_2018_leadinglepPT_sr_0j_B6.root --sampling -f ${fit_result} --total-shapes
PostFitShapesFromWorkspace -w Full2018_leadinglepPT_sr_0j_B0.root -d Full2018_leadinglepPT_sr_0j_B7.txt -o output_2018_leadinglepPT_sr_0j_B7.root --sampling -f ${fit_result} --total-shapes

PostFitShapesFromWorkspace -w Full2018_leadinglepPT_sr_1j_B0.root -d Full2018_leadinglepPT_sr_1j_B0.txt -o output_2018_leadinglepPT_sr_1j_B0.root --sampling -f ${fit_result} --total-shapes
PostFitShapesFromWorkspace -w Full2018_leadinglepPT_sr_1j_B0.root -d Full2018_leadinglepPT_sr_1j_B1.txt -o output_2018_leadinglepPT_sr_1j_B1.root --sampling -f ${fit_result} --total-shapes
PostFitShapesFromWorkspace -w Full2018_leadinglepPT_sr_1j_B0.root -d Full2018_leadinglepPT_sr_1j_B2.txt -o output_2018_leadinglepPT_sr_1j_B2.root --sampling -f ${fit_result} --total-shapes
PostFitShapesFromWorkspace -w Full2018_leadinglepPT_sr_1j_B0.root -d Full2018_leadinglepPT_sr_1j_B3.txt -o output_2018_leadinglepPT_sr_1j_B3.root --sampling -f ${fit_result} --total-shapes
PostFitShapesFromWorkspace -w Full2018_leadinglepPT_sr_1j_B0.root -d Full2018_leadinglepPT_sr_1j_B4.txt -o output_2018_leadinglepPT_sr_1j_B4.root --sampling -f ${fit_result} --total-shapes
PostFitShapesFromWorkspace -w Full2018_leadinglepPT_sr_1j_B0.root -d Full2018_leadinglepPT_sr_1j_B5.txt -o output_2018_leadinglepPT_sr_1j_B5.root --sampling -f ${fit_result} --total-shapes
PostFitShapesFromWorkspace -w Full2018_leadinglepPT_sr_1j_B0.root -d Full2018_leadinglepPT_sr_1j_B6.txt -o output_2018_leadinglepPT_sr_1j_B6.root --sampling -f ${fit_result} --total-shapes
PostFitShapesFromWorkspace -w Full2018_leadinglepPT_sr_1j_B0.root -d Full2018_leadinglepPT_sr_1j_B7.txt -o output_2018_leadinglepPT_sr_1j_B7.root --sampling -f ${fit_result} --total-shapes

PostFitShapesFromWorkspace -w Full2018_leadinglepPT_sr_2j_B0.root -d Full2018_leadinglepPT_sr_2j_B0.txt -o output_2018_leadinglepPT_sr_2j_B0.root --sampling -f ${fit_result} --total-shapes
PostFitShapesFromWorkspace -w Full2018_leadinglepPT_sr_2j_B0.root -d Full2018_leadinglepPT_sr_2j_B1.txt -o output_2018_leadinglepPT_sr_2j_B1.root --sampling -f ${fit_result} --total-shapes
PostFitShapesFromWorkspace -w Full2018_leadinglepPT_sr_2j_B0.root -d Full2018_leadinglepPT_sr_2j_B2.txt -o output_2018_leadinglepPT_sr_2j_B2.root --sampling -f ${fit_result} --total-shapes
PostFitShapesFromWorkspace -w Full2018_leadinglepPT_sr_2j_B0.root -d Full2018_leadinglepPT_sr_2j_B3.txt -o output_2018_leadinglepPT_sr_2j_B3.root --sampling -f ${fit_result} --total-shapes
PostFitShapesFromWorkspace -w Full2018_leadinglepPT_sr_2j_B0.root -d Full2018_leadinglepPT_sr_2j_B4.txt -o output_2018_leadinglepPT_sr_2j_B4.root --sampling -f ${fit_result} --total-shapes
PostFitShapesFromWorkspace -w Full2018_leadinglepPT_sr_2j_B0.root -d Full2018_leadinglepPT_sr_2j_B5.txt -o output_2018_leadinglepPT_sr_2j_B5.root --sampling -f ${fit_result} --total-shapes
PostFitShapesFromWorkspace -w Full2018_leadinglepPT_sr_2j_B0.root -d Full2018_leadinglepPT_sr_2j_B6.txt -o output_2018_leadinglepPT_sr_2j_B6.root --sampling -f ${fit_result} --total-shapes
PostFitShapesFromWorkspace -w Full2018_leadinglepPT_sr_2j_B0.root -d Full2018_leadinglepPT_sr_2j_B7.txt -o output_2018_leadinglepPT_sr_2j_B7.root --sampling -f ${fit_result} --total-shapes

PostFitShapesFromWorkspace -w FullRunII_leadinglepPT_sr_0j_B0.root -d FullRunII_leadinglepPT_sr_0j_B0.txt -o output_FullRunII_leadinglepPT_sr_0j_B0.root --sampling -f ${fit_result} --total-shapes
PostFitShapesFromWorkspace -w FullRunII_leadinglepPT_sr_0j_B0.root -d FullRunII_leadinglepPT_sr_0j_B1.txt -o output_FullRunII_leadinglepPT_sr_0j_B1.root --sampling -f ${fit_result} --total-shapes
PostFitShapesFromWorkspace -w FullRunII_leadinglepPT_sr_0j_B0.root -d FullRunII_leadinglepPT_sr_0j_B2.txt -o output_FullRunII_leadinglepPT_sr_0j_B2.root --sampling -f ${fit_result} --total-shapes
PostFitShapesFromWorkspace -w FullRunII_leadinglepPT_sr_0j_B0.root -d FullRunII_leadinglepPT_sr_0j_B3.txt -o output_FullRunII_leadinglepPT_sr_0j_B3.root --sampling -f ${fit_result} --total-shapes
PostFitShapesFromWorkspace -w FullRunII_leadinglepPT_sr_0j_B0.root -d FullRunII_leadinglepPT_sr_0j_B4.txt -o output_FullRunII_leadinglepPT_sr_0j_B4.root --sampling -f ${fit_result} --total-shapes
PostFitShapesFromWorkspace -w FullRunII_leadinglepPT_sr_0j_B0.root -d FullRunII_leadinglepPT_sr_0j_B5.txt -o output_FullRunII_leadinglepPT_sr_0j_B5.root --sampling -f ${fit_result} --total-shapes
PostFitShapesFromWorkspace -w FullRunII_leadinglepPT_sr_0j_B0.root -d FullRunII_leadinglepPT_sr_0j_B6.txt -o output_FullRunII_leadinglepPT_sr_0j_B6.root --sampling -f ${fit_result} --total-shapes
PostFitShapesFromWorkspace -w FullRunII_leadinglepPT_sr_0j_B0.root -d FullRunII_leadinglepPT_sr_0j_B7.txt -o output_FullRunII_leadinglepPT_sr_0j_B7.root --sampling -f ${fit_result} --total-shapes

PostFitShapesFromWorkspace -w FullRunII_leadinglepPT_sr_1j_B0.root -d FullRunII_leadinglepPT_sr_1j_B0.txt -o output_FullRunII_leadinglepPT_sr_1j_B0.root --sampling -f ${fit_result} --total-shapes
PostFitShapesFromWorkspace -w FullRunII_leadinglepPT_sr_1j_B0.root -d FullRunII_leadinglepPT_sr_1j_B1.txt -o output_FullRunII_leadinglepPT_sr_1j_B1.root --sampling -f ${fit_result} --total-shapes
PostFitShapesFromWorkspace -w FullRunII_leadinglepPT_sr_1j_B0.root -d FullRunII_leadinglepPT_sr_1j_B2.txt -o output_FullRunII_leadinglepPT_sr_1j_B2.root --sampling -f ${fit_result} --total-shapes
PostFitShapesFromWorkspace -w FullRunII_leadinglepPT_sr_1j_B0.root -d FullRunII_leadinglepPT_sr_1j_B3.txt -o output_FullRunII_leadinglepPT_sr_1j_B3.root --sampling -f ${fit_result} --total-shapes
PostFitShapesFromWorkspace -w FullRunII_leadinglepPT_sr_1j_B0.root -d FullRunII_leadinglepPT_sr_1j_B4.txt -o output_FullRunII_leadinglepPT_sr_1j_B4.root --sampling -f ${fit_result} --total-shapes
PostFitShapesFromWorkspace -w FullRunII_leadinglepPT_sr_1j_B0.root -d FullRunII_leadinglepPT_sr_1j_B5.txt -o output_FullRunII_leadinglepPT_sr_1j_B5.root --sampling -f ${fit_result} --total-shapes
PostFitShapesFromWorkspace -w FullRunII_leadinglepPT_sr_1j_B0.root -d FullRunII_leadinglepPT_sr_1j_B6.txt -o output_FullRunII_leadinglepPT_sr_1j_B6.root --sampling -f ${fit_result} --total-shapes
PostFitShapesFromWorkspace -w FullRunII_leadinglepPT_sr_1j_B0.root -d FullRunII_leadinglepPT_sr_1j_B7.txt -o output_FullRunII_leadinglepPT_sr_1j_B7.root --sampling -f ${fit_result} --total-shapes

PostFitShapesFromWorkspace -w FullRunII_leadinglepPT_sr_2j_B0.root -d FullRunII_leadinglepPT_sr_2j_B0.txt -o output_FullRunII_leadinglepPT_sr_2j_B0.root --sampling -f ${fit_result} --total-shapes
PostFitShapesFromWorkspace -w FullRunII_leadinglepPT_sr_2j_B0.root -d FullRunII_leadinglepPT_sr_2j_B1.txt -o output_FullRunII_leadinglepPT_sr_2j_B1.root --sampling -f ${fit_result} --total-shapes
PostFitShapesFromWorkspace -w FullRunII_leadinglepPT_sr_2j_B0.root -d FullRunII_leadinglepPT_sr_2j_B2.txt -o output_FullRunII_leadinglepPT_sr_2j_B2.root --sampling -f ${fit_result} --total-shapes
PostFitShapesFromWorkspace -w FullRunII_leadinglepPT_sr_2j_B0.root -d FullRunII_leadinglepPT_sr_2j_B3.txt -o output_FullRunII_leadinglepPT_sr_2j_B3.root --sampling -f ${fit_result} --total-shapes
PostFitShapesFromWorkspace -w FullRunII_leadinglepPT_sr_2j_B0.root -d FullRunII_leadinglepPT_sr_2j_B4.txt -o output_FullRunII_leadinglepPT_sr_2j_B4.root --sampling -f ${fit_result} --total-shapes
PostFitShapesFromWorkspace -w FullRunII_leadinglepPT_sr_2j_B0.root -d FullRunII_leadinglepPT_sr_2j_B5.txt -o output_FullRunII_leadinglepPT_sr_2j_B5.root --sampling -f ${fit_result} --total-shapes
PostFitShapesFromWorkspace -w FullRunII_leadinglepPT_sr_2j_B0.root -d FullRunII_leadinglepPT_sr_2j_B6.txt -o output_FullRunII_leadinglepPT_sr_2j_B6.root --sampling -f ${fit_result} --total-shapes
PostFitShapesFromWorkspace -w FullRunII_leadinglepPT_sr_2j_B0.root -d FullRunII_leadinglepPT_sr_2j_B7.txt -o output_FullRunII_leadinglepPT_sr_2j_B7.root --sampling -f ${fit_result} --total-shapes

############################################
## To include postfit, add --postfit flag ##
############################################

PostFitShapesFromWorkspace -w Full2016_HIPM_leadinglepPT_sr_0j_B0.root -d Full2016_HIPM_leadinglepPT_sr_0j_B0.txt -o output_2016_HIPM_leadinglepPT_sr_0j_B0_postFit.root --sampling -f ${fit_result} --total-shapes --postfit
PostFitShapesFromWorkspace -w Full2016_HIPM_leadinglepPT_sr_0j_B1.root -d Full2016_HIPM_leadinglepPT_sr_0j_B1.txt -o output_2016_HIPM_leadinglepPT_sr_0j_B1_postFit.root --sampling -f ${fit_result} --total-shapes --postfit
PostFitShapesFromWorkspace -w Full2016_HIPM_leadinglepPT_sr_0j_B2.root -d Full2016_HIPM_leadinglepPT_sr_0j_B2.txt -o output_2016_HIPM_leadinglepPT_sr_0j_B2_postFit.root --sampling -f ${fit_result} --total-shapes --postfit
PostFitShapesFromWorkspace -w Full2016_HIPM_leadinglepPT_sr_0j_B3.root -d Full2016_HIPM_leadinglepPT_sr_0j_B3.txt -o output_2016_HIPM_leadinglepPT_sr_0j_B3_postFit.root --sampling -f ${fit_result} --total-shapes --postfit
PostFitShapesFromWorkspace -w Full2016_HIPM_leadinglepPT_sr_0j_B4.root -d Full2016_HIPM_leadinglepPT_sr_0j_B4.txt -o output_2016_HIPM_leadinglepPT_sr_0j_B4_postFit.root --sampling -f ${fit_result} --total-shapes --postfit
PostFitShapesFromWorkspace -w Full2016_HIPM_leadinglepPT_sr_0j_B5.root -d Full2016_HIPM_leadinglepPT_sr_0j_B5.txt -o output_2016_HIPM_leadinglepPT_sr_0j_B5_postFit.root --sampling -f ${fit_result} --total-shapes --postfit
PostFitShapesFromWorkspace -w Full2016_HIPM_leadinglepPT_sr_0j_B6.root -d Full2016_HIPM_leadinglepPT_sr_0j_B6.txt -o output_2016_HIPM_leadinglepPT_sr_0j_B6_postFit.root --sampling -f ${fit_result} --total-shapes --postfit
PostFitShapesFromWorkspace -w Full2016_HIPM_leadinglepPT_sr_0j_B7.root -d Full2016_HIPM_leadinglepPT_sr_0j_B7.txt -o output_2016_HIPM_leadinglepPT_sr_0j_B7_postFit.root --sampling -f ${fit_result} --total-shapes --postfit

PostFitShapesFromWorkspace -w Full2016_HIPM_leadinglepPT_sr_1j_B0.root -d Full2016_HIPM_leadinglepPT_sr_1j_B0.txt -o output_2016_HIPM_leadinglepPT_sr_1j_B0_postFit.root --sampling -f ${fit_result} --total-shapes --postfit
PostFitShapesFromWorkspace -w Full2016_HIPM_leadinglepPT_sr_1j_B1.root -d Full2016_HIPM_leadinglepPT_sr_1j_B1.txt -o output_2016_HIPM_leadinglepPT_sr_1j_B1_postFit.root --sampling -f ${fit_result} --total-shapes --postfit
PostFitShapesFromWorkspace -w Full2016_HIPM_leadinglepPT_sr_1j_B2.root -d Full2016_HIPM_leadinglepPT_sr_1j_B2.txt -o output_2016_HIPM_leadinglepPT_sr_1j_B2_postFit.root --sampling -f ${fit_result} --total-shapes --postfit
PostFitShapesFromWorkspace -w Full2016_HIPM_leadinglepPT_sr_1j_B3.root -d Full2016_HIPM_leadinglepPT_sr_1j_B3.txt -o output_2016_HIPM_leadinglepPT_sr_1j_B3_postFit.root --sampling -f ${fit_result} --total-shapes --postfit
PostFitShapesFromWorkspace -w Full2016_HIPM_leadinglepPT_sr_1j_B4.root -d Full2016_HIPM_leadinglepPT_sr_1j_B4.txt -o output_2016_HIPM_leadinglepPT_sr_1j_B4_postFit.root --sampling -f ${fit_result} --total-shapes --postfit
PostFitShapesFromWorkspace -w Full2016_HIPM_leadinglepPT_sr_1j_B5.root -d Full2016_HIPM_leadinglepPT_sr_1j_B5.txt -o output_2016_HIPM_leadinglepPT_sr_1j_B5_postFit.root --sampling -f ${fit_result} --total-shapes --postfit
PostFitShapesFromWorkspace -w Full2016_HIPM_leadinglepPT_sr_1j_B6.root -d Full2016_HIPM_leadinglepPT_sr_1j_B6.txt -o output_2016_HIPM_leadinglepPT_sr_1j_B6_postFit.root --sampling -f ${fit_result} --total-shapes --postfit
PostFitShapesFromWorkspace -w Full2016_HIPM_leadinglepPT_sr_1j_B7.root -d Full2016_HIPM_leadinglepPT_sr_1j_B7.txt -o output_2016_HIPM_leadinglepPT_sr_1j_B7_postFit.root --sampling -f ${fit_result} --total-shapes --postfit

PostFitShapesFromWorkspace -w Full2016_HIPM_leadinglepPT_sr_2j_B0.root -d Full2016_HIPM_leadinglepPT_sr_2j_B0.txt -o output_2016_HIPM_leadinglepPT_sr_2j_B0_postFit.root --sampling -f ${fit_result} --total-shapes --postfit
PostFitShapesFromWorkspace -w Full2016_HIPM_leadinglepPT_sr_2j_B1.root -d Full2016_HIPM_leadinglepPT_sr_2j_B1.txt -o output_2016_HIPM_leadinglepPT_sr_2j_B1_postFit.root --sampling -f ${fit_result} --total-shapes --postfit
PostFitShapesFromWorkspace -w Full2016_HIPM_leadinglepPT_sr_2j_B2.root -d Full2016_HIPM_leadinglepPT_sr_2j_B2.txt -o output_2016_HIPM_leadinglepPT_sr_2j_B2_postFit.root --sampling -f ${fit_result} --total-shapes --postfit
PostFitShapesFromWorkspace -w Full2016_HIPM_leadinglepPT_sr_2j_B3.root -d Full2016_HIPM_leadinglepPT_sr_2j_B3.txt -o output_2016_HIPM_leadinglepPT_sr_2j_B3_postFit.root --sampling -f ${fit_result} --total-shapes --postfit
PostFitShapesFromWorkspace -w Full2016_HIPM_leadinglepPT_sr_2j_B4.root -d Full2016_HIPM_leadinglepPT_sr_2j_B4.txt -o output_2016_HIPM_leadinglepPT_sr_2j_B4_postFit.root --sampling -f ${fit_result} --total-shapes --postfit
PostFitShapesFromWorkspace -w Full2016_HIPM_leadinglepPT_sr_2j_B5.root -d Full2016_HIPM_leadinglepPT_sr_2j_B5.txt -o output_2016_HIPM_leadinglepPT_sr_2j_B5_postFit.root --sampling -f ${fit_result} --total-shapes --postfit
PostFitShapesFromWorkspace -w Full2016_HIPM_leadinglepPT_sr_2j_B6.root -d Full2016_HIPM_leadinglepPT_sr_2j_B6.txt -o output_2016_HIPM_leadinglepPT_sr_2j_B6_postFit.root --sampling -f ${fit_result} --total-shapes --postfit
PostFitShapesFromWorkspace -w Full2016_HIPM_leadinglepPT_sr_2j_B7.root -d Full2016_HIPM_leadinglepPT_sr_2j_B7.txt -o output_2016_HIPM_leadinglepPT_sr_2j_B7_postFit.root --sampling -f ${fit_result} --total-shapes --postfit


PostFitShapesFromWorkspace -w Full2016_noHIPM_leadinglepPT_sr_0j_B0.root -d Full2016_noHIPM_leadinglepPT_sr_0j_B0.txt -o output_2016_noHIPM_leadinglepPT_sr_0j_B0_postFit.root --sampling -f ${fit_result} --total-shapes --postfit
PostFitShapesFromWorkspace -w Full2016_noHIPM_leadinglepPT_sr_0j_B1.root -d Full2016_noHIPM_leadinglepPT_sr_0j_B1.txt -o output_2016_noHIPM_leadinglepPT_sr_0j_B1_postFit.root --sampling -f ${fit_result} --total-shapes --postfit
PostFitShapesFromWorkspace -w Full2016_noHIPM_leadinglepPT_sr_0j_B2.root -d Full2016_noHIPM_leadinglepPT_sr_0j_B2.txt -o output_2016_noHIPM_leadinglepPT_sr_0j_B2_postFit.root --sampling -f ${fit_result} --total-shapes --postfit
PostFitShapesFromWorkspace -w Full2016_noHIPM_leadinglepPT_sr_0j_B3.root -d Full2016_noHIPM_leadinglepPT_sr_0j_B3.txt -o output_2016_noHIPM_leadinglepPT_sr_0j_B3_postFit.root --sampling -f ${fit_result} --total-shapes --postfit
PostFitShapesFromWorkspace -w Full2016_noHIPM_leadinglepPT_sr_0j_B4.root -d Full2016_noHIPM_leadinglepPT_sr_0j_B4.txt -o output_2016_noHIPM_leadinglepPT_sr_0j_B4_postFit.root --sampling -f ${fit_result} --total-shapes --postfit
PostFitShapesFromWorkspace -w Full2016_noHIPM_leadinglepPT_sr_0j_B5.root -d Full2016_noHIPM_leadinglepPT_sr_0j_B5.txt -o output_2016_noHIPM_leadinglepPT_sr_0j_B5_postFit.root --sampling -f ${fit_result} --total-shapes --postfit
PostFitShapesFromWorkspace -w Full2016_noHIPM_leadinglepPT_sr_0j_B6.root -d Full2016_noHIPM_leadinglepPT_sr_0j_B6.txt -o output_2016_noHIPM_leadinglepPT_sr_0j_B6_postFit.root --sampling -f ${fit_result} --total-shapes --postfit
PostFitShapesFromWorkspace -w Full2016_noHIPM_leadinglepPT_sr_0j_B7.root -d Full2016_noHIPM_leadinglepPT_sr_0j_B7.txt -o output_2016_noHIPM_leadinglepPT_sr_0j_B7_postFit.root --sampling -f ${fit_result} --total-shapes --postfit

PostFitShapesFromWorkspace -w Full2016_noHIPM_leadinglepPT_sr_1j_B0.root -d Full2016_noHIPM_leadinglepPT_sr_1j_B0.txt -o output_2016_noHIPM_leadinglepPT_sr_1j_B0_postFit.root --sampling -f ${fit_result} --total-shapes --postfit
PostFitShapesFromWorkspace -w Full2016_noHIPM_leadinglepPT_sr_1j_B1.root -d Full2016_noHIPM_leadinglepPT_sr_1j_B1.txt -o output_2016_noHIPM_leadinglepPT_sr_1j_B1_postFit.root --sampling -f ${fit_result} --total-shapes --postfit
PostFitShapesFromWorkspace -w Full2016_noHIPM_leadinglepPT_sr_1j_B2.root -d Full2016_noHIPM_leadinglepPT_sr_1j_B2.txt -o output_2016_noHIPM_leadinglepPT_sr_1j_B2_postFit.root --sampling -f ${fit_result} --total-shapes --postfit
PostFitShapesFromWorkspace -w Full2016_noHIPM_leadinglepPT_sr_1j_B3.root -d Full2016_noHIPM_leadinglepPT_sr_1j_B3.txt -o output_2016_noHIPM_leadinglepPT_sr_1j_B3_postFit.root --sampling -f ${fit_result} --total-shapes --postfit
PostFitShapesFromWorkspace -w Full2016_noHIPM_leadinglepPT_sr_1j_B4.root -d Full2016_noHIPM_leadinglepPT_sr_1j_B4.txt -o output_2016_noHIPM_leadinglepPT_sr_1j_B4_postFit.root --sampling -f ${fit_result} --total-shapes --postfit
PostFitShapesFromWorkspace -w Full2016_noHIPM_leadinglepPT_sr_1j_B5.root -d Full2016_noHIPM_leadinglepPT_sr_1j_B5.txt -o output_2016_noHIPM_leadinglepPT_sr_1j_B5_postFit.root --sampling -f ${fit_result} --total-shapes --postfit
PostFitShapesFromWorkspace -w Full2016_noHIPM_leadinglepPT_sr_1j_B6.root -d Full2016_noHIPM_leadinglepPT_sr_1j_B6.txt -o output_2016_noHIPM_leadinglepPT_sr_1j_B6_postFit.root --sampling -f ${fit_result} --total-shapes --postfit
PostFitShapesFromWorkspace -w Full2016_noHIPM_leadinglepPT_sr_1j_B7.root -d Full2016_noHIPM_leadinglepPT_sr_1j_B7.txt -o output_2016_noHIPM_leadinglepPT_sr_1j_B7_postFit.root --sampling -f ${fit_result} --total-shapes --postfit

PostFitShapesFromWorkspace -w Full2016_noHIPM_leadinglepPT_sr_2j_B0.root -d Full2016_noHIPM_leadinglepPT_sr_2j_B0.txt -o output_2016_noHIPM_leadinglepPT_sr_2j_B0_postFit.root --sampling -f ${fit_result} --total-shapes --postfit
PostFitShapesFromWorkspace -w Full2016_noHIPM_leadinglepPT_sr_2j_B1.root -d Full2016_noHIPM_leadinglepPT_sr_2j_B1.txt -o output_2016_noHIPM_leadinglepPT_sr_2j_B1_postFit.root --sampling -f ${fit_result} --total-shapes --postfit
PostFitShapesFromWorkspace -w Full2016_noHIPM_leadinglepPT_sr_2j_B2.root -d Full2016_noHIPM_leadinglepPT_sr_2j_B2.txt -o output_2016_noHIPM_leadinglepPT_sr_2j_B2_postFit.root --sampling -f ${fit_result} --total-shapes --postfit
PostFitShapesFromWorkspace -w Full2016_noHIPM_leadinglepPT_sr_2j_B3.root -d Full2016_noHIPM_leadinglepPT_sr_2j_B3.txt -o output_2016_noHIPM_leadinglepPT_sr_2j_B3_postFit.root --sampling -f ${fit_result} --total-shapes --postfit
PostFitShapesFromWorkspace -w Full2016_noHIPM_leadinglepPT_sr_2j_B4.root -d Full2016_noHIPM_leadinglepPT_sr_2j_B4.txt -o output_2016_noHIPM_leadinglepPT_sr_2j_B4_postFit.root --sampling -f ${fit_result} --total-shapes --postfit
PostFitShapesFromWorkspace -w Full2016_noHIPM_leadinglepPT_sr_2j_B5.root -d Full2016_noHIPM_leadinglepPT_sr_2j_B5.txt -o output_2016_noHIPM_leadinglepPT_sr_2j_B5_postFit.root --sampling -f ${fit_result} --total-shapes --postfit
PostFitShapesFromWorkspace -w Full2016_noHIPM_leadinglepPT_sr_2j_B6.root -d Full2016_noHIPM_leadinglepPT_sr_2j_B6.txt -o output_2016_noHIPM_leadinglepPT_sr_2j_B6_postFit.root --sampling -f ${fit_result} --total-shapes --postfit
PostFitShapesFromWorkspace -w Full2016_noHIPM_leadinglepPT_sr_2j_B7.root -d Full2016_noHIPM_leadinglepPT_sr_2j_B7.txt -o output_2016_noHIPM_leadinglepPT_sr_2j_B7_postFit.root --sampling -f ${fit_result} --total-shapes --postfit


PostFitShapesFromWorkspace -w Full2017_leadinglepPT_sr_0j_B0.root -d Full2017_leadinglepPT_sr_0j_B0.txt -o output_2017_leadinglepPT_sr_0j_B0_postFit.root --sampling -f ${fit_result} --total-shapes --postfit
PostFitShapesFromWorkspace -w Full2017_leadinglepPT_sr_0j_B1.root -d Full2017_leadinglepPT_sr_0j_B1.txt -o output_2017_leadinglepPT_sr_0j_B1_postFit.root --sampling -f ${fit_result} --total-shapes --postfit
PostFitShapesFromWorkspace -w Full2017_leadinglepPT_sr_0j_B2.root -d Full2017_leadinglepPT_sr_0j_B2.txt -o output_2017_leadinglepPT_sr_0j_B2_postFit.root --sampling -f ${fit_result} --total-shapes --postfit
PostFitShapesFromWorkspace -w Full2017_leadinglepPT_sr_0j_B3.root -d Full2017_leadinglepPT_sr_0j_B3.txt -o output_2017_leadinglepPT_sr_0j_B3_postFit.root --sampling -f ${fit_result} --total-shapes --postfit
PostFitShapesFromWorkspace -w Full2017_leadinglepPT_sr_0j_B4.root -d Full2017_leadinglepPT_sr_0j_B4.txt -o output_2017_leadinglepPT_sr_0j_B4_postFit.root --sampling -f ${fit_result} --total-shapes --postfit
PostFitShapesFromWorkspace -w Full2017_leadinglepPT_sr_0j_B5.root -d Full2017_leadinglepPT_sr_0j_B5.txt -o output_2017_leadinglepPT_sr_0j_B5_postFit.root --sampling -f ${fit_result} --total-shapes --postfit
PostFitShapesFromWorkspace -w Full2017_leadinglepPT_sr_0j_B6.root -d Full2017_leadinglepPT_sr_0j_B6.txt -o output_2017_leadinglepPT_sr_0j_B6_postFit.root --sampling -f ${fit_result} --total-shapes --postfit
PostFitShapesFromWorkspace -w Full2017_leadinglepPT_sr_0j_B7.root -d Full2017_leadinglepPT_sr_0j_B7.txt -o output_2017_leadinglepPT_sr_0j_B7_postFit.root --sampling -f ${fit_result} --total-shapes --postfit

PostFitShapesFromWorkspace -w Full2017_leadinglepPT_sr_1j_B0.root -d Full2017_leadinglepPT_sr_1j_B0.txt -o output_2017_leadinglepPT_sr_1j_B0_postFit.root --sampling -f ${fit_result} --total-shapes --postfit
PostFitShapesFromWorkspace -w Full2017_leadinglepPT_sr_1j_B1.root -d Full2017_leadinglepPT_sr_1j_B1.txt -o output_2017_leadinglepPT_sr_1j_B1_postFit.root --sampling -f ${fit_result} --total-shapes --postfit
PostFitShapesFromWorkspace -w Full2017_leadinglepPT_sr_1j_B2.root -d Full2017_leadinglepPT_sr_1j_B2.txt -o output_2017_leadinglepPT_sr_1j_B2_postFit.root --sampling -f ${fit_result} --total-shapes --postfit
PostFitShapesFromWorkspace -w Full2017_leadinglepPT_sr_1j_B3.root -d Full2017_leadinglepPT_sr_1j_B3.txt -o output_2017_leadinglepPT_sr_1j_B3_postFit.root --sampling -f ${fit_result} --total-shapes --postfit
PostFitShapesFromWorkspace -w Full2017_leadinglepPT_sr_1j_B4.root -d Full2017_leadinglepPT_sr_1j_B4.txt -o output_2017_leadinglepPT_sr_1j_B4_postFit.root --sampling -f ${fit_result} --total-shapes --postfit
PostFitShapesFromWorkspace -w Full2017_leadinglepPT_sr_1j_B5.root -d Full2017_leadinglepPT_sr_1j_B5.txt -o output_2017_leadinglepPT_sr_1j_B5_postFit.root --sampling -f ${fit_result} --total-shapes --postfit
PostFitShapesFromWorkspace -w Full2017_leadinglepPT_sr_1j_B6.root -d Full2017_leadinglepPT_sr_1j_B6.txt -o output_2017_leadinglepPT_sr_1j_B6_postFit.root --sampling -f ${fit_result} --total-shapes --postfit
PostFitShapesFromWorkspace -w Full2017_leadinglepPT_sr_1j_B7.root -d Full2017_leadinglepPT_sr_1j_B7.txt -o output_2017_leadinglepPT_sr_1j_B7_postFit.root --sampling -f ${fit_result} --total-shapes --postfit

PostFitShapesFromWorkspace -w Full2017_leadinglepPT_sr_2j_B0.root -d Full2017_leadinglepPT_sr_2j_B0.txt -o output_2017_leadinglepPT_sr_2j_B0_postFit.root --sampling -f ${fit_result} --total-shapes --postfit
PostFitShapesFromWorkspace -w Full2017_leadinglepPT_sr_2j_B1.root -d Full2017_leadinglepPT_sr_2j_B1.txt -o output_2017_leadinglepPT_sr_2j_B1_postFit.root --sampling -f ${fit_result} --total-shapes --postfit
PostFitShapesFromWorkspace -w Full2017_leadinglepPT_sr_2j_B2.root -d Full2017_leadinglepPT_sr_2j_B2.txt -o output_2017_leadinglepPT_sr_2j_B2_postFit.root --sampling -f ${fit_result} --total-shapes --postfit
PostFitShapesFromWorkspace -w Full2017_leadinglepPT_sr_2j_B3.root -d Full2017_leadinglepPT_sr_2j_B3.txt -o output_2017_leadinglepPT_sr_2j_B3_postFit.root --sampling -f ${fit_result} --total-shapes --postfit
PostFitShapesFromWorkspace -w Full2017_leadinglepPT_sr_2j_B4.root -d Full2017_leadinglepPT_sr_2j_B4.txt -o output_2017_leadinglepPT_sr_2j_B4_postFit.root --sampling -f ${fit_result} --total-shapes --postfit
PostFitShapesFromWorkspace -w Full2017_leadinglepPT_sr_2j_B5.root -d Full2017_leadinglepPT_sr_2j_B5.txt -o output_2017_leadinglepPT_sr_2j_B5_postFit.root --sampling -f ${fit_result} --total-shapes --postfit
PostFitShapesFromWorkspace -w Full2017_leadinglepPT_sr_2j_B6.root -d Full2017_leadinglepPT_sr_2j_B6.txt -o output_2017_leadinglepPT_sr_2j_B6_postFit.root --sampling -f ${fit_result} --total-shapes --postfit
PostFitShapesFromWorkspace -w Full2017_leadinglepPT_sr_2j_B7.root -d Full2017_leadinglepPT_sr_2j_B7.txt -o output_2017_leadinglepPT_sr_2j_B7_postFit.root --sampling -f ${fit_result} --total-shapes --postfit


PostFitShapesFromWorkspace -w Full2018_leadinglepPT_sr_0j_B0.root -d Full2018_leadinglepPT_sr_0j_B0.txt -o output_2018_leadinglepPT_sr_0j_B0_postFit.root --sampling -f ${fit_result} --total-shapes --postfit
PostFitShapesFromWorkspace -w Full2018_leadinglepPT_sr_0j_B1.root -d Full2018_leadinglepPT_sr_0j_B1.txt -o output_2018_leadinglepPT_sr_0j_B1_postFit.root --sampling -f ${fit_result} --total-shapes --postfit
PostFitShapesFromWorkspace -w Full2018_leadinglepPT_sr_0j_B2.root -d Full2018_leadinglepPT_sr_0j_B2.txt -o output_2018_leadinglepPT_sr_0j_B2_postFit.root --sampling -f ${fit_result} --total-shapes --postfit
PostFitShapesFromWorkspace -w Full2018_leadinglepPT_sr_0j_B3.root -d Full2018_leadinglepPT_sr_0j_B3.txt -o output_2018_leadinglepPT_sr_0j_B3_postFit.root --sampling -f ${fit_result} --total-shapes --postfit
PostFitShapesFromWorkspace -w Full2018_leadinglepPT_sr_0j_B4.root -d Full2018_leadinglepPT_sr_0j_B4.txt -o output_2018_leadinglepPT_sr_0j_B4_postFit.root --sampling -f ${fit_result} --total-shapes --postfit
PostFitShapesFromWorkspace -w Full2018_leadinglepPT_sr_0j_B5.root -d Full2018_leadinglepPT_sr_0j_B5.txt -o output_2018_leadinglepPT_sr_0j_B5_postFit.root --sampling -f ${fit_result} --total-shapes --postfit
PostFitShapesFromWorkspace -w Full2018_leadinglepPT_sr_0j_B6.root -d Full2018_leadinglepPT_sr_0j_B6.txt -o output_2018_leadinglepPT_sr_0j_B6_postFit.root --sampling -f ${fit_result} --total-shapes --postfit
PostFitShapesFromWorkspace -w Full2018_leadinglepPT_sr_0j_B7.root -d Full2018_leadinglepPT_sr_0j_B7.txt -o output_2018_leadinglepPT_sr_0j_B7_postFit.root --sampling -f ${fit_result} --total-shapes --postfit

PostFitShapesFromWorkspace -w Full2018_leadinglepPT_sr_1j_B0.root -d Full2018_leadinglepPT_sr_1j_B0.txt -o output_2018_leadinglepPT_sr_1j_B0_postFit.root --sampling -f ${fit_result} --total-shapes --postfit
PostFitShapesFromWorkspace -w Full2018_leadinglepPT_sr_1j_B1.root -d Full2018_leadinglepPT_sr_1j_B1.txt -o output_2018_leadinglepPT_sr_1j_B1_postFit.root --sampling -f ${fit_result} --total-shapes --postfit
PostFitShapesFromWorkspace -w Full2018_leadinglepPT_sr_1j_B2.root -d Full2018_leadinglepPT_sr_1j_B2.txt -o output_2018_leadinglepPT_sr_1j_B2_postFit.root --sampling -f ${fit_result} --total-shapes --postfit
PostFitShapesFromWorkspace -w Full2018_leadinglepPT_sr_1j_B3.root -d Full2018_leadinglepPT_sr_1j_B3.txt -o output_2018_leadinglepPT_sr_1j_B3_postFit.root --sampling -f ${fit_result} --total-shapes --postfit
PostFitShapesFromWorkspace -w Full2018_leadinglepPT_sr_1j_B4.root -d Full2018_leadinglepPT_sr_1j_B4.txt -o output_2018_leadinglepPT_sr_1j_B4_postFit.root --sampling -f ${fit_result} --total-shapes --postfit
PostFitShapesFromWorkspace -w Full2018_leadinglepPT_sr_1j_B5.root -d Full2018_leadinglepPT_sr_1j_B5.txt -o output_2018_leadinglepPT_sr_1j_B5_postFit.root --sampling -f ${fit_result} --total-shapes --postfit
PostFitShapesFromWorkspace -w Full2018_leadinglepPT_sr_1j_B6.root -d Full2018_leadinglepPT_sr_1j_B6.txt -o output_2018_leadinglepPT_sr_1j_B6_postFit.root --sampling -f ${fit_result} --total-shapes --postfit
PostFitShapesFromWorkspace -w Full2018_leadinglepPT_sr_1j_B7.root -d Full2018_leadinglepPT_sr_1j_B7.txt -o output_2018_leadinglepPT_sr_1j_B7_postFit.root --sampling -f ${fit_result} --total-shapes --postfit

PostFitShapesFromWorkspace -w Full2018_leadinglepPT_sr_2j_B0.root -d Full2018_leadinglepPT_sr_2j_B0.txt -o output_2018_leadinglepPT_sr_2j_B0_postFit.root --sampling -f ${fit_result} --total-shapes --postfit
PostFitShapesFromWorkspace -w Full2018_leadinglepPT_sr_2j_B1.root -d Full2018_leadinglepPT_sr_2j_B1.txt -o output_2018_leadinglepPT_sr_2j_B1_postFit.root --sampling -f ${fit_result} --total-shapes --postfit
PostFitShapesFromWorkspace -w Full2018_leadinglepPT_sr_2j_B2.root -d Full2018_leadinglepPT_sr_2j_B2.txt -o output_2018_leadinglepPT_sr_2j_B2_postFit.root --sampling -f ${fit_result} --total-shapes --postfit
PostFitShapesFromWorkspace -w Full2018_leadinglepPT_sr_2j_B3.root -d Full2018_leadinglepPT_sr_2j_B3.txt -o output_2018_leadinglepPT_sr_2j_B3_postFit.root --sampling -f ${fit_result} --total-shapes --postfit
PostFitShapesFromWorkspace -w Full2018_leadinglepPT_sr_2j_B4.root -d Full2018_leadinglepPT_sr_2j_B4.txt -o output_2018_leadinglepPT_sr_2j_B4_postFit.root --sampling -f ${fit_result} --total-shapes --postfit
PostFitShapesFromWorkspace -w Full2018_leadinglepPT_sr_2j_B5.root -d Full2018_leadinglepPT_sr_2j_B5.txt -o output_2018_leadinglepPT_sr_2j_B5_postFit.root --sampling -f ${fit_result} --total-shapes --postfit
PostFitShapesFromWorkspace -w Full2018_leadinglepPT_sr_2j_B6.root -d Full2018_leadinglepPT_sr_2j_B6.txt -o output_2018_leadinglepPT_sr_2j_B6_postFit.root --sampling -f ${fit_result} --total-shapes --postfit
PostFitShapesFromWorkspace -w Full2018_leadinglepPT_sr_2j_B7.root -d Full2018_leadinglepPT_sr_2j_B7.txt -o output_2018_leadinglepPT_sr_2j_B7_postFit.root --sampling -f ${fit_result} --total-shapes --postfit

PostFitShapesFromWorkspace -w FullRunII_leadinglepPT_sr_0j_B0.root -d FullRunII_leadinglepPT_sr_0j_B0.txt -o output_FullRunII_leadinglepPT_sr_0j_B0_postFit.root --sampling -f ${fit_result} --total-shapes --postfit
PostFitShapesFromWorkspace -w FullRunII_leadinglepPT_sr_0j_B1.root -d FullRunII_leadinglepPT_sr_0j_B1.txt -o output_FullRunII_leadinglepPT_sr_0j_B1_postFit.root --sampling -f ${fit_result} --total-shapes --postfit
PostFitShapesFromWorkspace -w FullRunII_leadinglepPT_sr_0j_B2.root -d FullRunII_leadinglepPT_sr_0j_B2.txt -o output_FullRunII_leadinglepPT_sr_0j_B2_postFit.root --sampling -f ${fit_result} --total-shapes --postfit
PostFitShapesFromWorkspace -w FullRunII_leadinglepPT_sr_0j_B3.root -d FullRunII_leadinglepPT_sr_0j_B3.txt -o output_FullRunII_leadinglepPT_sr_0j_B3_postFit.root --sampling -f ${fit_result} --total-shapes --postfit
PostFitShapesFromWorkspace -w FullRunII_leadinglepPT_sr_0j_B4.root -d FullRunII_leadinglepPT_sr_0j_B4.txt -o output_FullRunII_leadinglepPT_sr_0j_B4_postFit.root --sampling -f ${fit_result} --total-shapes --postfit
PostFitShapesFromWorkspace -w FullRunII_leadinglepPT_sr_0j_B5.root -d FullRunII_leadinglepPT_sr_0j_B5.txt -o output_FullRunII_leadinglepPT_sr_0j_B5_postFit.root --sampling -f ${fit_result} --total-shapes --postfit
PostFitShapesFromWorkspace -w FullRunII_leadinglepPT_sr_0j_B6.root -d FullRunII_leadinglepPT_sr_0j_B6.txt -o output_FullRunII_leadinglepPT_sr_0j_B6_postFit.root --sampling -f ${fit_result} --total-shapes --postfit
PostFitShapesFromWorkspace -w FullRunII_leadinglepPT_sr_0j_B7.root -d FullRunII_leadinglepPT_sr_0j_B7.txt -o output_FullRunII_leadinglepPT_sr_0j_B7_postFit.root --sampling -f ${fit_result} --total-shapes --postfit

PostFitShapesFromWorkspace -w FullRunII_leadinglepPT_sr_1j_B0.root -d FullRunII_leadinglepPT_sr_1j_B0.txt -o output_FullRunII_leadinglepPT_sr_1j_B0_postFit.root --sampling -f ${fit_result} --total-shapes --postfit
PostFitShapesFromWorkspace -w FullRunII_leadinglepPT_sr_1j_B1.root -d FullRunII_leadinglepPT_sr_1j_B1.txt -o output_FullRunII_leadinglepPT_sr_1j_B1_postFit.root --sampling -f ${fit_result} --total-shapes --postfit
PostFitShapesFromWorkspace -w FullRunII_leadinglepPT_sr_1j_B2.root -d FullRunII_leadinglepPT_sr_1j_B2.txt -o output_FullRunII_leadinglepPT_sr_1j_B2_postFit.root --sampling -f ${fit_result} --total-shapes --postfit
PostFitShapesFromWorkspace -w FullRunII_leadinglepPT_sr_1j_B3.root -d FullRunII_leadinglepPT_sr_1j_B3.txt -o output_FullRunII_leadinglepPT_sr_1j_B3_postFit.root --sampling -f ${fit_result} --total-shapes --postfit
PostFitShapesFromWorkspace -w FullRunII_leadinglepPT_sr_1j_B4.root -d FullRunII_leadinglepPT_sr_1j_B4.txt -o output_FullRunII_leadinglepPT_sr_1j_B4_postFit.root --sampling -f ${fit_result} --total-shapes --postfit
PostFitShapesFromWorkspace -w FullRunII_leadinglepPT_sr_1j_B5.root -d FullRunII_leadinglepPT_sr_1j_B5.txt -o output_FullRunII_leadinglepPT_sr_1j_B5_postFit.root --sampling -f ${fit_result} --total-shapes --postfit
PostFitShapesFromWorkspace -w FullRunII_leadinglepPT_sr_1j_B6.root -d FullRunII_leadinglepPT_sr_1j_B6.txt -o output_FullRunII_leadinglepPT_sr_1j_B6_postFit.root --sampling -f ${fit_result} --total-shapes --postfit
PostFitShapesFromWorkspace -w FullRunII_leadinglepPT_sr_1j_B7.root -d FullRunII_leadinglepPT_sr_1j_B7.txt -o output_FullRunII_leadinglepPT_sr_1j_B7_postFit.root --sampling -f ${fit_result} --total-shapes --postfit

PostFitShapesFromWorkspace -w FullRunII_leadinglepPT_sr_2j_B0.root -d FullRunII_leadinglepPT_sr_2j_B0.txt -o output_FullRunII_leadinglepPT_sr_2j_B0_postFit.root --sampling -f ${fit_result} --total-shapes --postfit
PostFitShapesFromWorkspace -w FullRunII_leadinglepPT_sr_2j_B1.root -d FullRunII_leadinglepPT_sr_2j_B1.txt -o output_FullRunII_leadinglepPT_sr_2j_B1_postFit.root --sampling -f ${fit_result} --total-shapes --postfit
PostFitShapesFromWorkspace -w FullRunII_leadinglepPT_sr_2j_B2.root -d FullRunII_leadinglepPT_sr_2j_B2.txt -o output_FullRunII_leadinglepPT_sr_2j_B2_postFit.root --sampling -f ${fit_result} --total-shapes --postfit
PostFitShapesFromWorkspace -w FullRunII_leadinglepPT_sr_2j_B3.root -d FullRunII_leadinglepPT_sr_2j_B3.txt -o output_FullRunII_leadinglepPT_sr_2j_B3_postFit.root --sampling -f ${fit_result} --total-shapes --postfit
PostFitShapesFromWorkspace -w FullRunII_leadinglepPT_sr_2j_B4.root -d FullRunII_leadinglepPT_sr_2j_B4.txt -o output_FullRunII_leadinglepPT_sr_2j_B4_postFit.root --sampling -f ${fit_result} --total-shapes --postfit
PostFitShapesFromWorkspace -w FullRunII_leadinglepPT_sr_2j_B5.root -d FullRunII_leadinglepPT_sr_2j_B5.txt -o output_FullRunII_leadinglepPT_sr_2j_B5_postFit.root --sampling -f ${fit_result} --total-shapes --postfit
PostFitShapesFromWorkspace -w FullRunII_leadinglepPT_sr_2j_B6.root -d FullRunII_leadinglepPT_sr_2j_B6.txt -o output_FullRunII_leadinglepPT_sr_2j_B6_postFit.root --sampling -f ${fit_result} --total-shapes --postfit
PostFitShapesFromWorkspace -w FullRunII_leadinglepPT_sr_2j_B7.root -d FullRunII_leadinglepPT_sr_2j_B7.txt -o output_FullRunII_leadinglepPT_sr_2j_B7_postFit.root --sampling -f ${fit_result} --total-shapes --postfit
