#! /bin/sh
#------------------------------------------------------------------------
# usage: ./doFit.sh <year>  (year = 2018,2017,2016HIPM,2016noHIPM)
#
# NOTE: doFit.sh will use the given year's configuration.py and
#       samples_all.py, so make sure they are up-to-date.
#------------------------------------------------------------------------

cd ../${1}_v9/
cd /afs/cern.ch/work/s/srudrabh/AZH/postprocessing/combine/CMSSW_11_3_4/src/ 
export SCRAM_ARCH=slc7_amd64_gcc700
source /cvmfs/cms.cern.ch/cmsset_default.sh
eval `scramv1 runtime -sh`
cd -
## scrape mass points from samples_all.py
## for only few mass points, use samples.py
samplesFile='samples.py'

## scrape tag from configuration file and
## create parent directory to hold per-mass-point combine output
tag=$(cat configuration.py | awk '/tag =/ {print $3}' | tr -d \')
datacardDir="datacards_test_${tag}"
mkdir higgsCombine_$tag

echo -e "\n\ndatacard directory: $datacardDir"
echo -e "samples list: $samplesFile"
echo -e "\nrunning the fit..."

while IFS= read -r line
do

    [[ "$line" =~ ^#.*$ ]] && continue
    if [[ "$line" == *"AToZHToLLTTbar"* ]] 
    then

        ### scrape mass values from current line in samplesFile
        #------------------------------------------------------------------------------
        mA=$(echo "$line" | awk -F '_MA-' '{print $2}' | awk -F '_MH-' '{print $1}')
        mH=$(echo "$line" | awk -F '_MH-' '{print $2}' | awk -F "')" '{print $1}')
        echo -e "\n\n--------------------------------------------------"
        echo "          next mass point = ($mA, $mH)"
        echo "--------------------------------------------------"

### make workspaces
        breq_path="${datacardDir}/mA_${mA}_mH_${mH}/breq_SR/ellipse_mA_${mA}_mH_${mH}/datacard.txt"
        bveto_1j_path="${datacardDir}/mA_${mA}_mH_${mH}/bveto_1j_SR/ellipse_onebjet_mA_${mA}_mH_${mH}/datacard.txt"
        bveto_4j_path="${datacardDir}/mA_${mA}_mH_${mH}/bveto_4j/events/datacard.txt"
        combinedPath="${datacardDir}/mA_${mA}_mH_${mH}/combined_SR/"
        mkdir $combinedPath
        combineCards.py breq_SR=$breq_path bveto_1j_SR=$bveto_1j_path bveto_4j_path=$bveto_4j_path > $combinedPath/datacard.txt
        
        echo -e "\n{doFit.sh} >> text2workspace.py ${combinedPath}/datacard.txt -m 125 -o $combinedPath/workspace.root"
        text2workspace.py $combinedPath/datacard.txt -m 125 -o ${combinedPath}/workspace.root

       
        ### run AsymptoticLimits
        cd higgsCombine_${tag}/
        fitTag="_AZH_mA${mA}_mH${mH}_SR"
        echo -e "\n\n{doFit.sh} >> combine -M AsymptoticLimits -m 125 --run blind -d ${combinedPath}/workspace.root -n $fitTag"
        combine -M AsymptoticLimits -m 125 --run blind -d ../${combinedPath}/workspace.root -n $fitTag > CL.txt
        cat CL.txt

        ### save CLs to text file
        #------------------------------------------------------------------------------
        CL_2=$(grep "2.5%" CL.txt | awk '{print $5}')
        CL_16=$(grep "16.0%" CL.txt | awk '{print $5}')
        CL_50=$(grep "50.0%" CL.txt | awk '{print $5}')
        CL_84=$(grep "84.0%" CL.txt | awk '{print $5}')
        CL_98=$(grep "97.5%" CL.txt | awk '{print $5}')
        
        echo "$mA $mH $CL_2 $CL_16 $CL_50 $CL_84 $CL_98" >> CL.log
        echo -e "\n{doFit.sh} >> CLs saved to CL.log"
        cd ..

    fi

done<"$samplesFile"

echo -e "\n\ncleaning up temporary files..."
rm higgsCombine_${tag}/CL.txt

echo -e "\n\ndone :)"
echo -e "per-mass-point higgsCombine files and CL.log found in parent folder ./higgsCombine_${tag}\n"
