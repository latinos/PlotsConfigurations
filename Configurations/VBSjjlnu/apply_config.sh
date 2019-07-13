#!/bin/bash

set -e
set -x

if [[ -z $1 ]]; then
    echo "pass config name as argument to this script"
    exit 1
fi
config_category=$1
config_name=$2
config_path=${config_category}/${config_name}
if [[ ! -d ${config_path} ]]; then
    echo "Invalid config name. This config is not present in this directory"
    exit 1
fi

cp ${config_path}/configuration.py \
   ${config_path}/cuts.py \
   ${config_path}/nuisances.py \
   ${config_path}/plot.py \
   ${config_path}/samples.py \
   ${config_path}/structure.py \
   ${config_path}/variables.py \
   .
