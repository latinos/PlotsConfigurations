#!/bin/bash

if [ -z $1 ]
    then
    echo "please specify relative path to hadded root files"
    exit 1
fi

mkDatacards.py --pycfg=configuration.py --inputFile=$1
