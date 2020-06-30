#!/usr/bin/bash

mkShapes.py --pycfg=configuration_NobpogSF.py --inputDir=$PWD
mkShapes.py --pycfg=configuration_bpogSF.py --inputDir=$PWD
mkShapes.py --pycfg=configuration_bpogSFDown.py --inputDir=$PWD
mkShapes.py --pycfg=configuration_bpogSFUp.py --inputDir=$PWD
mkShapes.py --pycfg=configuration_bpogSF_scare.py --inputDir=$PWD
mkShapes.py --pycfg=configuration_bpogSF_scareDown.py --inputDir=$PWD
mkShapes.py --pycfg=configuration_bpogSF_scareUp.py --inputDir=$PWD
