#!/bin/bash

# TODO edit -- this should be <file with fit result>:<fit result>
fit_result=multidimfitWW_FullRunII_jetpt0.root:fit_mdf

#mkPostFitCombinedPlot.py --inputFilePostFitShapesFromWorkspace=output_FullRunII_jetpt0_sr_2j_B0.root --outputFile=plot_FullRunII_jetpt0_sr_2j_B0.root --kind=p --cutName=ww2l2v_13TeV_sr_2j_B0 --variable=BDTOutput_2j

#mkPostFitCombinedPlot.py --inputFilePostFitShapesFromWorkspace=output_FullRunII_jetpt0_sr_2j_B0_postFit.root --outputFile=plot_FullRunII_jetpt0_sr_2j_B0_postFit.root --kind=P --cutName=ww2l2v_13TeV_sr_2j_B0 --variable=BDTOutput_2j

##############################################################################
### Run mkPostFitCombinedPlot to convert PostFitShapesFromWorkspace output ###
##############################################################################
: <<'COMMENT'
YEARS=("2016_HIPM" "2016_noHIPM" "2017" "2018" "FullRunII")
JETS=("1j" "2j")
BINS=("B0" "B1" "B2" "B3" "B4" "B5" "B6" "B7" "B8" "B9" "B10")

for year in "${YEARS[@]}"; do
    for jet in "${JETS[@]}"; do
        for bin in "${BINS[@]}"; do
            echo "Running for Year=${year}, Jet=${jet}, Bin=${bin}"
            mkPostFitCombinedPlot.py \
                --inputFilePostFitShapesFromWorkspace="output_${year}_jetpt0_sr_${jet}_${bin}.root" \
                --outputFile="plot_${year}_jetpt0_sr_${jet}_${bin}.root" \
                --kind=p \
                --cutName="ww2l2v_13TeV_sr_${jet}_${bin}" \
                --variable="BDTOutput_${jet}"
        done
    done
done
COMMENT

#########################################
## postfit is kind=P instead of kind=p ##
#########################################
: <<'COMMENT'
for year in "${YEARS[@]}"; do
    for jet in "${JETS[@]}"; do
        for bin in "${BINS[@]}"; do
            echo "Running for Year=${year}, Jet=${jet}, Bin=${bin}"
            mkPostFitCombinedPlot.py \
                --inputFilePostFitShapesFromWorkspace="output_${year}_jetpt0_sr_${jet}_${bin}_postFit.root" \
                --outputFile="plot_${year}_jetpt0_sr_${jet}_${bin}_postFit.root" \
                --kind=P \
                --cutName="ww2l2v_13TeV_sr_${jet}_${bin}" \
                --variable="BDTOutput_${jet}"
        done
    done
done
COMMENT

###############################################################################################################################################
# There should now be configuration_combined.py, cuts_combined.py, variables_combined.py with correct cuts and variable definition
# You will need to define plot file
# Edit the inputFile name and drop onlyCut if you put all the output histograms in the same file above
###############################################################################################################################################

#mkPlot.py --inputFile=plot_FullRunII_jetpt0_sr_2j_B7.root --pycfg=configuration_combined_FullRunII.py --showIntegralLegend=1 --onlyCut=ww2l2v_13TeV_sr_2j_B7 --fileFormats=png,pdf,root

: <<'COMMENT'
YEARS=("FullRunII")
JETS=("1j" "2j")
BINS=("B0" "B1" "B2" "B3" "B4" "B5" "B6" "B7" "B8" "B9" "B10")

for year in "${YEARS[@]}"; do
    for jet in "${JETS[@]}"; do
        for bin in "${BINS[@]}"; do
            echo "Running for Year=${year}, Jet=${jet}, Bin=${bin}"
            mkPlot.py \
                --inputFile="plot_${year}_jetpt0_sr_${jet}_${bin}.root" \
                --pycfg="configuration_combined_${year}.py" \
                --showIntegralLegend=1 \
                --onlyCut="ww2l2v_13TeV_sr_${jet}_${bin}" \
                --fileFormats=png,pdf,root
        done
    done
done
COMMENT

# Replace the  --inputFile=plot_FullRunII_jetpt0_sr_0j_B0.root with  --inputFile=plot_FullRunII_jetpt0_sr_0j_B0_postFit.root for postFit plots
#mkPlot.py --inputFile=plot_FullRunII_jetpt0_sr_1j_B7_postFit.root --pycfg=configuration_combined_FullRunII.py --showIntegralLegend=1 --onlyCut=ww2l2v_13TeV_sr_1j_B7 --fileFormats=png,pdf,root

#: <<'COMMENT'
YEARS=("FullRunII")
JETS=("1j" "2j")
BINS=("B0" "B1" "B2" "B3" "B4" "B5" "B6" "B7" "B8" "B9" "B10")

for year in "${YEARS[@]}"; do
    for jet in "${JETS[@]}"; do
        for bin in "${BINS[@]}"; do
            echo "Running for Year=${year}, Jet=${jet}, Bin=${bin}"
            mkPlot.py \
                --inputFile="plot_${year}_jetpt0_sr_${jet}_${bin}_postFit.root" \
                --pycfg="configuration_combined_${year}.py" \
                --showIntegralLegend=1 \
                --onlyCut="ww2l2v_13TeV_sr_${jet}_${bin}" \
                --fileFormats=png,pdf,root
        done
    done
done
#COMMENT
