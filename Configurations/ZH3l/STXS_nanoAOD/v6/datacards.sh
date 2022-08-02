#!/bin/bash

set -e 

DIR=$PWD

inputPRUNE=${CMSSW_BASE}/src/PlotsConfigurations/Configurations/ZH3l/scripts/inputs_to_prune_VHlep.py

for year in Full2016nano_STXS_1p1 Full2017nano_STXS_1p1 Full2018nano_STXS_1p1
do
    echo " --> $year"
    YEAR=`echo $year | awk -F "Full" '{print $2}' | awk -F "nano" '{print $1}'`
    cd $DIR; cd $year

    #echo "mkDatacards.py --pycfg configuration.py --inputFile rootFiles_ZH3l_${YEAR}_v6_STXS/plots_ZH3l_${YEAR}_v6_STXS.root"
    #mkDatacards.py --pycfg configuration.py --inputFile rootFiles_ZH3l_${YEAR}_v6_STXS/plots_ZH3l_${YEAR}_v6_STXS.root

    # Zero bins
    python /afs/cern.ch/user/d/dittmer/public/zeroBins.py

    # pruning datacard
    echo "  --> Pruning"
    find -L datacards_ZH3l_${YEAR}_v6_STXS -name 'datacard.txt' | while read line
    do 
	echo "python /afs/cern.ch/user/d/dittmer/private/Combine/ModificationDatacards/PruneDatacard.py -d $line -o $line.pruned.txt -i ${inputPRUNE} --suppressFluctuationError=1 -t 0.00001"
	python /afs/cern.ch/user/d/dittmer/private/Combine/ModificationDatacards/PruneDatacard.py -d $line -o $line.pruned.txt -i ${inputPRUNE} --suppressFluctuationError=1 -t 0.00001
    done
done
