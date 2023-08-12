#! /bin/sh
#------------------------------------------------------------------------
# usage: ./doDatacards.sh <year>  (year = 2018,2017,2016HIPM,2016noHIPM)
#
# NOTE: doDatacards.sh will use the given year's configuration.py and
#         samples_all.py, but uses the 'forDatacards' versions of 
#       variables.py and structure.py found in scripts directory with
#         'tmp1' and 'tmp2' in place of the values for mA and mH
#         e.g. ellipse_mA_900_mH_400 --> ellipses_mA_tmp1_mH_tmp2
#------------------------------------------------------------------------

cd /afs/cern.ch/work/s/srudrabh/AZH/postprocessing/CMSSW_10_6_4/src/
export SCRAM_ARCH=slc7_amd64_gcc700
source /cvmfs/cms.cern.ch/cmsset_default.sh
eval `scramv1 runtime -sh`
cd /afs/cern.ch/work/s/srudrabh/AZH/postprocessing/CMSSW_10_6_4/src/PlotsConfigurations/Configurations/AToZH_Full/2018_v9/


### scrape names of files from input configuration file
configFile='configuration_forDatacards.py'
var=$(cat $configFile | awk '/variablesFile =/ {print $3}' | tr -d \')
struct=$(cat $configFile | awk '/structureFile =/ {print $3}' | tr -d \')

variablesFile='../scripts/variables_fit_forDatacards.py'
structureFile='../scripts/structure_all_forDatacards.py'

#create parent directory to hold per-mass-point datacards
tag=$(cat $configFile | awk '/tag =/ {print $3}' | tr -d \')
mkdir ./datacards_condor_$tag

echo -e "\n\ntag: $tag"
echo -e "configuration file: $configFile"
echo -e "variables file: $variablesFile"
echo -e "structure file: $structureFile"
echo -e "\nstarting datacard making... temporary copies of config files will be created..."

line=$((${1}+1))
mass_point=$(sed "${line}q;d" ../scripts/signals.txt) 


#------------------------------------------------------------------------------
mA=$(echo ${mass_point} | awk -F 'MA-' '{print $2}' | awk -F '_MH-' '{print $1}')
mH=$(echo ${mass_point} | awk -F '_MH-' '{print $2}' | awk -F "')" '{print $1}')
echo -e "\n\n--------------------------------------------------"
echo "          next mass point = ($mA, $mH)"
echo "--------------------------------------------------"


### change mass point from tmp place holders to values from samplesFile
#------------------------------------------------------------------------------
variablesFileTmp=$(echo "$var" | sed -e "s/.py/_mA_${mA}_mH_${mH}_tmp.py/g")
sed -e "s/tmp1/${mA}/g; s/tmp2/${mH}/g" ${variablesFile} > ${variablesFileTmp}
echo "          variables file updated..."
echo $variablesFileTmp
structureFileTmp=$(echo "$struct" | sed -e "s/.py/_mA_${mA}_mH_${mH}_tmp.py/g")
awk -v a="AZH_${mA}_${mH}" '$0 ~ a {sub("0,","0}#,",$4)} 1' ${structureFile} > ${structureFileTmp}  
echo "          structure file updated..."
echo ${structureFileTmp}
configFileTmp=$(echo "configuration_forDatacards.py" | sed -e "s/.py/_mA_${mA}_mH_${mH}_tmp.py/g")  
sed -e "s|'datacards_condor_'+tag|'datacards_condor_'+tag+'/mA_${mA}_mH_${mH}'|g" ${configFile} > ${configFileTmp}
echo ${configFileTmp}

        ### run mkDatacards
#------------------------------------------------------------------------------
echo -e "\nmaking datacards for (mA,mH) = ($mA, $mH)"
echo -e "\n\n{doDatacards.sh} >> mkDatacards.py --pycfg=${configFileTmp} --inputFile=rootFiles_${tag}/plots_${tag}.root --structureFile=${structureFileTmp} --variablesFile=${variablesFileTmp}"

mkDatacards.py --pycfg=${configFileTmp} --inputFile=rootFiles_${tag}/plots_${tag}.root --structureFile=${structureFileTmp} --variablesFile=${variablesFileTmp} 


echo ${structureFileTmp}
echo ${variablesFileTmp}

echo -e "\n\ncleaning up temporary config files..."
rm ${structureFileTmp}
rm ${variablesFileTmp}
rm ${configFileTmp}

echo -e "\n\ndone :)"
echo -e "per-mass-point datacards can be found in parent folder ./datacards_condor_${tag}\n"
