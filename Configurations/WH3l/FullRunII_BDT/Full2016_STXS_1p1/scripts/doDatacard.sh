#!/bin/bash

if [ -z $1 ]
    then
    echo "please specify relative path to hadded root files"
    exit 1
fi

tag=$(echo "$1" | awk -F '_' '{print $4}')

mkDatacards.py --pycfg=configuration_$tag.py --inputFile=$1
