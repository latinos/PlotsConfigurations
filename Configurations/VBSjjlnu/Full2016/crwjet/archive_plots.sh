#!/bin/bash

set -x

if [[ -z $1 ]]; then
    echo "pass config name as argument to this script"
    exit 1
fi
config_name=$1


# can be improved by making a function or an array. #nosbatti
if [[ -d rootFile ]]; then
    if [[ -d rootFile-${config_name} ]]; then
	echo "Override existing directory"
	rm -rf rootFile-${config_name}
    fi
    mv rootFile rootFile-${config_name}
fi

if [[ -d plotVBSjjlnu ]]; then
    if [[ -d plotVBSjjlnu && -d plotVBSjjlnu-${config_name} ]]; then
	echo "Override existing directory"
	rm -rf plotVBSjjlnu-${config_name}
    fi
    mv plotVBSjjlnu plotVBSjjlnu-${config_name}
    cp configuration.py cuts.py nuisances.py plot.py samples.py structure.py variables.py plotVBSjjlnu-${config_name}/
    cp -r datacards plotVBSjjlnu-${config_name}/
fi

if [[ -d datacards ]]; then
    if [[ -d datacards && -d datacards-${config_name} ]]; then
	echo "Override existing directory"
	rm -rf datacards-${config_name}
    fi
    mv datacards datacards-${config_name}
fi
