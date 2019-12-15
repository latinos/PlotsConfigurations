#!/bin/bash

if [ -z $1 ]
    then
    echo "please specify relative path to hadded root files"
    exit 1
fi

mkPlot.py \
    --inputFile=$1 \
    --showIntegralLegend=1 \
    --minLogCratio=0.1 \
    --minLogC=0.1 \
    --logOnly \
    --onlyPlot=c
