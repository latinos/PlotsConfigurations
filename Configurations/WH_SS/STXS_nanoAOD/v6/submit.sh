#!/bin/bash

set -e 

DIR=$PWD

for year in Full2016nano_STXS_1p1 Full2017nano_STXS_1p1 Full2018nano_STXS_1p1
do
    echo " --> $year"
    cd $DIR; cd $year
    echo "mkShapesMulti.py --pycfg=configuration_$region.py --doBatch=1 --batchSplit=Samples,Files --batchQueue=longlunch"
    mkShapesMulti.py --pycfg=configuration.py --doBatch=1 --batchSplit=Samples,Files --batchQueue=longlunch
done

condor_q
