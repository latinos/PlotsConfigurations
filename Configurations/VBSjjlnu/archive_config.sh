#!/bin/bash

if [[ -z $1 ]]; then
    echo "pass config name as argument to this script"
    exit 1
fi
config_name="0-"$1
if [[ ! -d ${config_name} ]]; then
    mkdir ${config_name}
fi

cp configuration.py cuts.py nuisances.py plot.py samples.py structure.py variables.py ${config_name}/     
