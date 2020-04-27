#!/bin/bash

set -e 

DIR=$PWD

#QUEUE="longlunch"
#QUEUE="workday"
QUEUE="tomorrow"

for year in Full2016nano_STXS_1p1 Full2017nano_STXS_1p1 Full2018nano_STXS_1p1
do
    echo " --> $year"
    cd $DIR; cd $year
    for region in OSSF SSSF
    do
	echo "  --> $region"
	echo "mkShapesMulti.py --pycfg=configuration_$region.py --doBatch=1 --batchSplit=Samples,Files --batchQueue=$QUEUE"
	mkShapesMulti.py --pycfg=configuration_$region.py --doBatch=1 --batchSplit=Samples,Files --batchQueue=$QUEUE
    done
done

condor_q
