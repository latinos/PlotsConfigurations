#!/bin/bash

set -e
set -x

if [[ -z $1 ]]; then
    echo "pass config name as argument to this script"
    exit 1
fi
config_name="0-"$1
if [[ ! -d ${config_name} ]]; then
    echo "Invalid config name. This config is not present in this directory"
    exit 1
fi

cp ${config_name}/configuration.py \
   ${config_name}/cuts.py \
   ${config_name}/nuisances.py \
   ${config_name}/plot.py \
   ${config_name}/samples.py \
   ${config_name}/structure.py \
   ${config_name}/variables.py \
   .
