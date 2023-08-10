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

cd ../${1}_v9/

## scrape mass points from samples_all.py
#for only few mass points, use samples.py
samplesFile='samples_all.py'

### scrape names of files from input configuration file
configFile='configuration_forDatacards.py'
var=$(cat $configFile | awk '/variablesFile =/ {print $3}' | tr -d \')
struct=$(cat $configFile | awk '/structureFile =/ {print $3}' | tr -d \')

variablesFile='../scripts/variables_fit_forDatacards.py'
structureFile='../scripts/structure_all_forDatacards.py'

#create parent directory to hold per-mass-point datacards
tag=$(cat $configFile | awk '/tag =/ {print $3}' | tr -d \')
mkdir ./datacards_$tag

echo -e "\n\ntag: $tag"
echo -e "samples list: $samplesFile"
echo -e "configuration file: $configFile"
echo -e "variables file: $variablesFile"
echo -e "structure file: $structureFile"
echo -e "\nstarting datacard making... temporary copies of config files will be created..."

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


        ### change mass point from tmp place holders to values from samplesFile
        #------------------------------------------------------------------------------
        variablesFileTmp=$(echo "$var" | sed -e 's/.py/__tmp.py/g')
        sed -e "s/tmp1/${mA}/g; s/tmp2/${mH}/g" $variablesFile > $variablesFileTmp
        echo "          variables file updated..."

        structureFileTmp=$(echo "$struct" | sed -e 's/.py/__tmp.py/g')
        awk -v a="AZH_${mA}_${mH}" '$0 ~ a {sub("0,","0}#,",$4)} 1' $structureFile > $structureFileTmp  
        echo "          structure file updated..."

        configFileTmp=$(echo "configuration.py" | sed -e 's/.py/__tmp.py/g')  
        sed -e "s|'datacards_'+tag|'datacards_'+tag+'/mA_${mA}_mH_${mH}'|g; s/${var}/${variablesFileTmp}/g; s/${struct}/${structureFileTmp}/g" $configFile > $configFileTmp
        echo "          configuration file updated..."

        ### run mkDatacards
        #------------------------------------------------------------------------------
        echo -e "\nmaking datacards for (mA,mH) = ($mA, $mH)"
        echo -e "\n\n{doDatacards.sh} >> mkDatacards.py --pycfg=$configFileTmp --inputFile=rootFiles_${tag}/plots_${tag}.root"
        mkDatacards.py --pycfg=$configFileTmp --inputFile=rootFiles_${tag}/plots_${tag}.root

    fi

done<"$samplesFile"

echo -e "\n\ncleaning up temporary config files..."
rm ./*__tmp.py

echo -e "\n\ndone :)"
echo -e "per-mass-point datacards can be found in parent folder ./datacards_${tag}\n"
