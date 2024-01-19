#! /bin/sh
#------------------------------------------------------------------------
# usage: ./doFit.sh <year>  (year = 2018,2017,2016HIPM,2016noHIPM)
#
# NOTE: doFit.sh will use the given year's configuration.py and
#       samples_all.py, so make sure they are up-to-date.
#------------------------------------------------------------------------

cd /afs/cern.ch/work/s/srudrabh/AZH/postprocessing/combine/CMSSW_11_3_4/src/ 
export SCRAM_ARCH=slc7_amd64_gcc700
source /cvmfs/cms.cern.ch/cmsset_default.sh
eval `scramv1 runtime -sh`
cd /afs/cern.ch/work/s/srudrabh/AZH/postprocessing/CMSSW_10_6_4/src/PlotsConfigurations/Configurations/AToZH_Full/


## scrape tag from configuration file and
## create parent directory to hold per-mass-point combine output
datacardDir2017="2017_v9/datacards_condor_AZH_2017_v9_btagSFpatch"
datacardDir2018="2018_v9/datacards_condor_AZH_2018_v9_Full"
datacardDir2016HIPM="2016HIPM_v9/datacards"
datacardDir2016noHIPM="2016noHIPM_v9/datacards"
mkdir /afs/cern.ch/work/s/srudrabh/AZH/postprocessing/CMSSW_10_6_4/src/PlotsConfigurations/Configurations/AToZH_Full/datacards_test
datacardDircomb="datacards_test"
mkdir higgsCombine_comb

echo -e "\n\ndatacard directory: $datacardDir2017, $datacardDir2018, $datacardDir2016HIPM, $datacardDir2016noHIPM"
echo -e "\nrunning the fit..."


line=$((${1}+1))
mass_point=$(sed "${line}q;d" /afs/cern.ch/work/s/srudrabh/AZH/postprocessing/CMSSW_10_6_4/src/PlotsConfigurations/Configurations/AToZH_Full/scripts/signals_test.txt)


#------------------------------------------------------------------------------
mA=$(echo ${mass_point} | awk -F 'MA-' '{print $2}' | awk -F '_MH-' '{print $1}')
mH=$(echo ${mass_point} | awk -F '_MH-' '{print $2}' | awk -F "')" '{print $1}')
echo -e "\n\n--------------------------------------------------"
echo "          next mass point = ($mA, $mH)"
echo "--------------------------------------------------"

xsec_mA_mH=$(python -c "import json; data = json.load(open('./scripts/total_xsec_results.json')); print(data.get('${mA},${mH}', ''))")
echo "xsec_mA_${mA}_mH_${mH} = ${xsec_mA_mH}"

### make workspaces
combinedPath2017="${datacardDir2017}/mA_${mA}_mH_${mH}/combined_SR/datacard_test.txt"
combinedPath2018="${datacardDir2018}/mA_${mA}_mH_${mH}/combined_SR/datacard_test.txt"
combinedPath2016HIPM="${datacardDir2016HIPM}/mA_${mA}_mH_${mH}/combined_SR/datacard_test.txt"
combinedPath2016noHIPM="${datacardDir2016noHIPM}/mA_${mA}_mH_${mH}/combined_SR/datacard_test.txt"
combinedPath="${datacardDircomb}/mA_${mA}_mH_${mH}/"

mkdir $combinedPath
#cd $combinedPath
combineCards.py combined2017=$combinedPath2017 combined2018=$combinedPath2018 combined2016HIPM=$combinedPath2016HIPM combined2016noHIPM=$combinedPath2016noHIPM > $combinedPath/datacard.txt

echo -e "\n{doFit.sh} >> text2workspace.py ${combinedPath}/datacard.txt -m 125 -o $combinedPath/workspace.root"
text2workspace.py $combinedPath/datacard.txt -m 125 -o ${combinedPath}/workspace.root


### run AsymptoticLimits
cd higgsCombine_comb/
fitTag="_AZH_mA${mA}_mH${mH}_SR"
echo -e "\n\n{doFit.sh} >> combine -M AsymptoticLimits -m 125 --run blind -d ${combinedPath}/workspace.root -n $fitTag"
combine -M AsymptoticLimits -m 125 --run blind -d ../${combinedPath}/workspace.root -n $fitTag > CL_${mass_point}.log
cat CL_${mass_point}.log
echo -e "\n\n{doFit.sh} >> combine -M Significance -t -1 --expectSignal=${xsec_mA_mH} ${combinedPath}/workspace.root -n $fitTag"
combine -M Significance -t -1 --expectSignal=${xsec_mA_mH} ../${combinedPath}/workspace.root -n $fitTag > ExpSig_${mass_point}.log
cat ExpSig_${mass_point}.log

echo -e "\n\ndone :)"
