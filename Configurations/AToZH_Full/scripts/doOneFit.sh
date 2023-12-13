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
cd /afs/cern.ch/work/s/srudrabh/AZH/postprocessing/CMSSW_10_6_4/src/PlotsConfigurations/Configurations/AToZH_Full/2018_v9/

configFile='configuration_forDatacards.py'

## scrape tag from configuration file and
## create parent directory to hold per-mass-point combine output
tag=$(cat $configFile | awk '/tag =/ {print $3}' | tr -d \')
datacardDir="datacards_condor_${tag}"
#datacardDir="datacards_1000_600"
#mkdir higgsCombine_$tag

echo -e "\n\ndatacard directory: $datacardDir"
echo -e "\nrunning the fit..."


line=$1 #$((${1}+1))
mass_point=$(sed "${line}q;d" ../scripts/signals.txt)


#------------------------------------------------------------------------------
mA=$(echo ${mass_point} | awk -F 'MA-' '{print $2}' | awk -F '_MH-' '{print $1}')
mH=$(echo ${mass_point} | awk -F '_MH-' '{print $2}' | awk -F "')" '{print $1}')
echo -e "\n\n--------------------------------------------------"
echo "          next mass point = ($mA, $mH)"
echo "--------------------------------------------------"


xsec_mA_mH=$(cat test.json | jq ".[\"${mA},${mH}\"]")
echo "xsec_mA_${mA}_mH_${mH} = ${xsec_mA_mH}"

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
#cd higgsCombine_${tag}/
fitTag="_AZH_mA${mA}_mH${mH}_SR"
echo -e "\n\n{doFit.sh} >> combine -M AsymptoticLimits -m 125 --run blind -d ${combinedPath}/workspace.root -n $fitTag"
combine -M AsymptoticLimits -m 125 --run blind -d ${combinedPath}/workspace.root -n $fitTag > CL_${mass_point}.log
cat CL_${mass_point}.log
echo -e "\n\n{doFit.sh} >> combine -M Significance -t -1 --expectSignal=${xsec_mA_mH} ${combinedPath}/workspace.root -n $fitTag"
combine -M Significance -t -1 --expectSignal=${xsec_mA_mH} ${combinedPath}/workspace.root -n $fitTag > ExpSig_${mass_point}.log
cat ExpSig_${mass_point}.log

echo -e "\n\ndone :)"
