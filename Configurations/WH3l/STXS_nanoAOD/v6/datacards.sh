#!/bin/bash

set -e 

DIR=$PWD

inputPRUNE=${CMSSW_BASE}/src/PlotsConfigurations/Configurations/ZH3l/scripts/inputs_to_prune_VHlep.py

for year in Full2016nano_STXS_1p1 Full2017nano_STXS_1p1 Full2018nano_STXS_1p1
do
    echo " --> $year"
    cd $DIR
	    
    YEAR=`echo $year | awk -F "Full" '{print $2}' | awk -F "nano" '{print $1}'`
    cd $year
    for region in OSSF SSSF
    do
        echo "  --> $region"

	echo "suppressNegativeBins.py rootFiles_WH3l_${YEAR}_v6_STXS_${region}/plots_WH3l_${YEAR}_v6_STXS_${region}.root"
	python ${CMSSW_BASE}/src/PlotsConfigurations/Configurations/Template/STXS_VHlep/suppressNegativeBins.py rootFiles_WH3l_${YEAR}_v6_STXS_${region}/plots_WH3l_${YEAR}_v6_STXS_${region}.root

	echo "mkDatacards.py --pycfg configuration_${region}.py --inputFile rootFiles_WH3l_${YEAR}_v6_STXS_${region}/plots_WH3l_${YEAR}_v6_STXS_${region}.root"
	mkDatacards.py --pycfg configuration_${region}.py --inputFile rootFiles_WH3l_${YEAR}_v6_STXS_${region}/plots_WH3l_${YEAR}_v6_STXS_${region}.root

	# pruning datacard
	find -L datacards_WH3l_${YEAR}_v6_STXS_${region} -name 'datacard.txt' | egrep 'ptv.......BDTG......bin2|13TeV.events' | while read line
	do 
	    echo "python ${CMSSW_BASE}/src/ModificationDatacards/PruneDatacard.py -d $line -o $line.pruned.txt -i ${inputPRUNE} --suppressFluctuationError=1 -t 0.00001"
	    python ${CMSSW_BASE}/src/ModificationDatacards/PruneDatacard.py -d $line -o $line.pruned.txt -i ${inputPRUNE} --suppressFluctuationError=1 -t 0.00001
	done
    done
done
