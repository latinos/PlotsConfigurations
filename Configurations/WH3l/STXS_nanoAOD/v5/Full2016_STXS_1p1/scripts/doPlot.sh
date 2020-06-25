#!/bin/bash

if [ -z $1 ]
    then
    echo "please specify relative path to hadded root files"
    exit 1
fi

tag=$(echo "$1" | awk -F '_' '{print $4}')

mkPlot.py \
    --inputFile=$1 \
    --pycfg=configuration_$tag.py \
    --showIntegralLegend=1 \
    --minLogCratio=0.1 \
    --minLogC=0.1 \
    --logOnly \
    --onlyPlot=c
