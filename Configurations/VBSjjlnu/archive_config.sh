#!/bin/bash

if [[ -z $1 ]]; then
    echo "pass config name as argument to this script"
    exit 1
fi
config_category=$1
config_name=$2
config_path=${config_category}/${config_name}
if [[ ! -d ${config_path} ]]; then
    mkdir -p ${config_path}
fi

cp configuration.py cuts.py nuisances.py plot.py samples.py structure.py variables.py ${config_path}/
